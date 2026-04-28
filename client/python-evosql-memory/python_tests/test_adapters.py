"""
test_adapters.py — exercise every framework adapter end-to-end
against a live evosql-server on 127.0.0.1:9967.

Each test owns its store, drops it on entry to make the suite
re-runnable, and asserts the contract the framework cares about.
"""
import json
import os
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, ".."))

from evosql_memory import connect, Subscription                # noqa: E402
from evosql_memory.adapters.langgraph_evosql import (
    EvoCheckpointSaver, EvoBaseStore)                            # noqa: E402
from evosql_memory.adapters.langchain_evosql import (
    EvoChatMessageHistory, EvoConversationEntityMemory)          # noqa: E402
from evosql_memory.adapters.llamaindex_evosql import (
    EvoKVStore, EvoDocumentStore, EvoChatMemoryBuffer)           # noqa: E402
from evosql_memory.adapters.crewai_evosql import EvoCrewMemory   # noqa: E402
from evosql_memory.adapters.autogen_evosql import EvoAutoGenMemory  # noqa: E402
from evosql_memory.adapters.mem0_compat import Memory as Mem0    # noqa: E402

PASS = 0
FAIL = 0


def run(name, fn):
    global PASS, FAIL
    try:
        fn()
        print(f"  PASS: {name}")
        PASS += 1
    except Exception as e:
        print(f"  FAIL: {name} - {e}")
        FAIL += 1


# ─── Connection / streaming ───
def test_connection_basic():
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        rows = c.query("SHOW MEMORY STORES")
        assert isinstance(rows, list)


def test_subscription():
    seen = []
    sub = Subscription("127.0.0.1", 9967, "admin", "admin",
                        "py_chan_t", lambda ch, p, l: seen.append((ch, p)))
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        c.exec_("NOTIFY py_chan_t, 'hello'")
        c.exec_("NOTIFY py_chan_t, 'world'")
    time.sleep(1.5)
    sub.close()
    assert len(seen) >= 2, f"got {seen}"
    assert "hello" in seen[0][1]


# ─── LangGraph ───
def test_langgraph_checkpoint():
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        s = EvoCheckpointSaver(c, "lg_t1")
        cfg = {"configurable": {"thread_id": "th-1", "checkpoint_ns": ""}}
        s.put(cfg, {"id": "cp-1", "channels": {"foo": 1}})
        got = s.get(cfg)
        assert got["channels"]["foo"] == 1
        c.exec_("DROP CHECKPOINT STORE lg_t1")


def test_langgraph_basestore():
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        s = EvoBaseStore(c, "lg_t2")
        s.put(("u_1", "memos"), "fav", {"topic": "jazz"})
        v = s.get(("u_1", "memos"), "fav")
        assert v["topic"] == "jazz"
        s.delete(("u_1", "memos"), "fav")
        assert s.get(("u_1", "memos"), "fav") is None
        c.exec_("DROP MEMORY STORE lg_t2")


# ─── LangChain ───
def test_langchain_chat_history():
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        h = EvoChatMessageHistory(c, "lc_chat_t", "sess-1")
        h.add_message({"role": "user", "content": "hi"})
        h.add_message({"role": "assistant", "content": "hello"})
        msgs = h.messages
        assert len(msgs) == 2
        roles = [m["role"] for m in msgs]
        assert roles == ["user", "assistant"]
        c.exec_("DROP MESSAGE LOG lc_chat_t")


def test_langchain_entity():
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        e = EvoConversationEntityMemory(c, "lc_ent_t")
        e.remember("alice", "PM at Acme")
        e.remember("alice", "PM at Acme")
        e.remember("bob",   "developer")
        top = e.top()
        assert top[0]["key"] == "alice"
        assert top[0]["mention_count"] == 2
        c.exec_("DROP ENTITY STORE lc_ent_t")


# ─── LlamaIndex ───
def test_llamaindex_kv():
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        kv = EvoKVStore(c, "li_kv_t")
        kv.put("alice", {"role": "pm"}, "users")
        assert kv.get("alice", "users")["role"] == "pm"
        kv.delete("alice", "users")
        assert kv.get("alice", "users") is None
        c.exec_("DROP MEMORY STORE li_kv_t")


def test_llamaindex_doc_store():
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        d = EvoDocumentStore(c, "li_doc_t")
        d.add_document("d1", "hello", {"k": "v"})
        d.add_document("d2", "world", {"k": "v2"})
        rows = d.filter_documents({})  # all
        assert len(rows) == 2
        c.exec_("DROP DOCUMENT STORE li_doc_t")


# ─── CrewAI ───
def test_crewai_memory():
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        crew = EvoCrewMemory(c, "crew_t")
        crew.stm_save("task-1", "note", {"todo": "plan"})
        assert crew.stm_load("task-1", "note")["todo"] == "plan"

        crew.ltm_save("plan-trip", {"summary": "ok"})
        assert crew.ltm_recall("plan-trip")["summary"] == "ok"

        crew.remember_entity("alice", "PM", {"team": "eng"})
        e = crew.get_entity("alice")
        assert e["summary"] == "PM"

        c.exec_("DROP MEMORY STORE crew_t_stm")
        c.exec_("DROP CHECKPOINT STORE crew_t_ltm")
        c.exec_("DROP ENTITY STORE crew_t_entities")


# ─── AutoGen ───
def test_autogen_memory():
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        m = EvoAutoGenMemory(c, "ag_t")
        k = m.add("hello", mime_type="text/plain", metadata={"src": "demo"})
        rec = m.query(key=k)[0]
        assert rec["content"] == "hello"
        assert rec["mime"] == "text/plain"
        m.clear()
        assert m.query(k=5) == []
        c.exec_("DROP MEMORY STORE ag_t")


# ─── Mem0 ───
def test_mem0_compat():
    with Mem0(store_name="mem0_t") as m:
        m.add({"role": "user", "content": "I love jazz"}, user_id="u1")
        m.add({"role": "user", "content": "I drink coffee"}, user_id="u1")
        results = m.search("jazz", user_id="u1")
        assert any("jazz" in json.dumps(r.get("messages","")) for r in results)
        hist = m.history(user_id="u1")
        assert len(hist) >= 2

    # cleanup via fresh conn
    with connect("127.0.0.1", 9967, "admin", "admin") as c:
        c.exec_("DROP MEMORY STORE IF EXISTS mem0_t")


if __name__ == "__main__":
    print("=== evosql_memory adapter test suite ===\n")
    run("connection basic",                test_connection_basic)
    run("subscription delivers events",     test_subscription)
    run("langgraph checkpoint",             test_langgraph_checkpoint)
    run("langgraph basestore",              test_langgraph_basestore)
    run("langchain chat history",           test_langchain_chat_history)
    run("langchain entity memory",          test_langchain_entity)
    run("llamaindex KV store",              test_llamaindex_kv)
    run("llamaindex doc store",             test_llamaindex_doc_store)
    run("crewai short+long+entity",         test_crewai_memory)
    run("autogen memory",                   test_autogen_memory)
    run("mem0-compatible client",           test_mem0_compat)
    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
