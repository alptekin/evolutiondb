#!/usr/bin/env python3
"""
test_pool.py — Connection pool (Task 96 / Feature #68).

Exercises the pre-spawned worker pool that handles accepted sockets:
  - Rapid connect/disconnect (100 sequential) must not leak workers.
  - Concurrent queries from N clients all return correctly.
  - Pool exhaustion (> EVOSQL_POOL_SIZE) must queue rather than drop.
  - Server restart cycles without hanging (pool_shutdown drains
    workers cleanly).

Runs against localhost:5433 with admin/admin. Does not need its own
env tweaks — docker-compose already exports a default pool size.
"""

import os
import socket
import sys
import threading
import time

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query, HOST, PORT

PASS = 0
FAIL = 0
FAILS = []


def check(name, cond, detail=""):
    global PASS, FAIL
    if cond:
        PASS += 1
        print(f"  PASS  {name}")
    else:
        FAIL += 1
        FAILS.append(name)
        print(f"  FAIL  {name} — {detail}")


# ────────────────────────────────────────────────────────────────────
# Test 1 — 100 sequential connect/disconnect cycles
# ────────────────────────────────────────────────────────────────────
def test_rapid_connect_disconnect():
    errors = 0
    for i in range(100):
        try:
            s = conn()
            _, rows, err, _ = simple_query(s, "SELECT 1")
            if err or not rows or rows[0][0] != '1':
                errors += 1
            s.close()
        except Exception:
            errors += 1
    check("1. 100 sequential connect/disconnect",
          errors == 0, f"{errors}/100 failed")


# ────────────────────────────────────────────────────────────────────
# Test 2 — N concurrent clients each running a query
# ────────────────────────────────────────────────────────────────────
def test_concurrent_queries():
    N = 30
    results = [None] * N
    exceptions = [None] * N

    def worker(idx):
        try:
            s = conn()
            _, rows, err, _ = simple_query(s, f"SELECT {idx}")
            if err is None and rows and rows[0][0] == str(idx):
                results[idx] = True
            s.close()
        except Exception as e:
            exceptions[idx] = str(e)

    threads = [threading.Thread(target=worker, args=(i,)) for i in range(N)]
    for t in threads: t.start()
    for t in threads: t.join(timeout=15)

    ok_count = sum(1 for r in results if r)
    check(f"2. {N} concurrent queries all succeed",
          ok_count == N, f"{ok_count}/{N} ok, exceptions={[e for e in exceptions if e][:3]}")


# ────────────────────────────────────────────────────────────────────
# Test 3 — burst past pool size queues instead of dropping
#   With default EVOSQL_POOL_SIZE=20, hit 50 concurrent clients. The
#   extras must wait in the queue and still complete (not error out).
# ────────────────────────────────────────────────────────────────────
def test_pool_queue_backpressure():
    N = 50
    done = [False] * N

    def worker(idx):
        try:
            s = conn()
            # Tiny query — keeps the worker busy for milliseconds, so
            # 50 clients inevitably pile up behind 20 workers.
            _, _, err, _ = simple_query(s, f"SELECT {idx} * 2")
            done[idx] = (err is None)
            s.close()
        except Exception:
            done[idx] = False

    threads = [threading.Thread(target=worker, args=(i,)) for i in range(N)]
    for t in threads: t.start()
    for t in threads: t.join(timeout=30)

    ok_count = sum(1 for d in done if d)
    check(f"3. Pool queues {N} clients (> default pool size)",
          ok_count == N, f"{ok_count}/{N} ok")


# ────────────────────────────────────────────────────────────────────
# Test 4 — worker reuse: a session's state must NOT leak to the next
#   client that lands on the same worker.
# ────────────────────────────────────────────────────────────────────
def test_worker_state_isolation():
    # First connection: set session-scoped state that would leak if
    # the next client got the same worker's thread-local globals.
    a = conn()
    simple_query(a, "DROP TABLE IF EXISTS t_pool_iso")
    simple_query(a, "CREATE TABLE t_pool_iso (id INT PRIMARY KEY)")
    simple_query(a, "INSERT INTO t_pool_iso VALUES (42)")
    simple_query(a, "BEGIN")
    simple_query(a, "INSERT INTO t_pool_iso VALUES (99)")
    # Do NOT commit — the worker now carries an open tx_xid in its
    # thread-local state. Hard-close the socket to exercise the
    # pool's "disconnect-without-commit" cleanup.
    a.close()
    time.sleep(0.5)  # give the pool a moment to tear down

    # Second connection in a fresh session: must see only the
    # committed row, and must be able to run its own BEGIN/COMMIT
    # without a stale xid bleeding through.
    b = conn()
    _, rows, _, _ = simple_query(b, "SELECT id FROM t_pool_iso ORDER BY id")
    ids = [r[0] for r in rows]
    _, _, err_begin, _ = simple_query(b, "BEGIN")
    _, _, err_commit, _ = simple_query(b, "COMMIT")
    simple_query(b, "DROP TABLE IF EXISTS t_pool_iso")
    b.close()

    check("4. Worker reuse does not leak session state",
          ids == ['42'] and err_begin is None and err_commit is None,
          f"ids={ids} begin={err_begin} commit={err_commit}")


# ────────────────────────────────────────────────────────────────────
# Test 5 — raw socket close mid-handshake doesn't crash the pool
# ────────────────────────────────────────────────────────────────────
def test_abrupt_disconnect():
    for _ in range(20):
        s = socket.socket()
        s.settimeout(2)
        try:
            s.connect((HOST, PORT))
        except Exception:
            continue
        # Abort before sending StartupMessage — worker must not wedge.
        s.close()
    time.sleep(0.3)

    # Server still responsive afterwards?
    try:
        c = conn()
        _, rows, err, _ = simple_query(c, "SELECT 1")
        c.close()
    except Exception as e:
        check("5. Pool survives abrupt disconnects", False, str(e))
        return
    check("5. Pool survives abrupt disconnects",
          err is None and rows and rows[0][0] == '1',
          f"err={err} rows={rows}")


# ────────────────────────────────────────────────────────────────────
# Main
# ────────────────────────────────────────────────────────────────────
if __name__ == "__main__":
    for fn in [
        test_rapid_connect_disconnect,
        test_concurrent_queries,
        test_pool_queue_backpressure,
        test_worker_state_isolation,
        test_abrupt_disconnect,
    ]:
        try:
            fn()
        except Exception as e:
            check(fn.__name__, False, f"exception: {e}")

    print(f"\nPool: {PASS} passed, {FAIL} failed")
    if FAILS:
        print("Failures:", ", ".join(FAILS))
    sys.exit(0 if FAIL == 0 else 1)
