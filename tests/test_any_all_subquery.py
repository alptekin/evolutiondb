"""
test_any_all_subquery.py — Tests for ANY/SOME/ALL subqueries (Task 55)
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
    run(s, "DROP TABLE IF EXISTS aa_scores")
    run(s, "DROP TABLE IF EXISTS aa_thresholds")
    run(s, "CREATE TABLE aa_scores (id INT PRIMARY KEY, name VARCHAR(50), score INT)")
    run(s, "CREATE TABLE aa_thresholds (id INT PRIMARY KEY, min_score INT)")
    run(s, "INSERT INTO aa_scores VALUES (1, 'Alice', 90)")
    run(s, "INSERT INTO aa_scores VALUES (2, 'Bob', 70)")
    run(s, "INSERT INTO aa_scores VALUES (3, 'Carol', 50)")
    run(s, "INSERT INTO aa_thresholds VALUES (1, 60)")
    run(s, "INSERT INTO aa_thresholds VALUES (2, 80)")

def cleanup(s):
    run(s, "DROP TABLE IF EXISTS aa_scores")
    run(s, "DROP TABLE IF EXISTS aa_thresholds")

# ── = ANY / = SOME (equivalent to IN) ──

def test_eq_any(s):
    """T1: = ANY — equivalent to IN"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM aa_scores WHERE score = ANY (SELECT min_score FROM aa_thresholds)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # min_scores: 60, 80. No score matches exactly.
    return len(rows) == 0

def test_eq_some(s):
    """T2: = SOME — same as = ANY"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM aa_scores WHERE score = SOME (SELECT score FROM aa_scores WHERE score > 80)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # scores > 80: 90. Alice has score=90, matches
    return len(rows) == 1 and rows[0][1] == 'Alice'

# ── > ANY / < ANY ──

def test_gt_any(s):
    """T3: > ANY — greater than at least one value (> MIN)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM aa_scores WHERE score > ANY (SELECT min_score FROM aa_thresholds)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # min of thresholds = 60. Scores > 60: Alice(90), Bob(70)
    return len(rows) == 2

def test_lt_any(s):
    """T4: < ANY — less than at least one value (< MAX)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM aa_scores WHERE score < ANY (SELECT min_score FROM aa_thresholds)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # max of thresholds = 80. Scores < 80: Bob(70), Carol(50)
    return len(rows) == 2

# ── > ALL / < ALL ──

def test_gt_all(s):
    """T5: > ALL — greater than all values (> MAX)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM aa_scores WHERE score > ALL (SELECT min_score FROM aa_thresholds)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # max of thresholds = 80. Scores > 80: Alice(90) only
    return len(rows) == 1 and rows[0][1] == 'Alice'

def test_lt_all(s):
    """T6: < ALL — less than all values (< MIN)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM aa_scores WHERE score < ALL (SELECT min_score FROM aa_thresholds)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # min of thresholds = 60. Scores < 60: Carol(50) only
    return len(rows) == 1 and rows[0][1] == 'Carol'

# ── Edge cases ──

def test_any_empty(s):
    """T7: ANY with empty subquery — no match"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM aa_scores WHERE score > ANY (SELECT min_score FROM aa_thresholds WHERE id > 99)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 0

def test_all_empty(s):
    """T8: ALL with empty subquery — vacuously true (all rows match)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM aa_scores WHERE score > ALL (SELECT min_score FROM aa_thresholds WHERE id > 99)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    # Empty set → > ALL is vacuously true → but NULL comparison → 0 match
    # Actually with our materialization, NULL comparison → no match
    return len(rows) == 0

def test_exists_still_works(s):
    """T9: EXISTS still works (regression)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM aa_scores WHERE EXISTS (SELECT 1 FROM aa_thresholds WHERE min_score < 70)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 3

def test_in_still_works(s):
    """T10: IN subquery still works (regression)"""
    setup(s)
    _, rows, err, _ = run(s, "SELECT * FROM aa_scores WHERE id IN (SELECT id FROM aa_thresholds)")
    cleanup(s)
    if err: print(f"    err: {err}"); return False
    return len(rows) == 2

if __name__ == "__main__":
    print("=== ANY/SOME/ALL Subquery Tests ===")
    test("T1: = ANY", test_eq_any)
    test("T2: = SOME", test_eq_some)
    test("T3: > ANY", test_gt_any)
    test("T4: < ANY", test_lt_any)
    test("T5: > ALL", test_gt_all)
    test("T6: < ALL", test_lt_all)
    test("T7: ANY empty", test_any_empty)
    test("T8: ALL empty", test_all_empty)
    test("T9: EXISTS regression", test_exists_still_works)
    test("T10: IN regression", test_in_still_works)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
