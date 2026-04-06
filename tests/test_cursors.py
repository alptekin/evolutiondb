"""
test_cursors.py — Tests for Standalone Cursors (Task 76)
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
    run(s, "DROP TABLE IF EXISTS cur_test")
    run(s, "CREATE TABLE cur_test (id INT PRIMARY KEY, name VARCHAR(50), val INT)")
    run(s, "INSERT INTO cur_test VALUES (1, 'Alice', 10)")
    run(s, "INSERT INTO cur_test VALUES (2, 'Bob', 20)")
    run(s, "INSERT INTO cur_test VALUES (3, 'Charlie', 30)")
    run(s, "INSERT INTO cur_test VALUES (4, 'Diana', 40)")
    run(s, "INSERT INTO cur_test VALUES (5, 'Eve', 50)")

def teardown(s):
    run(s, "DROP TABLE IF EXISTS cur_test")

# --- T01: DECLARE CURSOR basic ---
def test_declare_cursor(s):
    setup(s)
    _, _, err, tag = run(s, "DECLARE cur CURSOR FOR SELECT * FROM cur_test ORDER BY id")
    run(s, "CLOSE cur")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return tag and 'DECLARE CURSOR' in tag

# --- T02: OPEN + FETCH NEXT + CLOSE ---
def test_open_fetch_close(s):
    setup(s)
    run(s, "DECLARE cur CURSOR FOR SELECT id, name FROM cur_test ORDER BY id")
    run(s, "OPEN cur")
    _, rows, err, _ = run(s, "FETCH NEXT FROM cur")
    run(s, "CLOSE cur")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '1' and rows[0][1] == 'Alice'

# --- T03: FETCH multiple rows sequentially ---
def test_fetch_multiple(s):
    setup(s)
    run(s, "DECLARE cur CURSOR FOR SELECT id FROM cur_test ORDER BY id")
    run(s, "OPEN cur")
    _, r1, _, _ = run(s, "FETCH NEXT FROM cur")
    _, r2, _, _ = run(s, "FETCH NEXT FROM cur")
    _, r3, _, _ = run(s, "FETCH NEXT FROM cur")
    run(s, "CLOSE cur")
    teardown(s)
    return (len(r1) == 1 and r1[0][0] == '1' and
            len(r2) == 1 and r2[0][0] == '2' and
            len(r3) == 1 and r3[0][0] == '3')

# --- T04: FETCH ALL ---
def test_fetch_all(s):
    setup(s)
    run(s, "DECLARE cur CURSOR FOR SELECT id FROM cur_test ORDER BY id")
    run(s, "OPEN cur")
    _, rows, err, _ = run(s, "FETCH ALL FROM cur")
    run(s, "CLOSE cur")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 5

# --- T05: FETCH past end (empty result) ---
def test_fetch_past_end(s):
    setup(s)
    run(s, "DECLARE cur CURSOR FOR SELECT id FROM cur_test WHERE id = 1")
    run(s, "OPEN cur")
    run(s, "FETCH NEXT FROM cur")  # row 1
    _, rows, err, _ = run(s, "FETCH NEXT FROM cur")  # past end
    run(s, "CLOSE cur")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 0

# --- T06: CLOSE removes cursor ---
def test_fetch_after_close(s):
    setup(s)
    run(s, "DECLARE cur CURSOR FOR SELECT id FROM cur_test")
    run(s, "OPEN cur")
    _, _, err1, _ = run(s, "CLOSE cur")
    # Re-declare should work since cursor was removed
    _, _, err2, _ = run(s, "DECLARE cur CURSOR FOR SELECT id FROM cur_test")
    run(s, "CLOSE cur")
    teardown(s)
    if err1: print(f"    close err: {err1}"); return False
    if err2: print(f"    redeclare err: {err2}"); return False
    return True

# --- T07: Multiple cursors ---
def test_multiple_cursors(s):
    setup(s)
    run(s, "DECLARE cur_a CURSOR FOR SELECT id FROM cur_test WHERE val <= 20 ORDER BY id")
    run(s, "DECLARE cur_b CURSOR FOR SELECT id FROM cur_test WHERE val >= 40 ORDER BY id")
    run(s, "OPEN cur_a")
    run(s, "OPEN cur_b")
    _, ra, _, _ = run(s, "FETCH ALL FROM cur_a")
    _, rb, _, _ = run(s, "FETCH ALL FROM cur_b")
    run(s, "CLOSE cur_a")
    run(s, "CLOSE cur_b")
    teardown(s)
    return len(ra) == 2 and len(rb) == 2

# --- T08: Cursor with WHERE clause ---
def test_cursor_where(s):
    setup(s)
    run(s, "DECLARE cur CURSOR FOR SELECT name FROM cur_test WHERE val > 30 ORDER BY id")
    run(s, "OPEN cur")
    _, rows, err, _ = run(s, "FETCH ALL FROM cur")
    run(s, "CLOSE cur")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    names = [r[0] for r in rows]
    return len(rows) == 2 and 'Diana' in names and 'Eve' in names

# --- T09: DECLARE duplicate name (error) ---
def test_duplicate_cursor(s):
    setup(s)
    run(s, "DECLARE cur CURSOR FOR SELECT * FROM cur_test")
    _, _, err, _ = run(s, "DECLARE cur CURSOR FOR SELECT * FROM cur_test")
    run(s, "CLOSE cur")
    teardown(s)
    return err is not None and 'already exists' in err

# --- T10: FETCH FORWARD N ---
def test_fetch_forward_n(s):
    setup(s)
    run(s, "DECLARE cur CURSOR FOR SELECT id FROM cur_test ORDER BY id")
    run(s, "OPEN cur")
    _, rows, err, _ = run(s, "FETCH FORWARD 3 FROM cur")
    run(s, "CLOSE cur")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3 and rows[0][0] == '1' and rows[2][0] == '3'

# --- T11: MOVE NEXT ---
def test_move_next(s):
    setup(s)
    run(s, "DECLARE cur CURSOR FOR SELECT id FROM cur_test ORDER BY id")
    run(s, "OPEN cur")
    run(s, "MOVE NEXT FROM cur")  # skip row 1
    run(s, "MOVE NEXT FROM cur")  # skip row 2
    _, rows, err, _ = run(s, "FETCH NEXT FROM cur")  # should get row 3
    run(s, "CLOSE cur")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == '3'

# --- T12: FETCH without OPEN (error) ---
def test_fetch_without_open(s):
    setup(s)
    run(s, "DECLARE cur CURSOR FOR SELECT * FROM cur_test")
    _, _, err, _ = run(s, "FETCH NEXT FROM cur")
    run(s, "CLOSE cur")
    teardown(s)
    return err is not None and 'not open' in err


# --- Run all tests ---
if __name__ == "__main__":
    print("=== Standalone Cursors (Task 76) ===")
    test("T01 DECLARE CURSOR", test_declare_cursor)
    test("T02 OPEN + FETCH + CLOSE", test_open_fetch_close)
    test("T03 FETCH multiple rows", test_fetch_multiple)
    test("T04 FETCH ALL", test_fetch_all)
    test("T05 FETCH past end", test_fetch_past_end)
    test("T06 FETCH after CLOSE (error)", test_fetch_after_close)
    test("T07 Multiple cursors", test_multiple_cursors)
    test("T08 Cursor with WHERE", test_cursor_where)
    test("T09 Duplicate cursor (error)", test_duplicate_cursor)
    test("T10 FETCH FORWARD N", test_fetch_forward_n)
    test("T11 MOVE NEXT", test_move_next)
    test("T12 FETCH without OPEN (error)", test_fetch_without_open)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
