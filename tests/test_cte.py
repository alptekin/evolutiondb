"""
test_cte.py — Tests for Common Table Expressions / WITH ... AS (Task 73)
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
    run(s, "DROP TABLE IF EXISTS emp")
    run(s, "CREATE TABLE emp (id INT PRIMARY KEY, name VARCHAR(50), dept VARCHAR(20), salary INT)")
    run(s, "INSERT INTO emp VALUES (1, 'Alice', 'ENG', 100)")
    run(s, "INSERT INTO emp VALUES (2, 'Bob', 'ENG', 80)")
    run(s, "INSERT INTO emp VALUES (3, 'Charlie', 'HR', 90)")
    run(s, "INSERT INTO emp VALUES (4, 'Diana', 'HR', 70)")
    run(s, "INSERT INTO emp VALUES (5, 'Eve', 'ENG', 95)")

def teardown(s):
    run(s, "DROP TABLE IF EXISTS emp")

# --- T1: Basic CTE ---
def test_basic_cte(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH top AS (SELECT * FROM emp WHERE salary > 80) SELECT name, salary FROM top")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    names = sorted([r[0] for r in rows])
    return len(rows) == 3 and 'Alice' in names and 'Charlie' in names and 'Eve' in names

# --- T2: CTE with WHERE on main query ---
def test_cte_with_where(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH all_eng AS (SELECT * FROM emp WHERE dept = 'ENG') SELECT name FROM all_eng WHERE salary > 90")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    names = [r[0] for r in rows]
    return len(rows) == 2 and 'Alice' in names and 'Eve' in names

# --- T3: Multiple CTEs ---
def test_multiple_ctes(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH eng AS (SELECT * FROM emp WHERE dept = 'ENG'), hr AS (SELECT * FROM emp WHERE dept = 'HR') SELECT name FROM hr")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    names = sorted([r[0] for r in rows])
    return names == ['Charlie', 'Diana']

# --- T4: CTE referencing previous CTE ---
def test_cte_chain(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH eng AS (SELECT * FROM emp WHERE dept = 'ENG'), top_eng AS (SELECT * FROM eng WHERE salary > 90) SELECT name FROM top_eng")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    names = sorted([r[0] for r in rows])
    return names == ['Alice', 'Eve']

# --- T5: CTE with aggregate ---
def test_cte_aggregate(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH dept_sal AS (SELECT dept, SUM(salary) AS total FROM emp GROUP BY dept) SELECT * FROM dept_sal")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    val_map = {r[0]: r[1] for r in rows}
    return val_map.get('ENG') == '275' and val_map.get('HR') == '160'

# --- T6: CTE with JOIN ---
def test_cte_join(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH top AS (SELECT * FROM emp WHERE salary > 90) SELECT top.name, emp.dept FROM top JOIN emp ON top.id = emp.id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2

# --- T7: CTE with ORDER BY in main query ---
def test_cte_orderby(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH t AS (SELECT * FROM emp WHERE dept = 'ENG') SELECT name, salary FROM t ORDER BY salary DESC")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3 and rows[0][0] == 'Alice' and rows[0][1] == '100'

# --- T8: CTE with ORDER BY inside CTE ---
def test_cte_inner_orderby(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH t AS (SELECT name, salary FROM emp ORDER BY salary DESC) SELECT * FROM t")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 5

# --- T9: CTE empty result ---
def test_cte_empty(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH t AS (SELECT * FROM emp WHERE salary > 9999) SELECT * FROM t")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 0

# --- T10: CTE single row ---
def test_cte_single_row(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH t AS (SELECT * FROM emp WHERE id = 1) SELECT name FROM t")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'Alice'

# --- T11: Nonexistent CTE reference → error ---
def test_error_nonexistent(s):
    setup(s)
    _, _, err, _ = run(s, "WITH a AS (SELECT * FROM emp) SELECT * FROM nonexistent_cte")
    teardown(s)
    return err is not None

# --- T12: Syntax error in CTE body ---
def test_error_syntax(s):
    setup(s)
    _, _, err, _ = run(s, "WITH a AS (INVALID SQL HERE) SELECT * FROM a")
    teardown(s)
    return err is not None

if __name__ == "__main__":
    print("=== CTE (Common Table Expressions) Tests ===")
    test("T1: Basic CTE", test_basic_cte)
    test("T2: CTE with WHERE", test_cte_with_where)
    test("T3: Multiple CTEs", test_multiple_ctes)
    test("T4: CTE chain (CTE refs CTE)", test_cte_chain)
    test("T5: CTE with aggregate", test_cte_aggregate)
    test("T6: CTE with JOIN", test_cte_join)
    test("T7: CTE ORDER BY main", test_cte_orderby)
    test("T8: CTE ORDER BY inner", test_cte_inner_orderby)
    test("T9: CTE empty result", test_cte_empty)
    test("T10: CTE single row", test_cte_single_row)
    test("T11: Nonexistent CTE ref", test_error_nonexistent)
    test("T12: Syntax error in CTE", test_error_syntax)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
