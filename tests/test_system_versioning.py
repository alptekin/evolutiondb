"""
test_system_versioning.py — Task 208 (Feature #208) tests.

Covers:
  - CREATE TABLE ... WITH SYSTEM VERSIONING auto-injects valid_from / valid_to
  - Auto-creates a <name>_history shadow table with the same schema
  - INSERT auto-fills valid_from = NOW() and valid_to = '9999-12-31 23:59:59'
  - UPDATE copies the OLD row to history with its previous valid_to set to NOW()
  - UPDATE bumps the live row's valid_from to NOW()
  - Plain (non-versioned) tables are unaffected
  - Multiple updates produce a chain of history rows
  - User-supplied valid_from on INSERT survives (back-dating allowed)
"""

import os
import sys
import time

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


# ─── 1. CREATE TABLE WITH SYSTEM VERSIONING accepted ───
def test_create_versioned():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv1")
    simple_query(s, "DROP TABLE IF EXISTS sv1_history")
    _, _, err, _ = simple_query(s,
        "CREATE TABLE sv1 (id INT PRIMARY KEY, name VARCHAR(50)) WITH SYSTEM VERSIONING")
    assert err is None, f"create versioned failed: {err}"


# ─── 2. valid_from / valid_to columns auto-added ───
def test_columns_auto_added():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv2")
    simple_query(s, "DROP TABLE IF EXISTS sv2_history")
    simple_query(s, "CREATE TABLE sv2 (id INT PRIMARY KEY, n INT) WITH SYSTEM VERSIONING")
    simple_query(s, "INSERT INTO sv2 (id, n) VALUES (1, 100)")
    _, rows, err, _ = simple_query(s,
        "SELECT id, n, valid_from, valid_to FROM sv2 WHERE id=1")
    assert err is None, f"select valid_from/valid_to: {err}"
    assert len(rows) == 1
    # valid_from should look like a timestamp (YYYY-MM-DD ...)
    assert rows[0][2] and rows[0][2].startswith("20"), f"valid_from: {rows[0][2]}"
    assert rows[0][3] and rows[0][3].startswith("9999"), f"valid_to: {rows[0][3]}"


# ─── 3. History shadow table is created ───
def test_history_table_created():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv3")
    simple_query(s, "DROP TABLE IF EXISTS sv3_history")
    simple_query(s, "CREATE TABLE sv3 (id INT PRIMARY KEY) WITH SYSTEM VERSIONING")
    _, _, err, _ = simple_query(s, "SELECT * FROM sv3_history")
    assert err is None, f"history table not accessible: {err}"


# ─── 4. UPDATE copies old row into history ───
def test_update_copies_to_history():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv4")
    simple_query(s, "DROP TABLE IF EXISTS sv4_history")
    simple_query(s, "CREATE TABLE sv4 (id INT PRIMARY KEY, n INT) WITH SYSTEM VERSIONING")
    simple_query(s, "INSERT INTO sv4 (id, n) VALUES (1, 10)")
    simple_query(s, "UPDATE sv4 SET n = 20 WHERE id = 1")

    _, hist_rows, _, _ = simple_query(s, "SELECT id, n FROM sv4_history WHERE id=1")
    assert len(hist_rows) == 1, f"history rows: {hist_rows}"
    assert hist_rows[0][1] == "10", f"history n: {hist_rows[0][1]}"


# ─── 5. UPDATE bumps valid_from on the live row ───
def test_update_bumps_valid_from():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv5")
    simple_query(s, "DROP TABLE IF EXISTS sv5_history")
    simple_query(s, "CREATE TABLE sv5 (id INT PRIMARY KEY, n INT) WITH SYSTEM VERSIONING")
    simple_query(s, "INSERT INTO sv5 VALUES (1, 100, '2024-01-01 00:00:00', '9999-12-31 23:59:59')")
    _, before, _, _ = simple_query(s, "SELECT valid_from FROM sv5 WHERE id=1")
    initial_vf = before[0][0]
    time.sleep(1)
    simple_query(s, "UPDATE sv5 SET n = 200 WHERE id = 1")
    _, after, _, _ = simple_query(s, "SELECT valid_from FROM sv5 WHERE id=1")
    new_vf = after[0][0]
    assert new_vf != initial_vf, f"valid_from did not advance: {initial_vf} → {new_vf}"


# ─── 6. History row's valid_to gets stamped at the update moment ───
def test_history_valid_to_stamped():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv6")
    simple_query(s, "DROP TABLE IF EXISTS sv6_history")
    simple_query(s, "CREATE TABLE sv6 (id INT PRIMARY KEY, n INT) WITH SYSTEM VERSIONING")
    simple_query(s, "INSERT INTO sv6 VALUES (1, 1, '2024-01-01 00:00:00', '9999-12-31 23:59:59')")
    simple_query(s, "UPDATE sv6 SET n = 2 WHERE id = 1")
    _, h, _, _ = simple_query(s, "SELECT valid_to FROM sv6_history WHERE id=1")
    assert len(h) == 1
    # Should NOT be the far-future sentinel anymore
    assert not h[0][0].startswith("9999"), f"history valid_to still sentinel: {h[0][0]}"


# ─── 7. Multiple UPDATEs produce a chain of history rows ───
def test_update_chain():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv7")
    simple_query(s, "DROP TABLE IF EXISTS sv7_history")
    simple_query(s, "CREATE TABLE sv7 (id INT PRIMARY KEY, n INT) WITH SYSTEM VERSIONING")
    simple_query(s, "INSERT INTO sv7 VALUES (1, 1, '2024-01-01 00:00:00', '9999-12-31 23:59:59')")
    for i in range(2, 5):
        simple_query(s, f"UPDATE sv7 SET n = {i} WHERE id = 1")

    _, hist, _, _ = simple_query(s, "SELECT n FROM sv7_history WHERE id=1")
    ns = sorted(int(r[0]) for r in hist)
    assert ns == [1, 2, 3], f"history chain: {ns}"

    _, live, _, _ = simple_query(s, "SELECT n FROM sv7 WHERE id=1")
    assert live[0][0] == "4", f"live: {live[0][0]}"


# ─── 8. Plain (non-versioned) tables are unchanged ───
def test_plain_table_unchanged():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv8")
    simple_query(s, "CREATE TABLE sv8 (id INT PRIMARY KEY, n INT)")
    simple_query(s, "INSERT INTO sv8 VALUES (1, 100)")
    _, rows, err, _ = simple_query(s, "SELECT n FROM sv8")
    assert err is None
    assert rows[0][0] == "100"
    # Should NOT have a history table
    _, _, e2, _ = simple_query(s, "SELECT * FROM sv8_history")
    assert e2 is not None, "non-versioned table should not have history shadow"


# ─── 9. User-supplied valid_from is honoured (back-dating) ───
def test_user_supplied_valid_from():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv9")
    simple_query(s, "DROP TABLE IF EXISTS sv9_history")
    simple_query(s, "CREATE TABLE sv9 (id INT PRIMARY KEY, n INT) WITH SYSTEM VERSIONING")
    simple_query(s, "INSERT INTO sv9 VALUES (1, 100, '2020-06-01 00:00:00', '9999-12-31 23:59:59')")
    _, rows, _, _ = simple_query(s, "SELECT valid_from FROM sv9 WHERE id=1")
    assert rows[0][0].startswith("2020-06-01"), f"backdated insert: {rows[0][0]}"


# ─── 10. AS OF + history overlap: live + history union covers history ───
def test_history_holds_old_value():
    s = conn()
    simple_query(s, "DROP TABLE IF EXISTS sv10")
    simple_query(s, "DROP TABLE IF EXISTS sv10_history")
    simple_query(s, "CREATE TABLE sv10 (id INT PRIMARY KEY, n INT) WITH SYSTEM VERSIONING")
    simple_query(s, "INSERT INTO sv10 VALUES (1, 100, '2024-01-01 00:00:00', '9999-12-31 23:59:59')")
    simple_query(s, "UPDATE sv10 SET n = 200 WHERE id = 1")

    # Live shows current; history holds past
    _, live, _, _ = simple_query(s, "SELECT n FROM sv10 WHERE id=1")
    assert live[0][0] == "200"

    _, hist, _, _ = simple_query(s, "SELECT n FROM sv10_history WHERE id=1")
    assert hist[0][0] == "100", f"history n: {hist[0][0]}"


if __name__ == "__main__":
    print("=== test_system_versioning.py (Task 208) ===\n")
    run("CREATE TABLE WITH SYSTEM VERSIONING",   test_create_versioned)
    run("valid_from / valid_to auto-added",      test_columns_auto_added)
    run("history shadow table created",          test_history_table_created)
    run("UPDATE copies old row to history",      test_update_copies_to_history)
    run("UPDATE bumps live valid_from",          test_update_bumps_valid_from)
    run("history valid_to is stamped",           test_history_valid_to_stamped)
    run("Multiple UPDATEs chain into history",   test_update_chain)
    run("Plain table unchanged (no history)",    test_plain_table_unchanged)
    run("User-supplied valid_from honoured",     test_user_supplied_valid_from)
    run("History row holds the previous value",  test_history_holds_old_value)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
