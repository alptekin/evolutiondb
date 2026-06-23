"""
test_window.py — Tests for Window Functions (Task 72)
ROW_NUMBER(), RANK(), DENSE_RANK() + SUM/COUNT/AVG/MIN/MAX OVER
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
    run(s, "DROP TABLE IF EXISTS wt")
    run(s, "CREATE TABLE wt (id INT PRIMARY KEY, name VARCHAR(50), dept VARCHAR(20), salary INT, score INT)")
    run(s, "INSERT INTO wt VALUES (1, 'Alice', 'ENG', 100, 90)")
    run(s, "INSERT INTO wt VALUES (2, 'Bob', 'ENG', 80, 80)")
    run(s, "INSERT INTO wt VALUES (3, 'Charlie', 'HR', 90, 90)")
    run(s, "INSERT INTO wt VALUES (4, 'Diana', 'HR', 70, 60)")
    run(s, "INSERT INTO wt VALUES (5, 'Eve', 'ENG', 100, 95)")

def teardown(s):
    run(s, "DROP TABLE IF EXISTS wt")

# --- T1: ROW_NUMBER basic ---
def test_row_number_basic(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, ROW_NUMBER() OVER (ORDER BY id) AS rn FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # Should be sequential 1..5 ordered by id
    return (len(rows) == 5 and
            rows[0][1] == '1' and rows[1][1] == '2' and
            rows[2][1] == '3' and rows[3][1] == '4' and rows[4][1] == '5')

# --- T2: ROW_NUMBER partitioned ---
def test_row_number_partitioned(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, dept, ROW_NUMBER() OVER (PARTITION BY dept ORDER BY salary DESC) AS rn FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # ENG: Alice(100)=1, Eve(100)=2, Bob(80)=3; HR: Charlie(90)=1, Diana(70)=2
    rn_map = {r[0]: r[2] for r in rows}
    return (len(rows) == 5 and
            rn_map.get('Bob') == '3' and
            rn_map.get('Diana') == '2' and
            rn_map.get('Charlie') == '1')

# --- T3: RANK with gaps ---
def test_rank_gaps(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, score, RANK() OVER (ORDER BY score DESC) AS rnk FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # Scores: Eve=95(1), Alice=90(2), Charlie=90(2), Bob=80(4), Diana=60(5)
    rnk_map = {r[0]: r[2] for r in rows}
    return (rnk_map.get('Eve') == '1' and
            rnk_map.get('Alice') == '2' and
            rnk_map.get('Charlie') == '2' and
            rnk_map.get('Bob') == '4' and
            rnk_map.get('Diana') == '5')

# --- T4: DENSE_RANK no gaps ---
def test_dense_rank_no_gaps(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, score, DENSE_RANK() OVER (ORDER BY score DESC) AS drnk FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # Eve=95(1), Alice=90(2), Charlie=90(2), Bob=80(3), Diana=60(4)
    drnk_map = {r[0]: r[2] for r in rows}
    return (drnk_map.get('Eve') == '1' and
            drnk_map.get('Alice') == '2' and
            drnk_map.get('Charlie') == '2' and
            drnk_map.get('Bob') == '3' and
            drnk_map.get('Diana') == '4')

# --- T5: RANK partitioned ---
def test_rank_partitioned(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, dept, salary, RANK() OVER (PARTITION BY dept ORDER BY salary DESC) AS rnk FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # ENG: Alice(100)=1, Eve(100)=1, Bob(80)=3; HR: Charlie(90)=1, Diana(70)=2
    rnk_map = {r[0]: r[3] for r in rows}
    return (rnk_map.get('Alice') == '1' and
            rnk_map.get('Eve') == '1' and
            rnk_map.get('Bob') == '3' and
            rnk_map.get('Charlie') == '1' and
            rnk_map.get('Diana') == '2')

# --- T6: SUM OVER partition ---
def test_sum_over_partition(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, dept, salary, SUM(salary) OVER (PARTITION BY dept) AS dept_total FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # ENG total: 100+80+100=280; HR total: 90+70=160
    total_map = {r[0]: r[3] for r in rows}
    return (total_map.get('Alice') == '280' and
            total_map.get('Bob') == '280' and
            total_map.get('Charlie') == '160')

# --- T7: COUNT(*) OVER partition ---
def test_count_over_partition(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, dept, COUNT(*) OVER (PARTITION BY dept) AS cnt FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    cnt_map = {r[0]: r[2] for r in rows}
    return (cnt_map.get('Alice') == '3' and cnt_map.get('Charlie') == '2')

# --- T8: AVG OVER entire set ---
def test_avg_over_all(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, AVG(score) OVER () AS avg_all FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # Avg: (90+80+90+60+95)/5 = 83
    return len(rows) == 5 and rows[0][1] == '83'

# --- T9: Empty OVER() ---
def test_empty_over(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, ROW_NUMBER() OVER () AS rn FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # ROW_NUMBER over whole set (no order = insertion order)
    rns = sorted([r[1] for r in rows])
    return len(rows) == 5 and rns == ['1', '2', '3', '4', '5']

# --- T10: Multiple window functions ---
def test_multiple_window_funcs(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, ROW_NUMBER() OVER (ORDER BY id) AS rn, RANK() OVER (ORDER BY score DESC) AS rnk FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # Alice: rn=1, rnk=2; Eve: rn=5, rnk=1
    val_map = {r[0]: (r[1], r[2]) for r in rows}
    return (val_map.get('Alice') == ('1', '2') and
            val_map.get('Eve') == ('5', '1'))

# --- T11: NULL in partition col ---
def test_null_partition(s):
    run(s, "DROP TABLE IF EXISTS wt2")
    run(s, "CREATE TABLE wt2 (id INT PRIMARY KEY, grp VARCHAR(20), val INT)")
    run(s, "INSERT INTO wt2 VALUES (1, 'A', 10)")
    run(s, "INSERT INTO wt2 VALUES (2, NULL, 20)")
    run(s, "INSERT INTO wt2 VALUES (3, 'A', 30)")
    run(s, "INSERT INTO wt2 VALUES (4, NULL, 40)")
    _, rows, err, _ = run(s, "SELECT id, grp, SUM(val) OVER (PARTITION BY grp) AS total FROM wt2")
    run(s, "DROP TABLE IF EXISTS wt2")
    if err: print(f"    err: {err}"); return False
    # NULL partition: sum=60; A partition: sum=40
    total_map = {r[0]: r[2] for r in rows}
    return (total_map.get('1') == '40' and total_map.get('2') == '60' and
            total_map.get('3') == '40' and total_map.get('4') == '60')

# --- T12: Single row ---
def test_single_row(s):
    run(s, "DROP TABLE IF EXISTS wt3")
    run(s, "CREATE TABLE wt3 (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO wt3 VALUES (1, 42)")
    _, rows, err, _ = run(s, "SELECT val, ROW_NUMBER() OVER (ORDER BY id) AS rn, RANK() OVER (ORDER BY val) AS rnk, DENSE_RANK() OVER (ORDER BY val) AS drnk FROM wt3")
    run(s, "DROP TABLE IF EXISTS wt3")
    if err: print(f"    err: {err}"); return False
    return len(rows) == 1 and rows[0][1] == '1' and rows[0][2] == '1' and rows[0][3] == '1'

# --- T13: All same ORDER BY value ---
def test_all_same_value(s):
    run(s, "DROP TABLE IF EXISTS wt4")
    run(s, "CREATE TABLE wt4 (id INT PRIMARY KEY, val INT)")
    run(s, "INSERT INTO wt4 VALUES (1, 10)")
    run(s, "INSERT INTO wt4 VALUES (2, 10)")
    run(s, "INSERT INTO wt4 VALUES (3, 10)")
    _, rows, err, _ = run(s, "SELECT id, RANK() OVER (ORDER BY val) AS rnk, DENSE_RANK() OVER (ORDER BY val) AS drnk, ROW_NUMBER() OVER (ORDER BY val) AS rn FROM wt4")
    run(s, "DROP TABLE IF EXISTS wt4")
    if err: print(f"    err: {err}"); return False
    # All same: RANK=1 for all, DENSE_RANK=1 for all, ROW_NUMBER increments
    ranks = sorted([r[1] for r in rows])
    dranks = sorted([r[2] for r in rows])
    rns = sorted([r[3] for r in rows])
    return ranks == ['1', '1', '1'] and dranks == ['1', '1', '1'] and rns == ['1', '2', '3']

# --- T14: MIN OVER partition ---
def test_min_over_partition(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, dept, MIN(salary) OVER (PARTITION BY dept) AS min_sal FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    val_map = {r[0]: r[2] for r in rows}
    return val_map.get('Alice') == '80' and val_map.get('Charlie') == '70'

# --- T15: MAX OVER partition ---
def test_max_over_partition(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, dept, MAX(salary) OVER (PARTITION BY dept) AS max_sal FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    val_map = {r[0]: r[2] for r in rows}
    return val_map.get('Alice') == '100' and val_map.get('Diana') == '90'

# --- T16: Window + WHERE ---
def test_window_with_where(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, score, ROW_NUMBER() OVER (ORDER BY score DESC) AS rn FROM wt WHERE score > 70")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # After WHERE: Eve=95, Alice=90, Charlie=90, Bob=80 (Diana excluded)
    return len(rows) == 4

# --- T17: Missing OVER parens → syntax error ---
def test_error_missing_over_parens(s):
    setup(s)
    _, _, err, _ = run(s, "SELECT ROW_NUMBER() OVER ORDER BY id FROM wt")
    teardown(s)
    return err is not None

# --- T18: ROW_NUMBER without OVER → error ---
def test_error_no_over(s):
    setup(s)
    _, _, err, _ = run(s, "SELECT ROW_NUMBER() FROM wt")
    teardown(s)
    return err is not None

# --- T19: Multi-column PARTITION BY ---
def test_multi_col_partition(s):
    run(s, "DROP TABLE IF EXISTS wt5")
    run(s, "CREATE TABLE wt5 (id INT PRIMARY KEY, dept VARCHAR(10), region VARCHAR(10), val INT)")
    run(s, "INSERT INTO wt5 VALUES (1, 'ENG', 'US', 10)")
    run(s, "INSERT INTO wt5 VALUES (2, 'ENG', 'US', 20)")
    run(s, "INSERT INTO wt5 VALUES (3, 'ENG', 'EU', 30)")
    run(s, "INSERT INTO wt5 VALUES (4, 'HR', 'US', 40)")
    _, rows, err, _ = run(s, "SELECT id, dept, region, SUM(val) OVER (PARTITION BY dept, region) AS total FROM wt5")
    run(s, "DROP TABLE IF EXISTS wt5")
    if err: print(f"    err: {err}"); return False
    total_map = {r[0]: r[3] for r in rows}
    return total_map.get('1') == '30' and total_map.get('3') == '30' and total_map.get('4') == '40'

# --- T20: Multi-column ORDER BY ---
def test_multi_col_order(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, salary, score, ROW_NUMBER() OVER (ORDER BY salary DESC, score DESC) AS rn FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    rn_map = {r[0]: r[3] for r in rows}
    # salary DESC: Alice=100,Eve=100, Charlie=90, Bob=80, Diana=70
    # tie-break score DESC: Eve(95) before Alice(90)
    return rn_map.get('Eve') == '1' and rn_map.get('Alice') == '2'

# --- T21: Multi-column partition + order ---
def test_multi_col_combined(s):
    run(s, "DROP TABLE IF EXISTS wt5")
    run(s, "CREATE TABLE wt5 (id INT PRIMARY KEY, dept VARCHAR(10), region VARCHAR(10), val INT)")
    run(s, "INSERT INTO wt5 VALUES (1, 'ENG', 'US', 10)")
    run(s, "INSERT INTO wt5 VALUES (2, 'ENG', 'US', 20)")
    run(s, "INSERT INTO wt5 VALUES (3, 'ENG', 'EU', 30)")
    _, rows, err, _ = run(s, "SELECT id, RANK() OVER (PARTITION BY dept, region ORDER BY val DESC) AS rnk FROM wt5")
    run(s, "DROP TABLE IF EXISTS wt5")
    if err: print(f"    err: {err}"); return False
    rnk_map = {r[0]: r[1] for r in rows}
    return rnk_map.get('2') == '1' and rnk_map.get('1') == '2' and rnk_map.get('3') == '1'

# --- T22: LEAD basic ---
def test_lead_basic(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, salary, LEAD(salary) OVER (ORDER BY id) AS next_sal FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    val_map = {r[0]: r[2] for r in rows}
    # id order: Alice(100), Bob(80), Charlie(90), Diana(70), Eve(100)
    return val_map.get('Alice') == '80' and val_map.get('Bob') == '90' and val_map.get('Eve') is None

# --- T23: LAG basic ---
def test_lag_basic(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, salary, LAG(salary) OVER (ORDER BY id) AS prev_sal FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    val_map = {r[0]: r[2] for r in rows}
    return val_map.get('Alice') is None and val_map.get('Bob') == '100'

# --- T24: LEAD with offset and default ---
def test_lead_offset_default(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, salary, LEAD(salary, 2, 0) OVER (ORDER BY id) AS lead2 FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    val_map = {r[0]: r[2] for r in rows}
    # Alice→Charlie(90), Bob→Diana(70), Charlie→Eve(100), Diana→0, Eve→0
    return val_map.get('Alice') == '90' and val_map.get('Diana') == '0' and val_map.get('Eve') == '0'

# --- T25: LAG partitioned ---
def test_lag_partitioned(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, dept, salary, LAG(salary) OVER (PARTITION BY dept ORDER BY id) AS prev FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    val_map = {r[0]: r[3] for r in rows}
    # ENG partition (Alice,Bob,Eve): Alice=NULL, Bob=100, Eve=80
    # HR partition (Charlie,Diana): Charlie=NULL, Diana=90
    return val_map.get('Alice') is None and val_map.get('Bob') == '100' and val_map.get('Charlie') is None

# --- T26: NTILE ---
def test_ntile(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, score, NTILE(3) OVER (ORDER BY score DESC) AS bucket FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # 5 rows / 3 buckets: 2+2+1 distribution
    buckets = sorted([r[2] for r in rows])
    return '1' in buckets and '2' in buckets and '3' in buckets

# --- T27: PERCENT_RANK ---
def test_percent_rank(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, score, PERCENT_RANK() OVER (ORDER BY score DESC) AS pr FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    pr_map = {r[0]: float(r[2]) for r in rows}
    # Eve=95(rank1)→0.0, Alice=90(rank2)→0.25, Charlie=90(rank2)→0.25, Bob=80(rank4)→0.75, Diana=60(rank5)→1.0
    return abs(pr_map.get('Eve', -1) - 0.0) < 0.01 and abs(pr_map.get('Diana', -1) - 1.0) < 0.01

# --- T28: CUME_DIST ---
def test_cume_dist(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, score, CUME_DIST() OVER (ORDER BY score DESC) AS cd FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    cd_map = {r[0]: float(r[2]) for r in rows}
    # Eve=95: 1/5=0.2, Alice=Charlie=90: 3/5=0.6, Bob=80: 4/5=0.8, Diana=60: 5/5=1.0
    return abs(cd_map.get('Eve', -1) - 0.2) < 0.01 and abs(cd_map.get('Diana', -1) - 1.0) < 0.01

# --- T29: NTILE partitioned ---
def test_ntile_partitioned(s):
    setup(s)
    _, rows, err, _ = run(s, "SELECT name, dept, NTILE(2) OVER (PARTITION BY dept ORDER BY salary) AS bucket FROM wt")
    teardown(s)
    if err: print(f"    err: {err}"); return False
    # ENG: 3 rows → bucket 1,1,2; HR: 2 rows → bucket 1,2
    val_map = {r[0]: r[2] for r in rows}
    return val_map.get('Diana') == '1' and val_map.get('Charlie') == '2'

if __name__ == "__main__":
    print("=== Window Functions Tests ===")
    test("T1: ROW_NUMBER basic", test_row_number_basic)
    test("T2: ROW_NUMBER partitioned", test_row_number_partitioned)
    test("T3: RANK with gaps", test_rank_gaps)
    test("T4: DENSE_RANK no gaps", test_dense_rank_no_gaps)
    test("T5: RANK partitioned", test_rank_partitioned)
    test("T6: SUM OVER partition", test_sum_over_partition)
    test("T7: COUNT(*) OVER partition", test_count_over_partition)
    test("T8: AVG OVER entire set", test_avg_over_all)
    test("T9: Empty OVER()", test_empty_over)
    test("T10: Multiple window funcs", test_multiple_window_funcs)
    test("T11: NULL in partition col", test_null_partition)
    test("T12: Single row", test_single_row)
    test("T13: All same ORDER BY value", test_all_same_value)
    test("T14: MIN OVER partition", test_min_over_partition)
    test("T15: MAX OVER partition", test_max_over_partition)
    test("T16: Window + WHERE", test_window_with_where)
    test("T17: Missing OVER parens", test_error_missing_over_parens)
    test("T18: ROW_NUMBER without OVER", test_error_no_over)
    print("--- Gap Fix Tests ---")
    test("T19: Multi-column PARTITION BY", test_multi_col_partition)
    test("T20: Multi-column ORDER BY", test_multi_col_order)
    test("T21: Multi-column partition + order", test_multi_col_combined)
    test("T22: LEAD basic", test_lead_basic)
    test("T23: LAG basic", test_lag_basic)
    test("T24: LEAD offset + default", test_lead_offset_default)
    test("T25: LAG partitioned", test_lag_partitioned)
    test("T26: NTILE", test_ntile)
    test("T27: PERCENT_RANK", test_percent_rank)
    test("T28: CUME_DIST", test_cume_dist)
    test("T29: NTILE partitioned", test_ntile_partitioned)
    print(f"\nResults: {PASS} passed, {FAIL} failed out of {PASS + FAIL}")
    sys.exit(0 if FAIL == 0 else 1)
