#!/usr/bin/env python3
"""Tests for PostgreSQL-style sequences (Task 83 + G1-G11):
   CREATE/DROP/ALTER SEQUENCE, NEXTVAL, CURRVAL, SETVAL, LASTVAL."""
import sys, os
sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

passed = 0
failed = 0

def check(name, cond):
    global passed, failed
    if cond:
        print(f"  PASS: {name}")
        passed += 1
    else:
        print(f"  FAIL: {name}")
        failed += 1

def val(s, sql):
    _, rows, err, _ = simple_query(s, sql)
    if err or not rows or not rows[0]: return None
    return rows[0][0]

s = conn()
simple_query(s, "DROP SEQUENCE IF EXISTS test_seq")

# ── Core Sequence Tests ──
print("Core tests:")

simple_query(s, "CREATE SEQUENCE test_seq START WITH 1 INCREMENT BY 1")
check("CREATE SEQUENCE", True)

vals = [val(s, "SELECT NEXTVAL('test_seq')") for _ in range(5)]
check("NEXTVAL 1-5", vals == ["1", "2", "3", "4", "5"])

check("CURRVAL", val(s, "SELECT CURRVAL('test_seq')") == "5")
check("SETVAL", val(s, "SELECT SETVAL('test_seq', 100)") == "100")
check("NEXTVAL after SETVAL", val(s, "SELECT NEXTVAL('test_seq')") == "101")
check("LASTVAL", val(s, "SELECT LASTVAL()") == "101")

simple_query(s, "DROP SEQUENCE test_seq")
check("DROP SEQUENCE", True)

# ── G1: ALTER SEQUENCE ──
print("\nG1: ALTER SEQUENCE:")
simple_query(s, "CREATE SEQUENCE alt_seq START WITH 1 INCREMENT BY 1")
val(s, "SELECT NEXTVAL('alt_seq')")  # 1
simple_query(s, "ALTER SEQUENCE alt_seq INCREMENT BY 5")
v = val(s, "SELECT NEXTVAL('alt_seq')")
check("ALTER INCREMENT BY 5", v == "6")

# RENAME
simple_query(s, "ALTER SEQUENCE alt_seq RENAME TO alt_renamed")
v = val(s, "SELECT NEXTVAL('alt_renamed')")
check("ALTER RENAME", v == "11")
simple_query(s, "DROP SEQUENCE alt_renamed")

# ── G7: SETVAL 3-arg ──
print("\nG7: SETVAL 3-arg:")
simple_query(s, "CREATE SEQUENCE sv3 START WITH 1")
val(s, "SELECT SETVAL('sv3', 50, false)")
v = val(s, "SELECT NEXTVAL('sv3')")
check("SETVAL(seq, 50, false) -> NEXTVAL=50", v == "50")

val(s, "SELECT SETVAL('sv3', 200, true)")
v = val(s, "SELECT NEXTVAL('sv3')")
check("SETVAL(seq, 200, true) -> NEXTVAL=201", v == "201")
simple_query(s, "DROP SEQUENCE sv3")

# ── G8: RESTART ──
print("\nG8: RESTART:")
simple_query(s, "CREATE SEQUENCE rst_seq START WITH 10 INCREMENT BY 1")
for _ in range(5): val(s, "SELECT NEXTVAL('rst_seq')")  # 10-14
simple_query(s, "ALTER SEQUENCE rst_seq RESTART")
v = val(s, "SELECT NEXTVAL('rst_seq')")
check("RESTART resets to start_value", v == "10")

simple_query(s, "ALTER SEQUENCE rst_seq RESTART WITH 99")
v = val(s, "SELECT NEXTVAL('rst_seq')")
check("RESTART WITH 99", v == "99")
simple_query(s, "DROP SEQUENCE rst_seq")

# ── G11: Descending sequence ──
print("\nG11: Descending:")
simple_query(s, "CREATE SEQUENCE desc_seq START WITH 10 INCREMENT BY -1 MINVALUE 1 MAXVALUE 10")
v1 = val(s, "SELECT NEXTVAL('desc_seq')")
v2 = val(s, "SELECT NEXTVAL('desc_seq')")
v3 = val(s, "SELECT NEXTVAL('desc_seq')")
check("Descending 10,9,8", v1 == "10" and v2 == "9" and v3 == "8")
simple_query(s, "DROP SEQUENCE desc_seq")

# ── Edge: CYCLE ──
print("\nCYCLE:")
simple_query(s, "CREATE SEQUENCE cyc START WITH 1 INCREMENT BY 1 MAXVALUE 3 CYCLE")
vals = [val(s, "SELECT NEXTVAL('cyc')") for _ in range(5)]
check("CYCLE wraps 1,2,3,1,2", vals == ["1", "2", "3", "1", "2"])
simple_query(s, "DROP SEQUENCE cyc")

# ── Edge: Custom increment ──
print("\nCustom increment:")
simple_query(s, "CREATE SEQUENCE step5 START WITH 10 INCREMENT BY 5")
v1 = val(s, "SELECT NEXTVAL('step5')")
v2 = val(s, "SELECT NEXTVAL('step5')")
check("INCREMENT BY 5: 10,15", v1 == "10" and v2 == "15")
simple_query(s, "DROP SEQUENCE step5")

# ── Edge: IF NOT EXISTS / IF EXISTS ──
print("\nIF NOT EXISTS / IF EXISTS:")
simple_query(s, "CREATE SEQUENCE ine_seq")
_, _, err, _ = simple_query(s, "CREATE SEQUENCE IF NOT EXISTS ine_seq")
check("IF NOT EXISTS", err is None)
simple_query(s, "DROP SEQUENCE ine_seq")
_, _, err, _ = simple_query(s, "DROP SEQUENCE IF EXISTS nonexistent_seq")
check("IF EXISTS", err is None)

# ── Error tests ──
print("\nError tests:")
v = val(s, "SELECT NEXTVAL('no_such_seq')")
check("NEXTVAL non-existent returns NULL", v is None)

simple_query(s, "CREATE SEQUENCE fresh_seq")
v = val(s, "SELECT CURRVAL('fresh_seq')")
check("CURRVAL before NEXTVAL returns NULL", v is None)
simple_query(s, "DROP SEQUENCE fresh_seq")

simple_query(s, "CREATE SEQUENCE dup_seq")
_, _, err, _ = simple_query(s, "CREATE SEQUENCE dup_seq")
check("Duplicate CREATE rejected", err is not None)
simple_query(s, "DROP SEQUENCE dup_seq")

s.close()

print(f"\n=== Results: {passed} passed, {failed} failed ===")
sys.exit(0 if failed == 0 else 1)
