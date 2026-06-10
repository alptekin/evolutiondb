"""
test_suggest — draft-reply grounding (suggest.py).

Server-free: _index_threads buckets connector rows into per-thread, time-sorted
message lists with the right you/them flag; _render_thread formats the last few
turns; draft_reply is a no-op safe stub when no LLM backend is configured (it
must never crash or fabricate when EVOSQL_LOOP_LLM is unset).
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import suggest

NS = "alp_test"


def test_render_thread_marks_speakers():
    msgs = [(1.0, True, "Alex", "hi"), (2.0, False, "Alex", "how's it going")]
    out = suggest._render_thread(msgs, name="Me")
    assert out == "Me: hi\nAlex: how's it going"


def test_render_thread_keeps_last_eight():
    msgs = [(float(i), i % 2 == 0, "Z", f"m{i}") for i in range(12)]
    out = suggest._render_thread(msgs, name="Me").splitlines()
    assert len(out) == 8
    assert out[-1].endswith("m11")


def test_draft_reply_safe_without_llm():
    os.environ.pop("EVOSQL_LOOP_LLM", None)
    os.environ.pop("EVOSQL_PROFILE_LLM", None)
    out = suggest.draft_reply([(1.0, False, "Alex", "can you help me?")],
                              loop={}, self_role="founder", name="Me",
                              language="english")
    assert "LLM" in out and "EVOSQL_LOOP_LLM" in out      # the off stub, no crash


def test_index_threads_buckets_and_sorts():
    b = FakeBackend()
    b.put(b.memory, NS, "gmail_0",
          {"source": "gmail", "thread_id": "T1", "from": "me@x.com",
           "subject": "Project", "snippet": "hello", "labels": "SENT",
           "internal_date_ms": 1000})
    b.put(b.memory, NS, "gmail_1",
          {"source": "gmail", "thread_id": "T1", "from": "Alex <alex@example.com>",
           "subject": "Re: Project", "snippet": "the file?", "labels": "INBOX",
           "internal_date_ms": 2000})
    threads = suggest._index_threads(b, NS)
    msgs = threads[("gmail", "T1")]
    assert len(msgs) == 2
    assert [m[0] for m in msgs] == [1.0, 2.0]            # time-sorted
    assert msgs[0][1] is True and msgs[1][1] is False    # out, then inbound
    assert msgs[1][2] == "Alex"                          # counterparty display


def _loop(**kw):
    base = {"status": "open", "direction": "awaiting_me", "actionable": True,
            "loop_type": "request", "counterparty": "X", "source": "gmail",
            "thread_key": "T1", "snippet": "something", "age_days": 1}
    base.update(kw)
    return base


def test_select_filters_and_ranks():
    loops = {
        "a": _loop(counterparty="Alex", priority="high", age_days=10),
        "b": _loop(counterparty="Mary", age_days=1),
        "fyi": _loop(counterparty="Bot", loop_type="fyi"),          # dropped
        "them": _loop(counterparty="Boss", direction="awaiting_them"),  # dropped
        "old": _loop(counterparty="Former", actionable=False),      # dropped
        "done": _loop(counterparty="Done", status="resolved"),      # dropped
    }
    picked = [k for k, _ in suggest._select(loops, top=3)]
    assert picked == ["a", "b"]                       # high-priority first, fyi/them/stale/done gone


def test_select_top_and_specific_loop():
    loops = {"a": _loop(age_days=1), "b": _loop(age_days=2), "c": _loop(age_days=3)}
    assert [k for k, _ in suggest._select(loops, top=2)] == ["a", "b"]
    assert [k for k, _ in suggest._select(loops, loop_key="c")] == ["c"]
    assert suggest._select(loops, loop_key="nope") == []    # unknown key -> nothing


def test_suggest_replies_grounds_thread_and_role():
    os.environ.pop("EVOSQL_LOOP_LLM", None)
    b = FakeBackend()
    b.put(b.loops_store, NS, "loop_1",
          _loop(counterparty="Alex", snippet="can you send the file", age_days=2))
    b.put(b.selfmodel_store, NS, "self_role", {"content": {"summary": "founder"}})
    b.put(b.memory, NS, "gmail_0",
          {"source": "gmail", "thread_id": "T1", "from": "me@x.com",
           "subject": "P", "snippet": "hi", "labels": "SENT",
           "internal_date_ms": 1000})
    b.put(b.memory, NS, "gmail_1",
          {"source": "gmail", "thread_id": "T1", "from": "Alex <alex@example.com>",
           "subject": "Re: P", "snippet": "can you send the file",
           "labels": "INBOX", "internal_date_ms": 2000})

    res = suggest.suggest_replies(b, NS, top=3, name="Me")
    assert res["role"] == "founder"
    s = res["suggestions"][0]
    assert s["counterparty"] == "Alex" and s["loop_key"] == "loop_1"
    # the grounding transcript marks me vs them, in time order
    assert [t["speaker"] for t in s["thread"]] == ["Me", "Alex"]
    assert "LLM" in s["draft"]                          # off-note, no crash, no send


def test_suggest_replies_empty_when_no_loops():
    res = suggest.suggest_replies(FakeBackend(), NS, top=3)
    assert res["suggestions"] == []


def test_suggest_reply_registered_as_mcp_tool():
    from mcp_server_evosql import server
    tool = next((t for t in server.TOOLS if t["name"] == "suggest_reply"), None)
    assert tool is not None
    props = tool["inputSchema"]["properties"]
    assert "loop_key" in props and "top" in props
    assert "required" not in tool["inputSchema"]        # both optional


def main():
    for fn in (test_render_thread_marks_speakers, test_render_thread_keeps_last_eight,
               test_draft_reply_safe_without_llm, test_index_threads_buckets_and_sorts,
               test_select_filters_and_ranks, test_select_top_and_specific_loop,
               test_suggest_replies_grounds_thread_and_role,
               test_suggest_replies_empty_when_no_loops,
               test_suggest_reply_registered_as_mcp_tool):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — suggest draft grounding")
    return 0


if __name__ == "__main__":
    sys.exit(main())
