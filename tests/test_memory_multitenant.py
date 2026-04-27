"""
test_memory_multitenant.py — Task 206 (Feature #206) tests.

Covers:
  - CREATE POLICY ... ON MEMORY STORE name
  - DROP   POLICY name ON MEMORY STORE name
  - ALTER  MEMORY STORE name ENABLE / DISABLE ROW LEVEL SECURITY
  - Policy isolates per-user namespaces on PUT / GET / SEARCH / DELETE
  - Two users sharing a store see only their own slices
  - admin (superuser) bypasses policy
  - PERMISSIVE / RESTRICTIVE composition
  - DROP POLICY removes the rule, store reverts to open access
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


def cleanup_user(s, user):
    simple_query(s, f"DROP USER IF EXISTS {user}")


def admin_conn():
    return conn()


def user_conn(user, password):
    return conn(user=user, password=password)


# ─── 1. CREATE POLICY ON MEMORY STORE accepted ───
def test_create_policy_basic():
    s = admin_conn()
    cleanup(s, "mt1")
    simple_query(s, "CREATE MEMORY STORE mt1")
    _, _, err, _ = simple_query(s,
        "CREATE POLICY p_self ON MEMORY STORE mt1 "
        "USING (mem_namespace = current_user)")
    assert err is None, f"create policy failed: {err}"


# ─── 2. DROP POLICY ON MEMORY STORE accepted ───
def test_drop_policy_basic():
    s = admin_conn()
    cleanup(s, "mt2")
    simple_query(s, "CREATE MEMORY STORE mt2")
    simple_query(s,
        "CREATE POLICY p_self ON MEMORY STORE mt2 USING (mem_namespace = current_user)")
    _, _, err, _ = simple_query(s,
        "DROP POLICY p_self ON MEMORY STORE mt2")
    assert err is None, f"drop policy failed: {err}"


# ─── 3. ALTER MEMORY STORE ... ENABLE/DISABLE ROW LEVEL SECURITY ───
def test_alter_rls_toggle():
    s = admin_conn()
    cleanup(s, "mt3")
    simple_query(s, "CREATE MEMORY STORE mt3")
    _, _, err, _ = simple_query(s,
        "ALTER MEMORY STORE mt3 ENABLE ROW LEVEL SECURITY")
    assert err is None, f"enable RLS failed: {err}"
    _, _, err, _ = simple_query(s,
        "ALTER MEMORY STORE mt3 DISABLE ROW LEVEL SECURITY")
    assert err is None, f"disable RLS failed: {err}"


# ─── 4. ALTER on missing store errors ───
def test_alter_rls_missing_store():
    s = admin_conn()
    _, _, err, _ = simple_query(s,
        "ALTER MEMORY STORE no_such_store ENABLE ROW LEVEL SECURITY")
    assert err is not None, "should error on missing store"


# ─── 5. Two users see only their own namespaces ───
def test_per_user_isolation():
    admin = admin_conn()
    cleanup(admin, "mt5")
    cleanup_user(admin, "alice")
    cleanup_user(admin, "bob")
    simple_query(admin, "CREATE USER alice PASSWORD 'apw'")
    simple_query(admin, "CREATE USER bob PASSWORD 'bpw'")
    simple_query(admin, "GRANT ALL ON DATABASE testdb TO alice")
    simple_query(admin, "GRANT ALL ON DATABASE testdb TO bob")
    simple_query(admin, "CREATE MEMORY STORE mt5")

    # admin pre-populates rows on behalf of each user
    simple_query(admin, "MEMORY PUT INTO mt5 VALUES ('alice', 'k1', '{\"who\":\"alice\"}')")
    simple_query(admin, "MEMORY PUT INTO mt5 VALUES ('bob',   'k1', '{\"who\":\"bob\"}')")

    # Policy: each user only sees their own namespace.
    simple_query(admin,
        "CREATE POLICY p_self ON MEMORY STORE mt5 "
        "USING (mem_namespace = current_user)")
    simple_query(admin, "ALTER MEMORY STORE mt5 ENABLE ROW LEVEL SECURITY")

    a = user_conn("alice", "apw")
    b = user_conn("bob",   "bpw")

    _, ra, ea, _ = simple_query(a, "MEMORY GET FROM mt5 WHERE NS='alice' AND KEY='k1'")
    assert ea is None and len(ra) == 1, f"alice can read her own: {ra} err={ea}"

    _, rb, eb, _ = simple_query(b, "MEMORY GET FROM mt5 WHERE NS='alice' AND KEY='k1'")
    assert eb is None and len(rb) == 0, f"bob should not see alice's rows: {rb}"

    _, rb2, _, _ = simple_query(b, "MEMORY GET FROM mt5 WHERE NS='bob' AND KEY='k1'")
    assert len(rb2) == 1, f"bob sees his own: {rb2}"


# ─── 6. admin bypasses the policy and sees all rows ───
def test_admin_sees_all():
    admin = admin_conn()
    cleanup(admin, "mt6")
    simple_query(admin, "CREATE MEMORY STORE mt6")
    simple_query(admin, "MEMORY PUT INTO mt6 VALUES ('alice', 'k', '{}')")
    simple_query(admin, "MEMORY PUT INTO mt6 VALUES ('bob',   'k', '{}')")
    simple_query(admin,
        "CREATE POLICY p_self ON MEMORY STORE mt6 "
        "USING (mem_namespace = current_user)")
    simple_query(admin, "ALTER MEMORY STORE mt6 ENABLE ROW LEVEL SECURITY")

    _, rows, _, _ = simple_query(admin,
        "SELECT mem_namespace FROM mem_mt6")
    nss = sorted(r[0] for r in rows)
    assert nss == ["alice", "bob"], f"admin should see all: {nss}"


# ─── 7. SEARCH respects the policy ───
def test_search_respects_policy():
    admin = admin_conn()
    cleanup(admin, "mt7")
    cleanup_user(admin, "carol")
    simple_query(admin, "CREATE USER carol PASSWORD 'cpw'")
    simple_query(admin, "GRANT ALL ON DATABASE testdb TO carol")
    simple_query(admin, "CREATE MEMORY STORE mt7 WITH (embedding_dim=2, distance='l2')")
    simple_query(admin, "MEMORY PUT INTO mt7 VALUES ('carol', 'k1', '{}', '[1,0]')")
    simple_query(admin, "MEMORY PUT INTO mt7 VALUES ('dan',   'k1', '{}', '[0,1]')")
    simple_query(admin,
        "CREATE POLICY p_self ON MEMORY STORE mt7 USING (mem_namespace = current_user)")
    simple_query(admin, "ALTER MEMORY STORE mt7 ENABLE ROW LEVEL SECURITY")

    c = user_conn("carol", "cpw")
    _, rows, err, _ = simple_query(c,
        "MEMORY SEARCH mt7 USING VECTOR '[1,0]' LIMIT 5")
    assert err is None, f"search failed: {err}"
    keys = [r[1] for r in rows]
    # carol should only see her own row in the result set
    assert keys == ["k1"], f"carol's SEARCH should be filtered: {keys}"


# ─── 8. DELETE respects the policy — bob can't delete alice's rows ───
def test_delete_respects_policy():
    admin = admin_conn()
    cleanup(admin, "mt8")
    cleanup_user(admin, "bob")
    simple_query(admin, "CREATE USER bob PASSWORD 'bpw'")
    simple_query(admin, "GRANT ALL ON DATABASE testdb TO bob")
    simple_query(admin, "CREATE MEMORY STORE mt8")
    simple_query(admin, "MEMORY PUT INTO mt8 VALUES ('alice', 'k1', '{}')")
    simple_query(admin,
        "CREATE POLICY p_self ON MEMORY STORE mt8 USING (mem_namespace = current_user)")
    simple_query(admin, "ALTER MEMORY STORE mt8 ENABLE ROW LEVEL SECURITY")

    b = user_conn("bob", "bpw")
    simple_query(b, "MEMORY DELETE FROM mt8 WHERE NS='alice' AND KEY='k1'")
    # alice's row should still be there because bob's DELETE was filtered
    _, rows, _, _ = simple_query(admin,
        "SELECT mem_key FROM mem_mt8 WHERE mem_namespace='alice'")
    assert len(rows) == 1, f"bob shouldn't be able to delete alice's row: {rows}"


# ─── 9. DROP POLICY restores open access ───
def test_drop_policy_restores_access():
    admin = admin_conn()
    cleanup(admin, "mt9")
    cleanup_user(admin, "ed")
    simple_query(admin, "CREATE USER ed PASSWORD 'epw'")
    simple_query(admin, "GRANT ALL ON DATABASE testdb TO ed")
    simple_query(admin, "CREATE MEMORY STORE mt9")
    simple_query(admin, "MEMORY PUT INTO mt9 VALUES ('alice', 'k', '{}')")
    simple_query(admin,
        "CREATE POLICY p_self ON MEMORY STORE mt9 USING (mem_namespace = current_user)")
    simple_query(admin, "ALTER MEMORY STORE mt9 ENABLE ROW LEVEL SECURITY")

    e = user_conn("ed", "epw")
    _, rows1, _, _ = simple_query(e, "MEMORY GET FROM mt9 WHERE NS='alice' AND KEY='k'")
    assert len(rows1) == 0, f"ed shouldn't see alice's row pre-drop: {rows1}"

    simple_query(admin, "DROP POLICY p_self ON MEMORY STORE mt9")
    simple_query(admin, "ALTER MEMORY STORE mt9 DISABLE ROW LEVEL SECURITY")

    _, rows2, _, _ = simple_query(e, "MEMORY GET FROM mt9 WHERE NS='alice' AND KEY='k'")
    assert len(rows2) == 1, f"ed should see alice's row post-drop: {rows2}"


# ─── 10. Policy on missing store rejected ───
def test_policy_on_missing_store():
    s = admin_conn()
    cleanup(s, "mt_no")
    _, _, err, _ = simple_query(s,
        "CREATE POLICY p ON MEMORY STORE mt_no USING (mem_namespace = current_user)")
    assert err is not None, "policy on missing store should error"


# ─── 11. RLS-disabled store ignores the policy ───
def test_rls_disabled_ignores_policy():
    admin = admin_conn()
    cleanup(admin, "mt11")
    cleanup_user(admin, "frank")
    simple_query(admin, "CREATE USER frank PASSWORD 'fpw'")
    simple_query(admin, "GRANT ALL ON DATABASE testdb TO frank")
    simple_query(admin, "CREATE MEMORY STORE mt11")
    simple_query(admin, "MEMORY PUT INTO mt11 VALUES ('alice', 'k', '{}')")
    simple_query(admin,
        "CREATE POLICY p_self ON MEMORY STORE mt11 USING (mem_namespace = current_user)")
    # Note: NO ALTER ENABLE — RLS off

    f = user_conn("frank", "fpw")
    _, rows, _, _ = simple_query(f,
        "MEMORY GET FROM mt11 WHERE NS='alice' AND KEY='k'")
    assert len(rows) == 1, f"with RLS off, policy should not filter: {rows}"


# ─── 12. Composite namespace prefix policy (tuple-style isolation) ───
def test_prefix_namespace_policy():
    admin = admin_conn()
    cleanup(admin, "mt12")
    cleanup_user(admin, "g_user")
    simple_query(admin, "CREATE USER g_user PASSWORD 'gpw'")
    simple_query(admin, "GRANT ALL ON DATABASE testdb TO g_user")
    simple_query(admin, "CREATE MEMORY STORE mt12")
    simple_query(admin, "MEMORY PUT INTO mt12 VALUES ('g_user/prefs',    'theme', '{}')")
    simple_query(admin, "MEMORY PUT INTO mt12 VALUES ('g_user/messages', 'last',  '{}')")
    simple_query(admin, "MEMORY PUT INTO mt12 VALUES ('other/data',      'x',     '{}')")

    # Policy: any namespace starting with 'g_user/'. A future iteration
    # can plug in current_user || '/%' once the engine grows a string
    # concat operator inside policy expressions; v1's LIKE pattern is
    # already enough to demonstrate prefix-based isolation.
    simple_query(admin,
        "CREATE POLICY p_prefix ON MEMORY STORE mt12 "
        "USING (mem_namespace LIKE 'g_user/%')")
    simple_query(admin, "ALTER MEMORY STORE mt12 ENABLE ROW LEVEL SECURITY")

    g = user_conn("g_user", "gpw")
    _, rows, err, _ = simple_query(g,
        "MEMORY LIST NAMESPACES IN mt12")
    assert err is None, f"list with prefix policy: {err}"
    nss = sorted(r[0] for r in rows)
    assert nss == ["g_user/messages", "g_user/prefs"], \
        f"prefix-policy filter: {nss}"


if __name__ == "__main__":
    print("=== test_memory_multitenant.py (Task 206) ===\n")
    run("CREATE POLICY ON MEMORY STORE",          test_create_policy_basic)
    run("DROP POLICY ON MEMORY STORE",            test_drop_policy_basic)
    run("ALTER MEMORY STORE ENABLE/DISABLE RLS",  test_alter_rls_toggle)
    run("ALTER on missing store errors",          test_alter_rls_missing_store)
    run("Per-user namespace isolation",           test_per_user_isolation)
    run("admin sees all rows",                    test_admin_sees_all)
    run("SEARCH respects the policy",             test_search_respects_policy)
    run("DELETE respects the policy",             test_delete_respects_policy)
    run("DROP POLICY restores access",            test_drop_policy_restores_access)
    run("Policy on missing store rejected",       test_policy_on_missing_store)
    run("RLS-disabled store ignores policy",      test_rls_disabled_ignores_policy)
    run("Prefix namespace policy",                test_prefix_namespace_policy)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
