"""
test_meeting — meeting_brief (meeting.py).

collect() reads gcal event rows for a target day and cross-references each
meeting's attendees against the open-loops store; render() formats it. All
server-free via FakeBackend (no identity catalog -> attendee match falls back
to a normalized literal match, which is exactly the no-catalog path). Fixtures
are fictional placeholders.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import meeting

NS = "alp_test"
DAY = "2026-06-12"


def _event(key, summary, start, attendees, *, organizer="", all_day=False,
           location="", end=None):
    return (key, {
        "fact": f"{summary} on {start}",
        "source": "gcal", "kind": "event",
        "summary": summary, "start": start, "end": end or start,
        "all_day": all_day, "location": location,
        "organizer": organizer, "attendees": attendees,
        "tags": ["gcal", "event", "Work"],
    })


def _loop(counterparty, *, direction="awaiting_me", what="follow up", status="open"):
    return {"kind": "open_loop", "status": status, "direction": direction,
            "counterparty": counterparty, "what": what, "snippet": what,
            "age_days": 2, "actionable": True, "source": "gmail",
            "thread_key": "t1"}


def _seed(b):
    # two meetings today, one tomorrow (must be excluded)
    k, v = _event("gcal_event_primary_e1", "Q3 Roadmap Sync",
                  f"{DAY}T15:00:00+03:00", ["Jordan Rivera", "Priya Nair"],
                  organizer="jordan.rivera@example.com", location="Room 4")
    b.put(b.memory, NS, k, v)
    k, v = _event("gcal_event_primary_e2", "Standup",
                  f"{DAY}T09:30:00+03:00", ["Sam Okafor"])
    b.put(b.memory, NS, k, v)
    k, v = _event("gcal_event_primary_e3", "Off-site",
                  "2026-06-13T10:00:00+03:00", ["Jordan Rivera"])
    b.put(b.memory, NS, k, v)
    # a non-event row in the same store must be ignored
    b.put(b.memory, NS, "mem_note_1", {"fact": "plain note", "source": "gmail"})
    # open loops: one with an attendee (Jordan), one with a stranger
    b.put(b.loops_store, NS, "loop_a", _loop("Jordan Rivera", what="send the deck"))
    b.put(b.loops_store, NS, "loop_b", _loop("Unrelated Person"))
    b.put(b.loops_store, NS, "loop_c", _loop("Sam Okafor",
                                             direction="i_owe_them", what="share notes"))
    # a resolved loop with an attendee must be ignored
    b.put(b.loops_store, NS, "loop_d", _loop("Priya Nair", status="resolved"))


# ---------------------------------------------------------------- collect
def test_collect_filters_to_day_and_sorts():
    b = FakeBackend()
    _seed(b)
    data = meeting.collect(b, NS, when=DAY)
    assert data["day"] == DAY
    assert data["count"] == 2                       # tomorrow's off-site excluded
    # sorted by start time: 09:30 standup before 15:00 sync
    assert [m["summary"] for m in data["meetings"]] == ["Standup", "Q3 Roadmap Sync"]


def test_collect_correlates_attendee_open_loops():
    b = FakeBackend()
    _seed(b)
    data = meeting.collect(b, NS, when=DAY)
    by = {m["summary"]: m for m in data["meetings"]}
    # Jordan has one open loop -> attached to the Roadmap Sync he attends
    sync = by["Q3 Roadmap Sync"]
    assert [r["counterparty"] for r in sync["related"]] == ["Jordan Rivera"]
    # the stranger's loop is never attached; the resolved Priya loop is excluded
    assert all(r["counterparty"] != "Unrelated Person" for r in sync["related"])
    assert all(r["counterparty"] != "Priya Nair" for r in sync["related"])
    # Sam's i_owe_them loop attaches to the Standup he attends
    standup = by["Standup"]
    assert [r["counterparty"] for r in standup["related"]] == ["Sam Okafor"]


def test_collect_empty_day():
    b = FakeBackend()
    _seed(b)
    data = meeting.collect(b, NS, when="2026-01-01")
    assert data["count"] == 0 and data["meetings"] == []


# ---------------------------------------------------------------- render
def test_render_lists_meetings_attendees_and_loops():
    b = FakeBackend()
    _seed(b)
    data = meeting.collect(b, NS, when=DAY)
    out = meeting.render(data, name="alp", lang="english")
    assert "Meetings" in out and DAY in out
    assert "Q3 Roadmap Sync" in out and "Standup" in out
    assert "Jordan Rivera" in out                    # attendee line
    assert "send the deck" in out                    # related open loop
    assert "15:00" in out and "09:30" in out          # times


def test_render_empty_day_message():
    out = meeting.render({"day": "2026-01-01", "meetings": [], "count": 0})
    assert "2026-01-01" in out and "No meetings" in out


def test_render_localized_turkish():
    # the brief renders in the user's language when one is set
    data = {"day": DAY, "meetings": [], "count": 0}
    out = meeting.render(data, lang="türkçe")
    assert "Toplantı" in out                          # tr label, en fallback avoided


# ---------------------------------------------------------------- helpers
def test_resolve_day_and_event_date():
    assert meeting.resolve_day("2026-06-12") == "2026-06-12"
    assert meeting.resolve_day("2026-06-12T15:00:00+03:00") == "2026-06-12"
    assert meeting.resolve_day("today")  # non-empty YYYY-MM-DD
    assert meeting._event_date({"start": "2026-06-12T15:00:00+03:00"}) == "2026-06-12"
    assert meeting._event_date({"start": "2026-07-01"}) == "2026-07-01"   # all-day
    assert meeting._hhmm("2026-06-12T15:00:00+03:00") == "15:00"
    assert meeting._hhmm("2026-07-01") == ""                              # all-day
