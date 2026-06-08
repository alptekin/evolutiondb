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
    msgs = [(1.0, True, "Ulaş", "selam"), (2.0, False, "Ulaş", "naber")]
    out = suggest._render_thread(msgs, name="Alp")
    assert out == "Alp: selam\nUlaş: naber"


def test_render_thread_keeps_last_eight():
    msgs = [(float(i), i % 2 == 0, "Z", f"m{i}") for i in range(12)]
    out = suggest._render_thread(msgs, name="Me").splitlines()
    assert len(out) == 8
    assert out[-1].endswith("m11")


def test_draft_reply_safe_without_llm():
    os.environ.pop("EVOSQL_LOOP_LLM", None)
    os.environ.pop("EVOSQL_PROFILE_LLM", None)
    out = suggest.draft_reply([(1.0, False, "Ulaş", "yardım eder misin")],
                              loop={}, self_role="kurucu", name="Alp",
                              language="türkçe")
    assert "LLM" in out and "EVOSQL_LOOP_LLM" in out      # the off stub, no crash


def test_index_threads_buckets_and_sorts():
    b = FakeBackend()
    b.put(b.memory, NS, "gmail_0",
          {"source": "gmail", "thread_id": "T1", "from": "me@x.com",
           "subject": "Proje", "snippet": "merhaba", "labels": "SENT",
           "internal_date_ms": 1000})
    b.put(b.memory, NS, "gmail_1",
          {"source": "gmail", "thread_id": "T1", "from": "Ulaş <u@x.com>",
           "subject": "Re: Proje", "snippet": "dosya?", "labels": "INBOX",
           "internal_date_ms": 2000})
    threads = suggest._index_threads(b, NS)
    msgs = threads[("gmail", "T1")]
    assert len(msgs) == 2
    assert [m[0] for m in msgs] == [1.0, 2.0]            # time-sorted
    assert msgs[0][1] is True and msgs[1][1] is False    # out, then inbound
    assert msgs[1][2] == "Ulaş"                          # counterparty display


def main():
    for fn in (test_render_thread_marks_speakers, test_render_thread_keeps_last_eight,
               test_draft_reply_safe_without_llm, test_index_threads_buckets_and_sorts):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — suggest draft grounding")
    return 0


if __name__ == "__main__":
    sys.exit(main())
