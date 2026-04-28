"""
Compatibility suite for the AutoGen / AG2 adapter.

AutoGen's Memory protocol expects add(MemoryContent), query, and
clear. We assert the MIME-tagged round-trip and the lifecycle.
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _harness import (Runner, fresh_conn, drop_if_exists,
                       assert_eq, assert_in)


runner = Runner("AutoGen / AG2 compatibility")


@runner.case("add + query by key returns the record verbatim")
def _():
    from evosql_memory.adapters.autogen_evosql import EvoAutoGenMemory
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "agc_t1")
        m = EvoAutoGenMemory(c, "agc_t1")
        k = m.add("hello world", mime_type="text/plain",
                   metadata={"src": "ag-compat"})
        rec = m.query(key=k)[0]
        assert_eq(rec["content"], "hello world")
        assert_eq(rec["mime"],    "text/plain")
        assert_eq(rec["meta"]["src"], "ag-compat")
        c.exec_("DROP MEMORY STORE agc_t1")


@runner.case("MIME types other than text round-trip")
def _():
    from evosql_memory.adapters.autogen_evosql import EvoAutoGenMemory
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "agc_t2")
        m = EvoAutoGenMemory(c, "agc_t2")
        k = m.add("base64-data-here", mime_type="image/png",
                   metadata={"width": 64, "height": 64})
        rec = m.query(key=k)[0]
        assert_eq(rec["mime"], "image/png")
        assert_eq(rec["meta"]["width"], 64)
        c.exec_("DROP MEMORY STORE agc_t2")


@runner.case("query by missing key returns empty list")
def _():
    from evosql_memory.adapters.autogen_evosql import EvoAutoGenMemory
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "agc_t3")
        m = EvoAutoGenMemory(c, "agc_t3")
        assert_eq(m.query(key="nope"), [])
        c.exec_("DROP MEMORY STORE agc_t3")


@runner.case("query without key returns most-recent records")
def _():
    from evosql_memory.adapters.autogen_evosql import EvoAutoGenMemory
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "agc_t4")
        m = EvoAutoGenMemory(c, "agc_t4")
        for i in range(3):
            m.add(f"msg-{i}")
        recs = m.query(k=10)
        assert_eq(len(recs), 3)
        c.exec_("DROP MEMORY STORE agc_t4")


@runner.case("remove deletes the keyed record")
def _():
    from evosql_memory.adapters.autogen_evosql import EvoAutoGenMemory
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "agc_t5")
        m = EvoAutoGenMemory(c, "agc_t5")
        k = m.add("doomed")
        assert_eq(len(m.query(key=k)), 1)
        m.remove(k)
        assert_eq(m.query(key=k), [])
        c.exec_("DROP MEMORY STORE agc_t5")


@runner.case("clear empties the store")
def _():
    from evosql_memory.adapters.autogen_evosql import EvoAutoGenMemory
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "agc_t6")
        m = EvoAutoGenMemory(c, "agc_t6")
        for i in range(5):
            m.add(f"keep-{i}")
        m.clear()
        assert_eq(m.query(k=10), [])
        c.exec_("DROP MEMORY STORE agc_t6")


if __name__ == "__main__":
    runner.finish()
