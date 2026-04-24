"""
test_vector_ops.py — Task 201 (Feature #201) tests.

Covers pgvector-compatible distance operators and functions:
  - cosine_distance(a, b)  — `<=>` (falls back to null-safe eq for non-vectors)
  - l2_distance(a, b)      — `<->`
  - inner_product(a, b)    — `<#>` (returns negative dot product)
  - l1_distance(a, b)
  - vector_dim(v)
  - vector_norm(v)
  - vector_normalize(v)

Requires running server (docker compose up -d).
"""

import math
import os
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


def scalar(s, sql):
    _, rows, err, _ = simple_query(s, sql)
    if err:
        raise AssertionError(f"SQL error: {err}")
    assert rows and len(rows[0]) >= 1, f"no result for: {sql}"
    return rows[0][0]


def approx(x, y, tol=1e-5):
    if x is None or y is None:
        return False
    return abs(float(x) - float(y)) <= tol


# ─── 1. cosine_distance — identical vectors = 0 ───
def test_cosine_identical():
    s = conn()
    v = scalar(s, "SELECT cosine_distance('[1,0,0]', '[1,0,0]')")
    assert approx(v, 0.0), f"cosine(identical) = {v}, want 0"


# ─── 2. cosine_distance — orthogonal = 1 ───
def test_cosine_orthogonal():
    s = conn()
    v = scalar(s, "SELECT cosine_distance('[1,0]', '[0,1]')")
    assert approx(v, 1.0), f"cosine(orthogonal) = {v}, want 1"


# ─── 3. cosine_distance — opposite = 2 ───
def test_cosine_opposite():
    s = conn()
    v = scalar(s, "SELECT cosine_distance('[1,0]', '[-1,0]')")
    assert approx(v, 2.0), f"cosine(opposite) = {v}, want 2"


# ─── 4. l2_distance — known Pythagorean ───
def test_l2_pythagorean():
    s = conn()
    v = scalar(s, "SELECT l2_distance('[0,0]', '[3,4]')")
    assert approx(v, 5.0), f"l2(0,0 → 3,4) = {v}, want 5"


# ─── 5. inner_product — pgvector convention is negative dot ───
def test_inner_negative_dot():
    s = conn()
    v = scalar(s, "SELECT inner_product('[1,2,3]', '[4,5,6]')")
    # dot = 1*4 + 2*5 + 3*6 = 32; pgvector returns -32
    assert approx(v, -32.0), f"inner_product = {v}, want -32"


# ─── 6. l1_distance — sum of |diffs| ───
def test_l1_distance():
    s = conn()
    v = scalar(s, "SELECT l1_distance('[1,2,3]', '[4,6,8]')")
    # |3| + |4| + |5| = 12
    assert approx(v, 12.0), f"l1 = {v}, want 12"


# ─── 7. Operator `<->` = l2_distance ───
def test_l2_operator():
    s = conn()
    v = scalar(s, "SELECT '[0,0]' <-> '[3,4]'")
    assert approx(v, 5.0), f"<-> = {v}, want 5"


# ─── 8. Operator `<#>` = inner_product ───
def test_inner_operator():
    s = conn()
    v = scalar(s, "SELECT '[1,2,3]' <#> '[4,5,6]'")
    assert approx(v, -32.0), f"<#> = {v}, want -32"


# ─── 9. Operator `<=>` on vectors = cosine_distance ───
def test_cosine_operator_on_vectors():
    s = conn()
    v = scalar(s, "SELECT '[1,0,0]' <=> '[0,1,0]'")
    assert approx(v, 1.0), f"<=> on vectors = {v}, want 1 (orthogonal cosine)"


# ─── 10. `<=>` on scalars still null-safe eq (regression) ───
def test_nullsafe_eq_regression():
    s = conn()
    # Existing cast_nullif_istrue test just asserts non-null; we mirror it
    v = scalar(s, "SELECT 1 <=> 1")
    # For scalar operands, <=> returns "t" / "f" (null-safe eq string)
    assert v is not None, f"1 <=> 1 returned null"


# ─── 11. Dimension mismatch → NULL result ───
def test_dim_mismatch_null():
    s = conn()
    _, rows, err, _ = simple_query(s,
        "SELECT l2_distance('[1,2,3]', '[1,2]')")
    # Expect NULL result (not an SQL error — runtime graceful degradation)
    assert err is None, f"should not be a parse error: {err}"
    assert rows[0][0] is None, f"dim-mismatch l2 = {rows[0][0]}, want NULL"


# ─── 12. NULL propagation ───
def test_null_propagation():
    s = conn()
    _, rows, _, _ = simple_query(s,
        "SELECT l2_distance(NULL, '[1,2,3]')")
    assert rows[0][0] is None, f"NULL input → {rows[0][0]}, want NULL"


# ─── 13. vector_dim ───
def test_vector_dim():
    s = conn()
    v = scalar(s, "SELECT vector_dim('[1,2,3,4,5]')")
    assert int(v) == 5, f"vector_dim = {v}, want 5"


# ─── 14. vector_norm ───
def test_vector_norm():
    s = conn()
    v = scalar(s, "SELECT vector_norm('[3,4]')")
    assert approx(v, 5.0), f"norm([3,4]) = {v}, want 5"


# ─── 15. vector_normalize ───
def test_vector_normalize():
    s = conn()
    v = scalar(s, "SELECT vector_normalize('[3,4]')")
    # Should produce [0.6, 0.8] (within float precision)
    assert v.startswith("[") and v.endswith("]"), f"not bracket form: {v}"
    parts = [float(x) for x in v[1:-1].split(",")]
    assert approx(parts[0], 0.6) and approx(parts[1], 0.8), \
        f"normalize([3,4]) = {v}"


# ─── 16. Distance in SELECT projection (client-side ANN ranking) ───
def test_distance_in_select():
    """ORDER BY <expr> grammar is deferred to Task 202/203 (HNSW planner).
    Verify here that per-row distance projection works — client-side sort
    produces the same k-nearest ranking a future HNSW scan would return."""
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS emb")
    simple_query(s, "CREATE TABLE emb (id INT PRIMARY KEY, v VECTOR(2))")
    simple_query(s, "INSERT INTO emb VALUES (1, '[1,0]')")
    simple_query(s, "INSERT INTO emb VALUES (2, '[0,1]')")
    simple_query(s, "INSERT INTO emb VALUES (3, '[0.9,0.1]')")
    simple_query(s, "INSERT INTO emb VALUES (4, '[-1,0]')")
    _, rows, err, _ = simple_query(s,
        "SELECT id, l2_distance(v, '[1,0]') FROM emb")
    assert err is None, f"projection failed: {err}"
    # Sort client-side, pick top-2
    ranked = sorted(rows, key=lambda r: float(r[1]))
    got = [int(r[0]) for r in ranked[:2]]
    assert got == [1, 3], f"nearest-2 by L2 = {got}, want [1,3]"


# ─── 17. vector columns as operands ───
def test_column_operands():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vq")
    simple_query(s, "CREATE TABLE vq (id INT PRIMARY KEY, v VECTOR(2))")
    simple_query(s, "INSERT INTO vq VALUES (1, '[3,4]')")
    _, rows, err, _ = simple_query(s,
        "SELECT l2_distance(v, '[0,0]') FROM vq WHERE id=1")
    assert err is None, f"column l2 failed: {err}"
    assert approx(rows[0][0], 5.0), f"column l2 = {rows[0][0]}, want 5"


if __name__ == "__main__":
    print("=== test_vector_ops.py (Task 201) ===\n")
    run("cosine_distance — identical = 0",     test_cosine_identical)
    run("cosine_distance — orthogonal = 1",    test_cosine_orthogonal)
    run("cosine_distance — opposite = 2",      test_cosine_opposite)
    run("l2_distance — Pythagorean 3-4-5",     test_l2_pythagorean)
    run("inner_product — negative dot",        test_inner_negative_dot)
    run("l1_distance — sum of |diffs|",        test_l1_distance)
    run("`<->` operator = l2_distance",        test_l2_operator)
    run("`<#>` operator = inner_product",      test_inner_operator)
    run("`<=>` on vectors = cosine_distance",  test_cosine_operator_on_vectors)
    run("`<=>` scalar null-safe eq preserved", test_nullsafe_eq_regression)
    run("dim mismatch → NULL",                 test_dim_mismatch_null)
    run("NULL propagation",                    test_null_propagation)
    run("vector_dim",                          test_vector_dim)
    run("vector_norm",                         test_vector_norm)
    run("vector_normalize",                    test_vector_normalize)
    run("Distance in SELECT (client-side ANN)", test_distance_in_select)
    run("column operands",                     test_column_operands)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
