"""
Compatibility suite for the Mem0-compatible client.

Mirrors the operations a real mem0 user would hit:
  add → search → get → update → delete → history.

Substring search is used because the bundled adapter falls back to
lexical match when no embedding model is supplied.
"""
import os
import sys
import json

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _harness import (Runner, fresh_conn, drop_if_exists,
                       assert_eq, assert_in)


runner = Runner("Mem0-compatible client compatibility")


def _drop(name: str) -> None:
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", name)


@runner.case("add + history reflect every record under user_id")
def _():
    from evosql_memory.adapters.mem0_compat import Memory
    _drop("m0c_t1")
    with Memory(store_name="m0c_t1") as m:
        m.add({"role": "user", "content": "I love jazz"}, user_id="u1")
        m.add({"role": "user", "content": "Coffee with milk"}, user_id="u1")
        m.add({"role": "user", "content": "Coffee with milk"}, user_id="u2")
        h1 = m.history(user_id="u1")
        h2 = m.history(user_id="u2")
        assert_eq(len(h1), 2, "u1 history has 2 records")
        assert_eq(len(h2), 1, "u2 history has 1 record")
    _drop("m0c_t1")


@runner.case("search finds substring match by user_id")
def _():
    from evosql_memory.adapters.mem0_compat import Memory
    _drop("m0c_t2")
    with Memory(store_name="m0c_t2") as m:
        m.add({"role": "user", "content": "I love Italian food"}, user_id="u1")
        m.add({"role": "user", "content": "Coffee please"},        user_id="u1")
        results = m.search("Italian", user_id="u1", k=5)
        assert any("Italian" in json.dumps(r.get("messages", ""))
                    for r in results), \
                f"expected Italian hit, got {results}"
    _drop("m0c_t2")


@runner.case("get returns full record by memory_id")
def _():
    from evosql_memory.adapters.mem0_compat import Memory
    _drop("m0c_t3")
    with Memory(store_name="m0c_t3") as m:
        rec = m.add({"content": "hi"}, user_id="u1", memory_id="mem-1")
        got = m.get("mem-1", user_id="u1")
        assert_eq(got["id"], "mem-1")
        assert_eq(got["messages"]["content"], "hi")
    _drop("m0c_t3")


@runner.case("update merges fields into existing record")
def _():
    from evosql_memory.adapters.mem0_compat import Memory
    _drop("m0c_t4")
    with Memory(store_name="m0c_t4") as m:
        m.add({"content": "first version"}, user_id="u1",
              memory_id="mem-x")
        m.update("mem-x",
                 {"messages": {"content": "second version"}},
                 user_id="u1")
        got = m.get("mem-x", user_id="u1")
        assert_eq(got["messages"]["content"], "second version")
    _drop("m0c_t4")


@runner.case("delete + get returns None")
def _():
    from evosql_memory.adapters.mem0_compat import Memory
    _drop("m0c_t5")
    with Memory(store_name="m0c_t5") as m:
        m.add({"content": "doomed"}, user_id="u1", memory_id="dx")
        assert m.delete("dx", user_id="u1") is True
        assert_eq(m.get("dx", user_id="u1"), None)
    _drop("m0c_t5")


@runner.case("(user_id, agent_id, run_id) tuple isolates records")
def _():
    from evosql_memory.adapters.mem0_compat import Memory
    _drop("m0c_t6")
    with Memory(store_name="m0c_t6") as m:
        m.add({"content": "shared user A1"}, user_id="u1",
              agent_id="a1", run_id="r1")
        m.add({"content": "shared user A2"}, user_id="u1",
              agent_id="a2", run_id="r1")
        h1 = m.history(user_id="u1", agent_id="a1", run_id="r1")
        h2 = m.history(user_id="u1", agent_id="a2", run_id="r1")
        assert_eq(len(h1), 1, "agent a1 history has 1")
        assert_eq(len(h2), 1, "agent a2 history has 1")
    _drop("m0c_t6")


if __name__ == "__main__":
    runner.finish()
