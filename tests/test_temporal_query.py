"""
test_temporal_query.py — Task 207 (Feature #207) tests.

Covers temporal SELECT — querying a table as it was at a specific
historical transaction id.

Grammar variants:
  SELECT ... FROM tbl FOR SYSTEM_TIME AS OF TRANSACTION <xid> WHERE ...
  SELECT ... FROM tbl FOR SYSTEM_TIME AS OF TRANSACTION <xid> WHERE ...

Limitations (v1):
  - XID-based only. AS OF TIMESTAMP form is parser-rejected; covered
    by Task 209 (retention window) follow-up.
  - INSERT / UPDATE / DELETE inside an AS OF query are not supported.

The tests use the evo_current_xid() helper to capture a transaction id
right after a write, then query the same table later with that id and
verify the historical row content.
"""

import os
import sys
import time

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


def cur_xid(s):
    _, rows, err, _ = simple_query(s, "SELECT evo_current_xid()")
    assert err is None, f"current_xid: {err}"
    return int(rows[0][0])


# ─── 1. Grammar parses FOR SYSTEM_TIME AS OF TRANSACTION ───
def test_grammar_full_form():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t1")
    simple_query(s, "CREATE TABLE t1 (id INT PRIMARY KEY, v INT)")
    simple_query(s, "INSERT INTO t1 VALUES (1, 10)")
    xid = cur_xid(s)
    _, _, err, _ = simple_query(s,
        f"SELECT id, v FROM t1 FOR SYSTEM_TIME AS OF TRANSACTION {xid}")
    assert err is None, f"full grammar: {err}"


# ─── 2. Grammar parses short FOR SYSTEM_TIME AS OF TRANSACTION form ───
def test_grammar_case_insensitive():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t2")
    simple_query(s, "CREATE TABLE t2 (id INT PRIMARY KEY, v INT)")
    simple_query(s, "INSERT INTO t2 VALUES (1, 10)")
    xid = cur_xid(s)
    _, _, err, _ = simple_query(s,
        f"select id, v from t2 for system_time as of transaction {xid}")
    assert err is None, f"mixed case: {err}"


# ─── 3. AS OF includes only rows that existed at the snapshot ───
def test_historical_existence():
    """v1 AS OF works at the row-existence level (INSERT / DELETE timing).
    Value-level rewinds for UPDATEd rows are deferred until the engine's
    PK index supports MVCC chain traversal — the PK tree points to the
    current version of each row, so older value versions are orphaned
    in the heap. INSERT / DELETE cases stay correct because they change
    PK-tree membership."""
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t3")
    simple_query(s, "CREATE TABLE t3 (id INT PRIMARY KEY, v INT)")
    simple_query(s, "INSERT INTO t3 VALUES (1, 100)")
    xid = cur_xid(s)
    simple_query(s, "INSERT INTO t3 VALUES (2, 200)")

    _, rows, err, _ = simple_query(s,
        f"SELECT id, v FROM t3 FOR SYSTEM_TIME AS OF TRANSACTION {xid}")
    assert err is None
    ids = sorted(int(r[0]) for r in rows)
    assert ids == [1], f"as-of view should only have id=1: {ids}"


# ─── 4. AS OF excludes rows inserted later ───
def test_excludes_future_rows():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t4")
    simple_query(s, "CREATE TABLE t4 (id INT PRIMARY KEY)")
    simple_query(s, "INSERT INTO t4 VALUES (1)")
    xid = cur_xid(s)
    simple_query(s, "INSERT INTO t4 VALUES (2)")

    _, rows, err, _ = simple_query(s,
        f"SELECT id FROM t4 FOR SYSTEM_TIME AS OF TRANSACTION {xid}")
    assert err is None
    ids = sorted(int(r[0]) for r in rows)
    assert ids == [1], f"as-of view should exclude id=2: {ids}"


# ─── 5. AS OF includes rows that were live, even if deleted later ───
def test_includes_deleted_rows():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t5")
    simple_query(s, "CREATE TABLE t5 (id INT PRIMARY KEY, name VARCHAR(20))")
    simple_query(s, "INSERT INTO t5 VALUES (1, 'alice')")
    simple_query(s, "INSERT INTO t5 VALUES (2, 'bob')")
    xid = cur_xid(s)
    simple_query(s, "DELETE FROM t5 WHERE id = 2")

    _, rows_now, _, _ = simple_query(s, "SELECT id FROM t5")
    ids_now = sorted(int(r[0]) for r in rows_now)
    assert ids_now == [1], f"live: {ids_now}"

    _, rows_then, err, _ = simple_query(s,
        f"SELECT id FROM t5 FOR SYSTEM_TIME AS OF TRANSACTION {xid}")
    assert err is None
    ids_then = sorted(int(r[0]) for r in rows_then)
    assert ids_then == [1, 2], f"as-of view should include deleted id=2: {ids_then}"


# ─── 6. WHERE clauses still apply on the historical snapshot ───
def test_where_filter_applies():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t6")
    simple_query(s, "CREATE TABLE t6 (id INT PRIMARY KEY, kind VARCHAR(20))")
    simple_query(s, "INSERT INTO t6 VALUES (1, 'a')")
    simple_query(s, "INSERT INTO t6 VALUES (2, 'b')")
    simple_query(s, "INSERT INTO t6 VALUES (3, 'a')")
    xid = cur_xid(s)
    simple_query(s, "INSERT INTO t6 VALUES (4, 'a')")

    _, rows, err, _ = simple_query(s,
        f"SELECT id FROM t6 FOR SYSTEM_TIME AS OF TRANSACTION {xid} WHERE kind='a'")
    assert err is None
    ids = sorted(int(r[0]) for r in rows)
    assert ids == [1, 3], f"as-of + WHERE filter: {ids}"


# ─── 7. Two writes in sequence — XID 1 sees 1st, XID 2 sees both ───
def test_sequential_xid_views():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t7")
    simple_query(s, "CREATE TABLE t7 (id INT PRIMARY KEY)")
    simple_query(s, "INSERT INTO t7 VALUES (1)")
    xid_after_first = cur_xid(s)
    simple_query(s, "INSERT INTO t7 VALUES (2)")
    xid_after_second = cur_xid(s)

    _, r1, _, _ = simple_query(s,
        f"SELECT id FROM t7 FOR SYSTEM_TIME AS OF TRANSACTION {xid_after_first}")
    _, r2, _, _ = simple_query(s,
        f"SELECT id FROM t7 FOR SYSTEM_TIME AS OF TRANSACTION {xid_after_second}")

    assert sorted(int(r[0]) for r in r1) == [1], f"snap1: {r1}"
    assert sorted(int(r[0]) for r in r2) == [1, 2], f"snap2: {r2}"


# ─── 8. AS OF does not affect subsequent (non-AS-OF) queries ───
def test_asof_resets_per_statement():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t8")
    simple_query(s, "CREATE TABLE t8 (id INT PRIMARY KEY)")
    simple_query(s, "INSERT INTO t8 VALUES (1)")
    xid = cur_xid(s)
    simple_query(s, "INSERT INTO t8 VALUES (2)")

    # AS OF: only id=1 exists
    _, r_old, _, _ = simple_query(s,
        f"SELECT id FROM t8 FOR SYSTEM_TIME AS OF TRANSACTION {xid}")
    ids_old = sorted(int(r[0]) for r in r_old)
    assert ids_old == [1], f"as-of view: {ids_old}"

    # Normal: both visible — proves the AS OF override didn't bleed over
    _, r_now, _, _ = simple_query(s, "SELECT id FROM t8")
    ids_now = sorted(int(r[0]) for r in r_now)
    assert ids_now == [1, 2], f"normal query after AS OF: {ids_now}"


# ─── 9. FOR SYSTEM_TIME AS OF TRANSACTION 0 falls back to live snapshot ───
def test_asof_zero_is_live():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t9")
    simple_query(s, "CREATE TABLE t9 (id INT PRIMARY KEY)")
    simple_query(s, "INSERT INTO t9 VALUES (1)")
    simple_query(s, "INSERT INTO t9 VALUES (2)")
    _, rows, _, _ = simple_query(s,
        "SELECT id FROM t9 FOR SYSTEM_TIME AS OF TRANSACTION 0")
    ids = sorted(int(r[0]) for r in rows)
    assert ids == [1, 2], f"AS OF 0 should be live view: {ids}"


# ─── 10. evo_current_xid() returns a non-zero, monotonic value ───
def test_current_xid_monotonic():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS tx_mon")
    simple_query(s, "CREATE TABLE tx_mon (id INT PRIMARY KEY)")
    simple_query(s, "INSERT INTO tx_mon VALUES (1)")
    a = cur_xid(s)
    simple_query(s, "INSERT INTO tx_mon VALUES (2)")
    b = cur_xid(s)
    assert a > 0 and b > a, f"xid not monotonic: {a} {b}"


if __name__ == "__main__":
    print("=== test_temporal_query.py (Task 207) ===\n")
    run("Full FOR SYSTEM_TIME grammar parses",   test_grammar_full_form)
    run("Mixed-case keywords parse",             test_grammar_case_insensitive)
    run("AS OF historical row existence",        test_historical_existence)
    run("AS OF excludes future rows",            test_excludes_future_rows)
    run("AS OF includes later-deleted rows",     test_includes_deleted_rows)
    run("WHERE filter applies to AS OF",         test_where_filter_applies)
    run("Sequential XID views differ",           test_sequential_xid_views)
    run("AS OF doesn't bleed into next stmt",    test_asof_resets_per_statement)
    run("FOR SYSTEM_TIME AS OF TRANSACTION 0 = live",            test_asof_zero_is_live)
    run("evo_current_xid is monotonic",          test_current_xid_monotonic)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
