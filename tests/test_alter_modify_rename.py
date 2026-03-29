"""
test_alter_modify_rename.py — Tests for ALTER TABLE MODIFY/RENAME COLUMN (Task 47)
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


# ── RENAME COLUMN Tests ──

def test_rename_basic(s):
    """T1: Basic rename — column name changes in SELECT *"""
    run(s, "DROP TABLE IF EXISTS mr_test")
    run(s, "CREATE TABLE mr_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
    run(s, "INSERT INTO mr_test VALUES (1, 'Alice', 30)")
    _, _, err, _ = run(s, "ALTER TABLE mr_test RENAME COLUMN name TO full_name")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS mr_test")
        return False
    cols, rows, _, _ = run(s, "SELECT * FROM mr_test")
    run(s, "DROP TABLE IF EXISTS mr_test")
    return 'full_name' in cols and 'name' not in cols

def test_rename_preserves_data(s):
    """T2: Rename preserves data"""
    run(s, "DROP TABLE IF EXISTS mr_test")
    run(s, "CREATE TABLE mr_test (id INT PRIMARY KEY, val VARCHAR(50))")
    run(s, "INSERT INTO mr_test VALUES (1, 'hello')")
    run(s, "INSERT INTO mr_test VALUES (2, 'world')")
    run(s, "ALTER TABLE mr_test RENAME COLUMN val TO data")
    _, rows, _, _ = run(s, "SELECT * FROM mr_test ORDER BY id")
    run(s, "DROP TABLE IF EXISTS mr_test")
    return rows[0][1] == 'hello' and rows[1][1] == 'world'

def test_rename_insert_new_name(s):
    """T3: INSERT after rename uses new name"""
    run(s, "DROP TABLE IF EXISTS mr_test")
    run(s, "CREATE TABLE mr_test (id INT PRIMARY KEY, old_name VARCHAR(50))")
    run(s, "ALTER TABLE mr_test RENAME COLUMN old_name TO new_name")
    _, _, err, _ = run(s, "INSERT INTO mr_test (id, new_name) VALUES (1, 'test')")
    if err:
        print(f"    insert error: {err}")
        run(s, "DROP TABLE IF EXISTS mr_test")
        return False
    _, rows, _, _ = run(s, "SELECT * FROM mr_test")
    run(s, "DROP TABLE IF EXISTS mr_test")
    return rows[0][1] == 'test'

def test_rename_both_syntaxes(s):
    """T4: Both RENAME COLUMN and RENAME syntaxes work"""
    run(s, "DROP TABLE IF EXISTS mr_test")
    run(s, "CREATE TABLE mr_test (id INT PRIMARY KEY, a VARCHAR(50), b VARCHAR(50))")
    _, _, err1, _ = run(s, "ALTER TABLE mr_test RENAME COLUMN a TO x")
    _, _, err2, _ = run(s, "ALTER TABLE mr_test RENAME b TO y")
    cols, _, _, _ = run(s, "SELECT * FROM mr_test")
    run(s, "DROP TABLE IF EXISTS mr_test")
    return err1 is None and err2 is None and 'x' in cols and 'y' in cols

def test_rename_with_index(s):
    """T5: Rename column that has a secondary index"""
    run(s, "DROP TABLE IF EXISTS mr_test")
    run(s, "CREATE TABLE mr_test (id INT PRIMARY KEY, val VARCHAR(50))")
    run(s, "INSERT INTO mr_test VALUES (1, 'hello')")
    run(s, "CREATE INDEX idx_val ON mr_test (val)")
    run(s, "ALTER TABLE mr_test RENAME COLUMN val TO data")
    # Index should still work after rename
    _, rows, _, _ = run(s, "SELECT * FROM mr_test WHERE data = 'hello'")
    run(s, "DROP TABLE IF EXISTS mr_test")
    return len(rows) == 1 and rows[0][1] == 'hello'

def test_rename_nonexistent(s):
    """T6: Rename non-existent column — error"""
    run(s, "DROP TABLE IF EXISTS mr_test")
    run(s, "CREATE TABLE mr_test (id INT PRIMARY KEY, val INT)")
    _, _, err, _ = run(s, "ALTER TABLE mr_test RENAME COLUMN nosuch TO x")
    run(s, "DROP TABLE IF EXISTS mr_test")
    return err is not None and 'does not exist' in err.lower()

def test_rename_duplicate(s):
    """T7: Rename to existing name — error"""
    run(s, "DROP TABLE IF EXISTS mr_test")
    run(s, "CREATE TABLE mr_test (id INT PRIMARY KEY, a INT, b INT)")
    _, _, err, _ = run(s, "ALTER TABLE mr_test RENAME COLUMN a TO b")
    run(s, "DROP TABLE IF EXISTS mr_test")
    return err is not None and 'already exists' in err.lower()


# ── MODIFY COLUMN Tests ──

def test_modify_varchar_widen(s):
    """T8: Widen VARCHAR(50) to VARCHAR(100)"""
    run(s, "DROP TABLE IF EXISTS mr_mod")
    run(s, "CREATE TABLE mr_mod (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "INSERT INTO mr_mod VALUES (1, 'Alice')")
    _, _, err, _ = run(s, "ALTER TABLE mr_mod MODIFY COLUMN name VARCHAR(100)")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS mr_mod")
        return False
    _, rows, _, _ = run(s, "SELECT * FROM mr_mod")
    run(s, "DROP TABLE IF EXISTS mr_mod")
    return rows[0][1] == 'Alice'

def test_modify_add_not_null(s):
    """T9: Add NOT NULL to column (no NULLs in data)"""
    run(s, "DROP TABLE IF EXISTS mr_mod")
    run(s, "CREATE TABLE mr_mod (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO mr_mod VALUES (1, 10)")
    _, _, err, _ = run(s, "ALTER TABLE mr_mod MODIFY COLUMN val INT NOT NULL")
    run(s, "DROP TABLE IF EXISTS mr_mod")
    return err is None

def test_modify_remove_not_null(s):
    """T10: Remove NOT NULL (NOT NULL → nullable)"""
    run(s, "DROP TABLE IF EXISTS mr_mod")
    run(s, "CREATE TABLE mr_mod (id INT PRIMARY KEY, val INT NOT NULL)")
    _, _, err, _ = run(s, "ALTER TABLE mr_mod MODIFY val INT")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS mr_mod")
        return False
    # Should now accept NULL
    _, _, err2, _ = run(s, "INSERT INTO mr_mod VALUES (1, NULL)")
    run(s, "DROP TABLE IF EXISTS mr_mod")
    return err2 is None

def test_modify_change_default(s):
    """T11: Change DEFAULT value"""
    run(s, "DROP TABLE IF EXISTS mr_mod")
    run(s, "CREATE TABLE mr_mod (id INT PRIMARY KEY, status VARCHAR(20) DEFAULT 'pending')")
    _, _, err, _ = run(s, "ALTER TABLE mr_mod MODIFY status VARCHAR(20) DEFAULT 'active'")
    if err:
        print(f"    error: {err}")
        run(s, "DROP TABLE IF EXISTS mr_mod")
        return False
    run(s, "INSERT INTO mr_mod (id) VALUES (1)")
    _, rows, _, _ = run(s, "SELECT status FROM mr_mod WHERE id = 1")
    run(s, "DROP TABLE IF EXISTS mr_mod")
    return rows[0][0] == 'active'

def test_modify_same_type(s):
    """T12: MODIFY same type (attribute-only change)"""
    run(s, "DROP TABLE IF EXISTS mr_mod")
    run(s, "CREATE TABLE mr_mod (id INT PRIMARY KEY, val INT)")
    _, _, err, _ = run(s, "ALTER TABLE mr_mod MODIFY val INT NOT NULL")
    run(s, "DROP TABLE IF EXISTS mr_mod")
    return err is None

def test_modify_incompatible_reject(s):
    """T13: Incompatible type change INT → VARCHAR — rejected"""
    run(s, "DROP TABLE IF EXISTS mr_mod")
    run(s, "CREATE TABLE mr_mod (id INT PRIMARY KEY, val INT)")
    _, _, err, _ = run(s, "ALTER TABLE mr_mod MODIFY val VARCHAR(50)")
    run(s, "DROP TABLE IF EXISTS mr_mod")
    return err is not None and 'cannot' in err.lower()

def test_modify_not_null_with_nulls(s):
    """T14: Add NOT NULL to column containing NULLs — rejected"""
    run(s, "DROP TABLE IF EXISTS mr_mod")
    run(s, "CREATE TABLE mr_mod (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO mr_mod VALUES (1, NULL)")
    _, _, err, _ = run(s, "ALTER TABLE mr_mod MODIFY val INT NOT NULL")
    run(s, "DROP TABLE IF EXISTS mr_mod")
    return err is not None and 'null' in err.lower()

def test_modify_both_syntaxes(s):
    """T15: Both MODIFY COLUMN and MODIFY syntaxes work"""
    run(s, "DROP TABLE IF EXISTS mr_mod")
    run(s, "CREATE TABLE mr_mod (id INT PRIMARY KEY, a VARCHAR(10), b VARCHAR(10))")
    _, _, err1, _ = run(s, "ALTER TABLE mr_mod MODIFY COLUMN a VARCHAR(50)")
    _, _, err2, _ = run(s, "ALTER TABLE mr_mod MODIFY b VARCHAR(50)")
    run(s, "DROP TABLE IF EXISTS mr_mod")
    return err1 is None and err2 is None


# ── Main ──

if __name__ == "__main__":
    print("=== ALTER TABLE MODIFY/RENAME COLUMN Tests ===")
    test("T1: basic rename", test_rename_basic)
    test("T2: rename preserves data", test_rename_preserves_data)
    test("T3: INSERT after rename", test_rename_insert_new_name)
    test("T4: both RENAME syntaxes", test_rename_both_syntaxes)
    test("T5: rename with index", test_rename_with_index)
    test("T6: rename nonexistent", test_rename_nonexistent)
    test("T7: rename to duplicate", test_rename_duplicate)
    test("T8: VARCHAR widening", test_modify_varchar_widen)
    test("T9: add NOT NULL", test_modify_add_not_null)
    test("T10: remove NOT NULL", test_modify_remove_not_null)
    test("T11: change DEFAULT", test_modify_change_default)
    test("T12: same type modify", test_modify_same_type)
    test("T13: incompatible type reject", test_modify_incompatible_reject)
    test("T14: NOT NULL with NULLs reject", test_modify_not_null_with_nulls)
    test("T15: both MODIFY syntaxes", test_modify_both_syntaxes)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
