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
# Test 7 — INSERT violates WITH CHECK → 42501
# ────────────────────────────────────────────────────────────────────
def test_insert_with_check_reject(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    q(admin, "CREATE POLICY p_own ON rls_orders "
             "FOR ALL USING (customer = CURRENT_USER) "
             "WITH CHECK (customer = CURRENT_USER)")
    a = conn(user="alice", password="alicepw")
    # Alice trying to insert bob's row — should be rejected.
    _, _, err, _ = q(a,
        "INSERT INTO rls_orders VALUES (99, 'bob', 10)")
    a.close()
    check("7. INSERT rejected by WITH CHECK",
          err is not None and "42501" in str(err), f"err={err}")


# ────────────────────────────────────────────────────────────────────
# Test 8 — UPDATE only touches USING-matching rows
# ────────────────────────────────────────────────────────────────────
def test_update_filtered_by_using(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    q(admin, "CREATE POLICY p_own ON rls_orders "
             "FOR ALL USING (customer = CURRENT_USER) "
             "WITH CHECK (customer = CURRENT_USER)")
    a = conn(user="alice", password="alicepw")
    # UPDATE takes a WHERE — EvoSQL's legacy UPDATE-sans-WHERE matches a
    # single PK which isn't how PG behaves. We still want to prove the
    # USING gate silently excludes rows the user can't see: the WHERE
    # here asks for total > 0 (all four rows), but alice's policy limits
    # reach to id=1 and id=3. Rows 2 and 4 must stay untouched.
    _, _, err, _ = q(a, "UPDATE rls_orders SET total = 999 WHERE total > 0")
    a.close()
    _, rows, _, _ = q(admin,
        "SELECT id, customer, total FROM rls_orders ORDER BY id")
    by_id = {r[0]: r for r in rows}
    alice_touched = (by_id.get('1', ['?','?','?'])[2] == '999'
                     and by_id.get('3', ['?','?','?'])[2] == '999')
    bob_untouched = by_id.get('2', ['?','?','?'])[2] == '200'
    carol_untouched = by_id.get('4', ['?','?','?'])[2] == '75'
    check("8. UPDATE filtered by USING",
          err is None and alice_touched and bob_untouched and carol_untouched,
          f"rows={rows} err={err}")


# ────────────────────────────────────────────────────────────────────
# Test 9 — DELETE only touches USING-matching rows
# ────────────────────────────────────────────────────────────────────
def test_delete_filtered_by_using(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    q(admin, "CREATE POLICY p_own ON rls_orders "
             "FOR ALL USING (customer = CURRENT_USER)")
    a = conn(user="alice", password="alicepw")
    # Same WHERE-any trick as test 8: the DELETE asks for everything,
    # but only alice's USING-matching rows actually vanish.
    _, _, err, _ = q(a, "DELETE FROM rls_orders WHERE total > 0")
    a.close()
    _, rows, _, _ = q(admin, "SELECT id, customer FROM rls_orders ORDER BY id")
    ids = sorted(r[0] for r in rows)
    check("9. DELETE filtered by USING",
          err is None and ids == ['2', '4'],  # bob + carol survive
          f"remaining={ids} err={err}")


# ────────────────────────────────────────────────────────────────────
# Test 10 — Two PERMISSIVE policies are OR'd
# ────────────────────────────────────────────────────────────────────
def test_permissive_or(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    # Policy A: alice sees her own rows.
    q(admin, "CREATE POLICY p_a ON rls_orders "
             "FOR SELECT USING (customer = CURRENT_USER)")
    # Policy B: alice also sees all rows with customer='carol' (union).
    q(admin, "CREATE POLICY p_b ON rls_orders "
             "FOR SELECT USING (customer = 'carol')")
    a = conn(user="alice", password="alicepw")
    _, rows, _, _ = q(a, "SELECT id FROM rls_orders ORDER BY id")
    a.close()
    ids = sorted(r[0] for r in rows)
    check("10. PERMISSIVE OR composition",
          ids == ['1', '3', '4'],  # alice's two + carol's one
          f"ids={ids}")


# ────────────────────────────────────────────────────────────────────
# Test 11 — RESTRICTIVE AND'd on top of PERMISSIVE
# ────────────────────────────────────────────────────────────────────
def test_permissive_and_restrictive(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    # PERMISSIVE: alice sees her own rows.
    q(admin, "CREATE POLICY p_own ON rls_orders "
             "FOR SELECT USING (customer = CURRENT_USER)")
    # RESTRICTIVE: total must be > 75 (carves id=3 out of alice's view).
    q(admin, "CREATE POLICY p_big ON rls_orders AS RESTRICTIVE "
             "FOR SELECT USING (total > 75)")
    a = conn(user="alice", password="alicepw")
    _, rows, _, _ = q(a, "SELECT id, total FROM rls_orders ORDER BY id")
    a.close()
    ids = sorted(r[0] for r in rows)
    check("11. PERMISSIVE + RESTRICTIVE",
          ids == ['1'],  # id=1 total=100 passes; id=3 total=50 blocked
          f"ids={ids}")


# ────────────────────────────────────────────────────────────────────
# Test 12 — FOR SELECT policy does not apply to UPDATE (PG semantics)
# ────────────────────────────────────────────────────────────────────
def test_for_select_does_not_cover_update(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    # Only a FOR SELECT policy — no FOR UPDATE / FOR ALL.
    q(admin, "CREATE POLICY p_read ON rls_orders "
             "FOR SELECT USING (customer = CURRENT_USER)")
    a = conn(user="alice", password="alicepw")
    # SELECT should work (FOR SELECT matches).
    _, rows_read, _, _ = q(a, "SELECT id FROM rls_orders ORDER BY id")
    # UPDATE has no matching policy → deny-by-default.
    _, _, _, _ = q(a, "UPDATE rls_orders SET total = 111 WHERE total > 0")
    a.close()
    _, rows_admin, _, _ = q(admin, "SELECT total FROM rls_orders ORDER BY id")
    admin_totals = [r[0] for r in rows_admin]
    check("12. FOR SELECT does not cover UPDATE",
          [r[0] for r in rows_read] == ['1', '3']
          and admin_totals == ['100', '200', '50', '75'],
          f"reads={rows_read} admin_totals={admin_totals}")


# ────────────────────────────────────────────────────────────────────
# Test 13 — Complex USING expression (AND with two operators)
# ────────────────────────────────────────────────────────────────────
def test_complex_expression(admin):
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    # Only alice's rows AND total > 60 — should surface id=1 only.
    q(admin, "CREATE POLICY p_complex ON rls_orders "
             "FOR SELECT USING (customer = CURRENT_USER AND total > 60)")
    a = conn(user="alice", password="alicepw")
    _, rows, _, _ = q(a, "SELECT id, total FROM rls_orders ORDER BY id")
    a.close()
    check("13. Complex USING expression",
          [r[0] for r in rows] == ['1'], f"rows={rows}")


# ────────────────────────────────────────────────────────────────────
# Test 14 — RLS + secondary index: fast path must fall through
# ────────────────────────────────────────────────────────────────────
def test_rls_with_secondary_index(admin):
    fresh_table(admin)
    q(admin, "CREATE INDEX idx_customer ON rls_orders (customer)")
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    q(admin, "CREATE POLICY p_own ON rls_orders "
             "FOR SELECT USING (customer = CURRENT_USER)")
    # Alice should still only see her own rows even when the index on
    # customer would short-cut the fast path to bob's rows.
    a = conn(user="alice", password="alicepw")
    _, rows_all, _, _ = q(a, "SELECT id FROM rls_orders ORDER BY id")
    _, rows_bob, _, _ = q(a,
        "SELECT id FROM rls_orders WHERE customer = 'bob'")
    a.close()
    check("14. RLS blocks secondary-index fast path",
          [r[0] for r in rows_all] == ['1', '3'] and rows_bob == [],
          f"all={rows_all} bob={rows_bob}")


# ────────────────────────────────────────────────────────────────────
# Test 15 — JOIN with RLS on both tables: each side filters independently
# ────────────────────────────────────────────────────────────────────
def test_rls_in_join(admin):
    q(admin, "DROP TABLE IF EXISTS rls_owners")
    q(admin, "CREATE TABLE rls_owners "
             "(owner VARCHAR(64) PRIMARY KEY, team VARCHAR(64))")
    q(admin, "INSERT INTO rls_owners VALUES ('alice', 'red')")
    q(admin, "INSERT INTO rls_owners VALUES ('bob',   'blue')")
    fresh_table(admin)
    q(admin, "ALTER TABLE rls_orders ENABLE ROW LEVEL SECURITY")
    q(admin, "CREATE POLICY p_orders_own ON rls_orders "
             "FOR SELECT USING (customer = CURRENT_USER)")
    q(admin, "ALTER TABLE rls_owners ENABLE ROW LEVEL SECURITY")
    q(admin, "CREATE POLICY p_owners_own ON rls_owners "
             "FOR SELECT USING (owner = CURRENT_USER)")
    a = conn(user="alice", password="alicepw")
    _, rows, err, _ = q(a,
        "SELECT o.id, w.team FROM rls_orders o "
        "JOIN rls_owners w ON o.customer = w.owner "
        "ORDER BY o.id")
    a.close()
    ids = [r[0] for r in rows]
    teams = [r[1] for r in rows]
    check("15. RLS on both sides of a JOIN",
          err is None and ids == ['1', '3']
          and all(t == 'red' for t in teams),
          f"rows={rows} err={err}")
    q(admin, "DROP TABLE IF EXISTS rls_owners")


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
            test_insert_with_check_reject,
            test_update_filtered_by_using,
            test_delete_filtered_by_using,
            test_permissive_or,
            test_permissive_and_restrictive,
            test_for_select_does_not_cover_update,
            test_complex_expression,
            test_rls_with_secondary_index,
            test_rls_in_join,
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
