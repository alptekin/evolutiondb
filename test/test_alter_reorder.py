"""
test_alter_reorder.py — Tests for AFTER/FIRST column reorder + CHANGE COLUMN
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


# ── FIRST / AFTER Tests ──

def test_modify_first(s):
    """T1: MODIFY col FIRST — move column to first position"""
    run(s, "DROP TABLE IF EXISTS ro_test")
    run(s, "CREATE TABLE ro_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
    run(s, "INSERT INTO ro_test VALUES (1, 'Alice', 30)")
    _, _, err, _ = run(s, "ALTER TABLE ro_test MODIFY age INT FIRST")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS ro_test")
        return False
    cols, rows, _, _ = run(s, "SELECT * FROM ro_test")
    run(s, "DROP TABLE IF EXISTS ro_test")
    # age should be first column now
    return cols[0] == 'age' and rows[0][0] == '30'

def test_modify_after(s):
    """T2: MODIFY col AFTER other — move column after specific column"""
    run(s, "DROP TABLE IF EXISTS ro_test")
    run(s, "CREATE TABLE ro_test (id INT PRIMARY KEY, name VARCHAR(50), age INT, city VARCHAR(50))")
    run(s, "INSERT INTO ro_test VALUES (1, 'Alice', 30, 'NYC')")
    _, _, err, _ = run(s, "ALTER TABLE ro_test MODIFY city VARCHAR(50) AFTER id")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS ro_test")
        return False
    cols, rows, _, _ = run(s, "SELECT * FROM ro_test")
    run(s, "DROP TABLE IF EXISTS ro_test")
    # Order should be: id, city, name, age
    return cols == ['id', 'city', 'name', 'age']

def test_change_rename_type_position(s):
    """T3: CHANGE old new type AFTER x — rename + type + position"""
    run(s, "DROP TABLE IF EXISTS ro_test")
    run(s, "CREATE TABLE ro_test (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "INSERT INTO ro_test VALUES (1, 'Alice', 90)")
    _, _, err, _ = run(s, "ALTER TABLE ro_test CHANGE score points INT FIRST")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS ro_test")
        return False
    cols, rows, _, _ = run(s, "SELECT * FROM ro_test")
    run(s, "DROP TABLE IF EXISTS ro_test")
    # Order: points, id, name. points=90
    return cols[0] == 'points' and rows[0][0] == '90'

def test_change_no_position(s):
    """T4: CHANGE old new type (no position) — just rename+modify"""
    run(s, "DROP TABLE IF EXISTS ro_test")
    run(s, "CREATE TABLE ro_test (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO ro_test VALUES (1, 42)")
    _, _, err, _ = run(s, "ALTER TABLE ro_test CHANGE val amount INT")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS ro_test")
        return False
    cols, rows, _, _ = run(s, "SELECT * FROM ro_test")
    run(s, "DROP TABLE IF EXISTS ro_test")
    return 'amount' in cols and rows[0][1] == '42'

def test_data_after_reorder(s):
    """T5: Data integrity after reorder — values follow column"""
    run(s, "DROP TABLE IF EXISTS ro_test")
    run(s, "CREATE TABLE ro_test (a INT PRIMARY KEY, b VARCHAR(20), c INT)")
    run(s, "INSERT INTO ro_test VALUES (1, 'hello', 99)")
    run(s, "ALTER TABLE ro_test MODIFY c INT FIRST")
    cols, rows, _, _ = run(s, "SELECT * FROM ro_test")
    run(s, "DROP TABLE IF EXISTS ro_test")
    # Order: c, a, b → values: 99, 1, hello
    return (cols == ['c', 'a', 'b'] and
            rows[0][0] == '99' and rows[0][1] == '1' and rows[0][2] == 'hello')


# ── Edge Cases ──

def test_first_already_first(s):
    """T6: FIRST on already-first column — no-op"""
    run(s, "DROP TABLE IF EXISTS ro_test")
    run(s, "CREATE TABLE ro_test (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "INSERT INTO ro_test VALUES (1, 'Alice')")
    _, _, err, _ = run(s, "ALTER TABLE ro_test MODIFY id INT FIRST")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS ro_test")
        return False
    cols, _, _, _ = run(s, "SELECT * FROM ro_test")
    run(s, "DROP TABLE IF EXISTS ro_test")
    return cols[0] == 'id'

def test_after_last_column(s):
    """T7: AFTER last column — moves to end"""
    run(s, "DROP TABLE IF EXISTS ro_test")
    run(s, "CREATE TABLE ro_test (id INT PRIMARY KEY, a INT, b INT)")
    run(s, "INSERT INTO ro_test VALUES (1, 10, 20)")
    _, _, err, _ = run(s, "ALTER TABLE ro_test MODIFY id INT AFTER b")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS ro_test")
        return False
    cols, rows, _, _ = run(s, "SELECT * FROM ro_test")
    run(s, "DROP TABLE IF EXISTS ro_test")
    return cols == ['a', 'b', 'id']

def test_multiple_reorders(s):
    """T8: Multiple reorders in sequence"""
    run(s, "DROP TABLE IF EXISTS ro_test")
    run(s, "CREATE TABLE ro_test (a INT PRIMARY KEY, b INT, c INT, d INT)")
    run(s, "INSERT INTO ro_test VALUES (1, 2, 3, 4)")
    run(s, "ALTER TABLE ro_test MODIFY d INT FIRST")   # d, a, b, c
    run(s, "ALTER TABLE ro_test MODIFY b INT AFTER d")  # d, b, a, c
    cols, rows, _, _ = run(s, "SELECT * FROM ro_test")
    run(s, "DROP TABLE IF EXISTS ro_test")
    return cols == ['d', 'b', 'a', 'c']


# ── Error Cases ──

def test_after_nonexistent(s):
    """T9: AFTER nonexistent column — error"""
    run(s, "DROP TABLE IF EXISTS ro_test")
    run(s, "CREATE TABLE ro_test (id INT PRIMARY KEY, val INT)")
    _, _, err, _ = run(s, "ALTER TABLE ro_test MODIFY val INT AFTER nosuch")
    run(s, "DROP TABLE IF EXISTS ro_test")
    return err is not None and 'does not exist' in err.lower()

def test_change_both_syntaxes(s):
    """T10: CHANGE with and without COLUMN keyword"""
    run(s, "DROP TABLE IF EXISTS ro_test")
    run(s, "CREATE TABLE ro_test (id INT PRIMARY KEY, a INT, b INT)")
    _, _, err1, _ = run(s, "ALTER TABLE ro_test CHANGE COLUMN a x INT")
    _, _, err2, _ = run(s, "ALTER TABLE ro_test CHANGE b y INT")
    cols, _, _, _ = run(s, "SELECT * FROM ro_test")
    run(s, "DROP TABLE IF EXISTS ro_test")
    return err1 is None and err2 is None and 'x' in cols and 'y' in cols


# ── Main ──

if __name__ == "__main__":
    print("=== AFTER/FIRST + CHANGE COLUMN Tests ===")
    test("T1: MODIFY FIRST", test_modify_first)
    test("T2: MODIFY AFTER", test_modify_after)
    test("T3: CHANGE with position", test_change_rename_type_position)
    test("T4: CHANGE no position", test_change_no_position)
    test("T5: data integrity after reorder", test_data_after_reorder)
    test("T6: FIRST already first", test_first_already_first)
    test("T7: AFTER last column", test_after_last_column)
    test("T8: multiple reorders", test_multiple_reorders)
    test("T9: AFTER nonexistent error", test_after_nonexistent)
    test("T10: CHANGE both syntaxes", test_change_both_syntaxes)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
