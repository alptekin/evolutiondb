"""
test_orderby_ordinal.py — Tests for ORDER BY ordinal position (Task 51)
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
    run(s, "DROP TABLE IF EXISTS ob_test")
    run(s, "CREATE TABLE ob_test (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "INSERT INTO ob_test VALUES (3, 'Carol', 85)")
    run(s, "INSERT INTO ob_test VALUES (1, 'Alice', 95)")
    run(s, "INSERT INTO ob_test VALUES (2, 'Bob', 70)")

def cleanup(s):
    run(s, "DROP TABLE IF EXISTS ob_test")

def test_ordinal_1(s):
    """T1: ORDER BY 1 — sort by first column (id)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name, score FROM ob_test ORDER BY 1")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return [r[0] for r in rows] == ['1', '2', '3']

def test_ordinal_2_desc(s):
    """T2: ORDER BY 2 DESC — sort by second column descending"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name, score FROM ob_test ORDER BY 2 DESC")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return rows[0][1] == 'Carol' and rows[2][1] == 'Alice'

def test_multi_ordinal(s):
    """T3: ORDER BY 3, 1 — multi-ordinal"""
    setup(s)
    run(s, "INSERT INTO ob_test VALUES (4, 'Dave', 70)")
    _, rows, err, _ = run(s, "SELECT id, name, score FROM ob_test ORDER BY 3, 1")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # score 70: Bob(2), Dave(4); score 85: Carol(3); score 95: Alice(1)
    return rows[0][0] == '2' and rows[1][0] == '4' and rows[2][0] == '3'

def test_mixed_ordinal_name(s):
    """T4: ORDER BY 3, name — mixed ordinal + column name"""
    setup(s)
    run(s, "INSERT INTO ob_test VALUES (4, 'Dave', 70)")
    _, rows, err, _ = run(s, "SELECT id, name, score FROM ob_test ORDER BY 3, name")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # score 70: Bob, Dave (alpha order); score 85: Carol; score 95: Alice
    return rows[0][1] == 'Bob' and rows[1][1] == 'Dave'

def test_ordinal_with_star(s):
    """T5: SELECT * ORDER BY 2 — ordinal with star"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM ob_test ORDER BY 2")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return rows[0][1] == 'Alice' and rows[2][1] == 'Carol'

def test_ordinal_out_of_range(s):
    """T6: ORDER BY 99 — out of range, ignored"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name FROM ob_test ORDER BY 99")
    cleanup(s)
    # Should not crash — ordinal ignored, unsorted
    return err is None and len(rows) == 3

def test_ordinal_in_union(s):
    """T7: UNION with ORDER BY ordinal"""
    setup(s)
    run(s, "DROP TABLE IF EXISTS ob_b")
    run(s, "CREATE TABLE ob_b (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "INSERT INTO ob_b VALUES (4, 'Dave', 60)")
    _, rows, err, _ = run(s, "SELECT id, name FROM ob_test UNION SELECT id, name FROM ob_b ORDER BY 1")
    run(s, "DROP TABLE IF EXISTS ob_b")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    ids = [r[0] for r in rows]
    return ids == ['1', '2', '3', '4']

def test_ordinal_name_compat(s):
    """T8: ORDER BY name still works (backward compat)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT id, name FROM ob_test ORDER BY name")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return rows[0][1] == 'Alice' and rows[2][1] == 'Carol'

if __name__ == "__main__":
    print("=== ORDER BY Ordinal Position Tests ===")
    test("T1: ORDER BY 1", test_ordinal_1)
    test("T2: ORDER BY 2 DESC", test_ordinal_2_desc)
    test("T3: multi-ordinal", test_multi_ordinal)
    test("T4: mixed ordinal + name", test_mixed_ordinal_name)
    test("T5: ordinal with SELECT *", test_ordinal_with_star)
    test("T6: out of range ordinal", test_ordinal_out_of_range)
    test("T7: UNION + ORDER BY ordinal", test_ordinal_in_union)
    test("T8: backward compat name", test_ordinal_name_compat)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
