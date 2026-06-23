"""
Compatibility suite for the LangChain classic adapter.

Mirrors the contracts LangChain's BaseChatMessageHistory,
ConversationEntityMemory, and VectorStoreRetrieverMemory rely on.
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _harness import (Runner, fresh_conn, drop_if_exists,
                       assert_eq, assert_in)


runner = Runner("LangChain compatibility")


# ─── 1. Chat history append + ordered read ───
@runner.case("chat history preserves append order")
def _():
    from evosql_memory.adapters.langchain_evosql import EvoChatMessageHistory
    with fresh_conn() as c:
        drop_if_exists(c, "MESSAGE LOG", "lcc_t1")
        h = EvoChatMessageHistory(c, "lcc_t1", "sess-1")
        for i in range(5):
            role = "user" if i % 2 == 0 else "assistant"
            h.add_message({"role": role, "content": f"msg-{i}"})

        msgs = h.messages
        assert_eq(len(msgs), 5, "all 5 messages")
        seqs = [m["seq"] for m in msgs]
        assert_eq(seqs, sorted(seqs), "monotonic seq order")
        c.exec_("DROP MESSAGE LOG lcc_t1")


# ─── 2. Two sessions don't cross ───
@runner.case("session_id isolates chat histories")
def _():
    from evosql_memory.adapters.langchain_evosql import EvoChatMessageHistory
    with fresh_conn() as c:
        drop_if_exists(c, "MESSAGE LOG", "lcc_t2")
        a = EvoChatMessageHistory(c, "lcc_t2", "sess-A", auto_create=True)
        b = EvoChatMessageHistory(c, "lcc_t2", "sess-B", auto_create=False)
        a.add_message({"role": "user", "content": "from A"})
        b.add_message({"role": "user", "content": "from B"})

        assert_eq(len(a.messages), 1, "A has 1 message")
        assert_eq(len(b.messages), 1, "B has 1 message")
        assert_in("from A", a.messages[0]["content"])
        assert_in("from B", b.messages[0]["content"])
        c.exec_("DROP MESSAGE LOG lcc_t2")


# ─── 3. clear empties only the calling session ───
@runner.case("clear() empties only the calling session")
def _():
    from evosql_memory.adapters.langchain_evosql import EvoChatMessageHistory
    with fresh_conn() as c:
        drop_if_exists(c, "MESSAGE LOG", "lcc_t3")
        a = EvoChatMessageHistory(c, "lcc_t3", "sA", auto_create=True)
        b = EvoChatMessageHistory(c, "lcc_t3", "sB", auto_create=False)
        a.add_message({"role": "user", "content": "alpha"})
        b.add_message({"role": "user", "content": "beta"})

        a.clear()
        assert_eq(len(a.messages), 0, "A is empty after clear")
        assert_eq(len(b.messages), 1, "B is untouched by A.clear")
        c.exec_("DROP MESSAGE LOG lcc_t3")


# ─── 4. Entity memory bumps mention_count ───
@runner.case("entity memory bumps mention_count")
def _():
    from evosql_memory.adapters.langchain_evosql import EvoConversationEntityMemory
    with fresh_conn() as c:
        drop_if_exists(c, "ENTITY STORE", "lcc_t4")
        e = EvoConversationEntityMemory(c, "lcc_t4")
        for _ in range(4):
            e.remember("alice", "PM at Acme")
        e.remember("bob", "developer")

        alice = e.get("alice")
        bob   = e.get("bob")
        assert_eq(alice["mention_count"], 4)
        assert_eq(bob["mention_count"], 1)
        c.exec_("DROP ENTITY STORE lcc_t4")


# ─── 5. Entity memory rank by mention_count ───
@runner.case("entity rank ordered by mention_count desc")
def _():
    from evosql_memory.adapters.langchain_evosql import EvoConversationEntityMemory
    with fresh_conn() as c:
        drop_if_exists(c, "ENTITY STORE", "lcc_t5")
        e = EvoConversationEntityMemory(c, "lcc_t5")
        for _ in range(3): e.remember("charlie", "engineer")
        for _ in range(5): e.remember("dana",    "manager")
        e.remember("eve", "intern")

        top = e.top(limit=5)
        keys = [t["key"] for t in top]
        assert_eq(keys[0], "dana",    "dana first (5 mentions)")
        assert_eq(keys[1], "charlie", "charlie second (3 mentions)")
        assert_eq(keys[2], "eve",     "eve last (1 mention)")
        c.exec_("DROP ENTITY STORE lcc_t5")


# ─── 6. Entity memory with facts ───
@runner.case("entity facts JSON round-trip")
def _():
    from evosql_memory.adapters.langchain_evosql import EvoConversationEntityMemory
    with fresh_conn() as c:
        drop_if_exists(c, "ENTITY STORE", "lcc_t6")
        e = EvoConversationEntityMemory(c, "lcc_t6")
        e.remember("alice", "PM at Acme",
                    facts={"team": "infra", "tier": "L5"})
        got = e.get("alice")
        assert_eq(got["facts"]["team"], "infra")
        assert_eq(got["facts"]["tier"], "L5")
        c.exec_("DROP ENTITY STORE lcc_t6")


# ─── 7. Missing entity returns None ───
@runner.case("get on unknown entity returns None")
def _():
    from evosql_memory.adapters.langchain_evosql import EvoConversationEntityMemory
    with fresh_conn() as c:
        drop_if_exists(c, "ENTITY STORE", "lcc_t7")
        e = EvoConversationEntityMemory(c, "lcc_t7")
        e.remember("alice", "PM")
        assert_eq(e.get("nobody"), None)
        c.exec_("DROP ENTITY STORE lcc_t7")


if __name__ == "__main__":
    runner.finish()
