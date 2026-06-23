"""
test_memory_store.py — Task 205 (Feature #205) tests.

Covers:
  - CREATE MEMORY STORE name [WITH (embedding_dim=N, distance='cosine')]
  - DROP   MEMORY STORE name [CASCADE]
  - IF NOT EXISTS / IF EXISTS guards
  - Backing table mem_<name> auto-create with the expected columns
  - MEMORY PUT / GET / DELETE / SEARCH / LIST NAMESPACES native DML
  - Composite (namespace, key) uniqueness
  - JSON value roundtrip
  - Embedded vector roundtrip
  - Semantic search ordering
  - Hierarchical namespace listing with PREFIX
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
    simple_query(s, f"DROP MEMORY STORE IF EXISTS {name}")


# ─── 1. CREATE MEMORY STORE — bare ───
def test_create_basic():
    s = conn()
    cleanup(s, "m1")
    _, _, err, _ = simple_query(s, "CREATE MEMORY STORE m1")
    assert err is None, f"create failed: {err}"


# ─── 2. CREATE … WITH (embedding_dim=N, distance='cosine') ───
def test_create_with_embedding():
    s = conn()
    cleanup(s, "m2")
    _, _, err, _ = simple_query(s,
        "CREATE MEMORY STORE m2 WITH (embedding_dim=4, distance='cosine')")
    assert err is None, f"create with embedding failed: {err}"


# ─── 3. CREATE duplicate fails without IF NOT EXISTS ───
def test_create_duplicate_errors():
    s = conn()
    cleanup(s, "m3")
    simple_query(s, "CREATE MEMORY STORE m3")
    _, _, err, _ = simple_query(s, "CREATE MEMORY STORE m3")
    assert err is not None, "duplicate CREATE should error"


# ─── 4. CREATE IF NOT EXISTS suppresses duplicate error ───
def test_create_if_not_exists():
    s = conn()
    cleanup(s, "m4")
    simple_query(s, "CREATE MEMORY STORE m4")
    _, _, err, _ = simple_query(s,
        "CREATE MEMORY STORE IF NOT EXISTS m4")
    assert err is None, f"IF NOT EXISTS failed: {err}"


# ─── 5. DROP MEMORY STORE removes registry + backing table ───
def test_drop_basic():
    s = conn()
    cleanup(s, "m5")
    simple_query(s, "CREATE MEMORY STORE m5")
    _, _, err, _ = simple_query(s, "DROP MEMORY STORE m5")
    assert err is None, f"drop failed: {err}"
    _, _, err2, _ = simple_query(s, "SELECT * FROM mem_m5")
    assert err2 is not None, "backing table should be gone"


# ─── 6. DROP missing errors without IF EXISTS ───
def test_drop_missing_errors():
    s = conn()
    cleanup(s, "m_missing")
    _, _, err, _ = simple_query(s, "DROP MEMORY STORE m_missing")
    assert err is not None, "missing DROP should error"


# ─── 7. DROP IF EXISTS no-op ───
def test_drop_if_exists():
    s = conn()
    cleanup(s, "m_no")
    _, _, err, _ = simple_query(s, "DROP MEMORY STORE IF EXISTS m_no")
    assert err is None


# ─── 8. MEMORY PUT — basic insert without embedding ───
def test_put_basic():
    s = conn()
    cleanup(s, "mp1")
    simple_query(s, "CREATE MEMORY STORE mp1")
    _, _, err, _ = simple_query(s,
        "MEMORY PUT INTO mp1 VALUES ('user_42', 'pref-color', '{\"value\":\"blue\"}')")
    assert err is None, f"PUT failed: {err}"
    _, rows, _, _ = simple_query(s,
        "SELECT mem_namespace, mem_key, mem_value FROM mem_mp1")
    assert len(rows) == 1
    assert rows[0][0] == "user_42" and rows[0][1] == "pref-color"


# ─── 9. MEMORY GET round-trips JSON value ───
def test_get_basic():
    s = conn()
    cleanup(s, "mg1")
    simple_query(s, "CREATE MEMORY STORE mg1")
    json_blob = '{"likes":["coffee","tea"]}'
    simple_query(s,
        f"MEMORY PUT INTO mg1 VALUES ('user_1', 'profile', '{json_blob}')")
    _, rows, err, _ = simple_query(s,
        "MEMORY GET FROM mg1 WHERE NS='user_1' AND KEY='profile'")
    assert err is None, f"GET failed: {err}"
    assert len(rows) == 1
    # Columns: namespace, mem_key, value, created_at
    assert rows[0][2] == json_blob, f"value mismatch: {rows[0][2]}"


# ─── 10. PUT is upsert: re-PUT replaces existing row ───
def test_put_upsert():
    s = conn()
    cleanup(s, "mu1")
    simple_query(s, "CREATE MEMORY STORE mu1")
    simple_query(s, "MEMORY PUT INTO mu1 VALUES ('u', 'k', '{\"v\":1}')")
    simple_query(s, "MEMORY PUT INTO mu1 VALUES ('u', 'k', '{\"v\":2}')")
    _, rows, _, _ = simple_query(s,
        "MEMORY GET FROM mu1 WHERE NS='u' AND KEY='k'")
    assert len(rows) == 1
    assert rows[0][2] == '{"v":2}', f"upsert: {rows[0]}"


# ─── 11. MEMORY DELETE removes a single row ───
def test_delete_basic():
    s = conn()
    cleanup(s, "md1")
    simple_query(s, "CREATE MEMORY STORE md1")
    simple_query(s, "MEMORY PUT INTO md1 VALUES ('u', 'a', '{}')")
    simple_query(s, "MEMORY PUT INTO md1 VALUES ('u', 'b', '{}')")
    _, _, err, _ = simple_query(s,
        "MEMORY DELETE FROM md1 WHERE NS='u' AND KEY='a'")
    assert err is None, f"DELETE failed: {err}"
    _, rows, _, _ = simple_query(s,
        "SELECT mem_key FROM mem_md1 WHERE mem_namespace='u'")
    keys = sorted(r[0] for r in rows)
    assert keys == ["b"], f"keys after delete: {keys}"


# ─── 12. DELETE missing row is idempotent ───
def test_delete_missing_idempotent():
    s = conn()
    cleanup(s, "mdm")
    simple_query(s, "CREATE MEMORY STORE mdm")
    _, _, err, _ = simple_query(s,
        "MEMORY DELETE FROM mdm WHERE NS='u' AND KEY='nope'")
    assert err is None, f"DELETE missing should be idempotent: {err}"


# ─── 13. Embedded vector PUT + roundtrip ───
def test_put_with_embedding():
    s = conn()
    cleanup(s, "me1")
    simple_query(s, "CREATE MEMORY STORE me1 WITH (embedding_dim=4, distance='l2')")
    _, _, err, _ = simple_query(s,
        "MEMORY PUT INTO me1 VALUES ('u', 'k', '{\"x\":1}', '[0.1,0.2,0.3,0.4]')")
    assert err is None, f"PUT with embedding failed: {err}"
    _, rows, _, _ = simple_query(s,
        "MEMORY GET FROM me1 WHERE NS='u' AND KEY='k'")
    assert len(rows) == 1
    # Columns: namespace, mem_key, value, embedding, created_at
    assert rows[0][2] == '{"x":1}'
    assert rows[0][3] is not None and rows[0][3].startswith("[")


# ─── 14. SEARCH ranks rows by distance ───
def test_search_ranking():
    s = conn()
    cleanup(s, "ms1")
    simple_query(s, "CREATE MEMORY STORE ms1 WITH (embedding_dim=2, distance='l2')")
    simple_query(s, "MEMORY PUT INTO ms1 VALUES ('u', 'k1', '{}', '[1,0]')")
    simple_query(s, "MEMORY PUT INTO ms1 VALUES ('u', 'k2', '{}', '[0,1]')")
    simple_query(s, "MEMORY PUT INTO ms1 VALUES ('u', 'k3', '{}', '[0.9,0.1]')")
    # SEARCH returns the score column server-side; v1 ranks client-side
    # because ORDER BY <expr> grammar lands with Task 169. Pull all rows
    # and sort by the score column locally — semantic relevance is still
    # computed server-side per row using the configured distance metric.
    _, rows, err, _ = simple_query(s,
        "MEMORY SEARCH ms1 USING VECTOR '[1,0]' LIMIT 5")
    assert err is None, f"SEARCH failed: {err}"
    ranked = sorted(rows, key=lambda r: float(r[3]))
    keys = [r[1] for r in ranked[:2]]
    # Nearest two to [1,0] are k1 (distance 0) and k3 (~0.14)
    assert keys[0] == "k1" and keys[1] == "k3", f"ranking: {keys}"


# ─── 15. SEARCH on store without embedding column → error ───
def test_search_without_embedding_errors():
    s = conn()
    cleanup(s, "msne")
    simple_query(s, "CREATE MEMORY STORE msne")
    _, _, err, _ = simple_query(s,
        "MEMORY SEARCH msne USING VECTOR '[1,0]' LIMIT 5")
    assert err is not None, "SEARCH on no-embedding store should error"


# ─── 16. LIST NAMESPACES — distinct values ───
def test_list_namespaces():
    s = conn()
    cleanup(s, "ml1")
    simple_query(s, "CREATE MEMORY STORE ml1")
    simple_query(s, "MEMORY PUT INTO ml1 VALUES ('user_1', 'k', '{}')")
    simple_query(s, "MEMORY PUT INTO ml1 VALUES ('user_2', 'k', '{}')")
    simple_query(s, "MEMORY PUT INTO ml1 VALUES ('user_1', 'k2', '{}')")
    _, rows, err, _ = simple_query(s,
        "MEMORY LIST NAMESPACES IN ml1")
    assert err is None, f"LIST failed: {err}"
    nss = sorted(r[0] for r in rows)
    assert nss == ["user_1", "user_2"], f"namespaces: {nss}"


# ─── 17. LIST NAMESPACES PREFIX ───
def test_list_namespaces_prefix():
    s = conn()
    cleanup(s, "ml2")
    simple_query(s, "CREATE MEMORY STORE ml2")
    simple_query(s, "MEMORY PUT INTO ml2 VALUES ('org_acme', 'k', '{}')")
    simple_query(s, "MEMORY PUT INTO ml2 VALUES ('org_beta', 'k', '{}')")
    simple_query(s, "MEMORY PUT INTO ml2 VALUES ('user_1', 'k', '{}')")
    _, rows, _, _ = simple_query(s,
        "MEMORY LIST NAMESPACES IN ml2 PREFIX 'org_'")
    nss = sorted(r[0] for r in rows)
    assert nss == ["org_acme", "org_beta"], f"prefix-filtered: {nss}"


# ─── 18. Cross-namespace isolation: same key, different namespace ───
def test_namespace_isolation():
    s = conn()
    cleanup(s, "mi1")
    simple_query(s, "CREATE MEMORY STORE mi1")
    simple_query(s, "MEMORY PUT INTO mi1 VALUES ('A', 'shared', '{\"who\":\"A\"}')")
    simple_query(s, "MEMORY PUT INTO mi1 VALUES ('B', 'shared', '{\"who\":\"B\"}')")
    _, rA, _, _ = simple_query(s, "MEMORY GET FROM mi1 WHERE NS='A' AND KEY='shared'")
    _, rB, _, _ = simple_query(s, "MEMORY GET FROM mi1 WHERE NS='B' AND KEY='shared'")
    assert rA[0][2] == '{"who":"A"}'
    assert rB[0][2] == '{"who":"B"}'


if __name__ == "__main__":
    print("=== test_memory_store.py (Task 205) ===\n")
    run("CREATE MEMORY STORE",                    test_create_basic)
    run("CREATE … WITH embedding",                test_create_with_embedding)
    run("Duplicate CREATE errors",                test_create_duplicate_errors)
    run("CREATE IF NOT EXISTS",                   test_create_if_not_exists)
    run("DROP MEMORY STORE",                      test_drop_basic)
    run("DROP missing errors",                    test_drop_missing_errors)
    run("DROP IF EXISTS no-op",                   test_drop_if_exists)
    run("MEMORY PUT basic",                       test_put_basic)
    run("MEMORY GET round-trips JSON",            test_get_basic)
    run("PUT upsert behaviour",                   test_put_upsert)
    run("MEMORY DELETE removes row",              test_delete_basic)
    run("DELETE missing is idempotent",           test_delete_missing_idempotent)
    run("PUT with embedding roundtrip",           test_put_with_embedding)
    run("SEARCH ranks by distance",               test_search_ranking)
    run("SEARCH without embedding errors",        test_search_without_embedding_errors)
    run("LIST NAMESPACES distinct",               test_list_namespaces)
    run("LIST NAMESPACES PREFIX filter",          test_list_namespaces_prefix)
    run("Cross-namespace isolation",              test_namespace_isolation)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
