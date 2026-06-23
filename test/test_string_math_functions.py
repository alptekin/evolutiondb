"""
test_string_math_functions.py — Tests for String + Math functions (Tasks 56+57+58)
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

# ── String Functions ──

def test_left(s):
    _, r, e, _ = run(s, "SELECT LEFT('hello', 3)")
    return not e and r[0][0] == 'hel'

def test_right(s):
    _, r, e, _ = run(s, "SELECT RIGHT('hello', 3)")
    return not e and r[0][0] == 'llo'

def test_lpad(s):
    _, r, e, _ = run(s, "SELECT LPAD('hi', 5, '*')")
    return not e and r[0][0] == '***hi'

def test_rpad(s):
    _, r, e, _ = run(s, "SELECT RPAD('hi', 5, '*')")
    return not e and r[0][0] == 'hi***'

def test_reverse(s):
    _, r, e, _ = run(s, "SELECT REVERSE('hello')")
    return not e and r[0][0] == 'olleh'

def test_repeat(s):
    _, r, e, _ = run(s, "SELECT REPEAT('ab', 3)")
    return not e and r[0][0] == 'ababab'

def test_instr(s):
    _, r, e, _ = run(s, "SELECT INSTR('hello world', 'world')")
    return not e and r[0][0] == '7'

def test_locate(s):
    _, r, e, _ = run(s, "SELECT LOCATE('lo', 'hello')")
    return not e and r[0][0] == '4'

# ── Math Functions ──

def test_abs(s):
    _, r, e, _ = run(s, "SELECT ABS(-5)")
    return not e and r[0][0] == '5'

def test_ceil(s):
    _, r, e, _ = run(s, "SELECT CEIL(3.2)")
    return not e and r[0][0] == '4'

def test_floor(s):
    _, r, e, _ = run(s, "SELECT FLOOR(3.8)")
    return not e and r[0][0] == '3'

def test_round(s):
    _, r, e, _ = run(s, "SELECT ROUND(3.456, 2)")
    return not e and r[0][0] == '3.46'

def test_power(s):
    _, r, e, _ = run(s, "SELECT POWER(2, 10)")
    return not e and r[0][0] == '1024'

def test_sqrt(s):
    _, r, e, _ = run(s, "SELECT SQRT(144)")
    return not e and r[0][0] == '12'

def test_mod(s):
    _, r, e, _ = run(s, "SELECT MOD(10, 3)")
    if e: print(f"    err: {e}")
    return not e and r[0][0] == '1'

def test_sign(s):
    _, r, e, _ = run(s, "SELECT SIGN(-5)")
    return not e and r[0][0] == '-1'

# ── CONCAT 3+ ──

def test_concat3(s):
    _, r, e, _ = run(s, "SELECT CONCAT('a', 'b', 'c')")
    return not e and r[0][0] == 'abc'

def test_concat4(s):
    _, r, e, _ = run(s, "SELECT CONCAT('a', 'b', 'c', 'd')")
    return not e and r[0][0] == 'abcd'

def test_rand(s):
    _, r, e, _ = run(s, "SELECT RAND()")
    if e: print(f"    err: {e}"); return False
    val = float(r[0][0])
    return 0.0 <= val <= 1.0

def test_pi(s):
    _, r, e, _ = run(s, "SELECT PI()")
    if e: print(f"    err: {e}"); return False
    return r[0][0].startswith('3.14159')

if __name__ == "__main__":
    print("=== String + Math Functions Tests ===")
    test("T1: LEFT", test_left)
    test("T2: RIGHT", test_right)
    test("T3: LPAD", test_lpad)
    test("T4: RPAD", test_rpad)
    test("T5: REVERSE", test_reverse)
    test("T6: REPEAT", test_repeat)
    test("T7: INSTR", test_instr)
    test("T8: LOCATE", test_locate)
    test("T9: ABS", test_abs)
    test("T10: CEIL", test_ceil)
    test("T11: FLOOR", test_floor)
    test("T12: ROUND", test_round)
    test("T13: POWER", test_power)
    test("T14: SQRT", test_sqrt)
    test("T15: MOD", test_mod)
    test("T16: SIGN", test_sign)
    test("T17: CONCAT 3-arg", test_concat3)
    test("T18: CONCAT 4-arg", test_concat4)
    test("T19: RAND", test_rand)
    test("T20: PI", test_pi)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
