"""
test_multi_delete.py — Tests for Multi-Table DELETE with JOIN (Task 43)
"""

import sys, os
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

PASS = 0
FAIL = 0

def run(sock, sql):
    return simple_query(sock, sql)

def test(name, fn):
    global PASS, FAIL
    s = conn()
    try:
        ok = fn(s)
        if ok:
            PASS += 1
            print(f"  PASS  {name}")
        else:
            FAIL += 1
            print(f"  FAIL  {name}")
    except Exception as e:
        FAIL += 1
        print(f"  FAIL  {name}: {e}")
    finally:
        s.close()


# ── Setup helpers ──

def setup_basic(s):
    """Create orders and customers tables for testing multi-table DELETE."""
    run(s, "DROP TABLE IF EXISTS md_orders")
    run(s, "DROP TABLE IF EXISTS md_customers")
    run(s, "CREATE TABLE md_customers (id INT PRIMARY KEY, name VARCHAR(50), status VARCHAR(20))")
    run(s, "CREATE TABLE md_orders (id INT PRIMARY KEY, customer_id INT, amount INT)")
    run(s, "INSERT INTO md_customers VALUES (1, 'Alice', 'active')")
    run(s, "INSERT INTO md_customers VALUES (2, 'Bob', 'inactive')")
    run(s, "INSERT INTO md_customers VALUES (3, 'Carol', 'active')")
    run(s, "INSERT INTO md_customers VALUES (4, 'Dave', 'inactive')")
    run(s, "INSERT INTO md_orders VALUES (100, 1, 500)")
    run(s, "INSERT INTO md_orders VALUES (101, 2, 300)")
    run(s, "INSERT INTO md_orders VALUES (102, 2, 200)")
    run(s, "INSERT INTO md_orders VALUES (103, 3, 400)")
    run(s, "INSERT INTO md_orders VALUES (104, 5, 100)")  # orphan: no customer 5


def cleanup(s):
    run(s, "DROP TABLE IF EXISTS md_orders")
    run(s, "DROP TABLE IF EXISTS md_customers")


# ── Normal Tests (5) ──

def test_basic_join_delete(s):
    """T1: DELETE orders that have matching customers via INNER JOIN"""
    setup_basic(s)
    cols, rows, err, tag = run(s,
        "DELETE md_orders FROM md_orders "
        "INNER JOIN md_customers ON md_orders.customer_id = md_customers.id "
        "WHERE md_customers.status = 'inactive'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    # Bob (id=2) is inactive, orders 101 and 102 should be deleted
    _, remaining, _, _ = run(s, "SELECT * FROM md_orders ORDER BY id")
    cleanup(s)
    # Should have orders 100, 103, 104 remaining
    return len(remaining) == 3 and remaining[0][0] == '100'

def test_join_delete_with_where(s):
    """T2: DELETE with WHERE filter on join condition"""
    setup_basic(s)
    cols, rows, err, tag = run(s,
        "DELETE md_orders FROM md_orders "
        "INNER JOIN md_customers ON md_orders.customer_id = md_customers.id "
        "WHERE md_customers.name = 'Alice'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, remaining, _, _ = run(s, "SELECT * FROM md_orders ORDER BY id")
    cleanup(s)
    # Alice's order (100) deleted, 4 remaining
    return len(remaining) == 4

def test_delete_both_tables(s):
    """T3: DELETE from both tables simultaneously"""
    setup_basic(s)
    cols, rows, err, tag = run(s,
        "DELETE md_customers, md_orders FROM md_customers "
        "INNER JOIN md_orders ON md_customers.id = md_orders.customer_id "
        "WHERE md_customers.status = 'inactive'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, cust_remaining, _, _ = run(s, "SELECT * FROM md_customers ORDER BY id")
    _, ord_remaining, _, _ = run(s, "SELECT * FROM md_orders ORDER BY id")
    cleanup(s)
    # Bob (id=2) deleted from customers, orders 101, 102 deleted
    cust_ok = len(cust_remaining) == 3  # Alice, Carol, Dave
    ord_ok = len(ord_remaining) == 3    # 100, 103, 104
    return cust_ok and ord_ok

def test_left_join_orphan_delete(s):
    """T4: DELETE orphan rows using LEFT JOIN ... WHERE IS NULL"""
    setup_basic(s)
    cols, rows, err, tag = run(s,
        "DELETE md_orders FROM md_orders "
        "LEFT JOIN md_customers ON md_orders.customer_id = md_customers.id "
        "WHERE md_customers.id IS NULL")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, remaining, _, _ = run(s, "SELECT * FROM md_orders ORDER BY id")
    cleanup(s)
    # Order 104 (customer_id=5, no customer) should be deleted
    return len(remaining) == 4 and all(r[0] != '104' for r in remaining)

def test_using_syntax(s):
    """T5: DELETE FROM ... USING syntax"""
    setup_basic(s)
    cols, rows, err, tag = run(s,
        "DELETE FROM md_orders USING md_customers "
        "INNER JOIN md_orders ON md_customers.id = md_orders.customer_id "
        "WHERE md_customers.status = 'inactive'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, remaining, _, _ = run(s, "SELECT * FROM md_orders ORDER BY id")
    cleanup(s)
    # Bob's orders (101, 102) deleted
    return len(remaining) == 3


# ── Edge Case Tests (3) ──

def test_no_matching_rows(s):
    """T6: DELETE with join that matches no rows — 0 deleted"""
    setup_basic(s)
    cols, rows, err, tag = run(s,
        "DELETE md_orders FROM md_orders "
        "INNER JOIN md_customers ON md_orders.customer_id = md_customers.id "
        "WHERE md_customers.name = 'NonExistent'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, remaining, _, _ = run(s, "SELECT * FROM md_orders ORDER BY id")
    cleanup(s)
    # All 5 orders should remain
    return len(remaining) == 5 and tag == 'DELETE 0'

def test_duplicate_matches_dedup(s):
    """T7: One-to-many join produces duplicate PKs — each deleted only once"""
    setup_basic(s)
    # Bob has 2 orders. Deleting Bob from customers via JOIN with orders
    # should delete Bob once (not fail on double-delete)
    cols, rows, err, tag = run(s,
        "DELETE md_customers FROM md_customers "
        "INNER JOIN md_orders ON md_customers.id = md_orders.customer_id "
        "WHERE md_customers.name = 'Bob'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, remaining, _, _ = run(s, "SELECT * FROM md_customers ORDER BY id")
    cleanup(s)
    # Bob deleted, 3 remaining (Alice, Carol, Dave)
    return len(remaining) == 3 and tag == 'DELETE 1'

def test_null_join_keys(s):
    """T8: NULL join keys should not match"""
    run(s, "DROP TABLE IF EXISTS md_b")
    run(s, "DROP TABLE IF EXISTS md_a")
    run(s, "CREATE TABLE md_a (id INT PRIMARY KEY, val INT)")
    run(s, "CREATE TABLE md_b (id INT PRIMARY KEY, ref_id INT)")
    run(s, "INSERT INTO md_a VALUES (1, 10)")
    run(s, "INSERT INTO md_a VALUES (2, 20)")
    run(s, "INSERT INTO md_b VALUES (1, NULL)")  # NULL ref_id
    run(s, "INSERT INTO md_b VALUES (2, 1)")
    cols, rows, err, tag = run(s,
        "DELETE md_a FROM md_a "
        "INNER JOIN md_b ON md_a.id = md_b.ref_id")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS md_b")
        run(s, "DROP TABLE IF EXISTS md_a")
        return False
    _, remaining, _, _ = run(s, "SELECT * FROM md_a ORDER BY id")
    run(s, "DROP TABLE IF EXISTS md_b")
    run(s, "DROP TABLE IF EXISTS md_a")
    # Only id=1 matched (md_b.ref_id=1), id=2 should remain
    # NULL ref_id in md_b should NOT match
    return len(remaining) == 1 and remaining[0][0] == '2'


# ── Error Tests (2) ──

def test_nonexistent_table_error(s):
    """T9: DELETE from non-existent table — should error"""
    setup_basic(s)
    cols, rows, err, tag = run(s,
        "DELETE no_such_table FROM no_such_table "
        "INNER JOIN md_customers ON no_such_table.id = md_customers.id")
    cleanup(s)
    return err is not None

def test_command_tag_count(s):
    """T10: Verify DELETE command tag reports correct count"""
    setup_basic(s)
    cols, rows, err, tag = run(s,
        "DELETE md_orders FROM md_orders "
        "INNER JOIN md_customers ON md_orders.customer_id = md_customers.id "
        "WHERE md_customers.status = 'active'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    cleanup(s)
    # Active customers: Alice (1 order) + Carol (1 order) = 2 orders deleted
    return tag == 'DELETE 2'


# ── Main ──

if __name__ == "__main__":
    print("=== Multi-Table DELETE Tests ===")
    test("T1: basic INNER JOIN delete", test_basic_join_delete)
    test("T2: JOIN delete with WHERE filter", test_join_delete_with_where)
    test("T3: delete from both tables", test_delete_both_tables)
    test("T4: LEFT JOIN orphan delete", test_left_join_orphan_delete)
    test("T5: USING syntax", test_using_syntax)
    test("T6: no matching rows", test_no_matching_rows)
    test("T7: duplicate matches dedup", test_duplicate_matches_dedup)
    test("T8: NULL join keys", test_null_join_keys)
    test("T9: non-existent table error", test_nonexistent_table_error)
    test("T10: command tag count", test_command_tag_count)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
