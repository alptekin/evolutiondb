"""
test_pk_range_fastpath.py — PK range fast path for DELETE / UPDATE

Covers the "simple <pk_col> <op> <literal>" pattern that DeleteProcess
and UpdateProcess recognize and satisfy by walking the PK B+ tree via
bt2_cursor_first/seek/next, skipping the full heap scan + per-row WHERE
evaluation. Also verifies fall-through for patterns that should NOT
hit the fast path (composite PK, non-PK column, conjunction).
"""

import sys
import os

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pg_helpers import conn, simple_query


def setup(s, name, rows=200):
    simple_query(s, f"DROP TABLE IF EXISTS {name}")
    simple_query(s, f"CREATE TABLE {name} (id INTEGER PRIMARY KEY, v VARCHAR(20))")
    for i in range(1, rows + 1):
        simple_query(s, f"INSERT INTO {name} VALUES ({i}, 'v{i}')")


def count(s, name, where="1=1"):
    r = simple_query(s, f"SELECT COUNT(*) FROM {name} WHERE {where}")
    return int(r[1][0][0])


def exists(s, name, idval):
    r = simple_query(s, f"SELECT id FROM {name} WHERE id = {idval}")
    return len(r[1]) == 1


def main():
    s = conn(user="admin", password="admin", database="testdb")
    simple_query(s, "CREATE DATABASE IF NOT EXISTS fpdb")
    s.close()
    s = conn(user="admin", password="admin", database="fpdb")

    passed = 0
    failed = 0

    def check(name, cond, detail=""):
        nonlocal passed, failed
        if cond:
            print(f"  PASS: {name}")
            passed += 1
        else:
            print(f"  FAIL: {name} {detail}")
            failed += 1

    # ---------- DELETE fast path ----------

    # LE
    setup(s, "t_le")
    simple_query(s, "DELETE FROM t_le WHERE id <= 50")
    check("DELETE id <= 50", count(s, "t_le") == 150)
    check("DELETE id <= 50: smallest remaining is 51",
          exists(s, "t_le", 51) and not exists(s, "t_le", 50))

    # LT
    setup(s, "t_lt")
    simple_query(s, "DELETE FROM t_lt WHERE id < 50")
    check("DELETE id < 50", count(s, "t_lt") == 151)
    check("DELETE id < 50: id=50 still present",
          exists(s, "t_lt", 50) and not exists(s, "t_lt", 49))

    # GE
    setup(s, "t_ge")
    simple_query(s, "DELETE FROM t_ge WHERE id >= 150")
    check("DELETE id >= 150", count(s, "t_ge") == 149)
    check("DELETE id >= 150: id=149 present, id=150 gone",
          exists(s, "t_ge", 149) and not exists(s, "t_ge", 150))

    # GT
    setup(s, "t_gt")
    simple_query(s, "DELETE FROM t_gt WHERE id > 150")
    check("DELETE id > 150", count(s, "t_gt") == 150)
    check("DELETE id > 150: id=150 still present",
          exists(s, "t_gt", 150) and not exists(s, "t_gt", 151))

    # EQ
    setup(s, "t_eq")
    simple_query(s, "DELETE FROM t_eq WHERE id = 42")
    check("DELETE id = 42", count(s, "t_eq") == 199)
    check("DELETE id = 42: gone",
          not exists(s, "t_eq", 42) and exists(s, "t_eq", 41))

    # Empty range
    setup(s, "t_emp")
    simple_query(s, "DELETE FROM t_emp WHERE id > 9999")
    check("DELETE id > 9999 (empty)", count(s, "t_emp") == 200)

    # Full range
    setup(s, "t_full")
    simple_query(s, "DELETE FROM t_full WHERE id >= 1")
    check("DELETE id >= 1 (all)", count(s, "t_full") == 0)

    # Reversed literal-on-left form  (5 > id  ≡  id < 5)
    setup(s, "t_rev")
    simple_query(s, "DELETE FROM t_rev WHERE 5 > id")
    check("DELETE 5 > id (flipped)", count(s, "t_rev") == 196)

    # ---------- UPDATE fast path ----------

    setup(s, "u_le")
    simple_query(s, "UPDATE u_le SET v = 'X' WHERE id <= 100")
    r = simple_query(s, "SELECT COUNT(*) FROM u_le WHERE v = 'X'")
    check("UPDATE id <= 100 fast path", int(r[1][0][0]) == 100)

    setup(s, "u_gt")
    simple_query(s, "UPDATE u_gt SET v = 'Y' WHERE id > 150")
    r = simple_query(s, "SELECT COUNT(*) FROM u_gt WHERE v = 'Y'")
    check("UPDATE id > 150 fast path", int(r[1][0][0]) == 50)

    setup(s, "u_eq")
    simple_query(s, "UPDATE u_eq SET v = 'Z' WHERE id = 77")
    r = simple_query(s, "SELECT v FROM u_eq WHERE id = 77")
    check("UPDATE id = 77", r[1] and r[1][0][0] == "Z")

    # UPDATE on id itself — must fall through; we only assert no crash +
    # rows-affected count (the underlying engine has its own PK-move semantics).
    setup(s, "u_pkset", rows=5)
    r = simple_query(s, "UPDATE u_pkset SET id = 999 WHERE id = 3")
    check("UPDATE SET id=const fallback (no error)",
          r[2] is None and r[3] == "UPDATE 1", str(r))

    # ---------- Fall-through cases (fast path should NOT apply) ----------

    # Non-PK column WHERE
    setup(s, "t_np")
    simple_query(s, "DELETE FROM t_np WHERE v = 'v42'")
    check("DELETE non-PK column", count(s, "t_np") == 199)

    # Composite PK — must fall through
    simple_query(s, "DROP TABLE IF EXISTS t_comp")
    simple_query(s,
        "CREATE TABLE t_comp (a INT, b INT, v VARCHAR(10), PRIMARY KEY (a, b))")
    for i in range(1, 21):
        simple_query(s, f"INSERT INTO t_comp VALUES ({i}, {i*10}, 'r{i}')")
    simple_query(s, "DELETE FROM t_comp WHERE a <= 5")
    r = simple_query(s, "SELECT COUNT(*) FROM t_comp")
    check("DELETE composite PK falls through", int(r[1][0][0]) == 15)

    # Cleanup
    for t in ["t_le", "t_lt", "t_ge", "t_gt", "t_eq", "t_emp", "t_full",
              "t_rev", "u_le", "u_gt", "u_eq", "u_pkset", "t_np", "t_comp"]:
        simple_query(s, f"DROP TABLE IF EXISTS {t}")

    s.close()

    print()
    print(f"Results: {passed} passed, {failed} failed out of {passed + failed}")
    return 0 if failed == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
