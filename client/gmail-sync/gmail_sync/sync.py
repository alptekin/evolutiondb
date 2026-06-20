"""
Gmail → EvolutionDB sync loop.

Modes:
  --auth                — run consent flow and persist refresh token, exit.
  --once                — one sync pass, exit.
  --interval SECONDS    — daemon mode.
  --since "7d"          — first-run watermark when there's nothing
                          in the database yet.
  --query "STR"         — extra Gmail search syntax appended to the
                          built-in `after:DATE` filter (e.g.
                          `-category:promotions`).
  --dry-run             — fetch but don't write.

The Gmail watermark is `internalDate` (unix millis, server-side).
We persist the highest one we've seen so next pass uses
`after:<epoch-seconds>` as the floor.
"""
from __future__ import annotations

import argparse
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

# Optional PII protection — masks email addresses, credit cards, and
# the rest of the rule set in subject / from / to / cc / snippet
# before MEMORY PUT. Transparent passthrough without a public key.
try:
    from evolutiondb_pii.integration import protect_record as _pii_protect
except ImportError:
    _pii_protect = None

_PII_FIELDS = ["fact", "subject", "from", "to", "cc", "snippet",
                "rfc_message_id"]


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
            "GMAIL_TOKEN_CACHE", "~/.evosql/gmail_token.json")
        self.evosql_host   = os.environ.get("EVOSQL_HOST", "127.0.0.1")
        self.evosql_port   = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user   = os.environ.get("EVOSQL_USER", "admin")
        self.evosql_pass   = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db     = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id       = os.environ.get("MCP_USER_ID", "default_user")
        self.store         = os.environ.get("GMAIL_MEMORY_STORE", "mcp_mem")
        self.poll_secs     = int(os.environ.get("GMAIL_POLL_INTERVAL", "900"))


_SINCE_RE = re.compile(r"^\s*(\d+)\s*([smhdw])\s*$", re.I)


def parse_since(text: str) -> int:
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
    # Gmail's `after:` query operator takes unix seconds.
    return int((datetime.now(timezone.utc) - delta).timestamp())


def _short(s: Optional[str], n: int = 1000) -> str:
    if not s:
        return ""
    s = s.strip()
    if len(s) <= n:
        return s
    return s[: n - 12].rstrip() + " …[clipped]"


def _build_record(meta: Dict, label_lookup: Dict[str, str]) -> Optional[Dict]:
    """Turn a Gmail metadata payload into the dict we persist."""
    payload = meta.get("payload") or {}
    headers = api_mod.headers_to_dict(payload.get("headers") or [])
    if not headers:
        return None
    subject = headers.get("Subject", "")
    sender  = headers.get("From", "")
    snippet = _short(meta.get("snippet"))
    fact = f"Email from {sender}: {subject} — {snippet}".strip()

    internal_ms = int(meta.get("internalDate") or 0)
    sent_iso = (datetime.fromtimestamp(internal_ms / 1000.0,
                                          tz=timezone.utc)
                       .isoformat(timespec="seconds")
                       .replace("+00:00", "Z")
                if internal_ms else None)

    label_ids = meta.get("labelIds") or []
    labels    = [label_lookup.get(lid, lid) for lid in label_ids]

    return {
        "fact":        fact,
        "source":      "gmail",
        "kind":        "email",
        "message_id":  meta.get("id"),
        "thread_id":   meta.get("threadId"),
        "subject":     subject,
        "from":        sender,
        "to":          headers.get("To", ""),
        "cc":          headers.get("Cc", ""),
        "rfc_message_id": headers.get("Message-ID", ""),
        "snippet":     snippet,
        "labels":      labels,
        "internal_date_ms": internal_ms,
        "sent_at":     sent_iso,
        "tags":        ["gmail", "email"] + labels,
    }


# ---------------------------------------------------------------- #
#  Sync                                                             #
# ---------------------------------------------------------------- #
def sync_once(cfg: Config, *,
              since_seconds: Optional[int],
              extra_query: str = "",
              dry_run: bool = False) -> Dict[str, int]:
    if not cfg.client_id or not cfg.client_secret:
        raise RuntimeError(
            "GOOGLE_CLIENT_ID and GOOGLE_CLIENT_SECRET must be set")
    auth = auth_mod.GmailAuth(cfg.client_id, cfg.client_secret,
                              cfg.token_cache, namespace=cfg.user_id)

    # Non-interactive in the sync loop — assume --auth has already
    # been run. The auth module raises a clear AuthError otherwise.
    client = api_mod.GmailClient(token_provider=lambda: auth.ensure_token(
        interactive=False))

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

    # Resolve user label IDs once per pass — system labels (INBOX,
    # SENT, etc) come pre-cached.
    label_lookup: Dict[str, str] = {}
    try:
        for lab in client.list_labels():
            label_lookup[lab["id"]] = lab.get("name", lab["id"])
    except api_mod.GmailError as exc:
        print(f"[gmail-sync] label fetch failed: {exc}",
              file=sys.stderr, flush=True)

    # Build the search query.
    wm_ms = (store.get_watermark_ms() if store else None)
    if wm_ms:
        after_seconds = int(wm_ms / 1000)
    else:
        after_seconds = since_seconds or 0
    q_parts = []
    if after_seconds > 0:
        q_parts.append(f"after:{after_seconds}")
    if extra_query.strip():
        q_parts.append(extra_query.strip())
    q = " ".join(q_parts) or "newer_than:30d"

    counters = {"messages": 0, "skipped": 0, "errors": 0}
    highest_ms = wm_ms or 0

    for stub in client.list_messages(q):
        msg_id = stub.get("id")
        if not msg_id:
            counters["errors"] += 1
            continue
        if store and store.has_message(msg_id):
            counters["skipped"] += 1
            continue
        try:
            meta = client.get_message_metadata(msg_id)
        except api_mod.GmailError as exc:
            print(f"[gmail-sync] {msg_id} fetch failed: {exc}",
                  file=sys.stderr, flush=True)
            counters["errors"] += 1
            continue

        rec = _build_record(meta, label_lookup)
        if not rec:
            counters["skipped"] += 1
            continue
        if store:
            main_key = f"gmail_msg_{msg_id}"
            rec, companions = _protect(rec, main_key)
            store.put_record(main_key, rec)
            for ck, cv in companions:
                store.put_record(ck, cv)
        counters["messages"] += 1
        if rec["internal_date_ms"] > highest_ms:
            highest_ms = rec["internal_date_ms"]

    if store and highest_ms > (wm_ms or 0):
        store.set_watermark_ms(highest_ms)

    return counters


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
_stop = False


def _install_signal_handlers() -> None:
    def handler(_signo, _frame):
        global _stop
        _stop = True
        print("[gmail-sync] stop requested, finishing current pass …",
              file=sys.stderr, flush=True)
    for s in (signal.SIGTERM, signal.SIGINT):
        signal.signal(s, handler)


def main(argv: Optional[list] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-gmail-sync")
    parser.add_argument("--auth",     action="store_true",
                        help="Run consent flow and exit")
    parser.add_argument("--once",     action="store_true")
    parser.add_argument("--interval", type=int)
    parser.add_argument("--since",    default="7d")
    parser.add_argument("--query",    default="",
                        help="Extra Gmail search syntax appended to "
                             "the built-in `after:` filter")
    parser.add_argument("--dry-run",  action="store_true")
    parser.add_argument("--env-file", default=".env")
    args = parser.parse_args(argv)

    _load_dotenv(Path(args.env_file).expanduser())
    cfg = Config()

    if args.auth:
        try:
            authmod = auth_mod.GmailAuth(cfg.client_id, cfg.client_secret,
                                          cfg.token_cache, namespace=cfg.user_id)
            authmod.ensure_token(interactive=True)
            print("[gmail-sync] authentication cached at "
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
            counts = sync_once(cfg, since_seconds=since_default,
                                extra_query=args.query,
                                dry_run=args.dry_run)
            print(json.dumps({"ok": True, **counts}), flush=True)
            return 0
        except auth_mod.AuthError as exc:
            print(json.dumps({"ok": False, "error": str(exc),
                                "hint": "run with --auth"}), flush=True)
            return 3
        except Exception as exc:
            print(json.dumps({"ok": False, "error": str(exc)}), flush=True)
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
