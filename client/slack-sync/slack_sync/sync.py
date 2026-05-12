"""
Slack → EvolutionDB sync loop.

Per pass:
  - list every conversation the token's user is in
  - for each: fetch history since the per-channel watermark (Slack ts)
  - for each parent message that has thread_ts == ts and reply_count > 0:
      walk conversations.replies to capture the thread
  - persist each message keyed `slack_msg_<channel>_<ts>` — deterministic
    so re-sync UPSERTS.
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
from . import state as state_mod


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
        self.token       = os.environ.get("SLACK_USER_TOKEN", "").strip()
        self.evosql_host = os.environ.get("EVOSQL_HOST", "127.0.0.1")
        self.evosql_port = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user = os.environ.get("EVOSQL_USER", "admin")
        self.evosql_pass = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db   = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id     = os.environ.get("MCP_USER_ID", "default_user")
        self.store       = os.environ.get("SLACK_MEMORY_STORE", "mcp_mem")
        self.poll_secs   = int(os.environ.get("SLACK_POLL_INTERVAL", "600"))


_SINCE_RE = re.compile(r"^\s*(\d+)\s*([smhdw])\s*$", re.I)


def parse_since(text: str) -> float:
    """Return a unix-seconds float to feed Slack's `oldest`."""
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
    return (datetime.now(timezone.utc) - delta).timestamp()


def _short(s: Optional[str], n: int = 4000) -> str:
    if not s:
        return ""
    s = s.strip()
    if len(s) <= n:
        return s
    return s[: n - 12].rstrip() + " …[clipped]"


def _build_record(msg: Dict, *, conv: Dict, conv_name: str,
                   sender_name: str, parent_ts: Optional[str] = None) -> Dict:
    text   = _short(msg.get("text"))
    fact = f"{sender_name or msg.get('user', '?')} in {conv_name}: {text[:300]}"
    rec: Dict = {
        "fact":         fact,
        "source":       "slack",
        "kind":         "thread_reply" if parent_ts else "message",
        "channel_id":   conv.get("id"),
        "channel_name": conv_name,
        "channel_type": (
            "im"   if conv.get("is_im")   else
            "mpim" if conv.get("is_mpim") else
            "private_channel" if conv.get("is_private") else
            "public_channel"),
        "ts":           msg.get("ts"),
        "thread_ts":    msg.get("thread_ts") or parent_ts,
        "sender_id":    msg.get("user"),
        "sender":       sender_name,
        "text":         text,
        "created_at":   _ts_to_iso(msg.get("ts")),
        "tags":         ["slack", conv_name],
    }
    if parent_ts:
        rec["tags"].append("thread")
    return rec


def _ts_to_iso(ts: Optional[str]) -> Optional[str]:
    if not ts:
        return None
    try:
        return datetime.fromtimestamp(float(ts), tz=timezone.utc) \
                       .isoformat(timespec="seconds") \
                       .replace("+00:00", "Z")
    except (TypeError, ValueError):
        return None


# ---------------------------------------------------------------- #
#  Sync                                                             #
# ---------------------------------------------------------------- #
def sync_once(cfg: Config, *, since_default: Optional[float],
              dry_run: bool = False) -> Dict[str, int]:
    if not cfg.token:
        raise RuntimeError("SLACK_USER_TOKEN is required")

    client = api_mod.SlackClient(cfg.token)

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

    counters = {"channels": 0, "messages": 0, "replies": 0,
                "skipped": 0, "errors": 0}

    for conv in client.list_conversations():
        counters["channels"] += 1
        ch_id = conv.get("id")
        if not ch_id:
            continue
        conv_name = api_mod.conversation_display_name(conv, client)

        wm = (store.get_watermark(ch_id) if store else None)
        oldest = float(wm) if wm else since_default

        highest = oldest or 0.0
        try:
            for msg in client.history(ch_id, oldest=oldest):
                if msg.get("subtype") in {"channel_join", "channel_leave",
                                            "bot_add", "bot_remove"}:
                    counters["skipped"] += 1
                    continue
                if not msg.get("text") and not msg.get("attachments"):
                    counters["skipped"] += 1
                    continue
                sender = client.user_name(msg.get("user", ""))
                rec = _build_record(msg, conv=conv,
                                      conv_name=conv_name,
                                      sender_name=sender)
                if store:
                    store.put_record(
                        f"slack_msg_{ch_id}_{msg['ts']}", rec)
                counters["messages"] += 1
                try:
                    highest = max(highest, float(msg.get("ts") or 0))
                except (TypeError, ValueError):
                    pass

                # If this is a parent thread message with replies,
                # walk them.
                if (msg.get("thread_ts") == msg.get("ts") and
                        int(msg.get("reply_count") or 0) > 0):
                    for reply in client.replies(ch_id, msg["ts"],
                                                  oldest=oldest):
                        rsender = client.user_name(reply.get("user", ""))
                        rrec = _build_record(reply, conv=conv,
                                              conv_name=conv_name,
                                              sender_name=rsender,
                                              parent_ts=msg["ts"])
                        if store:
                            store.put_record(
                                f"slack_msg_{ch_id}_{reply['ts']}", rrec)
                        counters["replies"] += 1
                        try:
                            highest = max(highest,
                                          float(reply.get("ts") or 0))
                        except (TypeError, ValueError):
                            pass
        except api_mod.SlackError as exc:
            # Common ones: not_in_channel, channel_not_found,
            # missing_scope. Log and move on.
            print(f"[slack-sync] {conv_name} ({ch_id}) failed: {exc}",
                  file=sys.stderr, flush=True)
            counters["errors"] += 1
            continue

        if store and highest > 0 and (not wm or highest > float(wm)):
            store.set_watermark(ch_id, f"{highest:.6f}")

    return counters


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
_stop = False


def _install_signal_handlers() -> None:
    def handler(_signo, _frame):
        global _stop
        _stop = True
        print("[slack-sync] stop requested, finishing current pass …",
              file=sys.stderr, flush=True)
    for s in (signal.SIGTERM, signal.SIGINT):
        signal.signal(s, handler)


def main(argv: Optional[list] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-slack-sync")
    parser.add_argument("--once",     action="store_true")
    parser.add_argument("--interval", type=int)
    parser.add_argument("--since",    default="3d")
    parser.add_argument("--dry-run",  action="store_true")
    parser.add_argument("--env-file", default=".env")
    args = parser.parse_args(argv)

    _load_dotenv(Path(args.env_file).expanduser())
    cfg = Config()

    try:
        since_default = parse_since(args.since)
    except ValueError as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 2

    if not cfg.token:
        print("error: SLACK_USER_TOKEN must be set", file=sys.stderr)
        return 2

    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, since_default=since_default,
                                dry_run=args.dry_run)
            print(json.dumps({"ok": True, **counts}), flush=True)
            return 0
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
