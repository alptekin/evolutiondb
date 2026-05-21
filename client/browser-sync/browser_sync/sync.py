"""
evolutiondb-browser-sync — daemon that snapshots local browser
history and pours visit records into the evolutiondb-memory store.

Modes
-----
  --once               one sync pass over every discovered profile,
                       then exit.
  --interval SECONDS   daemon mode. Each pass is incremental.
  --since "30d"        first-run wall-clock floor when the profile
                       has no stored watermark.
  --browser chrome,edge,firefox
                       restrict to a subset of browsers.
  --dry-run            do everything except write to memory.

No --auth subcommand exists. Browser history lives in files the
user already owns, so there is no OAuth flow to start.
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
from typing import Dict, List, Optional

from . import scanner as scan_mod
from . import extract as ext_mod
from . import state   as state_mod

# Optional PII protection. URLs and titles can contain emails (login
# pages), session tokens (query strings), and customer names — the
# masker scrubs them before MEMORY PUT when a key file is present.
try:
    from evolutiondb_pii.integration import protect_record as _pii_protect
except ImportError:
    _pii_protect = None

_PII_FIELDS = ["fact", "title", "url"]


def _protect(rec, main_key):
    if _pii_protect is None:
        return rec, []
    return _pii_protect(rec, fields=_PII_FIELDS,
                        key_prefix=f"{main_key}_pii")


# ---------------------------------------------------------------- #
#  Config + .env loader (same shape as sibling syncs)               #
# ---------------------------------------------------------------- #
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
        self.store       = os.environ.get("BROWSER_MEMORY_STORE",
                                            "mcp_mem")
        self.poll_secs   = int(os.environ.get("BROWSER_POLL_INTERVAL",
                                                "1800"))


_SINCE_RE = re.compile(r"^\s*(\d+)\s*([smhdw])\s*$", re.I)


def parse_since(text: str) -> str:
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
    return (datetime.now(timezone.utc) - delta).isoformat(
        timespec="seconds").replace("+00:00", "Z")


# ---------------------------------------------------------------- #
#  Pass                                                             #
# ---------------------------------------------------------------- #
def _record_key(record: Dict) -> str:
    """Stable per (browser, profile, url) key so re-syncing the same
    URL upserts the watermark / visit_count instead of multiplying
    rows in the memory store."""
    profile_slug = (record["profile"]
                    .replace("/", "_").replace(" ", "_"))
    return (f"browser_visit_{record['browser']}_"
              f"{profile_slug}_{record['url_hash']}")


def sync_once(cfg: Config, *, since_iso: Optional[str],
                browser_filter: Optional[List[str]],
                dry_run: bool = False) -> Dict[str, int]:
    profiles = scan_mod.discover_profiles(browser_filter)
    counters = {"profiles": 0, "visits": 0,
                 "skipped":  0, "errors": 0}

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

    for prof in profiles:
        counters["profiles"] += 1
        wm = (store.get_watermark_iso(prof.profile_id)
              if store else None)
        floor = wm or since_iso
        latest = floor or ""
        try:
            for record in ext_mod.iter_visits(prof, since_iso=floor):
                key = _record_key(record)
                if store:
                    record, companions = _protect(record, key)
                    store.put_record(key, record)
                    for ck, cv in companions:
                        store.put_record(ck, cv)
                counters["visits"] += 1
                if record["last_visited_at"] > latest:
                    latest = record["last_visited_at"]
        except Exception as exc:  # noqa: BLE001
            print(f"[browser-sync] {prof.profile_id} failed: {exc}",
                  file=sys.stderr, flush=True)
            counters["errors"] += 1
            continue
        if store and latest and latest != (wm or ""):
            store.set_watermark_iso(prof.profile_id, latest)

    return counters


# ---------------------------------------------------------------- #
#  Signals                                                          #
# ---------------------------------------------------------------- #
_stop = False


def _install_signal_handlers() -> None:
    def _handler(_signum, _frame):
        global _stop
        _stop = True
        print("[browser-sync] stop requested, finishing current pass",
              file=sys.stderr, flush=True)
    for s in (signal.SIGTERM, signal.SIGINT):
        try:
            signal.signal(s, _handler)
        except (ValueError, OSError):
            pass


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
def main(argv: Optional[List[str]] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-browser-sync",
        description="Sync browser history into EvolutionDB memory.")
    parser.add_argument("--once",     action="store_true")
    parser.add_argument("--interval", type=int)
    parser.add_argument("--since",    default="7d")
    parser.add_argument("--browser",  default="",
        help="Comma list (chrome,edge,firefox,brave,arc,vivaldi,"
             "opera). Empty means every detected browser.")
    parser.add_argument("--list",     action="store_true",
        help="Print every detected profile and exit.")
    parser.add_argument("--dry-run",  action="store_true")
    parser.add_argument("--env-file", default=".env")
    args = parser.parse_args(argv)

    _load_dotenv(Path(args.env_file).expanduser())

    browser_filter = (
        [b for b in args.browser.split(",") if b.strip()]
        if args.browser else None)

    if args.list:
        profiles = scan_mod.discover_profiles(browser_filter)
        for p in profiles:
            print(f"{p.browser:10s} {p.profile_id:40s} "
                  f"{p.history_path}")
        if not profiles:
            print("(no profiles detected)")
        return 0

    try:
        since_iso = parse_since(args.since)
    except ValueError as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 2

    cfg = Config()
    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, since_iso=since_iso,
                                 browser_filter=browser_filter,
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
