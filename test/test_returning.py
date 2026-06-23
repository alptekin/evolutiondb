"""
test_returning.py — Tests for RETURNING clause (Task 77)
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
    run(s, "DROP TABLE IF EXISTS ret_test")
    run(s, "CREATE TABLE ret_test (id INT PRIMARY KEY, name VARCHAR(50), val INT)")

def teardown(s):
    run(s, "DROP TABLE IF EXISTS ret_test")

# --- T01: INSERT RETURNING * ---
def test_insert_returning_all(s):
    setup(s)
    _, rows, err, _ = run(s, "INSERT INTO ret_test VALUES (1, 'Alice', 100) RETURNING *")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '1' and rows[0][1] == 'Alice' and rows[0][2] == '100'

# --- T02: INSERT RETURNING single column ---
def test_insert_returning_id(s):
    setup(s)
    _, rows, err, _ = run(s, "INSERT INTO ret_test VALUES (1, 'Bob', 200) RETURNING id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '1'

# --- T03: INSERT RETURNING multiple columns ---
def test_insert_returning_multi(s):
    setup(s)
    _, rows, err, _ = run(s, "INSERT INTO ret_test VALUES (1, 'Charlie', 300) RETURNING id, name")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '1' and rows[0][1] == 'Charlie'

# --- T04: UPDATE RETURNING * ---
def test_update_returning_all(s):
    setup(s)
    run(s, "INSERT INTO ret_test VALUES (1, 'old', 10)")
    _, rows, err, _ = run(s, "UPDATE ret_test SET name = 'new', val = 99 WHERE id = 1 RETURNING *")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'new' and rows[0][2] == '99'

# --- T05: UPDATE RETURNING specific column ---
def test_update_returning_name(s):
    setup(s)
    run(s, "INSERT INTO ret_test VALUES (1, 'before', 10)")
    _, rows, err, _ = run(s, "UPDATE ret_test SET name = 'after' WHERE id = 1 RETURNING name")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'after'

# --- T06: DELETE RETURNING * ---
def test_delete_returning_all(s):
    setup(s)
    run(s, "INSERT INTO ret_test VALUES (1, 'gone', 42)")
    _, rows, err, _ = run(s, "DELETE FROM ret_test WHERE id = 1 RETURNING *")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '1' and rows[0][1] == 'gone' and rows[0][2] == '42'

# --- T07: DELETE RETURNING specific column ---
def test_delete_returning_id(s):
    setup(s)
    run(s, "INSERT INTO ret_test VALUES (1, 'x', 10)")
    _, rows, err, _ = run(s, "DELETE FROM ret_test WHERE id = 1 RETURNING id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '1'

# --- T08: Multi-row INSERT RETURNING ---
def test_multi_insert_returning(s):
    setup(s)
    run(s, "INSERT INTO ret_test VALUES (1, 'a', 10)")
    run(s, "INSERT INTO ret_test VALUES (2, 'b', 20)")
    run(s, "INSERT INTO ret_test VALUES (3, 'c', 30)")
    _, rows, err, _ = run(s, "DELETE FROM ret_test WHERE val >= 10 RETURNING id, name")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3

# --- T09: INSERT RETURNING with AUTO_INCREMENT ---
def test_insert_returning_autoinc(s):
    run(s, "DROP TABLE IF EXISTS ret_auto")
    run(s, "CREATE TABLE ret_auto (id INT PRIMARY KEY AUTO_INCREMENT, name VARCHAR(50))")
    _, rows, err, _ = run(s, "INSERT INTO ret_auto (name) VALUES ('test') RETURNING id, name")
    run(s, "DROP TABLE IF EXISTS ret_auto")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '1' and rows[0][1] == 'test'

# --- T10: UPDATE RETURNING with WHERE (only affected rows) ---
def test_update_returning_where(s):
    setup(s)
    run(s, "INSERT INTO ret_test VALUES (1, 'a', 10)")
    run(s, "INSERT INTO ret_test VALUES (2, 'b', 20)")
    run(s, "INSERT INTO ret_test VALUES (3, 'c', 30)")
    _, rows, err, _ = run(s, "UPDATE ret_test SET val = 999 WHERE val > 15 RETURNING id, val")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2  # rows 2 and 3 affected


# --- Run all tests ---
if __name__ == "__main__":
    print("=== RETURNING Clause (Task 77) ===")
    test("T01 INSERT RETURNING *", test_insert_returning_all)
    test("T02 INSERT RETURNING id", test_insert_returning_id)
    test("T03 INSERT RETURNING id, name", test_insert_returning_multi)
    test("T04 UPDATE RETURNING *", test_update_returning_all)
    test("T05 UPDATE RETURNING name", test_update_returning_name)
    test("T06 DELETE RETURNING *", test_delete_returning_all)
    test("T07 DELETE RETURNING id", test_delete_returning_id)
    test("T08 Multi-row DELETE RETURNING", test_multi_insert_returning)
    test("T09 INSERT RETURNING AUTO_INCREMENT", test_insert_returning_autoinc)
    test("T10 UPDATE RETURNING WHERE", test_update_returning_where)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
