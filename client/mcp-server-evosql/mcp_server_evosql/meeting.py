"""
meeting — the `meeting_brief` tool: a day's calendar meetings, each cross-
referenced with the open loops you have with its attendees.

Phase 1 of the business platform turns the already-synced-but-unused calendar
feed into a live signal. Calendar events arrive (via the calendar-sync
connector) as ordinary rows in the primary memory store with ``source="gcal"``
and ``kind="event"`` (mem_key prefix ``gcal_event_``); fields include
``summary/start/end/all_day/location/organizer/attendees`` where ``attendees``
is a flat list of display-name-or-email strings.

``collect`` reads the events for a target day, then for each meeting finds the
open loops whose ``counterparty`` matches an attendee — using the identity
catalog to expand aliases when available, and falling back to a normalized
literal match otherwise (the loop store has no per-person index; ``counterparty``
is a display name only). ``render`` formats it, localized like the morning brief.

Read-only: no writes, safe for any role.
"""
from __future__ import annotations

import json
from datetime import datetime, timedelta, timezone
from typing import Any, Dict, List, Optional


# Calendar sources that feed the meeting brief / today's schedule. Google
# Calendar ("gcal") and Outlook/M365 ("outlook") both write kind="event" rows
# in the same shape (summary/start/end/attendees/...), so both surface.
CAL_SOURCES = ("gcal", "outlook", "o365")


# ---------------------------------------------------------------- data
def _events(backend, ns: str) -> List[Dict[str, Any]]:
    """All calendar events in the namespace (from the primary memory store)."""
    from .server import _e
    rows = backend._query(
        f"SELECT mem_value FROM __mem_{backend.memory} "
        f"WHERE mem_namespace = '{_e(ns)}'") or []
    out: List[Dict[str, Any]] = []
    for r in rows:
        try:
            rec = json.loads(r[0])
        except (ValueError, TypeError):
            continue
        if rec.get("source") in CAL_SOURCES and rec.get("kind") == "event":
            out.append(rec)
    return out


def _event_date(rec: Dict[str, Any]) -> str:
    """The event's calendar date (YYYY-MM-DD). The first 10 chars of ``start``
    work for both a timed RFC3339 stamp ('2026-06-12T15:00:00+03:00') and an
    all-day date ('2026-06-12')."""
    s = rec.get("start") or ""
    return s[:10] if len(s) >= 10 else ""


def _hhmm(start: str) -> str:
    """'HH:MM' from a timed RFC3339 start, else ''."""
    if start and len(start) >= 16 and "T" in start:
        return start[11:16]
    return ""


def resolve_day(when: Optional[str]) -> str:
    """Normalize ``when`` to a YYYY-MM-DD target day.

    None / 'today' -> today (UTC, matching the rest of the codebase's UTC
    pinning); 'tomorrow' / 'yesterday' -> +-1 day; an ISO date or datetime ->
    its date part. (UTC 'today' is a deliberate simplification — events carry
    their own tz offset; near midnight in a far tz the day boundary may differ.)
    """
    w = (when or "today").strip().lower()
    now = datetime.now(timezone.utc)
    if w in ("", "today"):
        return now.strftime("%Y-%m-%d")
    if w == "tomorrow":
        return (now + timedelta(days=1)).strftime("%Y-%m-%d")
    if w == "yesterday":
        return (now - timedelta(days=1)).strftime("%Y-%m-%d")
    return (when or "").strip()[:10]


# ------------------------------------------------ attendee -> loop matching
def _norm(s: str) -> str:
    from .identity import _normalize_alias
    return _normalize_alias(s or "")


def _identity_store(backend, ns: str):
    """The identity catalog, or None when unavailable (e.g. a fake backend with
    no live connection). Matching degrades to a literal normalized match."""
    conn = getattr(backend, "conn", None)
    if conn is None:
        return None
    try:
        from .identity import IdentityStore
        return IdentityStore(conn, ns)
    except Exception:
        return None


def _aliases_for(store, person: str) -> set:
    """Normalized alias set for a person string: always the literal itself,
    plus the identity catalog's aliases when the person resolves there."""
    out = set()
    if not person:
        return out
    out.add(_norm(person))
    if store is not None:
        try:
            for a in store.resolve(person):
                out.add(_norm(a))
        except Exception:
            pass
    return out


# ---------------------------------------------------------------- collect
def collect(backend, ns: str, when: Optional[str] = None) -> Dict[str, Any]:
    """Meetings for the target day, each with its attendees and the open loops
    you hold with them. Returns ``{day, meetings:[...], count}``."""
    day = resolve_day(when)
    events = [e for e in _events(backend, ns) if _event_date(e) == day]
    events.sort(key=lambda e: (e.get("start") or ""))

    from . import suggest
    open_loops = [r for r in suggest._load_loops(backend, ns).values()
                  if r.get("status") == "open"]
    store = _identity_store(backend, ns)

    meetings: List[Dict[str, Any]] = []
    for e in events:
        people: List[str] = [a for a in (e.get("attendees") or []) if a]
        org = e.get("organizer") or ""
        if org and org not in people:
            people.append(org)
        alias_set: set = set()
        for p in people:
            alias_set |= _aliases_for(store, p)
        related = [r for r in open_loops
                   if _norm(r.get("counterparty") or "") in alias_set
                   and _norm(r.get("counterparty") or "")]
        meetings.append({
            "summary": e.get("summary") or "(no title)",
            "start": e.get("start"),
            "end": e.get("end"),
            "all_day": bool(e.get("all_day")),
            "location": e.get("location") or "",
            "organizer": org,
            "attendees": people,
            "html_link": e.get("html_link"),
            "related": related,
        })
    return {"day": day, "meetings": meetings, "count": len(meetings)}


# ---------------------------------------------------------------- render
def _loop_line(r: Dict[str, Any]) -> str:
    arrow = {"awaiting_me": "←", "awaiting_them": "→", "i_owe_them": "⤴"}.get(
        r.get("direction") or "", "·")
    who = (r.get("counterparty") or "")[:22]
    what = (r.get("what") or r.get("snippet") or "")[:60]
    return f"{arrow} {who} · {what}"


def render(data: Dict[str, Any], name: str = "",
           lang_set: bool = True, lang: str = "english") -> str:
    from . import locales
    U = locales.ui(lang)
    meetings = data.get("meetings", [])
    day = data.get("day", "")
    L: List[str] = [f"📅 {U.get('meetings_header', 'Meetings')} · {day} — {len(meetings)}"]
    if not meetings:
        L.append("   " + U.get("meetings_none", "No meetings scheduled."))
        return "\n".join(L)
    for m in meetings:
        when = U.get("all_day", "all day") if m["all_day"] else _hhmm(m["start"] or "")
        L.append("")
        L.append(f"🕒 {when}  {m['summary'][:70]}")
        att = ", ".join(a for a in m["attendees"][:8] if a)
        if att:
            L.append(f"   👥 {att}")
        if m["location"]:
            L.append(f"   📍 {m['location'][:60]}")
        rel = m.get("related") or []
        if rel:
            L.append(f"   🔗 {U.get('related_open', 'open loops with attendees')} "
                     f"({len(rel)}):")
            for r in rel[:5]:
                L.append("      " + _loop_line(r))
    return "\n".join(L)
