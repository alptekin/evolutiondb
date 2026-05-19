"""
Open a browser history SQLite store in read-only mode and yield
normalised visit records. Two on-disk schemas exist in the wild —
the Chromium family (Chrome, Edge, Brave, Arc, Vivaldi, Opera) and
Mozilla Firefox. Each gets its own SELECT; the records they
produce share a single shape so the sync loop downstream does not
care which browser they came from.

Locking
-------
A running browser holds an exclusive WAL lock on its History /
places.sqlite file. We snapshot to a temp file with `shutil.copy`
first; on Windows that step can race a busy browser and raise
`PermissionError`, in which case we fall back to SQLite's URI
`mode=ro&immutable=1` open which often succeeds on the original.
"""
from __future__ import annotations

import hashlib
import shutil
import sqlite3
import sys
import tempfile
from datetime import datetime, timedelta, timezone
from pathlib import Path
from typing import Dict, Iterator, Optional

from .scanner import CHROMIUM, FIREFOX, Profile


_CHROME_EPOCH = datetime(1601, 1, 1, tzinfo=timezone.utc)
_SKIP_PREFIXES = (
    "chrome://", "chrome-extension://", "chrome-search://",
    "chrome-untrusted://", "edge://", "extension://",
    "moz-extension://", "about:", "view-source:",
    "file://", "data:", "javascript:", "blob:",
)


# ---------------------------------------------------------------- #
#  Snapshot + connect                                               #
# ---------------------------------------------------------------- #
def _snapshot(src: Path) -> Path:
    tmp = Path(tempfile.mkstemp(suffix=".db",
                                   prefix="evosql-bs-")[1])
    try:
        shutil.copy(src, tmp)
        # WAL sidecars carry uncommitted history; copying them too
        # avoids "no such table: visits" on freshly-opened browsers.
        for sfx in ("-wal", "-shm"):
            side = src.parent / (src.name + sfx)
            if side.is_file():
                try:
                    shutil.copy(side, tmp.parent / (tmp.name + sfx))
                except OSError:
                    pass
        return tmp
    except PermissionError:
        # Windows + browser exclusively locked. Cleanup, signal
        # caller to fall back to URI immutable open of the original.
        try:
            tmp.unlink(missing_ok=True)
        except Exception:
            pass
        raise


def _connect(src: Path) -> sqlite3.Connection:
    try:
        snap = _snapshot(src)
        return sqlite3.connect(snap)
    except PermissionError:
        # Last-resort: read the live file in immutable mode. Will
        # surface uncommitted rows when -wal exists, but at least
        # surfaces something on busy Windows hosts.
        return sqlite3.connect(
            f"file:{src}?mode=ro&immutable=1", uri=True)


# ---------------------------------------------------------------- #
#  Timestamp normalisation                                          #
# ---------------------------------------------------------------- #
def _chrome_us_to_iso(us: int) -> Optional[str]:
    if not us or us < 0:
        return None
    try:
        dt = _CHROME_EPOCH + timedelta(microseconds=int(us))
        return dt.isoformat(timespec="seconds").replace("+00:00", "Z")
    except (OverflowError, OSError):
        return None


def _firefox_us_to_iso(us: int) -> Optional[str]:
    if not us or us < 0:
        return None
    try:
        dt = datetime.fromtimestamp(int(us) / 1_000_000,
                                       tz=timezone.utc)
        return dt.isoformat(timespec="seconds").replace("+00:00", "Z")
    except (OverflowError, OSError, ValueError):
        return None


# ---------------------------------------------------------------- #
#  Filtering                                                        #
# ---------------------------------------------------------------- #
def _keep(url: str) -> bool:
    if not url:
        return False
    lower = url.lower()
    if lower.startswith(_SKIP_PREFIXES):
        return False
    return True


# ---------------------------------------------------------------- #
#  Record builder                                                   #
# ---------------------------------------------------------------- #
def _short_url(url: str, n: int = 80) -> str:
    return url if len(url) <= n else url[: n - 1] + "…"


def _build_record(profile: Profile, url: str, title: str,
                    visit_count: int, last_iso: str) -> Dict:
    title = (title or "").strip() or "(no title)"
    fact = (f"Visited [{profile.browser}] \"{title}\" "
              f"({_short_url(url)}) — last on {last_iso}, "
              f"{visit_count} visit{'s' if visit_count != 1 else ''}")
    url_hash = hashlib.sha1(url.encode("utf-8")).hexdigest()[:16]
    return {
        "fact":            fact,
        "source":          "browser",
        "kind":            "visit",
        "browser":         profile.browser,
        "browser_family":  profile.family,
        "profile":         profile.profile_id,
        "url":             url,
        "title":           title,
        "visit_count":     int(visit_count or 0),
        "last_visited_at": last_iso,
        "url_hash":        url_hash,
        "tags":            ["browser", "history", profile.browser],
    }


# ---------------------------------------------------------------- #
#  Per-family SELECT                                                #
# ---------------------------------------------------------------- #
def _iter_chromium(profile: Profile,
                    since_iso: Optional[str]) -> Iterator[Dict]:
    """Chromium schema: `urls(url, title, visit_count,
    last_visit_time)`. `last_visit_time` is Chrome epoch
    microseconds since 1601."""
    conn = _connect(profile.history_path)
    try:
        try:
            cur = conn.execute(
                "SELECT url, title, visit_count, last_visit_time "
                "FROM urls WHERE last_visit_time > 0")
        except sqlite3.DatabaseError as exc:
            print(f"[browser-sync] {profile.profile_id} "
                  f"DB error: {exc}", file=sys.stderr, flush=True)
            return
        for url, title, visits, last in cur:
            if not _keep(url):
                continue
            iso = _chrome_us_to_iso(last)
            if iso is None:
                continue
            if since_iso and iso < since_iso:
                continue
            yield _build_record(profile, url, title, visits, iso)
    finally:
        conn.close()


def _iter_firefox(profile: Profile,
                    since_iso: Optional[str]) -> Iterator[Dict]:
    """Firefox schema: `moz_places(url, title, visit_count,
    last_visit_date)`. `last_visit_date` is Unix microseconds."""
    conn = _connect(profile.history_path)
    try:
        try:
            cur = conn.execute(
                "SELECT url, title, visit_count, last_visit_date "
                "FROM moz_places WHERE last_visit_date IS NOT NULL")
        except sqlite3.DatabaseError as exc:
            print(f"[browser-sync] {profile.profile_id} "
                  f"DB error: {exc}", file=sys.stderr, flush=True)
            return
        for url, title, visits, last in cur:
            if not _keep(url):
                continue
            iso = _firefox_us_to_iso(last)
            if iso is None:
                continue
            if since_iso and iso < since_iso:
                continue
            yield _build_record(profile, url, title, visits, iso)
    finally:
        conn.close()


def iter_visits(profile: Profile,
                 since_iso: Optional[str] = None) -> Iterator[Dict]:
    """Yield normalised visit records for a profile, optionally
    filtered to only the rows whose latest visit is after
    `since_iso` (a UTC ISO 8601 string)."""
    if profile.family == CHROMIUM:
        yield from _iter_chromium(profile, since_iso)
    elif profile.family == FIREFOX:
        yield from _iter_firefox(profile, since_iso)
