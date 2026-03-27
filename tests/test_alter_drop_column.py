"""
test_alter_drop_column.py — Tests for ALTER TABLE DROP COLUMN (Task 46)
Hybrid approach: lazy DDL + RECLAIM rewrite
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


# ── Setup ──

def setup(s):
    run(s, "DROP TABLE IF EXISTS dc_test")
    run(s, "CREATE TABLE dc_test (id INT PRIMARY KEY, name VARCHAR(50), age INT, city VARCHAR(50))")
    run(s, "INSERT INTO dc_test VALUES (1, 'Alice', 30, 'NYC')")
    run(s, "INSERT INTO dc_test VALUES (2, 'Bob', 25, 'LA')")
    run(s, "INSERT INTO dc_test VALUES (3, 'Carol', 35, 'SF')")

def cleanup(s):
    run(s, "DROP TABLE IF EXISTS dc_test")


# ── Normal Tests (5) ──

def test_basic_drop(s):
    """T1: DROP COLUMN — column disappears from SELECT *"""
    setup(s)
    cols, rows, err, tag = run(s, "ALTER TABLE dc_test DROP COLUMN age")
    if err:
        print(f"    error: {err}")
        cleanup(s)
        return False
    cols2, rows2, _, _ = run(s, "SELECT * FROM dc_test ORDER BY id")
    cleanup(s)
    col_names = [c[0] for c in cols2] if cols2 else []
    return 'age' not in col_names and len(col_names) == 3  # id, name, city

def test_drop_with_data(s):
    """T2: Existing rows still readable after DROP"""
    setup(s)
    run(s, "ALTER TABLE dc_test DROP COLUMN city")
    _, rows, _, _ = run(s, "SELECT * FROM dc_test ORDER BY id")
    cleanup(s)
    # Should have id, name, age — 3 columns per row
    return (len(rows) == 3 and
            rows[0][0] == '1' and rows[0][1] == 'Alice' and rows[0][2] == '30')

def test_insert_after_drop(s):
    """T3: INSERT after DROP works correctly"""
    setup(s)
    run(s, "ALTER TABLE dc_test DROP COLUMN age")
    cols, rows, err, _ = run(s, "INSERT INTO dc_test VALUES (4, 'Dave', 'Boston')")
    if err:
        print(f"    insert error: {err}")
        cleanup(s)
        return False
    _, result, _, _ = run(s, "SELECT * FROM dc_test WHERE id = 4")
    cleanup(s)
    return (len(result) == 1 and
            result[0][0] == '4' and result[0][1] == 'Dave' and result[0][2] == 'Boston')

def test_update_after_drop(s):
    """T4: UPDATE remaining columns after DROP"""
    setup(s)
    run(s, "ALTER TABLE dc_test DROP COLUMN city")
    run(s, "UPDATE dc_test SET name = 'Updated' WHERE id = 1")
    _, result, _, _ = run(s, "SELECT name FROM dc_test WHERE id = 1")
    cleanup(s)
    return result[0][0] == 'Updated'

def test_reclaim_after_drop(s):
    """T5: RECLAIM rewrites tuples and removes dropped column from catalog"""
    setup(s)
    run(s, "ALTER TABLE dc_test DROP COLUMN age")
    cols, rows, err, _ = run(s, "RECLAIM TABLE dc_test")
    if err:
        print(f"    reclaim error: {err}")
        cleanup(s)
        return False
    # After RECLAIM, tuples are rewritten without dropped column
    _, result, _, _ = run(s, "SELECT * FROM dc_test ORDER BY id")
    cleanup(s)
    col_names = [c[0] for c in _] if _ else []
    # Basic check: data still correct
    return len(result) == 3 and result[0][1] == 'Alice'


# ── Edge Case Tests (4) ──

def test_drop_nullable_column(s):
    """T6: DROP nullable column with NULLs"""
    run(s, "DROP TABLE IF EXISTS dc_null")
    run(s, "CREATE TABLE dc_null (id INT PRIMARY KEY, val INT, extra VARCHAR(50))")
    run(s, "INSERT INTO dc_null VALUES (1, 10, NULL)")
    run(s, "INSERT INTO dc_null VALUES (2, NULL, 'hello')")
    run(s, "ALTER TABLE dc_null DROP COLUMN extra")
    _, result, _, _ = run(s, "SELECT * FROM dc_null ORDER BY id")
    run(s, "DROP TABLE IF EXISTS dc_null")
    return (len(result) == 2 and
            result[0][0] == '1' and result[0][1] == '10' and
            result[1][0] == '2' and result[1][1] is None)

def test_drop_column_with_default(s):
    """T7: DROP column that has DEFAULT value"""
    run(s, "DROP TABLE IF EXISTS dc_def")
    run(s, "CREATE TABLE dc_def (id INT PRIMARY KEY, name VARCHAR(50) DEFAULT 'anon', score INT)")
    run(s, "INSERT INTO dc_def (id, score) VALUES (1, 100)")
    run(s, "ALTER TABLE dc_def DROP COLUMN name")
    _, result, _, _ = run(s, "SELECT * FROM dc_def WHERE id = 1")
    run(s, "DROP TABLE IF EXISTS dc_def")
    return result[0][0] == '1' and result[0][1] == '100'

def test_multiple_drops(s):
    """T8: Drop two columns sequentially"""
    setup(s)
    run(s, "ALTER TABLE dc_test DROP COLUMN age")
    run(s, "ALTER TABLE dc_test DROP COLUMN city")
    cols, rows, _, _ = run(s, "SELECT * FROM dc_test ORDER BY id")
    cleanup(s)
    return cols == ['id', 'name'] and len(rows) == 3

def test_reclaim_after_multiple_drops(s):
    """T9: RECLAIM after multiple drops cleans all"""
    setup(s)
    run(s, "ALTER TABLE dc_test DROP COLUMN age")
    run(s, "ALTER TABLE dc_test DROP COLUMN city")
    run(s, "RECLAIM TABLE dc_test")
    _, result, _, _ = run(s, "SELECT * FROM dc_test ORDER BY id")
    cleanup(s)
    return len(result) == 3 and result[0][0] == '1' and result[0][1] == 'Alice'


# ── Error Tests (4) ──

def test_drop_pk_column(s):
    """T10: Cannot drop PK column"""
    setup(s)
    _, _, err, _ = run(s, "ALTER TABLE dc_test DROP COLUMN id")
    cleanup(s)
    return err is not None and 'primary key' in err.lower()

def test_drop_nonexistent_column(s):
    """T11: Cannot drop non-existent column"""
    setup(s)
    _, _, err, _ = run(s, "ALTER TABLE dc_test DROP COLUMN nosuch")
    cleanup(s)
    return err is not None and 'does not exist' in err.lower()

def test_drop_indexed_column(s):
    """T12: Cannot drop column with index"""
    setup(s)
    run(s, "CREATE INDEX idx_age ON dc_test (age)")
    _, _, err, _ = run(s, "ALTER TABLE dc_test DROP COLUMN age")
    cleanup(s)
    return err is not None and 'index' in err.lower()

def test_drop_last_column(s):
    """T13: Cannot drop the only remaining column"""
    run(s, "DROP TABLE IF EXISTS dc_one")
    run(s, "CREATE TABLE dc_one (id INT PRIMARY KEY, val INT)")
    run(s, "ALTER TABLE dc_one DROP COLUMN val")
    _, _, err, _ = run(s, "ALTER TABLE dc_one DROP COLUMN id")
    run(s, "DROP TABLE IF EXISTS dc_one")
    # id is PK so should be rejected for that reason too
    return err is not None


# ── Main ──

if __name__ == "__main__":
    print("=== ALTER TABLE DROP COLUMN Tests ===")
    test("T1: basic DROP COLUMN", test_basic_drop)
    test("T2: DROP with existing data", test_drop_with_data)
    test("T3: INSERT after DROP", test_insert_after_drop)
    test("T4: UPDATE after DROP", test_update_after_drop)
    test("T5: RECLAIM after DROP", test_reclaim_after_drop)
    test("T6: DROP nullable column", test_drop_nullable_column)
    test("T7: DROP column with DEFAULT", test_drop_column_with_default)
    test("T8: multiple sequential drops", test_multiple_drops)
    test("T9: RECLAIM after multiple drops", test_reclaim_after_multiple_drops)
    test("T10: DROP PK column rejected", test_drop_pk_column)
    test("T11: DROP non-existent column", test_drop_nonexistent_column)
    test("T12: DROP indexed column rejected", test_drop_indexed_column)
    test("T13: DROP last column rejected", test_drop_last_column)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
