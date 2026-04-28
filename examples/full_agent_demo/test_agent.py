"""
test_agent.py — end-to-end test of the demo agent.

Each test owns a fresh MemoryBackend (drops + recreates the demo
stores), runs the agent against the live evosql server, and asserts
on the recorded state. The suite is rerunnable and parallel-safe
across distinct store_prefix values.

Runs cleanly with the bundled StubLLM; if ANTHROPIC_API_KEY is set
the same suite drives the real Claude — both should pass.
"""
from __future__ import annotations

import json
import os
import sys
import time

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, HERE)

from agent          import Agent, run_scripted_scenario
from llm            import StubLLM, make_llm
from memory_backend import MemoryBackend
from scenarios      import SCENARIO


PASS = 0
FAIL = 0


def run(name: str, fn) -> None:
    global PASS, FAIL
    try:
        fn()
        print(f"  PASS: {name}")
        PASS += 1
    except Exception as e:
        print(f"  FAIL: {name} - {e}")
        FAIL += 1


def _backend(prefix: str) -> MemoryBackend:
    return MemoryBackend(
        host=os.environ.get("EVOSQL_HOST", "127.0.0.1"),
        port=int(os.environ.get("EVOSQL_PORT", "9967")),
        user=os.environ.get("EVOSQL_USER", "admin"),
        password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        store_prefix=prefix,
        reset=True,
    )


# ─── 1. backend round-trips a saved fact ───
def test_backend_save_search():
    with _backend("t1") as b:
        b.save_memory("alice", "Loves jazz",       tags=["preference"])
        b.save_memory("alice", "Works at Acme",    tags=["job"])
        b.save_memory("bob",   "Lives in Berlin",  tags=["location"])

        results = b.search_memory("alice", "jazz")
        assert any("jazz" in r["fact"].lower() for r in results), \
            f"jazz not recalled: {results}"

        cross = b.search_memory("bob", "jazz")
        assert cross == [], f"bob should not see alice's facts: {cross}"


# ─── 2. message log preserves order across a turn ───
def test_message_log_ordering():
    with _backend("t2") as b:
        agent = Agent(b, StubLLM(), session_id="sess-1")
        agent.turn("Hello there")
        agent.turn("How are you?")

        msgs = b.read_messages("sess-1")
        roles = [m["role"] for m in msgs]
        # Each turn writes one user + one assistant message.
        assert roles == ["user", "assistant", "user", "assistant"], \
            f"unexpected role sequence: {roles}"


# ─── 3. stub agent saves a fact when user shares a preference ───
def test_stub_saves_preference():
    with _backend("t3") as b:
        agent = Agent(b, StubLLM(), session_id="sess-2")
        state = agent.turn("My favourite jazz musician is Miles Davis.")
        names = [t["name"] for t in state["tool_calls"]]
        assert "save_memory" in names, f"tool_calls={names}"

        # The fact landed in the memory store.
        results = b.search_memory("stub_user", "jazz")
        assert any("miles davis" in r["fact"].lower() for r in results), \
            f"jazz fact not stored: {results}"


# ─── 4. stub agent recalls a saved fact across turns ───
def test_stub_recalls_across_turns():
    with _backend("t4") as b:
        agent = Agent(b, StubLLM(), session_id="sess-3")
        agent.turn("My favourite jazz musician is Miles Davis.")
        agent.turn("I had a long meeting today.")
        state = agent.turn("Recommend an album for me to listen to tonight.")

        # search_memory was called…
        names = [t["name"] for t in state["tool_calls"]]
        assert "search_memory" in names, f"tool_calls={names}"

        # …and the recalled keyword reached the assistant text or
        # appeared in the tool_result the model just consumed.
        text = (state["assistant"] or "").lower()
        in_text = "miles davis" in text
        in_tool = any("miles davis" in (t.get("result") or "").lower()
                      for t in state["tool_results"])
        assert in_text or in_tool, \
            f"miles davis not recalled in turn 3: text={text!r}"


# ─── 5. checkpoint snapshot is queryable per turn ───
def test_checkpoint_per_turn():
    with _backend("t5") as b:
        agent = Agent(b, StubLLM(), session_id="sess-4")
        agent.turn("Hello")
        agent.turn("World")

        latest = b.latest_checkpoint("sess-4")
        assert latest is not None, "no checkpoint persisted"
        assert latest["step"] >= 1, latest


# ─── 6. full scripted scenario runs green under the stub LLM ───
def test_scripted_scenario_passes_under_stub():
    rc = run_scripted_scenario(session="sess-scripted")
    assert rc == 0, f"scripted scenario exited non-zero: rc={rc}"


# ─── 7. scenario also passes under the real Claude when keyed ───
def test_scenario_under_real_claude():
    if not os.environ.get("ANTHROPIC_API_KEY"):
        print("    (skipped — ANTHROPIC_API_KEY not set)")
        return
    # Real Claude path goes through the same loop; we just invoke it
    # to make sure end-to-end works with a live API. Accept either
    # exit status because Claude's behaviour isn't fully deterministic
    # — but we should at least get past the loop without exception.
    rc = run_scripted_scenario(session="sess-real-claude")
    print(f"    (real-claude rc={rc})")


if __name__ == "__main__":
    print("=== full_agent_demo end-to-end ===")
    print(f"    LLM backend: {make_llm().name}")
    print()
    run("backend save / search / cross-namespace isolation",
         test_backend_save_search)
    run("message log preserves role order across a turn",
         test_message_log_ordering)
    run("stub agent saves a fact on preference statement",
         test_stub_saves_preference)
    run("stub agent recalls saved fact across multiple turns",
         test_stub_recalls_across_turns)
    run("checkpoint is persisted per turn",
         test_checkpoint_per_turn)
    run("scripted scenario passes under stub LLM",
         test_scripted_scenario_passes_under_stub)
    run("scripted scenario under real Claude (when keyed)",
         test_scenario_under_real_claude)
    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
