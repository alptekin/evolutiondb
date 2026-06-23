"""
Compatibility suite for the LangGraph adapter.

Mirrors the behaviour LangGraph's BaseCheckpointSaver and BaseStore
contracts depend on:

  - Checkpoint round-trip preserves values + metadata
  - put → get returns the most recent state for the thread
  - list yields newest-first, latest entry first
  - Two threads stay isolated: thread A's checkpoint never appears
    when reading thread B
  - BaseStore put/get/delete/search exercise the namespace tuple
    contract LangGraph uses
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _harness import (Runner, fresh_conn, drop_if_exists,
                       assert_eq, assert_in)


runner = Runner("LangGraph compatibility")


# ─── 1. checkpoint round-trip ───
@runner.case("checkpoint round-trip preserves values + metadata")
def _():
    from evosql_memory.adapters.langgraph_evosql import EvoCheckpointSaver
    with fresh_conn() as c:
        drop_if_exists(c, "CHECKPOINT STORE", "lgc_t1")
        s = EvoCheckpointSaver(c, "lgc_t1")
        cfg = {"configurable": {"thread_id": "th-A", "checkpoint_ns": ""}}
        s.put(cfg,
               {"id": "cp-1",
                "channels": {"counter": 7, "msgs": ["a", "b"]}},
               {"src": "compat-test"})
        got = s.get(cfg)
        assert_eq(got["channels"]["counter"], 7,
                   "channels.counter survives roundtrip")
        assert_eq(got["channels"]["msgs"], ["a", "b"],
                   "channels.msgs survives roundtrip")
        c.exec_("DROP CHECKPOINT STORE lgc_t1")


# ─── 2. latest-by-thread on multiple puts ───
@runner.case("get returns most-recent checkpoint per thread")
def _():
    import time
    from evosql_memory.adapters.langgraph_evosql import EvoCheckpointSaver
    with fresh_conn() as c:
        drop_if_exists(c, "CHECKPOINT STORE", "lgc_t2")
        s = EvoCheckpointSaver(c, "lgc_t2")
        cfg = {"configurable": {"thread_id": "th-A", "checkpoint_ns": ""}}

        s.put(cfg, {"id": "cp-1", "step": 1})
        time.sleep(1.1)   # second-resolution timestamps
        s.put(cfg, {"id": "cp-2", "step": 2})
        time.sleep(1.1)
        s.put(cfg, {"id": "cp-3", "step": 3})

        got = s.get(cfg)
        assert_eq(got["step"], 3, "latest step is 3")
        c.exec_("DROP CHECKPOINT STORE lgc_t2")


# ─── 3. list yields newest-first ───
@runner.case("list yields all entries newest-first")
def _():
    import time
    from evosql_memory.adapters.langgraph_evosql import EvoCheckpointSaver
    with fresh_conn() as c:
        drop_if_exists(c, "CHECKPOINT STORE", "lgc_t3")
        s = EvoCheckpointSaver(c, "lgc_t3")
        cfg = {"configurable": {"thread_id": "th-X", "checkpoint_ns": ""}}

        for i in range(3):
            s.put(cfg, {"id": f"cp-{i}", "step": i})
            time.sleep(1.1)

        items = list(s.list(cfg, limit=10))
        ids = [i["id"] for i in items]
        # Newest-first ordering: last put is first row
        assert_eq(ids[0], "cp-2", "newest first")
        assert_eq(len(items), 3, "got all 3 checkpoints")
        c.exec_("DROP CHECKPOINT STORE lgc_t3")


# ─── 4. cross-thread isolation ───
@runner.case("two threads' checkpoints don't cross")
def _():
    from evosql_memory.adapters.langgraph_evosql import EvoCheckpointSaver
    with fresh_conn() as c:
        drop_if_exists(c, "CHECKPOINT STORE", "lgc_t4")
        s = EvoCheckpointSaver(c, "lgc_t4")
        cfgA = {"configurable": {"thread_id": "thA", "checkpoint_ns": ""}}
        cfgB = {"configurable": {"thread_id": "thB", "checkpoint_ns": ""}}

        s.put(cfgA, {"id": "cpA", "owner": "alice"})
        s.put(cfgB, {"id": "cpB", "owner": "bob"})

        gotA = s.get(cfgA)
        gotB = s.get(cfgB)
        assert_eq(gotA["owner"], "alice", "thread A reads its own state")
        assert_eq(gotB["owner"], "bob",   "thread B reads its own state")

        listA = [i["id"] for i in s.list(cfgA)]
        assert_eq(listA, ["cpA"], "thread A's list excludes B")
        c.exec_("DROP CHECKPOINT STORE lgc_t4")


# ─── 5. BaseStore put/get/delete ───
@runner.case("BaseStore put + get + delete cycle")
def _():
    from evosql_memory.adapters.langgraph_evosql import EvoBaseStore
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "lgc_t5")
        store = EvoBaseStore(c, "lgc_t5")
        store.put(("user_42", "memos"), "fav", {"topic": "jazz"})
        got = store.get(("user_42", "memos"), "fav")
        assert_eq(got["topic"], "jazz", "round-trip")

        store.delete(("user_42", "memos"), "fav")
        assert_eq(store.get(("user_42", "memos"), "fav"), None,
                   "deletion sticks")
        c.exec_("DROP MEMORY STORE lgc_t5")


# ─── 6. BaseStore namespace tuple isolation ───
@runner.case("BaseStore namespace tuples isolate keys")
def _():
    from evosql_memory.adapters.langgraph_evosql import EvoBaseStore
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "lgc_t6")
        store = EvoBaseStore(c, "lgc_t6")
        store.put(("user_1", "memos"), "k", {"v": 1})
        store.put(("user_2", "memos"), "k", {"v": 2})

        got1 = store.get(("user_1", "memos"), "k")
        got2 = store.get(("user_2", "memos"), "k")
        assert_eq(got1["v"], 1)
        assert_eq(got2["v"], 2)
        c.exec_("DROP MEMORY STORE lgc_t6")


# ─── 7. BaseStore search returns rows in the namespace ───
@runner.case("BaseStore search lists in-namespace items")
def _():
    from evosql_memory.adapters.langgraph_evosql import EvoBaseStore
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "lgc_t7")
        store = EvoBaseStore(c, "lgc_t7")
        store.put(("u1", "memos"), "a", {"v": 1})
        store.put(("u1", "memos"), "b", {"v": 2})
        store.put(("u2", "memos"), "x", {"v": 9})

        rows = store.search(("u1", "memos"), limit=10)
        keys = sorted(r["key"] for r in rows)
        assert_eq(keys, ["a", "b"], "only u1 keys returned")
        c.exec_("DROP MEMORY STORE lgc_t7")


# ─── 8. metadata round-trip ───
@runner.case("checkpoint metadata round-trip")
def _():
    from evosql_memory.adapters.langgraph_evosql import EvoCheckpointSaver
    with fresh_conn() as c:
        drop_if_exists(c, "CHECKPOINT STORE", "lgc_t8")
        s = EvoCheckpointSaver(c, "lgc_t8")
        cfg = {"configurable": {"thread_id": "tt", "checkpoint_ns": ""}}
        meta = {"source": "compat", "tags": ["a", "b"]}
        s.put(cfg, {"id": "cp-meta"}, meta)

        items = list(s.list(cfg))
        assert_eq(items[0]["metadata"], meta, "metadata round-trip")
        c.exec_("DROP CHECKPOINT STORE lgc_t8")


if __name__ == "__main__":
    runner.finish()
