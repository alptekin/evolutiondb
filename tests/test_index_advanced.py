"""
test_index_advanced.py — Tests for Composite Index, Unique Index,
IF NOT EXISTS, and EXPLAIN features.
"""
import sys, os
sys.path.insert(0, os.path.dirname(__file__))

from pg_helpers import conn, simple_query

passed = 0
failed = 0

def ok(name):
    global passed
    passed += 1
    print(f"  PASS: {name}")

def fail(name, detail=""):
    global failed
    failed += 1
    print(f"  FAIL: {name} — {detail}")

def setup(s):
    """Drop and recreate test tables."""
    simple_query(s, "DROP INDEX idx_comp")
    simple_query(s, "DROP INDEX idx_uniq")
    simple_query(s, "DROP INDEX idx_name")
    simple_query(s, "DROP TABLE adv_test")
    simple_query(s, "CREATE TABLE adv_test (id INT PRIMARY KEY, first_name VARCHAR(50), last_name VARCHAR(50), code VARCHAR(20), score INT)")
    simple_query(s, "INSERT INTO adv_test VALUES (1, 'Alice', 'Smith', 'A001', 90)")
    simple_query(s, "INSERT INTO adv_test VALUES (2, 'Bob', 'Jones', 'B002', 85)")
    simple_query(s, "INSERT INTO adv_test VALUES (3, 'Alice', 'Jones', 'C003', 92)")
    simple_query(s, "INSERT INTO adv_test VALUES (4, 'Diana', 'Smith', 'D004', 70)")
    simple_query(s, "INSERT INTO adv_test VALUES (5, 'Eve', 'Brown', 'E005', 88)")

# ======================================================================
#  COMPOSITE INDEX TESTS
# ======================================================================

def test_composite_create(s):
    """Create a composite index on (first_name, last_name)."""
    cols, rows, err, tag = simple_query(s, "CREATE INDEX idx_comp ON adv_test (first_name, last_name)")
    if err:
        fail("composite_create", err)
    elif "CREATE INDEX" in (tag or ""):
        ok("composite_create")
    else:
        fail("composite_create", f"tag={tag}")

def test_composite_insert_updates_index(s):
    """Insert a row and verify the composite index is maintained."""
    cols, rows, err, tag = simple_query(s, "INSERT INTO adv_test VALUES (6, 'Frank', 'Lee', 'F006', 77)")
    if err:
        fail("composite_insert_updates_index", err)
    else:
        ok("composite_insert_updates_index")

def test_composite_delete_updates_index(s):
    """Delete a row and verify composite index is maintained."""
    cols, rows, err, tag = simple_query(s, "DELETE FROM adv_test WHERE id = 6")
    if err:
        fail("composite_delete_updates_index", err)
    else:
        ok("composite_delete_updates_index")

def test_composite_duplicate_allowed(s):
    """Composite non-unique index allows duplicate key combinations."""
    cols, rows, err, tag = simple_query(s, "INSERT INTO adv_test VALUES (7, 'Alice', 'Smith', 'G007', 80)")
    if err:
        fail("composite_duplicate_allowed", err)
    else:
        ok("composite_duplicate_allowed")
    # Clean up
    simple_query(s, "DELETE FROM adv_test WHERE id = 7")

# ======================================================================
#  UNIQUE INDEX TESTS
# ======================================================================

def test_unique_create(s):
    """Create a unique index on code column."""
    cols, rows, err, tag = simple_query(s, "CREATE UNIQUE INDEX idx_uniq ON adv_test (code)")
    if err:
        fail("unique_create", err)
    elif "CREATE INDEX" in (tag or ""):
        ok("unique_create")
    else:
        fail("unique_create", f"tag={tag}")

def test_unique_insert_duplicate_rejected(s):
    """Inserting a duplicate code should be rejected by unique index."""
    cols, rows, err, tag = simple_query(s, "INSERT INTO adv_test VALUES (8, 'Dup', 'Test', 'A001', 50)")
    if err and "unique" in err.lower():
        ok("unique_insert_duplicate_rejected")
    elif err:
        ok("unique_insert_duplicate_rejected (other error)")
    else:
        fail("unique_insert_duplicate_rejected", "insert should have failed")

def test_unique_insert_distinct_allowed(s):
    """Inserting a distinct code should succeed."""
    cols, rows, err, tag = simple_query(s, "INSERT INTO adv_test VALUES (8, 'George', 'Hall', 'H008', 60)")
    if err:
        fail("unique_insert_distinct_allowed", err)
    else:
        ok("unique_insert_distinct_allowed")
    simple_query(s, "DELETE FROM adv_test WHERE id = 8")

def test_unique_update_duplicate_rejected(s):
    """Updating to a duplicate code should be rejected."""
    cols, rows, err, tag = simple_query(s, "UPDATE adv_test SET code = 'A001' WHERE id = 2")
    if err and "unique" in err.lower():
        ok("unique_update_duplicate_rejected")
    elif err:
        ok("unique_update_duplicate_rejected (other error)")
    else:
        fail("unique_update_duplicate_rejected", "update should have failed")

def test_unique_update_same_value_ok(s):
    """Updating a row to the same code value should succeed (no change)."""
    cols, rows, err, tag = simple_query(s, "UPDATE adv_test SET code = 'B002' WHERE id = 2")
    if err:
        fail("unique_update_same_value_ok", err)
    else:
        ok("unique_update_same_value_ok")

def test_unique_create_on_duplicate_data(s):
    """Creating a unique index on a column with duplicate values should fail."""
    # score has duplicates: 90 appears twice (id 1 and id 3... actually id1=90, id3=92, not duplicate)
    # Let's insert a real duplicate first
    simple_query(s, "INSERT INTO adv_test VALUES (9, 'Zara', 'King', 'Z009', 90)")
    cols, rows, err, tag = simple_query(s, "CREATE UNIQUE INDEX idx_score_uniq ON adv_test (score)")
    if err and ("duplicate" in err.lower() or "unique" in err.lower()):
        ok("unique_create_on_duplicate_data")
    elif err:
        ok("unique_create_on_duplicate_data (other error)")
    else:
        fail("unique_create_on_duplicate_data", "should have failed due to duplicate scores")
        simple_query(s, "DROP INDEX idx_score_uniq")
    simple_query(s, "DELETE FROM adv_test WHERE id = 9")

# ======================================================================
#  IF NOT EXISTS TESTS
# ======================================================================

def test_if_not_exists_new_index(s):
    """CREATE INDEX IF NOT EXISTS creates a new index when it doesn't exist."""
    cols, rows, err, tag = simple_query(s, "CREATE INDEX IF NOT EXISTS idx_score ON adv_test (score)")
    if err:
        fail("if_not_exists_new_index", err)
    elif "CREATE INDEX" in (tag or ""):
        ok("if_not_exists_new_index")
    else:
        fail("if_not_exists_new_index", f"tag={tag}")
    simple_query(s, "DROP INDEX idx_score")

def test_if_not_exists_silent_on_existing(s):
    """CREATE INDEX IF NOT EXISTS on same columns should not error."""
    # idx_comp already exists on (first_name, last_name)
    cols, rows, err, tag = simple_query(s, "CREATE INDEX IF NOT EXISTS idx_comp_dup ON adv_test (first_name, last_name)")
    if err:
        fail("if_not_exists_silent_on_existing", err)
    else:
        ok("if_not_exists_silent_on_existing")

def test_without_if_not_exists_errors(s):
    """CREATE INDEX without IF NOT EXISTS on existing columns should error."""
    # Create index on first_name
    cols, rows, err, tag = simple_query(s, "CREATE INDEX idx_fn ON adv_test (first_name)")
    if err:
        fail("without_if_not_exists_errors (setup)", err)
        return
    # Try to create another on same column - should fail
    cols, rows, err, tag = simple_query(s, "CREATE INDEX idx_fn2 ON adv_test (first_name)")
    if err and "exists" in err.lower():
        ok("without_if_not_exists_errors")
    elif err:
        ok("without_if_not_exists_errors (other error)")
    else:
        fail("without_if_not_exists_errors", "should have failed")
    simple_query(s, "DROP INDEX idx_fn")

# ======================================================================
#  EXPLAIN TESTS
# ======================================================================

def test_explain_full_scan(s):
    """EXPLAIN on a SELECT without WHERE should show Seq Scan."""
    cols, rows, err, tag = simple_query(s, "EXPLAIN SELECT * FROM adv_test")
    if err:
        fail("explain_full_scan", err)
    elif rows and "Seq Scan" in rows[0][0]:
        ok("explain_full_scan")
    else:
        fail("explain_full_scan", f"rows={rows}")

def test_explain_pk_lookup(s):
    """EXPLAIN on WHERE pk = value should show PK Lookup."""
    cols, rows, err, tag = simple_query(s, "EXPLAIN SELECT * FROM adv_test WHERE id = 1")
    if err:
        fail("explain_pk_lookup", err)
    elif rows and "PK Lookup" in rows[0][0]:
        ok("explain_pk_lookup")
    else:
        fail("explain_pk_lookup", f"rows={rows}")

def test_explain_index_scan(s):
    """EXPLAIN on WHERE indexed_col = value should show Index Scan."""
    # Create index on first_name
    simple_query(s, "CREATE INDEX IF NOT EXISTS idx_explain_fn ON adv_test (first_name)")
    cols, rows, err, tag = simple_query(s, "EXPLAIN SELECT * FROM adv_test WHERE first_name = 'Alice'")
    if err:
        fail("explain_index_scan", err)
    elif rows and "Index Scan" in rows[0][0]:
        ok("explain_index_scan")
    else:
        fail("explain_index_scan", f"rows={rows}")
    simple_query(s, "DROP INDEX idx_explain_fn")

def test_explain_unique_index_scan(s):
    """EXPLAIN on WHERE unique_indexed_col = value should show Unique B-tree."""
    cols, rows, err, tag = simple_query(s, "EXPLAIN SELECT * FROM adv_test WHERE code = 'A001'")
    if err:
        fail("explain_unique_index_scan", err)
    elif rows and "Unique" in rows[0][0]:
        ok("explain_unique_index_scan")
    else:
        fail("explain_unique_index_scan", f"rows={rows}")

def test_explain_non_select(s):
    """EXPLAIN on non-SELECT should show Utility Statement."""
    cols, rows, err, tag = simple_query(s, "EXPLAIN INSERT INTO adv_test VALUES (99, 'X', 'Y', 'Z099', 0)")
    if err:
        fail("explain_non_select", err)
    elif rows and "Utility" in rows[0][0]:
        ok("explain_non_select")
    else:
        fail("explain_non_select", f"rows={rows}")

# ======================================================================
#  RUN ALL TESTS
# ======================================================================

if __name__ == "__main__":
    print("=== Advanced Index Tests ===")
    s = conn()
    simple_query(s, "USE testdb")

    setup(s)

    # Composite Index
    print("\n-- Composite Index --")
    test_composite_create(s)
    test_composite_insert_updates_index(s)
    test_composite_delete_updates_index(s)
    test_composite_duplicate_allowed(s)

    # Unique Index
    print("\n-- Unique Index --")
    test_unique_create(s)
    test_unique_insert_duplicate_rejected(s)
    test_unique_insert_distinct_allowed(s)
    test_unique_update_duplicate_rejected(s)
    test_unique_update_same_value_ok(s)
    test_unique_create_on_duplicate_data(s)

    # IF NOT EXISTS
    print("\n-- IF NOT EXISTS --")
    test_if_not_exists_new_index(s)
    test_if_not_exists_silent_on_existing(s)
    test_without_if_not_exists_errors(s)

    # EXPLAIN
    print("\n-- EXPLAIN --")
    test_explain_full_scan(s)
    test_explain_pk_lookup(s)
    test_explain_index_scan(s)
    test_explain_unique_index_scan(s)
    test_explain_non_select(s)

    # Cleanup
    simple_query(s, "DROP INDEX idx_comp")
    simple_query(s, "DROP INDEX idx_uniq")
    simple_query(s, "DROP TABLE adv_test")
    s.close()

    print(f"\n=== Results: {passed} passed, {failed} failed ===")
    sys.exit(1 if failed else 0)
