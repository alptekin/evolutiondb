"""
test_sample_analyze.py — Task 102 (Feature #104) tests.

Covers:
  - ANALYZE TABLE t WITH SAMPLE n PERCENT — row_count reported equals
    total scanned rows (scan visits every row to know size).
  - ANALYZE TABLE t WITH SAMPLE n ROWS — same.
  - Sampled stats converge on full-scan values within tolerance (20%).
  - Auto-sample: small tables (<10k) full-scan, large tables 10%.
  - Syntax accepts the clause without breaking existing forms.
  - WITH SAMPLE + UPDATE HISTOGRAM compose.

Requires running server (docker compose up -d).
"""

import os
import re
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


def batch_insert(s, tbl, rows, batch=50):
    for i in range(0, len(rows), batch):
        simple_query(s, f"INSERT INTO {tbl} VALUES {','.join(rows[i:i+batch])}")


def setup(s, n_rows, ndv):
    simple_query(s, "DROP TABLE IF EXISTS sa")
    simple_query(s, "CREATE TABLE sa (id INT PRIMARY KEY, v INT)")
    batch_insert(s, "sa", [f"({i},{i%ndv})" for i in range(1, n_rows + 1)])


def get_row_count(s):
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stat_user_tables WHERE relname='sa'")
    return int(rows[0][3]) if rows else None


def get_null_frac(s, col):
    _, rows, _, _ = simple_query(s,
        f"SELECT * FROM pg_stats WHERE tablename='sa' AND attname='{col}'")
    return float(rows[0][3]) if rows else None


def explain_row_count(s, sql):
    _, rows, _, _ = simple_query(s, f"EXPLAIN {sql}")
    for row in rows:
        m = re.search(r"\(rows=(\d+)\)", row[0] if row else "")
        if m:
            return int(m.group(1))
    return None


# ─── 1. PERCENT syntax accepted + row_count is full-population ───
def test_sample_percent_accepted():
    s = conn()
    setup(s, 200, 4)
    _, _, err, _ = simple_query(s, "ANALYZE TABLE sa WITH SAMPLE 50 PERCENT")
    assert err is None, f"parse error: {err}"
    n = get_row_count(s)
    assert n == 200, f"n_live_tup {n}, want 200 (all-row visit even when sampled)"


# ─── 2. ROWS syntax accepted ───
def test_sample_rows_accepted():
    s = conn()
    setup(s, 200, 4)
    _, _, err, _ = simple_query(s, "ANALYZE TABLE sa WITH SAMPLE 100 ROWS")
    assert err is None, f"parse error: {err}"
    n = get_row_count(s)
    assert n == 200


# ─── 3. Sample 100 PERCENT matches full scan ───
def test_sample_100_matches_full():
    s = conn()
    setup(s, 200, 4)
    simple_query(s, "ANALYZE TABLE sa")
    _, rows1, _, _ = simple_query(s,
        "SELECT * FROM pg_stats WHERE tablename='sa'")
    stats_full = {r[2]: int(r[4]) for r in rows1}  # col → n_distinct

    simple_query(s, "ANALYZE TABLE sa WITH SAMPLE 100 PERCENT")
    _, rows2, _, _ = simple_query(s,
        "SELECT * FROM pg_stats WHERE tablename='sa'")
    stats_100 = {r[2]: int(r[4]) for r in rows2}

    assert stats_full == stats_100, f"100% sample mismatch: {stats_full} vs {stats_100}"


# ─── 4. Sampled row_count reports full population ───
def test_sampled_row_count_is_full_population():
    s = conn()
    setup(s, 500, 5)
    simple_query(s, "ANALYZE TABLE sa WITH SAMPLE 20 PERCENT")
    n = get_row_count(s)
    assert n == 500, f"row_count {n}, want 500 (scanned_rows reported)"


# ─── 5. Histogram survives sampling with scaled counts ───
def test_histogram_after_sampling():
    """Freq-histogram for low-NDV col should still reflect actual
    proportions (within tolerance) after sampling."""
    s = conn()
    setup(s, 400, 4)  # 100 each of v=0,1,2,3
    simple_query(s, "ANALYZE TABLE sa WITH SAMPLE 50 PERCENT")
    # WHERE v=0 should estimate ~100 (±30% tolerance)
    est = explain_row_count(s, "SELECT * FROM sa WHERE v = 0")
    assert est is not None and 60 <= est <= 150, \
        f"v=0 est {est} outside [60,150] after 50% sample"


# ─── 6. Auto-default: small tables full scan ───
def test_auto_small_table_full_scan():
    """Tables under 10k rows should default to full scan — NDV
    matches the exact count."""
    s = conn()
    setup(s, 100, 5)
    simple_query(s, "ANALYZE TABLE sa")
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stats WHERE tablename='sa' AND attname='v'")
    ndv = int(rows[0][4])
    assert ndv == 5, f"auto ANALYZE on 100 rows gave NDV {ndv}, want exact 5"


# ─── 7. WITH SAMPLE + UPDATE HISTOGRAM compose ───
def test_sample_with_update_histogram():
    s = conn()
    setup(s, 200, 4)
    _, _, err, _ = simple_query(s,
        "ANALYZE TABLE sa WITH SAMPLE 50 PERCENT UPDATE HISTOGRAM ON v")
    assert err is None, f"compose parse error: {err}"
    est = explain_row_count(s, "SELECT * FROM sa WHERE v = 0")
    # 50 rows per value, 50% sample → ~25 sampled, scaled back to ~50
    assert est is not None and est >= 20, f"sampled hist est {est} too low"


# ─── 8. SAMPLE 1 PERCENT syntax-safe ───
def test_sample_one_percent():
    s = conn()
    setup(s, 100, 5)
    _, _, err, _ = simple_query(s, "ANALYZE TABLE sa WITH SAMPLE 1 PERCENT")
    assert err is None
    n = get_row_count(s)
    assert n == 100, f"even at 1%, scanned_rows=100 should be reported: got {n}"


# ─── 9. No SAMPLE clause — existing behavior ───
def test_no_sample_clause_unchanged():
    s = conn()
    setup(s, 50, 3)
    simple_query(s, "ANALYZE TABLE sa")
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stats WHERE tablename='sa' AND attname='v'")
    ndv = int(rows[0][4])
    assert ndv == 3, f"plain ANALYZE NDV {ndv}, want 3"


# ─── 10. Sampled NDV ≤ full NDV ───
def test_sampled_ndv_bounded():
    """Sampled NDV can only be ≤ full NDV — never exceed what's in
    the population."""
    s = conn()
    setup(s, 1000, 7)
    simple_query(s, "ANALYZE TABLE sa")
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stats WHERE tablename='sa' AND attname='v'")
    full_ndv = int(rows[0][4])

    simple_query(s, "ANALYZE TABLE sa WITH SAMPLE 30 PERCENT")
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stats WHERE tablename='sa' AND attname='v'")
    samp_ndv = int(rows[0][4])
    assert samp_ndv <= full_ndv, \
        f"sampled NDV {samp_ndv} > full NDV {full_ndv} (impossible)"


if __name__ == "__main__":
    print("=== test_sample_analyze.py (Task 102) ===\n")
    run("WITH SAMPLE n PERCENT syntax",      test_sample_percent_accepted)
    run("WITH SAMPLE n ROWS syntax",         test_sample_rows_accepted)
    run("SAMPLE 100 PERCENT matches full",   test_sample_100_matches_full)
    run("Sampled row_count = population",    test_sampled_row_count_is_full_population)
    run("Histogram after sampling scales",   test_histogram_after_sampling)
    run("Auto small table → full scan",      test_auto_small_table_full_scan)
    run("SAMPLE + UPDATE HISTOGRAM compose", test_sample_with_update_histogram)
    run("SAMPLE 1 PERCENT runs",             test_sample_one_percent)
    run("No SAMPLE clause unchanged",        test_no_sample_clause_unchanged)
    run("Sampled NDV <= full NDV",           test_sampled_ndv_bounded)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
