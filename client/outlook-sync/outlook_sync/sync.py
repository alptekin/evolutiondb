"""
Microsoft Outlook / Microsoft 365 → EvolutionDB sync loop.

Modes:
  --auth                — run device-code consent flow and persist
                          refresh token, exit.
  --once                — one sync pass, exit.
  --interval SECONDS    — daemon mode.
  --since "7d"          — first-run lookback window when nothing is
                          stored yet.
  --folder NAME         — restrict the pull to a single mail folder
                          by display name (Inbox, Sent Items, …).
  --dry-run             — fetch but don't write.

Watermark is the highest `receivedDateTime` (ISO 8601 UTC) we've
seen. Next pass filters Graph with `$filter=receivedDateTime gt …`.
"""
from __future__ import annotations

import argparse
import html
import json
import os
import re
import signal
import sys
import time
from datetime import datetime, timedelta, timezone
from pathlib import Path
from typing import Dict, Optional

from . import api as api_mod
from . import auth as auth_mod
from . import state as state_mod


# Stored mail bodies stay safely under the engine's 4 KB per-row
# ceiling (PR #240 made the limit honest; Task #233 will remove it).
# 3 000 chars + JSON envelope + SQL escape doubling fits comfortably.
_MAX_BODY_CHARS = 3000

_TAG_RE = re.compile(r"<[^>]+>")


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
        self.client_id   = os.environ.get("AZURE_CLIENT_ID", "").strip()
        self.tenant_id   = os.environ.get("AZURE_TENANT_ID", "").strip() \
            or auth_mod.DEFAULT_TENANT
        self.token_cache = os.environ.get(
            "OUTLOOK_TOKEN_CACHE", "~/.evosql/outlook_token.json")
        self.evosql_host = os.environ.get("EVOSQL_HOST",     "127.0.0.1")
        self.evosql_port = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user = os.environ.get("EVOSQL_USER",     "admin")
        self.evosql_pass = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db   = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id     = os.environ.get("MCP_USER_ID",
                                            "default_user")
        self.store       = os.environ.get("OUTLOOK_MEMORY_STORE",
                                            "mcp_mem")
        self.poll_secs   = int(os.environ.get("OUTLOOK_POLL_INTERVAL",
                                                "900"))


_SINCE_RE = re.compile(r"^\s*(\d+)\s*([smhdw])\s*$", re.I)


def parse_since(text: str) -> str:
    """Convert `7d` / `12h` etc. into a UTC ISO 8601 timestamp the
    Graph `$filter` clause can consume."""
    m = _SINCE_RE.match(text)
    if not m:
        raise ValueError(f"--since must be like '1h', '7d', got {text!r}")
    n, unit = int(m.group(1)), m.group(2).lower()
    delta = {
        "s": timedelta(seconds=n),
        "m": timedelta(minutes=n),
        "h": timedelta(hours=n),
        "d": timedelta(days=n),
        "w": timedelta(weeks=n),
    }[unit]
    floor = datetime.now(timezone.utc) - delta
    return floor.isoformat(timespec="seconds").replace("+00:00", "Z")


def _html_to_text(body: str) -> str:
    """Cheap HTML → text. Graph already strips formatting when we send
    `Prefer: outlook.body-content-type="text"`, but some senders embed
    raw HTML inside text/plain parts so we still defensively strip."""
    if not body:
        return ""
    s = _TAG_RE.sub(" ", body)
    s = html.unescape(s)
    s = re.sub(r"[ \t]+", " ", s)
    s = re.sub(r"\n[ \t]+", "\n", s)
    s = re.sub(r"\n{3,}", "\n\n", s)
    return s.strip()


def _short(s: Optional[str], n: int = 240) -> str:
    if not s:
        return ""
    s = s.strip()
    if len(s) <= n:
        return s
    return s[: n - 12].rstrip() + " …[clipped]"


def _build_record(msg: Dict, folder_lookup: Dict[str, str]) -> Optional[Dict]:
    """Turn a Graph message resource into the dict we persist."""
    msg_id  = msg.get("id")
    if not msg_id:
        return None

    subject = msg.get("subject") or "(no subject)"
    sender  = api_mod.addr_text(msg.get("from"))
    to      = api_mod.recipient_list(msg.get("toRecipients"))
    cc      = api_mod.recipient_list(msg.get("ccRecipients"))
    preview = _short(msg.get("bodyPreview"))

    body_raw = (msg.get("body") or {}).get("content") or ""
    body_text = _html_to_text(body_raw)
    truncated = False
    if len(body_text) > _MAX_BODY_CHARS:
        body_text = body_text[:_MAX_BODY_CHARS]
        truncated = True

    received_iso = msg.get("receivedDateTime") or ""
    folder_id    = msg.get("parentFolderId") or ""
    folder_name  = folder_lookup.get(folder_id, "")
    categories   = list(msg.get("categories") or [])
    importance   = (msg.get("importance") or "normal").lower()
    is_read      = bool(msg.get("isRead"))
    has_atts     = bool(msg.get("hasAttachments"))

    fact = f"Email from {sender}: {subject} — {preview}".strip()

    tags = ["outlook", "email"]
    if folder_name:
        tags.append(folder_name.lower().replace(" ", "_"))
    tags.extend(c.lower() for c in categories)
    if importance == "high":
        tags.append("important")
    if has_atts:
        tags.append("attachment")
    if not is_read:
        tags.append("unread")
    if truncated:
        tags.append("truncated")

    return {
        "fact":             fact,
        "source":           "outlook",
        "kind":             "email",
        "message_id":       msg_id,
        "internet_message_id": msg.get("internetMessageId", ""),
        "subject":          subject,
        "from":             sender,
        "to":               to,
        "cc":               cc,
        "snippet":          preview,
        "body":             body_text,
        "folder":           folder_name,
        "folder_id":        folder_id,
        "categories":       categories,
        "importance":       importance,
        "is_read":          is_read,
        "has_attachments":  has_atts,
        "received_at":      received_iso,
        "web_link":         msg.get("webLink", ""),
        "truncated":        truncated,
        "tags":             tags,
    }


# ---------------------------------------------------------------- #
#  Sync                                                             #
# ---------------------------------------------------------------- #
def sync_once(cfg: Config, *,
              since_iso: Optional[str],
              folder_name: Optional[str] = None,
              dry_run: bool = False) -> Dict[str, int]:
    if not cfg.client_id:
        raise RuntimeError("AZURE_CLIENT_ID must be set in .env")

    auth = auth_mod.OutlookAuth(cfg.client_id, cfg.tenant_id,
                                  cfg.token_cache)
    client = api_mod.OutlookClient(
        token_provider=lambda: auth.ensure_token(interactive=False))

    store: Optional[state_mod.MemoryStore]
    if dry_run:
        store = None
    else:
        store = state_mod.MemoryStore(
            host=cfg.evosql_host, port=cfg.evosql_port,
            user=cfg.evosql_user, password=cfg.evosql_pass,
            database=cfg.evosql_db, store=cfg.store,
            namespace=cfg.user_id,
        )

    # Resolve folder id → name once per pass. Cheap call; lets us
    # tag rows with the folder users actually see in Outlook
    # ("Inbox", "Sent Items", "Junk Email") rather than opaque IDs.
    folder_lookup: Dict[str, str] = {}
    folder_filter_id: Optional[str] = None
    try:
        for f in client.list_folders():
            fid, name = f.get("id"), f.get("displayName")
            if fid and name:
                folder_lookup[fid] = name
                if folder_name and name.lower() == folder_name.lower():
                    folder_filter_id = fid
    except api_mod.GraphError as exc:
        print(f"[outlook-sync] folder fetch failed: {exc}",
              file=sys.stderr, flush=True)

    if folder_name and not folder_filter_id:
        raise RuntimeError(
            f"folder {folder_name!r} not found in this mailbox")

    wm = (store.get_watermark_iso() if store else None)
    floor = wm or since_iso
    highest = floor or ""

    counters = {"messages": 0, "skipped": 0, "errors": 0}
    seen_ids: set = set()

    def _ingest(msg: Dict) -> None:
        """Common per-message handler. Used by both the cross-folder
        pass and the explicit SentItems pass; in-process `seen_ids`
        deduplicates so a message that surfaces from both passes only
        writes one row."""
        msg_id = msg.get("id")
        if not msg_id:
            counters["errors"] += 1
            return
        if msg_id in seen_ids:
            counters["skipped"] += 1
            return
        seen_ids.add(msg_id)
        if store and store.has_message(msg_id):
            counters["skipped"] += 1
            return
        rec = _build_record(msg, folder_lookup)
        if not rec:
            counters["skipped"] += 1
            return
        if store:
            try:
                store.put_record(f"outlook_msg_{msg_id}", rec)
            except Exception as exc:  # noqa: BLE001
                # One bad row should not abort the whole pass — log
                # and move on so the rest of the inbox still lands.
                print(f"[outlook-sync] write failed "
                      f"(subject={rec['subject'][:60]!r}): {exc}",
                      file=sys.stderr, flush=True)
                counters["errors"] += 1
                return
        counters["messages"] += 1
        nonlocal highest
        if rec["received_at"] > highest:
            highest = rec["received_at"]

    # Pass 1 — cross-folder /me/messages. Picks up inbox, junk, drafts,
    # and any Sent Items the cross-folder filter happens to bubble up.
    for msg in client.list_messages(received_after_iso=floor,
                                     folder_filter=folder_filter_id):
        _ingest(msg)

    # Pass 2 — well-known SentItems folder. Cross-folder /me/messages
    # consistently under-reports Sent (one digit returned on a full
    # mailbox), which made downstream "did I reply?" analysis useless.
    # The folder-scoped endpoint returns the full outbound history.
    # Skip when the user asked for a single specific folder via
    # --folder; the explicit filter takes precedence.
    if folder_filter_id is None:
        try:
            for msg in client.list_sent_messages(received_after_iso=floor):
                _ingest(msg)
        except api_mod.GraphError as exc:
            print(f"[outlook-sync] SentItems pass failed: {exc}",
                  file=sys.stderr, flush=True)
            counters["errors"] += 1

    if store and highest and highest != (wm or ""):
        store.set_watermark_iso(highest)
    return counters


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
_stop = False


def _install_signal_handlers() -> None:
    def handler(_signo, _frame):
        global _stop
        _stop = True
        print("[outlook-sync] stop requested, finishing current pass …",
              file=sys.stderr, flush=True)
    for s in (signal.SIGTERM, signal.SIGINT):
        try:
            signal.signal(s, handler)
        except (ValueError, OSError):
            pass


def main(argv: Optional[list] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-outlook-sync",
        description="Sync Microsoft Outlook / Microsoft 365 mail into "
                    "EvolutionDB.")
    parser.add_argument("--auth",     action="store_true",
        help="Run device-code consent flow and persist refresh token")
    parser.add_argument("--once",     action="store_true")
    parser.add_argument("--interval", type=int)
    parser.add_argument("--since",    default="7d",
        help="First-run lookback window (e.g. 1h, 7d, 2w)")
    parser.add_argument("--folder",   default="",
        help="Restrict to a single mail folder by display name")
    parser.add_argument("--dry-run",  action="store_true")
    parser.add_argument("--env-file", default=".env")
    args = parser.parse_args(argv)

    _load_dotenv(Path(args.env_file).expanduser())
    cfg = Config()

    if args.auth:
        try:
            a = auth_mod.OutlookAuth(cfg.client_id, cfg.tenant_id,
                                       cfg.token_cache)
            a.ensure_token(interactive=True)
            print(f"[outlook-sync] authentication cached at "
                  f"{cfg.token_cache}", file=sys.stderr, flush=True)
            return 0
        except auth_mod.AuthError as exc:
            print(f"error: {exc}", file=sys.stderr)
            return 3

    try:
        since_default = parse_since(args.since)
    except ValueError as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 2

    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, since_iso=since_default,
                                folder_name=(args.folder or None),
                                dry_run=args.dry_run)
            print(json.dumps({"ok": True, **counts}), flush=True)
            return 0
        except auth_mod.AuthError as exc:
            print(json.dumps({"ok": False, "error": str(exc),
                                "hint": "run with --auth"}), flush=True)
            return 3
        except Exception as exc:
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
