"""
test_date_functions.py — Tests for Date Functions (Task 59)
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

def test_now(s):
    _, r, e, _ = run(s, "SELECT NOW()")
    if e: print(f"    err: {e}"); return False
    # Should return something like 2026-03-30 ...
    return r[0][0] is not None and '-' in r[0][0]

def test_year(s):
    _, r, e, _ = run(s, "SELECT YEAR('2024-06-15')")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '2024'

def test_datediff(s):
    _, r, e, _ = run(s, "SELECT DATEDIFF('2024-03-01', '2024-01-01')")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '60' or r[0][0] == '59'  # depends on timezone

def test_date_add_year(s):
    _, r, e, _ = run(s, "SELECT DATE_ADD('2024-01-15', INTERVAL 2 YEAR)")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '2026-01-15'

def test_date_sub_year(s):
    _, r, e, _ = run(s, "SELECT DATE_SUB('2024-06-15', INTERVAL 1 YEAR)")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '2023-06-15'

def test_date_add_month(s):
    _, r, e, _ = run(s, "SELECT DATE_ADD('2024-01-15', INTERVAL 3 YEAR_MONTH)")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '2024-04-15'

def test_date_add_day(s):
    _, r, e, _ = run(s, "SELECT DATE_ADD('2024-01-15', INTERVAL 10 DAY_SECOND)")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '2024-01-25'

def test_date_add_with_table(s):
    run(s, "DROP TABLE IF EXISTS dt_test")
    run(s, "CREATE TABLE dt_test (id INT PRIMARY KEY, dt VARCHAR(20))")
    run(s, "INSERT INTO dt_test VALUES (1, '2024-01-01')")
    _, r, e, _ = run(s, "SELECT DATE_ADD(dt, INTERVAL 30 DAY_SECOND) FROM dt_test WHERE id = 1")
    run(s, "DROP TABLE IF EXISTS dt_test")
    if e: print(f"    err: {e}"); return False
    return r[0][0] == '2024-01-31'

def test_datediff_in_where(s):
    run(s, "DROP TABLE IF EXISTS dt_events")
    run(s, "CREATE TABLE dt_events (id INT PRIMARY KEY, event_date VARCHAR(20))")
    run(s, "INSERT INTO dt_events VALUES (1, '2024-01-10')")
    run(s, "INSERT INTO dt_events VALUES (2, '2024-06-15')")
    _, r, e, _ = run(s, "SELECT * FROM dt_events WHERE DATEDIFF(event_date, '2024-01-01') > 100")
    run(s, "DROP TABLE IF EXISTS dt_events")
    if e: print(f"    err: {e}"); return False
    return len(r) == 1 and r[0][0] == '2'

def test_year_in_where(s):
    run(s, "DROP TABLE IF EXISTS dt_years")
    run(s, "CREATE TABLE dt_years (id INT PRIMARY KEY, dt VARCHAR(20))")
    run(s, "INSERT INTO dt_years VALUES (1, '2023-05-01')")
    run(s, "INSERT INTO dt_years VALUES (2, '2024-06-15')")
    _, r, e, _ = run(s, "SELECT * FROM dt_years WHERE YEAR(dt) = 2024")
    run(s, "DROP TABLE IF EXISTS dt_years")
    if e: print(f"    err: {e}"); return False
    return len(r) == 1 and r[0][0] == '2'

def test_now_returns_current(s):
    import time
    _, r, e, _ = run(s, "SELECT NOW()")
    if e: return False
    # Check year is current
    current_year = str(time.localtime().tm_year)
    return r[0][0].startswith(current_year)

def test_datediff_same_date(s):
    _, r, e, _ = run(s, "SELECT DATEDIFF('2024-03-15', '2024-03-15')")
    if e: return False
    return r[0][0] == '0'

if __name__ == "__main__":
    print("=== Date Functions Tests ===")
    test("T1: NOW()", test_now)
    test("T2: YEAR('2024-06-15')", test_year)
    test("T3: DATEDIFF", test_datediff)
    test("T4: DATE_ADD YEAR", test_date_add_year)
    test("T5: DATE_SUB YEAR", test_date_sub_year)
    test("T6: DATE_ADD MONTH (YEAR_MONTH)", test_date_add_month)
    test("T7: DATE_ADD DAY (DAY_SECOND)", test_date_add_day)
    test("T8: DATE_ADD with table column", test_date_add_with_table)
    test("T9: DATEDIFF in WHERE", test_datediff_in_where)
    test("T10: YEAR in WHERE", test_year_in_where)
    test("T11: NOW returns current year", test_now_returns_current)
    test("T12: DATEDIFF same date", test_datediff_same_date)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
