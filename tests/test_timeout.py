#!/usr/bin/env python3
"""test_timeout.py — Query timeout, evo_sleep(), evo_jitter() + G1-G5 gap tests"""

import sys, os, time, socket, struct, threading
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query, pg_startup, _send, _recv

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
    print("\n=== SET evo_statement_timeout ===")

    # Set timeout
    _, _, err, _ = simple_query(s, "SET evo_statement_timeout = 200")
    check("SET evo_statement_timeout succeeds", err is None)

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
    simple_query(s, "SET evo_statement_timeout = 0")
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
    simple_query(s, "SET evo_statement_timeout = 1")
    _, rows, err, _ = simple_query(s, "SELECT evo_sleep(500)")
    check("1ms timeout cancels sleep", err is not None and "timeout" in err.lower())

    simple_query(s, "SET evo_statement_timeout = 0")
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


def run_g1_lock_timeout():
    """G1: SET EVO_LOCK_TIMEOUT — per-session lock wait timeout"""
    s1 = conn()
    s2 = conn()

    simple_query(s1, "CREATE TABLE lt_test (id INTEGER PRIMARY KEY, v VARCHAR(20))")
    simple_query(s1, "INSERT INTO lt_test VALUES (1, 'hello')")

    # Set a very short lock timeout on s2
    _, _, err, _ = simple_query(s2, "SET evo_lock_timeout = 200")
    check("SET evo_lock_timeout succeeds", err is None)

    # SHOW evo_lock_timeout
    _, rows, err, _ = simple_query(s2, "SHOW evo_lock_timeout")
    check("SHOW evo_lock_timeout returns 200", rows and rows[0][0] == '200')

    # s1 starts a transaction and locks a row
    simple_query(s1, "BEGIN")
    simple_query(s1, "UPDATE lt_test SET v = 'locked' WHERE id = 1")

    # s2 tries to UPDATE same row — should timeout quickly
    simple_query(s2, "BEGIN")
    t0 = time.time()
    _, _, err, _ = simple_query(s2, "UPDATE lt_test SET v = 'blocked' WHERE id = 1")
    elapsed = (time.time() - t0) * 1000
    check("Lock timeout produces error", err is not None)
    check(f"Lock timeout ~200ms (was {elapsed:.0f}ms)", elapsed >= 100 and elapsed < 2000)

    simple_query(s1, "ROLLBACK")
    simple_query(s2, "ROLLBACK")
    simple_query(s1, "DROP TABLE lt_test")
    s1.close()
    s2.close()


def run_g2_kill_query():
    """G2: KILL QUERY — cancel running query from another session"""
    s1 = conn()
    s2 = conn()

    # Get s1's pid from SHOW EVO_SESSIONS
    _, rows, err, _ = simple_query(s2, "SHOW evo_sessions")
    check("SHOW EVO_SESSIONS returns rows", rows and len(rows) >= 2)

    # Find s1's session by looking for a session with the right characteristics
    # Instead, let's use a thread approach: start a long query on s1,
    # then kill it from s2.

    result = {"err": None, "elapsed": 0}

    def slow_query():
        t0 = time.time()
        _, _, err, _ = simple_query(s1, "SELECT evo_sleep(10000)")
        result["elapsed"] = (time.time() - t0) * 1000
        result["err"] = err

    t = threading.Thread(target=slow_query)
    t.start()
    time.sleep(0.3)  # let the query start

    # Find the active session running evo_sleep
    _, rows, err, _ = simple_query(s2, "SHOW evo_processes")
    check("SHOW EVO_PROCESSES returns rows", rows and len(rows) >= 2)

    target_pid = None
    for row in (rows or []):
        if 'evo_sleep' in (row[5] or '').lower():
            target_pid = int(row[0])
            break
    check("Found sleeping session in SHOW EVO_PROCESSES", target_pid is not None)

    if target_pid:
        _, _, err, _ = simple_query(s2, f"KILL QUERY {target_pid}")
        check("KILL QUERY succeeds", err is None)

    t.join(timeout=5)
    check("Killed query returned", not t.is_alive())
    check(f"Killed query was cancelled (elapsed {result['elapsed']:.0f}ms)",
          result["err"] is not None and result["elapsed"] < 5000)

    # KILL non-existent session
    _, _, err, _ = simple_query(s2, "KILL QUERY 999999")
    check("KILL non-existent session returns error", err is not None)

    s1.close()
    s2.close()


def run_g3_cancel_request():
    """G3: PG CancelRequest — Ctrl+C style cancel"""
    s = conn()

    # Extract pid+secret from BackendKeyData during startup
    # We need a fresh connection to capture BackendKeyData
    raw = socket.socket()
    raw.settimeout(5)
    raw.connect(("127.0.0.1", 5433))

    # StartupMessage
    user_b = b"admin\x00"
    db_b = b"testdb\x00"
    payload = (b"\x00\x03\x00\x00"
               + b"user\x00" + user_b
               + b"database\x00" + db_b
               + b"\x00")
    _send(raw, struct.pack("!I", 4 + len(payload)) + payload)

    # Read startup messages to find BackendKeyData ('K')
    backend_pid = None
    backend_secret = None
    while True:
        tag = _recv(raw, 1)
        if not tag:
            break
        length = struct.unpack("!I", _recv(raw, 4))[0]
        body = _recv(raw, length - 4)
        if tag == b"R":
            auth_type = struct.unpack("!I", body[:4])[0]
            if auth_type == 3:
                pw_data = b"admin\x00"
                _send(raw, b"p" + struct.pack("!I", 4 + len(pw_data)) + pw_data)
        elif tag == b"K":
            backend_pid = struct.unpack("!I", body[:4])[0]
            backend_secret = struct.unpack("!I", body[4:8])[0]
        elif tag == b"Z":
            break

    check("BackendKeyData received", backend_pid is not None and backend_secret is not None)
    check("Cancel key is not 12345 (random)", backend_secret != 12345)

    if backend_pid and backend_secret:
        # Start a long-running query on this connection
        result = {"err": None, "elapsed": 0}
        def long_query():
            t0 = time.time()
            _, _, err, _ = simple_query(raw, "SELECT evo_sleep(10000)")
            result["elapsed"] = (time.time() - t0) * 1000
            result["err"] = err

        t = threading.Thread(target=long_query)
        t.start()
        time.sleep(0.3)

        # Send CancelRequest on a new connection
        cancel_sock = socket.socket()
        cancel_sock.settimeout(5)
        cancel_sock.connect(("127.0.0.1", 5433))
        cancel_msg = struct.pack("!IIII", 16, 80877102, backend_pid, backend_secret)
        cancel_sock.sendall(cancel_msg)
        cancel_sock.close()

        t.join(timeout=5)
        check("CancelRequest cancelled the query", not t.is_alive())
        check(f"CancelRequest query returned quickly ({result['elapsed']:.0f}ms)",
              result["err"] is not None and result["elapsed"] < 5000)
    else:
        check("CancelRequest cancelled the query", False)
        check("CancelRequest query returned quickly", False)

    raw.close()
    s.close()


def run_g4_idle_timeout():
    """G4: SET EVO_IDLE_TIMEOUT — disconnect idle connections"""
    s = conn()

    # Set idle timeout
    _, _, err, _ = simple_query(s, "SET evo_idle_timeout = 1000")
    check("SET evo_idle_timeout succeeds", err is None)

    # SHOW evo_idle_timeout
    _, rows, err, _ = simple_query(s, "SHOW evo_idle_timeout")
    check("SHOW evo_idle_timeout returns 1000", rows and rows[0][0] == '1000')

    # Query within timeout should work
    time.sleep(0.3)
    _, _, err, _ = simple_query(s, "SELECT 1")
    check("Query within idle timeout works", err is None)

    # Wait for idle timeout to trigger
    time.sleep(1.5)
    try:
        _, _, err, _ = simple_query(s, "SELECT 1")
        # If we get here, either the timeout didn't trigger or we got an error
        check("Idle timeout disconnected (got error)", err is not None)
    except Exception:
        check("Idle timeout disconnected (connection closed)", True)

    s.close()


def run_g5_show_sessions():
    """G5: SHOW EVO_SESSIONS / SHOW EVO_PROCESSES"""
    s = conn()

    # SHOW EVO_SESSIONS
    cols, rows, err, _ = simple_query(s, "SHOW evo_sessions")
    check("SHOW EVO_SESSIONS succeeds", err is None)
    check("SHOW EVO_SESSIONS has columns", cols and len(cols) == 5)
    check("SHOW EVO_SESSIONS has expected columns",
          cols == ['pid', 'username', 'database', 'state', 'duration_ms'])
    check("At least 1 session visible", rows and len(rows) >= 1)

    # Check our session is there with correct username
    found_admin = any(r[1] == 'admin' for r in (rows or []))
    check("Our session shows admin user", found_admin)

    # SHOW EVO_PROCESSES
    cols, rows, err, _ = simple_query(s, "SHOW evo_processes")
    check("SHOW EVO_PROCESSES succeeds", err is None)
    check("SHOW EVO_PROCESSES has 6 columns", cols and len(cols) == 6)
    check("SHOW EVO_PROCESSES includes query column",
          'query' in (cols or []))

    s.close()


if __name__ == "__main__":
    print("=== EvoSQL Query Timeout & Delay Functions Tests ===")
    run()

    print("\n\n=== G5: SHOW EVO_SESSIONS / EVO_PROCESSES ===")
    run_g5_show_sessions()

    print("\n\n=== G1: EVO_LOCK_TIMEOUT ===")
    run_g1_lock_timeout()

    print("\n\n=== G2: KILL QUERY ===")
    run_g2_kill_query()

    print("\n\n=== G3: PG CancelRequest ===")
    run_g3_cancel_request()

    print("\n\n=== G4: EVO_IDLE_TIMEOUT ===")
    run_g4_idle_timeout()

    total = PASS + FAIL
    print(f"\nResults: {PASS}/{total} passed, {FAIL} failed")
    sys.exit(1 if FAIL > 0 else 0)
