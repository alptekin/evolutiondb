"""
test_hybrid_search.py — Task 203 (Feature #203) tests.

Covers hybrid vector + filter search:
  - hnsw_filter_knn(tbl, idx, query, k, 'col=val[:mode]')
  - hnsw_hybrid_explain(tbl, idx, query, k, 'col=val')
  - Strategy auto-selection based on filter selectivity (pre vs post)
  - Forced pre-filter / post-filter modes
  - Correctness equivalence between strategies on the same query

Requires running server (docker compose up -d).
"""

import math
import os
import random
import sys

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


def setup_tagged_table(s, n_rows, dim, tag_cardinality=5, seed=1):
    """Create table `hy` with (id, tag, v) where tag is one of
    tag_cardinality values — used to vary filter selectivity."""
    random.seed(seed)
    simple_query(s, "DROP TABLE IF EXISTS hy")
    simple_query(s, f"CREATE TABLE hy (id INT PRIMARY KEY, tag VARCHAR(16), v VECTOR({dim}))")
    rows = []
    tags = []
    vecs = {}
    for i in range(1, n_rows + 1):
        tag = f"t{random.randint(0, tag_cardinality - 1)}"
        vec = [round(random.uniform(-1, 1), 4) for _ in range(dim)]
        tags.append(tag)
        vecs[i] = (tag, vec)
        rows.append(f"({i}, '{tag}', '[{','.join(str(x) for x in vec)}]')")
    batch_insert(s, "hy", rows)
    return vecs


def l2(a, b):
    return math.sqrt(sum((x - y) ** 2 for x, y in zip(a, b)))


def parse_pk_list(text):
    if not text:
        return []
    return [p.strip() for p in text.split(",") if p.strip()]


# ─── 1. Basic filter — equality predicate returns filtered top-k ───
def test_filter_basic():
    s = conn()
    vecs = setup_tagged_table(s, 50, 4, tag_cardinality=3, seed=2)
    simple_query(s, "DROP INDEX IF EXISTS hy_idx")
    simple_query(s,
        "CREATE INDEX hy_idx ON hy USING HNSW (v vector_l2_ops) WITH (m=16, ef_construction=64)")

    q = "[0,0,0,0]"
    _, rows, err, _ = simple_query(s,
        f"SELECT hnsw_filter_knn('hy', 'hy_idx', '{q}', 5, 'tag=t0')")
    assert err is None, f"filter_knn failed: {err}"
    ids = parse_pk_list(rows[0][0])
    assert len(ids) > 0, f"no hits for filter tag=t0"

    # All returned rows must have tag = 't0'
    for pk in ids:
        _, r, _, _ = simple_query(s, f"SELECT tag FROM hy WHERE id={pk}")
        assert r and r[0][0] == "t0", f"row {pk} has tag {r}, want t0"


# ─── 2. Explain — auto strategy picks based on selectivity ───
def test_explain_auto_picks_strategy():
    s = conn()
    setup_tagged_table(s, 200, 4, tag_cardinality=50, seed=3)  # ~2% selectivity
    simple_query(s, "DROP INDEX IF EXISTS hy_idx")
    simple_query(s, "CREATE INDEX hy_idx ON hy USING HNSW (v vector_l2_ops)")

    _, rows, err, _ = simple_query(s,
        "SELECT hnsw_hybrid_explain('hy', 'hy_idx', '[0,0,0,0]', 5, 'tag=t0')")
    assert err is None, f"explain failed: {err}"
    text = rows[0][0]
    assert "strategy=pre" in text, f"low-selectivity should pick pre, got: {text}"


# ─── 3. High-selectivity filter → post-filter strategy ───
def test_explain_post_strategy():
    s = conn()
    setup_tagged_table(s, 200, 4, tag_cardinality=2, seed=4)  # ~50% each tag
    simple_query(s, "DROP INDEX IF EXISTS hy_idx")
    simple_query(s, "CREATE INDEX hy_idx ON hy USING HNSW (v vector_l2_ops)")

    _, rows, _, _ = simple_query(s,
        "SELECT hnsw_hybrid_explain('hy', 'hy_idx', '[0,0,0,0]', 5, 'tag=t0')")
    text = rows[0][0]
    assert "strategy=post" in text, f"high-selectivity should pick post, got: {text}"


# ─── 4. Forced pre-filter ───
def test_forced_pre_mode():
    s = conn()
    setup_tagged_table(s, 100, 4, tag_cardinality=2, seed=5)
    simple_query(s, "DROP INDEX IF EXISTS hy_idx")
    simple_query(s, "CREATE INDEX hy_idx ON hy USING HNSW (v vector_l2_ops)")

    _, rows, _, _ = simple_query(s,
        "SELECT hnsw_hybrid_explain('hy', 'hy_idx', '[0,0,0,0]', 5, 'tag=t0:pre')")
    assert "strategy=pre" in rows[0][0], f"force-pre: {rows[0][0]}"


# ─── 5. Forced post-filter on low-selectivity (auto would choose pre) ───
def test_forced_post_mode():
    s = conn()
    setup_tagged_table(s, 200, 4, tag_cardinality=50, seed=6)
    simple_query(s, "DROP INDEX IF EXISTS hy_idx")
    simple_query(s, "CREATE INDEX hy_idx ON hy USING HNSW (v vector_l2_ops)")

    _, rows, _, _ = simple_query(s,
        "SELECT hnsw_hybrid_explain('hy', 'hy_idx', '[0,0,0,0]', 5, 'tag=t0:post')")
    assert "strategy=post" in rows[0][0], f"force-post: {rows[0][0]}"


# ─── 6. pre vs post return the same top-k (within recall equivalence) ───
def test_strategies_equivalent_topk():
    s = conn()
    vecs = setup_tagged_table(s, 150, 4, tag_cardinality=3, seed=7)
    simple_query(s, "DROP INDEX IF EXISTS hy_idx")
    simple_query(s, "CREATE INDEX hy_idx ON hy USING HNSW (v vector_l2_ops)")

    _, r_pre, _, _  = simple_query(s,
        "SELECT hnsw_filter_knn('hy', 'hy_idx', '[0,0,0,0]', 5, 'tag=t0:pre')")
    _, r_post, _, _ = simple_query(s,
        "SELECT hnsw_filter_knn('hy', 'hy_idx', '[0,0,0,0]', 5, 'tag=t0:post')")
    pre_ids  = parse_pk_list(r_pre[0][0])
    post_ids = parse_pk_list(r_post[0][0])

    # v1 uses brute force both strategies — full overlap expected.
    assert set(pre_ids) == set(post_ids), \
        f"pre {pre_ids} vs post {post_ids} mismatch"


# ─── 7. Empty filter returns plain KNN ───
def test_empty_filter_degrades_to_knn():
    s = conn()
    setup_tagged_table(s, 20, 4, tag_cardinality=3, seed=8)
    simple_query(s, "DROP INDEX IF EXISTS hy_idx")
    simple_query(s, "CREATE INDEX hy_idx ON hy USING HNSW (v vector_l2_ops)")

    _, rows, _, _ = simple_query(s,
        "SELECT hnsw_filter_knn('hy', 'hy_idx', '[0,0,0,0]', 5, '')")
    ids = parse_pk_list(rows[0][0])
    assert len(ids) == 5, f"empty filter should return top-k, got {ids}"


# ─── 8. Unknown filter column → NULL ───
def test_unknown_filter_col_null():
    s = conn()
    setup_tagged_table(s, 10, 4, tag_cardinality=3, seed=9)
    simple_query(s, "DROP INDEX IF EXISTS hy_idx")
    simple_query(s, "CREATE INDEX hy_idx ON hy USING HNSW (v vector_l2_ops)")

    _, rows, _, _ = simple_query(s,
        "SELECT hnsw_filter_knn('hy', 'hy_idx', '[0,0,0,0]', 5, 'nonexistent=foo')")
    assert rows[0][0] is None, \
        f"unknown filter column → want NULL, got {rows[0][0]}"


# ─── 9. No-match filter returns fewer than k hits ───
def test_no_match_filter():
    s = conn()
    setup_tagged_table(s, 30, 4, tag_cardinality=3, seed=10)
    simple_query(s, "DROP INDEX IF EXISTS hy_idx")
    simple_query(s, "CREATE INDEX hy_idx ON hy USING HNSW (v vector_l2_ops)")

    _, rows, _, _ = simple_query(s,
        "SELECT hnsw_filter_knn('hy', 'hy_idx', '[0,0,0,0]', 10, 'tag=zzz')")
    ids = parse_pk_list(rows[0][0])
    assert len(ids) == 0, f"no-match filter should return empty, got {ids}"


# ─── 10. Correctness vs brute-force ground truth ───
def test_vs_brute_force():
    s = conn()
    vecs = setup_tagged_table(s, 100, 8, tag_cardinality=4, seed=11)
    simple_query(s, "DROP INDEX IF EXISTS hy_idx")
    simple_query(s, "CREATE INDEX hy_idx ON hy USING HNSW (v vector_l2_ops)")

    query = [0.1] * 8
    q_text = "[" + ",".join(str(x) for x in query) + "]"
    _, rows, _, _ = simple_query(s,
        f"SELECT hnsw_filter_knn('hy', 'hy_idx', '{q_text}', 5, 'tag=t1')")
    ids = set(parse_pk_list(rows[0][0]))

    # Brute force: filter tag=t1, rank by L2, take top 5
    brute = sorted(
        [(k, v) for k, (tag, v) in vecs.items() if tag == "t1"],
        key=lambda kv: l2(kv[1], query))
    brute_ids = set(str(k) for k, _ in brute[:5])
    overlap = len(ids & brute_ids)
    assert overlap >= 4, f"hybrid top-5 {ids} vs brute {brute_ids} (overlap {overlap})"


if __name__ == "__main__":
    print("=== test_hybrid_search.py (Task 203) ===\n")
    run("Filter returns tag-matched PKs",         test_filter_basic)
    run("Auto: low-selectivity → pre-filter",     test_explain_auto_picks_strategy)
    run("Auto: high-selectivity → post-filter",   test_explain_post_strategy)
    run("Forced :pre mode",                       test_forced_pre_mode)
    run("Forced :post mode",                      test_forced_post_mode)
    run("pre / post produce same top-k",          test_strategies_equivalent_topk)
    run("Empty filter → plain KNN",               test_empty_filter_degrades_to_knn)
    run("Unknown filter column → NULL",           test_unknown_filter_col_null)
    run("No-match filter → empty list",           test_no_match_filter)
    run("Correctness vs brute force",             test_vs_brute_force)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
