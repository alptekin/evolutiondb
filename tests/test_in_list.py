"""
test_in_list — WHERE x IN (...) / NOT IN (...) with many values must not crash.

Regression for an engine stack overflow: IN(...) desugared to a LEFT-DEEP OR
chain (depth = value count), and the recursive evaluator/free blew the worker
stack at ~30 values — taking the whole server down. The desugar now builds a
BALANCED tree (depth ~log2(count)), so a long IN list stays shallow.

Covers the parser's MAX_IN_LIST (64) ceiling, checks the result is correct,
and proves the server is still alive afterwards.

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


def _conn():
    return psycopg.connect(host=HOST, port=PORT, user=USER, password=PW,
                           dbname=DB, autocommit=True, prepare_threshold=None,
                           connect_timeout=6)


def _alive():
    try:
        c = _conn()
        with c.cursor() as cur:
            cur.execute("SELECT 1"); cur.fetchone()
        return True
    except Exception:
        return False


def main() -> int:
    c = _conn()
    with c.cursor() as cur:
        cur.execute("DROP TABLE IF EXISTS in_reg")
        cur.execute("CREATE TABLE in_reg (id INT PRIMARY KEY, v VARCHAR(20))")
        for i in range(70):
            cur.execute(f"INSERT INTO in_reg VALUES ({i}, 'v{i}')")

    # IN(...) at sizes that used to crash (>=30), up to the 64 parser ceiling
    for n in (10, 30, 50, 64):
        vals = ",".join(str(i) for i in range(n))
        with c.cursor() as cur:
            cur.execute(f"SELECT id FROM in_reg WHERE id IN ({vals})")
            got = {r[0] for r in cur.fetchall()}
        assert got == set(range(n)), f"IN({n}) wrong rows: {len(got)}"
        assert _alive(), f"server died on IN({n})"
    print("  ok  IN(10/30/50/64) correct + server alive")

    # NOT IN(...) — balanced AND tree
    vals = ",".join(str(i) for i in range(64))
    with c.cursor() as cur:
        cur.execute(f"SELECT id FROM in_reg WHERE id NOT IN ({vals})")
        got = {r[0] for r in cur.fetchall()}
    assert got == set(range(64, 70)), f"NOT IN(64) wrong rows: {sorted(got)}"
    assert _alive(), "server died on NOT IN(64)"
    print("  ok  NOT IN(64) correct + server alive")

    with c.cursor() as cur:
        cur.execute("DROP TABLE IF EXISTS in_reg")
    print("OK — WHERE IN/NOT IN with long lists: balanced tree, no stack overflow")
    return 0


if __name__ == "__main__":
    sys.exit(main())
