"""
test_prepared_stmts.py — Tests for SQL-level PREPARE/EXECUTE/DEALLOCATE (Task 71)
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

def test_prepare_execute_basic(s):
    """T1: PREPARE + EXECUTE basic"""
    run(s, "DROP TABLE IF EXISTS ps_t")
    run(s, "CREATE TABLE ps_t (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "INSERT INTO ps_t VALUES (1, 'Alice')")
    run(s, "INSERT INTO ps_t VALUES (2, 'Bob')")
    _, _, err, tag = run(s, "PREPARE get_user AS SELECT * FROM ps_t WHERE id = $1")
    if err: print(f"    prepare err: {err}"); run(s, "DROP TABLE IF EXISTS ps_t"); return False
    _, rows, err, _ = run(s, "EXECUTE get_user(1)")
    run(s, "DEALLOCATE get_user")
    run(s, "DROP TABLE IF EXISTS ps_t")
    if err: print(f"    execute err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'Alice'

def test_prepare_no_params(s):
    """T2: PREPARE without parameters"""
    run(s, "DROP TABLE IF EXISTS ps_t")
    run(s, "CREATE TABLE ps_t (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO ps_t VALUES (1, 42)")
    run(s, "PREPARE all_rows AS SELECT * FROM ps_t")
    _, rows, err, _ = run(s, "EXECUTE all_rows")
    run(s, "DEALLOCATE all_rows")
    run(s, "DROP TABLE IF EXISTS ps_t")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1

def test_prepare_multiple_params(s):
    """T3: PREPARE with multiple parameters"""
    run(s, "DROP TABLE IF EXISTS ps_t")
    run(s, "CREATE TABLE ps_t (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "INSERT INTO ps_t VALUES (1, 'Alice', 90)")
    run(s, "INSERT INTO ps_t VALUES (2, 'Bob', 70)")
    run(s, "PREPARE find_by_score AS SELECT * FROM ps_t WHERE score > $1 AND name = $2")
    _, rows, err, _ = run(s, "EXECUTE find_by_score(50, 'Alice')")
    run(s, "DEALLOCATE find_by_score")
    run(s, "DROP TABLE IF EXISTS ps_t")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'Alice'

def test_deallocate(s):
    """T4: DEALLOCATE removes statement"""
    run(s, "PREPARE my_stmt AS SELECT 1")
    run(s, "DEALLOCATE my_stmt")
    _, _, err, _ = run(s, "EXECUTE my_stmt")
    return err is not None and 'does not exist' in err.lower()

def test_deallocate_all(s):
    """T5: DEALLOCATE ALL"""
    run(s, "PREPARE s1 AS SELECT 1")
    run(s, "PREPARE s2 AS SELECT 2")
    run(s, "DEALLOCATE ALL")
    _, _, err1, _ = run(s, "EXECUTE s1")
    _, _, err2, _ = run(s, "EXECUTE s2")
    return err1 is not None and err2 is not None

def test_reprepare(s):
    """T6: Re-prepare same name overwrites"""
    run(s, "DROP TABLE IF EXISTS ps_t")
    run(s, "CREATE TABLE ps_t (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO ps_t VALUES (1, 10)")
    run(s, "PREPARE my_q AS SELECT * FROM ps_t WHERE val > 100")
    _, r1, _, _ = run(s, "EXECUTE my_q")
    run(s, "PREPARE my_q AS SELECT * FROM ps_t WHERE val > 5")
    _, r2, _, _ = run(s, "EXECUTE my_q")
    run(s, "DEALLOCATE my_q")
    run(s, "DROP TABLE IF EXISTS ps_t")
    return len(r1) == 0 and len(r2) == 1

def test_execute_nonexistent(s):
    """T7: EXECUTE nonexistent → error"""
    _, _, err, _ = run(s, "EXECUTE no_such_stmt")
    return err is not None

def test_prepare_insert(s):
    """T8: PREPARE INSERT statement"""
    run(s, "DROP TABLE IF EXISTS ps_t")
    run(s, "CREATE TABLE ps_t (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "PREPARE ins AS INSERT INTO ps_t VALUES ($1, $2)")
    _, _, err, _ = run(s, "EXECUTE ins(1, 'Alice')")
    if err: print(f"    err: {err}"); run(s, "DROP TABLE IF EXISTS ps_t"); return False
    _, rows, _, _ = run(s, "SELECT * FROM ps_t")
    run(s, "DEALLOCATE ins")
    run(s, "DROP TABLE IF EXISTS ps_t")
    return len(rows) == 1 and rows[0][1] == 'Alice'

if __name__ == "__main__":
    print("=== Prepared Statements Tests ===")
    test("T1: PREPARE + EXECUTE basic", test_prepare_execute_basic)
    test("T2: PREPARE no params", test_prepare_no_params)
    test("T3: multiple params", test_prepare_multiple_params)
    test("T4: DEALLOCATE", test_deallocate)
    test("T5: DEALLOCATE ALL", test_deallocate_all)
    test("T6: re-prepare overwrites", test_reprepare)
    test("T7: EXECUTE nonexistent", test_execute_nonexistent)
    test("T8: PREPARE INSERT", test_prepare_insert)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
