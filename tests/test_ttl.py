"""
test_ttl.py — Task 213 (Feature #213) tests.

Covers:
  - CREATE TABLE ... WITH (ttl_column='col') accepted
  - Past-dated row gets pruned by daemon
  - Future-dated row stays
  - NULL ttl row is preserved (not yet expired)
  - ALTER TABLE n SET TTL_COLUMN = 'col'
  - ALTER TABLE n DROP TTL stops pruning
  - Non-TTL table is never touched
  - Two TTL tables both prune independently
  - Bogus ttl_column at CREATE rejected (column doesn't exist)
  - Bogus ttl_column at ALTER rejected

Tests assume the daemon tick is short (EVOSQL_AUTO_RECLAIM_INTERVAL_SEC=2).
"""
import os
import sys
import time

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query


PASS = 0
FAIL = 0

TICK_WAIT = float(os.environ.get("TTL_TICK_WAIT", "5"))   # daemon interval × 2.5


def run(name, fn):
    global PASS, FAIL
    try:
        fn()
        print(f"  PASS: {name}")
        PASS += 1
    except Exception as e:
        print(f"  FAIL: {name} - {e}")
        FAIL += 1


def ids_of(s, table):
    _, rows, _, _ = simple_query(s, f"SELECT id FROM {table}")
    return sorted(int(r[0]) for r in rows)


# ─── 1. CREATE WITH ttl_column accepted ───
def test_create_with_ttl():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t1")
    _, _, err, _ = simple_query(s,
        "CREATE TABLE t1 (id INT PRIMARY KEY, expires_at TIMESTAMP) "
        "WITH (ttl_column = 'expires_at')")
    assert err is None, f"create: {err}"


# ─── 2. Past-dated row pruned, future-dated row preserved ───
def test_past_pruned_future_kept():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t2")
    simple_query(s,
        "CREATE TABLE t2 (id INT PRIMARY KEY, expires_at TIMESTAMP) "
        "WITH (ttl_column = 'expires_at')")
    simple_query(s, "INSERT INTO t2 VALUES (1, '2020-01-01 00:00:00')")
    simple_query(s, "INSERT INTO t2 VALUES (2, '2099-12-31 00:00:00')")
    time.sleep(TICK_WAIT)
    assert ids_of(s, "t2") == [2], f"after tick: {ids_of(s, 't2')}"


# ─── 3. NULL ttl row preserved ───
def test_null_ttl_preserved():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t3")
    simple_query(s,
        "CREATE TABLE t3 (id INT PRIMARY KEY, expires_at TIMESTAMP) "
        "WITH (ttl_column = 'expires_at')")
    simple_query(s, "INSERT INTO t3 (id) VALUES (1)")  # expires_at NULL
    time.sleep(TICK_WAIT)
    assert ids_of(s, "t3") == [1], f"null ttl row dropped: {ids_of(s, 't3')}"


# ─── 4. ALTER TABLE SET TTL_COLUMN starts pruning ───
def test_alter_set_ttl():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t4")
    simple_query(s,
        "CREATE TABLE t4 (id INT PRIMARY KEY, expires_at TIMESTAMP)")
    simple_query(s, "INSERT INTO t4 VALUES (1, '2020-01-01 00:00:00')")
    simple_query(s, "INSERT INTO t4 VALUES (2, '2099-12-31 00:00:00')")
    time.sleep(TICK_WAIT)
    assert ids_of(s, "t4") == [1, 2], "no TTL yet, both stay"
    simple_query(s, "ALTER TABLE t4 SET TTL_COLUMN = 'expires_at'")
    time.sleep(TICK_WAIT)
    assert ids_of(s, "t4") == [2], f"after ALTER SET: {ids_of(s, 't4')}"


# ─── 5. ALTER TABLE DROP TTL stops pruning ───
def test_alter_drop_ttl():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t5")
    simple_query(s,
        "CREATE TABLE t5 (id INT PRIMARY KEY, expires_at TIMESTAMP) "
        "WITH (ttl_column = 'expires_at')")
    simple_query(s, "ALTER TABLE t5 DROP TTL")
    simple_query(s, "INSERT INTO t5 VALUES (1, '2020-01-01 00:00:00')")
    time.sleep(TICK_WAIT)
    assert ids_of(s, "t5") == [1], f"DROP TTL ignored: {ids_of(s, 't5')}"


# ─── 6. Non-TTL table is never touched ───
def test_non_ttl_table():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t6")
    simple_query(s, "CREATE TABLE t6 (id INT PRIMARY KEY, n INT)")
    simple_query(s, "INSERT INTO t6 VALUES (1, 10)")
    simple_query(s, "INSERT INTO t6 VALUES (2, 20)")
    time.sleep(TICK_WAIT)
    assert ids_of(s, "t6") == [1, 2]


# ─── 7. Two TTL tables prune independently ───
def test_two_ttl_tables():
    s = conn()
    for n in ("ta", "tb"):
        simple_query(s, f"DROP TABLE IF EXISTS {n}")
        simple_query(s,
            f"CREATE TABLE {n} (id INT PRIMARY KEY, expires_at TIMESTAMP) "
            f"WITH (ttl_column = 'expires_at')")
        simple_query(s, f"INSERT INTO {n} VALUES (1, '2020-01-01 00:00:00')")
        simple_query(s, f"INSERT INTO {n} VALUES (2, '2099-12-31 00:00:00')")
    time.sleep(TICK_WAIT)
    assert ids_of(s, "ta") == [2], f"ta: {ids_of(s, 'ta')}"
    assert ids_of(s, "tb") == [2], f"tb: {ids_of(s, 'tb')}"


# ─── 8. Bogus ttl_column at CREATE rejected ───
def test_create_bogus_column_rejected():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t8")
    _, _, err, _ = simple_query(s,
        "CREATE TABLE t8 (id INT PRIMARY KEY, n INT) "
        "WITH (ttl_column = 'nonexistent')")
    assert err is not None, "should reject unknown ttl_column"


# ─── 9. Bogus ttl_column at ALTER rejected ───
def test_alter_bogus_column_rejected():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t9")
    simple_query(s, "CREATE TABLE t9 (id INT PRIMARY KEY, n INT)")
    _, _, err, _ = simple_query(s,
        "ALTER TABLE t9 SET TTL_COLUMN = 'nonexistent'")
    assert err is not None, "ALTER should reject unknown ttl_column"


# ─── 10. Multiple past rows all prune in one tick ───
def test_batch_prune():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS t10")
    simple_query(s,
        "CREATE TABLE t10 (id INT PRIMARY KEY, expires_at TIMESTAMP) "
        "WITH (ttl_column = 'expires_at')")
    for i in range(10):
        simple_query(s, f"INSERT INTO t10 VALUES ({i}, '2020-01-01 00:00:00')")
    time.sleep(TICK_WAIT)
    assert ids_of(s, "t10") == [], f"after tick: {ids_of(s, 't10')}"


if __name__ == "__main__":
    print("=== test_ttl.py (Task 213) ===\n")
    run("CREATE TABLE WITH ttl_column accepted",  test_create_with_ttl)
    run("Past-dated pruned, future-dated kept",   test_past_pruned_future_kept)
    run("NULL ttl row preserved",                  test_null_ttl_preserved)
    run("ALTER SET TTL_COLUMN starts pruning",    test_alter_set_ttl)
    run("ALTER DROP TTL stops pruning",            test_alter_drop_ttl)
    run("Non-TTL table never touched",            test_non_ttl_table)
    run("Two TTL tables prune independently",     test_two_ttl_tables)
    run("CREATE with unknown column rejected",    test_create_bogus_column_rejected)
    run("ALTER with unknown column rejected",     test_alter_bogus_column_rejected)
    run("Batch of past rows all prune in one tick", test_batch_prune)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
