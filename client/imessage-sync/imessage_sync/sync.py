"""evolutiondb-imessage-sync — read macOS chat.db incrementally and
write iMessage / SMS records to EvolutionDB long-term memory."""
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
from typing import List, Optional

from . import extract as ext_mod
from . import state   as state_mod


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
        self.evosql_host = os.environ.get("EVOSQL_HOST",     "127.0.0.1")
        self.evosql_port = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user = os.environ.get("EVOSQL_USER",     "admin")
        self.evosql_pass = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db   = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id     = os.environ.get("MCP_USER_ID",
                                            "default_user")
        self.store       = os.environ.get("IMESSAGE_MEMORY_STORE",
                                            "mcp_mem")
        self.poll_secs   = int(os.environ.get("IMESSAGE_POLL_INTERVAL",
                                                "600"))


_SINCE_RE = re.compile(r"^\s*(\d+)\s*([smhdw])\s*$", re.I)


def parse_since(text: str) -> int:
    """Return an Apple-epoch nanoseconds value for `text` like
    '7d'. Apple counts from 2001-01-01 UTC."""
    m = _SINCE_RE.match(text)
    if not m:
        raise ValueError(
            f"--since must be like '1h', '7d', got {text!r}")
    n, unit = int(m.group(1)), m.group(2).lower()
    delta = {
        "s": timedelta(seconds=n),
        "m": timedelta(minutes=n),
        "h": timedelta(hours=n),
        "d": timedelta(days=n),
        "w": timedelta(weeks=n),
    }[unit]
    since = datetime.now(timezone.utc) - delta
    apple_epoch = datetime(2001, 1, 1, tzinfo=timezone.utc)
    return int((since - apple_epoch).total_seconds() * 1e9)


def _msg_key(record: dict) -> str:
    apple_date = record.get("apple_date") or 0
    is_from_me = 1 if record.get("is_from_me") else 0
    handle = (record.get("handle") or "").replace(" ", "")
    chat_id = (record.get("chat_id") or "").replace(" ", "")
    return f"imessage_{apple_date}_{is_from_me}_{handle}_{chat_id}"


def sync_once(cfg: Config, *, since_ns_floor: int,
                dry_run: bool = False) -> dict:
    counters = {"messages": 0, "errors": 0}

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

    wm = (store.get_watermark() if store else None)
    floor = wm if wm is not None else since_ns_floor
    highest = floor

    try:
        for record in ext_mod.iter_messages(since_apple_date=floor):
            ad = int(record.get("apple_date") or 0)
            if ad <= floor:
                continue
            key = _msg_key(record)
            if store:
                store.put_record(key, record)
            counters["messages"] += 1
            if ad > highest:
                highest = ad
    except Exception as exc:  # noqa: BLE001
        print(f"[imessage-sync] read failed: {exc}",
              file=sys.stderr, flush=True)
        counters["errors"] += 1

    if store and highest > (wm or 0):
        store.set_watermark(highest)
    return counters


_stop = False


def _install_signal_handlers() -> None:
    def _handler(_signum, _frame):
        global _stop
        _stop = True
        print("[imessage-sync] stop requested",
              file=sys.stderr, flush=True)
    for s in (signal.SIGTERM, signal.SIGINT):
        try:
            signal.signal(s, _handler)
        except (ValueError, OSError):
            pass


def main(argv: Optional[List[str]] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-imessage-sync",
        description="Sync macOS iMessage / SMS into EvolutionDB.")
    parser.add_argument("--once",     action="store_true")
    parser.add_argument("--interval", type=int)
    parser.add_argument("--since",    default="30d")
    parser.add_argument("--dry-run",  action="store_true")
    parser.add_argument("--env-file", default=".env")
    args = parser.parse_args(argv)

    _load_dotenv(Path(args.env_file).expanduser())

    try:
        since_ns = parse_since(args.since)
    except ValueError as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 2

    cfg = Config()
    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, since_ns_floor=since_ns,
                                 dry_run=args.dry_run)
            print(json.dumps({"ok": True, **counts}), flush=True)
            return 0
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
