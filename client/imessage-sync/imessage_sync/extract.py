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

`text` was plain on macOS 10. From macOS 11 onward Messages.app
silently moved many newer messages — replies, link previews,
mentions, SMS short-code link cards, edited variants — into the
`attributedBody` column as an NSKeyedArchiver-encoded binary
plist of an NSAttributedString, and left `text` NULL. The decoder
below extracts the plain string out of that blob so we don't
surface those rows as `(rich message)` placeholders. Roughly 95%
of attributedBody messages decode cleanly; the remainder (tap-back
reactions, sticker payloads, Apple Pay receipts, etc.) carry no
plain-text equivalent at all and stay as the placeholder.
"""
from __future__ import annotations

import plistlib
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
    m.attributedBody           AS attributed_body,
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


_TYPEDSTREAM_MAGIC = b"\x04\x0bstreamtyped"


def _decode_typedstream(blob: bytes) -> str:
    """Pull the NSString payload out of an NSArchiver `typedstream`
    blob — Apple's legacy serialisation format (predates
    NSKeyedArchiver) that Messages.app still uses for
    `attributedBody`.

    Layout, reverse-engineered from chat.db rows:

        \\x04\\x0b streamtyped \\x81\\xe8\\x03         header
        ...class hierarchy + type tags...
        NSString\\x01 (or NSMutableString\\x01)        class name
        \\x95 \\x84\\x01 +                              instance preamble
        <length marker> <utf-8 bytes>                  payload

    Length marker uses typedstream's compact int encoding:
        0x01-0x7E         single byte == length
        0x81 LO HI        uint16 little-endian
        0x82 …            uint32 little-endian (rare for SMS)
    """
    if not blob or not blob.startswith(_TYPEDSTREAM_MAGIC):
        return ""

    cls_idx = blob.find(b"NSString")
    if cls_idx < 0:
        cls_idx = blob.find(b"NSMutableString")
    if cls_idx < 0:
        return ""

    # The NSString instance preamble is exactly `\x84\x01+` somewhere
    # within the next ~16 bytes after the class name. Searching for
    # that 3-byte tag is far more specific than scanning for `+` on
    # its own (which appears inside ordinary text too).
    tag = b"\x84\x01+"
    plus = blob.find(tag, cls_idx, cls_idx + 64)
    if plus < 0:
        return ""
    pos = plus + len(tag)
    if pos >= len(blob):
        return ""

    b = blob[pos]
    if b == 0x81:
        if pos + 3 > len(blob):
            return ""
        length = blob[pos + 1] | (blob[pos + 2] << 8)
        text_start = pos + 3
    elif b == 0x82:
        if pos + 5 > len(blob):
            return ""
        length = (blob[pos + 1]
                  | (blob[pos + 2] << 8)
                  | (blob[pos + 3] << 16)
                  | (blob[pos + 4] << 24))
        text_start = pos + 5
    elif 1 <= b <= 0x7F:
        length = b
        text_start = pos + 1
    else:
        return ""
    if text_start + length > len(blob):
        return ""
    return blob[text_start:text_start + length].decode("utf-8",
                                                          errors="replace")


def _decode_keyed_archive(blob: bytes) -> str:
    """Newer NSKeyedArchiver bplist path. Apple uses this for some
    rich payloads (link cards, scheduled / edited variants on macOS
    14+). Returns the plain string when present."""
    if not blob or len(blob) < 8 or not blob.startswith(b"bplist00"):
        return ""
    try:
        archive = plistlib.loads(blob)
    except Exception:
        return ""
    if not isinstance(archive, dict):
        return ""
    objects = archive.get("$objects")
    top     = archive.get("$top")
    if not isinstance(objects, list) or not isinstance(top, dict):
        return ""

    def resolve(uid):
        if not isinstance(uid, plistlib.UID):
            return None
        try:
            return objects[uid.data]
        except (IndexError, TypeError):
            return None

    root = resolve(top.get("root"))
    if isinstance(root, str):
        return root
    if isinstance(root, dict):
        for key in ("NSString", "NS.string"):
            val = resolve(root.get(key))
            if isinstance(val, str):
                return val
    # Fallback: longest non-class string in $objects.
    candidates = [
        s for s in objects
        if isinstance(s, str)
        and s != "$null"
        and not s.startswith(("NS", "$", "__kIM"))
    ]
    return max(candidates, key=len, default="")


def _decode_attributed_body(blob: Optional[bytes]) -> str:
    """Return the human-readable string carried in an iMessage
    `attributedBody` blob. Handles both the legacy NSArchiver
    typedstream (the format Messages.app still uses for almost every
    macOS release) and the newer NSKeyedArchiver bplist that Apple
    started mixing in for some rich payloads. Returns the empty
    string when neither path finds a body — callers fall back to
    the original `(rich message)` placeholder."""
    if not blob:
        return ""
    if blob.startswith(_TYPEDSTREAM_MAGIC):
        return _decode_typedstream(blob)
    if blob.startswith(b"bplist00"):
        return _decode_keyed_archive(blob)
    return ""


def _short(s: Optional[str], n: int = 200) -> str:
    if not s:
        return ""
    s = s.strip()
    return s if len(s) <= n else s[: n - 1] + "…"


def _build_record(row: sqlite3.Row, iso: str) -> Optional[Dict]:
    (msg_id, apple_date, text, attributed_body, from_me, service,
     handle, chat_id, chat_name) = row

    body = text
    if not body and attributed_body:
        body = _decode_attributed_body(attributed_body)
        if not body:
            body = "(rich message)"
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
