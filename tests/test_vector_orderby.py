"""
tests/test_vector_orderby.py — Adım 5b smoke + correctness for the
SQL-level `ORDER BY <col> <=> '[…]'` path.

Strategy:
1. Create a MEMORY STORE.
2. Insert N rows with a known embedding shape — half "near" a target
   query vector, half "far" — and a couple of rows with no embedding
   at all (those must sink to the bottom under ascending sort).
3. Run `SELECT ... ORDER BY emb <=> '[…]' LIMIT 5`.
4. Confirm the top-K matches a Python-side brute-force cosine
   computation row-for-row.
"""
from __future__ import annotations

import json
import math
import os
import random
import sys
from pathlib import Path

_REPO = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(_REPO / "tests"))

from pg_helpers import conn, simple_query


DIM = 8
QUERY_VEC = [1.0] + [0.0] * (DIM - 1)


def cos_dist(a, b):
    if not a or not b or len(a) != len(b):
        return 1.0
    dot = sum(x * y for x, y in zip(a, b))
    na = math.sqrt(sum(x * x for x in a)) or 1.0
    nb = math.sqrt(sum(x * x for x in b)) or 1.0
    return 1.0 - (dot / (na * nb))


def vec_to_lit(v):
    return "[" + ",".join(f"{x:.6f}" for x in v) + "]"


def run(sock, sql, expect_ok=True):
    cols, rows, err, tag = simple_query(sock, sql)
    if expect_ok and err:
        print(f"!! SQL ERROR for: {sql[:200]}", file=sys.stderr)
        print(f"   -> {err}", file=sys.stderr)
        raise RuntimeError(err)
    return cols, rows, err, tag


def main():
    sock = conn()
    user = os.environ.get("EVOSQL_USER", "admin")
    store = "vec_ord_test_mem"

    # Idempotent setup — cleanup errors are fine.
    run(sock, f"MEMORY DELETE FROM {store} WHERE NS='{user}' AND KEY='*'",
        expect_ok=False)
    run(sock, f"CREATE MEMORY STORE {store}", expect_ok=False)

    random.seed(0)
    rows = []
    for i in range(8):
        v = [1.0 - random.random() * 0.1] + \
            [random.random() * 0.05 for _ in range(DIM - 1)]
        rows.append((f"near_{i}", v))
    for i in range(8):
        v = [-1.0 + random.random() * 0.1] + \
            [random.random() * 0.05 for _ in range(DIM - 1)]
        rows.append((f"far_{i}", v))
    rows.append(("noemb_0", None))
    rows.append(("noemb_1", None))

    random.shuffle(rows)
    for key, v in rows:
        rec = {"fact": f"row {key}"}
        if v is not None:
            rec["emb"] = vec_to_lit(v)
        value = json.dumps(rec).replace("'", "''")
        run(sock,
            f"MEMORY PUT INTO {store} VALUES "
            f"('{user}','{key}','{value}')")

    qlit = vec_to_lit(QUERY_VEC)
    sql = (f"SELECT mem_key FROM __mem_{store} "
           f"WHERE mem_namespace='{user}' "
           f"ORDER BY emb <=> '{qlit}' LIMIT 5")
    print(f">> {sql}")
    cols, out, err, tag = run(sock, sql)
    server_top = [r[0] for r in out]

    expected = []
    for key, v in rows:
        d = cos_dist(QUERY_VEC, v) if v else 1.0
        expected.append((d, key))
    expected.sort(key=lambda x: (x[0], x[1]))
    python_top = [k for _, k in expected[:5]]

    print(f"server top-5: {server_top}")
    print(f"python top-5: {python_top}")
    assert server_top == python_top, \
        f"mismatch:\n  server={server_top}\n  python={python_top}"
    print("OK — ORDER BY emb <=> '[…]' top-5 matches brute force")
    sock.close()


if __name__ == "__main__":
    main()
