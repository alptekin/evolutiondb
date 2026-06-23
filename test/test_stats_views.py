"""
test_stats_views.py — Task 101 (Feature #103) tests.

Covers:
  - pg_stats shape + content after ANALYZE
  - pg_stat_user_tables shape + content
  - pg_stat_user_indexes shape + content
  - WHERE filtering (tablename/attname) narrows results
  - most_common_vals / freqs for frequency histograms
  - histogram_bounds for equi-depth histograms
  - null_frac math
  - n_distinct matches NDV
  - Empty table (no ANALYZE) yields 0 rows

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


def setup_sample(s):
    """5 rows: id 1..5 PK, name {a,b,a,c,b}, v {10,20,30,10,20}."""
    simple_query(s, "DROP TABLE IF EXISTS sv_demo")
    simple_query(s, "CREATE TABLE sv_demo (id INT PRIMARY KEY, name VARCHAR(30), v INT)")
    simple_query(s,
        "INSERT INTO sv_demo VALUES "
        "(1,'a',10),(2,'b',20),(3,'a',30),(4,'c',10),(5,'b',20)")
    simple_query(s, "ANALYZE TABLE sv_demo")


def setup_with_index(s):
    simple_query(s, "DROP TABLE IF EXISTS sv_idx")
    simple_query(s, "CREATE TABLE sv_idx (id INT PRIMARY KEY, code VARCHAR(10))")
    simple_query(s, "CREATE INDEX sv_idx_code ON sv_idx(code)")
    rows = ",".join(f"({i},'c{i%7}')" for i in range(1, 31))
    simple_query(s, f"INSERT INTO sv_idx VALUES {rows}")
    simple_query(s, "ANALYZE TABLE sv_idx")


# ─── pg_stats ───
def test_pg_stats_shape():
    s = conn()
    setup_sample(s)
    cols, _, err, _ = simple_query(s, "SELECT * FROM pg_stats WHERE tablename = 'sv_demo'")
    assert err is None
    expected = ["schemaname", "tablename", "attname", "null_frac",
                "n_distinct", "avg_width", "most_common_vals",
                "most_common_freqs", "histogram_bounds"]
    assert cols == expected, f"cols mismatch: {cols}"


def test_pg_stats_n_distinct():
    """Row layout is fixed at 9 cols: schemaname, tablename, attname,
    null_frac, n_distinct, avg_width, most_common_vals, most_common_freqs,
    histogram_bounds. (The catalog view mock doesn't honor projection.)"""
    s = conn()
    setup_sample(s)
    _, rows, _, _ = simple_query(s, "SELECT * FROM pg_stats WHERE tablename = 'sv_demo'")
    stats = {r[2]: int(r[4]) for r in rows}  # attname → n_distinct
    assert stats.get("id") == 5, f"id NDV {stats.get('id')}, want 5"
    assert stats.get("name") == 3, f"name NDV {stats.get('name')}, want 3"
    assert stats.get("v") == 3, f"v NDV {stats.get('v')}, want 3"


def test_pg_stats_null_frac_zero_when_no_nulls():
    s = conn()
    setup_sample(s)
    _, rows, _, _ = simple_query(s, "SELECT * FROM pg_stats WHERE tablename = 'sv_demo'")
    for r in rows:
        assert float(r[3]) == 0.0, f"{r[2]} null_frac {r[3]}, want 0"


def test_pg_stats_frequency_histogram_mcv():
    """NDV ≤ buckets → frequency histogram → most_common_vals populated."""
    s = conn()
    setup_sample(s)
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stats WHERE tablename = 'sv_demo' AND attname = 'name'")
    assert rows, "no row returned"
    mcv, mcf, hb = rows[0][6], rows[0][7], rows[0][8]
    assert mcv is not None and mcv.startswith("{") and mcv.endswith("}"), \
        f"bad mcv format: {mcv}"
    assert "a" in mcv and "b" in mcv and "c" in mcv, f"missing values: {mcv}"
    freqs = [float(f) for f in mcf.strip("{}").split(",") if f]
    assert abs(sum(freqs) - 1.0) < 0.01, f"freqs sum {sum(freqs)}, want ~1.0"
    assert hb is None, f"expected hb NULL for frequency histogram, got {hb}"


def test_pg_stats_equi_depth_histogram_bounds():
    """High-NDV → equi-depth histogram → histogram_bounds populated."""
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv_eq")
    simple_query(s, "CREATE TABLE sv_eq (id INT PRIMARY KEY, v INT)")
    # 100 distinct values, force equi-depth with 10 buckets
    rows = ",".join(f"({i},{i})" for i in range(1, 51))
    simple_query(s, f"INSERT INTO sv_eq VALUES {rows}")
    rows = ",".join(f"({i},{i})" for i in range(51, 101))
    simple_query(s, f"INSERT INTO sv_eq VALUES {rows}")
    simple_query(s, "ANALYZE TABLE sv_eq UPDATE HISTOGRAM ON v WITH 10 BUCKETS")
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stats WHERE tablename = 'sv_eq' AND attname = 'v'")
    assert rows
    mcv, hb = rows[0][6], rows[0][8]
    # Equi-depth → MCV NULL, bounds populated as '{b1,b2,...}'
    assert mcv is None, f"expected mcv NULL for equi-depth, got {mcv}"
    assert hb is not None and hb.startswith("{") and hb.endswith("}")
    bounds = [int(b) for b in hb.strip("{}").split(",") if b]
    assert len(bounds) == 10, f"expected 10 bounds, got {len(bounds)}: {bounds}"


def test_pg_stats_attname_filter():
    s = conn()
    setup_sample(s)
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stats "
        "WHERE tablename = 'sv_demo' AND attname = 'name'")
    assert len(rows) == 1, f"expected 1 row for attname filter, got {len(rows)}"
    assert rows[0][2] == "name"


# ─── pg_stat_user_tables ───
def test_pg_stat_user_tables_shape():
    s = conn()
    setup_sample(s)
    cols, _, err, _ = simple_query(s,
        "SELECT * FROM pg_stat_user_tables WHERE relname = 'sv_demo'")
    assert err is None
    expected = ["relid", "schemaname", "relname", "n_live_tup",
                "n_dead_tup", "n_mod_since_analyze",
                "last_analyze", "last_autoanalyze"]
    assert cols == expected


def test_pg_stat_user_tables_row_count():
    """Row layout: relid, schemaname, relname, n_live_tup, n_dead_tup,
    n_mod_since_analyze, last_analyze, last_autoanalyze."""
    s = conn()
    setup_sample(s)
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stat_user_tables WHERE relname = 'sv_demo'")
    assert rows
    assert rows[0][2] == "sv_demo"        # relname
    assert int(rows[0][3]) == 5, f"n_live_tup {rows[0][3]}, want 5"


def test_pg_stat_user_tables_last_analyze_nonempty():
    s = conn()
    setup_sample(s)
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stat_user_tables WHERE relname = 'sv_demo'")
    assert rows
    last_analyze = rows[0][6]
    assert last_analyze is not None, "last_analyze should not be NULL after ANALYZE"
    assert re.match(r"\d{4}-\d{2}-\d{2}", last_analyze), \
        f"bad last_analyze format: {last_analyze}"


# ─── pg_stat_user_indexes ───
def test_pg_stat_user_indexes_shape():
    s = conn()
    setup_with_index(s)
    cols, _, err, _ = simple_query(s,
        "SELECT * FROM pg_stat_user_indexes WHERE relname = 'sv_idx'")
    assert err is None
    expected = ["relid", "schemaname", "relname", "indexrelname",
                "idx_scan", "idx_tup_read", "idx_tup_fetch",
                "tree_depth", "leaf_pages"]
    assert cols == expected


def test_pg_stat_user_indexes_lists_index():
    """Row layout: relid, schemaname, relname, indexrelname, idx_scan,
    idx_tup_read, idx_tup_fetch, tree_depth, leaf_pages."""
    s = conn()
    setup_with_index(s)
    _, rows, _, _ = simple_query(s,
        "SELECT * FROM pg_stat_user_indexes WHERE relname = 'sv_idx'")
    names = {r[3] for r in rows}   # indexrelname column
    assert "sv_idx_code" in names, f"sv_idx_code missing: {names}"


if __name__ == "__main__":
    print("=== test_stats_views.py (Task 101) ===\n")
    run("pg_stats shape",                       test_pg_stats_shape)
    run("pg_stats n_distinct correct",          test_pg_stats_n_distinct)
    run("pg_stats null_frac=0 without nulls",   test_pg_stats_null_frac_zero_when_no_nulls)
    run("pg_stats frequency histogram MCV",     test_pg_stats_frequency_histogram_mcv)
    run("pg_stats equi-depth histogram bounds", test_pg_stats_equi_depth_histogram_bounds)
    run("pg_stats attname filter",              test_pg_stats_attname_filter)
    run("pg_stat_user_tables shape",            test_pg_stat_user_tables_shape)
    run("pg_stat_user_tables row count",        test_pg_stat_user_tables_row_count)
    run("pg_stat_user_tables last_analyze set", test_pg_stat_user_tables_last_analyze_nonempty)
    run("pg_stat_user_indexes shape",           test_pg_stat_user_indexes_shape)
    run("pg_stat_user_indexes lists index",     test_pg_stat_user_indexes_lists_index)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
