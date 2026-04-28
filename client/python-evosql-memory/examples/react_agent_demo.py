"""
react_agent_demo.py — minimal LangGraph-style ReAct loop running
entirely on EvoSQL.

This file does NOT depend on langgraph being installed. It mimics the
ReAct loop's I/O contract — for each step, the agent (a) reads the
latest checkpoint to recover state, (b) appends a tool-call event to
chat history, (c) writes a new checkpoint. A LISTEN subscription on a
NOTIFY channel shows the reactive side: the agent fires NOTIFY when
each step finishes so an external observer can react in real time.

Run:
    python react_agent_demo.py
"""
import os
import sys
import time
import threading

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, ".."))

from evosql_memory import connect, Subscription
from evosql_memory.adapters.langgraph_evosql import (
    EvoCheckpointSaver, EvoBaseStore)
from evosql_memory.adapters.langchain_evosql import EvoChatMessageHistory


def react_step(saver, history, store, thread_cfg, step_idx, question):
    """One ReAct iteration: read state → think → act → write state."""
    state = saver.get(thread_cfg) or {"answers": []}
    # Drop the prior checkpoint's id so this step's id wins the merge.
    state.pop("id", None)

    # "Thought" + "Action" — appended to chat history.
    thought = f"step={step_idx}: I should answer '{question}'"
    history.add_message({"role": "assistant", "content": thought})
    state["answers"].append({"q": question, "thought": thought})

    # Persist the new state.
    saver.put(thread_cfg, {**state, "id": f"cp-{step_idx}"})

    # Long-term memory note keyed by question.
    store.put(("demo_user", "answers"), question,
              {"thought": thought, "step": step_idx})


def main():
    with connect("127.0.0.1", 9967, "admin", "admin") as conn:
        saver   = EvoCheckpointSaver(conn, "react_demo_ck")
        history = EvoChatMessageHistory(conn, "react_demo_chat", "thread-1")
        store   = EvoBaseStore(conn, "react_demo_mem")

        # Subscribe to the agent's progress channel — same reactive
        # surface a downstream consumer would use.
        events = []

        def on_event(channel, payload, lsn):
            events.append((channel, payload))
            print(f"  [reactive] {channel}: {payload}")

        sub = Subscription("127.0.0.1", 9967, "admin", "admin",
                            "react_progress", on_event)

        thread_cfg = {"configurable": {"thread_id": "thread-1",
                                         "checkpoint_ns": ""}}

        questions = ["what is 2+2?", "name a jazz musician",
                      "what's the capital of France?"]
        try:
            for i, q in enumerate(questions, start=1):
                print(f"\nstep {i}: {q}")
                react_step(saver, history, store, thread_cfg, i, q)
                conn.exec_(
                    f"NOTIFY react_progress, 'step-{i}-done'")
                # CHECKPOINT created_at is second-resolution, so we
                # space steps by at least one second so the latest-by-
                # created_at lookup returns each new state in turn.
                time.sleep(1.1)

            print("\n=== final transcript ===")
            for m in history.messages:
                print(f"  {m['role']}: {m['content']}")

            final_state = saver.get(thread_cfg)
            print(f"\n=== final checkpoint state ===\n  {final_state}")
            print(f"\n=== reactive events seen: {len(events)} ===")
        finally:
            sub.close()
            conn.exec_("DROP CHECKPOINT STORE react_demo_ck")
            conn.exec_("DROP MEMORY STORE react_demo_mem")
            conn.exec_("DROP MESSAGE LOG react_demo_chat")


if __name__ == "__main__":
    main()
