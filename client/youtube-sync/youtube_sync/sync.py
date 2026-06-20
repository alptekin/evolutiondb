"""evolutiondb-youtube-sync — pull subscriptions, playlists and
liked videos into EvolutionDB long-term memory.

Watch history itself is not in the public API since 2016; we cover
the next best signals — what channels you follow, what playlists
you own, what videos you liked."""
from __future__ import annotations

import argparse
import json
import os
import signal
import sys
import time
from datetime import datetime, timezone
from pathlib import Path
from typing import Dict, List, Optional

from . import api   as api_mod
from . import auth  as auth_mod
from . import state as state_mod

# Optional PII protection. YouTube data is mostly metadata
# (channel + video titles), but video descriptions and channel
# About sections can carry contact details — same masker, same
# transparent passthrough when no key is on disk.
try:
    from evolutiondb_pii.integration import protect_record as _pii_protect
except ImportError:
    _pii_protect = None

_PII_FIELDS = ["fact", "title", "description", "channel", "url"]


def _protect(rec, main_key):
    if _pii_protect is None:
        return rec, []
    return _pii_protect(rec, fields=_PII_FIELDS,
                        key_prefix=f"{main_key}_pii")


def _load_dotenv(path: Path) -> None:
    if not path.exists():
        return
    for raw in path.read_text(encoding="utf-8").splitlines():
        line = raw.strip()
        if not line or line.startswith("#") or "=" not in line:
            continue
        k, _, v = line.partition("=")
        k, v = k.strip(), v.strip().strip('"').strip("'")
        if v:
            os.environ.setdefault(k, v)


class Config:
    def __init__(self):
        self.client_id     = os.environ.get("GOOGLE_CLIENT_ID", "").strip()
        self.client_secret = os.environ.get("GOOGLE_CLIENT_SECRET", "").strip()
        self.token_cache   = os.environ.get(
            "YOUTUBE_TOKEN_CACHE", "~/.evosql/youtube_token.json")
        self.evosql_host = os.environ.get("EVOSQL_HOST",     "127.0.0.1")
        self.evosql_port = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user = os.environ.get("EVOSQL_USER",     "admin")
        self.evosql_pass = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db   = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id     = os.environ.get("MCP_USER_ID",
                                            "default_user")
        self.store       = os.environ.get("YOUTUBE_MEMORY_STORE",
                                            "mcp_mem")


def _now_iso() -> str:
    return datetime.now(timezone.utc).isoformat(
        timespec="seconds").replace("+00:00", "Z")


def _short(s: str, n: int = 240) -> str:
    s = (s or "").strip()
    return s if len(s) <= n else s[: n - 1] + "…"


# ---------- subscription ----------
def _sub_record(it: Dict) -> Optional[Dict]:
    snip = it.get("snippet") or {}
    channel_id = (snip.get("resourceId") or {}).get("channelId")
    if not channel_id:
        return None
    title = (snip.get("title") or "").strip() or "(unknown channel)"
    desc  = snip.get("description") or ""
    return {
        "fact":         f"Subscribed to YouTube channel \"{title}\"",
        "source":       "youtube",
        "kind":         "subscription",
        "title":        title,
        "channel_id":   channel_id,
        "description":  _short(desc, 400),
        "url":          f"https://www.youtube.com/channel/{channel_id}",
        "modified_at":  snip.get("publishedAt") or _now_iso(),
        "tags":         ["youtube", "subscription", "channel"],
    }


def _sub_key(rec: Dict) -> str:
    return f"youtube_sub_{rec['channel_id']}"


# ---------- playlist ----------
def _playlist_record(it: Dict) -> Optional[Dict]:
    snip = it.get("snippet") or {}
    pl_id = it.get("id")
    if not pl_id:
        return None
    title = (snip.get("title") or "").strip() or "(unnamed playlist)"
    return {
        "fact":         (f"YouTube playlist \"{title}\" "
                          f"({(it.get('contentDetails') or {}).get('itemCount', '?')} items)"),
        "source":       "youtube",
        "kind":         "playlist",
        "title":        title,
        "playlist_id":  pl_id,
        "item_count":   (it.get("contentDetails") or {}).get("itemCount"),
        "url":          f"https://www.youtube.com/playlist?list={pl_id}",
        "modified_at":  snip.get("publishedAt") or _now_iso(),
        "tags":         ["youtube", "playlist"],
    }


def _playlist_key(rec: Dict) -> str:
    return f"youtube_playlist_{rec['playlist_id']}"


# ---------- liked video ----------
def _liked_record(it: Dict) -> Optional[Dict]:
    snip = it.get("snippet") or {}
    cd   = it.get("contentDetails") or {}
    video_id = cd.get("videoId") or (snip.get("resourceId") or {}).get("videoId")
    if not video_id:
        return None
    title = (snip.get("title") or "").strip() or "(no title)"
    channel = snip.get("videoOwnerChannelTitle") or snip.get("channelTitle") or ""
    desc = snip.get("description") or ""
    published = cd.get("videoPublishedAt") or snip.get("publishedAt") or _now_iso()
    return {
        "fact":         (f"Liked YouTube video \"{title}\""
                          f"{' by ' + channel if channel else ''}"),
        "source":       "youtube",
        "kind":         "video",
        "title":        title,
        "video_id":     video_id,
        "channel":      channel,
        "description":  _short(desc, 400),
        "url":          f"https://www.youtube.com/watch?v={video_id}",
        "modified_at":  snip.get("publishedAt") or _now_iso(),
        "published_at": published,
        "tags":         ["youtube", "video", "liked"],
    }


def _liked_key(rec: Dict) -> str:
    return f"youtube_liked_{rec['video_id']}"


# ---------- driver ----------
def sync_once(cfg: Config, *,
                dry_run: bool = False,
                interactive: bool = False) -> Dict[str, int]:
    if not cfg.client_id or not cfg.client_secret:
        raise RuntimeError(
            "GOOGLE_CLIENT_ID and GOOGLE_CLIENT_SECRET must be set "
            "(same client as gmail-sync; add `youtube.readonly` "
            "scope to your OAuth consent screen).")

    auth = auth_mod.YouTubeAuth(cfg.client_id, cfg.client_secret,
                                  cfg.token_cache, namespace=cfg.user_id)
    client = api_mod.YouTubeClient(
        token_provider=lambda: auth.ensure_token(interactive=interactive))

    store: Optional[state_mod.MemoryStore] = None
    if not dry_run:
        store = state_mod.MemoryStore(
            host=cfg.evosql_host, port=cfg.evosql_port,
            user=cfg.evosql_user, password=cfg.evosql_pass,
            database=cfg.evosql_db, store=cfg.store,
            namespace=cfg.user_id,
        )

    counters = {"subscriptions": 0, "playlists": 0,
                 "liked_videos":  0, "errors": 0}

    def _drain(iterator, build, key_fn, label: str):
        try:
            for it in iterator:
                rec = build(it)
                if not rec:
                    continue
                if store:
                    main_key = key_fn(rec)
                    rec, companions = _protect(rec, main_key)
                    store.put_record(main_key, rec)
                    for ck, cv in companions:
                        store.put_record(ck, cv)
                counters[label] += 1
        except Exception as exc:  # noqa: BLE001
            print(f"[youtube-sync] {label} fetch failed: {exc}",
                  file=sys.stderr, flush=True)
            counters["errors"] += 1

    _drain(client.subscriptions(), _sub_record,
           _sub_key,      "subscriptions")
    _drain(client.playlists(),     _playlist_record,
           _playlist_key, "playlists")
    _drain(client.liked_videos(),  _liked_record,
           _liked_key,    "liked_videos")

    if store:
        store.set_watermark_iso("last_sync", _now_iso())
    return counters


_stop = False


def _install_signal_handlers() -> None:
    def _handler(_signum, _frame):
        global _stop
        _stop = True
        print("[youtube-sync] stop requested",
              file=sys.stderr, flush=True)
    for s in (signal.SIGTERM, signal.SIGINT):
        try:
            signal.signal(s, _handler)
        except (ValueError, OSError):
            pass


def main(argv: Optional[List[str]] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-youtube-sync",
        description="Sync YouTube channels + playlists + liked "
                    "videos into EvolutionDB.")
    parser.add_argument("--auth",     action="store_true",
        help="Run the consent flow once and cache a refresh token.")
    parser.add_argument("--once",     action="store_true")
    parser.add_argument("--interval", type=int)
    parser.add_argument("--dry-run",  action="store_true")
    parser.add_argument("--env-file", default=".env")
    args = parser.parse_args(argv)

    _load_dotenv(Path(args.env_file).expanduser())
    cfg = Config()

    if args.auth:
        if not cfg.client_id or not cfg.client_secret:
            print("error: GOOGLE_CLIENT_ID and GOOGLE_CLIENT_SECRET "
                  "are required for --auth", file=sys.stderr)
            return 2
        a = auth_mod.YouTubeAuth(cfg.client_id, cfg.client_secret,
                                   cfg.token_cache, namespace=cfg.user_id)
        try:
            a.ensure_token(interactive=True)
        except auth_mod.AuthError as exc:
            print(json.dumps({"ok": False, "error": str(exc)}),
                  flush=True)
            return 3
        print(json.dumps({"ok": True,
                           "token_cache": cfg.token_cache}),
              flush=True)
        return 0

    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, dry_run=args.dry_run,
                                 interactive=False)
            print(json.dumps({"ok": True, **counts}), flush=True)
            return 0
        except auth_mod.AuthError as exc:
            print(json.dumps({"ok": False, "error": str(exc),
                                "hint": "run with --auth"}),
                  flush=True)
            return 3
        except Exception as exc:  # noqa: BLE001
            print(json.dumps({"ok": False, "error": str(exc)}),
                  flush=True)
            return 4

    if args.once or not args.interval:
        return run_pass()

    interval = max(60, int(args.interval))
    rc = 0
    while not _stop:
        rc = run_pass()
        for _ in range(interval):
            if _stop:
                break
            time.sleep(1)
    return rc
