"""
test_identity_aliases.py — Task 130

Verifies that @@IDENTITY (MSSQL), SCOPE_IDENTITY() (MSSQL) and
@@last_insert_id (MySQL) session-variable syntaxes all return the same value
as the existing LAST_INSERT_ID() function.

All three are pure aliases wired through expr_make_last_insert_id() → per-
session g_last_insert_id snapshot in query_executor.
"""

import sys
import os
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from pg_helpers import PGConnection


def _setup(c, name):
    try:
        c.query(f"DROP TABLE IF EXISTS {name}")
    except Exception:
        pass
    c.query(f"CREATE TABLE {name} (id INT AUTO_INCREMENT PRIMARY KEY, v INT)")


def _cell(rows):
    assert rows and rows[0], f"expected a non-empty row, got {rows!r}"
    return rows[0][0]


def test_at_identity_after_insert():
    c = PGConnection()
    try:
        _setup(c, "t_aid1")
        c.query("INSERT INTO t_aid1 (v) VALUES (10)")
        assert _cell(c.query("SELECT @@IDENTITY")) == "1"
        c.query("DROP TABLE t_aid1")
    finally:
        c.close()
    print("[OK] @@IDENTITY after AUTO_INCREMENT insert")


def test_scope_identity_after_insert():
    c = PGConnection()
    try:
        _setup(c, "t_aid2")
        c.query("INSERT INTO t_aid2 (v) VALUES (20)")
        assert _cell(c.query("SELECT SCOPE_IDENTITY()")) == "1"
        c.query("DROP TABLE t_aid2")
    finally:
        c.close()
    print("[OK] SCOPE_IDENTITY() after AUTO_INCREMENT insert")


def test_at_last_insert_id_after_insert():
    c = PGConnection()
    try:
        _setup(c, "t_aid3")
        c.query("INSERT INTO t_aid3 (v) VALUES (30)")
        assert _cell(c.query("SELECT @@last_insert_id")) == "1"
        c.query("DROP TABLE t_aid3")
    finally:
        c.close()
    print("[OK] @@last_insert_id after AUTO_INCREMENT insert")


def test_three_aliases_agree_in_one_query():
    c = PGConnection()
    try:
        _setup(c, "t_aid4")
        c.query("INSERT INTO t_aid4 (v) VALUES (40)")
        rows = c.query("SELECT @@IDENTITY, SCOPE_IDENTITY(), @@last_insert_id")
        assert rows and len(rows[0]) == 3, f"unexpected row shape: {rows!r}"
        a, b, d = rows[0]
        assert a == b == d, f"mismatched aliases: {a!r} {b!r} {d!r}"
        assert a == "1"
        c.query("DROP TABLE t_aid4")
    finally:
        c.close()
    print("[OK] three aliases agree in combined SELECT")


def test_fresh_session_zero():
    c = PGConnection()
    try:
        assert _cell(c.query("SELECT @@IDENTITY")) == "0"
        assert _cell(c.query("SELECT SCOPE_IDENTITY()")) == "0"
        assert _cell(c.query("SELECT @@last_insert_id")) == "0"
    finally:
        c.close()
    print("[OK] fresh session returns 0 for all three aliases")


def test_multi_row_insert_returns_first_id():
    c = PGConnection()
    try:
        _setup(c, "t_aid6")
        c.query("INSERT INTO t_aid6 (v) VALUES (1), (2), (3)")
        v = _cell(c.query("SELECT @@IDENTITY"))
        assert v in ("1",), f"multi-row insert gave {v!r}"
        assert _cell(c.query("SELECT SCOPE_IDENTITY()")) == v
        assert _cell(c.query("SELECT @@last_insert_id")) == v
        c.query("DROP TABLE t_aid6")
    finally:
        c.close()
    print("[OK] multi-row insert returns first generated id")


def test_non_auto_increment_insert_preserves_value():
    c = PGConnection()
    try:
        _setup(c, "t_aid7a")
        try:
            c.query("DROP TABLE IF EXISTS t_aid7b")
        except Exception:
            pass
        c.query("CREATE TABLE t_aid7b (id INT PRIMARY KEY, v INT)")

        c.query("INSERT INTO t_aid7a (v) VALUES (50)")
        before = _cell(c.query("SELECT @@IDENTITY"))

        c.query("INSERT INTO t_aid7b (id, v) VALUES (999, 60)")
        after_a = _cell(c.query("SELECT @@IDENTITY"))
        after_s = _cell(c.query("SELECT SCOPE_IDENTITY()"))
        after_l = _cell(c.query("SELECT @@last_insert_id"))

        assert after_a == before, f"{before!r} -> {after_a!r}"
        assert after_s == before
        assert after_l == before

        c.query("DROP TABLE t_aid7a")
        c.query("DROP TABLE t_aid7b")
    finally:
        c.close()
    print("[OK] non-AUTO_INCREMENT insert does not alter the value")


def test_session_isolation():
    a = PGConnection()
    b = PGConnection()
    try:
        _setup(a, "t_aid8")
        a.query("INSERT INTO t_aid8 (v) VALUES (70)")
        aid_a = _cell(a.query("SELECT @@IDENTITY"))
        assert aid_a != "0", "session A should see a non-zero id"

        aid_b_1 = _cell(b.query("SELECT @@IDENTITY"))
        aid_b_2 = _cell(b.query("SELECT SCOPE_IDENTITY()"))
        aid_b_3 = _cell(b.query("SELECT @@last_insert_id"))
        assert aid_b_1 == aid_b_2 == aid_b_3 == "0", (
            f"session B should be isolated, got {aid_b_1!r} {aid_b_2!r} {aid_b_3!r}"
        )

        a.query("DROP TABLE t_aid8")
    finally:
        a.close()
        b.close()
    print("[OK] session isolation: second connection starts fresh")


def test_aliases_match_last_insert_id_in_expression():
    """
    Aliases must produce the same scalar value as LAST_INSERT_ID() everywhere
    the expression engine uses it. We compare side-by-side rather than
    asserting a specific arithmetic result, because the goal of Task 130 is
    exact-alias behaviour, not to fix unrelated engine quirks.
    """
    c = PGConnection()
    try:
        _setup(c, "t_aid9")
        c.query("INSERT INTO t_aid9 (v) VALUES (80)")
        baseline = _cell(c.query("SELECT LAST_INSERT_ID() + 1"))
        assert _cell(c.query("SELECT SCOPE_IDENTITY() + 1")) == baseline
        assert _cell(c.query("SELECT @@IDENTITY + 1")) == baseline
        assert _cell(c.query("SELECT @@last_insert_id + 1")) == baseline
        c.query("DROP TABLE t_aid9")
    finally:
        c.close()
    print("[OK] aliases match LAST_INSERT_ID() in arithmetic expression")


def test_case_insensitivity():
    c = PGConnection()
    try:
        _setup(c, "t_aid10")
        c.query("INSERT INTO t_aid10 (v) VALUES (90)")
        v1 = _cell(c.query("select @@identity"))
        v2 = _cell(c.query("SELECT @@IDENTITY"))
        v3 = _cell(c.query("Select Scope_Identity()"))
        v4 = _cell(c.query("SELECT @@LAST_INSERT_ID"))
        assert v1 == v2 == v3 == v4 == "1", (
            f"case-insensitive mismatch: {v1!r} {v2!r} {v3!r} {v4!r}"
        )
        c.query("DROP TABLE t_aid10")
    finally:
        c.close()
    print("[OK] case-insensitive parsing for all three aliases")


def main():
    tests = [
        test_at_identity_after_insert,
        test_scope_identity_after_insert,
        test_at_last_insert_id_after_insert,
        test_three_aliases_agree_in_one_query,
        test_fresh_session_zero,
        test_multi_row_insert_returns_first_id,
        test_non_auto_increment_insert_preserves_value,
        test_session_isolation,
        test_aliases_match_last_insert_id_in_expression,
        test_case_insensitivity,
    ]
    failed = 0
    for t in tests:
        try:
            t()
        except Exception as e:
            failed += 1
            print(f"[FAIL] {t.__name__}: {e}")
    print(f"\n{len(tests) - failed}/{len(tests)} passed")
    sys.exit(1 if failed else 0)


if __name__ == "__main__":
    main()
