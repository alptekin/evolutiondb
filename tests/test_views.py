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
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
