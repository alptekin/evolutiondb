"""
Sync loop + CLI entry point.

Modes:
  --auth                — run device-code flow, cache the refresh token,
                          exit without syncing.
  --once                — pull every chat once and exit. Combine with
                          --since to bound how far back to walk on first
                          run; subsequent runs use the per-chat watermark
                          stored in EvolutionDB.
  --interval SECONDS    — daemon mode, loops forever.
  --since "1h" | "7d"   — first-run watermark (chat watermark in DB
                          wins on subsequent runs).
  --dry-run             — fetch from Graph but don't write to DB. Useful
                          for verifying auth + scopes.

Exit codes:
  0  success
  2  configuration error (missing AZURE_CLIENT_ID etc.)
  3  authentication failure
  4  graph / db error during sync
"""
from __future__ import annotations

import argparse
import os
import re
import signal
import sys
import time
from datetime import datetime, timedelta, timezone
from pathlib import Path
from typing import Dict, Optional

from . import auth as auth_mod
from . import graph as graph_mod
from . import state as state_mod


# ---------------------------------------------------------------- #
#  Config                                                           #
# ---------------------------------------------------------------- #
def _load_dotenv(path: Path) -> None:
    """Minimal .env loader — avoids pulling in python-dotenv for one file.
    Lines: KEY=VALUE, comments (#) and blanks ignored, no quoting magic.

    Rules:
      - Real shell environment always wins over the file (so callers can
        override per-invocation).
      - Within the file, the last non-empty assignment wins. That covers
        the common "I appended my real value below the placeholder"
        editing pattern without forcing the user to clean up dupes.
    """
    if not path.exists():
        return
    parsed: dict[str, str] = {}
    for raw in path.read_text(encoding="utf-8").splitlines():
        line = raw.strip()
        if not line or line.startswith("#") or "=" not in line:
            continue
        k, _, v = line.partition("=")
        k, v = k.strip(), v.strip().strip('"').strip("'")
        if not v:
            continue
        parsed[k] = v
    for k, v in parsed.items():
        os.environ.setdefault(k, v)


class Config:
    def __init__(self):
        self.tenant_id   = os.environ.get("AZURE_TENANT_ID", "common")
        self.client_id   = os.environ.get("AZURE_CLIENT_ID", "").strip()
        self.token_cache = os.environ.get(
            "TEAMS_TOKEN_CACHE", "~/.evosql/teams_token_cache.json")
        self.evosql_host = os.environ.get("EVOSQL_HOST", "127.0.0.1")
        self.evosql_port = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user = os.environ.get("EVOSQL_USER", "admin")
        self.evosql_pass = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db   = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id     = os.environ.get("MCP_USER_ID", "default_user")
        self.store       = os.environ.get("TEAMS_MEMORY_STORE", "mcp_mem")
        self.poll_secs   = int(os.environ.get("TEAMS_POLL_INTERVAL", "600"))


# ---------------------------------------------------------------- #
#  --since parser                                                   #
# ---------------------------------------------------------------- #
_SINCE_RE = re.compile(r"^\s*(\d+)\s*([smhdw])\s*$", re.I)


def parse_since(text: str) -> str:
    """Convert '1h' / '24h' / '7d' / '30m' to an ISO-8601 UTC timestamp.
    Used as the floor for the first sync of a chat that has no watermark
    in the database yet."""
    m = _SINCE_RE.match(text)
    if not m:
        raise ValueError(f"--since must be like '1h', '24h', '7d', got {text!r}")
    n, unit = int(m.group(1)), m.group(2).lower()
    delta = {
        "s": timedelta(seconds=n),
        "m": timedelta(minutes=n),
        "h": timedelta(hours=n),
        "d": timedelta(days=n),
        "w": timedelta(weeks=n),
    }[unit]
    return (datetime.now(timezone.utc) - delta).isoformat(
        timespec="seconds").replace("+00:00", "Z")


# ---------------------------------------------------------------- #
#  Sync passes                                                      #
# ---------------------------------------------------------------- #
def _build_message_record(chat: Dict, msg: Dict,
                          me_id: Optional[str] = None) -> Optional[Dict]:
    """Shape one Graph message into the JSON we persist. Returns None
    for system messages and empty bodies (no signal worth indexing).

    `me_id` is the signed-in user's AAD object id. Passing it lets
    1:1 chat_name resolve to the other participant instead of the
    chat's opaque id."""
    text = graph_mod.message_text(msg)
    if not text.strip():
        return None
    sender = graph_mod.message_sender(msg)
    text = graph_mod.strip_sender_prefix(text, sender["name"])
    fact = (f"{sender['name']}: {text}" if sender["name"] else text)
    chat_name = graph_mod.chat_display_name(chat, me_id)
    return {
        "fact":         fact,
        "source":       "teams",
        "kind":         "chat",
        "chat_id":      chat.get("id"),
        "chat_name":    chat_name,
        "chat_type":    chat.get("chatType"),
        "message_id":   msg.get("id"),
        "sender":       sender["name"],
        "sender_id":    sender["id"],
        "text":         text,
        "created_at":   msg.get("createdDateTime"),
        "modified_at": (msg.get("lastModifiedDateTime")
                        or msg.get("createdDateTime")),
        "tags":         ["teams", "chat", chat_name],
    }


def sync_once(cfg: Config, *, since_default: Optional[str],
              dry_run: bool = False) -> Dict[str, int]:
    """Single sync pass over every chat. Returns counters for the caller
    (and tests) to assert against."""
    auth = auth_mod.TeamsAuth(cfg.tenant_id, cfg.client_id, cfg.token_cache)
    graph = graph_mod.GraphClient(token_provider=auth.get_token)

    if dry_run:
        store = None
    else:
        store = state_mod.MemoryStore(
            host=cfg.evosql_host, port=cfg.evosql_port,
            user=cfg.evosql_user, password=cfg.evosql_pass,
            database=cfg.evosql_db, store=cfg.store,
            namespace=cfg.user_id,
        )

    me_id = (graph.get_me() or {}).get("id")

    counters = {"chats": 0, "messages": 0, "skipped": 0,
                "inaccessible_chats": 0}
    try:
        for chat in graph.list_chats():
            counters["chats"] += 1
            chat_id = chat.get("id")
            if not chat_id:
                continue

            watermark = (store.get_watermark(chat_id) if store
                         else None) or since_default
            highest_seen = watermark
            wrote = 0

            try:
                for msg in graph.get_chat_messages(chat_id,
                                                    since_iso=watermark):
                    rec = _build_message_record(chat, msg, me_id)
                    if not rec:
                        counters["skipped"] += 1
                        continue
                    if store:
                        key = (f"teams_chat_{chat_id}_"
                               f"{rec['message_id']}")
                        store.put_message(key, rec)
                    wrote += 1
                    if (rec["modified_at"] or "") > (highest_seen or ""):
                        highest_seen = rec["modified_at"]
            except graph_mod.GraphError as exc:
                # /me/chats sometimes returns chats the signed-in user
                # is not actually in (orphaned meeting chats, shared
                # channel proxies). Graph then 403s on the messages
                # endpoint with InsufficientPrivileges /
                # AclCheckFailed. 404s show up when a chat has been
                # deleted between list and read. Either way: skip the
                # chat, count it, keep going. Anything else (auth
                # failure, throttling spillover) propagates so the
                # caller can react.
                if exc.status in (403, 404):
                    counters["inaccessible_chats"] += 1
                    continue
                raise

            counters["messages"] += wrote
            if wrote and store and highest_seen and highest_seen != watermark:
                store.set_watermark(chat_id, highest_seen)

        return counters
    finally:
        graph.close()


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
def _build_argparser() -> argparse.ArgumentParser:
    p = argparse.ArgumentParser(
        prog="evosql-teams-sync",
        description="Stream Microsoft Teams chats into EvolutionDB memory.",
    )
    g = p.add_mutually_exclusive_group(required=True)
    g.add_argument("--auth", action="store_true",
                   help="Run device-code login and exit.")
    g.add_argument("--once", action="store_true",
                   help="Run a single sync pass and exit.")
    g.add_argument("--interval", type=int, metavar="SECONDS",
                   help="Daemon mode: sync every N seconds until killed.")
    p.add_argument("--since", default="24h",
                   help="First-run watermark, e.g. '1h', '7d'. Ignored "
                        "for chats that already have a stored watermark.")
    p.add_argument("--dry-run", action="store_true",
                   help="Talk to Graph but don't write to EvolutionDB.")
    p.add_argument("--env-file", default=".env",
                   help="Path to a dotenv file (default: ./.env).")
    return p


def _print_result(counters: Dict[str, int], *, dry_run: bool) -> None:
    label = "would write" if dry_run else "wrote"
    extra = ""
    if counters.get("inaccessible_chats"):
        extra = (f", {counters['inaccessible_chats']} chats inaccessible "
                 f"(403/404 — orphan or deleted)")
    print(f"[teams-sync] {label} {counters['messages']} messages "
          f"across {counters['chats']} chats "
          f"(skipped {counters['skipped']} system / empty{extra})",
          file=sys.stderr, flush=True)


def main(argv: Optional[list] = None) -> int:
    args = _build_argparser().parse_args(argv)

    _load_dotenv(Path(args.env_file))
    cfg = Config()

    try:
        since = parse_since(args.since)
    except ValueError as exc:
        print(f"[teams-sync] {exc}", file=sys.stderr)
        return 2

    if args.auth:
        try:
            tokens = auth_mod.TeamsAuth(cfg.tenant_id, cfg.client_id,
                                         cfg.token_cache)
            tokens.login_interactive()
            print("[teams-sync] login OK; refresh token cached at "
                  f"{cfg.token_cache}", file=sys.stderr)
            return 0
        except Exception as exc:
            print(f"[teams-sync] auth failed: {exc}", file=sys.stderr)
            return 3

    if not cfg.client_id:
        print("[teams-sync] AZURE_CLIENT_ID is required (see .env.example)",
              file=sys.stderr)
        return 2

    if args.once:
        try:
            counters = sync_once(cfg, since_default=since,
                                 dry_run=args.dry_run)
            _print_result(counters, dry_run=args.dry_run)
            return 0
        except Exception as exc:
            print(f"[teams-sync] sync failed: {exc}", file=sys.stderr)
            return 4

    # Daemon mode
    stop = {"flag": False}

    def _on_signal(signum, _frame):
        stop["flag"] = True
        print(f"[teams-sync] caught signal {signum}, exiting after "
              f"current pass", file=sys.stderr)

    signal.signal(signal.SIGINT, _on_signal)
    signal.signal(signal.SIGTERM, _on_signal)

    interval = max(60, int(args.interval))
    while not stop["flag"]:
        try:
            counters = sync_once(cfg, since_default=since,
                                 dry_run=args.dry_run)
            _print_result(counters, dry_run=args.dry_run)
        except Exception as exc:
            print(f"[teams-sync] sync error (will retry): {exc}",
                  file=sys.stderr)
        # Sleep in small chunks so SIGTERM lands fast.
        slept = 0
        while slept < interval and not stop["flag"]:
            time.sleep(min(2, interval - slept))
            slept += 2
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
