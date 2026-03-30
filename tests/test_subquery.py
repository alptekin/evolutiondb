"""
test_subquery.py — Tests for Scalar & WHERE Subqueries (Task 54)
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

def setup(s):
    run(s, "DROP TABLE IF EXISTS sq_orders")
    run(s, "DROP TABLE IF EXISTS sq_customers")
    run(s, "CREATE TABLE sq_customers (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "CREATE TABLE sq_orders (id INT PRIMARY KEY, cid INT, amount INT)")
    run(s, "INSERT INTO sq_customers VALUES (1, 'Alice')")
    run(s, "INSERT INTO sq_customers VALUES (2, 'Bob')")
    run(s, "INSERT INTO sq_customers VALUES (3, 'Carol')")
    run(s, "INSERT INTO sq_orders VALUES (100, 1, 500)")
    run(s, "INSERT INTO sq_orders VALUES (101, 1, 300)")
    run(s, "INSERT INTO sq_orders VALUES (102, 2, 200)")

def cleanup(s):
    run(s, "DROP TABLE IF EXISTS sq_orders")
    run(s, "DROP TABLE IF EXISTS sq_customers")

# ── Normal Tests (5) ──

def test_in_subquery(s):
    """T1: WHERE id IN (SELECT ...)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_customers WHERE id IN (SELECT cid FROM sq_orders)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # Customers 1 (Alice) and 2 (Bob) have orders
    return len(rows) == 2

def test_not_in_subquery(s):
    """T2: WHERE id NOT IN (SELECT ...)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_customers WHERE id NOT IN (SELECT cid FROM sq_orders)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # Only Carol (id=3) has no orders
    return len(rows) == 1 and rows[0][1] == 'Carol'

def test_scalar_comparison(s):
    """T3: WHERE val > (SELECT AVG(...))"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_orders WHERE amount > (SELECT AVG(amount) FROM sq_orders)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # AVG = (500+300+200)/3 = 333.33; orders > 333: id=100 (500)
    return len(rows) == 1 and rows[0][0] == '100'

def test_exists(s):
    """T4: WHERE EXISTS (SELECT ...)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_customers WHERE EXISTS (SELECT 1 FROM sq_orders WHERE sq_orders.cid = 1)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # EXISTS is true (orders for cid=1 exist), so ALL customers returned
    return len(rows) == 3

def test_not_exists(s):
    """T5: WHERE NOT EXISTS (SELECT ...)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_customers WHERE NOT EXISTS (SELECT 1 FROM sq_orders WHERE sq_orders.cid = 99)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # NOT EXISTS is true (no orders for cid=99), so ALL customers returned
    return len(rows) == 3

# ── Edge Cases (4) ──

def test_in_empty_result(s):
    """T6: IN subquery returns empty → no match"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_customers WHERE id IN (SELECT cid FROM sq_orders WHERE amount > 9999)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 0

def test_scalar_no_rows(s):
    """T7: Scalar subquery returns 0 rows → NULL → no match"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_orders WHERE amount > (SELECT amount FROM sq_orders WHERE id = 999)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # Comparing with NULL → no match
    return len(rows) == 0

def test_in_single_value(s):
    """T8: IN subquery returns single value"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_orders WHERE cid IN (SELECT id FROM sq_customers WHERE name = 'Alice')")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # Alice's orders: 100, 101
    return len(rows) == 2

def test_scalar_equality(s):
    """T9: Scalar subquery with = comparison"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_orders WHERE amount = (SELECT MIN(amount) FROM sq_orders)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][2] == '200'

# ── Error/Edge (3) ──

def test_exists_false(s):
    """T10: EXISTS with no matching rows → false"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_customers WHERE EXISTS (SELECT 1 FROM sq_orders WHERE amount > 9999)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 0

def test_not_in_all_match(s):
    """T11: NOT IN where all values match → empty result"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_customers WHERE id NOT IN (SELECT id FROM sq_customers)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 0

def test_scalar_with_where(s):
    """T12: Scalar subquery with WHERE clause"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM sq_orders WHERE amount = (SELECT MAX(amount) FROM sq_orders)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][2] == '500'

if __name__ == "__main__":
    print("=== Subquery Tests ===")
    test("T1: IN subquery", test_in_subquery)
    test("T2: NOT IN subquery", test_not_in_subquery)
    test("T3: scalar comparison", test_scalar_comparison)
    test("T4: EXISTS", test_exists)
    test("T5: NOT EXISTS", test_not_exists)
    test("T6: IN empty result", test_in_empty_result)
    test("T7: scalar no rows", test_scalar_no_rows)
    test("T8: IN single value", test_in_single_value)
    test("T9: scalar equality", test_scalar_equality)
    test("T10: EXISTS false", test_exists_false)
    test("T11: NOT IN all match", test_not_in_all_match)
    test("T12: scalar with WHERE", test_scalar_with_where)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
