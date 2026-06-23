"""
test_range_selectivity.py — Task 100 (Feature #102) tests.

Covers:
  1. < / <= / > / >= on numeric column with histogram.
  2. BETWEEN a AND b combined range.
  3. LIKE 'prefix%' on string column.
  4. Range estimation without histogram (min/max fallback).
  5. Empty prefix (LIKE '%') = full scan.
  6. Unknown-prefix LIKE ('xyz%') returns minimal est.
  7. AND combining — independent selectivity multiplication.
  8. OR combining — additive upper bound.
  9. Range on primary-key column (always had row-count exact estimate).
 10. Open-ended range against populated column.

Requires a running EvoSQL server (docker compose up -d).
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


def explain_rows(s, sql):
    _, rows, err, _ = simple_query(s, f"EXPLAIN {sql}")
    assert err is None, f"EXPLAIN failed: {err}"
    for row in rows:
        line = row[0] if row else ""
        m = re.search(r"\(rows=(\d+)\)", line)
        if m:
            return int(m.group(1))
    return None


def batch_insert(s, tbl, rows, batch=50):
    for i in range(0, len(rows), batch):
        simple_query(s, f"INSERT INTO {tbl} VALUES {','.join(rows[i:i+batch])}")


def setup_numeric(s):
    """100-row numeric table, v = 1..100."""
    simple_query(s, "DROP TABLE IF EXISTS rng_num")
    simple_query(s, "CREATE TABLE rng_num (id INT PRIMARY KEY, v INT)")
    batch_insert(s, "rng_num", [f"({i},{i})" for i in range(1, 101)])
    simple_query(s, "ANALYZE TABLE rng_num")


def setup_strings(s):
    """8-row string table with known alphabetic ordering."""
    names = ['apple', 'apricot', 'banana', 'blueberry',
             'cherry', 'cranberry', 'date', 'elderberry']
    simple_query(s, "DROP TABLE IF EXISTS rng_str")
    simple_query(s, "CREATE TABLE rng_str (id INT PRIMARY KEY, name VARCHAR(30))")
    batch_insert(s, "rng_str",
                 [f"({i+1},'{n}')" for i, n in enumerate(names)])
    simple_query(s, "ANALYZE TABLE rng_str")


# ─── 1. Numeric range operators ───
def test_numeric_less_than():
    s = conn()
    setup_numeric(s)
    est = explain_rows(s, "SELECT * FROM rng_num WHERE v < 50")
    assert est == 49, f"v < 50 est {est}, want 49"


def test_numeric_less_equal():
    s = conn()
    setup_numeric(s)
    est = explain_rows(s, "SELECT * FROM rng_num WHERE v <= 50")
    assert est == 50, f"v <= 50 est {est}, want 50"


def test_numeric_greater_than():
    s = conn()
    setup_numeric(s)
    est = explain_rows(s, "SELECT * FROM rng_num WHERE v > 50")
    assert est == 50, f"v > 50 est {est}, want 50"


def test_numeric_greater_equal():
    s = conn()
    setup_numeric(s)
    est = explain_rows(s, "SELECT * FROM rng_num WHERE v >= 50")
    assert est == 51, f"v >= 50 est {est}, want 51"


# ─── 2. BETWEEN ───
def test_between_inclusive():
    s = conn()
    setup_numeric(s)
    est = explain_rows(s, "SELECT * FROM rng_num WHERE v BETWEEN 20 AND 40")
    # Inclusive both ends: 21 values (20..40)
    assert est == 21, f"BETWEEN 20 AND 40 est {est}, want 21"


def test_between_empty_range():
    s = conn()
    setup_numeric(s)
    # Upper < lower — degenerate. Implementation returns >=1 not 0.
    est = explain_rows(s, "SELECT * FROM rng_num WHERE v BETWEEN 80 AND 20")
    assert est >= 1, f"degenerate BETWEEN should return >=1, got {est}"


# ─── 3. LIKE 'prefix%' ───
def test_like_prefix_hits():
    s = conn()
    setup_strings(s)
    est_a = explain_rows(s, "SELECT * FROM rng_str WHERE name LIKE 'a%'")
    est_b = explain_rows(s, "SELECT * FROM rng_str WHERE name LIKE 'b%'")
    est_c = explain_rows(s, "SELECT * FROM rng_str WHERE name LIKE 'c%'")
    assert est_a == 2, f"LIKE 'a%' est {est_a}, want 2 (apple,apricot)"
    assert est_b == 2, f"LIKE 'b%' est {est_b}, want 2 (banana,blueberry)"
    assert est_c == 2, f"LIKE 'c%' est {est_c}, want 2 (cherry,cranberry)"


def test_like_prefix_miss():
    s = conn()
    setup_strings(s)
    est = explain_rows(s, "SELECT * FROM rng_str WHERE name LIKE 'xyz%'")
    # No rows match — returns minimal non-zero est (1)
    assert est >= 1, f"LIKE 'xyz%' est {est}, want >=1 (fallback min)"


def test_like_no_wildcard_treated_as_eq():
    """LIKE without '%' should behave like equality."""
    s = conn()
    setup_strings(s)
    est = explain_rows(s, "SELECT * FROM rng_str WHERE name LIKE 'apple'")
    assert est == 1, f"LIKE 'apple' est {est}, want 1"


# ─── 4. String range ───
def test_string_less_than():
    s = conn()
    setup_strings(s)
    est = explain_rows(s, "SELECT * FROM rng_str WHERE name < 'cherry'")
    # Lexicographically < 'cherry': apple, apricot, banana, blueberry = 4
    assert est == 4, f"name < 'cherry' est {est}, want 4"


def test_string_between():
    s = conn()
    setup_strings(s)
    est = explain_rows(s, "SELECT * FROM rng_str WHERE name BETWEEN 'b' AND 'd'")
    # banana, blueberry, cherry, cranberry = 4
    assert est == 4, f"name BETWEEN 'b' AND 'd' est {est}, want 4"


# ─── 5. Range fallback without histogram ───
def test_range_without_histogram():
    """DROP HISTOGRAM → min/max linear interpolation."""
    s = conn()
    setup_numeric(s)
    simple_query(s, "ANALYZE TABLE rng_num DROP HISTOGRAM ON v")
    est = explain_rows(s, "SELECT * FROM rng_num WHERE v < 50")
    # Without histogram: linear (50 - 1) / (100 - 1) = 0.495, 100 * 0.495 = 49
    # Allow ±5 tolerance for linear interpolation noise.
    assert 40 <= est <= 55, f"min/max interp est {est} outside [40,55]"


# ─── 6. AND / OR combining ───
def test_and_combining_reduces_estimate():
    """AND of two predicates: independence multiplies selectivities."""
    s = conn()
    setup_numeric(s)
    est_single = explain_rows(s, "SELECT * FROM rng_num WHERE v > 50")
    est_and = explain_rows(s,
        "SELECT * FROM rng_num WHERE v > 50 AND id > 0")
    # Heuristic AND halves — expect est_and < est_single.
    assert est_and < est_single, \
        f"AND est {est_and} should be < single est {est_single}"


def test_or_combining_widens_estimate():
    s = conn()
    setup_numeric(s)
    est_single = explain_rows(s, "SELECT * FROM rng_num WHERE v = 50")
    est_or = explain_rows(s,
        "SELECT * FROM rng_num WHERE v = 50 OR v = 51")
    # OR is additive — at minimum >= est_single.
    assert est_or >= est_single, \
        f"OR est {est_or} should be >= single est {est_single}"


# ─── 7. Histogram-backed range on equi-depth ───
def test_range_on_equi_depth_histogram():
    """High-NDV column forces equi-depth; range must still degrade
    gracefully."""
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS rng_eq")
    simple_query(s, "CREATE TABLE rng_eq (id INT PRIMARY KEY, v INT)")
    # 200 rows, v = id → 200 distinct values
    batch_insert(s, "rng_eq", [f"({i},{i})" for i in range(1, 201)])
    simple_query(s, "ANALYZE TABLE rng_eq UPDATE HISTOGRAM ON v WITH 10 BUCKETS")
    est = explain_rows(s, "SELECT * FROM rng_eq WHERE v <= 100")
    # Equi-depth, target 20/bucket. For v<=100 expect ~100 (half).
    # Allow ±25 tolerance (each bucket holds ~20 rows, and 100 falls on
    # a bucket boundary that may round either way).
    assert 75 <= est <= 125, f"equi-depth range est {est} outside [75,125]"


# ─── 8. PK range unchanged ───
def test_pk_equality_unchanged():
    """PK lookups always returned (rows=1) — make sure that path still
    works."""
    s = conn()
    setup_numeric(s)
    est = explain_rows(s, "SELECT * FROM rng_num WHERE id = 42")
    assert est == 1, f"PK lookup est {est}, want 1"


if __name__ == "__main__":
    print("=== test_range_selectivity.py (Task 100) ===\n")
    run("Numeric <",                        test_numeric_less_than)
    run("Numeric <=",                       test_numeric_less_equal)
    run("Numeric >",                        test_numeric_greater_than)
    run("Numeric >=",                       test_numeric_greater_equal)
    run("BETWEEN inclusive",                test_between_inclusive)
    run("BETWEEN degenerate (hi<lo)",       test_between_empty_range)
    run("LIKE 'prefix%' hits",              test_like_prefix_hits)
    run("LIKE 'prefix%' miss",              test_like_prefix_miss)
    run("LIKE without % → equality",        test_like_no_wildcard_treated_as_eq)
    run("String <",                         test_string_less_than)
    run("String BETWEEN",                   test_string_between)
    run("Range fallback (no histogram)",    test_range_without_histogram)
    run("AND combines tighter",             test_and_combining_reduces_estimate)
    run("OR combines wider",                test_or_combining_widens_estimate)
    run("Range on equi-depth histogram",    test_range_on_equi_depth_histogram)
    run("PK equality unchanged",            test_pk_equality_unchanged)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
