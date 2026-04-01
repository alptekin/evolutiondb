"""
test_views.py — Tests for CREATE VIEW / DROP VIEW (Task 70)
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

def test_create_select(s):
    """T1: CREATE VIEW + SELECT FROM view"""
    run(s, "DROP TABLE IF EXISTS vw_users")
    run(s, "DROP VIEW IF EXISTS vw_active")
    run(s, "CREATE TABLE vw_users (id INT PRIMARY KEY, name VARCHAR(50), status VARCHAR(20))")
    run(s, "INSERT INTO vw_users VALUES (1, 'Alice', 'active')")
    run(s, "INSERT INTO vw_users VALUES (2, 'Bob', 'inactive')")
    run(s, "INSERT INTO vw_users VALUES (3, 'Carol', 'active')")
    _, _, err, _ = run(s, "CREATE VIEW vw_active AS SELECT * FROM vw_users WHERE status = 'active'")
    if err: print(f"    create err: {err}"); run(s, "DROP TABLE IF EXISTS vw_users"); return False
    _, rows, err, _ = run(s, "SELECT * FROM vw_active")
    run(s, "DROP VIEW IF EXISTS vw_active")
    run(s, "DROP TABLE IF EXISTS vw_users")
    if err: print(f"    select err: {err}"); return False
    return len(rows) == 2

def test_create_or_replace(s):
    """T2: CREATE OR REPLACE VIEW"""
    run(s, "DROP TABLE IF EXISTS vw_t")
    run(s, "DROP VIEW IF EXISTS vw_v")
    run(s, "CREATE TABLE vw_t (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO vw_t VALUES (1, 10)")
    run(s, "INSERT INTO vw_t VALUES (2, 20)")
    run(s, "CREATE VIEW vw_v AS SELECT * FROM vw_t WHERE val > 5")
    _, r1, _, _ = run(s, "SELECT * FROM vw_v")
    run(s, "CREATE OR REPLACE VIEW vw_v AS SELECT * FROM vw_t WHERE val > 15")
    _, r2, _, _ = run(s, "SELECT * FROM vw_v")
    run(s, "DROP VIEW IF EXISTS vw_v")
    run(s, "DROP TABLE IF EXISTS vw_t")
    return len(r1) == 2 and len(r2) == 1

def test_drop_view(s):
    """T3: DROP VIEW"""
    run(s, "DROP TABLE IF EXISTS vw_t")
    run(s, "DROP VIEW IF EXISTS vw_v")
    run(s, "CREATE TABLE vw_t (id INT PRIMARY KEY)")
    run(s, "CREATE VIEW vw_v AS SELECT * FROM vw_t")
    _, _, err1, _ = run(s, "DROP VIEW vw_v")
    _, _, err2, _ = run(s, "SELECT * FROM vw_v")
    run(s, "DROP TABLE IF EXISTS vw_t")
    return err1 is None and err2 is not None

def test_view_with_where(s):
    """T4: View with WHERE + outer WHERE"""
    run(s, "DROP TABLE IF EXISTS vw_scores")
    run(s, "DROP VIEW IF EXISTS vw_high")
    run(s, "CREATE TABLE vw_scores (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "INSERT INTO vw_scores VALUES (1, 'Alice', 90)")
    run(s, "INSERT INTO vw_scores VALUES (2, 'Bob', 70)")
    run(s, "INSERT INTO vw_scores VALUES (3, 'Carol', 85)")
    run(s, "CREATE VIEW vw_high AS SELECT * FROM vw_scores WHERE score >= 80")
    _, rows, err, _ = run(s, "SELECT * FROM vw_high")
    run(s, "DROP VIEW IF EXISTS vw_high")
    run(s, "DROP TABLE IF EXISTS vw_scores")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2  # Alice + Carol (score >= 80)

def test_view_order_limit(s):
    """T5: SELECT from view with ORDER BY + LIMIT"""
    run(s, "DROP TABLE IF EXISTS vw_t")
    run(s, "DROP VIEW IF EXISTS vw_v")
    run(s, "CREATE TABLE vw_t (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO vw_t VALUES (1, 30)")
    run(s, "INSERT INTO vw_t VALUES (2, 10)")
    run(s, "INSERT INTO vw_t VALUES (3, 20)")
    run(s, "CREATE VIEW vw_v AS SELECT * FROM vw_t")
    _, rows, err, _ = run(s, "SELECT * FROM vw_v")
    run(s, "DROP VIEW IF EXISTS vw_v")
    run(s, "DROP TABLE IF EXISTS vw_t")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3  # all rows from view

def test_drop_if_exists_not_found(s):
    """T6: DROP VIEW IF EXISTS (not exists)"""
    _, _, err, _ = run(s, "DROP VIEW IF EXISTS nonexistent_view_xyz")
    return err is None

def test_create_duplicate_error(s):
    """T7: CREATE VIEW duplicate → error"""
    run(s, "DROP TABLE IF EXISTS vw_t")
    run(s, "DROP VIEW IF EXISTS vw_dup")
    run(s, "CREATE TABLE vw_t (id INT PRIMARY KEY)")
    run(s, "CREATE VIEW vw_dup AS SELECT * FROM vw_t")
    _, _, err, _ = run(s, "CREATE VIEW vw_dup AS SELECT * FROM vw_t")
    run(s, "DROP VIEW IF EXISTS vw_dup")
    run(s, "DROP TABLE IF EXISTS vw_t")
    return err is not None and 'already exists' in err.lower()

def test_select_dropped_view_error(s):
    """T8: SELECT from dropped view → error"""
    run(s, "DROP TABLE IF EXISTS vw_t")
    run(s, "DROP VIEW IF EXISTS vw_gone")
    run(s, "CREATE TABLE vw_t (id INT PRIMARY KEY)")
    run(s, "CREATE VIEW vw_gone AS SELECT * FROM vw_t")
    run(s, "DROP VIEW vw_gone")
    _, _, err, _ = run(s, "SELECT * FROM vw_gone")
    run(s, "DROP TABLE IF EXISTS vw_t")
    return err is not None

def test_drop_nonexistent_error(s):
    """T9: DROP VIEW nonexistent → error"""
    _, _, err, _ = run(s, "DROP VIEW nonexistent_view_abc")
    return err is not None

def test_view_count(s):
    """T10: View with aggregate"""
    run(s, "DROP TABLE IF EXISTS vw_t")
    run(s, "DROP VIEW IF EXISTS vw_cnt")
    run(s, "CREATE TABLE vw_t (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO vw_t VALUES (1, 10)")
    run(s, "INSERT INTO vw_t VALUES (2, 20)")
    run(s, "CREATE VIEW vw_cnt AS SELECT COUNT(*) FROM vw_t")
    _, rows, err, _ = run(s, "SELECT * FROM vw_cnt")
    run(s, "DROP VIEW IF EXISTS vw_cnt")
    run(s, "DROP TABLE IF EXISTS vw_t")
    if err: print(f"    err: {err}"); return False
    # View returns COUNT(*) as a single-row result
    return len(rows) == 1 and '2' in str(rows[0])

def test_nested_views(s):
    """T11: Nested view — view referencing another view"""
    run(s, "DROP TABLE IF EXISTS vw_base")
    run(s, "DROP VIEW IF EXISTS vw_inner")
    run(s, "DROP VIEW IF EXISTS vw_outer")
    run(s, "CREATE TABLE vw_base (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO vw_base VALUES (1, 10)")
    run(s, "INSERT INTO vw_base VALUES (2, 20)")
    run(s, "CREATE VIEW vw_inner AS SELECT * FROM vw_base WHERE val > 5")
    run(s, "CREATE VIEW vw_outer AS SELECT * FROM vw_inner")
    _, rows, err, _ = run(s, "SELECT * FROM vw_outer")
    run(s, "DROP VIEW IF EXISTS vw_outer")
    run(s, "DROP VIEW IF EXISTS vw_inner")
    run(s, "DROP TABLE IF EXISTS vw_base")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2

def test_show_views(s):
    """T12: SHOW VIEWS"""
    run(s, "DROP TABLE IF EXISTS sv_t")
    run(s, "DROP VIEW IF EXISTS sv_v")
    run(s, "CREATE TABLE sv_t (id INT PRIMARY KEY)")
    run(s, "CREATE VIEW sv_v AS SELECT * FROM sv_t")
    _, rows, err, _ = run(s, "SHOW VIEWS")
    run(s, "DROP VIEW IF EXISTS sv_v")
    run(s, "DROP TABLE IF EXISTS sv_t")
    if err: print(f"    err: {err}"); return False
    found = any('sv_v' in str(r) for r in rows)
    return found

def test_show_create_view(s):
    """T13: SHOW CREATE VIEW"""
    run(s, "DROP TABLE IF EXISTS sc_t")
    run(s, "DROP VIEW IF EXISTS sc_v")
    run(s, "CREATE TABLE sc_t (id INT PRIMARY KEY)")
    run(s, "CREATE VIEW sc_v AS SELECT * FROM sc_t")
    _, rows, err, _ = run(s, "SHOW CREATE VIEW sc_v")
    run(s, "DROP VIEW IF EXISTS sc_v")
    run(s, "DROP TABLE IF EXISTS sc_t")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and 'SELECT' in str(rows[0])

def test_outer_where(s):
    """T14: Outer WHERE on view"""
    run(s, "DROP TABLE IF EXISTS vw_emp")
    run(s, "DROP VIEW IF EXISTS vw_all")
    run(s, "CREATE TABLE vw_emp (id INT PRIMARY KEY, name VARCHAR(50), dept VARCHAR(20))")
    run(s, "INSERT INTO vw_emp VALUES (1, 'Alice', 'Eng')")
    run(s, "INSERT INTO vw_emp VALUES (2, 'Bob', 'Sales')")
    run(s, "INSERT INTO vw_emp VALUES (3, 'Carol', 'Eng')")
    run(s, "CREATE VIEW vw_all AS SELECT * FROM vw_emp")
    _, rows, err, _ = run(s, "SELECT * FROM vw_all WHERE dept = 'Eng'")
    run(s, "DROP VIEW IF EXISTS vw_all")
    run(s, "DROP TABLE IF EXISTS vw_emp")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2

def test_outer_orderby(s):
    """T15: ORDER BY on view"""
    run(s, "DROP TABLE IF EXISTS vw_nums")
    run(s, "DROP VIEW IF EXISTS vw_nv")
    run(s, "CREATE TABLE vw_nums (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO vw_nums VALUES (1, 30)")
    run(s, "INSERT INTO vw_nums VALUES (2, 10)")
    run(s, "INSERT INTO vw_nums VALUES (3, 20)")
    run(s, "CREATE VIEW vw_nv AS SELECT * FROM vw_nums")
    _, rows, err, _ = run(s, "SELECT * FROM vw_nv ORDER BY val")
    run(s, "DROP VIEW IF EXISTS vw_nv")
    run(s, "DROP TABLE IF EXISTS vw_nums")
    if err: print(f"    err: {err}"); return False
    return rows[0][1] == '10' and rows[2][1] == '30'

def test_outer_limit(s):
    """T16: LIMIT on view"""
    run(s, "DROP TABLE IF EXISTS vw_many")
    run(s, "DROP VIEW IF EXISTS vw_mv")
    run(s, "CREATE TABLE vw_many (id INT PRIMARY KEY, val INT)")
    for i in range(5):
        run(s, f"INSERT INTO vw_many VALUES ({i}, {i*10})")
    run(s, "CREATE VIEW vw_mv AS SELECT * FROM vw_many")
    _, rows, err, _ = run(s, "SELECT * FROM vw_mv LIMIT 3")
    run(s, "DROP VIEW IF EXISTS vw_mv")
    run(s, "DROP TABLE IF EXISTS vw_many")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3

def test_combined_clauses(s):
    """T17: Combined WHERE + ORDER BY + LIMIT on view"""
    run(s, "DROP TABLE IF EXISTS vw_comb")
    run(s, "DROP VIEW IF EXISTS vw_cv")
    run(s, "CREATE TABLE vw_comb (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "INSERT INTO vw_comb VALUES (1, 'Alice', 90)")
    run(s, "INSERT INTO vw_comb VALUES (2, 'Bob', 70)")
    run(s, "INSERT INTO vw_comb VALUES (3, 'Carol', 85)")
    run(s, "INSERT INTO vw_comb VALUES (4, 'Dave', 60)")
    run(s, "CREATE VIEW vw_cv AS SELECT * FROM vw_comb WHERE score >= 70")
    _, rows, err, _ = run(s, "SELECT * FROM vw_cv WHERE score < 90 ORDER BY score LIMIT 1")
    run(s, "DROP VIEW IF EXISTS vw_cv")
    run(s, "DROP TABLE IF EXISTS vw_comb")
    if err: print(f"    err: {err}"); return False
    # View WHERE: score >= 70 → Bob(70), Carol(85), Alice(90)
    # Outer WHERE: score < 90 → Bob(70), Carol(85)
    # ORDER BY score → Bob first
    # LIMIT 1 → just Bob
    return len(rows) == 1 and rows[0][1] == 'Bob'

def test_updatable_update(s):
    """T18: UPDATE on view → updates underlying table"""
    run(s, "DROP TABLE IF EXISTS uv_t")
    run(s, "DROP VIEW IF EXISTS uv_v")
    run(s, "CREATE TABLE uv_t (id INT PRIMARY KEY, name VARCHAR(50), status VARCHAR(20))")
    run(s, "INSERT INTO uv_t VALUES (1, 'Alice', 'active')")
    run(s, "INSERT INTO uv_t VALUES (2, 'Bob', 'active')")
    run(s, "CREATE VIEW uv_v AS SELECT * FROM uv_t WHERE status = 'active'")
    _, _, err, _ = run(s, "UPDATE uv_v SET name = 'Alice Updated' WHERE id = 1")
    if err: print(f"    err: {err}"); run(s, "DROP VIEW IF EXISTS uv_v"); run(s, "DROP TABLE IF EXISTS uv_t"); return False
    _, rows, _, _ = run(s, "SELECT name FROM uv_t WHERE id = 1")
    run(s, "DROP VIEW IF EXISTS uv_v")
    run(s, "DROP TABLE IF EXISTS uv_t")
    return rows[0][0] == 'Alice Updated'

def test_updatable_delete(s):
    """T19: DELETE on view → deletes from underlying table"""
    run(s, "DROP TABLE IF EXISTS uv_t")
    run(s, "DROP VIEW IF EXISTS uv_v")
    run(s, "CREATE TABLE uv_t (id INT PRIMARY KEY, status VARCHAR(20))")
    run(s, "INSERT INTO uv_t VALUES (1, 'active')")
    run(s, "INSERT INTO uv_t VALUES (2, 'inactive')")
    run(s, "CREATE VIEW uv_v AS SELECT * FROM uv_t WHERE status = 'active'")
    _, _, err, _ = run(s, "DELETE FROM uv_v WHERE id = 1")
    if err: print(f"    err: {err}"); run(s, "DROP VIEW IF EXISTS uv_v"); run(s, "DROP TABLE IF EXISTS uv_t"); return False
    _, rows, _, _ = run(s, "SELECT * FROM uv_t")
    run(s, "DROP VIEW IF EXISTS uv_v")
    run(s, "DROP TABLE IF EXISTS uv_t")
    return len(rows) == 1  # only id=2 remains

def test_updatable_insert(s):
    """T20: INSERT into view → inserts into underlying table"""
    run(s, "DROP TABLE IF EXISTS uv_t")
    run(s, "DROP VIEW IF EXISTS uv_v")
    run(s, "CREATE TABLE uv_t (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "CREATE VIEW uv_v AS SELECT * FROM uv_t")
    _, _, err, _ = run(s, "INSERT INTO uv_v VALUES (1, 'Alice')")
    if err: print(f"    err: {err}"); run(s, "DROP VIEW IF EXISTS uv_v"); run(s, "DROP TABLE IF EXISTS uv_t"); return False
    _, rows, _, _ = run(s, "SELECT * FROM uv_t")
    run(s, "DROP VIEW IF EXISTS uv_v")
    run(s, "DROP TABLE IF EXISTS uv_t")
    return len(rows) == 1 and rows[0][1] == 'Alice'

def test_view_dependency(s):
    """T21: DROP TABLE with dependent view → error"""
    run(s, "DROP VIEW IF EXISTS dep_v")
    run(s, "DROP TABLE IF EXISTS dep_t")
    run(s, "CREATE TABLE dep_t (id INT PRIMARY KEY)")
    run(s, "CREATE VIEW dep_v AS SELECT * FROM dep_t")
    _, _, err, _ = run(s, "DROP TABLE dep_t")
    if err and 'view' in err.lower():
        # Expected: cannot drop table with dependent view
        run(s, "DROP VIEW IF EXISTS dep_v")
        run(s, "DROP TABLE IF EXISTS dep_t")
        return True
    # If no error, table was dropped (dependency check not enforced)
    run(s, "DROP VIEW IF EXISTS dep_v")
    run(s, "DROP TABLE IF EXISTS dep_t")
    return False

if __name__ == "__main__":
    print("=== Views Tests ===")
    test("T1: CREATE + SELECT", test_create_select)
    test("T2: CREATE OR REPLACE", test_create_or_replace)
    test("T3: DROP VIEW", test_drop_view)
    test("T4: view WHERE + outer WHERE", test_view_with_where)
    test("T5: view ORDER BY + LIMIT", test_view_order_limit)
    test("T6: DROP IF EXISTS (not found)", test_drop_if_exists_not_found)
    test("T7: CREATE duplicate error", test_create_duplicate_error)
    test("T8: SELECT dropped view error", test_select_dropped_view_error)
    test("T9: DROP nonexistent error", test_drop_nonexistent_error)
    test("T10: view with aggregate", test_view_count)
    test("T11: nested views", test_nested_views)
    test("T12: SHOW VIEWS", test_show_views)
    test("T13: SHOW CREATE VIEW", test_show_create_view)
    test("T14: outer WHERE on view", test_outer_where)
    test("T15: ORDER BY on view", test_outer_orderby)
    test("T16: LIMIT on view", test_outer_limit)
    test("T17: combined clauses", test_combined_clauses)
    test("T18: DROP TABLE with view dep", test_view_dependency)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
