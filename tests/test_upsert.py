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

def setup(s):
    run(s, "DROP TABLE IF EXISTS upsert_test")
    run(s, "CREATE TABLE upsert_test (id INT PRIMARY KEY, name VARCHAR(50), val INT)")

def teardown(s):
    run(s, "DROP TABLE IF EXISTS upsert_test")

# --- T01: Basic INSERT (no conflict) ---
def test_insert_no_conflict(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100) ON DUPLICATE KEY UPDATE val = 999")
    _, rows, err, _ = run(s, "SELECT * FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'Alice' and rows[0][2] == '100'

# --- T02: ON DUPLICATE KEY UPDATE (conflict) ---
def test_upsert_conflict(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'Bob', 200) ON DUPLICATE KEY UPDATE val = 200")
    _, rows, err, _ = run(s, "SELECT * FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'Alice' and rows[0][2] == '200'

# --- T03: Update multiple columns ---
def test_upsert_multi_col(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'old', 10)")
    run(s, "INSERT INTO upsert_test VALUES (1, 'new', 99) ON DUPLICATE KEY UPDATE name = 'updated', val = 99")
    _, rows, err, _ = run(s, "SELECT * FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'updated' and rows[0][2] == '99'

# --- T04: No conflict = normal INSERT ---
def test_upsert_new_row(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'first', 10)")
    run(s, "INSERT INTO upsert_test VALUES (2, 'second', 20) ON DUPLICATE KEY UPDATE val = 999")
    _, rows, err, _ = run(s, "SELECT * FROM upsert_test ORDER BY id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2 and rows[1][2] == '20'  # val unchanged, no conflict

# --- T05: Multiple upserts ---
def test_multiple_upserts(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'v1', 10) ON DUPLICATE KEY UPDATE val = 10")
    run(s, "INSERT INTO upsert_test VALUES (1, 'v2', 20) ON DUPLICATE KEY UPDATE val = 20")
    run(s, "INSERT INTO upsert_test VALUES (1, 'v3', 30) ON DUPLICATE KEY UPDATE val = 30")
    _, rows, err, _ = run(s, "SELECT val FROM upsert_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '30'

# --- T06: Without ON DUPLICATE KEY (normal duplicate error) ---
def test_normal_duplicate_error(s):
    setup(s)
    run(s, "INSERT INTO upsert_test VALUES (1, 'Alice', 100)")
    _, _, err, _ = run(s, "INSERT INTO upsert_test VALUES (1, 'Bob', 200)")
    teardown(s)
    return err is not None and 'duplicate' in err.lower()


# --- Run all tests ---
if __name__ == "__main__":
    print("=== ON DUPLICATE KEY UPDATE (Task 84) ===")
    test("T01 INSERT no conflict", test_insert_no_conflict)
    test("T02 UPSERT conflict", test_upsert_conflict)
    test("T03 Update multi columns", test_upsert_multi_col)
    test("T04 No conflict = INSERT", test_upsert_new_row)
    test("T05 Multiple upserts", test_multiple_upserts)
    test("T06 Normal duplicate error", test_normal_duplicate_error)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
