"""
test_assistant_jobs — the scheduler wiring of the assistant layer.

The open_loops/self_model jobs carry an ordering contract: open_loops runs
BEFORE self_model so the dossier's commitments section sees fresh loops, and
self_model's team list feeds the NEXT open_loops run. This guards that contract
(a JOBS-list reorder would silently break the cross-feed) and checks the
scheduler wrappers delegate to the real module functions — all over a
FakeBackend, no server.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import scheduler as SCH

NS = "alp_test"


def _names():
    return [j.name for j in SCH.JOBS]


def test_both_assistant_jobs_registered():
    assert "open_loops" in _names()
    assert "self_model" in _names()


def test_open_loops_runs_before_self_model():
    n = _names()
    assert n.index("open_loops") < n.index("self_model"), n


def test_outbox_flush_job_registered_and_delivers_due():
    assert "outbox_flush" in _names()
    import os
    from mcp_server_evosql import outbox
    os.environ["EVOSQL_SEND_ENABLED"] = "1"
    outbox.TRANSPORTS["gmail"] = lambda it: {"id": "x"}
    try:
        b = FakeBackend()
        it = outbox.queue(b, NS, "loop_1", "cevap", channel="gmail",
                          source="gmail", to="Ulaş", to_email="u@x.com")
        outbox.approve_send(b, NS, it["id"], undo_seconds=0)   # sent immediately
        # a due scheduled item is delivered by the job; none here -> 0 delivered
        assert SCH.job_outbox_flush(b, NS) == 0
    finally:
        outbox.TRANSPORTS.clear()
        os.environ.pop("EVOSQL_SEND_ENABLED", None)


def test_wrappers_delegate_to_modules():
    # scheduler.job_open_loops -> open_loops.job_open_loops, over a real (fake) DB
    b = FakeBackend()
    b.put(b.memory, NS, "gmail_0",
          {"source": "gmail", "thread_id": "T1", "from": "me@x.com",
           "subject": "P", "snippet": "hi", "labels": "SENT",
           "internal_date_ms": 2_000_000_000_000})
    b.put(b.memory, NS, "gmail_1",
          {"source": "gmail", "thread_id": "T1", "from": "Ulaş <u@x.com>",
           "subject": "Re: P", "snippet": "yapar mısın?", "labels": "INBOX",
           "internal_date_ms": 2_000_000_100_000})
    assert SCH.job_open_loops(b, NS) == 1
    # self_model wrapper then reads those loops into a commitments section
    os.environ.pop("EVOSQL_PROFILE_LLM", None)
    SCH.job_self_model(b, NS)
    self_rows = b.rows(b.selfmodel_store, NS)
    assert self_rows["self_commitments"]["content"]["open_count"] == 1


def test_self_model_team_feeds_open_loops_priority():
    # the cross-feed: self_team written by self_model lifts a matching loop to high
    b = FakeBackend()
    b.put(b.selfmodel_store, NS, "self_team",
          {"section": "team", "content": ["Ulaş"]})
    b.put(b.memory, NS, "gmail_0",
          {"source": "gmail", "thread_id": "T1", "from": "me@x.com",
           "subject": "P", "snippet": "hi", "labels": "SENT",
           "internal_date_ms": 2_000_000_000_000})
    b.put(b.memory, NS, "gmail_1",
          {"source": "gmail", "thread_id": "T1", "from": "Ulaş <u@x.com>",
           "subject": "Re: P", "snippet": "bakar mısın?", "labels": "INBOX",
           "internal_date_ms": 2_000_000_100_000})
    SCH.job_open_loops(b, NS)
    loop = next(iter(b.rows(b.loops_store, NS).values()))
    assert loop["priority"] == "high"


def main():
    for fn in (test_both_assistant_jobs_registered,
               test_open_loops_runs_before_self_model,
               test_outbox_flush_job_registered_and_delivers_due,
               test_wrappers_delegate_to_modules,
               test_self_model_team_feeds_open_loops_priority):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — assistant job scheduling + cross-feed")
    return 0


if __name__ == "__main__":
    sys.exit(main())
