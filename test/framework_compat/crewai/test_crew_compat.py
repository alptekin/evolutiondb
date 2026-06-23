"""
Compatibility suite for the CrewAI adapter.

CrewAI splits memory across STM (per-task scratchpad), LTM (cross-task
summary), and Entity. We exercise each layer plus their isolation.
"""
import os
import sys

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _harness import (Runner, fresh_conn, drop_if_exists,
                       assert_eq, assert_in)


runner = Runner("CrewAI compatibility")


def _drops(c, prefix: str) -> None:
    drop_if_exists(c, "MEMORY STORE",     f"{prefix}_stm")
    drop_if_exists(c, "CHECKPOINT STORE", f"{prefix}_ltm")
    drop_if_exists(c, "ENTITY STORE",     f"{prefix}_entities")


@runner.case("STM put/load round-trip")
def _():
    from evosql_memory.adapters.crewai_evosql import EvoCrewMemory
    with fresh_conn() as c:
        _drops(c, "cac_t1")
        crew = EvoCrewMemory(c, "cac_t1")
        crew.stm_save("task-1", "note", {"todo": "plan trip"})
        assert_eq(crew.stm_load("task-1", "note")["todo"], "plan trip")
        _drops(c, "cac_t1")


@runner.case("STM clear removes only that key")
def _():
    from evosql_memory.adapters.crewai_evosql import EvoCrewMemory
    with fresh_conn() as c:
        _drops(c, "cac_t2")
        crew = EvoCrewMemory(c, "cac_t2")
        crew.stm_save("task-1", "k1", {"v": 1})
        crew.stm_save("task-1", "k2", {"v": 2})
        crew.stm_clear("task-1", "k1")
        assert_eq(crew.stm_load("task-1", "k1"), None)
        assert_eq(crew.stm_load("task-1", "k2")["v"], 2)
        _drops(c, "cac_t2")


@runner.case("STM tasks isolate")
def _():
    from evosql_memory.adapters.crewai_evosql import EvoCrewMemory
    with fresh_conn() as c:
        _drops(c, "cac_t3")
        crew = EvoCrewMemory(c, "cac_t3")
        crew.stm_save("task-1", "n", {"x": 1})
        crew.stm_save("task-2", "n", {"x": 2})
        assert_eq(crew.stm_load("task-1", "n")["x"], 1)
        assert_eq(crew.stm_load("task-2", "n")["x"], 2)
        _drops(c, "cac_t3")


@runner.case("LTM save/recall preserves the latest summary")
def _():
    import time
    from evosql_memory.adapters.crewai_evosql import EvoCrewMemory
    with fresh_conn() as c:
        _drops(c, "cac_t4")
        crew = EvoCrewMemory(c, "cac_t4")
        crew.ltm_save("plan-trip", {"summary": "v1"})
        time.sleep(1.1)
        crew.ltm_save("plan-trip", {"summary": "v2"})
        # CHECKPOINT uses checkpoint_id PK and ORDER BY created_at —
        # latest by signature is whatever LTMSave wrote most recently.
        got = crew.ltm_recall("plan-trip")
        assert_eq(got["summary"], "v2", "latest summary wins")
        _drops(c, "cac_t4")


@runner.case("Entity layer mention_count + facts")
def _():
    from evosql_memory.adapters.crewai_evosql import EvoCrewMemory
    with fresh_conn() as c:
        _drops(c, "cac_t5")
        crew = EvoCrewMemory(c, "cac_t5")
        crew.remember_entity("alice", "PM at Acme", {"team": "infra"})
        crew.remember_entity("alice", "PM at Acme", {"team": "infra"})
        got = crew.get_entity("alice")
        assert_eq(got["summary"], "PM at Acme")
        assert_eq(got["mention_count"], 2)
        _drops(c, "cac_t5")


@runner.case("top_entities ordered by mention_count desc")
def _():
    from evosql_memory.adapters.crewai_evosql import EvoCrewMemory
    with fresh_conn() as c:
        _drops(c, "cac_t6")
        crew = EvoCrewMemory(c, "cac_t6")
        for _ in range(4): crew.remember_entity("alice", "PM")
        for _ in range(2): crew.remember_entity("bob",   "developer")
        crew.remember_entity("carol", "designer")

        top = crew.top_entities(limit=5)
        assert_eq([t["key"] for t in top], ["alice", "bob", "carol"])
        _drops(c, "cac_t6")


if __name__ == "__main__":
    runner.finish()
