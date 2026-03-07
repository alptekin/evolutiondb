"""
test_transactions.py — Tests for BEGIN / COMMIT / ROLLBACK transactions

Requires a running EvoSQL server on 127.0.0.1:5433 (docker compose up -d).
"""

import sys, os, time, socket
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

PASS = 0
FAIL = 0

def run(name, fn):
    global PASS, FAIL
    try:
        fn()
        print(f"  PASS: {name}")
        PASS += 1
    except Exception as e:
        print(f"  FAIL: {name} — {e}")
        FAIL += 1


def setup_table(s, tbl="tx_test"):
    """Drop and recreate a test table."""
    simple_query(s, f"DROP TABLE {tbl}")
    cols, rows, err, tag = simple_query(s, f"CREATE TABLE {tbl} (id INT PRIMARY KEY, name VARCHAR(50))")
    if err:
        raise RuntimeError(f"CREATE TABLE failed: {err}")


# ── Test: BEGIN + INSERT + COMMIT → data visible ──
def test_commit_persists():
    s = conn()
    setup_table(s)

    simple_query(s, "BEGIN")
    simple_query(s, "INSERT INTO tx_test VALUES (1, 'alice')")
    simple_query(s, "INSERT INTO tx_test VALUES (2, 'bob')")
    simple_query(s, "COMMIT")

    cols, rows, err, tag = simple_query(s, "SELECT id, name FROM tx_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 2, f"Expected 2 rows, got {len(rows)}"
    s.close()


# ── Test: BEGIN + INSERT + ROLLBACK → data gone ──
def test_rollback_undoes_inserts():
    s = conn()
    setup_table(s)

    # Insert outside transaction (committed immediately)
    simple_query(s, "INSERT INTO tx_test VALUES (1, 'alice')")

    # Begin transaction, insert, then rollback
    simple_query(s, "BEGIN")
    simple_query(s, "INSERT INTO tx_test VALUES (2, 'bob')")
    simple_query(s, "INSERT INTO tx_test VALUES (3, 'charlie')")
    simple_query(s, "ROLLBACK")

    cols, rows, err, tag = simple_query(s, "SELECT id, name FROM tx_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 1, f"Expected 1 row after rollback, got {len(rows)}"
    assert rows[0][0] == '1', f"Expected id=1, got {rows[0][0]}"
    s.close()


# ── Test: BEGIN + UPDATE + ROLLBACK → original data restored ──
def test_rollback_undoes_update():
    s = conn()
    setup_table(s)

    simple_query(s, "INSERT INTO tx_test VALUES (1, 'alice')")
    simple_query(s, "INSERT INTO tx_test VALUES (2, 'bob')")

    simple_query(s, "BEGIN")
    simple_query(s, "UPDATE tx_test SET name = 'UPDATED' WHERE id = 1")
    simple_query(s, "ROLLBACK")

    cols, rows, err, tag = simple_query(s, "SELECT id, name FROM tx_test WHERE id = 1")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 1, f"Expected 1 row, got {len(rows)}"
    # Trim padding semicolons
    name = rows[0][1].rstrip(';').strip()
    assert name == 'alice', f"Expected 'alice' after rollback, got '{name}'"
    s.close()


# ── Test: BEGIN + DELETE + ROLLBACK → deleted rows restored ──
def test_rollback_undoes_delete():
    s = conn()
    setup_table(s)

    simple_query(s, "INSERT INTO tx_test VALUES (1, 'alice')")
    simple_query(s, "INSERT INTO tx_test VALUES (2, 'bob')")

    simple_query(s, "BEGIN")
    simple_query(s, "DELETE FROM tx_test WHERE id = 1")
    simple_query(s, "ROLLBACK")

    cols, rows, err, tag = simple_query(s, "SELECT id, name FROM tx_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 2, f"Expected 2 rows after rollback, got {len(rows)}"
    s.close()


# ── Test: Multi-statement transaction with mixed DML ──
def test_mixed_dml_rollback():
    s = conn()
    setup_table(s)

    simple_query(s, "INSERT INTO tx_test VALUES (1, 'alice')")
    simple_query(s, "INSERT INTO tx_test VALUES (2, 'bob')")

    simple_query(s, "BEGIN")
    simple_query(s, "INSERT INTO tx_test VALUES (3, 'charlie')")
    simple_query(s, "UPDATE tx_test SET name = 'CHANGED' WHERE id = 2")
    simple_query(s, "DELETE FROM tx_test WHERE id = 1")
    simple_query(s, "ROLLBACK")

    cols, rows, err, tag = simple_query(s, "SELECT id, name FROM tx_test")
    assert err is None, f"SELECT error: {err}"
    ids = sorted([r[0] for r in rows])
    assert ids == ['1', '2'], f"Expected ids [1,2] after rollback, got {ids}"

    # Verify bob's name is restored
    cols2, rows2, err2, tag2 = simple_query(s, "SELECT name FROM tx_test WHERE id = 2")
    name = rows2[0][0].rstrip(';').strip()
    assert name == 'bob', f"Expected 'bob' after rollback, got '{name}'"
    s.close()


# ── Test: Error in transaction → aborted state → only ROLLBACK works ──
def test_error_aborts_transaction():
    s = conn()
    setup_table(s)

    simple_query(s, "INSERT INTO tx_test VALUES (1, 'alice')")

    simple_query(s, "BEGIN")
    # This should fail (duplicate key)
    cols, rows, err, tag = simple_query(s, "INSERT INTO tx_test VALUES (1, 'duplicate')")
    # After error, further queries should fail with 25P02
    cols2, rows2, err2, tag2 = simple_query(s, "SELECT id FROM tx_test")
    assert err2 is not None, "Expected error in aborted transaction"
    assert "25P02" in err2 or "aborted" in err2, f"Expected abort error, got: {err2}"

    # ROLLBACK should work
    cols3, rows3, err3, tag3 = simple_query(s, "ROLLBACK")
    assert tag3 == "ROLLBACK", f"Expected ROLLBACK tag, got: {tag3}"

    # After ROLLBACK, queries should work again
    cols4, rows4, err4, tag4 = simple_query(s, "SELECT id FROM tx_test")
    assert err4 is None, f"SELECT error after ROLLBACK: {err4}"
    s.close()


# ── Test: Disconnect with open transaction → auto-rollback ──
def test_disconnect_rollback():
    # First connection: set up data
    s1 = conn()
    setup_table(s1)
    simple_query(s1, "INSERT INTO tx_test VALUES (1, 'alice')")
    s1.close()

    # Second connection: begin transaction, insert, then disconnect without commit
    s2 = conn()
    simple_query(s2, "BEGIN")
    simple_query(s2, "INSERT INTO tx_test VALUES (2, 'bob')")
    s2.close()

    # Give server time to detect disconnect and rollback
    time.sleep(0.5)

    # Third connection: verify bob's row was rolled back
    s3 = conn()
    cols, rows, err, tag = simple_query(s3, "SELECT id, name FROM tx_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 1, f"Expected 1 row after disconnect rollback, got {len(rows)}"
    assert rows[0][0] == '1', f"Expected id=1, got {rows[0][0]}"
    s3.close()


# ── Test: COMMIT without BEGIN is harmless ──
def test_commit_without_begin():
    s = conn()
    cols, rows, err, tag = simple_query(s, "COMMIT")
    assert tag == "COMMIT", f"Expected COMMIT tag, got: {tag}"
    assert err is None, f"Unexpected error: {err}"
    s.close()


# ── Test: ROLLBACK without BEGIN is harmless ──
def test_rollback_without_begin():
    s = conn()
    cols, rows, err, tag = simple_query(s, "ROLLBACK")
    assert tag == "ROLLBACK", f"Expected ROLLBACK tag, got: {tag}"
    assert err is None, f"Unexpected error: {err}"
    s.close()


# ── Test: Without transaction, DML auto-commits ──
def test_autocommit_without_begin():
    s = conn()
    setup_table(s)
    simple_query(s, "INSERT INTO tx_test VALUES (1, 'alice')")
    s.close()

    # Reconnect and verify data persists
    s2 = conn()
    cols, rows, err, tag = simple_query(s2, "SELECT id FROM tx_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 1, f"Expected 1 row, got {len(rows)}"
    s2.close()


# ── Run all tests ──
if __name__ == "__main__":
    print("=== Transaction Tests ===")
    run("COMMIT persists data", test_commit_persists)
    run("ROLLBACK undoes INSERTs", test_rollback_undoes_inserts)
    run("ROLLBACK undoes UPDATE", test_rollback_undoes_update)
    run("ROLLBACK undoes DELETE", test_rollback_undoes_delete)
    run("Mixed DML ROLLBACK", test_mixed_dml_rollback)
    run("Error aborts transaction", test_error_aborts_transaction)
    run("Disconnect auto-rollback", test_disconnect_rollback)
    run("COMMIT without BEGIN", test_commit_without_begin)
    run("ROLLBACK without BEGIN", test_rollback_without_begin)
    run("Auto-commit without BEGIN", test_autocommit_without_begin)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(1 if FAIL > 0 else 0)
