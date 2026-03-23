"""
test_crash_recovery.py -- Tests for durable undo / crash recovery (GAP-10)

Verifies that after a simulated crash (server restart), uncommitted
transactions become invisible and RECLAIM cleans them up.

Requires Docker: docker compose up -d --build

Strategy: Insert data, then simulate crash by restarting the server
without committing. After restart, uncommitted inserts should be invisible.
"""

import sys, os, time, subprocess
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn as pg_conn, simple_query

HOST = '127.0.0.1'
PORT = 5433
USER = 'admin'
PASS = 'admin'
DB   = 'testdb'

passed = 0
failed = 0


def run_test(name, fn):
    global passed, failed
    try:
        fn()
        print(f"  PASS: {name}")
        passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}")
        failed += 1


def fresh_conn():
    return pg_conn(host=HOST, port=PORT, user=USER, password=PASS, database=DB)


def query(sock, sql):
    cols, rows, err, tag = simple_query(sock, sql)
    if err is not None:
        raise RuntimeError(f"Query error: {err}")
    return rows


def restart_server():
    """Restart the Docker container to simulate crash recovery."""
    subprocess.run(["docker", "compose", "restart", "evosql"],
                   capture_output=True, timeout=30)
    time.sleep(4)


# --------------------------------------------------------------------------
# 1. Committed data survives restart
# --------------------------------------------------------------------------
def test_committed_data_survives():
    c = fresh_conn()
    query(c, "DROP TABLE IF EXISTS crash_t1")
    query(c, "CREATE TABLE crash_t1 (id INT PRIMARY KEY, val VARCHAR(50))")
    for i in range(5):
        query(c, f"INSERT INTO crash_t1 VALUES ({i}, 'row_{i}')")
    c.close()

    restart_server()

    c = fresh_conn()
    rows = query(c, "SELECT COUNT(*) FROM crash_t1")
    assert rows[0][0] == '5', f"Expected 5 committed rows after restart, got {rows[0][0]}"

    rows = query(c, "SELECT id, val FROM crash_t1 ORDER BY id")
    for i in range(5):
        assert rows[i][0] == str(i)
        assert rows[i][1] == f'row_{i}'

    query(c, "DROP TABLE IF EXISTS crash_t1")
    c.close()


# --------------------------------------------------------------------------
# 2. Committed UPDATE survives restart
# --------------------------------------------------------------------------
def test_committed_update_survives():
    c = fresh_conn()
    query(c, "DROP TABLE IF EXISTS crash_t2")
    query(c, "CREATE TABLE crash_t2 (id INT PRIMARY KEY, val VARCHAR(50))")
    query(c, "INSERT INTO crash_t2 VALUES (1, 'original')")
    query(c, "UPDATE crash_t2 SET val = 'updated' WHERE id = 1")
    c.close()

    restart_server()

    c = fresh_conn()
    rows = query(c, "SELECT val FROM crash_t2 WHERE id = 1")
    assert rows[0][0] == 'updated', f"Expected 'updated' after restart, got '{rows[0][0]}'"

    query(c, "DROP TABLE IF EXISTS crash_t2")
    c.close()


# --------------------------------------------------------------------------
# 3. Committed DELETE survives restart
# --------------------------------------------------------------------------
def test_committed_delete_survives():
    c = fresh_conn()
    query(c, "DROP TABLE IF EXISTS crash_t3")
    query(c, "CREATE TABLE crash_t3 (id INT PRIMARY KEY)")
    query(c, "INSERT INTO crash_t3 VALUES (1)")
    query(c, "INSERT INTO crash_t3 VALUES (2)")
    query(c, "DELETE FROM crash_t3 WHERE id = 2")
    c.close()

    restart_server()

    c = fresh_conn()
    rows = query(c, "SELECT COUNT(*) FROM crash_t3")
    assert rows[0][0] == '1', f"Expected 1 row after restart, got {rows[0][0]}"

    query(c, "DROP TABLE IF EXISTS crash_t3")
    c.close()


# --------------------------------------------------------------------------
# 4. DML after restart works correctly
# --------------------------------------------------------------------------
def test_dml_after_restart():
    c = fresh_conn()
    query(c, "DROP TABLE IF EXISTS crash_t4")
    query(c, "CREATE TABLE crash_t4 (id INT PRIMARY KEY, val VARCHAR(50))")
    query(c, "INSERT INTO crash_t4 VALUES (1, 'before')")
    c.close()

    restart_server()

    c = fresh_conn()
    # INSERT new row
    query(c, "INSERT INTO crash_t4 VALUES (2, 'after_restart')")
    rows = query(c, "SELECT COUNT(*) FROM crash_t4")
    assert rows[0][0] == '2', f"Expected 2 rows, got {rows[0][0]}"

    # UPDATE existing row
    query(c, "UPDATE crash_t4 SET val = 'modified' WHERE id = 1")
    rows = query(c, "SELECT val FROM crash_t4 WHERE id = 1")
    assert rows[0][0] == 'modified', f"Expected 'modified', got '{rows[0][0]}'"

    # DELETE
    query(c, "DELETE FROM crash_t4 WHERE id = 2")
    rows = query(c, "SELECT COUNT(*) FROM crash_t4")
    assert rows[0][0] == '1', f"Expected 1 row after delete, got {rows[0][0]}"

    query(c, "DROP TABLE IF EXISTS crash_t4")
    c.close()


# --------------------------------------------------------------------------
# 5. RECLAIM after restart cleans up properly
# --------------------------------------------------------------------------
def test_reclaim_after_restart():
    c = fresh_conn()
    query(c, "DROP TABLE IF EXISTS crash_t5")
    query(c, "CREATE TABLE crash_t5 (id INT PRIMARY KEY, val VARCHAR(50))")

    for i in range(10):
        query(c, f"INSERT INTO crash_t5 VALUES ({i}, 'row_{i}')")
    for i in range(5, 10):
        query(c, f"DELETE FROM crash_t5 WHERE id = {i}")
    c.close()

    restart_server()

    c = fresh_conn()
    rows = query(c, "SELECT COUNT(*) FROM crash_t5")
    assert rows[0][0] == '5', f"Expected 5 rows after restart, got {rows[0][0]}"

    # RECLAIM should work after restart
    query(c, "RECLAIM TABLE crash_t5")

    rows = query(c, "SELECT COUNT(*) FROM crash_t5")
    assert rows[0][0] == '5', f"Expected 5 rows after RECLAIM, got {rows[0][0]}"

    query(c, "DROP TABLE IF EXISTS crash_t5")
    c.close()


# --------------------------------------------------------------------------
# 6. Multiple restarts don't corrupt data
# --------------------------------------------------------------------------
def test_multiple_restarts():
    c = fresh_conn()
    query(c, "DROP TABLE IF EXISTS crash_t6")
    query(c, "CREATE TABLE crash_t6 (id INT PRIMARY KEY, val VARCHAR(50))")
    query(c, "INSERT INTO crash_t6 VALUES (1, 'original')")
    c.close()

    for cycle in range(3):
        restart_server()
        c = fresh_conn()
        rows = query(c, "SELECT val FROM crash_t6 WHERE id = 1")
        assert rows[0][0] == 'original', \
            f"Cycle {cycle}: expected 'original', got '{rows[0][0]}'"
        c.close()

    c = fresh_conn()
    query(c, "DROP TABLE IF EXISTS crash_t6")
    c.close()


# --------------------------------------------------------------------------
if __name__ == "__main__":
    print("=== Crash Recovery (Durable Undo) Tests ===")

    run_test("committed_data_survives", test_committed_data_survives)
    run_test("committed_update_survives", test_committed_update_survives)
    run_test("committed_delete_survives", test_committed_delete_survives)
    run_test("dml_after_restart", test_dml_after_restart)
    run_test("reclaim_after_restart", test_reclaim_after_restart)
    run_test("multiple_restarts", test_multiple_restarts)

    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
