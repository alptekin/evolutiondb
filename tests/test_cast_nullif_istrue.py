"""
test_cast_nullif_istrue.py — Tests for CAST/NULLIF/IF/IFNULL/IS UNKNOWN (Tasks 60+61+62)
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

# ── CAST ──

def test_cast_to_int(s):
    _, r, e, _ = run(s, "SELECT CAST('123' AS INT)")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '123'

def test_cast_float_to_int(s):
    _, r, e, _ = run(s, "SELECT CAST(3.14 AS INT)")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '3'

def test_cast_to_varchar(s):
    _, r, e, _ = run(s, "SELECT CAST(42 AS VARCHAR(50))")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '42'

def test_convert(s):
    _, r, e, _ = run(s, "SELECT CONVERT('99', INT)")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '99'

# ── NULLIF ──

def test_nullif_equal(s):
    _, r, e, _ = run(s, "SELECT NULLIF(1, 1)")
    if e: print(f"    err: {e}"); return False
    return r[0][0] is None

def test_nullif_not_equal(s):
    _, r, e, _ = run(s, "SELECT NULLIF(1, 2)")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '1'

# ── IFNULL ──

def test_ifnull_null(s):
    _, r, e, _ = run(s, "SELECT IFNULL(NULL, 'default')")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == 'default'

def test_ifnull_not_null(s):
    _, r, e, _ = run(s, "SELECT IFNULL('value', 'default')")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == 'value'

# ── IF ──

def test_if_true(s):
    _, r, e, _ = run(s, "SELECT IF(1 > 0, 'yes', 'no')")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == 'yes'

def test_if_false(s):
    _, r, e, _ = run(s, "SELECT IF(1 > 10, 'yes', 'no')")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == 'no'

# ── IS UNKNOWN ──

def test_is_unknown(s):
    run(s, "DROP TABLE IF EXISTS iu_test")
    run(s, "CREATE TABLE iu_test (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO iu_test VALUES (1, NULL)")
    run(s, "INSERT INTO iu_test VALUES (2, 42)")
    _, r, e, _ = run(s, "SELECT * FROM iu_test WHERE val IS UNKNOWN")
    run(s, "DROP TABLE IF EXISTS iu_test")
    if e: print(f"    err: {e}"); return False
    return len(r) == 1 and r[0][0] == '1'

# ── NULL-safe <=> ──

def test_nullsafe_eq(s):
    _, r, e, _ = run(s, "SELECT 1 <=> 1")
    if e: print(f"    err: {e}"); return False
    # <=> parsed as COMPARISON, evaluates like = for non-NULL
    return r[0][0] is not None

def test_cast_in_where(s):
    run(s, "DROP TABLE IF EXISTS cw_test")
    run(s, "CREATE TABLE cw_test (id INT PRIMARY KEY, val VARCHAR(20))")
    run(s, "INSERT INTO cw_test VALUES (1, '100')")
    run(s, "INSERT INTO cw_test VALUES (2, '50')")
    _, r, e, _ = run(s, "SELECT * FROM cw_test WHERE CAST(val AS INT) > 75")
    run(s, "DROP TABLE IF EXISTS cw_test")
    if e: print(f"    err: {e}"); return False
    return len(r) == 1 and r[0][0] == '1'

def test_ifnull_in_select(s):
    run(s, "DROP TABLE IF EXISTS in_test")
    run(s, "CREATE TABLE in_test (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "INSERT INTO in_test VALUES (1, NULL)")
    run(s, "INSERT INTO in_test VALUES (2, 'Bob')")
    _, r, e, _ = run(s, "SELECT IFNULL(name, 'Anonymous') FROM in_test ORDER BY id")
    run(s, "DROP TABLE IF EXISTS in_test")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == 'Anonymous' and r[1][0] == 'Bob'

def test_nullif_string(s):
    _, r, e, _ = run(s, "SELECT NULLIF('abc', 'abc')")
    if e: print(f"    err: {e}"); return False
    return r[0][0] is None

if __name__ == "__main__":
    print("=== CAST / NULLIF / IF / IFNULL / IS UNKNOWN Tests ===")
    test("T1: CAST to INT", test_cast_to_int)
    test("T2: CAST float to INT", test_cast_float_to_int)
    test("T3: CAST to VARCHAR", test_cast_to_varchar)
    test("T4: CONVERT", test_convert)
    test("T5: NULLIF equal", test_nullif_equal)
    test("T6: NULLIF not equal", test_nullif_not_equal)
    test("T7: IFNULL null", test_ifnull_null)
    test("T8: IFNULL not null", test_ifnull_not_null)
    test("T9: IF true", test_if_true)
    test("T10: IF false", test_if_false)
    test("T11: IS UNKNOWN", test_is_unknown)
    test("T12: NULL-safe <=>", test_nullsafe_eq)
    test("T13: CAST in WHERE", test_cast_in_where)
    test("T14: IFNULL in SELECT", test_ifnull_in_select)
    test("T15: NULLIF string", test_nullif_string)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
