"""
Compatibility suite for the LlamaIndex adapter.

Covers BaseKVStore, BaseDocumentStore (filter + delete + add), and
ChatMemoryBuffer contracts.
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _harness import (Runner, fresh_conn, drop_if_exists,
                       assert_eq, assert_in)


runner = Runner("LlamaIndex compatibility")


# ─── KVStore ───────────────────────────────────────────────────────
@runner.case("KVStore put + get round-trip")
def _():
    from evosql_memory.adapters.llamaindex_evosql import EvoKVStore
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "lic_t1")
        kv = EvoKVStore(c, "lic_t1")
        kv.put("alice", {"role": "pm"}, "users")
        assert_eq(kv.get("alice", "users")["role"], "pm")
        c.exec_("DROP MEMORY STORE lic_t1")


@runner.case("KVStore get_all returns whole collection")
def _():
    from evosql_memory.adapters.llamaindex_evosql import EvoKVStore
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "lic_t2")
        kv = EvoKVStore(c, "lic_t2")
        kv.put("alice", {"role": "pm"}, "users")
        kv.put("bob",   {"role": "dev"}, "users")
        kv.put("docs",  {"x": 1},        "other")

        got = kv.get_all("users")
        assert_eq(set(got.keys()), {"alice", "bob"},
                   "users collection only")
        assert_eq(got["alice"]["role"], "pm")
        assert_eq(got["bob"]["role"],   "dev")
        c.exec_("DROP MEMORY STORE lic_t2")


@runner.case("KVStore delete removes key")
def _():
    from evosql_memory.adapters.llamaindex_evosql import EvoKVStore
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", "lic_t3")
        kv = EvoKVStore(c, "lic_t3")
        kv.put("k", {"v": 1}, "ns")
        assert kv.get("k", "ns") is not None
        kv.delete("k", "ns")
        assert_eq(kv.get("k", "ns"), None)
        c.exec_("DROP MEMORY STORE lic_t3")


# ─── DocumentStore ─────────────────────────────────────────────────
@runner.case("DocumentStore add + filter all")
def _():
    from evosql_memory.adapters.llamaindex_evosql import EvoDocumentStore
    with fresh_conn() as c:
        drop_if_exists(c, "DOCUMENT STORE", "lic_t4")
        d = EvoDocumentStore(c, "lic_t4")
        d.add_document("d1", "alpha note", {"k": "v"})
        d.add_document("d2", "beta note",  {"k": "v2"})
        d.add_document("d3", "gamma",      {"k": "v"})

        rows = d.filter_documents({})
        ids = sorted(r["id"] for r in rows)
        assert_eq(ids, ["d1", "d2", "d3"], "all docs returned")
        c.exec_("DROP DOCUMENT STORE lic_t4")


@runner.case("DocumentStore filter by id matches")
def _():
    from evosql_memory.adapters.llamaindex_evosql import EvoDocumentStore
    with fresh_conn() as c:
        drop_if_exists(c, "DOCUMENT STORE", "lic_t5")
        d = EvoDocumentStore(c, "lic_t5")
        d.add_document("d1", "alpha", {})
        d.add_document("d2", "beta",  {})

        rows = d.filter_documents({"id": "d1"})
        ids = sorted(r["id"] for r in rows)
        assert_eq(ids, ["d1"])
        c.exec_("DROP DOCUMENT STORE lic_t5")


@runner.case("DocumentStore $or filter composes")
def _():
    from evosql_memory.adapters.llamaindex_evosql import EvoDocumentStore
    with fresh_conn() as c:
        drop_if_exists(c, "DOCUMENT STORE", "lic_t6")
        d = EvoDocumentStore(c, "lic_t6")
        d.add_document("d1", "alpha", {})
        d.add_document("d2", "beta",  {})
        d.add_document("d3", "gamma", {})

        rows = d.filter_documents({"$or": [{"id": "d1"}, {"id": "d3"}]})
        ids = sorted(r["id"] for r in rows)
        assert_eq(ids, ["d1", "d3"], "$or yields exactly those two")
        c.exec_("DROP DOCUMENT STORE lic_t6")


# ─── ChatMemoryBuffer ──────────────────────────────────────────────
@runner.case("ChatMemoryBuffer put + get_all + reset")
def _():
    from evosql_memory.adapters.llamaindex_evosql import EvoChatMemoryBuffer
    with fresh_conn() as c:
        drop_if_exists(c, "MESSAGE LOG", "lic_t7")
        chat = EvoChatMemoryBuffer(c, "lic_t7", "sess-1")
        chat.put("user", "hi")
        chat.put("assistant", "hello!")
        msgs = chat.get_all()
        assert_eq(len(msgs), 2, "2 messages after 2 puts")

        chat.reset()
        assert_eq(len(chat.get_all()), 0, "reset() empties session")
        c.exec_("DROP MESSAGE LOG lic_t7")


@runner.case("ChatMemoryBuffer two sessions don't cross")
def _():
    from evosql_memory.adapters.llamaindex_evosql import EvoChatMemoryBuffer
    with fresh_conn() as c:
        drop_if_exists(c, "MESSAGE LOG", "lic_t8")
        a = EvoChatMemoryBuffer(c, "lic_t8", "sess-A", auto_create=True)
        b = EvoChatMemoryBuffer(c, "lic_t8", "sess-B", auto_create=False)
        a.put("user", "hi from A")
        b.put("user", "hi from B")
        assert_eq(len(a.get_all()), 1)
        assert_eq(len(b.get_all()), 1)
        c.exec_("DROP MESSAGE LOG lic_t8")


if __name__ == "__main__":
    runner.finish()
