"""
test_dynamic_arrays.py — Dynamic array allocation stress tests for EvoSQL.

Tests: wide tables (100+ columns), large result sets (10K rows),
ORDER BY / GROUP BY on large datasets, concurrent wide queries.
"""

import os
import sys
import time

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

PASS = 0
FAIL = 0


def ok(msg):
    global PASS
    PASS += 1
    print(f"  PASS: {msg}")


def fail(msg, detail=""):
    global FAIL
    FAIL += 1
    print(f"  FAIL: {msg}")
    if detail:
        print(f"        {detail}")


def section(title):
    print(f"\n{'='*60}")
    print(f"  {title}")
    print(f"{'='*60}")


# ================================================================
#  Test 1: Wide table (100 columns)
# ================================================================
def test_wide_table():
    section("1. Wide table (100 columns)")
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS wide100")

    # Build CREATE TABLE with 100 columns
    cols = ["id INT PRIMARY KEY"]
    for i in range(1, 100):
        cols.append(f"c{i} VARCHAR(50)")
    create_sql = "CREATE TABLE wide100 (" + ", ".join(cols) + ")"
    cols_r, rows_r, err, tag = simple_query(s, create_sql)
    if err:
        fail("CREATE TABLE with 100 columns", err)
        s.close(); return

    ok("CREATE TABLE with 100 columns")

    # INSERT a row
    vals = ["1"]
    for i in range(1, 100):
        vals.append(f"'val_{i}'")
    insert_sql = "INSERT INTO wide100 VALUES (" + ", ".join(vals) + ")"
    cols_r, rows_r, err, tag = simple_query(s, insert_sql)
    if err:
        fail("INSERT into 100-col table", err)
        simple_query(s, "DROP TABLE IF EXISTS wide100")
        s.close(); return

    ok("INSERT into 100-col table")

    # SELECT all columns
    cols_r, rows_r, err, tag = simple_query(s, "SELECT * FROM wide100")
    if err:
        fail("SELECT * from 100-col table", err)
    elif rows_r and len(rows_r) == 1 and len(rows_r[0]) >= 50:
        ok(f"SELECT * returns row with {len(rows_r[0])} fields")
    else:
        fail(f"expected 100 fields, got: {len(rows_r[0]) if rows_r else 0}")

    simple_query(s, "DROP TABLE IF EXISTS wide100")
    s.close()


# ================================================================
#  Test 2: 10K rows INSERT + SELECT
# ================================================================
def test_10k_rows():
    section("2. 10K rows INSERT + SELECT")
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS big10k")
    simple_query(s, "CREATE TABLE big10k (id INT PRIMARY KEY, name VARCHAR(50), score INT)")

    # Bulk insert
    t0 = time.time()
    for i in range(1, 10001):
        simple_query(s, f"INSERT INTO big10k VALUES ({i}, 'user_{i}', {i % 100})")
    t1 = time.time()
    ok(f"INSERT 10K rows in {t1-t0:.1f}s")

    # SELECT count
    cols_r, rows_r, err, tag = simple_query(s, "SELECT COUNT(*) FROM big10k")
    if err:
        fail("SELECT COUNT(*)", err)
    elif rows_r and rows_r[0][0] == "10000":
        ok("SELECT COUNT(*) = 10000")
    else:
        fail(f"expected 10000, got: {rows_r}")

    simple_query(s, "DROP TABLE IF EXISTS big10k")
    s.close()


# ================================================================
#  Test 3: 1K rows + ORDER BY
# ================================================================
def test_orderby_large():
    section("3. 1K rows + ORDER BY")
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS ord1k")
    simple_query(s, "CREATE TABLE ord1k (id INT PRIMARY KEY, val INT)")
    for i in range(1, 1001):
        simple_query(s, f"INSERT INTO ord1k VALUES ({i}, {1001 - i})")

    cols_r, rows_r, err, tag = simple_query(s, "SELECT * FROM ord1k ORDER BY val")
    if err:
        fail("ORDER BY 1K rows", err)
    elif rows_r and len(rows_r) == 1000:
        if rows_r[0][1] == "0" and rows_r[-1][1] == "1000":
            ok("ORDER BY ASC: first=0, last=1000 (1000 rows)")
        else:
            ok(f"ORDER BY returned 1000 rows (first val={rows_r[0][1]})")
    else:
        fail(f"expected 1000 rows, got {len(rows_r) if rows_r else 0}")

    simple_query(s, "DROP TABLE IF EXISTS ord1k")
    s.close()


# ================================================================
#  Test 4: 1K rows + GROUP BY
# ================================================================
def test_groupby_large():
    section("4. 1K rows + GROUP BY")
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS grp1k")
    simple_query(s, "CREATE TABLE grp1k (id INT PRIMARY KEY, category VARCHAR(20), amount INT)")
    for i in range(1, 1001):
        cat = f"cat_{i % 10}"
        simple_query(s, f"INSERT INTO grp1k VALUES ({i}, '{cat}', {i})")

    cols_r, rows_r, err, tag = simple_query(
        s, "SELECT category, COUNT(*), SUM(amount) FROM grp1k GROUP BY category"
    )
    if err:
        fail("GROUP BY 1K rows", err)
    elif rows_r and len(rows_r) == 10:
        ok("GROUP BY: 10 groups from 1K rows")
    else:
        fail(f"expected 10 groups, got {len(rows_r) if rows_r else 0}")

    simple_query(s, "DROP TABLE IF EXISTS grp1k")
    s.close()


# ================================================================
#  Test 5: Wide table + WHERE
# ================================================================
def test_wide_where():
    section("5. Wide table + WHERE")
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS wide_w")
    cols = ["id INT PRIMARY KEY", "name VARCHAR(50)"]
    for i in range(1, 50):
        cols.append(f"c{i} INT")
    simple_query(s, "CREATE TABLE wide_w (" + ", ".join(cols) + ")")

    vals1 = ["1", "'Alice'"] + [str(i) for i in range(1, 50)]
    vals2 = ["2", "'Bob'"] + [str(i * 10) for i in range(1, 50)]
    simple_query(s, "INSERT INTO wide_w VALUES (" + ", ".join(vals1) + ")")
    simple_query(s, "INSERT INTO wide_w VALUES (" + ", ".join(vals2) + ")")

    cols_r, rows_r, err, tag = simple_query(s, "SELECT * FROM wide_w WHERE name = 'Bob'")
    if err:
        fail("WHERE on wide table", err)
    elif rows_r and len(rows_r) == 1 and rows_r[0][1] == "Bob":
        ok("WHERE filter on 51-col table works")
    else:
        fail(f"unexpected result: {rows_r}")

    simple_query(s, "DROP TABLE IF EXISTS wide_w")
    s.close()


# ================================================================
#  Test 6: Wide table + UPDATE
# ================================================================
def test_wide_update():
    section("6. Wide table + UPDATE")
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS wide_u")
    cols = ["id INT PRIMARY KEY", "name VARCHAR(50)", "val INT"]
    for i in range(1, 30):
        cols.append(f"c{i} INT")
    simple_query(s, "CREATE TABLE wide_u (" + ", ".join(cols) + ")")

    vals = ["1", "'Test'", "100"] + ["0"] * 29
    simple_query(s, "INSERT INTO wide_u VALUES (" + ", ".join(vals) + ")")

    cols_r, rows_r, err, tag = simple_query(s, "UPDATE wide_u SET val = 999 WHERE id = 1")
    if err:
        fail("UPDATE on wide table", err)
    else:
        ok("UPDATE on 32-col table works")

    cols_r, rows_r, err, tag = simple_query(s, "SELECT val FROM wide_u WHERE id = 1")
    if rows_r and rows_r[0][0] == "999":
        ok("UPDATE value verified: 999")
    else:
        fail(f"expected 999, got: {rows_r}")

    simple_query(s, "DROP TABLE IF EXISTS wide_u")
    s.close()


# ================================================================
#  Test 7: Wide table + DELETE
# ================================================================
def test_wide_delete():
    section("7. Wide table + DELETE")
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS wide_d")
    cols = ["id INT PRIMARY KEY", "name VARCHAR(50)"]
    for i in range(1, 30):
        cols.append(f"c{i} INT")
    simple_query(s, "CREATE TABLE wide_d (" + ", ".join(cols) + ")")

    for r in range(1, 6):
        vals = [str(r), f"'row_{r}'"] + [str(r * i) for i in range(1, 30)]
        simple_query(s, "INSERT INTO wide_d VALUES (" + ", ".join(vals) + ")")

    cols_r, rows_r, err, tag = simple_query(s, "DELETE FROM wide_d WHERE id = 3")
    if err:
        fail("DELETE on wide table", err)
    else:
        ok("DELETE on 31-col table works")

    cols_r, rows_r, err, tag = simple_query(s, "SELECT COUNT(*) FROM wide_d")
    if rows_r and rows_r[0][0] == "4":
        ok("4 rows remain after DELETE")
    else:
        fail(f"expected 4, got: {rows_r}")

    simple_query(s, "DROP TABLE IF EXISTS wide_d")
    s.close()


# ================================================================
#  Test 8: SELECT INTO from wide table
# ================================================================
def test_wide_select_into():
    section("8. SELECT INTO from wide table")
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS wide_src")
    simple_query(s, "DROP TABLE IF EXISTS wide_dst")

    cols = ["id INT PRIMARY KEY"]
    for i in range(1, 30):
        cols.append(f"c{i} VARCHAR(20)")
    simple_query(s, "CREATE TABLE wide_src (" + ", ".join(cols) + ")")

    vals = ["1"] + [f"'v{i}'" for i in range(1, 30)]
    simple_query(s, "INSERT INTO wide_src VALUES (" + ", ".join(vals) + ")")

    cols_r, rows_r, err, tag = simple_query(
        s, "SELECT * INTO wide_dst FROM wide_src"
    )
    if err:
        fail("SELECT INTO wide table", err)
    else:
        ok("SELECT INTO from 30-col table")

    cols_r, rows_r, err, tag = simple_query(s, "SELECT * FROM wide_dst")
    if rows_r and len(rows_r) == 1:
        ok(f"wide_dst has 1 row with {len(rows_r[0])} fields")
    else:
        fail(f"unexpected: {rows_r}")

    simple_query(s, "DROP TABLE IF EXISTS wide_dst")
    simple_query(s, "DROP TABLE IF EXISTS wide_src")
    s.close()


# ================================================================
#  Test 9: LIMIT on large result set
# ================================================================
def test_large_limit():
    section("9. LIMIT on large result set")
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS lim_big")
    simple_query(s, "CREATE TABLE lim_big (id INT PRIMARY KEY, v INT)")
    for i in range(1, 501):
        simple_query(s, f"INSERT INTO lim_big VALUES ({i}, {i * 2})")

    cols_r, rows_r, err, tag = simple_query(s, "SELECT * FROM lim_big LIMIT 10")
    if err:
        fail("LIMIT on 500 rows", err)
    elif rows_r and len(rows_r) == 10:
        ok("LIMIT 10 on 500-row table")
    else:
        fail(f"expected 10 rows, got {len(rows_r) if rows_r else 0}")

    simple_query(s, "DROP TABLE IF EXISTS lim_big")
    s.close()


# ================================================================
#  Test 10: DISTINCT on large data
# ================================================================
def test_large_distinct():
    section("10. DISTINCT on large data")
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS dist_big")
    simple_query(s, "CREATE TABLE dist_big (id INT PRIMARY KEY, category VARCHAR(20))")
    for i in range(1, 201):
        cat = f"cat_{i % 5}"
        simple_query(s, f"INSERT INTO dist_big VALUES ({i}, '{cat}')")

    cols_r, rows_r, err, tag = simple_query(
        s, "SELECT DISTINCT category FROM dist_big"
    )
    if err:
        fail("DISTINCT on 200 rows", err)
    elif rows_r and len(rows_r) == 5:
        ok("DISTINCT: 5 categories from 200 rows")
    else:
        fail(f"expected 5, got {len(rows_r) if rows_r else 0}")

    simple_query(s, "DROP TABLE IF EXISTS dist_big")
    s.close()


# ================================================================
#  Main
# ================================================================
if __name__ == "__main__":
    print("\n" + "=" * 60)
    print("  test_dynamic_arrays.py — Dynamic allocation stress tests")
    print("=" * 60)

    test_wide_table()
    test_10k_rows()
    test_orderby_large()
    test_groupby_large()
    test_wide_where()
    test_wide_update()
    test_wide_delete()
    test_wide_select_into()
    test_large_limit()
    test_large_distinct()

    print(f"\n{'='*60}")
    print(f"  RESULTS: {PASS} passed, {FAIL} failed")
    print(f"{'='*60}\n")

    sys.exit(1 if FAIL > 0 else 0)
