"""
test_entity_store.py — Task 225 (Feature #225) tests.

Covers:
  - CREATE / DROP ENTITY STORE
  - SHOW ENTITY STORES lists registrations
  - PUT inserts new with mention_count = 1
  - PUT existing key bumps mention_count
  - PUT existing key updates summary
  - GET returns row by key
  - GET missing key returns empty
  - RANK orders by mention_count DESC
  - RANK LIMIT n caps result
  - Optional facts column
  - Missing store rejected
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


# ─── 1. CREATE / DROP ───
def test_create_drop():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e1")
    _, _, err, _ = simple_query(s, "CREATE ENTITY STORE e1")
    assert err is None, f"create: {err}"
    _, _, err, _ = simple_query(s, "DROP ENTITY STORE e1")
    assert err is None, f"drop: {err}"


# ─── 2. SHOW lists ───
def test_show_lists():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e2")
    simple_query(s, "CREATE ENTITY STORE e2")
    _, rows, _, _ = simple_query(s, "SHOW ENTITY STORES")
    assert "e2" in [r[0] for r in rows]


# ─── 3. PUT inserts with mention_count = 1 ───
def test_put_inserts():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e3")
    simple_query(s, "CREATE ENTITY STORE e3")
    simple_query(s,
        "ENTITY PUT INTO e3 VALUES ('alice', 'PM at Acme')")
    _, rows, _, _ = simple_query(s,
        "ENTITY GET FROM e3 WHERE KEY = 'alice'")
    assert len(rows) == 1
    # row shape: (entity_key, summary, facts, mention_count, last_seen)
    assert rows[0][3] == "1", f"mention_count=1: {rows[0]}"


# ─── 4. PUT existing bumps mention_count ───
def test_put_bumps_count():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e4")
    simple_query(s, "CREATE ENTITY STORE e4")
    for _ in range(3):
        simple_query(s,
            "ENTITY PUT INTO e4 VALUES ('alice', 'PM')")
    _, rows, _, _ = simple_query(s,
        "ENTITY GET FROM e4 WHERE KEY = 'alice'")
    assert rows[0][3] == "3", f"mention_count=3: {rows[0]}"


# ─── 5. PUT existing updates summary ───
def test_put_updates_summary():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e5")
    simple_query(s, "CREATE ENTITY STORE e5")
    simple_query(s,
        "ENTITY PUT INTO e5 VALUES ('alice', 'old summary')")
    simple_query(s,
        "ENTITY PUT INTO e5 VALUES ('alice', 'new summary')")
    _, rows, _, _ = simple_query(s,
        "ENTITY GET FROM e5 WHERE KEY = 'alice'")
    assert rows[0][1] == "new summary", f"summary: {rows[0]}"


# ─── 6. GET returns row ───
def test_get_returns_row():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e6")
    simple_query(s, "CREATE ENTITY STORE e6")
    simple_query(s,
        "ENTITY PUT INTO e6 VALUES ('bob', 'developer')")
    _, rows, _, _ = simple_query(s,
        "ENTITY GET FROM e6 WHERE KEY = 'bob'")
    assert len(rows) == 1
    assert rows[0][0] == "bob"


# ─── 7. GET missing returns empty ───
def test_get_missing():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e7")
    simple_query(s, "CREATE ENTITY STORE e7")
    _, rows, _, _ = simple_query(s,
        "ENTITY GET FROM e7 WHERE KEY = 'nobody'")
    assert rows == []


# ─── 8. RANK orders by mention_count DESC ───
def test_rank_order():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e8")
    simple_query(s, "CREATE ENTITY STORE e8")
    # alice 3x, bob 1x, carol 2x
    for _ in range(3):
        simple_query(s, "ENTITY PUT INTO e8 VALUES ('alice', 's')")
    simple_query(s, "ENTITY PUT INTO e8 VALUES ('bob', 's')")
    for _ in range(2):
        simple_query(s, "ENTITY PUT INTO e8 VALUES ('carol', 's')")
    _, rows, _, _ = simple_query(s, "ENTITY RANK FROM e8")
    keys = [r[0] for r in rows]
    counts = [int(r[3]) for r in rows]
    assert keys == ["alice", "carol", "bob"], f"rank: {keys}"
    assert counts == [3, 2, 1], f"counts: {counts}"


# ─── 9. RANK LIMIT n caps ───
def test_rank_limit():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e9")
    simple_query(s, "CREATE ENTITY STORE e9")
    for k in ("a", "b", "c", "d"):
        simple_query(s, f"ENTITY PUT INTO e9 VALUES ('{k}', 's')")
    _, rows, _, _ = simple_query(s, "ENTITY RANK FROM e9 LIMIT 2")
    assert len(rows) == 2, f"limit 2: {rows}"


# ─── 10. Optional facts column ───
def test_with_facts():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e10")
    simple_query(s, "CREATE ENTITY STORE e10")
    simple_query(s,
        """ENTITY PUT INTO e10 VALUES ('alice', 'PM', '{"team":"infra"}')""")
    _, rows, _, _ = simple_query(s,
        "ENTITY GET FROM e10 WHERE KEY = 'alice'")
    assert "infra" in (rows[0][2] or "")


# ─── 11. Missing store rejected ───
def test_missing_store():
    s = conn()
    simple_query(s, "DROP ENTITY STORE IF EXISTS e_missing")
    _, _, err, _ = simple_query(s,
        "ENTITY PUT INTO e_missing VALUES ('a', 's')")
    assert err is not None


if __name__ == "__main__":
    print("=== test_entity_store.py (Task 225) ===\n")
    run("CREATE / DROP",                    test_create_drop)
    run("SHOW ENTITY STORES lists",         test_show_lists)
    run("PUT inserts mention_count=1",      test_put_inserts)
    run("PUT existing bumps count",          test_put_bumps_count)
    run("PUT existing updates summary",      test_put_updates_summary)
    run("GET returns row by key",            test_get_returns_row)
    run("GET missing key returns empty",     test_get_missing)
    run("RANK orders by count DESC",         test_rank_order)
    run("RANK LIMIT n caps result",          test_rank_limit)
    run("Optional facts column",             test_with_facts)
    run("Missing store rejected",            test_missing_store)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
