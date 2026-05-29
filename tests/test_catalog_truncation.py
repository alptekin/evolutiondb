"""
tests/test_catalog_truncation.py — silent catalog-list truncation fix.

The catalog list helpers used to silently cap results (256 tables/schema,
32 index-stats/table, 64 constraints, ...), so once a schema held more
objects than the cap, pg_catalog / information_schema / pg_stat views and
DROP cascades dropped the excess. The cat_list_*_all variants list every
entry. This test creates more objects than the old caps and verifies the
catalog surfaces them all (counted by row count — EvoSQL's emulated views
don't apply column predicates, so we assert on totals).

Run against a FRESH server (each sub-test cleans up so counts are isolated).
"""
from __future__ import annotations

import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tests"))
from pg_helpers import conn, simple_query


def run(s, sql, ok=True):
    cols, rows, err, tag = simple_query(s, sql)
    if ok and err:
        raise RuntimeError(f"SQL error for {sql[:90]!r}: {err}")
    return rows or []


def nrows(s, sql):
    return len(run(s, sql))


def t_tables_beyond_256(s):
    """>256 tables in one schema must all appear in the catalog views
    (old silent cap: 256)."""
    N = 270
    base = nrows(s, "SELECT * FROM pg_stat_user_tables")
    for i in range(N):
        run(s, f"CREATE TABLE trunc_t{i} (id INT PRIMARY KEY, v INT)")
    got = nrows(s, "SELECT * FROM pg_stat_user_tables")
    info = nrows(s, "SELECT * FROM information_schema.tables")
    assert got >= base + N, f"pg_stat_user_tables truncated: {got} (need >= {base+N})"
    assert info >= N, f"information_schema.tables truncated: {info} (need >= {N})"
    for i in range(N):
        run(s, f"DROP TABLE IF EXISTS trunc_t{i}", ok=False)
    print(f"  ok  tables_beyond_256 (pg_stat {got} rows for +{N} tables; "
          f"info_schema {info})")


def t_indexes_beyond_32(s):
    """>32 indexes on one table must all appear in pg_stat_user_indexes
    (old silent cap: 32 index-stats/table)."""
    M = 40
    run(s, "DROP TABLE IF EXISTS trunc_idx", ok=False)
    base = nrows(s, "SELECT * FROM pg_stat_user_indexes")
    cols = ", ".join(f"c{j} INT" for j in range(M))
    run(s, f"CREATE TABLE trunc_idx (id INT PRIMARY KEY, {cols})")
    for j in range(M):
        run(s, f"CREATE INDEX trunc_ix_{j} ON trunc_idx (c{j})")
    run(s, "ANALYZE TABLE trunc_idx")   # index stats only exist after ANALYZE
    got = nrows(s, "SELECT * FROM pg_stat_user_indexes")
    assert got >= base + M, \
        f"pg_stat_user_indexes truncated: {got} (need >= {base+M} for +{M} indexes)"
    run(s, "DROP TABLE IF EXISTS trunc_idx", ok=False)
    print(f"  ok  indexes_beyond_32 (pg_stat_user_indexes +{got-base} for +{M})")


def t_drop_after_truncation(s):
    """Create >64 tables then DROP each; none must remain (exercises DROP
    paths that previously truncated table lists)."""
    N = 80
    base = nrows(s, "SELECT * FROM pg_stat_user_tables")
    for i in range(N):
        run(s, f"CREATE TABLE trunc_d{i} (id INT PRIMARY KEY)")
    assert nrows(s, "SELECT * FROM pg_stat_user_tables") >= base + N
    for i in range(N):
        run(s, f"DROP TABLE trunc_d{i}")
    after = nrows(s, "SELECT * FROM pg_stat_user_tables")
    assert after <= base, f"orphan tables after DROP: {after} (baseline {base})"
    print(f"  ok  drop_after_truncation ({N} created+dropped, back to {after})")


def main():
    s = conn()
    for fn in (t_tables_beyond_256, t_indexes_beyond_32, t_drop_after_truncation):
        fn(s)
    print("OK — catalog truncation fix verified")
    s.close()


if __name__ == "__main__":
    main()
