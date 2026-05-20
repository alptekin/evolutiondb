"""
Read the macOS `chat.db` (iMessage + SMS) and yield normalised
message records.

Locking
-------
Messages.app holds an exclusive WAL lock. We snapshot the db to a
temp file with `shutil.copy` first; the -wal and -shm sidecars are
copied alongside so uncommitted rows are visible.

Schema
------
  message       ROWID, text, attributedBody, handle_id, date, is_from_me, service
  handle        ROWID, id (phone or email), service
  chat          ROWID, chat_identifier, display_name, service_name
  chat_message_join   chat_id, message_id

`message.date` is nanoseconds since 2001-01-01 UTC on macOS 10.13+
(seconds × 1e9 on older releases — guard by magnitude).

`text` is plain. On macOS 11+ many newer messages store the body
inside `attributedBody` (binary NSAttributedString plist) and leave
`text` NULL. We surface those as `(rich message)` with the chat /
sender metadata intact instead of dropping the row.
"""
from __future__ import annotations

import shutil
import sqlite3
import sys
import tempfile
from datetime import datetime, timedelta, timezone
from pathlib import Path
from typing import Dict, Iterator, Optional


_APPLE_EPOCH = datetime(2001, 1, 1, tzinfo=timezone.utc)
_DEFAULT_PATH = Path("~/Library/Messages/chat.db").expanduser()


def chat_db_path() -> Path:
    return _DEFAULT_PATH


def _snapshot(src: Path) -> Path:
    tmp = Path(tempfile.mkstemp(suffix=".db",
                                   prefix="evosql-im-")[1])
    shutil.copy(src, tmp)
    for sfx in ("-wal", "-shm"):
        side = src.parent / (src.name + sfx)
        if side.is_file():
            try:
                shutil.copy(side, tmp.parent / (tmp.name + sfx))
            except OSError:
                pass
    return tmp


def _connect(src: Path) -> sqlite3.Connection:
    try:
        snap = _snapshot(src)
        return sqlite3.connect(snap)
    except PermissionError:
        return sqlite3.connect(
            f"file:{src}?mode=ro&immutable=1", uri=True)


def _apple_to_iso(date_value: int) -> Optional[str]:
    if not date_value or date_value < 0:
        return None
    # macOS 10.13+ uses nanoseconds, older uses seconds. Anything
    # above 1e12 is definitely nanoseconds (year 33700 in seconds).
    try:
        if date_value > 10 ** 12:
            secs = date_value / 1e9
        else:
            secs = float(date_value)
        dt = _APPLE_EPOCH + timedelta(seconds=secs)
        return dt.isoformat(timespec="seconds").replace("+00:00", "Z")
    except (OverflowError, OSError, ValueError):
        return None


_SELECT = """
SELECT
    m.ROWID                    AS msg_id,
    m.date                     AS apple_date,
    m.text                     AS text,
    (m.attributedBody IS NOT NULL) AS has_attr,
    m.is_from_me               AS from_me,
    m.service                  AS service,
    h.id                       AS handle,
    c.chat_identifier          AS chat_identifier,
    c.display_name             AS chat_display_name
FROM message m
LEFT JOIN handle h
    ON m.handle_id = h.ROWID
LEFT JOIN chat_message_join cmj
    ON cmj.message_id = m.ROWID
LEFT JOIN chat c
    ON c.ROWID = cmj.chat_id
WHERE m.date > ?
ORDER BY m.date ASC
"""


def _short(s: Optional[str], n: int = 200) -> str:
    if not s:
        return ""
    s = s.strip()
    return s if len(s) <= n else s[: n - 1] + "…"


def _build_record(row: sqlite3.Row, iso: str) -> Optional[Dict]:
    (msg_id, apple_date, text, has_attr, from_me, service,
     handle, chat_id, chat_name) = row

    body = text or ("(rich message)" if has_attr else "")
    if not body:
        return None

    is_from_me = bool(from_me)
    sender_label = ("me" if is_from_me
                    else (handle or "unknown"))
    chat_label = (chat_name or chat_id
                  or (handle or "unknown") or "(unknown chat)")

    fact = (f"{service or 'iMessage'} "
              f"{'from me to' if is_from_me else 'from'} "
              f"{sender_label if not is_from_me else chat_label}: "
              f"{_short(body, 240)}")

    return {
        "fact":         fact,
        "source":       "imessage",
        "kind":         "message",
        "service":      service or "iMessage",
        "text":         body,
        "sender":       sender_label,
        "handle":       handle or "",
        "chat":         chat_label,
        "chat_id":      chat_id or "",
        "is_from_me":   is_from_me,
        "modified_at":  iso,
        "apple_date":   apple_date,
        "tags":         ["imessage", "chat",
                          ("outgoing" if is_from_me else "incoming")],
    }


def iter_messages(since_apple_date: int = 0) -> Iterator[Dict]:
    """Yield message records newer than `since_apple_date` (Apple's
    nanoseconds-since-2001 epoch). Pass 0 to bootstrap."""
    src = chat_db_path()
    if not src.is_file():
        print(f"[imessage-sync] {src} not found — Messages.app may "
              "not be set up on this user account.",
              file=sys.stderr, flush=True)
        return
    conn = _connect(src)
    try:
        try:
            cur = conn.execute(_SELECT, (since_apple_date,))
        except sqlite3.DatabaseError as exc:
            print(f"[imessage-sync] DB error: {exc}",
                  file=sys.stderr, flush=True)
            return
        for row in cur:
            iso = _apple_to_iso(row[1])
            if iso is None:
                continue
            rec = _build_record(row, iso)
            if rec is not None:
                yield rec
    finally:
        conn.close()
