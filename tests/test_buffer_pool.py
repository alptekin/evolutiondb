#!/usr/bin/env python3
"""
Test buffer pool integration — validates that the buffer pool
caches pages correctly without breaking any SQL operations.

Requires a running EvoSQL server on localhost:5433.
"""

import sys, os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pg_helpers import conn, simple_query

passed = 0
total = 0

def test(label, fn):
    global passed, total
    total += 1
    try:
        fn()
        print(f"  PASS: {label}")
        passed += 1
    except Exception as e:
        print(f"  FAIL: {label} — {e}")

def setup(s):
    simple_query(s, "DROP TABLE IF EXISTS bp_test")
    simple_query(s, "DROP TABLE IF EXISTS bp_test2")

# ----------------------------------------------------------------
#  Test functions
# ----------------------------------------------------------------

def test_basic_insert_select():
    """INSERT + SELECT — data round-trips through buffer pool."""
    s = conn()
    setup(s)
    simple_query(s, "CREATE TABLE bp_test (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    simple_query(s, "INSERT INTO bp_test (id, name, score) VALUES (1, 'Alice', 90)")
    simple_query(s, "INSERT INTO bp_test (id, name, score) VALUES (2, 'Bob', 85)")
    simple_query(s, "INSERT INTO bp_test (id, name, score) VALUES (3, 'Charlie', 95)")

    cols, rows, err, _ = simple_query(s, "SELECT * FROM bp_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 3, f"Expected 3 rows, got {len(rows)}"
    names = sorted([r[1].strip() for r in rows])
    assert names == ["Alice", "Bob", "Charlie"], f"Unexpected names: {names}"
    s.close()

def test_batch_insert():
    """200-row batch INSERT → SELECT ALL — stress test for pool."""
    s = conn()
    setup(s)
    simple_query(s, "CREATE TABLE bp_test (id INT PRIMARY KEY, val VARCHAR(100))")

    for i in range(200):
        _, _, err, _ = simple_query(s, f"INSERT INTO bp_test (id, val) VALUES ({i}, 'row_{i}')")
        assert err is None, f"INSERT error at row {i}: {err}"

    cols, rows, err, _ = simple_query(s, "SELECT * FROM bp_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 200, f"Expected 200 rows, got {len(rows)}"
    s.close()

def test_update_coherence():
    """UPDATE + SELECT — cache coherence after modification."""
    s = conn()
    setup(s)
    simple_query(s, "CREATE TABLE bp_test (id INT PRIMARY KEY, name VARCHAR(50))")
    simple_query(s, "INSERT INTO bp_test (id, name) VALUES (1, 'OldName')")

    simple_query(s, "UPDATE bp_test SET name = 'NewName' WHERE id = 1")
    cols, rows, err, _ = simple_query(s, "SELECT * FROM bp_test WHERE id = 1")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 1, f"Expected 1 row, got {len(rows)}"
    assert rows[0][1].strip() == "NewName", f"Expected 'NewName', got '{rows[0][1]}'"
    s.close()

def test_delete_coherence():
    """DELETE + SELECT — cache coherence after deletion."""
    s = conn()
    setup(s)
    simple_query(s, "CREATE TABLE bp_test (id INT PRIMARY KEY, name VARCHAR(50))")
    simple_query(s, "INSERT INTO bp_test (id, name) VALUES (1, 'Alice')")
    simple_query(s, "INSERT INTO bp_test (id, name) VALUES (2, 'Bob')")

    simple_query(s, "DELETE FROM bp_test WHERE id = 1")
    cols, rows, err, _ = simple_query(s, "SELECT * FROM bp_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 1, f"Expected 1 row after delete, got {len(rows)}"
    assert rows[0][1].strip() == "Bob", f"Expected 'Bob', got '{rows[0][1]}'"
    s.close()

def test_drop_and_recreate():
    """DROP TABLE + re-CREATE — buffer pool invalidation."""
    s = conn()
    setup(s)
    simple_query(s, "CREATE TABLE bp_test (id INT PRIMARY KEY, name VARCHAR(50))")
    simple_query(s, "INSERT INTO bp_test (id, name) VALUES (1, 'Before')")

    simple_query(s, "DROP TABLE bp_test")
    simple_query(s, "CREATE TABLE bp_test (id INT PRIMARY KEY, title VARCHAR(80))")
    simple_query(s, "INSERT INTO bp_test (id, title) VALUES (1, 'After')")

    cols, rows, err, _ = simple_query(s, "SELECT * FROM bp_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 1, f"Expected 1 row, got {len(rows)}"
    assert rows[0][1].strip() == "After", f"Expected 'After', got '{rows[0][1]}'"
    s.close()

def test_multiple_tables():
    """Multiple tables — pool shared correctly across different fds."""
    s = conn()
    setup(s)
    simple_query(s, "CREATE TABLE bp_test (id INT PRIMARY KEY, a VARCHAR(50))")
    simple_query(s, "CREATE TABLE bp_test2 (id INT PRIMARY KEY, b VARCHAR(50))")

    simple_query(s, "INSERT INTO bp_test (id, a) VALUES (1, 'tableA')")
    simple_query(s, "INSERT INTO bp_test2 (id, b) VALUES (1, 'tableB')")

    _, rows_a, err, _ = simple_query(s, "SELECT * FROM bp_test")
    assert err is None, f"SELECT bp_test error: {err}"
    _, rows_b, err, _ = simple_query(s, "SELECT * FROM bp_test2")
    assert err is None, f"SELECT bp_test2 error: {err}"

    assert len(rows_a) == 1 and rows_a[0][1].strip() == "tableA"
    assert len(rows_b) == 1 and rows_b[0][1].strip() == "tableB"

    simple_query(s, "DROP TABLE bp_test2")
    s.close()

def test_sequential_scan_after_inserts():
    """Sequential scan reads all rows correctly after many inserts."""
    s = conn()
    setup(s)
    simple_query(s, "CREATE TABLE bp_test (id INT PRIMARY KEY, num INT)")

    for i in range(1, 51):
        simple_query(s, f"INSERT INTO bp_test (id, num) VALUES ({i}, {i * 10})")

    _, rows, err, _ = simple_query(s, "SELECT * FROM bp_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 50, f"Expected 50 rows, got {len(rows)}"

    # Verify values
    nums = sorted([int(r[1].strip()) for r in rows])
    expected = sorted([i * 10 for i in range(1, 51)])
    assert nums == expected, f"Value mismatch"
    s.close()

def test_repeated_select():
    """Multiple SELECTs — second should hit cache (faster)."""
    s = conn()
    setup(s)
    simple_query(s, "CREATE TABLE bp_test (id INT PRIMARY KEY, data VARCHAR(200))")
    for i in range(100):
        simple_query(s, f"INSERT INTO bp_test (id, data) VALUES ({i}, 'data_{i}')")

    # First SELECT loads into cache
    _, rows1, err, _ = simple_query(s, "SELECT * FROM bp_test")
    assert err is None and len(rows1) == 100

    # Second SELECT should use cached pages
    _, rows2, err, _ = simple_query(s, "SELECT * FROM bp_test")
    assert err is None and len(rows2) == 100

    # Results must match
    for r1, r2 in zip(sorted(rows1), sorted(rows2)):
        assert r1 == r2, f"Mismatch: {r1} vs {r2}"
    s.close()

def test_interleaved_operations():
    """INSERT/UPDATE/DELETE/SELECT interleaved — full coherence test."""
    s = conn()
    setup(s)
    simple_query(s, "CREATE TABLE bp_test (id INT PRIMARY KEY, status VARCHAR(20))")

    # Insert 10 rows
    for i in range(1, 11):
        simple_query(s, f"INSERT INTO bp_test (id, status) VALUES ({i}, 'active')")

    # Update even ids
    for i in range(2, 11, 2):
        simple_query(s, f"UPDATE bp_test SET status = 'inactive' WHERE id = {i}")

    # Delete ids > 8
    simple_query(s, "DELETE FROM bp_test WHERE id > 8")

    _, rows, err, _ = simple_query(s, "SELECT * FROM bp_test")
    assert err is None, f"SELECT error: {err}"
    assert len(rows) == 8, f"Expected 8 rows, got {len(rows)}"

    for r in rows:
        rid = int(r[0].strip())
        status = r[1].strip()
        if rid % 2 == 0:
            assert status == "inactive", f"id={rid} should be inactive, got {status}"
        else:
            assert status == "active", f"id={rid} should be active, got {status}"
    s.close()

# ----------------------------------------------------------------
#  Run all tests
# ----------------------------------------------------------------
if __name__ == "__main__":
    print("=== Buffer Pool Integration Tests ===\n")

    test("Basic INSERT + SELECT", test_basic_insert_select)
    test("500-row batch INSERT", test_batch_insert)
    test("UPDATE cache coherence", test_update_coherence)
    test("DELETE cache coherence", test_delete_coherence)
    test("DROP + re-CREATE invalidation", test_drop_and_recreate)
    test("Multiple tables pool sharing", test_multiple_tables)
    test("Sequential scan correctness", test_sequential_scan_after_inserts)
    test("Repeated SELECT (cache hits)", test_repeated_select)
    test("Interleaved operations", test_interleaved_operations)

    print(f"\n=== Results: {passed}/{total} passed ===")
    if passed < total:
        sys.exit(1)
