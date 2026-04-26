"""
test_checkpoint_store.py — Task 204 (Feature #204) tests.

Covers:
  - CREATE CHECKPOINT STORE name [WITH (retention='30 days')]
  - DROP CHECKPOINT STORE name [CASCADE]
  - IF NOT EXISTS / IF EXISTS guards
  - Auto-created backing table ck_<name> with the expected schema
  - DML via plain INSERT / SELECT on the backing table
  - JSON metadata roundtrip
  - Latest-by-thread ordering (created_at DESC LIMIT 1)
  - History DESC list
  - Thread isolation
  - Drop store removes the backing table
  - Re-create after drop
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


def cleanup(s, name):
    simple_query(s, f"DROP CHECKPOINT STORE IF EXISTS {name}")


# ─── 1. CREATE CHECKPOINT STORE ───
def test_create_basic():
    s = conn()
    cleanup(s, "ck1")
    _, _, err, _ = simple_query(s, "CREATE CHECKPOINT STORE ck1")
    assert err is None, f"create failed: {err}"


# ─── 2. CREATE … WITH (retention=…) ───
def test_create_with_retention():
    s = conn()
    cleanup(s, "ck2")
    _, _, err, _ = simple_query(s,
        "CREATE CHECKPOINT STORE ck2 WITH (retention='30 days')")
    assert err is None, f"create with retention failed: {err}"


# ─── 3. CREATE duplicate fails without IF NOT EXISTS ───
def test_create_duplicate_errors():
    s = conn()
    cleanup(s, "ck3")
    simple_query(s, "CREATE CHECKPOINT STORE ck3")
    _, _, err, _ = simple_query(s, "CREATE CHECKPOINT STORE ck3")
    assert err is not None, "duplicate CREATE should error"


# ─── 4. CREATE IF NOT EXISTS suppresses duplicate error ───
def test_create_if_not_exists():
    s = conn()
    cleanup(s, "ck4")
    simple_query(s, "CREATE CHECKPOINT STORE ck4")
    _, _, err, _ = simple_query(s,
        "CREATE CHECKPOINT STORE IF NOT EXISTS ck4")
    assert err is None, f"IF NOT EXISTS failed: {err}"


# ─── 5. DROP CHECKPOINT STORE removes the registry + backing table ───
def test_drop_basic():
    s = conn()
    cleanup(s, "ck5")
    simple_query(s, "CREATE CHECKPOINT STORE ck5")
    _, _, err, _ = simple_query(s, "DROP CHECKPOINT STORE ck5")
    assert err is None, f"drop failed: {err}"
    # Backing table should also be gone
    _, _, err2, _ = simple_query(s, "SELECT * FROM ck_ck5")
    assert err2 is not None, "backing table should be dropped"


# ─── 6. DROP missing store errors without IF EXISTS ───
def test_drop_missing_errors():
    s = conn()
    cleanup(s, "ck_missing")
    _, _, err, _ = simple_query(s, "DROP CHECKPOINT STORE ck_missing")
    assert err is not None, "missing DROP should error"


# ─── 7. DROP IF EXISTS no-ops cleanly ───
def test_drop_if_exists():
    s = conn()
    cleanup(s, "ck_no")
    _, _, err, _ = simple_query(s, "DROP CHECKPOINT STORE IF EXISTS ck_no")
    assert err is None, f"DROP IF EXISTS failed: {err}"


# ─── 8. DROP CASCADE accepted ───
def test_drop_cascade():
    s = conn()
    cleanup(s, "ck_c")
    simple_query(s, "CREATE CHECKPOINT STORE ck_c")
    _, _, err, _ = simple_query(s, "DROP CHECKPOINT STORE ck_c CASCADE")
    assert err is None, f"DROP CASCADE failed: {err}"


# ─── 9. Backing table schema accepts INSERT ───
def test_backing_insert_select():
    s = conn()
    cleanup(s, "ck9")
    simple_query(s, "CREATE CHECKPOINT STORE ck9")
    _, _, err, _ = simple_query(s,
        "INSERT INTO ck_ck9 (thread_id, checkpoint_ns, checkpoint_id, "
        "parent_id, ck_values, metadata, parent_config, created_at) "
        "VALUES ('th1', '', 'cp-001', NULL, '{\"step\":1}', '{}', NULL, "
        "'2026-04-26 10:00:00')")
    assert err is None, f"insert failed: {err}"
    _, rows, _, _ = simple_query(s,
        "SELECT thread_id, checkpoint_id FROM ck_ck9 WHERE thread_id='th1'")
    assert len(rows) == 1
    assert rows[0][0] == "th1" and rows[0][1] == "cp-001", f"row: {rows[0]}"


# ─── 10. JSON values column roundtrip ───
def test_json_roundtrip():
    s = conn()
    cleanup(s, "ck10")
    simple_query(s, "CREATE CHECKPOINT STORE ck10")
    json_blob = '{"messages":[{"role":"user","content":"hi"}],"step":42}'
    simple_query(s,
        f"INSERT INTO ck_ck10 (thread_id, checkpoint_ns, checkpoint_id, "
        f"parent_id, ck_values, metadata, parent_config, created_at) "
        f"VALUES ('t', '', 'c1', NULL, '{json_blob}', '{{}}', NULL, "
        f"'2026-04-26 10:00:00')")
    _, rows, _, _ = simple_query(s,
        "SELECT ck_values FROM ck_ck10 WHERE checkpoint_id='c1'")
    assert rows[0][0] == json_blob, f"roundtrip mismatch: {rows[0][0]}"


# ─── 11. Latest-by-thread (ORDER BY created_at DESC LIMIT 1) ───
def test_latest_by_thread():
    s = conn()
    cleanup(s, "ck11")
    simple_query(s, "CREATE CHECKPOINT STORE ck11")
    for i, ts in enumerate(["2026-04-26 10:00:00",
                             "2026-04-26 11:00:00",
                             "2026-04-26 12:00:00"], start=1):
        simple_query(s,
            f"INSERT INTO ck_ck11 (thread_id, checkpoint_ns, checkpoint_id, "
            f"parent_id, ck_values, metadata, parent_config, created_at) "
            f"VALUES ('th', '', 'c{i}', NULL, '{{}}', '{{}}', NULL, '{ts}')")
    _, rows, _, _ = simple_query(s,
        "SELECT checkpoint_id, created_at FROM ck_ck11 "
        "WHERE thread_id='th' ORDER BY created_at DESC LIMIT 1")
    assert len(rows) == 1 and rows[0][0] == "c3", f"latest = {rows}"


# ─── 12. History DESC ───
def test_history_desc():
    s = conn()
    cleanup(s, "ck12")
    simple_query(s, "CREATE CHECKPOINT STORE ck12")
    for i, ts in enumerate(["2026-04-26 10:00:00",
                             "2026-04-26 11:00:00",
                             "2026-04-26 12:00:00"], start=1):
        simple_query(s,
            f"INSERT INTO ck_ck12 (thread_id, checkpoint_ns, checkpoint_id, "
            f"parent_id, ck_values, metadata, parent_config, created_at) "
            f"VALUES ('t', '', 'c{i}', NULL, '{{}}', '{{}}', NULL, '{ts}')")
    _, rows, _, _ = simple_query(s,
        "SELECT checkpoint_id FROM ck_ck12 "
        "WHERE thread_id='t' ORDER BY created_at DESC")
    ids = [r[0] for r in rows]
    assert ids == ["c3", "c2", "c1"], f"history order: {ids}"


# ─── 13. Thread isolation — different thread_id ───
def test_thread_isolation():
    s = conn()
    cleanup(s, "ck13")
    simple_query(s, "CREATE CHECKPOINT STORE ck13")
    simple_query(s, "INSERT INTO ck_ck13 VALUES ('A', '', 'cA1', NULL, '{}', '{}', NULL, '2026-04-26 10:00:00')")
    simple_query(s, "INSERT INTO ck_ck13 VALUES ('B', '', 'cB1', NULL, '{}', '{}', NULL, '2026-04-26 10:00:00')")
    _, rA, _, _ = simple_query(s, "SELECT checkpoint_id FROM ck_ck13 WHERE thread_id='A'")
    _, rB, _, _ = simple_query(s, "SELECT checkpoint_id FROM ck_ck13 WHERE thread_id='B'")
    assert [r[0] for r in rA] == ["cA1"]
    assert [r[0] for r in rB] == ["cB1"]


# ─── 14. Re-create after drop ───
def test_recreate_after_drop():
    s = conn()
    cleanup(s, "ck14")
    simple_query(s, "CREATE CHECKPOINT STORE ck14")
    simple_query(s, "DROP CHECKPOINT STORE ck14")
    _, _, err, _ = simple_query(s, "CREATE CHECKPOINT STORE ck14")
    assert err is None, f"re-create after drop: {err}"


# ─── 15. Backing table PK uniqueness on checkpoint_id ───
def test_pk_uniqueness():
    s = conn()
    cleanup(s, "ck15")
    simple_query(s, "CREATE CHECKPOINT STORE ck15")
    _, _, e1, _ = simple_query(s,
        "INSERT INTO ck_ck15 VALUES ('t', '', 'dup', NULL, '{}', '{}', NULL, '2026-04-26 10:00:00')")
    assert e1 is None, f"first insert: {e1}"
    _, _, e2, _ = simple_query(s,
        "INSERT INTO ck_ck15 VALUES ('t', '', 'dup', NULL, '{}', '{}', NULL, '2026-04-26 10:01:00')")
    assert e2 is not None, "duplicate PK should fail"


if __name__ == "__main__":
    print("=== test_checkpoint_store.py (Task 204) ===\n")
    run("CREATE CHECKPOINT STORE",                test_create_basic)
    run("CREATE … WITH retention",                test_create_with_retention)
    run("Duplicate CREATE errors",                test_create_duplicate_errors)
    run("CREATE IF NOT EXISTS suppresses error",  test_create_if_not_exists)
    run("DROP CHECKPOINT STORE",                  test_drop_basic)
    run("DROP missing errors",                    test_drop_missing_errors)
    run("DROP IF EXISTS no-op",                   test_drop_if_exists)
    run("DROP CASCADE accepted",                  test_drop_cascade)
    run("Backing table INSERT/SELECT",            test_backing_insert_select)
    run("JSON values roundtrip",                  test_json_roundtrip)
    run("Latest-by-thread (ORDER BY DESC LIMIT 1)", test_latest_by_thread)
    run("History DESC",                           test_history_desc)
    run("Thread isolation",                       test_thread_isolation)
    run("Re-create after DROP",                   test_recreate_after_drop)
    run("Backing table PK uniqueness",            test_pk_uniqueness)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
