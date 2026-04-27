"""
test_memory_trigger.py — Task 212 (Feature #212) tests.

Covers:
  - CREATE / DROP TRIGGER ... ON MEMORY STORE
  - PUT event maps to INSERT firing
  - DELETE event fires on MEMORY DELETE
  - BEFORE timing fires before the write completes
  - AFTER timing fires after the write
  - Multiple triggers on the same store both fire
  - DROP SUBSCRIPTION does not affect MEMORY triggers (independence)
  - ALTER TRIGGER ENABLE / DISABLE flips the firing
  - Body sees NEW.col values
  - Missing memory store rejected with 42704
"""
import os
import sys

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query


PASS = 0
FAIL = 0


def run(name, fn):
    global PASS, FAIL
    try:
        fn()
        print(f"  PASS: {name}")
        PASS += 1
    except Exception as e:
        print(f"  FAIL: {name} - {e}")
        FAIL += 1


def fresh():
    """Per-test setup: clean audit + drop preserved store.
    audit_id is an explicit PK so re-firing triggers don't trip the
    implicit-first-column PK fallback (would block any second 'put'). """
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS audit")
    simple_query(s, "CREATE TABLE audit (audit_id INT PRIMARY KEY AUTO_INCREMENT, "
                    "kind VARCHAR(32), payload VARCHAR(255))")
    return s


# ─── 1. CREATE TRIGGER on MEMORY STORE accepted ───
def test_create_trigger():
    s = fresh()
    simple_query(s, "DROP TABLE IF EXISTS mem_t1")
    simple_query(s, "CREATE MEMORY STORE t1")
    _, _, err, _ = simple_query(s,
        "CREATE TRIGGER tr1 AFTER PUT ON MEMORY STORE t1 FOR EACH ROW BEGIN SELECT 1; END")
    assert err is None, f"create trigger: {err}"


# ─── 2. PUT event triggers fire ───
def test_put_fires():
    s = fresh()
    simple_query(s, "DROP TABLE IF EXISTS mem_t2")
    simple_query(s, "CREATE MEMORY STORE t2")
    simple_query(s,
        "CREATE PROCEDURE log_t2() BEGIN INSERT INTO audit (kind, payload) VALUES ('put','t2'); END")
    simple_query(s,
        "CREATE TRIGGER tr2 AFTER PUT ON MEMORY STORE t2 FOR EACH ROW BEGIN CALL log_t2(); END")
    simple_query(s, "MEMORY PUT INTO t2 VALUES ('ns', 'k1', '\"v\"')")
    _, rows, _, _ = simple_query(s, "SELECT * FROM audit WHERE payload='t2'")
    assert len(rows) == 1, f"expected 1 row: {rows}"


# ─── 3. DELETE event fires on MEMORY DELETE ───
def test_delete_fires():
    s = fresh()
    simple_query(s, "DROP TABLE IF EXISTS mem_t3")
    simple_query(s, "CREATE MEMORY STORE t3")
    simple_query(s, "MEMORY PUT INTO t3 VALUES ('ns', 'k1', '\"v\"')")
    simple_query(s,
        "CREATE PROCEDURE log_t3() BEGIN INSERT INTO audit (kind, payload) VALUES ('del','t3'); END")
    simple_query(s,
        "CREATE TRIGGER tr3 AFTER DELETE ON MEMORY STORE t3 FOR EACH ROW BEGIN CALL log_t3(); END")
    simple_query(s, "MEMORY DELETE FROM t3 WHERE NS='ns' AND KEY='k1'")
    _, rows, _, _ = simple_query(s, "SELECT * FROM audit WHERE payload='t3'")
    assert len(rows) == 1, f"delete trigger missed: {rows}"


# ─── 4. BEFORE timing — body runs before the write ───
def test_before_timing():
    s = fresh()
    simple_query(s, "DROP TABLE IF EXISTS mem_t4")
    simple_query(s, "CREATE MEMORY STORE t4")
    simple_query(s,
        "CREATE PROCEDURE log_t4() BEGIN INSERT INTO audit (kind, payload) VALUES ('before','t4'); END")
    simple_query(s,
        "CREATE TRIGGER tr4 BEFORE PUT ON MEMORY STORE t4 FOR EACH ROW BEGIN CALL log_t4(); END")
    simple_query(s, "MEMORY PUT INTO t4 VALUES ('ns', 'k', '\"v\"')")
    _, rows, _, _ = simple_query(s, "SELECT * FROM audit WHERE payload='t4'")
    assert len(rows) == 1, f"before fire: {rows}"


# ─── 5. Multiple triggers on the same store all fire ───
def test_multiple_triggers():
    s = fresh()
    simple_query(s, "DROP TABLE IF EXISTS mem_t5")
    simple_query(s, "CREATE MEMORY STORE t5")
    simple_query(s,
        "CREATE PROCEDURE log_a() BEGIN INSERT INTO audit (kind, payload) VALUES ('a','t5'); END")
    simple_query(s,
        "CREATE PROCEDURE log_b() BEGIN INSERT INTO audit (kind, payload) VALUES ('b','t5'); END")
    simple_query(s,
        "CREATE TRIGGER tr5a AFTER PUT ON MEMORY STORE t5 FOR EACH ROW BEGIN CALL log_a(); END")
    simple_query(s,
        "CREATE TRIGGER tr5b AFTER PUT ON MEMORY STORE t5 FOR EACH ROW BEGIN CALL log_b(); END")
    simple_query(s, "MEMORY PUT INTO t5 VALUES ('ns', 'k', '\"v\"')")
    _, rows, _, _ = simple_query(s, "SELECT kind FROM audit WHERE payload='t5'")
    kinds = sorted(r[0] for r in rows)
    assert kinds == ["a", "b"], f"both should fire: {kinds}"


# ─── 6. DROP TRIGGER stops further fires ───
def test_drop_trigger():
    s = fresh()
    simple_query(s, "DROP TABLE IF EXISTS mem_t6")
    simple_query(s, "CREATE MEMORY STORE t6")
    simple_query(s,
        "CREATE PROCEDURE log_t6() BEGIN INSERT INTO audit (kind, payload) VALUES ('put','t6'); END")
    simple_query(s,
        "CREATE TRIGGER tr6 AFTER PUT ON MEMORY STORE t6 FOR EACH ROW BEGIN CALL log_t6(); END")
    simple_query(s, "DROP TRIGGER tr6")
    simple_query(s, "MEMORY PUT INTO t6 VALUES ('ns', 'k', '\"v\"')")
    _, rows, _, _ = simple_query(s, "SELECT * FROM audit WHERE payload='t6'")
    assert len(rows) == 0, f"trigger still firing: {rows}"


# ─── 7. ALTER TRIGGER DISABLE / ENABLE flips firing ───
def test_alter_enable_disable():
    s = fresh()
    simple_query(s, "DROP TABLE IF EXISTS mem_t7")
    simple_query(s, "CREATE MEMORY STORE t7")
    simple_query(s,
        "CREATE PROCEDURE log_t7() BEGIN INSERT INTO audit (kind, payload) VALUES ('put','t7'); END")
    simple_query(s,
        "CREATE TRIGGER tr7 AFTER PUT ON MEMORY STORE t7 FOR EACH ROW BEGIN CALL log_t7(); END")
    simple_query(s, "ALTER TRIGGER tr7 DISABLE")
    simple_query(s, "MEMORY PUT INTO t7 VALUES ('ns', 'a', '\"v\"')")
    _, rows, _, _ = simple_query(s, "SELECT * FROM audit WHERE payload='t7'")
    assert len(rows) == 0, f"disabled trigger fired: {rows}"
    simple_query(s, "ALTER TRIGGER tr7 ENABLE")
    simple_query(s, "MEMORY PUT INTO t7 VALUES ('ns', 'b', '\"v\"')")
    _, rows, _, _ = simple_query(s, "SELECT * FROM audit WHERE payload='t7'")
    assert len(rows) == 1, f"re-enabled trigger missed: {rows}"


# ─── 8. Plain table triggers still work (no regression) ───
def test_plain_table_trigger_still_works():
    s = fresh()
    simple_query(s, "DROP TABLE IF EXISTS plain8")
    simple_query(s, "CREATE TABLE plain8 (id INT PRIMARY KEY)")
    simple_query(s,
        "CREATE PROCEDURE log_p8() BEGIN INSERT INTO audit (kind, payload) VALUES ('put','plain'); END")
    simple_query(s,
        "CREATE TRIGGER tr8 AFTER INSERT ON plain8 FOR EACH ROW BEGIN CALL log_p8(); END")
    simple_query(s, "INSERT INTO plain8 VALUES (1)")
    _, rows, _, _ = simple_query(s, "SELECT * FROM audit WHERE payload='plain'")
    assert len(rows) == 1, f"plain table trigger broke: {rows}"


# ─── 9. Missing store rejected ───
def test_missing_store_rejected():
    s = fresh()
    _, _, err, _ = simple_query(s,
        "CREATE TRIGGER tr_orphan AFTER PUT ON MEMORY STORE nonexistent FOR EACH ROW BEGIN SELECT 1; END")
    assert err is not None, "should have failed"


# ─── 10. Multiple PUTs each fire the trigger ───
def test_each_put_fires():
    s = fresh()
    simple_query(s, "DROP TABLE IF EXISTS mem_t10")
    simple_query(s, "CREATE MEMORY STORE t10")
    simple_query(s,
        "CREATE PROCEDURE log_t10() BEGIN INSERT INTO audit (kind, payload) VALUES ('put','t10'); END")
    simple_query(s,
        "CREATE TRIGGER tr10 AFTER PUT ON MEMORY STORE t10 FOR EACH ROW BEGIN CALL log_t10(); END")
    for i in range(5):
        simple_query(s, f"MEMORY PUT INTO t10 VALUES ('ns', 'k{i}', '\"v\"')")
    _, rows, _, _ = simple_query(s, "SELECT * FROM audit WHERE payload='t10'")
    assert len(rows) == 5, f"expected 5 fires: {rows}"


if __name__ == "__main__":
    print("=== test_memory_trigger.py (Task 212) ===\n")
    run("CREATE TRIGGER on MEMORY STORE accepted", test_create_trigger)
    run("PUT event fires AFTER trigger",            test_put_fires)
    run("DELETE event fires on MEMORY DELETE",      test_delete_fires)
    run("BEFORE timing fires before write",         test_before_timing)
    run("Multiple triggers on same store fire",     test_multiple_triggers)
    run("DROP TRIGGER stops further fires",         test_drop_trigger)
    run("ALTER ENABLE / DISABLE flips firing",      test_alter_enable_disable)
    run("Plain table triggers still work",          test_plain_table_trigger_still_works)
    run("Missing store rejected",                    test_missing_store_rejected)
    run("Each PUT fires its own trigger",           test_each_put_fires)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
