"""
test_graph_store.py — Task 224 (Feature #224) tests.

Covers:
  - CREATE / DROP GRAPH STORE accepted
  - SHOW GRAPH STORES lists registrations
  - UPSERT NODE inserts + replaces props on same id
  - UPSERT EDGE creates a live edge (invalid_at NULL)
  - UPSERT EDGE on existing (src,rel,dst) closes prior + inserts fresh
  - NEIGHBORS returns currently-live edges
  - NEIGHBORS AS OF returns the live edge at that snapshot
  - NEIGHBORS DEPTH N accepted (v1 fires depth=1 only)
  - Multiple edges from same src all returned
  - Different (src,rel,dst) triples don't interfere
  - Missing store rejected
  - Duplicate CREATE rejected
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


def edge_set(rows):
    """Project (src, rel, dst) tuples for comparison."""
    return sorted((r[0], r[1], r[2]) for r in rows)


# ─── 1. CREATE / DROP ───
def test_create_drop():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g1")
    _, _, err, _ = simple_query(s, "CREATE GRAPH STORE g1")
    assert err is None, f"create: {err}"
    _, _, err, _ = simple_query(s, "DROP GRAPH STORE g1")
    assert err is None, f"drop: {err}"


# ─── 2. SHOW GRAPH STORES ───
def test_show_lists():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g2")
    simple_query(s, "CREATE GRAPH STORE g2")
    _, rows, _, _ = simple_query(s, "SHOW GRAPH STORES")
    assert "g2" in [r[0] for r in rows]


# ─── 3. UPSERT NODE: replace on same id ───
def test_upsert_node_replace():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g3")
    simple_query(s, "CREATE GRAPH STORE g3")
    simple_query(s,
        """GRAPH UPSERT NODE INTO g3 VALUES ('alice', 'person', '{"age":30}')""")
    simple_query(s,
        """GRAPH UPSERT NODE INTO g3 VALUES ('alice', 'person', '{"age":31}')""")
    _, rows, _, _ = simple_query(s, "SELECT props FROM kg_g3_nodes")
    assert len(rows) == 1, f"should be 1 row: {rows}"
    assert "31" in rows[0][0], f"latest props: {rows[0][0]}"


# ─── 4. UPSERT EDGE creates a live edge ───
def test_upsert_edge_live():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g4")
    simple_query(s, "CREATE GRAPH STORE g4")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g4 VALUES ('alice','knows','bob')")
    _, rows, _, _ = simple_query(s,
        "GRAPH NEIGHBORS OF 'alice' IN g4")
    assert edge_set(rows) == [("alice", "knows", "bob")]


# ─── 5. UPSERT EDGE on existing closes prior ───
def test_upsert_edge_closes_prior():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g5")
    simple_query(s, "CREATE GRAPH STORE g5")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g5 VALUES ('alice','works_at','acme')")
    time.sleep(1.1)
    simple_query(s,
        """GRAPH UPSERT EDGE INTO g5 VALUES """
        """('alice','works_at','acme','{"role":"engineer"}')""")
    _, rows, _, _ = simple_query(s,
        "GRAPH NEIGHBORS OF 'alice' IN g5")
    assert len(rows) == 1, f"only one live edge: {rows}"
    assert "engineer" in (rows[0][3] or ""), f"latest props: {rows[0]}"
    # raw view: 2 rows total (one closed)
    _, raw, _, _ = simple_query(s,
        "SELECT invalid_at FROM kg_g5_edges")
    closed = [r for r in raw if r[0] is not None]
    open_ = [r for r in raw if r[0] is None]
    assert len(closed) == 1 and len(open_) == 1, f"counts: {raw}"


# ─── 6. NEIGHBORS returns multiple edges from same src ───
def test_multiple_edges():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g6")
    simple_query(s, "CREATE GRAPH STORE g6")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g6 VALUES ('alice','knows','bob')")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g6 VALUES ('alice','knows','carol')")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g6 VALUES ('alice','works_at','acme')")
    _, rows, _, _ = simple_query(s,
        "GRAPH NEIGHBORS OF 'alice' IN g6")
    assert edge_set(rows) == sorted([
        ("alice", "knows", "bob"),
        ("alice", "knows", "carol"),
        ("alice", "works_at", "acme"),
    ]), f"all live: {rows}"


# ─── 7. Different src don't interfere ───
def test_isolation():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g7")
    simple_query(s, "CREATE GRAPH STORE g7")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g7 VALUES ('alice','knows','bob')")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g7 VALUES ('carol','knows','bob')")
    _, alice, _, _ = simple_query(s, "GRAPH NEIGHBORS OF 'alice' IN g7")
    _, carol, _, _ = simple_query(s, "GRAPH NEIGHBORS OF 'carol' IN g7")
    assert edge_set(alice) == [("alice", "knows", "bob")]
    assert edge_set(carol) == [("carol", "knows", "bob")]


# ─── 8. NEIGHBORS DEPTH n accepted ───
def test_depth_accepted():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g8")
    simple_query(s, "CREATE GRAPH STORE g8")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g8 VALUES ('alice','knows','bob')")
    _, _, err, _ = simple_query(s,
        "GRAPH NEIGHBORS OF 'alice' IN g8 DEPTH 2")
    assert err is None, f"depth 2: {err}"


# ─── 9. NEIGHBORS AS OF returns historical view ───
def test_as_of():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g9")
    simple_query(s, "CREATE GRAPH STORE g9")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g9 VALUES ('alice','works_at','acme')")
    # capture the wall-clock right after the first edge is live
    t1 = simple_query(s,
        "SELECT valid_from FROM kg_g9_edges WHERE src='alice'")[1][0][0]
    time.sleep(1.5)
    # close prior + insert new
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g9 VALUES ('alice','works_at','globex')")
    # AS OF the original moment: should still see acme
    _, rows, _, _ = simple_query(s,
        f"GRAPH NEIGHBORS OF 'alice' IN g9 AS OF '{t1}'")
    dsts = sorted(r[2] for r in rows)
    assert dsts == ["acme"], f"AS OF t1 should see acme: {rows}"


# ─── 10. NEIGHBORS without AS OF shows current state ───
#       Different (src,rel,dst) triples are independent — alice can
#       work_at multiple companies in parallel; only an UPSERT on the
#       SAME triple closes the prior. Same-triple close is exercised
#       in test_upsert_edge_closes_prior.
def test_current_state():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g10")
    simple_query(s, "CREATE GRAPH STORE g10")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g10 VALUES ('alice','works_at','acme')")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g10 VALUES ('alice','knows','bob')")
    _, rows, _, _ = simple_query(s,
        "GRAPH NEIGHBORS OF 'alice' IN g10")
    rels = sorted(r[1] for r in rows)
    assert rels == ["knows", "works_at"], f"current: {rows}"


# ─── 11. NEIGHBORS with no edges returns empty ───
def test_empty_neighbors():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g11")
    simple_query(s, "CREATE GRAPH STORE g11")
    _, rows, _, _ = simple_query(s,
        "GRAPH NEIGHBORS OF 'nobody' IN g11")
    assert rows == [], f"orphan: {rows}"


# ─── 12. Missing store rejected on UPSERT ───
def test_missing_store():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g_missing")
    _, _, err, _ = simple_query(s,
        "GRAPH UPSERT EDGE INTO g_missing VALUES ('a','b','c')")
    assert err is not None


# ─── 13. Duplicate CREATE rejected ───
def test_duplicate_create():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g13")
    simple_query(s, "CREATE GRAPH STORE g13")
    _, _, err, _ = simple_query(s, "CREATE GRAPH STORE g13")
    assert err is not None


# ─── 14. UPSERT EDGE with props ───
def test_upsert_edge_with_props():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g14")
    simple_query(s, "CREATE GRAPH STORE g14")
    simple_query(s,
        """GRAPH UPSERT EDGE INTO g14 VALUES """
        """('alice','knows','bob','{"since":"2020"}')""")
    _, rows, _, _ = simple_query(s, "GRAPH NEIGHBORS OF 'alice' IN g14")
    assert len(rows) == 1
    assert "since" in (rows[0][3] or "")


# ─── 15. Drop store removes backing tables ───
def test_drop_removes_backing():
    s = conn()
    simple_query(s, "DROP GRAPH STORE IF EXISTS g15")
    simple_query(s, "CREATE GRAPH STORE g15")
    simple_query(s,
        "GRAPH UPSERT EDGE INTO g15 VALUES ('a','b','c')")
    simple_query(s, "DROP GRAPH STORE g15")
    _, _, err, _ = simple_query(s, "SELECT * FROM kg_g15_edges")
    assert err is not None, "backing table should be gone"


if __name__ == "__main__":
    print("=== test_graph_store.py (Task 224) ===\n")
    run("CREATE / DROP",                      test_create_drop)
    run("SHOW GRAPH STORES lists",            test_show_lists)
    run("UPSERT NODE replaces on same id",    test_upsert_node_replace)
    run("UPSERT EDGE creates live edge",       test_upsert_edge_live)
    run("UPSERT EDGE closes prior triple",     test_upsert_edge_closes_prior)
    run("NEIGHBORS returns multiple edges",   test_multiple_edges)
    run("Different src don't interfere",       test_isolation)
    run("NEIGHBORS DEPTH N accepted",          test_depth_accepted)
    run("AS OF returns historical view",       test_as_of)
    run("NEIGHBORS without AS OF = current",   test_current_state)
    run("NEIGHBORS on orphan id returns []",  test_empty_neighbors)
    run("Missing store rejected",              test_missing_store)
    run("Duplicate CREATE rejected",           test_duplicate_create)
    run("UPSERT EDGE with props",              test_upsert_edge_with_props)
    run("DROP removes backing tables",         test_drop_removes_backing)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
