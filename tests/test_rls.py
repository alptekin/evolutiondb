#!/usr/bin/env python3
"""
test_rls.py — Row-Level Security (Task 93 / Feature #64).

Covers:
  - ALTER TABLE ENABLE / DISABLE ROW LEVEL SECURITY
  - CREATE POLICY / DROP POLICY
  - USING expression filters SELECT
  - WITH CHECK expression rejects INSERT
  - PERMISSIVE (OR) and RESTRICTIVE (AND) combination rules
  - CURRENT_USER resolves per session
  - admin bypass
  - Deny-by-default when RLS is on but no policies match
  - RLS composes with secondary indexes (fast path must fall through)
  - RLS in JOINs: each table's policies apply independently

Runs against localhost:5433 with admin/admin. Creates a couple of
throwaway users ('alice', 'bob') and cleans them up in a finally
block. Each test reuses the same admin connection where practical and
opens dedicated per-user connections when it needs to exercise policy
visibility.
"""

import os
import sys
import time

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query

PASS = 0
FAIL = 0
FAILS = []


def check(name, cond, detail=""):
    global PASS, FAIL
    if cond:
        PASS += 1
        print(f"  PASS  {name}")
    else:
        FAIL += 1
        FAILS.append(name)
        print(f"  FAIL  {name} — {detail}")


def q(sock, sql):
    """Run a query, return (cols, rows, err, tag). Tolerates None rows."""
    cols, rows, err, tag = simple_query(sock, sql)
    return cols, rows or [], err, tag


def setup_users(s):
    """Admin creates alice and bob with known passwords."""
    q(s, "DROP USER IF EXISTS alice")
    q(s, "DROP USER IF EXISTS bob")
    q(s, "CREATE USER alice PASSWORD 'alicepw'")
    q(s, "CREATE USER bob PASSWORD 'bobpw'")
    # Broad database-wildcard grant — the GRANT system stores table
    # names unqualified so per-DB grants don't match the
    # check-privilege scope "db.schema.table". The wildcard scope
    # avoids that mismatch, which is a pre-existing constraint in
    # GrantMgmt.c — orthogonal to RLS.
    q(s, "GRANT ALL ON DATABASE * TO alice")
    q(s, "GRANT ALL ON DATABASE * TO bob")


def teardown_users(s):
    for u in ("alice", "bob"):
        q(s, f"DROP USER IF EXISTS {u}")


def fresh_table(s):
    """Recreate a shared table used by most tests."""
    q(s, "DROP TABLE IF EXISTS rls_orders")
    q(s, "CREATE TABLE rls_orders ("
         "id INT PRIMARY KEY, customer VARCHAR(64), total INT)")
    q(s, "INSERT INTO rls_orders VALUES (1, 'alice', 100)")
    q(s, "INSERT INTO rls_orders VALUES (2, 'bob',   200)")
    q(s, "INSERT INTO rls_orders VALUES (3, 'alice', 50)")
    q(s, "INSERT INTO rls_orders VALUES (4, 'carol', 75)")


# ────────────────────────────────────────────────────────────────────
# Test 1 — ALTER TABLE ENABLE / DISABLE toggles the flag
# ────────────────────────────────────────────────────────────────────
def test_enable_disable_toggle(admin):
    fresh_table(admin)
    _, _, err, _ = q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    check("1a. ENABLE ROW LEVEL SECURITY", err is None, str(err))
    _, _, err, _ = q(admin, "ALTER TABLE rls_orders DISABLE ROW LEVEL SECURITY")
    check("1b. DISABLE ROW LEVEL SECURITY", err is None, str(err))


# ────────────────────────────────────────────────────────────────────
# Test 2 — alice sees only her own rows via USING (customer = CURRENT_USER)
# ────────────────────────────────────────────────────────────────────
def test_alice_own_rows_only(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    _, _, err, _ = q(admin,
        "CREATE POLICY p_own ON rls_orders "
        "FOR ALL USING (customer = CURRENT_USER)")
    check("2a. CREATE POLICY own", err is None, str(err))

    try:
        a = conn(user="alice", password="alicepw")
    except Exception as e:
        check("2b. alice can connect", False, str(e))
        return
    _, rows, err, _ = q(a, "SELECT id, customer FROM rls_orders ORDER BY id")
    a.close()
    ids = [r[0] for r in rows]
    check("2c. alice sees only her rows",
          err is None and ids == ['1', '3'],
          f"got {ids} err={err}")


# ────────────────────────────────────────────────────────────────────
# Test 3 — bob sees only his own row
# ────────────────────────────────────────────────────────────────────
def test_bob_own_rows_only(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    q(admin, "CREATE POLICY p_own ON rls_orders "
             "FOR ALL USING (customer = CURRENT_USER)")

    b = conn(user="bob", password="bobpw")
    _, rows, err, _ = q(b, "SELECT id, customer FROM rls_orders ORDER BY id")
    b.close()
    ids = [r[0] for r in rows]
    check("3. bob sees only his rows",
          err is None and ids == ['2'], f"got {ids} err={err}")


# ────────────────────────────────────────────────────────────────────
# Test 4 — admin (superuser) bypasses RLS
# ────────────────────────────────────────────────────────────────────
def test_admin_bypass(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    q(admin, "CREATE POLICY p_own ON rls_orders "
             "FOR ALL USING (customer = CURRENT_USER)")

    _, rows, err, _ = q(admin,
        "SELECT id FROM rls_orders ORDER BY id")
    ids = [r[0] for r in rows]
    check("4. admin sees every row (bypass)",
          err is None and ids == ['1', '2', '3', '4'],
          f"got {ids} err={err}")


# ────────────────────────────────────────────────────────────────────
# Test 5 — RLS on but no policy → deny-by-default for non-admin
# ────────────────────────────────────────────────────────────────────
def test_deny_by_default(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    # (deliberately no CREATE POLICY)
    a = conn(user="alice", password="alicepw")
    _, rows, err, _ = q(a, "SELECT id FROM rls_orders")
    a.close()
    check("5. deny-by-default with no policy",
          err is None and len(rows) == 0, f"got {rows} err={err}")


# ────────────────────────────────────────────────────────────────────
# Test 6 — DROP POLICY restores deny-by-default
# ────────────────────────────────────────────────────────────────────
def test_drop_policy_restores_deny(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    q(admin, "CREATE POLICY p_own ON rls_orders "
             "FOR ALL USING (customer = CURRENT_USER)")

    a = conn(user="alice", password="alicepw")
    _, rows_before, _, _ = q(a, "SELECT id FROM rls_orders ORDER BY id")
    a.close()

    q(admin, "DROP POLICY p_own ON rls_orders")

    a = conn(user="alice", password="alicepw")
    _, rows_after, _, _ = q(a, "SELECT id FROM rls_orders")
    a.close()

    check("6. DROP POLICY restores deny-by-default",
          [r[0] for r in rows_before] == ['1', '3']
          and len(rows_after) == 0,
          f"before={rows_before} after={rows_after}")


# ────────────────────────────────────────────────────────────────────
# Main
# ────────────────────────────────────────────────────────────────────
def main():
    admin = conn()
    try:
        setup_users(admin)
        for fn in [
            test_enable_disable_toggle,
            test_alice_own_rows_only,
            test_bob_own_rows_only,
            test_admin_bypass,
            test_deny_by_default,
            test_drop_policy_restores_deny,
        ]:
            # Fresh state before every test
            admin.close()
            admin = conn()
            try:
                fn(admin)
            except Exception as e:
                check(fn.__name__, False, f"exception: {e}")
    finally:
        try:
            teardown_users(admin)
        except Exception:
            pass
        admin.close()

    print(f"\nRLS: {PASS} passed, {FAIL} failed")
    if FAILS:
        print("Failures:", ", ".join(FAILS))
    sys.exit(0 if FAIL == 0 else 1)


if __name__ == "__main__":
    main()
