"""
test_pg_prepared_reuse — PG wire extended-query protocol: named prepared
statement re-use (regression for the pg_handler.c fix).

This is the PostgreSQL wire path (Parse/Bind/Execute), distinct from the EVO
native PREPARE/EXECUTE covered by test_prepared_stmt.py. A client that re-uses
a named prepared statement sends Parse once, then Bind+Execute for every later
run with no further Parse. Before the fix the server kept only a single
transient query that Execute freed, so the re-used Bind+Execute returned an
empty result with no RowDescription — psycopg surfaces this as "the last
operation didn't produce records". psycopg auto-prepares after 5 identical
executions, so any client doing repeated identical queries hit it (including
the embedder-off memory keyword search path).

Honors EVOSQL_PG_PORT so it can run against an isolated server.
"""
import os
import sys
import psycopg

HOST = os.environ.get("EVOSQL_HOST", "127.0.0.1")
PORT = int(os.environ.get("EVOSQL_PG_PORT", os.environ.get("EVOSQL_PORT", "5433")))
USER = os.environ.get("EVOSQL_USER", "admin")
PW = os.environ.get("EVOSQL_PASSWORD", "admin")
DB = os.environ.get("EVOSQL_DATABASE", "testdb")


def _conn(**kw):
    return psycopg.connect(host=HOST, port=PORT, user=USER, password=PW,
                           dbname=DB, autocommit=True, **kw)


def main() -> int:
    c = _conn()
    with c.cursor() as cur:
        cur.execute("DROP TABLE IF EXISTS prep_reg")
        cur.execute("CREATE TABLE prep_reg (id INT PRIMARY KEY, v VARCHAR(20))")
        for i in range(8):
            cur.execute(f"INSERT INTO prep_reg VALUES ({i}, 'v{i}')")

    # 1) 20 identical SELECTs: psycopg auto-prepares after 5, switching to a
    #    named statement re-used via Bind+Execute. Every run must keep returning
    #    all rows (pre-fix: the 7th onward returned no result set).
    for n in range(20):
        with c.cursor() as cur:
            cur.execute("SELECT id FROM prep_reg LIMIT 1000")
            assert len(cur.fetchall()) == 8, f"identical SELECT #{n+1} lost rows"
    print("  ok  20 identical auto-prepared SELECTs all return 8 rows")

    # 2) interleaved write + read on one connection past the old break point.
    for i in range(8, 30):
        with c.cursor() as cur:
            cur.execute(f"INSERT INTO prep_reg VALUES ({i}, 'v{i}')")
            cur.execute("SELECT id FROM prep_reg LIMIT 10000")
            assert len(cur.fetchall()) == i + 1, f"after insert {i}: lost rows"
    print("  ok  interleaved write/read to 30 rows stays consistent")

    # 3) re-used parameterized prepared statement: Bind+Execute many times,
    #    each with a different parameter, resolved from the retained template.
    for i in range(15):
        with c.cursor() as cur:
            cur.execute("SELECT v FROM prep_reg WHERE id = %s", (i % 8,))
            rows = cur.fetchall()
            assert len(rows) == 1 and rows[0][0] == f"v{i % 8}", (i, rows)
    print("  ok  15 re-used parameterized prepared statements bind correctly")

    with c.cursor() as cur:
        cur.execute("DROP TABLE IF EXISTS prep_reg")
    print("OK — PG wire prepared statement re-use (Parse once, Bind+Execute many)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
