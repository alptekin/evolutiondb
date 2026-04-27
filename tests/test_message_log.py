"""
test_message_log.py — Task 222 (Feature #222) tests.

Covers:
  - CREATE MESSAGE LOG / DROP MESSAGE LOG accepted
  - WITH (ttl='7 days') accepted
  - SHOW MESSAGE LOGS lists registrations
  - APPEND single + multiple, sequence preserved
  - READ returns rows ordered by seq
  - READ ... LAST n caps the result
  - TRUNCATE drops the session's rows
  - TRUNCATE BEFORE seq drops only older rows
  - COUNT(*) returns the per-session row count
  - Session isolation: s1 reads don't leak from s2
  - Missing log rejected on append / read
  - Optional meta column on APPEND
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


# ─── 1. CREATE / DROP accepted ───
def test_create_drop():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m1")
    _, _, err, _ = simple_query(s, "CREATE MESSAGE LOG m1")
    assert err is None, f"create: {err}"
    _, _, err, _ = simple_query(s, "DROP MESSAGE LOG m1")
    assert err is None, f"drop: {err}"


# ─── 2. WITH ttl accepted ───
def test_with_ttl():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m2")
    _, _, err, _ = simple_query(s,
        "CREATE MESSAGE LOG m2 WITH (ttl='7 days')")
    assert err is None, f"ttl: {err}"


# ─── 3. SHOW MESSAGE LOGS lists registrations ───
def test_show_lists():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m3")
    simple_query(s, "CREATE MESSAGE LOG m3")
    _, rows, _, _ = simple_query(s, "SHOW MESSAGE LOGS")
    names = [r[0] for r in rows]
    assert "m3" in names, f"missing: {names}"


# ─── 4. APPEND single + multiple, sequence preserved ───
def test_append_order():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m4")
    simple_query(s, "CREATE MESSAGE LOG m4")
    for i, role in enumerate(["user", "assistant", "user"]):
        simple_query(s,
            f"MESSAGE APPEND INTO m4 VALUES ('s', '{role}', 'msg{i}')")
    _, rows, _, _ = simple_query(s,
        "MESSAGE READ FROM m4 WHERE SESSION = 's'")
    seqs = [int(r[0]) for r in rows]
    contents = [r[2] for r in rows]
    assert seqs == sorted(seqs), f"out of order: {seqs}"
    assert contents == ["msg0", "msg1", "msg2"], f"content order: {contents}"


# ─── 5. READ ... LAST n caps result ───
def test_read_last():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m5")
    simple_query(s, "CREATE MESSAGE LOG m5")
    for i in range(5):
        simple_query(s,
            f"MESSAGE APPEND INTO m5 VALUES ('s', 'user', 'm{i}')")
    _, rows, _, _ = simple_query(s,
        "MESSAGE READ FROM m5 WHERE SESSION = 's' LAST 2")
    assert len(rows) == 2, f"limit: {rows}"


# ─── 6. TRUNCATE drops session rows ───
def test_truncate_all():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m6")
    simple_query(s, "CREATE MESSAGE LOG m6")
    for i in range(3):
        simple_query(s,
            f"MESSAGE APPEND INTO m6 VALUES ('s', 'user', 'm{i}')")
    simple_query(s,
        "MESSAGE TRUNCATE FROM m6 WHERE SESSION = 's'")
    _, rows, _, _ = simple_query(s,
        "MESSAGE READ FROM m6 WHERE SESSION = 's'")
    assert rows == [], f"after truncate: {rows}"


# ─── 7. TRUNCATE BEFORE seq drops older rows ───
def test_truncate_before():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m7")
    simple_query(s, "CREATE MESSAGE LOG m7")
    for i in range(5):
        simple_query(s,
            f"MESSAGE APPEND INTO m7 VALUES ('s', 'user', 'm{i}')")
    _, rows, _, _ = simple_query(s,
        "MESSAGE READ FROM m7 WHERE SESSION = 's'")
    third_seq = int(rows[2][0])           # 3rd message's seq
    simple_query(s,
        f"MESSAGE TRUNCATE FROM m7 WHERE SESSION = 's' BEFORE {third_seq}")
    _, rows, _, _ = simple_query(s,
        "MESSAGE READ FROM m7 WHERE SESSION = 's'")
    assert len(rows) == 3, f"3 newer should remain: {rows}"


# ─── 8. COUNT(*) returns row count ───
def test_count():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m8")
    simple_query(s, "CREATE MESSAGE LOG m8")
    for i in range(4):
        simple_query(s,
            f"MESSAGE APPEND INTO m8 VALUES ('s', 'user', 'm{i}')")
    _, rows, _, _ = simple_query(s,
        "MESSAGE COUNT(*) FROM m8 WHERE SESSION = 's'")
    assert rows[0][0] == "4", f"count: {rows}"


# ─── 9. Session isolation: s1 doesn't leak from s2 ───
def test_session_isolation():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m9")
    simple_query(s, "CREATE MESSAGE LOG m9")
    simple_query(s, "MESSAGE APPEND INTO m9 VALUES ('s1','user','for s1')")
    simple_query(s, "MESSAGE APPEND INTO m9 VALUES ('s2','user','for s2')")
    _, r1, _, _ = simple_query(s, "MESSAGE READ FROM m9 WHERE SESSION = 's1'")
    _, r2, _, _ = simple_query(s, "MESSAGE READ FROM m9 WHERE SESSION = 's2'")
    assert len(r1) == 1 and r1[0][2] == "for s1", f"s1: {r1}"
    assert len(r2) == 1 and r2[0][2] == "for s2", f"s2: {r2}"


# ─── 10. APPEND on missing log rejected ───
def test_missing_log_append():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m_missing")
    _, _, err, _ = simple_query(s,
        "MESSAGE APPEND INTO m_missing VALUES ('s','user','x')")
    assert err is not None, "should reject"


# ─── 11. APPEND with optional meta ───
def test_append_with_meta():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m11")
    simple_query(s, "CREATE MESSAGE LOG m11")
    simple_query(s,
        "MESSAGE APPEND INTO m11 VALUES ('s','user','hi',"
        "'{\"client\":\"web\"}')")
    _, rows, _, _ = simple_query(s,
        "MESSAGE READ FROM m11 WHERE SESSION = 's'")
    assert len(rows) == 1
    meta = rows[0][3]
    assert meta and "client" in meta, f"meta: {meta}"


# ─── 12. Duplicate CREATE rejected ───
def test_duplicate_create():
    s = conn()
    simple_query(s, "DROP MESSAGE LOG IF EXISTS m12")
    simple_query(s, "CREATE MESSAGE LOG m12")
    _, _, err, _ = simple_query(s, "CREATE MESSAGE LOG m12")
    assert err is not None, "duplicate should be rejected"


if __name__ == "__main__":
    print("=== test_message_log.py (Task 222) ===\n")
    run("CREATE / DROP accepted",                test_create_drop)
    run("WITH (ttl='7 days') accepted",          test_with_ttl)
    run("SHOW MESSAGE LOGS lists",               test_show_lists)
    run("APPEND multi preserves order",          test_append_order)
    run("READ ... LAST n caps result",           test_read_last)
    run("TRUNCATE drops session rows",           test_truncate_all)
    run("TRUNCATE BEFORE seq drops older",       test_truncate_before)
    run("COUNT(*) returns row count",             test_count)
    run("Session isolation s1/s2",               test_session_isolation)
    run("APPEND on missing log rejected",         test_missing_log_append)
    run("APPEND with optional meta",              test_append_with_meta)
    run("Duplicate CREATE rejected",              test_duplicate_create)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
