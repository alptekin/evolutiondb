"""
tests/test_hnsw_orderby.py — ORDER BY <col> <=> 'vec' ANN fast path.

The SQL form `SELECT ... FROM t ORDER BY <col> <=> '[…]' [ASC] LIMIT k`
now consults a READY HNSW index ('A') on <col> when one exists: it probes
the graph for the k nearest primary keys and hydrates only those rows,
skipping both the full table scan and the brute-force cosine sort. Any
query shape the fast path does not cover — DESC, a WHERE/RLS predicate,
OFFSET, JOINs, extra ORDER BY keys, DISTINCT, no LIMIT, LIMIT > 256,
streaming — falls through to the existing brute-force path, which stays
correct. A missing/empty graph (e.g. after a restart, since HNSW graphs
are in-memory and rebuilt only at CREATE INDEX) also falls back, so the
answer is always correct; HNSW only adds speed.

Coverage: 5 normal (exact correctness, LIMIT, recall in the graph-traversal
regime, no-projection, fast-path-is-active) + edge (empty table, LIMIT >
table, LIMIT > 256, b64i8 literal) + fallback/error (DESC, WHERE, no index,
malformed literal).
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

try:  # b64i8 codec lives with the MCP server; the literal test skips if absent
    from mcp_server_evosql.embeddings import encode_vec, decode_vec
    _HAVE_B64 = True
except Exception:  # pragma: no cover
    _HAVE_B64 = False


# --------------------------------------------------------------------------
def cos_dist(a, b):
    if not a or not b or len(a) != len(b):
        return 1.0
    dot = sum(x * y for x, y in zip(a, b))
    na = math.sqrt(sum(x * x for x in a)) or 1.0
    nb = math.sqrt(sum(x * x for x in b)) or 1.0
    return 1.0 - dot / (na * nb)


def vlit(v):
    return "[" + ",".join(f"{x:.6f}" for x in v) + "]"


def run(s, sql, expect_ok=True):
    cols, rows, err, tag = simple_query(s, sql)
    if expect_ok and err:
        raise RuntimeError(f"SQL error for {sql[:160]!r}: {err}")
    return cols, rows, err, tag


def make_table(s, name, dim, n, seed, extra_rows=None):
    """Create `name`(id INT PK, v VECTOR(dim)), insert n random rows, return
    {id: vector}. extra_rows = list of (id, vector) appended verbatim."""
    run(s, f"DROP TABLE IF EXISTS {name}", expect_ok=False)
    run(s, f"CREATE TABLE {name} (id INT PRIMARY KEY, v VECTOR({dim}))")
    rng = random.Random(seed)
    vecs = {}
    pending = []

    def flush():
        if pending:
            run(s, f"INSERT INTO {name} VALUES " + ",".join(pending))
            pending.clear()

    rows = [(i, [round(rng.uniform(-1, 1), 6) for _ in range(dim)])
            for i in range(1, n + 1)]
    if extra_rows:
        rows += list(extra_rows)
    for rid, v in rows:
        vecs[rid] = v
        pending.append(f"({rid}, '{vlit(v)}')")
        if len(pending) >= 24:                 # keep each INSERT under 8 KB
            flush()
    flush()
    return vecs


def create_hnsw(s, name, idx, col="v"):
    run(s, f"CREATE INDEX {idx} ON {name} USING HNSW ({col} vector_cosine_ops) "
           f"WITH (m=16, ef_construction=200)")


def server_ids(s, sql):
    _, rows, err, _ = run(s, sql)
    return [int(r[0]) for r in rows]


def py_topk(vecs, q, k, where=None, desc=False):
    items = [(cos_dist(v, q), rid) for rid, v in vecs.items()
             if where is None or where(rid)]
    items.sort(key=lambda x: (x[0], x[1]), reverse=desc)
    return [rid for _, rid in items[:k]]


# --------------------------------------------------------------------------
def t_exact_small(s):
    """Small table (< graph-traversal threshold ⇒ HNSW exact): ORDER BY top-k
    matches Python brute force row-for-row."""
    dim = 8
    vecs = make_table(s, "hob_a", dim, 40, seed=1)
    create_hnsw(s, "hob_a", "hob_a_idx")
    q = [1.0] + [0.0] * (dim - 1)
    got = server_ids(s, f"SELECT id, v FROM hob_a ORDER BY v <=> '{vlit(q)}' LIMIT 5")
    exp = py_topk(vecs, q, 5)
    assert got == exp, f"exact top-5 mismatch: got={got} exp={exp}"
    run(s, "DROP TABLE IF EXISTS hob_a", expect_ok=False)


def t_no_projection(s):
    """The fast path derives distance from the index, so the vector column
    need not be projected: `SELECT id ... ORDER BY v <=> q` still works."""
    dim = 8
    vecs = make_table(s, "hob_np", dim, 40, seed=2)
    create_hnsw(s, "hob_np", "hob_np_idx")
    q = [0.0, 1.0] + [0.0] * (dim - 2)
    got = server_ids(s, f"SELECT id FROM hob_np ORDER BY v <=> '{vlit(q)}' LIMIT 5")
    exp = py_topk(vecs, q, 5)
    assert got == exp, f"no-projection top-5 mismatch: got={got} exp={exp}"
    run(s, "DROP TABLE IF EXISTS hob_np", expect_ok=False)


def t_select_star(s):
    """`SELECT *` with a vector ORDER BY must buffer + rank, not stream the
    rows unsorted (regression guard for the can_stream_results fix)."""
    dim = 8
    vecs = make_table(s, "hob_star", dim, 20, seed=21)
    create_hnsw(s, "hob_star", "hob_star_idx")
    q = [1.0] + [0.0] * (dim - 1)
    got = server_ids(s, f"SELECT * FROM hob_star ORDER BY v <=> '{vlit(q)}' LIMIT 5")
    exp = py_topk(vecs, q, 5)
    assert got == exp, f"SELECT * vector ORDER BY mismatch (streaming?): got={got} exp={exp}"
    run(s, "DROP TABLE IF EXISTS hob_star", expect_ok=False)


def t_limit_respected(s):
    """LIMIT k returns exactly k rows (k <= table size)."""
    dim = 8
    make_table(s, "hob_lim", dim, 40, seed=3)
    create_hnsw(s, "hob_lim", "hob_lim_idx")
    q = vlit([1.0] + [0.0] * (dim - 1))
    for k in (1, 3, 7):
        got = server_ids(s, f"SELECT id, v FROM hob_lim ORDER BY v <=> '{q}' LIMIT {k}")
        assert len(got) == k, f"LIMIT {k} returned {len(got)} rows"
    run(s, "DROP TABLE IF EXISTS hob_lim", expect_ok=False)


def t_fastpath_is_active(s):
    """The HNSW graph is a point-in-time snapshot taken at CREATE INDEX.
    A row inserted AFTER the build is not in the graph, so the fast path
    cannot return it — even though it is the exact nearest. That proves the
    query went through HNSW and not the brute-force scan. After DROP INDEX
    the same query brute-forces and DOES return the new row (fallback + the
    new row is genuinely nearest)."""
    dim = 8
    q = [1.0] + [0.0] * (dim - 1)
    make_table(s, "hob_act", dim, 40, seed=4)
    create_hnsw(s, "hob_act", "hob_act_idx")
    # New row equal to the query ⇒ cosine distance 0 ⇒ unambiguous nearest.
    run(s, f"INSERT INTO hob_act VALUES (999, '{vlit(q)}')")
    top1_idx = server_ids(s, f"SELECT id, v FROM hob_act ORDER BY v <=> '{vlit(q)}' LIMIT 1")
    assert top1_idx and top1_idx[0] != 999, \
        f"expected HNSW (graph snapshot) to miss post-build row 999, got {top1_idx}"
    # Drop the index ⇒ brute-force fallback ⇒ the true nearest (999) wins.
    run(s, "DROP INDEX hob_act_idx")
    top1_bf = server_ids(s, f"SELECT id, v FROM hob_act ORDER BY v <=> '{vlit(q)}' LIMIT 1")
    assert top1_bf == [999], f"brute-force fallback should return 999, got {top1_bf}"
    run(s, "DROP TABLE IF EXISTS hob_act", expect_ok=False)


def t_recall_graph_regime(s):
    """Above the brute-force threshold the index walks the graph (approximate).
    ORDER BY recall@10 must stay high vs exact cosine ranking."""
    dim = 16
    n, qn, k = 600, 15, 10
    vecs = make_table(s, "hob_rec", dim, n, seed=5)
    create_hnsw(s, "hob_rec", "hob_rec_idx")
    rng = random.Random(7)
    total = 0.0
    for _ in range(qn):
        q = [round(rng.uniform(-1, 1), 6) for _ in range(dim)]
        got = set(server_ids(s, f"SELECT id, v FROM hob_rec ORDER BY v <=> '{vlit(q)}' LIMIT {k}"))
        truth = set(py_topk(vecs, q, k))
        total += len(got & truth) / float(k)
    mean = total / qn
    print(f"    graph-regime recall@{k} = {mean:.3f} (n={n}, dim={dim})")
    assert mean >= 0.80, f"recall gate not met: {mean:.3f} < 0.80"
    run(s, "DROP TABLE IF EXISTS hob_rec", expect_ok=False)


def t_desc_falls_back(s):
    """DESC asks for the FARTHEST rows; a nearest-neighbour graph cannot serve
    that, so DESC falls back to brute force. A far row inserted after the build
    must therefore appear (and rank first) under DESC."""
    dim = 8
    q = [1.0] + [0.0] * (dim - 1)
    far = [-1.0] + [0.0] * (dim - 1)          # cosine distance ~2 (the farthest)
    make_table(s, "hob_desc", dim, 40, seed=6)
    create_hnsw(s, "hob_desc", "hob_desc_idx")
    run(s, f"INSERT INTO hob_desc VALUES (999, '{vlit(far)}')")
    got = server_ids(s, f"SELECT id, v FROM hob_desc ORDER BY v <=> '{vlit(q)}' DESC LIMIT 1")
    assert got == [999], f"DESC should brute-force and return farthest 999, got {got}"
    run(s, "DROP TABLE IF EXISTS hob_desc", expect_ok=False)


def t_where_falls_back(s):
    """A WHERE predicate forces the brute-force path so the filter is honoured.
    Result must equal Python's filtered+sorted top-k."""
    dim = 8
    vecs = make_table(s, "hob_w", dim, 40, seed=8)
    create_hnsw(s, "hob_w", "hob_w_idx")
    q = [1.0] + [0.0] * (dim - 1)
    got = server_ids(s, f"SELECT id, v FROM hob_w WHERE id > 20 ORDER BY v <=> '{vlit(q)}' LIMIT 3")
    exp = py_topk(vecs, q, 3, where=lambda rid: rid > 20)
    assert got == exp, f"WHERE+ORDER BY mismatch: got={got} exp={exp}"
    run(s, "DROP TABLE IF EXISTS hob_w", expect_ok=False)


def t_no_index_falls_back(s):
    """No HNSW index ⇒ brute force; result still correct."""
    dim = 8
    vecs = make_table(s, "hob_ni", dim, 30, seed=9)   # no CREATE INDEX
    q = [0.0, 0.0, 1.0] + [0.0] * (dim - 3)
    got = server_ids(s, f"SELECT id, v FROM hob_ni ORDER BY v <=> '{vlit(q)}' LIMIT 5")
    exp = py_topk(vecs, q, 5)
    assert got == exp, f"no-index brute-force mismatch: got={got} exp={exp}"
    run(s, "DROP TABLE IF EXISTS hob_ni", expect_ok=False)


def t_limit_gt_256_falls_back(s):
    """LIMIT > 256 exceeds the fast path's hit cap ⇒ brute force ⇒ all rows
    returned in correct order."""
    dim = 8
    vecs = make_table(s, "hob_big", dim, 30, seed=10)
    create_hnsw(s, "hob_big", "hob_big_idx")
    q = [1.0] + [0.0] * (dim - 1)
    got = server_ids(s, f"SELECT id, v FROM hob_big ORDER BY v <=> '{vlit(q)}' LIMIT 300")
    exp = py_topk(vecs, q, 300)               # only 30 rows exist
    assert len(got) == 30, f"LIMIT 300 on 30 rows returned {len(got)}"
    assert got == exp, f"LIMIT>256 order mismatch: got={got} exp={exp}"
    run(s, "DROP TABLE IF EXISTS hob_big", expect_ok=False)


def t_limit_larger_than_table(s):
    """LIMIT bigger than the indexed set returns every row, no crash."""
    dim = 8
    vecs = make_table(s, "hob_few", dim, 4, seed=11)
    create_hnsw(s, "hob_few", "hob_few_idx")
    q = [1.0] + [0.0] * (dim - 1)
    got = server_ids(s, f"SELECT id, v FROM hob_few ORDER BY v <=> '{vlit(q)}' LIMIT 10")
    exp = py_topk(vecs, q, 10)
    assert got == exp and len(got) == 4, f"LIMIT>table mismatch: got={got} exp={exp}"
    run(s, "DROP TABLE IF EXISTS hob_few", expect_ok=False)


def t_empty_table(s):
    """Indexed but empty table ⇒ empty result, no error/crash."""
    dim = 8
    run(s, "DROP TABLE IF EXISTS hob_empty", expect_ok=False)
    run(s, f"CREATE TABLE hob_empty (id INT PRIMARY KEY, v VECTOR({dim}))")
    create_hnsw(s, "hob_empty", "hob_empty_idx")
    q = vlit([1.0] + [0.0] * (dim - 1))
    _, rows, err, _ = run(s, f"SELECT id, v FROM hob_empty ORDER BY v <=> '{q}' LIMIT 5")
    assert err is None and len(rows) == 0, f"empty table: err={err} rows={len(rows)}"
    run(s, "DROP TABLE IF EXISTS hob_empty", expect_ok=False)


def t_b64i8_literal(s):
    """Compact 'b64i8:…' query literal is parsed by the fast path too."""
    if not _HAVE_B64:
        print("    (skipped — mcp_server_evosql.embeddings unavailable)")
        return
    dim = 64
    run(s, "DROP TABLE IF EXISTS hob_b64", expect_ok=False)
    run(s, f"CREATE TABLE hob_b64 (id INT PRIMARY KEY, v VECTOR({dim}))")
    rng = random.Random(13)
    stored = {}
    pending = []
    for i in range(1, 41):
        v = [rng.gauss(0, 1) for _ in range(dim)]
        stored[i] = decode_vec(encode_vec(v))      # engine-side reconstruction
        pending.append(f"({i}, '{encode_vec(v)}')")
        if len(pending) >= 8:
            run(s, "INSERT INTO hob_b64 VALUES " + ",".join(pending)); pending.clear()
    if pending:
        run(s, "INSERT INTO hob_b64 VALUES " + ",".join(pending))
    create_hnsw(s, "hob_b64", "hob_b64_idx")
    qv = [rng.gauss(0, 1) for _ in range(dim)]
    qlit = encode_vec(qv)
    assert qlit.startswith("b64i8:"), qlit
    got = set(server_ids(s, f"SELECT id, v FROM hob_b64 ORDER BY v <=> '{qlit}' LIMIT 5"))
    truth = set(py_topk(stored, decode_vec(qlit), 5))
    overlap = len(got & truth)
    assert len(got) == 5 and overlap >= 4, \
        f"b64i8 top-5 weak: got={got} truth={truth} overlap={overlap}"
    run(s, "DROP TABLE IF EXISTS hob_b64", expect_ok=False)


def t_malformed_literal(s):
    """A malformed vector literal makes hnsw_search_knn fail ⇒ brute-force
    fallback; the query must not crash the server. (Brute force also rejects
    the bad literal, so it returns rows in scan order without error.)"""
    dim = 8
    make_table(s, "hob_bad", dim, 10, seed=15)
    create_hnsw(s, "hob_bad", "hob_bad_idx")
    _, rows, err, _ = run(s, "SELECT id, v FROM hob_bad ORDER BY v <=> '[1,2,' LIMIT 3",
                          expect_ok=False)
    # Either a clean parse error or a graceful (unsorted) result — never a crash.
    # Re-run a valid query on the SAME connection to prove the server survived.
    ok = server_ids(s, f"SELECT id, v FROM hob_bad ORDER BY v <=> '{vlit([1.0]+[0.0]*(dim-1))}' LIMIT 3")
    assert len(ok) == 3, f"server unhealthy after malformed literal: {ok}"
    run(s, "DROP TABLE IF EXISTS hob_bad", expect_ok=False)


TESTS = [
    ("exact_small",            t_exact_small),
    ("no_projection",          t_no_projection),
    ("select_star",            t_select_star),
    ("limit_respected",        t_limit_respected),
    ("fastpath_is_active",     t_fastpath_is_active),
    ("recall_graph_regime",    t_recall_graph_regime),
    ("desc_falls_back",        t_desc_falls_back),
    ("where_falls_back",       t_where_falls_back),
    ("no_index_falls_back",    t_no_index_falls_back),
    ("limit_gt_256_falls_back", t_limit_gt_256_falls_back),
    ("limit_larger_than_table", t_limit_larger_than_table),
    ("empty_table",            t_empty_table),
    ("b64i8_literal",          t_b64i8_literal),
    ("malformed_literal",      t_malformed_literal),
]


def main():
    s = conn()
    passed = 0
    for name, fn in TESTS:
        fn(s)
        print(f"  ok  {name}")
        passed += 1
    print(f"\nOK — {passed}/{len(TESTS)} ORDER BY <=> HNSW fast-path tests passed")
    s.close()


if __name__ == "__main__":
    main()
