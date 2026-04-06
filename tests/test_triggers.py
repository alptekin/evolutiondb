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


# --- T11: Multiple triggers on same table/event ---
def test_multiple_triggers(s):
    setup(s)
    run(s, "DROP TRIGGER IF EXISTS tr_a")
    run(s, "DROP TRIGGER IF EXISTS tr_b")
    run(s, """CREATE TRIGGER tr_a AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('A', NEW.id, NEW.name);
        END""")
    run(s, """CREATE TRIGGER tr_b AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('B', NEW.id, NEW.name);
        END""")
    run(s, "INSERT INTO trig_test VALUES (1, 'test', 10)")
    _, rows, err, _ = run(s, "SELECT action FROM audit_log ORDER BY action")
    run(s, "DROP TRIGGER IF EXISTS tr_a")
    run(s, "DROP TRIGGER IF EXISTS tr_b")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    actions = [r[0] for r in rows]
    return len(rows) == 2 and 'A' in actions and 'B' in actions

# --- T12: BEFORE UPDATE with OLD/NEW + SIGNAL reject ---
def test_before_update_reject(s):
    setup(s)
    run(s, "INSERT INTO trig_test VALUES (1, 'orig', 50)")
    run(s, """CREATE TRIGGER tr_before BEFORE UPDATE ON trig_test
        FOR EACH ROW BEGIN
            IF NEW.val < OLD.val THEN
                SIGNAL SQLSTATE '45000' SET MESSAGE_TEXT = 'Cannot decrease value';
            END IF;
        END""")
    # Increase — should succeed
    _, _, err1, _ = run(s, "UPDATE trig_test SET val = 100 WHERE id = 1")
    # Decrease — should fail
    _, _, err2, _ = run(s, "UPDATE trig_test SET val = 10 WHERE id = 1")
    _, rows, _, _ = run(s, "SELECT val FROM trig_test WHERE id = 1")
    teardown(s)
    if err1: print(f"    update1 err: {err1}"); return False
    return err2 is not None and 'decrease' in err2 and len(rows) == 1

# --- T13: Trigger fires on different table (cross-table) ---
def test_recursive_trigger_depth(s):
    setup(s)
    run(s, "DROP TABLE IF EXISTS shadow")
    run(s, "CREATE TABLE shadow (id INT PRIMARY KEY, val INT)")
    run(s, """CREATE TRIGGER tr_shadow AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO shadow VALUES (NEW.id, NEW.val);
        END""")
    run(s, "INSERT INTO trig_test VALUES (1, 'a', 10)")
    run(s, "INSERT INTO trig_test VALUES (2, 'b', 20)")
    _, rows, err, _ = run(s, "SELECT * FROM shadow ORDER BY id")
    run(s, "DROP TABLE IF EXISTS shadow")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2 and rows[0][1] == '10' and rows[1][1] == '20'


# --- T14: ALTER TRIGGER ENABLE/DISABLE ---
def test_alter_trigger_enable(s):
    setup(s)
    run(s, """CREATE TRIGGER tr_audit AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('INS', NEW.id, NEW.name);
        END""")
    # Disable trigger
    run(s, "ALTER TRIGGER tr_audit DISABLE")
    run(s, "INSERT INTO trig_test VALUES (1, 'no_audit', 10)")
    _, rows1, _, _ = run(s, "SELECT * FROM audit_log")
    # Enable trigger
    run(s, "ALTER TRIGGER tr_audit ENABLE")
    run(s, "INSERT INTO trig_test VALUES (2, 'yes_audit', 20)")
    _, rows2, _, _ = run(s, "SELECT * FROM audit_log")
    teardown(s)
    return len(rows1) == 0 and len(rows2) == 1

# --- T15: DROP TABLE cascades trigger cleanup ---
def test_drop_table_cascade(s):
    setup(s)
    run(s, """CREATE TRIGGER tr_test AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('X', NEW.id, NEW.name);
        END""")
    # Drop the table — trigger should be cleaned up
    run(s, "DROP TABLE trig_test")
    # Now DROP TRIGGER IF EXISTS should succeed silently (trigger already gone)
    _, _, err, tag = run(s, "DROP TRIGGER IF EXISTS tr_test")
    run(s, "DROP TABLE IF EXISTS audit_log")
    if err: print(f"    err: {err}"); return False
    return tag and 'DROP TRIGGER' in tag


# --- T16: information_schema.triggers ---
def test_info_schema_triggers(s):
    setup(s)
    run(s, """CREATE TRIGGER tr_test AFTER INSERT ON trig_test
        FOR EACH ROW BEGIN
            INSERT INTO audit_log (action, row_id, detail) VALUES ('X', NEW.id, NEW.name);
        END""")
    _, rows, err, _ = run(s, "SELECT * FROM information_schema.triggers")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # Columns: trigger_name(0), event_manipulation(1), event_object_table(2), action_timing(3), is_enabled(4)
    found = False
    for r in rows:
        if r[0] == 'tr_test' and r[1] == 'INSERT' and r[3] == 'AFTER':
            found = True
    return found


# --- T17: BEFORE INSERT SET NEW.col = value modifies row ---
def test_before_insert_set_new(s):
    setup(s)
    run(s, """CREATE TRIGGER tr_before BEFORE INSERT ON trig_test
        FOR EACH ROW BEGIN
            SET NEW.name = 'modified';
        END""")
    run(s, "INSERT INTO trig_test VALUES (1, 'original', 10)")
    _, rows, err, _ = run(s, "SELECT name FROM trig_test WHERE id = 1")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][0] == 'modified'


# --- Run all tests ---
if __name__ == "__main__":
    print("=== Triggers (Task 75 + 75b) ===")
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
    print("--- Gaps ---")
    test("T11 Multiple triggers same event", test_multiple_triggers)
    test("T12 BEFORE UPDATE reject", test_before_update_reject)
    test("T13 Cross-table trigger", test_recursive_trigger_depth)
    test("T14 ALTER TRIGGER ENABLE/DISABLE", test_alter_trigger_enable)
    test("T15 DROP TABLE cascades triggers", test_drop_table_cascade)
    test("T16 information_schema.triggers", test_info_schema_triggers)
    test("T17 BEFORE INSERT SET NEW.col modify", test_before_insert_set_new)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
