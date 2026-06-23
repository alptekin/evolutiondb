"""
test_upsert.py — Tests for ON DUPLICATE KEY UPDATE (Task 84)
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

def setup(s, extra=""):
    run(s, "DROP TABLE IF EXISTS upsert_test")
    run(s, f"CREATE TABLE upsert_test (id INT PRIMARY KEY, name VARCHAR(50), val INT){extra}")

def teardown(s):
    run(s, "DROP TABLE IF EXISTS upsert_test")

# ==================== Normal Cases ====================

# T01: Basic INSERT (no conflict)
def test_insert_no_conflict(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100) ON DUPLICATE KEY UPDATE val = 999")
    _, rows, err, _ = run(s, "SELECT * FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'Alice' and rows[0][2] == '100'

# T02: ON DUPLICATE KEY UPDATE (conflict on PK)
def test_upsert_conflict(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'Bob', 200) ON DUPLICATE KEY UPDATE val = 200")
    _, rows, err, _ = run(s, "SELECT * FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'Alice' and rows[0][2] == '200'

# T03: Update multiple columns
def test_upsert_multi_col(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'old', 10)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'new', 99) ON DUPLICATE KEY UPDATE name = 'updated', val = 99")
    _, rows, err, _ = run(s, "SELECT * FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'updated' and rows[0][2] == '99'

# T04: No conflict = normal INSERT
def test_upsert_new_row(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'first', 10)")
    run(s, "INSERT INTO upsert_test VALUES (2, 'second', 20) ON DUPLICATE KEY UPDATE val = 999")
    _, rows, err, _ = run(s, "SELECT * FROM upsert_test ORDER BY id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2 and rows[1][2] == '20'  # val unchanged, no conflict

# T05: Multiple sequential upserts on same key
def test_multiple_upserts(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'v1', 10) ON DUPLICATE KEY UPDATE val = 10")
    run(s, "INSERT INTO upsert_test VALUES (1, 'v2', 20) ON DUPLICATE KEY UPDATE val = 20")
    run(s, "INSERT INTO upsert_test VALUES (1, 'v3', 30) ON DUPLICATE KEY UPDATE val = 30")
    _, rows, err, _ = run(s, "SELECT val FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '30'

# T06: Without ON DUPLICATE KEY (normal duplicate error)
def test_normal_duplicate_error(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100)")
    _, _, err, _ = run(s, "INSERT INTO upsert_test VALUES (1, 'Bob', 200)")
    teardown(s)
    return err is not None and 'duplicate' in err.lower()

# T07: Update only one column, others stay
def test_upsert_partial_update(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'Bob', 200) ON DUPLICATE KEY UPDATE val = 500")
    _, rows, err, _ = run(s, "SELECT name, val FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # name should remain 'Alice', val should be 500
    return len(rows) == 1 and rows[0][0] == 'Alice' and rows[0][1] == '500'

# T08: Upsert with string value containing special chars
def test_upsert_special_chars(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'hello', 10)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'x', 0) ON DUPLICATE KEY UPDATE name = 'it''s a test'")
    _, rows, err, _ = run(s, "SELECT name FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and "test" in rows[0][0]

# T09: Upsert with zero value
def test_upsert_zero_value(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'a', 100)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'b', 0) ON DUPLICATE KEY UPDATE val = 0")
    _, rows, err, _ = run(s, "SELECT val FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '0'

# T10: Upsert with negative value
def test_upsert_negative_value(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'a', 100)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'b', -1) ON DUPLICATE KEY UPDATE val = -42")
    _, rows, err, _ = run(s, "SELECT val FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '-42'

# T11: Upsert preserves other rows
def test_upsert_preserves_other_rows(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100)")
    run(s, "INSERT INTO upsert_test VALUES (2, 'Bob', 200)")
    run(s, "INSERT INTO upsert_test VALUES (3, 'Charlie', 300)")
    run(s, "INSERT INTO upsert_test VALUES (2, 'x', 0) ON DUPLICATE KEY UPDATE val = 999")
    _, rows, err, _ = run(s, "SELECT id, val FROM upsert_test ORDER BY id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    if len(rows) != 3: return False
    return rows[0][1] == '100' and rows[1][1] == '999' and rows[2][1] == '300'

# T12: Upsert with NULL value
def test_upsert_null_value(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'x', 0) ON DUPLICATE KEY UPDATE name = NULL")
    _, rows, err, _ = run(s, "SELECT name FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and (rows[0][0] is None or rows[0][0] == '')

# T13: Upsert with empty string
def test_upsert_empty_string(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'x', 0) ON DUPLICATE KEY UPDATE name = ''")
    _, rows, err, _ = run(s, "SELECT name FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == ''

# T14: Verify row count after upsert (should be 1 row total, not 2)
def test_upsert_row_count(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'Bob', 200) ON DUPLICATE KEY UPDATE val = 200")
    _, rows, err, _ = run(s, "SELECT COUNT(*) FROM upsert_test")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '1'

# T15: Upsert then SELECT * to verify full row
def test_upsert_full_row_verify(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (5, 'Eve', 50)")
    run(s, "INSERT INTO upsert_test VALUES (5, 'ignored', 999) ON DUPLICATE KEY UPDATE name = 'Eve2', val = 55")
    _, rows, err, _ = run(s, "SELECT id, name, val FROM upsert_test WHERE id = 5")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '5' and rows[0][1] == 'Eve2' and rows[0][2] == '55'

# T16: Insert with column list + ON DUPLICATE KEY UPDATE
def test_upsert_with_column_list(s):
    setup(s)
    run(s, "INSERT INTO upsert_test (id, name, val) VALUES (1, 'Alice', 100)")
    run(s, "INSERT INTO upsert_test (id, name, val) VALUES (1, 'Bob', 200) ON DUPLICATE KEY UPDATE val = 300")
    _, rows, err, _ = run(s, "SELECT val FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '300'

# T17: Upsert with large integer value
def test_upsert_large_int(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'a', 0)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'b', 0) ON DUPLICATE KEY UPDATE val = 2147483647")
    _, rows, err, _ = run(s, "SELECT val FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '2147483647'

# T18: Upsert with expression (val = val + 1)
def test_upsert_expression(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'counter', 10)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'x', 0) ON DUPLICATE KEY UPDATE val = val + 1")
    _, rows, err, _ = run(s, "SELECT val FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '11'

# --- Run all tests ---
if __name__ == "__main__":
    print("=== ON DUPLICATE KEY UPDATE (Task 84) ===")
    test("T01 INSERT no conflict", test_insert_no_conflict)
    test("T02 UPSERT conflict", test_upsert_conflict)
    test("T03 Update multi columns", test_upsert_multi_col)
    test("T04 No conflict = INSERT", test_upsert_new_row)
    test("T05 Multiple upserts", test_multiple_upserts)
    test("T06 Normal duplicate error", test_normal_duplicate_error)
    test("T07 Partial update (other cols preserved)", test_upsert_partial_update)
    test("T08 Special chars in string", test_upsert_special_chars)
    test("T09 Zero value", test_upsert_zero_value)
    test("T10 Negative value", test_upsert_negative_value)
    test("T11 Preserves other rows", test_upsert_preserves_other_rows)
    test("T12 NULL value", test_upsert_null_value)
    test("T13 Empty string", test_upsert_empty_string)
    test("T14 Row count after upsert", test_upsert_row_count)
    test("T15 Full row verify", test_upsert_full_row_verify)
    test("T16 With column list", test_upsert_with_column_list)
    test("T17 Large integer", test_upsert_large_int)
    test("T18 Expression (val = val + 1)", test_upsert_expression)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
