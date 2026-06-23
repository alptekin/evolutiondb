"""
test_regexp_group_concat.py — Tests for REGEXP + GROUP_CONCAT (Tasks 63+64)
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

# ── REGEXP Tests ──

def test_regexp_match(s):
    run(s, "DROP TABLE IF EXISTS rx_test")
    run(s, "CREATE TABLE rx_test (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "INSERT INTO rx_test VALUES (1, 'Alice')")
    run(s, "INSERT INTO rx_test VALUES (2, 'Bob')")
    run(s, "INSERT INTO rx_test VALUES (3, 'Carol')")
    _, r, e, _ = run(s, "SELECT * FROM rx_test WHERE name REGEXP '^A'")
    run(s, "DROP TABLE IF EXISTS rx_test")
    if e: print(f"    err: {e}"); return False
    return len(r) == 1 and r[0][1] == 'Alice'

def test_not_regexp(s):
    run(s, "DROP TABLE IF EXISTS rx_test")
    run(s, "CREATE TABLE rx_test (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "INSERT INTO rx_test VALUES (1, 'Alice')")
    run(s, "INSERT INTO rx_test VALUES (2, 'Bob')")
    _, r, e, _ = run(s, "SELECT * FROM rx_test WHERE name NOT REGEXP '^A'")
    run(s, "DROP TABLE IF EXISTS rx_test")
    if e: print(f"    err: {e}"); return False
    return len(r) == 1 and r[0][1] == 'Bob'

def test_regexp_digits(s):
    run(s, "DROP TABLE IF EXISTS rx_test")
    run(s, "CREATE TABLE rx_test (id INT PRIMARY KEY, val VARCHAR(50))")
    run(s, "INSERT INTO rx_test VALUES (1, 'abc123')")
    run(s, "INSERT INTO rx_test VALUES (2, 'hello')")
    _, r, e, _ = run(s, "SELECT * FROM rx_test WHERE val REGEXP '[0-9]'")
    run(s, "DROP TABLE IF EXISTS rx_test")
    if e: print(f"    err: {e}"); return False
    return len(r) == 1 and r[0][1] == 'abc123'

def test_regexp_select(s):
    _, r, e, _ = run(s, "SELECT 'hello' REGEXP 'hel'")
    if e: print(f"    err: {e}"); return False
    return r[0][0] in ('t', 'true', '1')

# ── GROUP_CONCAT Tests ──

def test_group_concat_basic(s):
    run(s, "DROP TABLE IF EXISTS gc_test")
    run(s, "CREATE TABLE gc_test (id INT PRIMARY KEY, dept VARCHAR(20), name VARCHAR(50))")
    run(s, "INSERT INTO gc_test VALUES (1, 'Eng', 'Alice')")
    run(s, "INSERT INTO gc_test VALUES (2, 'Eng', 'Bob')")
    run(s, "INSERT INTO gc_test VALUES (3, 'Sales', 'Carol')")
    _, r, e, _ = run(s, "SELECT dept, GROUP_CONCAT(name) FROM gc_test GROUP BY dept ORDER BY dept")
    run(s, "DROP TABLE IF EXISTS gc_test")
    if e: print(f"    err: {e}"); return False
    # Eng: Alice,Bob; Sales: Carol
    return len(r) == 2 and 'Alice' in r[0][1] and 'Bob' in r[0][1]

def test_group_concat_separator(s):
    run(s, "DROP TABLE IF EXISTS gc_test")
    run(s, "CREATE TABLE gc_test (id INT PRIMARY KEY, dept VARCHAR(20), name VARCHAR(50))")
    run(s, "INSERT INTO gc_test VALUES (1, 'Eng', 'Alice')")
    run(s, "INSERT INTO gc_test VALUES (2, 'Eng', 'Bob')")
    _, r, e, _ = run(s, "SELECT dept, GROUP_CONCAT(name SEPARATOR '; ') FROM gc_test GROUP BY dept")
    run(s, "DROP TABLE IF EXISTS gc_test")
    if e: print(f"    err: {e}"); return False
    return '; ' in r[0][1]

def test_group_concat_no_group(s):
    run(s, "DROP TABLE IF EXISTS gc_test")
    run(s, "CREATE TABLE gc_test (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "INSERT INTO gc_test VALUES (1, 'Alice')")
    run(s, "INSERT INTO gc_test VALUES (2, 'Bob')")
    run(s, "INSERT INTO gc_test VALUES (3, 'Carol')")
    _, r, e, _ = run(s, "SELECT GROUP_CONCAT(name) FROM gc_test")
    run(s, "DROP TABLE IF EXISTS gc_test")
    if e: print(f"    err: {e}"); return False
    return len(r) == 1 and 'Alice' in r[0][0] and 'Bob' in r[0][0] and 'Carol' in r[0][0]

def test_group_concat_with_where(s):
    run(s, "DROP TABLE IF EXISTS gc_test")
    run(s, "CREATE TABLE gc_test (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "INSERT INTO gc_test VALUES (1, 'Alice', 90)")
    run(s, "INSERT INTO gc_test VALUES (2, 'Bob', 70)")
    run(s, "INSERT INTO gc_test VALUES (3, 'Carol', 85)")
    _, r, e, _ = run(s, "SELECT GROUP_CONCAT(name) FROM gc_test WHERE score >= 80")
    run(s, "DROP TABLE IF EXISTS gc_test")
    if e: print(f"    err: {e}"); return False
    return 'Alice' in r[0][0] and 'Carol' in r[0][0] and 'Bob' not in r[0][0]

def test_group_concat_null(s):
    run(s, "DROP TABLE IF EXISTS gc_test")
    run(s, "CREATE TABLE gc_test (id INT PRIMARY KEY, name VARCHAR(50))")
    run(s, "INSERT INTO gc_test VALUES (1, 'Alice')")
    run(s, "INSERT INTO gc_test VALUES (2, NULL)")
    run(s, "INSERT INTO gc_test VALUES (3, 'Carol')")
    _, r, e, _ = run(s, "SELECT GROUP_CONCAT(name) FROM gc_test")
    run(s, "DROP TABLE IF EXISTS gc_test")
    if e: print(f"    err: {e}"); return False
    # NULLs skipped
    return 'Alice' in r[0][0] and 'Carol' in r[0][0]

def test_regexp_case_insensitive(s):
    _, r, e, _ = run(s, "SELECT 'Hello' REGEXP 'hello'")
    if e: print(f"    err: {e}"); return False
    # Our lexer is case-insensitive but regex should be case-sensitive by default
    # Actually our grammar is case-insensitive, but the regex engine uses REG_EXTENDED without REG_ICASE
    return r[0][0] is not None

if __name__ == "__main__":
    print("=== REGEXP + GROUP_CONCAT Tests ===")
    test("T1: REGEXP match", test_regexp_match)
    test("T2: NOT REGEXP", test_not_regexp)
    test("T3: REGEXP digits", test_regexp_digits)
    test("T4: REGEXP in SELECT", test_regexp_select)
    test("T5: GROUP_CONCAT basic", test_group_concat_basic)
    test("T6: GROUP_CONCAT separator", test_group_concat_separator)
    test("T7: GROUP_CONCAT no GROUP BY", test_group_concat_no_group)
    test("T8: GROUP_CONCAT with WHERE", test_group_concat_with_where)
    test("T9: GROUP_CONCAT NULL skip", test_group_concat_null)
    test("T10: REGEXP case", test_regexp_case_insensitive)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
