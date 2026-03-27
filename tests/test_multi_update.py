"""
test_multi_update.py — Tests for Multi-Table UPDATE with JOIN (Task 44)
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

def setup(s):
    """Create customers and orders tables."""
    run(s, "DROP TABLE IF EXISTS mu_orders")
    run(s, "DROP TABLE IF EXISTS mu_customers")
    run(s, "CREATE TABLE mu_customers (id INT PRIMARY KEY, name VARCHAR(50), status VARCHAR(20))")
    run(s, "CREATE TABLE mu_orders (id INT PRIMARY KEY, customer_id INT, total INT, tag VARCHAR(20))")
    run(s, "INSERT INTO mu_customers VALUES (1, 'Alice', 'gold')")
    run(s, "INSERT INTO mu_customers VALUES (2, 'Bob', 'silver')")
    run(s, "INSERT INTO mu_customers VALUES (3, 'Carol', 'gold')")
    run(s, "INSERT INTO mu_orders VALUES (100, 1, 500, 'pending')")
    run(s, "INSERT INTO mu_orders VALUES (101, 2, 300, 'pending')")
    run(s, "INSERT INTO mu_orders VALUES (102, 2, 200, 'pending')")
    run(s, "INSERT INTO mu_orders VALUES (103, 3, 400, 'pending')")
    run(s, "INSERT INTO mu_orders VALUES (104, 9, 100, 'pending')")  # orphan

def cleanup(s):
    run(s, "DROP TABLE IF EXISTS mu_orders")
    run(s, "DROP TABLE IF EXISTS mu_customers")


# ── Normal Tests (5) ──

def test_basic_cross_table(s):
    """T1: UPDATE orders tag from customers status via JOIN"""
    setup(s)
    cols, rows, err, tag = run(s,
        "UPDATE mu_orders "
        "INNER JOIN mu_customers ON mu_orders.customer_id = mu_customers.id "
        "SET mu_orders.tag = mu_customers.status "
        "WHERE mu_customers.status = 'gold'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, result, _, _ = run(s, "SELECT id, tag FROM mu_orders ORDER BY id")
    cleanup(s)
    # Orders 100 (Alice=gold), 103 (Carol=gold) should have tag='gold'
    # Orders 101, 102 (Bob=silver) and 104 (orphan) should still be 'pending'
    return (result[0][1] == 'gold' and
            result[1][1] == 'pending' and
            result[3][1] == 'gold' and
            tag == 'UPDATE 2')

def test_with_alias(s):
    """T2: UPDATE with table aliases"""
    setup(s)
    cols, rows, err, tag = run(s,
        "UPDATE mu_orders o "
        "INNER JOIN mu_customers c ON o.customer_id = c.id "
        "SET o.tag = c.name "
        "WHERE c.id = 1")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, result, _, _ = run(s, "SELECT id, tag FROM mu_orders WHERE id = 100")
    cleanup(s)
    return result[0][1] == 'Alice' and tag == 'UPDATE 1'

def test_literal_and_cross_table_mix(s):
    """T3: SET with both literal and cross-table reference"""
    setup(s)
    cols, rows, err, tag = run(s,
        "UPDATE mu_orders "
        "INNER JOIN mu_customers ON mu_orders.customer_id = mu_customers.id "
        "SET mu_orders.tag = 'shipped', mu_orders.total = mu_customers.id "
        "WHERE mu_customers.name = 'Bob'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, result, _, _ = run(s, "SELECT id, total, tag FROM mu_orders ORDER BY id")
    cleanup(s)
    # Bob's orders (101, 102): tag='shipped', total=2 (Bob's customer id)
    return (result[1][1] == '2' and result[1][2] == 'shipped' and
            result[2][1] == '2' and result[2][2] == 'shipped' and
            tag == 'UPDATE 2')

def test_update_all_joined(s):
    """T4: UPDATE all matching rows (no WHERE)"""
    setup(s)
    cols, rows, err, tag = run(s,
        "UPDATE mu_orders "
        "INNER JOIN mu_customers ON mu_orders.customer_id = mu_customers.id "
        "SET mu_orders.tag = mu_customers.status")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, result, _, _ = run(s, "SELECT id, tag FROM mu_orders ORDER BY id")
    cleanup(s)
    # 100=gold, 101=silver, 102=silver, 103=gold, 104=pending (orphan, no join match)
    return (result[0][1] == 'gold' and result[1][1] == 'silver' and
            result[3][1] == 'gold' and result[4][1] == 'pending')

def test_left_join_update(s):
    """T5: LEFT JOIN — only matching rows get updated"""
    setup(s)
    cols, rows, err, tag = run(s,
        "UPDATE mu_orders "
        "LEFT JOIN mu_customers ON mu_orders.customer_id = mu_customers.id "
        "SET mu_orders.tag = 'matched' "
        "WHERE mu_customers.id IS NOT NULL")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, result, _, _ = run(s, "SELECT id, tag FROM mu_orders ORDER BY id")
    cleanup(s)
    # Orders 100-103 matched, 104 not matched
    matched = all(r[1] == 'matched' for r in result[:4])
    orphan = result[4][1] == 'pending'
    return matched and orphan


# ── Edge Case Tests (3) ──

def test_no_matching_rows(s):
    """T6: No matching rows — 0 updated"""
    setup(s)
    cols, rows, err, tag = run(s,
        "UPDATE mu_orders "
        "INNER JOIN mu_customers ON mu_orders.customer_id = mu_customers.id "
        "SET mu_orders.tag = 'x' "
        "WHERE mu_customers.name = 'Nobody'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    cleanup(s)
    return tag == 'UPDATE 0'

def test_duplicate_pk_dedup(s):
    """T7: One-to-many join — each target row updated once"""
    setup(s)
    # Bob has 2 orders. Updating customers from orders should update Bob once.
    cols, rows, err, tag = run(s,
        "UPDATE mu_customers "
        "INNER JOIN mu_orders ON mu_customers.id = mu_orders.customer_id "
        "SET mu_customers.status = 'updated' "
        "WHERE mu_customers.name = 'Bob'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    _, result, _, _ = run(s, "SELECT id, status FROM mu_customers WHERE id = 2")
    cleanup(s)
    return result[0][1] == 'updated' and tag == 'UPDATE 1'

def test_null_from_join(s):
    """T8: NULL value from join source applied to target"""
    run(s, "DROP TABLE IF EXISTS mu_b")
    run(s, "DROP TABLE IF EXISTS mu_a")
    run(s, "CREATE TABLE mu_a (id INT PRIMARY KEY, val VARCHAR(20))")
    run(s, "CREATE TABLE mu_b (id INT PRIMARY KEY, ref_id INT, data VARCHAR(20))")
    run(s, "INSERT INTO mu_a VALUES (1, 'original')")
    run(s, "INSERT INTO mu_b VALUES (1, 1, NULL)")  # data is NULL
    cols, rows, err, tag = run(s,
        "UPDATE mu_a "
        "INNER JOIN mu_b ON mu_a.id = mu_b.ref_id "
        "SET mu_a.val = mu_b.data")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS mu_b")
        run(s, "DROP TABLE IF EXISTS mu_a")
        return False
    _, result, _, _ = run(s, "SELECT id, val FROM mu_a WHERE id = 1")
    run(s, "DROP TABLE IF EXISTS mu_b")
    run(s, "DROP TABLE IF EXISTS mu_a")
    # val should be NULL now
    return result[0][1] is None


# ── Error Tests (2) ──

def test_nonexistent_table_error(s):
    """T9: Target table not found — error"""
    setup(s)
    cols, rows, err, tag = run(s,
        "UPDATE no_such_table "
        "INNER JOIN mu_customers ON no_such_table.id = mu_customers.id "
        "SET no_such_table.name = mu_customers.name")
    cleanup(s)
    return err is not None

def test_command_tag_count(s):
    """T10: Verify UPDATE command tag reports correct count"""
    setup(s)
    cols, rows, err, tag = run(s,
        "UPDATE mu_orders "
        "INNER JOIN mu_customers ON mu_orders.customer_id = mu_customers.id "
        "SET mu_orders.tag = 'done' "
        "WHERE mu_customers.status = 'silver'")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    cleanup(s)
    # Bob (silver) has 2 orders (101, 102)
    return tag == 'UPDATE 2'


# ── Main ──

if __name__ == "__main__":
    print("=== Multi-Table UPDATE Tests ===")
    test("T1: basic cross-table update", test_basic_cross_table)
    test("T2: update with aliases", test_with_alias)
    test("T3: literal + cross-table mix", test_literal_and_cross_table_mix)
    test("T4: update all joined rows", test_update_all_joined)
    test("T5: LEFT JOIN update", test_left_join_update)
    test("T6: no matching rows", test_no_matching_rows)
    test("T7: duplicate PK dedup", test_duplicate_pk_dedup)
    test("T8: NULL from join source", test_null_from_join)
    test("T9: non-existent table error", test_nonexistent_table_error)
    test("T10: command tag count", test_command_tag_count)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
