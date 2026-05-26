"""
tests/test_vector_orderby.py — Adım 5b smoke + correctness for the
SQL-level `ORDER BY <col> <=> '[…]'` path.

Strategy
--------
1. Create a MEMORY STORE.
2. Insert N rows with a known embedding shape — half "near" a target
   query vector, half "far" — and a couple of rows with no embedding
   at all (those must sink to the bottom under ascending sort).
3. Run `SELECT ... ORDER BY emb <=> '[…]' LIMIT 5`.
4. Confirm the top-K matches the Python-side brute-force cosine
   computation row-for-row.

The test uses pg_helpers for the PG wire path so it stays close to
what the MCP server actually does at runtime; no internal API
shortcuts.
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

try:
    from pg_helpers import connect, execute, query, close  # type: ignore
except Exception:
    print("pg_helpers not available — run from a checkout with "
          "tests/pg_helpers.py present", file=sys.stderr)
    sys.exit(2)


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


def main():
    conn = connect()
    user = os.environ.get("EVOSQL_USER", "admin")
    store = "vec_ord_test_mem"
    # Idempotent setup.
    try: execute(conn, f"MEMORY DELETE FROM {store} WHERE NS='{user}' AND KEY='*'")
    except Exception: pass
    try: execute(conn, f"CREATE MEMORY STORE {store}")
    except Exception: pass

    random.seed(0)
    rows = []
    # Half should land near QUERY_VEC, half far.
    for i in range(8):
        # near: tilt toward (1,0,0,...) by adding small noise
        v = [1.0 - random.random() * 0.1] + \
            [random.random() * 0.05 for _ in range(DIM - 1)]
        rows.append((f"near_{i}", v))
    for i in range(8):
        # far: tilt away — flip the first dimension negative
        v = [-1.0 + random.random() * 0.1] + \
            [random.random() * 0.05 for _ in range(DIM - 1)]
        rows.append((f"far_{i}", v))
    # Two rows without an emb field — must sink under ascending sort.
    rows.append(("noemb_0", None))
    rows.append(("noemb_1", None))

    random.shuffle(rows)
    for key, v in rows:
        rec = {"fact": f"row {key}"}
        if v is not None:
            rec["emb"] = vec_to_lit(v)
        value = json.dumps(rec).replace("'", "''")
        execute(conn,
                 f"MEMORY PUT INTO {store} VALUES "
                 f"('{user}','{key}','{value}')")

    qlit = vec_to_lit(QUERY_VEC)
    # The planner reads the embedding from the `mem_value` JSON
    # column when the named column doesn't exist on the table.
    out = query(conn,
                 f"SELECT mem_key FROM __mem_{store} "
                 f"WHERE mem_namespace='{user}' "
                 f"ORDER BY emb <=> '{qlit}' LIMIT 5")
    server_top = [r[0] for r in out]

    # Python brute force: compute the same ordering directly.
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
    close(conn)


if __name__ == "__main__":
    main()
