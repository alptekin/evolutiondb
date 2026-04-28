"""
Concurrency stress test for the framework adapters.

Each adapter gets exercised under N worker threads × M operations.
The harness asserts:

  - No worker raises (no cross-thread state corruption from ctypes).
  - Every record one worker wrote is visible to a follow-up read on
    its own connection (per-thread isolation contract).
  - Total wall time stays under a generous bound so we surface a
    regression if the SDK or engine starts deadlocking.

The default settings (32 workers × 100 ops) finish in seconds against
a Docker-compose evosql-server. Bump --workers to load-test the
single-process server.
"""
import argparse
import json
import os
import sys
import threading
import time
import uuid

HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.dirname(HERE))

from _harness import (Runner, fresh_conn, drop_if_exists,
                       assert_eq)


runner = Runner("Concurrency stress (cross-adapter)")

# Tune via env so CI can run a small budget while local can crank it.
WORKERS = int(os.environ.get("FCOMPAT_STRESS_WORKERS", "16"))
OPS     = int(os.environ.get("FCOMPAT_STRESS_OPS",     "50"))


# ─── shared driver: spawns N workers running fn(i) ────────────────
def run_workers(fn) -> None:
    errors = []

    def worker(idx: int):
        try:
            fn(idx)
        except Exception as e:
            errors.append(f"worker {idx}: {e}")

    threads = [threading.Thread(target=worker, args=(i,))
               for i in range(WORKERS)]
    t0 = time.time()
    for t in threads: t.start()
    for t in threads: t.join()
    elapsed = time.time() - t0
    if errors:
        raise AssertionError(
            f"{len(errors)} worker(s) failed: {errors[:3]}")
    if elapsed > 60:
        raise AssertionError(f"stress run took {elapsed:.1f}s, exceeds 60s")


# ─── 1. LangGraph BaseStore — N workers, distinct namespaces ──────
@runner.case("LangGraph BaseStore: N workers, no cross-namespace leakage")
def _():
    from evosql_memory.adapters.langgraph_evosql import EvoBaseStore
    store_name = "stress_lg_bs"
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", store_name)
        EvoBaseStore(c, store_name)   # creates the store

    def work(i: int):
        with fresh_conn() as conn:
            store = EvoBaseStore(conn, store_name, auto_create=False)
            ns = (f"u_{i}", "memos")
            for j in range(OPS):
                store.put(ns, f"k_{j}", {"i": i, "j": j})
            for j in range(OPS):
                got = store.get(ns, f"k_{j}")
                assert got and got["i"] == i and got["j"] == j

    run_workers(work)
    with fresh_conn() as c:
        c.exec_(f"DROP MEMORY STORE {store_name}")


# ─── 2. LangChain chat history — N sessions ───────────────────────
@runner.case("LangChain chat history: N sessions append concurrently")
def _():
    from evosql_memory.adapters.langchain_evosql import EvoChatMessageHistory
    log_name = "stress_lc_chat"
    with fresh_conn() as c:
        drop_if_exists(c, "MESSAGE LOG", log_name)
        EvoChatMessageHistory(c, log_name, "_init", auto_create=True)

    def work(i: int):
        with fresh_conn() as conn:
            h = EvoChatMessageHistory(conn, log_name, f"sess_{i}",
                                        auto_create=False)
            for j in range(OPS):
                h.add_message({"role": "user", "content": f"i{i}-j{j}"})
            assert_eq(len(h.messages), OPS)

    run_workers(work)
    with fresh_conn() as c:
        c.exec_(f"DROP MESSAGE LOG {log_name}")


# ─── 3. Mem0 — N user_ids ─────────────────────────────────────────
@runner.case("Mem0 client: N user_ids, history per-user is correct")
def _():
    from evosql_memory.adapters.mem0_compat import Memory
    store = "stress_m0"
    with fresh_conn() as c:
        drop_if_exists(c, "MEMORY STORE", store)

    # Pre-create the store (the helper auto-creates by default; we
    # disable that here so workers don't all DROP it).
    with Memory(store_name=store) as bootstrap:
        bootstrap.add({"content": "bootstrap"}, user_id="_init")

    def work(i: int):
        with Memory(store_name=store, auto_create=False) as m:
            for j in range(OPS):
                m.add({"content": f"i{i}-j{j}"}, user_id=f"u{i}")
            hist = m.history(user_id=f"u{i}")
            assert_eq(len(hist), OPS)

    run_workers(work)
    with fresh_conn() as c:
        c.exec_(f"DROP MEMORY STORE {store}")


if __name__ == "__main__":
    print(f"(workers={WORKERS}, ops/worker={OPS})\n")
    runner.finish()
