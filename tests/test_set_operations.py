"""
test_set_operations.py — Tests for UNION/INTERSECT/EXCEPT/MINUS (Task 50)
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
    run(s, "DROP TABLE IF EXISTS so_b")
    run(s, "DROP TABLE IF EXISTS so_a")
    run(s, "CREATE TABLE so_a (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "CREATE TABLE so_b (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "INSERT INTO so_a VALUES (1, 'Alice')")
    run(s, "INSERT INTO so_a VALUES (2, 'Bob')")
    run(s, "INSERT INTO so_a VALUES (3, 'Carol')")
    run(s, "INSERT INTO so_b VALUES (2, 'Bob')")
    run(s, "INSERT INTO so_b VALUES (3, 'Carol')")
    run(s, "INSERT INTO so_b VALUES (4, 'Dave')")

def cleanup(s):
    run(s, "DROP TABLE IF EXISTS so_b")
    run(s, "DROP TABLE IF EXISTS so_a")

# ── Normal Tests (8) ──

def test_union_all(s):
    """T1: UNION ALL — all rows including duplicates"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name FROM so_a UNION ALL SELECT id, name FROM so_b")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 6  # 3 + 3

def test_union(s):
    """T2: UNION — duplicates removed"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name FROM so_a UNION SELECT id, name FROM so_b")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 4  # Alice, Bob, Carol, Dave (dedup)

def test_intersect(s):
    """T3: INTERSECT — only common rows"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name FROM so_a INTERSECT SELECT id, name FROM so_b")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # Common: Bob(2), Carol(3)
    return len(rows) == 2

def test_intersect_all(s):
    """T4: INTERSECT ALL — duplicates preserved"""
    run(s, "DROP TABLE IF EXISTS so_d2")
    run(s, "DROP TABLE IF EXISTS so_d1")
    run(s, "CREATE TABLE so_d1 (v INT PRIMARY KEY)")
    run(s, "CREATE TABLE so_d2 (v INT PRIMARY KEY)")
    run(s, "INSERT INTO so_d1 VALUES (1)")
    run(s, "INSERT INTO so_d1 VALUES (2)")
    run(s, "INSERT INTO so_d2 VALUES (2)")
    run(s, "INSERT INTO so_d2 VALUES (3)")
    _, rows, err, _ = run(s, "SELECT v FROM so_d1 INTERSECT ALL SELECT v FROM so_d2")
    run(s, "DROP TABLE IF EXISTS so_d2")
    run(s, "DROP TABLE IF EXISTS so_d1")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '2'

def test_except(s):
    """T5: EXCEPT — rows in first but not second"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name FROM so_a EXCEPT SELECT id, name FROM so_b")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # Only Alice(1) is in so_a but not so_b
    return len(rows) == 1 and rows[0][1] == 'Alice'

def test_except_all(s):
    """T6: EXCEPT ALL — difference with multiplicity"""
    run(s, "DROP TABLE IF EXISTS so_e2")
    run(s, "DROP TABLE IF EXISTS so_e1")
    run(s, "CREATE TABLE so_e1 (v INT PRIMARY KEY)")
    run(s, "CREATE TABLE so_e2 (v INT PRIMARY KEY)")
    run(s, "INSERT INTO so_e1 VALUES (1)")
    run(s, "INSERT INTO so_e1 VALUES (2)")
    run(s, "INSERT INTO so_e1 VALUES (3)")
    run(s, "INSERT INTO so_e2 VALUES (2)")
    _, rows, err, _ = run(s, "SELECT v FROM so_e1 EXCEPT ALL SELECT v FROM so_e2")
    run(s, "DROP TABLE IF EXISTS so_e2")
    run(s, "DROP TABLE IF EXISTS so_e1")
    if err: print(f"    err: {err}"); return False
    # 1, 3 remain (2 is subtracted)
    vals = sorted([r[0] for r in rows])
    return vals == ['1', '3']

def test_minus(s):
    """T7: MINUS — Oracle alias for EXCEPT"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name FROM so_a MINUS SELECT id, name FROM so_b")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'Alice'

def test_chained(s):
    """T8: Chained: A UNION B UNION C"""
    run(s, "DROP TABLE IF EXISTS so_c")
    run(s, "DROP TABLE IF EXISTS so_b")
    run(s, "DROP TABLE IF EXISTS so_a")
    run(s, "CREATE TABLE so_a (v INT PRIMARY KEY)")
    run(s, "CREATE TABLE so_b (v INT PRIMARY KEY)")
    run(s, "CREATE TABLE so_c (v INT PRIMARY KEY)")
    run(s, "INSERT INTO so_a VALUES (1)")
    run(s, "INSERT INTO so_b VALUES (2)")
    run(s, "INSERT INTO so_c VALUES (3)")
    _, rows, err, _ = run(s, "SELECT v FROM so_a UNION SELECT v FROM so_b UNION SELECT v FROM so_c")
    run(s, "DROP TABLE IF EXISTS so_c")
    run(s, "DROP TABLE IF EXISTS so_b")
    run(s, "DROP TABLE IF EXISTS so_a")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3

# ── Edge Cases (5) ──

def test_order_by_combined(s):
    """T9: ORDER BY on combined result"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name FROM so_a UNION SELECT id, name FROM so_b ORDER BY id")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # Should be sorted by id: 1, 2, 3, 4
    ids = [r[0] for r in rows]
    return ids == ['1', '2', '3', '4']

def test_limit_combined(s):
    """T10: LIMIT on combined result"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name FROM so_a UNION ALL SELECT id, name FROM so_b LIMIT 3")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3

def test_null_values(s):
    """T11: NULL values in UNION"""
    run(s, "DROP TABLE IF EXISTS so_n2")
    run(s, "DROP TABLE IF EXISTS so_n1")
    run(s, "CREATE TABLE so_n1 (id INT PRIMARY KEY, val VARCHAR(20))")
    run(s, "CREATE TABLE so_n2 (id INT PRIMARY KEY, val VARCHAR(20))")
    run(s, "INSERT INTO so_n1 VALUES (1, NULL)")
    run(s, "INSERT INTO so_n2 VALUES (2, NULL)")
    _, rows, err, _ = run(s, "SELECT val FROM so_n1 UNION SELECT val FROM so_n2")
    run(s, "DROP TABLE IF EXISTS so_n2")
    run(s, "DROP TABLE IF EXISTS so_n1")
    if err: print(f"    err: {err}"); return False
    # Both are NULL → dedup to 1 row
    return len(rows) == 1 and rows[0][0] is None

def test_intersect_empty(s):
    """T12: INTERSECT with no common rows → empty"""
    run(s, "DROP TABLE IF EXISTS so_ie2")
    run(s, "DROP TABLE IF EXISTS so_ie1")
    run(s, "CREATE TABLE so_ie1 (v INT PRIMARY KEY)")
    run(s, "CREATE TABLE so_ie2 (v INT PRIMARY KEY)")
    run(s, "INSERT INTO so_ie1 VALUES (1)")
    run(s, "INSERT INTO so_ie2 VALUES (2)")
    _, rows, err, _ = run(s, "SELECT v FROM so_ie1 INTERSECT SELECT v FROM so_ie2")
    run(s, "DROP TABLE IF EXISTS so_ie2")
    run(s, "DROP TABLE IF EXISTS so_ie1")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 0

def test_single_column_literal(s):
    """T13: Single column literal: SELECT 1 UNION SELECT 2"""
    _, rows, err, _ = run(s, "SELECT 1 UNION SELECT 2")
    if err: print(f"    err: {err}"); return False
    vals = sorted([r[0] for r in rows])
    return vals == ['1', '2']

# ── Error Cases (2) ──

def test_column_count_mismatch(s):
    """T14: Column count mismatch → error"""
    setup(s)
    _, _, err, _ = run(s, "SELECT id FROM so_a UNION SELECT id, name FROM so_b")
    cleanup(s)
    return err is not None and 'same number' in err.lower()

def test_except_no_match(s):
    """T15: EXCEPT with no matches → all of left returned"""
    run(s, "DROP TABLE IF EXISTS so_nm2")
    run(s, "DROP TABLE IF EXISTS so_nm1")
    run(s, "CREATE TABLE so_nm1 (v INT PRIMARY KEY)")
    run(s, "CREATE TABLE so_nm2 (v INT PRIMARY KEY)")
    run(s, "INSERT INTO so_nm1 VALUES (1)")
    run(s, "INSERT INTO so_nm1 VALUES (2)")
    run(s, "INSERT INTO so_nm2 VALUES (3)")
    _, rows, err, _ = run(s, "SELECT v FROM so_nm1 EXCEPT SELECT v FROM so_nm2")
    run(s, "DROP TABLE IF EXISTS so_nm2")
    run(s, "DROP TABLE IF EXISTS so_nm1")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2

# ── Main ──

if __name__ == "__main__":
    print("=== Set Operations Tests (UNION/INTERSECT/EXCEPT/MINUS) ===")
    test("T1: UNION ALL", test_union_all)
    test("T2: UNION (dedup)", test_union)
    test("T3: INTERSECT", test_intersect)
    test("T4: INTERSECT ALL", test_intersect_all)
    test("T5: EXCEPT", test_except)
    test("T6: EXCEPT ALL", test_except_all)
    test("T7: MINUS (Oracle)", test_minus)
    test("T8: chained UNION", test_chained)
    test("T9: ORDER BY combined", test_order_by_combined)
    test("T10: LIMIT combined", test_limit_combined)
    test("T11: NULL in UNION", test_null_values)
    test("T12: INTERSECT empty", test_intersect_empty)
    test("T13: literal UNION", test_single_column_literal)
    test("T14: column count mismatch", test_column_count_mismatch)
    test("T15: EXCEPT no match", test_except_no_match)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
