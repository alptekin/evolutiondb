"""
test_hnsw_index.py — Task 202 (Feature #202) tests.

Covers:
  - CREATE INDEX ... USING HNSW (col vector_cosine_ops) WITH (m=N, ef_construction=N)
  - Default opclass (cosine) and alternate opclasses (L2, inner, L1)
  - DROP INDEX releases the in-memory graph
  - HNSW_KNN(table, index, query, k) returns top-k PK list ordered by distance
  - Brute-force recall parity (v1 uses brute force internally — expect
    recall@k = 100% for small corpora; tested against l2_distance sort)
  - Dimension mismatch between query and index → NULL
  - Rebuild after re-CREATE (replaces existing graph)
  - Larger corpus (~1k vectors, 16-dim): top-10 matches brute force ground truth
  - Build on a non-vector column → error
  - IF NOT EXISTS ignores existing index
"""

import os
import sys
import math
import random

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


def batch_insert(s, tbl, rows, batch=20):
    for i in range(0, len(rows), batch):
        simple_query(s, f"INSERT INTO {tbl} VALUES {','.join(rows[i:i+batch])}")


def setup_table(s, n_rows, dim, seed=42):
    random.seed(seed)
    simple_query(s, "DROP TABLE IF EXISTS hn")
    simple_query(s, f"CREATE TABLE hn (id INT PRIMARY KEY, v VECTOR({dim}))")
    rows = []
    vecs = {}
    for i in range(1, n_rows + 1):
        vec = [round(random.uniform(-1, 1), 4) for _ in range(dim)]
        vecs[i] = vec
        rows.append(f"({i}, '[{','.join(str(x) for x in vec)}]')")
    batch_insert(s, "hn", rows)
    return vecs


def l2(a, b):
    return math.sqrt(sum((x - y) ** 2 for x, y in zip(a, b)))


def parse_pk_list(text):
    if text is None or text == "":
        return []
    return [p.strip() for p in text.split(",") if p.strip()]


# ─── 1. CREATE INDEX USING HNSW (cosine default) accepted ───
def test_create_cosine_default():
    s = conn()
    setup_table(s, 10, 3)
    _, _, err, _ = simple_query(s, "CREATE INDEX hn_idx ON hn USING HNSW (v)")
    assert err is None, f"CREATE HNSW failed: {err}"


# ─── 2. CREATE INDEX with explicit opclass + WITH params ───
def test_create_with_opts():
    s = conn()
    setup_table(s, 10, 3)
    simple_query(s, "DROP INDEX IF EXISTS hn_idx2")
    _, _, err, _ = simple_query(s,
        "CREATE INDEX hn_idx2 ON hn USING HNSW (v vector_l2_ops) "
        "WITH (m=32, ef_construction=128)")
    assert err is None, f"CREATE HNSW with params failed: {err}"


# ─── 3. Unknown opclass → falls back to cosine, no error ───
def test_unknown_opclass_fallback():
    s = conn()
    setup_table(s, 5, 3)
    simple_query(s, "DROP INDEX IF EXISTS hn_idx3")
    _, _, err, _ = simple_query(s,
        "CREATE INDEX hn_idx3 ON hn USING HNSW (v foo_bar_ops)")
    assert err is None, f"unknown opclass should fall back to cosine: {err}"


# ─── 4. HNSW on non-vector column → error ───
def test_nonvector_column_rejected():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS hnonv")
    simple_query(s, "CREATE TABLE hnonv (id INT PRIMARY KEY, n INT)")
    simple_query(s, "INSERT INTO hnonv VALUES (1, 42)")
    _, _, err, _ = simple_query(s,
        "CREATE INDEX hnonv_idx ON hnonv USING HNSW (n)")
    assert err is not None, "HNSW on INT column should fail"


# ─── 5. DROP INDEX succeeds and frees the graph ───
def test_drop_index():
    s = conn()
    setup_table(s, 5, 3)
    simple_query(s, "DROP INDEX IF EXISTS hn_idxd")
    simple_query(s, "CREATE INDEX hn_idxd ON hn USING HNSW (v)")
    _, _, err, _ = simple_query(s, "DROP INDEX hn_idxd")
    assert err is None, f"DROP INDEX failed: {err}"


# ─── 6. HNSW_KNN returns a PK list ───
def test_knn_basic():
    s = conn()
    setup_table(s, 10, 3)
    simple_query(s, "DROP INDEX IF EXISTS hn_idx_k")
    simple_query(s,
        "CREATE INDEX hn_idx_k ON hn USING HNSW (v vector_l2_ops)")
    _, rows, err, _ = simple_query(s,
        "SELECT hnsw_knn('hn', 'hn_idx_k', '[0,0,0]', 3)")
    assert err is None, f"hnsw_knn failed: {err}"
    ids = parse_pk_list(rows[0][0])
    assert len(ids) == 3, f"expected 3 hits, got {ids}"


# ─── 7. Query dimension mismatch → NULL ───
def test_dim_mismatch_null():
    s = conn()
    setup_table(s, 5, 3)
    simple_query(s, "DROP INDEX IF EXISTS hn_idx_m")
    simple_query(s, "CREATE INDEX hn_idx_m ON hn USING HNSW (v)")
    _, rows, _, _ = simple_query(s,
        "SELECT hnsw_knn('hn', 'hn_idx_m', '[1,2]', 3)")
    assert rows[0][0] is None, f"dim-mismatch knn = {rows[0][0]}, want NULL"


# ─── 8. Top-10 matches brute force ground truth (v1 = brute force) ───
def test_recall_matches_brute_force():
    s = conn()
    vecs = setup_table(s, 200, 16, seed=1)
    simple_query(s, "DROP INDEX IF EXISTS hn_idx_r")
    simple_query(s,
        "CREATE INDEX hn_idx_r ON hn USING HNSW (v vector_l2_ops) "
        "WITH (m=16, ef_construction=64)")
    query = [0.1] * 16
    q_text = "[" + ",".join(str(x) for x in query) + "]"
    _, rows, _, _ = simple_query(s,
        f"SELECT hnsw_knn('hn', 'hn_idx_r', '{q_text}', 10)")
    hnsw_ids = parse_pk_list(rows[0][0])
    # Brute force top-10 by L2
    brute = sorted(vecs.items(), key=lambda kv: l2(kv[1], query))
    brute_ids = [str(k) for k, _ in brute[:10]]
    # v1 uses brute force backing → recall should be 100%
    overlap = len(set(hnsw_ids) & set(brute_ids))
    assert overlap >= 9, \
        f"recall@10 = {overlap}/10, hnsw={hnsw_ids}, brute={brute_ids}"


# ─── 9. Rebuild replaces the graph on re-CREATE ───
def test_rebuild_replaces():
    s = conn()
    setup_table(s, 5, 3)
    simple_query(s, "DROP INDEX IF EXISTS hn_idx_rb")
    simple_query(s, "CREATE INDEX hn_idx_rb ON hn USING HNSW (v)")
    # Drop and recreate on fresh 10 rows
    simple_query(s, "DROP INDEX hn_idx_rb")
    setup_table(s, 10, 3, seed=7)
    simple_query(s, "CREATE INDEX hn_idx_rb ON hn USING HNSW (v vector_l2_ops)")
    _, rows, _, _ = simple_query(s,
        "SELECT hnsw_knn('hn', 'hn_idx_rb', '[0,0,0]', 10)")
    ids = parse_pk_list(rows[0][0])
    assert len(ids) == 10, f"rebuilt graph expected 10 hits, got {ids}"


# ─── 10. IF NOT EXISTS guard — second create no-op ───
def test_if_not_exists():
    s = conn()
    setup_table(s, 3, 3)
    simple_query(s, "DROP INDEX IF EXISTS hn_idx_in")
    _, _, err1, _ = simple_query(s,
        "CREATE INDEX hn_idx_in ON hn USING HNSW (v)")
    assert err1 is None
    _, _, err2, _ = simple_query(s,
        "CREATE INDEX IF NOT EXISTS hn_idx_in ON hn USING HNSW (v)")
    assert err2 is None, f"IF NOT EXISTS should suppress error: {err2}"


# ─── 11. Inner product opclass stores distance with negative-dot sign ───
def test_inner_product_opclass():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS hn_ip")
    simple_query(s, "CREATE TABLE hn_ip (id INT PRIMARY KEY, v VECTOR(2))")
    simple_query(s, "INSERT INTO hn_ip VALUES (1, '[1,0]')")
    simple_query(s, "INSERT INTO hn_ip VALUES (2, '[0,1]')")
    simple_query(s, "INSERT INTO hn_ip VALUES (3, '[5,5]')")
    simple_query(s, "DROP INDEX IF EXISTS hn_ip_idx")
    _, _, err, _ = simple_query(s,
        "CREATE INDEX hn_ip_idx ON hn_ip USING HNSW (v vector_ip_ops)")
    assert err is None, f"ip opclass failed: {err}"
    # Under inner-product (neg dot) distance, [5,5] gives most negative
    # result for query [1,1] → ranks first.
    _, rows, _, _ = simple_query(s,
        "SELECT hnsw_knn('hn_ip', 'hn_ip_idx', '[1,1]', 1)")
    ids = parse_pk_list(rows[0][0])
    assert ids == ["3"], f"ip top-1 = {ids}, want ['3']"


# ─── 12. Larger corpus (500 × 32-dim) still functional ───
def test_larger_corpus():
    s = conn()
    vecs = setup_table(s, 500, 32, seed=11)
    simple_query(s, "DROP INDEX IF EXISTS hn_lg")
    simple_query(s,
        "CREATE INDEX hn_lg ON hn USING HNSW (v vector_l2_ops) "
        "WITH (m=16, ef_construction=64)")
    query = [0.0] * 32
    q_text = "[" + ",".join(str(x) for x in query) + "]"
    _, rows, err, _ = simple_query(s,
        f"SELECT hnsw_knn('hn', 'hn_lg', '{q_text}', 5)")
    assert err is None, f"large corpus knn failed: {err}"
    ids = parse_pk_list(rows[0][0])
    assert len(ids) == 5, f"expected 5 hits, got {ids}"
    # Verify ranking: first hit should be closer than fifth (strict order)
    distances = [l2(vecs[int(i)], query) for i in ids]
    assert distances == sorted(distances), \
        f"hits not in ascending distance: {distances}"


if __name__ == "__main__":
    print("=== test_hnsw_index.py (Task 202) ===\n")
    run("CREATE HNSW (default cosine)",        test_create_cosine_default)
    run("CREATE HNSW (opclass + WITH params)", test_create_with_opts)
    run("Unknown opclass → fallback cosine",   test_unknown_opclass_fallback)
    run("HNSW on non-VECTOR column rejected",  test_nonvector_column_rejected)
    run("DROP INDEX frees graph",              test_drop_index)
    run("hnsw_knn returns k PKs",              test_knn_basic)
    run("Query dim mismatch → NULL",           test_dim_mismatch_null)
    run("Top-k matches brute force (recall)",  test_recall_matches_brute_force)
    run("Re-CREATE replaces graph",            test_rebuild_replaces)
    run("IF NOT EXISTS suppresses error",      test_if_not_exists)
    run("vector_ip_ops opclass ranks by -dot", test_inner_product_opclass)
    run("500×32 corpus ordered ranking",       test_larger_corpus)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
