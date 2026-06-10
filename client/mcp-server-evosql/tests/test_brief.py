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
            "counterparty": "X", "snippet": "something", "age_days": 1,
            "actionable": True}
    base.update(kw)
    return base


def test_collect_buckets_and_filters():
    b = FakeBackend()
    b.put(b.loops_store, NS, "l1", _loop(counterparty="Ada", loop_type="request"))
    b.put(b.loops_store, NS, "l2", _loop(counterparty="Spam", loop_type="fyi"))  # dropped
    b.put(b.loops_store, NS, "l3", _loop(direction="awaiting_them", counterparty="Boss"))
    b.put(b.loops_store, NS, "l4", _loop(direction="i_owe_them", counterparty="Frank"))
    b.put(b.loops_store, NS, "l5", _loop(counterparty="Stale", actionable=False))     # stale
    b.put(b.loops_store, NS, "l6", _loop(counterparty="Done", status="resolved"))    # ignored

    data = brief.collect(b, NS)
    assert [d["counterparty"] for d in data["waiting_me"]] == ["Ada"]   # fyi dropped
    assert [d["counterparty"] for d in data["waiting_them"]] == ["Boss"]
    assert [d["counterparty"] for d in data["promises"]] == ["Frank"]
    assert [d["counterparty"] for d in data["stale"]] == ["Stale"]


def test_collect_orders_high_priority_first():
    b = FakeBackend()
    b.put(b.loops_store, NS, "l1", _loop(counterparty="Normal", age_days=1))
    b.put(b.loops_store, NS, "l2", _loop(counterparty="VIP", priority="high", age_days=30))
    data = brief.collect(b, NS)
    assert [d["counterparty"] for d in data["waiting_me"]] == ["VIP", "Normal"]


def test_render_shows_counts_and_sections():
    # default render is English (language-neutral default)
    data = {"self": {"role": {"summary": "Founder"}}, "waiting_me": [],
            "waiting_them": [], "promises": [], "stale": []}
    out = brief.render(data, name="alp", lang_set=True)
    assert "GOOD MORNING ALP" in out
    assert "Founder" in out
    assert "WAITING ON YOU (0)" in out
    assert "all clear" in out


def test_render_localizes_to_turkish_preference():
    # when the user's language preference is Turkish, the brief renders in
    # Turkish — driven by runtime data (the locale resource), not code literals
    data = {"self": {}, "waiting_me": [], "waiting_them": [], "promises": [],
            "stale": []}
    out = brief.render(data, name="alp", lang_set=True, lang="türkçe")
    assert "GÜNAYDIN" in out and "SENİ BEKLEYENLER" in out


def test_render_language_nag_only_when_unset():
    data = {"self": {}, "waiting_me": [], "waiting_them": [], "promises": [],
            "stale": []}
    assert "/language" in brief.render(data, lang_set=False)
    assert "/language" not in brief.render(data, lang_set=True)


def test_render_lists_waiting_lines():
    data = {"self": {}, "waiting_me": [
        {"counterparty": "Ada", "age_days": 3, "what": "send the report",
         "priority": "high"}],
        "waiting_them": [], "promises": [], "stale": []}
    out = brief.render(data, name="alp", lang_set=True)
    assert "Ada" in out and "send the report" in out
    assert "⭐" in out                                   # high-priority marker


def test_queue_drafts_creates_pending():
    os.environ.pop("EVOSQL_LOOP_LLM", None)              # draft is the off-note
    from mcp_server_evosql import outbox
    b = FakeBackend()
    b.put(b.loops_store, NS, "loop_1",
          {"status": "open", "direction": "awaiting_me", "actionable": True,
           "loop_type": "request", "counterparty": "Ulaş", "source": "gmail",
           "thread_key": "T1", "snippet": "dosya?", "age_days": 1})
    b.put(b.memory, NS, "gmail_1",
          {"source": "gmail", "thread_id": "T1", "from": "Ulaş <ulas@x.com>",
           "labels": "INBOX", "snippet": "dosya?"})
    items = brief.queue_drafts(b, NS, top=3)
    assert len(items) == 1
    it = items[0]
    assert it["loop_key"] == "loop_1" and it["status"] == "pending"
    assert it["to_email"] == "ulas@x.com" and it["thread_id"] == "T1"  # routed
    assert [x["id"] for x in outbox.list_pending(b, NS)] == [it["id"]]


def test_approve_queued_all_dry_runs_without_send():
    os.environ.pop("EVOSQL_SEND_ENABLED", None)
    from mcp_server_evosql import outbox
    b = FakeBackend()
    it = outbox.queue(b, NS, "loop_1", "cevap", channel="gmail", source="gmail",
                      to="Ulaş")
    res = brief.approve_queued(b, NS)                    # approve all pending
    assert len(res) == 1 and res[0]["sent"] is False and res[0]["dry_run"] is True
    assert outbox._load(b, NS, it["id"])["status"] == "approved"


def main():
    for fn in (test_collect_buckets_and_filters,
               test_collect_orders_high_priority_first,
               test_render_shows_counts_and_sections,
               test_render_language_nag_only_when_unset,
               test_render_lists_waiting_lines,
               test_queue_drafts_creates_pending,
               test_approve_queued_all_dry_runs_without_send):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — brief render + collect")
    return 0


if __name__ == "__main__":
    sys.exit(main())
