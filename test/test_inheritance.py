"""
test_inheritance.py — Task 92 (Feature #63): Table Inheritance.

Covers single-parent INHERITS, column merge, SELECT union of parent +
descendants, ONLY suppression, two-level chain, multi-child fan-out,
INSERT constraints, DROP CASCADE, pg_inherits catalog view.
"""
import sys
sys.path.insert(0, ".")
from pg_helpers import conn, simple_query


def _result(s, sql):
    cols, rows, err, tag = simple_query(s, sql)
    if err:
        raise AssertionError(f"{sql!r} failed: {err!r}")
    return cols, rows, tag


def _exec(s, sql):
    _result(s, sql)


def _vals(s, sql):
    _, rows, _ = _result(s, sql)
    return rows


def _err(s, sql):
    cols, rows, err, tag = simple_query(s, sql)
    return err


def reset(s, *names):
    for n in names:
        # CASCADE to unhook any surviving inheritance links
        simple_query(s, f"DROP TABLE IF EXISTS {n} CASCADE")


# ------------------------------------------------------------------ tests ---

def test_create_inherit_basic(s):
    reset(s, "child_a", "parent_a")
    _exec(s, "CREATE TABLE parent_a (id INT PRIMARY KEY, name VARCHAR(64))")
    _exec(s, "CREATE TABLE child_a (extra VARCHAR(32)) INHERITS (parent_a)")
    # Child has all parent cols + its own
    cols, rows, _ = _result(s, "SELECT * FROM child_a")
    assert set(cols) >= {"id", "name", "extra"}, f"got {cols}"


def test_insert_child_select_parent(s):
    reset(s, "children_b", "parent_b")
    _exec(s, "CREATE TABLE parent_b (id INT PRIMARY KEY, name VARCHAR(64))")
    _exec(s, "CREATE TABLE children_b (breed VARCHAR(32)) INHERITS (parent_b)")
    _exec(s, "INSERT INTO parent_b VALUES (1, 'p1')")
    _exec(s, "INSERT INTO children_b VALUES (2, 'c2', 'lab')")
    rows = _vals(s, "SELECT id, name FROM parent_b ORDER BY id")
    assert rows == [["1", "p1"], ["2", "c2"]], f"got {rows}"


def test_only_suppresses_children(s):
    reset(s, "children_c", "parent_c")
    _exec(s, "CREATE TABLE parent_c (id INT PRIMARY KEY, name VARCHAR(64))")
    _exec(s, "CREATE TABLE children_c (extra VARCHAR(32)) INHERITS (parent_c)")
    _exec(s, "INSERT INTO parent_c VALUES (1, 'p1')")
    _exec(s, "INSERT INTO children_c VALUES (2, 'c2', 'x')")
    rows = _vals(s, "SELECT id, name FROM ONLY parent_c ORDER BY id")
    assert rows == [["1", "p1"]], f"got {rows}"


def test_child_select_shows_own_columns(s):
    reset(s, "children_d", "parent_d")
    _exec(s, "CREATE TABLE parent_d (id INT PRIMARY KEY, name VARCHAR(64))")
    _exec(s, "CREATE TABLE children_d (extra VARCHAR(32)) INHERITS (parent_d)")
    _exec(s, "INSERT INTO children_d VALUES (1, 'c1', 'info')")
    rows = _vals(s, "SELECT id, name, extra FROM children_d")
    assert rows == [["1", "c1", "info"]], f"got {rows}"


def test_multi_children(s):
    reset(s, "cat_e", "dog_e", "parent_e")
    _exec(s, "CREATE TABLE parent_e (id INT PRIMARY KEY, name VARCHAR(64))")
    _exec(s, "CREATE TABLE cat_e (color VARCHAR(32)) INHERITS (parent_e)")
    _exec(s, "CREATE TABLE dog_e (breed VARCHAR(32)) INHERITS (parent_e)")
    _exec(s, "INSERT INTO parent_e VALUES (1, 'p1')")
    _exec(s, "INSERT INTO cat_e VALUES (2, 'whiskers', 'black')")
    _exec(s, "INSERT INTO dog_e VALUES (3, 'rex', 'lab')")
    rows = _vals(s, "SELECT id FROM parent_e ORDER BY id")
    assert rows == [["1"], ["2"], ["3"]], f"got {rows}"


def test_two_level_chain(s):
    reset(s, "grandchild_f", "child_f", "grand_f")
    _exec(s, "CREATE TABLE grand_f (id INT PRIMARY KEY, tag VARCHAR(32))")
    _exec(s, "CREATE TABLE child_f (middle VARCHAR(32)) INHERITS (grand_f)")
    _exec(s, "CREATE TABLE grandchild_f (leaf VARCHAR(32)) INHERITS (child_f)")
    _exec(s, "INSERT INTO grand_f VALUES (1, 'g1')")
    _exec(s, "INSERT INTO child_f VALUES (2, 'c2', 'mid')")
    _exec(s, "INSERT INTO grandchild_f VALUES (3, 'gc3', 'mx', 'lf')")
    rows = _vals(s, "SELECT id, tag FROM grand_f ORDER BY id")
    assert rows == [["1", "g1"], ["2", "c2"], ["3", "gc3"]], f"got {rows}"


def test_only_on_intermediate(s):
    reset(s, "grandchild_g", "child_g", "grand_g")
    _exec(s, "CREATE TABLE grand_g (id INT PRIMARY KEY, tag VARCHAR(32))")
    _exec(s, "CREATE TABLE child_g (mid VARCHAR(32)) INHERITS (grand_g)")
    _exec(s, "CREATE TABLE grandchild_g (leaf VARCHAR(32)) INHERITS (child_g)")
    _exec(s, "INSERT INTO child_g VALUES (1, 'c1', 'm1')")
    _exec(s, "INSERT INTO grandchild_g VALUES (2, 'gc2', 'm2', 'l2')")
    rows = _vals(s, "SELECT id FROM ONLY child_g ORDER BY id")
    assert rows == [["1"]], f"got {rows}"


def test_where_filter_parent_union(s):
    reset(s, "children_h", "parent_h")
    _exec(s, "CREATE TABLE parent_h (id INT PRIMARY KEY, name VARCHAR(64))")
    _exec(s, "CREATE TABLE children_h (extra VARCHAR(32)) INHERITS (parent_h)")
    _exec(s, "INSERT INTO parent_h VALUES (1, 'match')")
    _exec(s, "INSERT INTO parent_h VALUES (2, 'no')")
    _exec(s, "INSERT INTO children_h VALUES (3, 'match', 'x')")
    _exec(s, "INSERT INTO children_h VALUES (4, 'no', 'y')")
    rows = _vals(s, "SELECT id FROM parent_h WHERE name = 'match' ORDER BY id")
    assert rows == [["1"], ["3"]], f"got {rows}"


def test_duplicate_column_name_rejected(s):
    reset(s, "child_i", "parent_i")
    _exec(s, "CREATE TABLE parent_i (id INT PRIMARY KEY, name VARCHAR(64))")
    err = _err(s, "CREATE TABLE child_i (name VARCHAR(32)) INHERITS (parent_i)")
    assert err is not None, "expected duplicate-column error"
    s_err = err if isinstance(err, str) else err.decode("utf-8", errors="replace")
    assert "already inherited" in s_err or "42701" in s_err, f"got {err!r}"


def test_inherit_nonexistent_parent(s):
    reset(s, "child_j")
    err = _err(s, "CREATE TABLE child_j (x INT) INHERITS (no_such_parent)")
    assert err is not None, "expected parent-not-found error"
    s_err = err if isinstance(err, str) else err.decode("utf-8", errors="replace")
    assert "42P01" in s_err or "does not exist" in s_err, f"got {err!r}"


def test_drop_parent_without_cascade(s):
    reset(s, "child_k", "parent_k")
    _exec(s, "CREATE TABLE parent_k (id INT PRIMARY KEY)")
    _exec(s, "CREATE TABLE child_k (extra VARCHAR(32)) INHERITS (parent_k)")
    err = _err(s, "DROP TABLE parent_k")
    assert err is not None, "expected dependency error"
    s_err = err if isinstance(err, str) else err.decode("utf-8", errors="replace")
    assert "2BP01" in s_err or "depend" in s_err, f"got {err!r}"


def test_drop_parent_cascade(s):
    reset(s, "child_l", "parent_l")
    _exec(s, "CREATE TABLE parent_l (id INT PRIMARY KEY)")
    _exec(s, "CREATE TABLE child_l (extra VARCHAR(32)) INHERITS (parent_l)")
    _exec(s, "DROP TABLE parent_l CASCADE")
    # Both should be gone
    err1 = _err(s, "SELECT * FROM parent_l")
    err2 = _err(s, "SELECT * FROM child_l")
    assert err1 is not None and err2 is not None, \
        f"expected both tables gone after CASCADE: err1={err1!r} err2={err2!r}"


def test_drop_child_removes_inheritance(s):
    reset(s, "child_m", "parent_m")
    _exec(s, "CREATE TABLE parent_m (id INT PRIMARY KEY)")
    _exec(s, "CREATE TABLE child_m (extra VARCHAR(32)) INHERITS (parent_m)")
    _exec(s, "INSERT INTO parent_m VALUES (1)")
    _exec(s, "INSERT INTO child_m VALUES (2, 'x')")
    _exec(s, "DROP TABLE child_m")
    # Parent now behaves as a plain table; no children
    rows = _vals(s, "SELECT id FROM parent_m ORDER BY id")
    assert rows == [["1"]], f"got {rows}"
    # Parent can now be dropped without CASCADE
    _exec(s, "DROP TABLE parent_m")


def test_pg_inherits_view(s):
    reset(s, "child_n", "parent_n")
    _exec(s, "CREATE TABLE parent_n (id INT PRIMARY KEY)")
    _exec(s, "CREATE TABLE child_n (x VARCHAR(16)) INHERITS (parent_n)")
    cols, rows, _ = _result(s, "SELECT * FROM pg_catalog.pg_inherits")
    assert "inhrelid" in cols and "inhparent" in cols, f"got cols {cols}"
    # At least one row (our child_n -> parent_n) should be present
    assert len(rows) >= 1, f"no inherits rows: {rows}"


def test_insert_parent_value_not_in_child(s):
    """Parent INSERT should succeed even if a child has a CHECK that would
    reject the value — parent constraints are independent of child constraints."""
    reset(s, "child_o", "parent_o")
    _exec(s, "CREATE TABLE parent_o (id INT PRIMARY KEY, val INT)")
    _exec(s, "CREATE TABLE child_o (extra VARCHAR(8), CHECK (val > 100)) INHERITS (parent_o)")
    # Parent accepts small value
    _exec(s, "INSERT INTO parent_o VALUES (1, 5)")
    rows = _vals(s, "SELECT id FROM ONLY parent_o")
    assert rows == [["1"]], f"got {rows}"


# -------------------------------------------------------------------- main ---

def main():
    s = conn()
    tests = [
        test_create_inherit_basic,
        test_insert_child_select_parent,
        test_only_suppresses_children,
        test_child_select_shows_own_columns,
        test_multi_children,
        test_two_level_chain,
        test_only_on_intermediate,
        test_where_filter_parent_union,
        test_duplicate_column_name_rejected,
        test_inherit_nonexistent_parent,
        test_drop_parent_without_cascade,
        test_drop_parent_cascade,
        test_drop_child_removes_inheritance,
        test_pg_inherits_view,
        test_insert_parent_value_not_in_child,
    ]
    passed, failed = 0, []
    for t in tests:
        try:
            t(s)
            print(f"  PASS  {t.__name__}")
            passed += 1
        except AssertionError as e:
            print(f"  FAIL  {t.__name__}: {e}")
            failed.append(t.__name__)
        except Exception as e:
            print(f"  ERROR {t.__name__}: {e!r}")
            failed.append(t.__name__)
    print(f"\n{passed}/{len(tests)} passed")
    if failed:
        print("Failed:")
        for n in failed:
            print(f"  - {n}")
        sys.exit(1)


if __name__ == "__main__":
    main()
