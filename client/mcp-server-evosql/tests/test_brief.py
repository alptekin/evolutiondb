"""
test_brief — the morning brief (brief.py).

collect() buckets the open-loops store into waiting_me / waiting_them /
promises / stale with the right filters and ordering; render() turns a data
dict into the human text (and nags about language exactly when unset). All
server-free via FakeBackend.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import brief

NS = "alp_test"


def _loop(**kw):
    base = {"kind": "open_loop", "status": "open", "direction": "awaiting_me",
            "counterparty": "X", "snippet": "bir şey", "age_days": 1,
            "actionable": True}
    base.update(kw)
    return base


def test_collect_buckets_and_filters():
    b = FakeBackend()
    b.put(b.loops_store, NS, "l1", _loop(counterparty="Ulaş", loop_type="request"))
    b.put(b.loops_store, NS, "l2", _loop(counterparty="Spam", loop_type="fyi"))  # dropped
    b.put(b.loops_store, NS, "l3", _loop(direction="awaiting_them", counterparty="Boss"))
    b.put(b.loops_store, NS, "l4", _loop(direction="i_owe_them", counterparty="Faruk"))
    b.put(b.loops_store, NS, "l5", _loop(counterparty="Eski", actionable=False))     # stale
    b.put(b.loops_store, NS, "l6", _loop(counterparty="Done", status="resolved"))    # ignored

    data = brief.collect(b, NS)
    assert [d["counterparty"] for d in data["waiting_me"]] == ["Ulaş"]   # fyi dropped
    assert [d["counterparty"] for d in data["waiting_them"]] == ["Boss"]
    assert [d["counterparty"] for d in data["promises"]] == ["Faruk"]
    assert [d["counterparty"] for d in data["stale"]] == ["Eski"]


def test_collect_orders_high_priority_first():
    b = FakeBackend()
    b.put(b.loops_store, NS, "l1", _loop(counterparty="Normal", age_days=1))
    b.put(b.loops_store, NS, "l2", _loop(counterparty="VIP", priority="high", age_days=30))
    data = brief.collect(b, NS)
    assert [d["counterparty"] for d in data["waiting_me"]] == ["VIP", "Normal"]


def test_render_shows_counts_and_sections():
    data = {"self": {"role": {"summary": "Kurucu"}}, "waiting_me": [],
            "waiting_them": [], "promises": [], "stale": []}
    out = brief.render(data, name="alp", lang_set=True)
    assert "GÜNAYDIN ALP" in out
    assert "Kurucu" in out
    assert "SENİ BEKLEYENLER (0)" in out
    assert "kimse beklemiyor" in out


def test_render_language_nag_only_when_unset():
    data = {"self": {}, "waiting_me": [], "waiting_them": [], "promises": [],
            "stale": []}
    assert "/language" in brief.render(data, lang_set=False)
    assert "/language" not in brief.render(data, lang_set=True)


def test_render_lists_waiting_lines():
    data = {"self": {}, "waiting_me": [
        {"counterparty": "Ulaş", "age_days": 3, "what": "raporu gönder",
         "priority": "high"}],
        "waiting_them": [], "promises": [], "stale": []}
    out = brief.render(data, name="alp", lang_set=True)
    assert "Ulaş" in out and "raporu gönder" in out
    assert "⭐" in out                                   # high-priority marker


def main():
    for fn in (test_collect_buckets_and_filters,
               test_collect_orders_high_priority_first,
               test_render_shows_counts_and_sections,
               test_render_language_nag_only_when_unset,
               test_render_lists_waiting_lines):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — brief render + collect")
    return 0


if __name__ == "__main__":
    sys.exit(main())
