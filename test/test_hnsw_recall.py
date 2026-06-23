"""
tests/test_hnsw_recall.py — Step 8 eval gate for the real HNSW graph
backend. Builds a CREATE INDEX ... USING HNSW over a few-thousand-row
VECTOR corpus (well above the brute-force fallback threshold, so the
graph traversal is exercised) and checks that hnsw_knn's top-10 recovers
the brute-force ground truth at high recall.

Gate: mean Recall@10 >= 0.95 vs exact cosine ranking.
"""
from __future__ import annotations

import math
import os
import random
import sys
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1] / "tests"))
from pg_helpers import conn, simple_query

N = 2500
DIM = 32
Q = 25
K = 10


def cos_dist(a, b):
    dot = sum(x * y for x, y in zip(a, b))
    na = math.sqrt(sum(x * x for x in a)) or 1.0
    nb = math.sqrt(sum(x * x for x in b)) or 1.0
    return 1.0 - dot / (na * nb)


def vlit(v):
    return "[" + ",".join(f"{x:.4f}" for x in v) + "]"


def parse_pk_list(text):
    if not text:
        return []
    return [p.strip() for p in text.split(",") if p.strip()]


def main():
    s = conn()
    random.seed(123)
    simple_query(s, "DROP TABLE IF EXISTS hnr")
    simple_query(s, f"CREATE TABLE hnr (id INT PRIMARY KEY, v VECTOR({DIM}))")
    vecs = {}
    rows = []
    for i in range(1, N + 1):
        v = [round(random.uniform(-1, 1), 4) for _ in range(DIM)]
        vecs[i] = v
        rows.append(f"({i}, '{vlit(v)}')")
    # dim-48 vector literals are ~340 chars; keep batches under the 8 KB
    # statement cap (≈ 12 rows/insert).
    for i in range(0, len(rows), 12):
        _, _, err, _ = simple_query(
            s, f"INSERT INTO hnr VALUES {','.join(rows[i:i+12])}")
        assert err is None, f"insert failed: {err}"

    _, _, err, _ = simple_query(
        s, "CREATE INDEX hnr_idx ON hnr USING HNSW (v vector_cosine_ops) "
           "WITH (m=16, ef_construction=200)")
    assert err is None, f"create index failed: {err}"

    total = 0.0
    worst = 1.0
    for _ in range(Q):
        q = [round(random.uniform(-1, 1), 4) for _ in range(DIM)]
        _, r, err, _ = simple_query(
            s, f"SELECT hnsw_knn('hnr', 'hnr_idx', '{vlit(q)}', {K})")
        assert err is None, f"hnsw_knn failed: {err}"
        got = set(parse_pk_list(r[0][0]))
        truth = [str(k) for k, _ in
                 sorted(vecs.items(), key=lambda kv: cos_dist(kv[1], q))[:K]]
        rec = len(got & set(truth)) / float(K)
        total += rec
        worst = min(worst, rec)

    mean = total / Q
    print(f"corpus={N} dim={DIM} queries={Q} K={K}")
    print(f"mean Recall@{K} = {mean:.4f}  (worst query {worst:.2f})")
    assert mean >= 0.95, f"recall gate not met: {mean:.4f} < 0.95"
    print("OK — HNSW graph recall@10 >= 0.95 vs brute force")
    s.close()


if __name__ == "__main__":
    main()
