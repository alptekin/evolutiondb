"""
inbox_digest — a date-ranged summary of RECEIVED work email (gmail/outlook):
who wrote, the subject, the date, and whether the user replied, plus per-sender
totals. The connectors already sync email into the primary memory store; this
windows that store to a date range and derives reply-status from the thread (an
inbound message is "replied" if a LATER message in its thread was sent by the
user — the same SENT-label / sent-folder signal open_loops uses).

Read-only, no external calls. Returns STRUCTURED data so the caller (the MCP host
model or the standalone agent) can present it in the user's language + requested
format — answering "summarize my emails for last week as a table of who/subject,
whether I replied, and per-sender totals", which the brief/loop tools could not.
"""
from __future__ import annotations

import json
from datetime import datetime, timedelta, timezone

from .open_loops import _ts, _disp, _thread_key

EMAIL_SOURCES = ("gmail", "outlook")


def _outbound(d) -> bool:
    """Did the USER send this message? (gmail SENT label / outlook sent folder.)"""
    src = d.get("source")
    if src == "gmail":
        return "SENT" in str(d.get("labels") or "")
    if src == "outlook":
        return "sent" in str(d.get("folder") or "").lower()
    return False


def _day_start(dt: datetime) -> datetime:
    return dt.replace(hour=0, minute=0, second=0, microsecond=0)


def resolve_range(since, until=None, *, now: datetime = None):
    """(start_epoch, end_epoch, label). ``since`` accepts an ISO date
    (YYYY-MM-DD) or a keyword: today, yesterday, this_week, last_week,
    last_month. ``until`` (ISO, optional) defaults to now; the window is
    [start, end). ``now`` is injectable for deterministic tests."""
    now = now or datetime.now(timezone.utc)
    s = (since or "").strip().lower()
    start = end = None
    label = since or "last_week"
    if s in ("last_week", "geçen_hafta", "gecen_hafta"):
        this_mon = _day_start(now - timedelta(days=now.weekday()))
        start, end, label = this_mon - timedelta(days=7), this_mon, "last week"
    elif s == "this_week":
        start, end, label = _day_start(now - timedelta(days=now.weekday())), now, "this week"
    elif s == "last_month":
        start, end, label = _day_start(now) - timedelta(days=30), now, "last 30 days"
    elif s == "yesterday":
        d0 = _day_start(now - timedelta(days=1))
        start, end, label = d0, d0 + timedelta(days=1), "yesterday"
    elif s in ("today", ""):
        start, end, label = _day_start(now), now, "today"
    else:
        try:
            start = datetime.fromisoformat(s[:10]).replace(tzinfo=timezone.utc)
            label = s[:10]
        except Exception:
            start, label = _day_start(now) - timedelta(days=7), "last 7 days"
    if end is None:
        if until:
            try:
                end = (datetime.fromisoformat(str(until)[:10])
                       .replace(tzinfo=timezone.utc) + timedelta(days=1))
            except Exception:
                end = now
        else:
            end = now
    return start.timestamp(), end.timestamp(), label


def collect(backend, ns, *, since="last_week", until=None,
            sources=EMAIL_SOURCES, now: datetime = None) -> dict:
    """Window the primary store's email rows to [since, until) and summarize the
    RECEIVED ones with reply-status + per-sender totals. ``ok`` False only on a
    hard backend error; an empty inbox returns ok=True with total 0."""
    from .server import _e
    start, end, label = resolve_range(since, until, now=now)
    rows = []
    try:
        for row in backend._query(
                f"SELECT mem_value FROM __mem_{backend.memory} "
                f"WHERE mem_namespace = '{_e(ns)}' LIMIT 1000000") or []:
            try:
                rows.append(json.loads(row[0]))
            except Exception:
                pass
    except Exception as exc:   # noqa: BLE001
        return {"ok": False, "error": str(exc)[:200], "range": label,
                "total": 0, "messages": [], "by_sender": []}

    emails = [d for d in rows if d.get("source") in sources]
    # thread groups -> (ts, outbound) per message, sorted, for reply detection
    threads = {}
    for d in emails:
        tk = (d.get("source"), _thread_key(d, d.get("source")))
        threads.setdefault(tk, []).append((_ts(d), _outbound(d)))
    for v in threads.values():
        v.sort(key=lambda x: x[0])

    def _replied(d) -> bool:
        # replied = an OUTBOUND message exists in the same thread at/after this
        # inbound one (the inbound itself is (ts0, outbound=False), so it never
        # counts itself).
        tk = (d.get("source"), _thread_key(d, d.get("source")))
        ts0 = _ts(d)
        return any(out and ts >= ts0 for ts, out in threads.get(tk, []))

    msgs = []
    for d in emails:
        if _outbound(d):
            continue                       # received only
        ts = _ts(d)
        if not (start <= ts < end):
            continue                       # outside the window
        msgs.append({
            "date": datetime.fromtimestamp(ts, timezone.utc).strftime("%Y-%m-%d"),
            "from": _disp(d.get("from")),
            "subject": ((d.get("subject") or "").strip()[:140] or "(no subject)"),
            "replied": _replied(d),
            "source": d.get("source"),
            "_ts": ts,
        })
    msgs.sort(key=lambda m: m["_ts"])
    for m in msgs:
        m.pop("_ts", None)

    by = {}
    for m in msgs:
        b = by.setdefault(m["from"], {"sender": m["from"], "count": 0, "replied": 0})
        b["count"] += 1
        b["replied"] += 1 if m["replied"] else 0
    by_sender = sorted(by.values(), key=lambda x: (-x["count"], x["sender"]))
    for b in by_sender:
        b["unreplied"] = b["count"] - b["replied"]

    return {
        "ok": True,
        "range": label, "since": since, "until": until,
        "total": len(msgs),
        "replied": sum(1 for m in msgs if m["replied"]),
        "unreplied": sum(1 for m in msgs if not m["replied"]),
        "messages": msgs,
        "by_sender": by_sender,
    }
