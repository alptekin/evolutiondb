"""
tests/test_vector_b64i8.py — correctness for the engine reading the
MCP's COMPACT quantized vector format ("b64i8:<base64>") in the
server-side `ORDER BY <col> <=> '…'` path.

This is the Step-6 enabler: production stores embeddings as int8-
quantized base64 inside the JSON `emb` field (not bracketed floats),
and a 1024-d bracketed literal would blow the 8 KB statement cap.
After teaching vec_parse_to_floats the b64i8 form, `ORDER BY emb <=>
'b64i8:…'` must rank the stored b64i8 vectors identically to a Python
cosine over the SAME quantized reconstruction (decode_vec), with no
re-ingest.

Strategy mirrors test_vector_orderby.py but every vector — stored and
query — is encode_vec()'d to b64i8 first.
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
sys.path.insert(0, str(_REPO / "client" / "mcp-server-evosql"))

from pg_helpers import conn, simple_query
from mcp_server_evosql.embeddings import encode_vec, decode_vec

DIM = 1024  # realistic bge-m3 width; b64i8 literal ~1.4 KB (< 8 KB cap)


def cos_dist(a, b):
    if not a or not b or len(a) != len(b):
        return 1.0
    dot = sum(x * y for x, y in zip(a, b))
    na = math.sqrt(sum(x * x for x in a)) or 1.0
    nb = math.sqrt(sum(x * x for x in b)) or 1.0
    return 1.0 - (dot / (na * nb))


def run(sock, sql, expect_ok=True):
    cols, rows, err, tag = simple_query(sock, sql)
    if expect_ok and err:
        print(f"!! SQL ERROR for: {sql[:120]}", file=sys.stderr)
        print(f"   -> {err}", file=sys.stderr)
        raise RuntimeError(err)
    return cols, rows, err, tag


def main():
    sock = conn()
    user = os.environ.get("EVOSQL_USER", "admin")
    store = "vec_b64i8_test_mem"

    run(sock, f"CREATE MEMORY STORE {store}", expect_ok=False)

    random.seed(7)
    # A clear query direction; "near" rows cluster around it, "far" rows
    # point away. A wide margin keeps the ranking unambiguous under int8
    # quantization so the test isn't flaky.
    query = [1.0] + [0.0] * (DIM - 1)
    rows = []
    for i in range(8):
        v = [1.0 + random.uniform(-0.1, 0.1)] + \
            [random.uniform(-0.05, 0.05) for _ in range(DIM - 1)]
        rows.append((f"near_{i}", v))
    for i in range(8):
        v = [-1.0 + random.uniform(-0.1, 0.1)] + \
            [random.uniform(-0.05, 0.05) for _ in range(DIM - 1)]
        rows.append((f"far_{i}", v))
    rows.append(("noemb_0", None))

    random.shuffle(rows)
    for key, v in rows:
        rec = {"fact": f"row {key}"}
        if v is not None:
            rec["emb"] = encode_vec(v)            # → "b64i8:…"
        value = json.dumps(rec).replace("'", "''")
        run(sock, f"MEMORY PUT INTO {store} VALUES "
                  f"('{user}','{key}','{value}')")

    qlit = encode_vec(query)                       # query also b64i8
    assert qlit.startswith("b64i8:"), qlit
    assert len(qlit) < 8000, f"literal too big: {len(qlit)}"
    sql = (f"SELECT mem_key FROM __mem_{store} "
           f"WHERE mem_namespace='{user}' "
           f"ORDER BY emb <=> '{qlit}' LIMIT 5")
    cols, out, err, tag = run(sock, sql)
    server_top = [r[0] for r in out]

    # Expected ranking over the SAME quantized reconstruction the engine
    # decodes (decode_vec of the stored/query b64i8), so the comparison
    # isolates the engine's decode+cosine, not quantization drift.
    q_dec = decode_vec(qlit)
    expected = []
    for key, v in rows:
        d = cos_dist(q_dec, decode_vec(encode_vec(v))) if v else 1.0
        expected.append((d, key))
    expected.sort(key=lambda x: (x[0], x[1]))
    python_top = [k for _, k in expected[:5]]

    print(f"server top-5: {server_top}")
    print(f"python top-5: {python_top}")
    assert server_top == python_top, \
        f"mismatch:\n  server={server_top}\n  python={python_top}"
    # All 5 nearest must be the 'near_' cluster — proves real ranking.
    assert all(k.startswith("near_") for k in server_top), server_top
    print("OK — ORDER BY emb <=> 'b64i8:…' ranks the compact format "
          "identically to brute-force cosine")
    sock.close()


if __name__ == "__main__":
    main()
