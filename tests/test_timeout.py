#!/usr/bin/env python3
"""test_timeout.py — Query timeout, evo_sleep(), evo_jitter() tests"""

import sys, os, time
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

PASS = 0
FAIL = 0

def check(name, cond):
    global PASS, FAIL
    if cond:
        PASS += 1
        print(f"  PASS: {name}")
    else:
        FAIL += 1
        print(f"  FAIL: {name}")

def run():
    s = conn()

    # ═══════════════════════════════════════════
    print("\n=== evo_sleep() ===")

    # Basic sleep
    t0 = time.time()
    cols, rows, err, tag = simple_query(s, "SELECT evo_sleep(100)")
    elapsed = (time.time() - t0) * 1000
    check("evo_sleep(100) succeeds", err is None)
    check("evo_sleep(100) returns 0", rows and rows[0][0] == '0')
    check(f"evo_sleep(100) took ~100ms (was {elapsed:.0f}ms)", elapsed >= 80 and elapsed < 500)

    # Zero sleep
    t0 = time.time()
    cols, rows, err, tag = simple_query(s, "SELECT evo_sleep(0)")
    elapsed = (time.time() - t0) * 1000
    check("evo_sleep(0) instant", elapsed < 50)

    # ═══════════════════════════════════════════
    print("\n=== evo_jitter() ===")

    # Basic jitter
    t0 = time.time()
    cols, rows, err, tag = simple_query(s, "SELECT evo_jitter(50, 150)")
    elapsed = (time.time() - t0) * 1000
    val = int(rows[0][0]) if rows else -1
    check("evo_jitter(50,150) succeeds", err is None)
    check(f"evo_jitter returns {val}ms (50-150 range)", val >= 50 and val <= 150)
    check(f"evo_jitter actual delay ~{elapsed:.0f}ms", elapsed >= 40 and elapsed < 500)

    # Zero jitter
    cols, rows, err, tag = simple_query(s, "SELECT evo_jitter(0, 0)")
    check("evo_jitter(0,0) returns 0", rows and rows[0][0] == '0')

    # ═══════════════════════════════════════════
    print("\n=== SET statement_timeout ===")

    # Set timeout
    _, _, err, _ = simple_query(s, "SET statement_timeout = 200")
    check("SET statement_timeout succeeds", err is None)

    # Query that finishes within timeout
    t0 = time.time()
    _, rows, err, _ = simple_query(s, "SELECT evo_sleep(50)")
    elapsed = (time.time() - t0) * 1000
    check("Short query within timeout succeeds", err is None)

    # Query that exceeds timeout
    t0 = time.time()
    _, rows, err, _ = simple_query(s, "SELECT evo_sleep(2000)")
    elapsed = (time.time() - t0) * 1000
    check("Long query times out", err is not None and "timeout" in err.lower())
    check(f"Timeout triggered in ~200ms (was {elapsed:.0f}ms)", elapsed < 1000)

    # Disable timeout (wait for watchdog thread to finish)
    simple_query(s, "SET statement_timeout = 0")
    time.sleep(0.3)  # let watchdog thread expire
    t0 = time.time()
    _, rows, err, _ = simple_query(s, "SELECT evo_sleep(100)")
    check("No timeout after SET 0", err is None)

    # ═══════════════════════════════════════════
    print("\n=== Timeout with table scan ===")

    simple_query(s, "CREATE TABLE timeout_test (id INTEGER PRIMARY KEY, v VARCHAR(50))")
    for batch in range(0, 1000, 25):
        vals = ", ".join(f"({i}, 'val{i}')" for i in range(batch+1, min(batch+26, 1001)))
        simple_query(s, f"INSERT INTO timeout_test (id, v) VALUES {vals}")

    # Normal scan works
    _, rows, err, _ = simple_query(s, "SELECT * FROM timeout_test")
    check("Normal scan: 1000 rows", rows and len(rows) == 1000)

    # With very short timeout (should cancel during scan... or not if scan is fast)
    simple_query(s, "SET statement_timeout = 1")
    _, rows, err, _ = simple_query(s, "SELECT evo_sleep(500)")
    check("1ms timeout cancels sleep", err is not None and "timeout" in err.lower())

    simple_query(s, "SET statement_timeout = 0")
    simple_query(s, "DROP TABLE timeout_test")

    # ═══════════════════════════════════════════
    print("\n=== evo_sleep in expressions ===")

    time.sleep(0.3)  # ensure no lingering watchdog
    simple_query(s, "CREATE TABLE sleep_test (id INTEGER PRIMARY KEY, name VARCHAR(50))")
    simple_query(s, "INSERT INTO sleep_test VALUES (1, 'test')")

    t0 = time.time()
    _, rows, err, _ = simple_query(s, "SELECT * FROM sleep_test WHERE evo_sleep(50) = 0")
    elapsed = (time.time() - t0) * 1000
    check("evo_sleep in WHERE works", err is None and rows and len(rows) > 0)
    check(f"WHERE evo_sleep delayed ~50ms (was {elapsed:.0f}ms)", elapsed >= 40)

    simple_query(s, "DROP TABLE sleep_test")

    s.close()

if __name__ == "__main__":
    print("=== EvoSQL Query Timeout & Delay Functions Tests ===")
    run()
    total = PASS + FAIL
    print(f"\nResults: {PASS}/{total} passed, {FAIL} failed")
    sys.exit(1 if FAIL > 0 else 0)
