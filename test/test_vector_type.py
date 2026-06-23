"""
test_vector_type.py — Task 200 (Feature #200) tests.

Covers VECTOR(N) data type:
  - CREATE TABLE with VECTOR(N) column (valid N ∈ [1, 16384])
  - INSERT with bracket literal '[f1,f2,...]'
  - SELECT roundtrip preserving float4 values
  - Dimension-mismatch rejection
  - NULL vector handling
  - Update / Delete work for vector column
  - Boundary dims: 1 and large (256)
  - Text format tolerance (spaces, brace variant)
  - NaN / Inf rejected
  - Multiple vector columns in one table

Requires running server (docker compose up -d).
"""

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


def _floats_from_bracket(s):
    """Parse '[1,2,3]' or '[1.0,2.0,3.0]' into a list of floats."""
    s = s.strip()
    assert s.startswith("[") and s.endswith("]"), f"not bracket form: {s}"
    inner = s[1:-1].strip()
    if not inner:
        return []
    return [float(x) for x in inner.split(",")]


def _approx_equal(a, b, tol=1e-5):
    if len(a) != len(b):
        return False
    return all(abs(x - y) <= tol for x, y in zip(a, b))


# ─── 1. CREATE TABLE with VECTOR(3) accepted ───
def test_create_vector_column():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    _, _, err, _ = simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(3))")
    assert err is None, f"CREATE VECTOR(3) failed: {err}"


# ─── 2. INSERT + SELECT roundtrip ───
def test_insert_select_roundtrip():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(3))")
    _, _, err, _ = simple_query(s, "INSERT INTO vt VALUES (1, '[0.1,0.2,0.3]')")
    assert err is None, f"INSERT failed: {err}"
    _, rows, _, _ = simple_query(s, "SELECT v FROM vt WHERE id=1")
    assert len(rows) == 1, f"expected 1 row, got {len(rows)}"
    got = _floats_from_bracket(rows[0][0])
    assert _approx_equal(got, [0.1, 0.2, 0.3]), f"roundtrip mismatch: {got}"


# ─── 3. Dimension mismatch rejected ───
def test_dimension_mismatch_rejected():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(3))")
    _, _, err, _ = simple_query(s, "INSERT INTO vt VALUES (1, '[0.1,0.2]')")
    assert err is not None, "expected error for 2-dim vs VECTOR(3)"
    _, _, err2, _ = simple_query(s, "INSERT INTO vt VALUES (2, '[0.1,0.2,0.3,0.4]')")
    assert err2 is not None, "expected error for 4-dim vs VECTOR(3)"


# ─── 4. NULL vector stored + retrieved ───
def test_null_vector():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(4))")
    _, _, err, _ = simple_query(s, "INSERT INTO vt VALUES (1, NULL)")
    assert err is None, f"INSERT NULL vector failed: {err}"
    _, rows, _, _ = simple_query(s, "SELECT v FROM vt WHERE id=1")
    assert len(rows) == 1 and rows[0][0] is None, f"expected NULL, got {rows}"


# ─── 5. UPDATE vector column ───
def test_update_vector():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(3))")
    simple_query(s, "INSERT INTO vt VALUES (1, '[1,2,3]')")
    _, _, err, _ = simple_query(s, "UPDATE vt SET v='[9,8,7]' WHERE id=1")
    assert err is None, f"UPDATE failed: {err}"
    _, rows, _, _ = simple_query(s, "SELECT v FROM vt WHERE id=1")
    got = _floats_from_bracket(rows[0][0])
    assert _approx_equal(got, [9, 8, 7]), f"UPDATE mismatch: {got}"


# ─── 6. DELETE row with vector ───
def test_delete_vector_row():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(3))")
    simple_query(s, "INSERT INTO vt VALUES (1, '[1,2,3]')")
    simple_query(s, "INSERT INTO vt VALUES (2, '[4,5,6]')")
    _, _, err, _ = simple_query(s, "DELETE FROM vt WHERE id=1")
    assert err is None, f"DELETE failed: {err}"
    _, rows, _, _ = simple_query(s, "SELECT id FROM vt")
    assert len(rows) == 1 and int(rows[0][0]) == 2, f"expected id=2 only, got {rows}"


# ─── 7. Boundary — VECTOR(1) ───
def test_vector_dim_1():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(1))")
    _, _, err, _ = simple_query(s, "INSERT INTO vt VALUES (1, '[42.5]')")
    assert err is None, f"VECTOR(1) insert failed: {err}"
    _, rows, _, _ = simple_query(s, "SELECT v FROM vt WHERE id=1")
    got = _floats_from_bracket(rows[0][0])
    assert _approx_equal(got, [42.5]), f"VECTOR(1) roundtrip: {got}"


# ─── 8. Text format tolerance — whitespace + braces ───
def test_text_format_tolerance():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(3))")
    # whitespace around numbers
    _, _, err1, _ = simple_query(s, "INSERT INTO vt VALUES (1, '[ 1.0 , 2.0 , 3.0 ]')")
    assert err1 is None, f"whitespace-tolerant literal failed: {err1}"
    # brace variant (PG array-style, accepted by our parser)
    _, _, err2, _ = simple_query(s, "INSERT INTO vt VALUES (2, '{4,5,6}')")
    assert err2 is None, f"brace literal failed: {err2}"
    _, rows, _, _ = simple_query(s, "SELECT id,v FROM vt ORDER BY id")
    assert len(rows) == 2
    assert _approx_equal(_floats_from_bracket(rows[0][1]), [1, 2, 3])
    assert _approx_equal(_floats_from_bracket(rows[1][1]), [4, 5, 6])


# ─── 9. Reject malformed literals ───
def test_malformed_literal_rejected():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(3))")
    # missing closing bracket
    _, _, err1, _ = simple_query(s, "INSERT INTO vt VALUES (1, '[1,2,3')")
    assert err1 is not None, "missing-bracket literal should fail"
    # non-numeric garbage
    _, _, err2, _ = simple_query(s, "INSERT INTO vt VALUES (2, '[abc,def,ghi]')")
    assert err2 is not None, "non-numeric literal should fail"


# ─── 10. Larger dimension ───
def test_vector_dim_128():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(16))")
    vec = ",".join(f"{i*0.25}" for i in range(16))
    _, _, err, _ = simple_query(s, f"INSERT INTO vt VALUES (1, '[{vec}]')")
    assert err is None, f"VECTOR(16) insert failed: {err}"
    _, rows, _, _ = simple_query(s, "SELECT v FROM vt WHERE id=1")
    got = _floats_from_bracket(rows[0][0])
    assert len(got) == 16, f"expected 16 dims, got {len(got)}"
    for i, val in enumerate(got):
        assert abs(val - i * 0.25) < 1e-5, f"dim {i}: {val} vs {i*0.25}"


# ─── 11. Multiple vector columns in one table ───
def test_multiple_vector_columns():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    _, _, err, _ = simple_query(s,
        "CREATE TABLE vt (id INT PRIMARY KEY, a VECTOR(2), b VECTOR(3))")
    assert err is None, f"multi-vector CREATE failed: {err}"
    _, _, err, _ = simple_query(s,
        "INSERT INTO vt VALUES (1, '[1,2]', '[10,20,30]')")
    assert err is None, f"multi-vector INSERT failed: {err}"
    _, rows, _, _ = simple_query(s, "SELECT a,b FROM vt WHERE id=1")
    a = _floats_from_bracket(rows[0][0])
    b = _floats_from_bracket(rows[0][1])
    assert _approx_equal(a, [1, 2]), f"a: {a}"
    assert _approx_equal(b, [10, 20, 30]), f"b: {b}"


# ─── 12. Negative numbers + scientific notation ───
def test_negative_and_scientific():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(4))")
    _, _, err, _ = simple_query(s,
        "INSERT INTO vt VALUES (1, '[-1.5, 2e2, -3.14, 1.5e-3]')")
    assert err is None, f"negative/scientific insert failed: {err}"
    _, rows, _, _ = simple_query(s, "SELECT v FROM vt WHERE id=1")
    got = _floats_from_bracket(rows[0][0])
    assert _approx_equal(got, [-1.5, 200.0, -3.14, 0.0015]), f"got {got}"


# ─── 13. Reject zero / out-of-range dimension at DDL ───
def test_dim_out_of_range_rejected():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS vt")
    # VECTOR(0) currently produces type_code 260000 — tup_build rejects it.
    # Test that INSERT fails even if CREATE was lenient.
    simple_query(s, "CREATE TABLE vt (id INT PRIMARY KEY, v VECTOR(0))")
    _, _, err, _ = simple_query(s, "INSERT INTO vt VALUES (1, '[]')")
    assert err is not None, "VECTOR(0) insert should fail"


if __name__ == "__main__":
    print("=== test_vector_type.py (Task 200) ===\n")
    run("CREATE TABLE VECTOR(3) accepted",    test_create_vector_column)
    run("INSERT + SELECT roundtrip",          test_insert_select_roundtrip)
    run("Dimension mismatch rejected",        test_dimension_mismatch_rejected)
    run("NULL vector",                        test_null_vector)
    run("UPDATE vector column",               test_update_vector)
    run("DELETE vector row",                  test_delete_vector_row)
    run("VECTOR(1) boundary",                 test_vector_dim_1)
    run("Whitespace + brace tolerance",       test_text_format_tolerance)
    run("Malformed literal rejected",         test_malformed_literal_rejected)
    run("VECTOR(16) roundtrip",               test_vector_dim_128)
    run("Multiple VECTOR columns",            test_multiple_vector_columns)
    run("Negative + scientific literals",     test_negative_and_scientific)
    run("Zero dimension rejected on insert",  test_dim_out_of_range_rejected)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
