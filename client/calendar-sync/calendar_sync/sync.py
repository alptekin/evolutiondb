"""
Google Calendar → EvolutionDB sync loop.

Modes:
  --auth                — run consent flow and persist refresh token,
                          exit.
  --once                — one sync pass, exit.
  --interval SECONDS    — daemon mode.
  --since "30d"         — first-run wall-clock floor (Google's
                          updatedMin). Subsequent runs use the
                          syncToken Google handed us last time.
  --dry-run             — fetch but don't write.

For each calendar the user is in:
  - try the persisted syncToken first
  - on 410 Gone, clear the token and re-bootstrap from --since
  - persist nextSyncToken after every successful pass

A deleted event (status == cancelled, no updated content) prompts
a corresponding row deletion from the memory store so the search
results stay current.
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

# Optional PII protection — event summaries, descriptions, and the
# attendee list routinely contain emails, phone numbers, and other
# tokens worth keeping out of public-LLM context windows.
try:
    from evolutiondb_pii.integration import protect_record as _pii_protect
except ImportError:
    _pii_protect = None

_PII_FIELDS = ["fact", "summary", "description", "location",
                "organizer", "attendees"]


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
            "CALENDAR_TOKEN_CACHE", "~/.evosql/calendar_token.json")
        self.evosql_host   = os.environ.get("EVOSQL_HOST", "127.0.0.1")
        self.evosql_port   = int(os.environ.get("EVOSQL_PORT", "5433"))
        self.evosql_user   = os.environ.get("EVOSQL_USER", "admin")
        self.evosql_pass   = os.environ.get("EVOSQL_PASSWORD", "admin")
        self.evosql_db     = os.environ.get("EVOSQL_DATABASE", "evosql")
        self.user_id       = os.environ.get("MCP_USER_ID", "default_user")
        self.store         = os.environ.get("CALENDAR_MEMORY_STORE",
                                             "mcp_mem")
        self.poll_secs     = int(os.environ.get("CALENDAR_POLL_INTERVAL",
                                                  "900"))


_SINCE_RE = re.compile(r"^\s*(\d+)\s*([smhdw])\s*$", re.I)


def parse_since(text: str) -> str:
    m = _SINCE_RE.match(text)
    if not m:
        raise ValueError(f"--since must be like '1h', '30d', got {text!r}")
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


def _short(s: Optional[str], n: int = 1000) -> str:
    if not s:
        return ""
    s = s.strip()
    if len(s) <= n:
        return s
    return s[: n - 12].rstrip() + " …[clipped]"


def _event_when(event: Dict) -> Optional[str]:
    """Render the event time as a human-friendly string. Google
    represents all-day events with `date` (no time) and timed events
    with `dateTime` (RFC 3339)."""
    start = event.get("start") or {}
    if start.get("dateTime"):
        return start["dateTime"][:16].replace("T", " ")
    if start.get("date"):
        return start["date"]
    return None


def _build_event_record(event: Dict, calendar: Dict) -> Optional[Dict]:
    """Shape one Calendar event into the dict we persist. Returns
    None for cancelled events (the caller treats those as deletes)."""
    if event.get("status") == "cancelled":
        return None

    cal_name  = (calendar.get("summary")
                 or calendar.get("summaryOverride")
                 or calendar.get("id"))
    summary   = event.get("summary") or "(no title)"
    organizer = (event.get("organizer") or {}).get("email") \
                or (event.get("organizer") or {}).get("displayName") \
                or ""
    attendees = []
    for a in (event.get("attendees") or []):
        name = a.get("displayName") or a.get("email")
        if name:
            attendees.append(name)

    when_str = _event_when(event) or "—"
    fact = f"{summary} on {when_str} in {cal_name}"
    if organizer:
        fact = f"{organizer} set up {fact}"

    return {
        "fact":         fact,
        "source":       "gcal",
        "kind":         "event",
        "calendar_id":  calendar.get("id"),
        "calendar_name": cal_name,
        "event_id":     event.get("id"),
        "summary":      summary,
        "description":  _short(event.get("description")),
        "location":     event.get("location") or "",
        "organizer":    organizer,
        "attendees":    attendees,
        "start":        (event.get("start")  or {}).get("dateTime")
                          or (event.get("start") or {}).get("date"),
        "end":          (event.get("end")    or {}).get("dateTime")
                          or (event.get("end") or {}).get("date"),
        "all_day":      bool((event.get("start") or {}).get("date")),
        "status":       event.get("status") or "confirmed",
        "html_link":    event.get("htmlLink"),
        "created_at":   event.get("created"),
        "updated_at":   event.get("updated"),
        "tags":         ["gcal", "event", cal_name],
    }


# ---------------------------------------------------------------- #
#  Sync                                                             #
# ---------------------------------------------------------------- #
def sync_once(cfg: Config, *, since_iso: Optional[str],
              dry_run: bool = False) -> Dict[str, int]:
    if not cfg.client_id or not cfg.client_secret:
        raise RuntimeError(
            "GOOGLE_CLIENT_ID and GOOGLE_CLIENT_SECRET must be set")
    auth = auth_mod.GmailAuth(cfg.client_id, cfg.client_secret,
                              cfg.token_cache)
    client = api_mod.CalendarClient(token_provider=lambda:
        auth.ensure_token(interactive=False))

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

    counters = {"calendars": 0, "events": 0,
                 "deleted":   0, "skipped": 0,
                 "errors":   0}

    calendars = client.list_calendars()
    for calendar in calendars:
        counters["calendars"] += 1
        cal_id = calendar.get("id")
        if not cal_id:
            continue
        # Hidden / deleted calendars in the user's list — skip.
        if calendar.get("deleted") or calendar.get("hidden"):
            counters["skipped"] += 1
            continue

        sync_token = (store.get_sync_token(cal_id) if store else None)
        try:
            page = client.list_events(
                cal_id,
                sync_token=sync_token,
                updated_min_iso=None if sync_token else since_iso,
            )
        except api_mod.SyncTokenExpired:
            # 410 Gone — drop the stale token and bootstrap fresh.
            print(f"[calendar-sync] {cal_id}: syncToken expired, "
                  "doing full re-sync", file=sys.stderr, flush=True)
            if store:
                store.clear_sync_token(cal_id)
            try:
                page = client.list_events(
                    cal_id, sync_token=None,
                    updated_min_iso=since_iso)
            except api_mod.CalendarError as exc:
                print(f"[calendar-sync] {cal_id} re-sync failed: {exc}",
                      file=sys.stderr, flush=True)
                counters["errors"] += 1
                continue
        except api_mod.CalendarError as exc:
            print(f"[calendar-sync] {cal_id} failed: {exc}",
                  file=sys.stderr, flush=True)
            counters["errors"] += 1
            continue

        for event in page["events"]:
            event_id = event.get("id")
            if not event_id:
                counters["errors"] += 1
                continue
            key = f"gcal_event_{cal_id}_{event_id}"

            if event.get("status") == "cancelled":
                if store:
                    store.delete_record(key)
                counters["deleted"] += 1
                continue

            rec = _build_event_record(event, calendar)
            if not rec:
                counters["skipped"] += 1
                continue
            if store:
                rec, companions = _protect(rec, key)
                store.put_record(key, rec)
                for ck, cv in companions:
                    store.put_record(ck, cv)
            counters["events"] += 1

        if store and page.get("next_sync_token"):
            store.set_sync_token(cal_id, page["next_sync_token"])

    return counters


# ---------------------------------------------------------------- #
#  CLI                                                              #
# ---------------------------------------------------------------- #
_stop = False


def _install_signal_handlers() -> None:
    def handler(_signo, _frame):
        global _stop
        _stop = True
        print("[calendar-sync] stop requested, finishing pass …",
              file=sys.stderr, flush=True)
    for s in (signal.SIGTERM, signal.SIGINT):
        signal.signal(s, handler)


def main(argv: Optional[list] = None) -> int:
    parser = argparse.ArgumentParser(prog="evolutiondb-calendar-sync")
    parser.add_argument("--auth",     action="store_true",
                        help="Run consent flow and exit")
    parser.add_argument("--once",     action="store_true")
    parser.add_argument("--interval", type=int)
    # 30d hits Google Calendar's exact-30-day ceiling for
    # `updatedMin` + `showDeleted=true` and the API responds 410.
    # Step in one day to stay inside the supported window.
    parser.add_argument("--since",    default="29d")
    parser.add_argument("--dry-run",  action="store_true")
    parser.add_argument("--env-file", default=".env")
    args = parser.parse_args(argv)

    _load_dotenv(Path(args.env_file).expanduser())
    cfg = Config()

    if args.auth:
        try:
            a = auth_mod.GmailAuth(cfg.client_id, cfg.client_secret,
                                    cfg.token_cache)
            a.ensure_token(interactive=True)
            print("[calendar-sync] authentication cached at "
                  f"{cfg.token_cache}", file=sys.stderr, flush=True)
            return 0
        except auth_mod.AuthError as exc:
            print(f"error: {exc}", file=sys.stderr)
            return 3

    try:
        since_iso = parse_since(args.since)
    except ValueError as exc:
        print(f"error: {exc}", file=sys.stderr)
        return 2

    _install_signal_handlers()

    def run_pass() -> int:
        try:
            counts = sync_once(cfg, since_iso=since_iso,
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
