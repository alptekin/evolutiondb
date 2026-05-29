"""
tests/test_hnsw_highdim.py — HNSW over high-dimension vectors, the
combination the old code couldn't handle: tup_extract_fields rendered
the vector into a 256-char field buffer (truncating past ~dim 36) and a
bracketed literal blows the 8 KB statement cap. Validates the full
chain at dim 512:
  - INSERT VECTOR(512) via the compact 'b64i8:' literal (under 8 KB),
  - hnsw_build reads the float4 payload straight from the tuple
    (tup_get_vector, no text rendering),
  - hnsw_knn queried with a 'b64i8:' literal,
  - top-10 recovers the brute-force cosine ground truth.

Gate: mean Recall@10 >= 0.95.

Note: dim is capped at 512 here, not 1024, because of a SEPARATE
pre-existing engine bug — inserting a VECTOR whose payload is large
(~dim >= 900, both bracketed and b64i8) fails with a spurious duplicate-
key error, while large TEXT inserts are fine. That bug is unrelated to
the vector-buffer / b64i8 work this test covers.
"""
from __future__ import annotations

import math
import random
import sys
from pathlib import Path

_REPO = Path(__file__).resolve().parents[1]
sys.path.insert(0, str(_REPO / "tests"))
sys.path.insert(0, str(_REPO / "client" / "mcp-server-evosql"))
from pg_helpers import conn, simple_query
from mcp_server_evosql.embeddings import encode_vec, decode_vec

N = 800
DIM = 512
Q = 12
K = 10


def cos_dist(a, b):
    dot = sum(x * y for x, y in zip(a, b))
    na = math.sqrt(sum(x * x for x in a)) or 1.0
    nb = math.sqrt(sum(x * x for x in b)) or 1.0
    return 1.0 - dot / (na * nb)


def parse_pk_list(t):
    return [p.strip() for p in t.split(",") if p.strip()] if t else []


def main():
    s = conn()
    random.seed(99)
    simple_query(s, "DROP TABLE IF EXISTS vhd")
    _, _, err, _ = simple_query(
        s, f"CREATE TABLE vhd (id INT PRIMARY KEY, v VECTOR({DIM}))")
    assert err is None, err

    vecs = {}
    pend = []
    def flush():
        if pend:
            _, _, e, _ = simple_query(s, "INSERT INTO vhd VALUES " + ",".join(pend))
            assert e is None, f"insert: {e}"
            pend.clear()
    for i in range(1, N + 1):
        v = [random.gauss(0, 1) for _ in range(DIM)]
        vecs[i] = decode_vec(encode_vec(v))        # engine-stored reconstruction
        pend.append(f"({i}, '{encode_vec(v)}')")    # compact b64i8 literal
        if len(pend) == 3:
            flush()
    flush()

    _, _, err, _ = simple_query(
        s, "CREATE INDEX vhd_idx ON vhd USING HNSW (v vector_cosine_ops) "
           "WITH (m=16, ef_construction=200)")
    assert err is None, f"create index: {err}"

    total = 0.0
    for _ in range(Q):
        qv = [random.gauss(0, 1) for _ in range(DIM)]
        qd = decode_vec(encode_vec(qv))
        _, r, err, _ = simple_query(
            s, f"SELECT hnsw_knn('vhd', 'vhd_idx', '{encode_vec(qv)}', {K})")
        assert err is None, f"knn: {err}"
        got = set(parse_pk_list(r[0][0]))
        truth = [str(k) for k, _ in
                 sorted(vecs.items(), key=lambda kv: cos_dist(kv[1], qd))[:K]]
        total += len(got & set(truth)) / float(K)

    mean = total / Q
    print(f"corpus={N} dim={DIM} queries={Q} K={K}")
    print(f"mean Recall@{K} = {mean:.4f}")
    assert mean >= 0.95, f"recall gate not met: {mean:.4f}"
    print("OK — 512-d HNSW (b64i8 insert + binary build + b64i8 query) "
          "recall@10 >= 0.95")
    s.close()


if __name__ == "__main__":
    main()
