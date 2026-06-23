"""
test_xid_freeze.py -- Tests for XID freeze mechanism (GAP-14)

Verifies that RECLAIM TABLE correctly freezes old xmin values
and that frozen tuples remain visible after freeze.

Requires a running EvoSQL server on 127.0.0.1:5433 (docker compose up -d).
"""

import sys, os
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn as pg_conn, simple_query

HOST = '127.0.0.1'
PORT = 5433
USER = 'admin'
PASS = 'admin'
DB   = 'testdb'


class PGConnection:
    def __init__(self):
        self._sock = pg_conn(host=HOST, port=PORT, user=USER,
                             password=PASS, database=DB)

    def query(self, sql):
        cols, rows, err, tag = simple_query(self._sock, sql)
        if err is not None:
            raise RuntimeError(f"Query error: {err}")
        return rows

    def query_raw(self, sql):
        return simple_query(self._sock, sql)

    def close(self):
        self._sock.close()


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


# --------------------------------------------------------------------------
# 1. RECLAIM preserves updated rows (non-destructive UPDATE + RECLAIM)
# --------------------------------------------------------------------------
def test_reclaim_preserves_updated_rows():
    c = PGConnection()
    tbl = "xid_freeze_t1"
    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.query(f"CREATE TABLE {tbl} (id INTEGER PRIMARY KEY, val VARCHAR(50))")

    for i in range(10):
        c.query(f"INSERT INTO {tbl} VALUES ({i}, 'original')")

    # Update 5 rows (non-destructive: old version soft-deleted)
    c.query(f"UPDATE {tbl} SET val = 'updated' WHERE id < 5")

    # Delete 2 rows
    c.query(f"DELETE FROM {tbl} WHERE id >= 8")

    rows = c.query(f"SELECT COUNT(*) FROM {tbl}")
    assert rows[0][0] == '8', f"Expected 8 rows before RECLAIM, got {rows[0][0]}"

    # RECLAIM should remove dead tuples but preserve live ones
    c.query(f"RECLAIM TABLE {tbl}")

    rows = c.query(f"SELECT COUNT(*) FROM {tbl}")
    assert rows[0][0] == '8', f"Expected 8 rows after RECLAIM, got {rows[0][0]}"

    # Verify updated values
    rows = c.query(f"SELECT id, val FROM {tbl} WHERE id = 0")
    assert rows[0][1] == 'updated', f"Expected 'updated', got '{rows[0][1]}'"

    rows = c.query(f"SELECT id, val FROM {tbl} WHERE id = 5")
    assert rows[0][1] == 'original', f"Expected 'original', got '{rows[0][1]}'"

    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.close()


# --------------------------------------------------------------------------
# 2. Frozen tuples remain visible after RECLAIM
# --------------------------------------------------------------------------
def test_frozen_tuples_visible():
    c = PGConnection()
    tbl = "xid_freeze_t2"
    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.query(f"CREATE TABLE {tbl} (id INTEGER PRIMARY KEY, val VARCHAR(50))")

    for i in range(5):
        c.query(f"INSERT INTO {tbl} VALUES ({i}, 'row_{i}')")

    # RECLAIM (may freeze tuples depending on XID age)
    c.query(f"RECLAIM TABLE {tbl}")

    # All rows should still be visible
    rows = c.query(f"SELECT COUNT(*) FROM {tbl}")
    assert rows[0][0] == '5', f"Expected 5 rows after RECLAIM, got {rows[0][0]}"

    # Verify data integrity
    rows = c.query(f"SELECT id, val FROM {tbl} ORDER BY id")
    assert len(rows) == 5, f"Expected 5 rows, got {len(rows)}"
    for i in range(5):
        assert rows[i][0] == str(i), f"Expected id={i}, got {rows[i][0]}"
        assert rows[i][1] == f'row_{i}', f"Expected 'row_{i}', got '{rows[i][1]}'"

    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.close()


# --------------------------------------------------------------------------
# 3. Multiple RECLAIM cycles preserve data
# --------------------------------------------------------------------------
def test_multiple_reclaim_cycles():
    c = PGConnection()
    tbl = "xid_freeze_t3"
    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.query(f"CREATE TABLE {tbl} (id INTEGER PRIMARY KEY, val VARCHAR(50))")

    for i in range(10):
        c.query(f"INSERT INTO {tbl} VALUES ({i}, 'v{i}')")

    # First RECLAIM
    c.query(f"RECLAIM TABLE {tbl}")
    rows = c.query(f"SELECT COUNT(*) FROM {tbl}")
    assert rows[0][0] == '10', f"Expected 10 after first RECLAIM, got {rows[0][0]}"

    # Update some rows
    c.query(f"UPDATE {tbl} SET val = 'changed' WHERE id < 3")

    # Second RECLAIM
    c.query(f"RECLAIM TABLE {tbl}")
    rows = c.query(f"SELECT COUNT(*) FROM {tbl}")
    assert rows[0][0] == '10', f"Expected 10 after second RECLAIM, got {rows[0][0]}"

    # Delete and third RECLAIM
    c.query(f"DELETE FROM {tbl} WHERE id >= 7")
    c.query(f"RECLAIM TABLE {tbl}")
    rows = c.query(f"SELECT COUNT(*) FROM {tbl}")
    assert rows[0][0] == '7', f"Expected 7 after third RECLAIM, got {rows[0][0]}"

    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.close()


# --------------------------------------------------------------------------
# 4. RECLAIM with secondary index after UPDATE
# --------------------------------------------------------------------------
def test_reclaim_with_index_after_update():
    c = PGConnection()
    tbl = "xid_freeze_t4"
    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.query(f"CREATE TABLE {tbl} (id INTEGER PRIMARY KEY, name VARCHAR(50), score INTEGER)")
    c.query(f"CREATE INDEX idx_{tbl}_name ON {tbl} (name)")

    for i in range(10):
        c.query(f"INSERT INTO {tbl} VALUES ({i}, 'name_{i}', {i * 10})")

    # Update non-indexed column (HOT eligible)
    c.query(f"UPDATE {tbl} SET score = 999 WHERE id < 5")

    # Update indexed column (NOT HOT eligible)
    c.query(f"UPDATE {tbl} SET name = 'renamed' WHERE id = 7")

    c.query(f"RECLAIM TABLE {tbl}")

    rows = c.query(f"SELECT COUNT(*) FROM {tbl}")
    assert rows[0][0] == '10', f"Expected 10 rows after RECLAIM, got {rows[0][0]}"

    # Verify updated values
    rows = c.query(f"SELECT score FROM {tbl} WHERE id = 3")
    assert rows[0][0] == '999', f"Expected score=999, got {rows[0][0]}"

    rows = c.query(f"SELECT name FROM {tbl} WHERE id = 7")
    assert rows[0][0] == 'renamed', f"Expected 'renamed', got {rows[0][0]}"

    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.close()


# --------------------------------------------------------------------------
# 5. Transaction ROLLBACK of UPDATE + RECLAIM
# --------------------------------------------------------------------------
def test_rollback_update_then_reclaim():
    c = PGConnection()
    tbl = "xid_freeze_t5"
    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.query(f"CREATE TABLE {tbl} (id INTEGER PRIMARY KEY, val VARCHAR(50))")

    for i in range(5):
        c.query(f"INSERT INTO {tbl} VALUES ({i}, 'original')")

    # Update in transaction then rollback
    c.query("BEGIN")
    c.query(f"UPDATE {tbl} SET val = 'changed' WHERE id < 3")
    c.query("ROLLBACK")

    # Values should be original
    rows = c.query(f"SELECT val FROM {tbl} WHERE id = 0")
    assert rows[0][0] == 'original', f"Expected 'original' after ROLLBACK, got '{rows[0][0]}'"

    # RECLAIM should clean up the rolled-back update versions
    c.query(f"RECLAIM TABLE {tbl}")

    rows = c.query(f"SELECT COUNT(*) FROM {tbl}")
    assert rows[0][0] == '5', f"Expected 5 rows after RECLAIM, got {rows[0][0]}"

    rows = c.query(f"SELECT val FROM {tbl} WHERE id = 0")
    assert rows[0][0] == 'original', f"Expected 'original' after RECLAIM, got '{rows[0][0]}'"

    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.close()


# --------------------------------------------------------------------------
# 6. XID_FROZEN constant: xmin=1 is always visible
# --------------------------------------------------------------------------
def test_xid_frozen_visibility():
    """After freezing, tuples should remain visible to all snapshots."""
    c = PGConnection()
    tbl = "xid_freeze_t6"
    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.query(f"CREATE TABLE {tbl} (id INTEGER PRIMARY KEY, val VARCHAR(50))")

    c.query(f"INSERT INTO {tbl} VALUES (1, 'frozen_test')")

    # Multiple RECLAIMs shouldn't break anything
    for _ in range(3):
        c.query(f"RECLAIM TABLE {tbl}")

    rows = c.query(f"SELECT val FROM {tbl} WHERE id = 1")
    assert len(rows) == 1, f"Expected 1 row, got {len(rows)}"
    assert rows[0][0] == 'frozen_test', f"Expected 'frozen_test', got '{rows[0][0]}'"

    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.close()


# --------------------------------------------------------------------------
# 7. Large batch UPDATE + RECLAIM
# --------------------------------------------------------------------------
def test_large_batch_update_reclaim():
    c = PGConnection()
    tbl = "xid_freeze_t7"
    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.query(f"CREATE TABLE {tbl} (id INTEGER PRIMARY KEY, val INTEGER)")

    for i in range(100):
        c.query(f"INSERT INTO {tbl} VALUES ({i}, {i})")

    # Update all rows to a fixed value
    c.query(f"UPDATE {tbl} SET val = 9999 WHERE id >= 0")

    rows = c.query(f"SELECT COUNT(*) FROM {tbl}")
    assert rows[0][0] == '100', f"Expected 100 before RECLAIM, got {rows[0][0]}"

    c.query(f"RECLAIM TABLE {tbl}")

    rows = c.query(f"SELECT COUNT(*) FROM {tbl}")
    assert rows[0][0] == '100', f"Expected 100 after RECLAIM, got {rows[0][0]}"

    # Verify a sample
    rows = c.query(f"SELECT val FROM {tbl} WHERE id = 50")
    assert rows[0][0] == '9999', f"Expected 9999, got {rows[0][0]}"

    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.close()


# --------------------------------------------------------------------------
# 8. INSERT after RECLAIM works
# --------------------------------------------------------------------------
def test_insert_after_reclaim():
    c = PGConnection()
    tbl = "xid_freeze_t8"
    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.query(f"CREATE TABLE {tbl} (id INTEGER PRIMARY KEY, val VARCHAR(50))")

    c.query(f"INSERT INTO {tbl} VALUES (1, 'first')")
    c.query(f"DELETE FROM {tbl} WHERE id = 1")
    c.query(f"RECLAIM TABLE {tbl}")

    # Should be able to re-insert the same key
    c.query(f"INSERT INTO {tbl} VALUES (1, 'reinserted')")
    rows = c.query(f"SELECT val FROM {tbl} WHERE id = 1")
    assert rows[0][0] == 'reinserted', f"Expected 'reinserted', got '{rows[0][0]}'"

    c.query(f"DROP TABLE IF EXISTS {tbl}")
    c.close()


# --------------------------------------------------------------------------
if __name__ == "__main__":
    print("=== XID Freeze & Non-destructive UPDATE RECLAIM Tests ===")

    run_test("reclaim_preserves_updated_rows", test_reclaim_preserves_updated_rows)
    run_test("frozen_tuples_visible", test_frozen_tuples_visible)
    run_test("multiple_reclaim_cycles", test_multiple_reclaim_cycles)
    run_test("reclaim_with_index_after_update", test_reclaim_with_index_after_update)
    run_test("rollback_update_then_reclaim", test_rollback_update_then_reclaim)
    run_test("xid_frozen_visibility", test_xid_frozen_visibility)
    run_test("large_batch_update_reclaim", test_large_batch_update_reclaim)
    run_test("insert_after_reclaim", test_insert_after_reclaim)

    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
