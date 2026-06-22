"""
test_inbox_digest — inbox_digest.collect() windows the primary store's email
rows to a date range and summarizes RECEIVED ones with reply-status (an inbound
is "replied" if a later SENT message shares its thread) + per-sender totals.
Server-free via FakeBackend.
"""
from __future__ import annotations

import os
import sys
from datetime import datetime, timezone

_TESTS = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(_TESTS))
sys.path.insert(0, _TESTS)

from _assistant_fakes import FakeBackend                       # noqa: E402
from mcp_server_evosql import inbox_digest                     # noqa: E402

passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def _ms(y, mo, d, h=9):
    return int(datetime(y, mo, d, h, tzinfo=timezone.utc).timestamp() * 1000)


def _seed(b, ns):
    # Alice: inbound (in window) + my SENT reply later in the SAME thread -> replied
    b.put(b.memory, ns, "gmail_1", {"source": "gmail", "from": "Alice <a@x.com>",
          "subject": "Q3 report", "labels": "INBOX", "thread_id": "T1",
          "internal_date_ms": _ms(2026, 6, 16, 9)})
    b.put(b.memory, ns, "gmail_1r", {"source": "gmail", "from": "me <me@x.com>",
          "subject": "Re: Q3 report", "labels": "SENT", "thread_id": "T1",
          "internal_date_ms": _ms(2026, 6, 16, 10)})
    # Bob: inbound, no reply (in window) -> unreplied
    b.put(b.memory, ns, "gmail_2", {"source": "gmail", "from": "Bob <b@x.com>",
          "subject": "Quick question", "labels": "INBOX", "thread_id": "T2",
          "internal_date_ms": _ms(2026, 6, 17, 11)})
    # Carol: outlook inbound (in window), no reply -> unreplied
    b.put(b.memory, ns, "outlook_1", {"source": "outlook", "from": "Carol <c@x.com>",
          "subject": "Invoice", "folder": "inbox",
          "received_at": "2026-06-18T08:00:00Z"})
    # Dave: inbound but BEFORE the window -> excluded
    b.put(b.memory, ns, "gmail_old", {"source": "gmail", "from": "Dave <d@x.com>",
          "subject": "old thing", "labels": "INBOX", "thread_id": "T9",
          "internal_date_ms": _ms(2026, 6, 1, 9)})
    # a non-email row -> excluded
    b.put(b.memory, ns, "teams_1", {"source": "teams", "text": "hi",
          "chat_id": "C1", "created_at": "2026-06-16T09:00:00Z"})


def test_digest_window_reply_and_totals():
    b = FakeBackend(); ns = "alptekin_topal"; _seed(b, ns)
    out = inbox_digest.collect(b, ns, since="2026-06-15", until="2026-06-21")
    assert out["ok"] is True, out
    # 3 received emails in window (Alice, Bob, Carol); Dave (old) + teams excluded
    assert out["total"] == 3, out
    senders = {m["from"]: m for m in out["messages"]}
    assert set(senders) == {"Alice", "Bob", "Carol"}, senders
    assert senders["Alice"]["replied"] is True            # SENT reply in thread
    assert senders["Bob"]["replied"] is False
    assert senders["Carol"]["replied"] is False
    assert out["replied"] == 1 and out["unreplied"] == 2
    # per-sender totals
    by = {s["sender"]: s for s in out["by_sender"]}
    assert by["Alice"]["count"] == 1 and by["Alice"]["replied"] == 1
    assert by["Bob"]["count"] == 1 and by["Bob"]["unreplied"] == 1
    # subjects + dates surfaced
    assert senders["Alice"]["subject"] == "Q3 report"
    assert senders["Carol"]["date"] == "2026-06-18"
    # messages sorted ascending by time
    dates = [m["date"] for m in out["messages"]]
    assert dates == sorted(dates), dates


def test_empty_inbox_is_ok():
    b = FakeBackend()
    out = inbox_digest.collect(b, "nobody", since="2026-06-15", until="2026-06-21")
    assert out["ok"] is True and out["total"] == 0 and out["messages"] == []


def test_resolve_range_last_week_is_prior_mon_sun():
    # 2026-06-22 is a Monday -> last_week = the prior Mon..Sun (06-15..06-22)
    now = datetime(2026, 6, 22, 12, 0, tzinfo=timezone.utc)
    start, end, label = inbox_digest.resolve_range("last_week", now=now)
    assert label == "last week"
    assert datetime.fromtimestamp(start, timezone.utc).strftime("%Y-%m-%d") == "2026-06-15"
    assert datetime.fromtimestamp(end, timezone.utc).strftime("%Y-%m-%d") == "2026-06-22"


if __name__ == "__main__":
    print("=== inbox_digest (date-ranged received-email summary) ===")
    run("digest_window_reply_and_totals", test_digest_window_reply_and_totals)
    run("empty_inbox_is_ok", test_empty_inbox_is_ok)
    run("resolve_range_last_week_is_prior_mon_sun", test_resolve_range_last_week_is_prior_mon_sun)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
