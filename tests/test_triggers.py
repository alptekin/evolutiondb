"""
test_triggers.py — Tests for Triggers (Task 75)
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
    run(s, "DROP TABLE IF EXISTS audit_log")
    run(s, "DROP TABLE IF EXISTS trig_test")
    run(s, "CREATE TABLE trig_test (id INT PRIMARY KEY, name VARCHAR(50), val INT)")
    run(s, "CREATE TABLE audit_log (log_id INT PRIMARY KEY AUTO_INCREMENT, action VARCHAR(20), row_id INT, detail VARCHAR(100))")

def teardown(s):
    run(s, "DROP TRIGGER IF EXISTS tr_test")
    run(s, "DROP TRIGGER IF EXISTS tr_before")
    run(s, "DROP TRIGGER IF EXISTS tr_after")
    run(s, "DROP TRIGGER IF EXISTS tr_audit")
    run(s, "DROP TABLE IF EXISTS audit_log")
    run(s, "DROP TABLE IF EXISTS trig_test")

# --- T01: CREATE TRIGGER basic ---
def test_create_trigger(s):
    setup(s)
    _, _, err, tag = run(s, """CREATE TRIGGER tr_test AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('INSERT', NEW.id, NEW.name);
        END""")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return tag and 'CREATE TRIGGER' in tag

# --- T02: DROP TRIGGER ---
def test_drop_trigger(s):
    setup(s)
    run(s, """CREATE TRIGGER tr_test AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('INSERT', NEW.id, NEW.name);
        END""")
    _, _, err, tag = run(s, "DROP TRIGGER tr_test")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return tag and 'DROP TRIGGER' in tag

# --- T03: DROP TRIGGER IF EXISTS ---
def test_drop_trigger_if_exists(s):
    setup(s)
    _, _, err, tag = run(s, "DROP TRIGGER IF EXISTS nonexistent_trigger")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return tag and 'DROP TRIGGER' in tag

# --- T04: AFTER INSERT trigger — audit log ---
def test_after_insert(s):
    setup(s)
    run(s, """CREATE TRIGGER tr_audit AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('INSERT', NEW.id, NEW.name);
        END""")
    run(s, "INSERT INTO trig_test VALUES (1, 'Alice', 100)")
    _, rows, err, _ = run(s, "SELECT * FROM audit_log")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'INSERT' and rows[0][2] == '1' and rows[0][3] == 'Alice'

# --- T05: BEFORE INSERT trigger — reject via SIGNAL ---
def test_before_insert_reject(s):
    setup(s)
    run(s, """CREATE TRIGGER tr_before BEFORE INSERT ON trig_test
        FOR EACH ROW BEGIN
            IF NEW.val < 0 THEN
                SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Negative values not allowed';
            END IF;
        END""")
    # Positive value — should succeed
    _, _, err1, _ = run(s, "INSERT INTO trig_test VALUES (1, 'ok', 10)")
    # Negative value — should fail
    _, _, err2, _ = run(s, "INSERT INTO trig_test VALUES (2, 'bad', -5)")
    _, rows, _, _ = run(s, "SELECT * FROM trig_test")
    teardown(s)
    if err1: print(f"    insert1 err: {err1}"); return False
    return err2 is not None and 'Negative' in err2 and len(rows) == 1

# --- T06: AFTER UPDATE trigger — OLD/NEW references ---
def test_after_update(s):
    setup(s)
    run(s, "INSERT INTO trig_test VALUES (1, 'before', 10)")
    run(s, """CREATE TRIGGER tr_audit AFTER UPDATE ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('UPDATE', OLD.id, NEW.name);
        END""")
    run(s, "UPDATE trig_test SET name = 'after' WHERE id = 1")
    _, rows, err, _ = run(s, "SELECT * FROM audit_log")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'UPDATE' and rows[0][2] == '1' and rows[0][3] == 'after'

# --- T07: AFTER DELETE trigger ---
def test_after_delete(s):
    setup(s)
    run(s, "INSERT INTO trig_test VALUES (1, 'gone', 99)")
    run(s, """CREATE TRIGGER tr_audit AFTER DELETE ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('DELETE', OLD.id, OLD.name);
        END""")
    run(s, "DELETE FROM trig_test WHERE id = 1")
    _, rows, err, _ = run(s, "SELECT * FROM audit_log")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == 'DELETE' and rows[0][2] == '1' and rows[0][3] == 'gone'

# --- T08: Multiple rows trigger fires per row ---
def test_multi_row_trigger(s):
    setup(s)
    run(s, """CREATE TRIGGER tr_audit AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('INS', NEW.id, NEW.name);
        END""")
    run(s, "INSERT INTO trig_test VALUES (1, 'a', 10)")
    run(s, "INSERT INTO trig_test VALUES (2, 'b', 20)")
    run(s, "INSERT INTO trig_test VALUES (3, 'c', 30)")
    _, rows, err, _ = run(s, "SELECT * FROM audit_log ORDER BY row_id")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3

# --- T09: Trigger with body logic (IF statement) ---
def test_trigger_with_if(s):
    setup(s)
    run(s, """CREATE TRIGGER tr_audit AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            IF NEW.val > 50 THEN
                INSERT INTO audit_log (action, row_id, detail) VALUES ('HIGH', NEW.id, NEW.name);
            END IF;
        END""")
    run(s, "INSERT INTO trig_test VALUES (1, 'low', 10)")
    run(s, "INSERT INTO trig_test VALUES (2, 'high', 100)")
    _, rows, err, _ = run(s, "SELECT * FROM audit_log")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][2] == '2'

# --- T10: BEFORE DELETE trigger reject ---
def test_before_delete_reject(s):
    setup(s)
    run(s, "INSERT INTO trig_test VALUES (1, 'protected', 999)")
    run(s, """CREATE TRIGGER tr_before BEFORE DELETE ON trig_test
        FOR EACH ROW BEGIN
            IF OLD.val = 999 THEN
                SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Cannot delete protected rows';
            END IF;
        END""")
    _, _, err, _ = run(s, "DELETE FROM trig_test WHERE id = 1")
    _, rows, _, _ = run(s, "SELECT * FROM trig_test")
    teardown(s)
    return err is not None and 'protected' in err and len(rows) == 1


# --- Run all tests ---
if __name__ == "__main__":
    print("=== Triggers (Task 75) ===")
    test("T01 CREATE TRIGGER basic", test_create_trigger)
    test("T02 DROP TRIGGER", test_drop_trigger)
    test("T03 DROP TRIGGER IF EXISTS", test_drop_trigger_if_exists)
    test("T04 AFTER INSERT audit", test_after_insert)
    test("T05 BEFORE INSERT reject", test_before_insert_reject)
    test("T06 AFTER UPDATE OLD/NEW", test_after_update)
    test("T07 AFTER DELETE OLD ref", test_after_delete)
    test("T08 Multi-row trigger", test_multi_row_trigger)
    test("T09 Trigger with IF body", test_trigger_with_if)
    test("T10 BEFORE DELETE reject", test_before_delete_reject)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
