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

# --- T13: CTE + INSERT INTO SELECT ---
def test_cte_insert(s):
    setup(s)
    run(s, "DROP TABLE IF EXISTS target")
    run(s, "CREATE TABLE target (id INT PRIMARY KEY, name VARCHAR(50), dept VARCHAR(20), salary INT)")
    _, _, err, _ = run(s, "WITH top AS (SELECT * FROM emp WHERE salary > 90) INSERT INTO target SELECT * FROM top")
    if err: print(f"    err: {err}"); teardown(s); run(s, "DROP TABLE IF EXISTS target"); return False
    _, rows, _, _ = run(s, "SELECT name FROM target ORDER BY name")
    run(s, "DROP TABLE IF EXISTS target")
    teardown(s)
    names = [r[0] for r in rows]
    return len(rows) == 2 and 'Alice' in names and 'Eve' in names

# --- T14: CTE + UPDATE ---
def test_cte_update(s):
    setup(s)
    _, _, err, _ = run(s, "WITH low AS (SELECT id FROM emp WHERE salary < 80) UPDATE emp SET salary = 0 WHERE id IN (SELECT id FROM low)")
    if err: print(f"    err: {err}"); teardown(s); return False
    _, rows, _, _ = run(s, "SELECT name, salary FROM emp WHERE salary = 0")
    teardown(s)
    return len(rows) == 1 and rows[0][0] == 'Diana'

# --- T15: CTE + DELETE ---
def test_cte_delete(s):
    setup(s)
    _, _, err, _ = run(s, "WITH low AS (SELECT id FROM emp WHERE salary < 80) DELETE FROM emp WHERE id IN (SELECT id FROM low)")
    if err: print(f"    err: {err}"); teardown(s); return False
    _, rows, _, _ = run(s, "SELECT COUNT(*) FROM emp")
    teardown(s)
    return len(rows) == 1 and rows[0][0] == '4'

# --- T16: CTE + INSERT verify data ---
def test_cte_insert_verify(s):
    setup(s)
    run(s, "DROP TABLE IF EXISTS target2")
    run(s, "CREATE TABLE target2 (dept VARCHAR(20), total INT)")
    _, _, err, _ = run(s, "WITH ds AS (SELECT dept, SUM(salary) AS total FROM emp GROUP BY dept) INSERT INTO target2 SELECT * FROM ds")
    if err: print(f"    err: {err}"); teardown(s); run(s, "DROP TABLE IF EXISTS target2"); return False
    _, rows, _, _ = run(s, "SELECT * FROM target2 ORDER BY dept")
    run(s, "DROP TABLE IF EXISTS target2")
    teardown(s)
    val_map = {r[0]: r[1] for r in rows}
    return val_map.get('ENG') == '275' and val_map.get('HR') == '160'

# --- T17: CTE with LIMIT ---
def test_cte_limit(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH t AS (SELECT name, salary FROM emp ORDER BY salary DESC LIMIT 3) SELECT * FROM t")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3

# --- T18: CTE with multiple columns ---
def test_cte_multi_col(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH t AS (SELECT name, dept, salary FROM emp WHERE salary >= 90) SELECT name, dept FROM t ORDER BY name")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3 and rows[0][0] == 'Alice'

# --- T19: CTE with COUNT(*) ---
def test_cte_count(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH eng AS (SELECT * FROM emp WHERE dept = 'ENG') SELECT COUNT(*) FROM eng")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '3'

# --- T20: CTE in subquery ---
def test_cte_in_subquery(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH top AS (SELECT id FROM emp WHERE salary > 90) SELECT name FROM emp WHERE id IN (SELECT id FROM top)")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    names = sorted([r[0] for r in rows])
    return names == ['Alice', 'Eve']

# --- T21: Large CTE (stress buffer) ---
def test_cte_large(s):
    setup(s)
    # Build a CTE with many OR conditions to exceed old 4KB limit
    conditions = " OR ".join([f"salary > {i}" for i in range(200)])
    sql = f"WITH big AS (SELECT * FROM emp WHERE {conditions}) SELECT COUNT(*) FROM big"
    _, rows, err, _ = run(s, sql)
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and int(rows[0][0]) == 5  # all match salary > 0

# --- T22: Column list alias ---
def test_column_alias(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH t(isim, maas) AS (SELECT name, salary FROM emp) SELECT isim, maas FROM t ORDER BY isim")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 5 and rows[0][0] == 'Alice'

# --- T23: Column alias partial (fewer aliases than columns) ---
def test_column_alias_partial(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH t(isim) AS (SELECT name, salary FROM emp) SELECT isim FROM t ORDER BY isim")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 5 and rows[0][0] == 'Alice'

# --- T24: UNION ALL in CTE ---
def test_cte_union_all(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH combined AS (SELECT name FROM emp WHERE dept = 'ENG' UNION ALL SELECT name FROM emp WHERE dept = 'HR') SELECT * FROM combined ORDER BY name")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    names = [r[0] for r in rows]
    return len(rows) == 5 and 'Alice' in names and 'Diana' in names

# --- T25: UNION (dedup) in CTE ---
def test_cte_union(s):
    setup(s)
    _, rows, err, _ = run(s, "WITH combined AS (SELECT name FROM emp WHERE salary > 80 UNION SELECT name FROM emp WHERE dept = 'HR') SELECT * FROM combined ORDER BY name")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # salary>80: Alice, Charlie, Eve; HR: Charlie, Diana → UNION dedup → Alice, Charlie, Diana, Eve = 4
    return len(rows) == 4

# --- T26: RECURSIVE basic tree ---
def test_recursive_basic(s):
    run(s, "DROP TABLE IF EXISTS tree")
    run(s, "CREATE TABLE tree (id INT PRIMARY KEY, name VARCHAR(50), parent_id INT)")
    run(s, "INSERT INTO tree VALUES (1, 'Root', NULL)")
    run(s, "INSERT INTO tree VALUES (2, 'A', 1)")
    run(s, "INSERT INTO tree VALUES (3, 'B', 1)")
    run(s, "INSERT INTO tree VALUES (4, 'A1', 2)")
    _, rows, err, _ = run(s, "WITH RECURSIVE hier AS (SELECT id, name, parent_id FROM tree WHERE parent_id IS NULL UNION ALL SELECT t.id, t.name, t.parent_id FROM tree t JOIN hier h ON t.parent_id = h.id) SELECT name FROM hier ORDER BY name")
    run(s, "DROP TABLE IF EXISTS tree")
    if err: print(f"    err: {err}"); return False
    names = sorted([r[0] for r in rows])
    return names == ['A', 'A1', 'B', 'Root']

# --- T27: RECURSIVE multi-level ---
def test_recursive_multi_level(s):
    run(s, "DROP TABLE IF EXISTS tree")
    run(s, "CREATE TABLE tree (id INT PRIMARY KEY, name VARCHAR(50), parent_id INT)")
    run(s, "INSERT INTO tree VALUES (1, 'Root', NULL)")
    run(s, "INSERT INTO tree VALUES (2, 'L1A', 1)")
    run(s, "INSERT INTO tree VALUES (3, 'L1B', 1)")
    run(s, "INSERT INTO tree VALUES (4, 'L2A', 2)")
    run(s, "INSERT INTO tree VALUES (5, 'L2B', 3)")
    run(s, "INSERT INTO tree VALUES (6, 'L3A', 4)")
    _, rows, err, _ = run(s, "WITH RECURSIVE hier AS (SELECT id, name FROM tree WHERE name = 'Root' UNION ALL SELECT t.id, t.name FROM tree t JOIN hier h ON t.parent_id = h.id) SELECT name FROM hier ORDER BY name")
    run(s, "DROP TABLE IF EXISTS tree")
    if err: print(f"    err: {err}"); return False
    names = sorted([r[0] for r in rows])
    return len(rows) == 6 and 'L3A' in names and 'Root' in names

# --- T28: RECURSIVE terminates (no infinite loop) ---
def test_recursive_terminates(s):
    run(s, "DROP TABLE IF EXISTS tree")
    run(s, "CREATE TABLE tree (id INT PRIMARY KEY, name VARCHAR(50), parent_id INT)")
    run(s, "INSERT INTO tree VALUES (1, 'Root', NULL)")
    run(s, "INSERT INTO tree VALUES (2, 'Child', 1)")
    # Simple 2-level tree — should terminate in 2 iterations
    _, rows, err, _ = run(s, "WITH RECURSIVE h AS (SELECT id, name FROM tree WHERE parent_id IS NULL UNION ALL SELECT t.id, t.name FROM tree t JOIN h ON t.parent_id = h.id) SELECT * FROM h")
    run(s, "DROP TABLE IF EXISTS tree")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2

# --- T29: RECURSIVE arithmetic sequence ---
def test_recursive_arithmetic(s):
    run(s, "DROP TABLE IF EXISTS nums")
    run(s, "CREATE TABLE nums (n INT PRIMARY KEY)")
    run(s, "INSERT INTO nums VALUES (1)")
    _, rows, err, _ = run(s, "WITH RECURSIVE seq AS (SELECT n FROM nums WHERE n = 1 UNION ALL SELECT n + 1 AS n FROM seq WHERE n < 5) SELECT n FROM seq ORDER BY n")
    run(s, "DROP TABLE IF EXISTS nums")
    if err: print(f"    err: {err}"); return False
    vals = [r[0] for r in rows]
    return vals == ['1', '2', '3', '4', '5']

# --- T30: RECURSIVE terminates on no new rows ---
def test_recursive_fixed_point(s):
    run(s, "DROP TABLE IF EXISTS tree")
    run(s, "CREATE TABLE tree (id INT PRIMARY KEY, name VARCHAR(50), parent_id INT)")
    run(s, "INSERT INTO tree VALUES (1, 'Root', NULL)")
    run(s, "INSERT INTO tree VALUES (2, 'Child', 1)")
    # 2 levels: Root → Child, then recursive finds no more children → stops
    _, rows, err, _ = run(s, "WITH RECURSIVE h AS (SELECT id, name FROM tree WHERE parent_id IS NULL UNION ALL SELECT t.id, t.name FROM tree t JOIN h ON t.parent_id = h.id) SELECT COUNT(*) FROM h")
    run(s, "DROP TABLE IF EXISTS tree")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and int(rows[0][0]) == 2

# --- T31: RECURSIVE arithmetic descending ---
def test_recursive_descending(s):
    run(s, "DROP TABLE IF EXISTS nums")
    run(s, "CREATE TABLE nums (n INT PRIMARY KEY)")
    run(s, "INSERT INTO nums VALUES (10)")
    _, rows, err, _ = run(s, "WITH RECURSIVE seq AS (SELECT n FROM nums UNION ALL SELECT n - 1 AS n FROM seq WHERE n > 6) SELECT n FROM seq ORDER BY n")
    run(s, "DROP TABLE IF EXISTS nums")
    if err: print(f"    err: {err}"); return False
    vals = [r[0] for r in rows]
    return vals == ['6', '7', '8', '9', '10']

# --- T32: RECURSIVE depth expression (h.depth + 1 in JOIN) ---
def test_recursive_depth(s):
    run(s, "DROP TABLE IF EXISTS tree")
    run(s, "CREATE TABLE tree (id INT PRIMARY KEY, name VARCHAR(50), parent_id INT)")
    run(s, "INSERT INTO tree VALUES (1, 'Root', NULL)")
    run(s, "INSERT INTO tree VALUES (2, 'A', 1)")
    run(s, "INSERT INTO tree VALUES (3, 'B', 1)")
    run(s, "INSERT INTO tree VALUES (4, 'A1', 2)")
    _, rows, err, _ = run(s, "WITH RECURSIVE hier AS (SELECT id, name, 0 AS depth FROM tree WHERE parent_id IS NULL UNION ALL SELECT t.id, t.name, h.depth + 1 FROM tree t JOIN hier h ON t.parent_id = h.id) SELECT name, depth FROM hier ORDER BY depth, name")
    run(s, "DROP TABLE IF EXISTS tree")
    if err: print(f"    err: {err}"); return False
    depth_map = {r[0]: r[1] for r in rows}
    return (depth_map.get('Root') == '0' and
            depth_map.get('A') == '1' and
            depth_map.get('B') == '1' and
            depth_map.get('A1') == '2')

# --- T33: JOIN expression eval (p.id + 100) ---
def test_join_expression(s):
    run(s, "DROP TABLE IF EXISTS tree")
    run(s, "CREATE TABLE tree (id INT PRIMARY KEY, name VARCHAR(50), parent_id INT)")
    run(s, "INSERT INTO tree VALUES (1, 'Root', NULL)")
    run(s, "INSERT INTO tree VALUES (2, 'A', 1)")
    _, rows, err, _ = run(s, "SELECT t.name, p.id + 100 AS calc FROM tree t JOIN tree p ON t.parent_id = p.id")
    run(s, "DROP TABLE IF EXISTS tree")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'A' and rows[0][1] == '101'

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
    print("--- Gap Fix Tests ---")
    test("T13: CTE + INSERT INTO SELECT", test_cte_insert)
    test("T14: CTE + UPDATE", test_cte_update)
    test("T15: CTE + DELETE", test_cte_delete)
    test("T16: CTE + INSERT verify", test_cte_insert_verify)
    test("T17: CTE with LIMIT", test_cte_limit)
    test("T18: CTE multi column", test_cte_multi_col)
    test("T19: CTE COUNT(*)", test_cte_count)
    test("T20: CTE in subquery", test_cte_in_subquery)
    test("T21: Large CTE (buffer stress)", test_cte_large)
    print("--- G2/G3/G1 Gap Fix Tests ---")
    test("T22: Column list alias", test_column_alias)
    test("T23: Column alias partial", test_column_alias_partial)
    test("T24: UNION ALL in CTE", test_cte_union_all)
    test("T25: UNION in CTE", test_cte_union)
    test("T26: RECURSIVE basic tree", test_recursive_basic)
    test("T27: RECURSIVE multi-level", test_recursive_multi_level)
    test("T28: RECURSIVE terminates", test_recursive_terminates)
    test("T29: RECURSIVE arithmetic", test_recursive_arithmetic)
    test("T30: RECURSIVE fixed point", test_recursive_fixed_point)
    test("T31: RECURSIVE descending", test_recursive_descending)
    test("T32: RECURSIVE depth expr", test_recursive_depth)
    test("T33: JOIN expression eval", test_join_expression)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
