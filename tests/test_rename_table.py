"""
test_rename_table.py — Tests for RENAME TABLE (Task 48)
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

def test_basic_rename(s):
    run(s, "DROP TABLE IF EXISTS rt_old")
    run(s, "DROP TABLE IF EXISTS rt_new")
    run(s, "CREATE TABLE rt_old (id INT PRIMARY KEY, val VARCHAR(50))")
    run(s, "INSERT INTO rt_old VALUES (1, 'hello')")
    _, _, err, _ = run(s, "RENAME TABLE rt_old TO rt_new")
    if err:
        print(f"    err: {err}")
        return False
    _, rows, _, _ = run(s, "SELECT * FROM rt_new")
    run(s, "DROP TABLE IF EXISTS rt_new")
    return len(rows) == 1 and rows[0][1] == 'hello'

def test_select_after_rename(s):
    run(s, "DROP TABLE IF EXISTS rt_a")
    run(s, "DROP TABLE IF EXISTS rt_b")
    run(s, "CREATE TABLE rt_a (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "INSERT INTO rt_a VALUES (1, 'Alice')")
    run(s, "INSERT INTO rt_a VALUES (2, 'Bob')")
    run(s, "RENAME TABLE rt_a TO rt_b")
    _, rows, _, _ = run(s, "SELECT * FROM rt_b ORDER BY id")
    # Old name should fail
    _, _, err, _ = run(s, "SELECT * FROM rt_a")
    run(s, "DROP TABLE IF EXISTS rt_b")
    return len(rows) == 2 and err is not None

def test_insert_after_rename(s):
    run(s, "DROP TABLE IF EXISTS rt_x")
    run(s, "DROP TABLE IF EXISTS rt_y")
    run(s, "CREATE TABLE rt_x (id INT PRIMARY KEY, val INT)")
    run(s, "RENAME TABLE rt_x TO rt_y")
    _, _, err, _ = run(s, "INSERT INTO rt_y VALUES (1, 42)")
    if err:
        print(f"    err: {err}")
        run(s, "DROP TABLE IF EXISTS rt_y")
        return False
    _, rows, _, _ = run(s, "SELECT * FROM rt_y")
    run(s, "DROP TABLE IF EXISTS rt_y")
    return len(rows) == 1

def test_rename_nonexistent(s):
    _, _, err, _ = run(s, "RENAME TABLE no_such_table TO something")
    return err is not None and 'does not exist' in err.lower()

def test_rename_to_existing(s):
    run(s, "DROP TABLE IF EXISTS rt_src")
    run(s, "DROP TABLE IF EXISTS rt_dst")
    run(s, "CREATE TABLE rt_src (id INT PRIMARY KEY)")
    run(s, "CREATE TABLE rt_dst (id INT PRIMARY KEY)")
    _, _, err, _ = run(s, "RENAME TABLE rt_src TO rt_dst")
    run(s, "DROP TABLE IF EXISTS rt_src")
    run(s, "DROP TABLE IF EXISTS rt_dst")
    return err is not None and 'already exists' in err.lower()

def test_index_after_rename(s):
    run(s, "DROP TABLE IF EXISTS rt_idx")
    run(s, "DROP TABLE IF EXISTS rt_idx2")
    run(s, "CREATE TABLE rt_idx (id INT PRIMARY KEY, val VARCHAR(50))")
    run(s, "CREATE INDEX idx_val ON rt_idx (val)")
    run(s, "INSERT INTO rt_idx VALUES (1, 'test')")
    run(s, "RENAME TABLE rt_idx TO rt_idx2")
    _, rows, _, _ = run(s, "SELECT * FROM rt_idx2 WHERE val = 'test'")
    run(s, "DROP TABLE IF EXISTS rt_idx2")
    return len(rows) == 1

if __name__ == "__main__":
    print("=== RENAME TABLE Tests ===")
    test("T1: basic rename", test_basic_rename)
    test("T2: SELECT after rename", test_select_after_rename)
    test("T3: INSERT after rename", test_insert_after_rename)
    test("T4: rename nonexistent", test_rename_nonexistent)
    test("T5: rename to existing", test_rename_to_existing)
    test("T6: index after rename", test_index_after_rename)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
