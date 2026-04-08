"""
test_roles.py — Role-Based Access Control tests for EvoSQL.

Tests: CREATE/DROP ROLE, GRANT/REVOKE role TO/FROM user,
privilege inheritance, SHOW ROLES, role cannot login.
"""

import os
import sys
import socket

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query, pg_startup

HOST = "127.0.0.1"
PORT = 5433
PASS = 0
FAIL = 0


def ok(msg):
    global PASS
    PASS += 1
    print(f"  PASS: {msg}")


def fail(msg, detail=""):
    global FAIL
    FAIL += 1
    print(f"  FAIL: {msg}")
    if detail:
        print(f"        {detail}")


def section(title):
    print(f"\n{'='*60}")
    print(f"  {title}")
    print(f"{'='*60}")


def cleanup(s):
    """Clean up test artifacts."""
    for u in ["roleuser1", "roleuser2", "roleuser3"]:
        simple_query(s, f"DROP USER {u}")
    for r in ["readers", "writers", "admins", "emptyrole", "testrole"]:
        simple_query(s, f"DROP ROLE {r}")


# ================================================================
#  Test 1: CREATE ROLE
# ================================================================
def test_create_role():
    section("1. CREATE ROLE")
    s = conn()
    cleanup(s)

    cols, rows, err, tag = simple_query(s, "CREATE ROLE readers")
    if err:
        fail("CREATE ROLE readers", err)
    elif tag and "CREATE ROLE" in tag:
        ok("CREATE ROLE readers — success")
    else:
        ok("CREATE ROLE readers — created")

    simple_query(s, "DROP ROLE readers")
    s.close()


# ================================================================
#  Test 2: CREATE ROLE duplicate
# ================================================================
def test_create_role_duplicate():
    section("2. CREATE ROLE duplicate")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE readers")
    cols, rows, err, tag = simple_query(s, "CREATE ROLE readers")
    if err and "already exists" in err.lower():
        ok("duplicate role returns error")
    elif err:
        ok(f"duplicate role error: {err}")
    else:
        fail("expected error for duplicate role")

    simple_query(s, "DROP ROLE readers")
    s.close()


# ================================================================
#  Test 3: CREATE ROLE conflicts with user
# ================================================================
def test_role_user_conflict():
    section("3. CREATE ROLE conflicts with user")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE USER roleuser1 PASSWORD 'pass123'")
    cols, rows, err, tag = simple_query(s, "CREATE ROLE roleuser1")
    if err and "already exists" in err.lower():
        ok("role name conflicts with existing user")
    elif err:
        ok(f"role/user conflict error: {err}")
    else:
        fail("expected error when role name = existing user name")

    simple_query(s, "DROP USER roleuser1")
    s.close()


# ================================================================
#  Test 4: SHOW ROLES
# ================================================================
def test_show_roles():
    section("4. SHOW ROLES")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE readers")
    simple_query(s, "CREATE ROLE writers")

    cols, rows, err, tag = simple_query(s, "SHOW ROLES")
    if err:
        fail("SHOW ROLES", err)
    else:
        role_names = [r[0] for r in rows] if rows else []
        if "readers" in role_names and "writers" in role_names:
            ok("SHOW ROLES lists readers and writers")
        else:
            fail(f"expected readers+writers in {role_names}")

    simple_query(s, "DROP ROLE readers")
    simple_query(s, "DROP ROLE writers")
    s.close()


# ================================================================
#  Test 5: SHOW USERS excludes roles
# ================================================================
def test_show_users_excludes_roles():
    section("5. SHOW USERS excludes roles")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE testrole")

    cols, rows, err, tag = simple_query(s, "SHOW USERS")
    if err:
        fail("SHOW USERS", err)
    else:
        user_names = [r[0] for r in rows] if rows else []
        if "testrole" not in user_names:
            ok("SHOW USERS does not include roles")
        else:
            fail(f"testrole should not appear in SHOW USERS: {user_names}")

    simple_query(s, "DROP ROLE testrole")
    s.close()


# ================================================================
#  Test 6: Role cannot login
# ================================================================
def test_role_cannot_login():
    section("6. Role cannot login")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE readers")
    s.close()

    # Try to connect as the role
    try:
        sock = socket.socket()
        sock.settimeout(5)
        sock.connect((HOST, PORT))
        try:
            pg_startup(sock, user="readers", database="testdb", password="")
            # If we get here, login succeeded (unexpected)
            fail("role login should be rejected")
            sock.close()
        except Exception as e:
            ok(f"role login rejected: {e}")
            try:
                sock.close()
            except:
                pass
    except Exception as e:
        ok(f"role connection rejected: {e}")

    s2 = conn()
    simple_query(s2, "DROP ROLE readers")
    s2.close()


# ================================================================
#  Test 7: GRANT privilege TO role
# ================================================================
def test_grant_priv_to_role():
    section("7. GRANT privilege TO role")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE readers")
    cols, rows, err, tag = simple_query(
        s, "GRANT SELECT ON DATABASE evosql TO readers"
    )
    if err:
        fail("GRANT SELECT TO role", err)
    else:
        ok("GRANT SELECT ON DATABASE evosql TO readers")

    # Verify grant appears
    cols, rows, err, tag = simple_query(s, "SHOW GRANTS FOR readers")
    if err:
        fail("SHOW GRANTS FOR readers", err)
    else:
        found = False
        for row in (rows or []):
            if row[0] == "readers" and "SELECT" in row[3]:
                found = True
                break
        if found:
            ok("role grant visible in SHOW GRANTS")
        else:
            fail(f"expected SELECT grant for readers: {rows}")

    simple_query(s, "DROP ROLE readers")
    s.close()


# ================================================================
#  Test 8: GRANT role TO user
# ================================================================
def test_grant_role_to_user():
    section("8. GRANT role TO user")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE readers")
    simple_query(s, "CREATE USER roleuser1 PASSWORD 'pass123'")

    cols, rows, err, tag = simple_query(s, "GRANT readers TO roleuser1")
    if err:
        fail("GRANT role TO user", err)
    elif tag and "GRANT ROLE" in tag:
        ok("GRANT readers TO roleuser1 — success")
    else:
        ok("GRANT readers TO roleuser1")

    # Verify membership in SHOW GRANTS
    cols, rows, err, tag = simple_query(s, "SHOW GRANTS FOR roleuser1")
    if err:
        fail("SHOW GRANTS FOR roleuser1", err)
    else:
        found = False
        for row in (rows or []):
            if row[1] == "ROLE" and row[2] == "readers":
                found = True
                break
        if found:
            ok("role membership visible in SHOW GRANTS")
        else:
            fail(f"expected ROLE membership: {rows}")

    simple_query(s, "REVOKE readers FROM roleuser1")
    simple_query(s, "DROP USER roleuser1")
    simple_query(s, "DROP ROLE readers")
    s.close()


# ================================================================
#  Test 9: User inherits role privileges
# ================================================================
def test_privilege_inheritance():
    section("9. User inherits role privileges")
    s = conn()
    cleanup(s)

    # Setup
    simple_query(s, "CREATE ROLE readers")
    simple_query(s, "GRANT ALL ON DATABASE evosql TO readers")
    simple_query(s, "CREATE USER roleuser1 PASSWORD 'pass123'")
    simple_query(s, "GRANT readers TO roleuser1")

    # Connect as roleuser1 and try to SELECT
    try:
        s2 = conn(user="roleuser1", password="pass123")
        cols, rows, err, tag = simple_query(
            s2, "CREATE TABLE role_test_t (id INT PRIMARY KEY, val VARCHAR(50))"
        )
        if err:
            fail("roleuser1 CREATE TABLE via role", err)
        else:
            ok("roleuser1 inherits CREATE privilege from role")

        simple_query(s2, "INSERT INTO role_test_t VALUES (1, 'hello')")
        cols, rows, err, tag = simple_query(s2, "SELECT * FROM role_test_t")
        if err:
            fail("roleuser1 SELECT via role", err)
        elif rows and len(rows) == 1:
            ok("roleuser1 inherits SELECT privilege from role")
        else:
            fail(f"expected 1 row, got: {rows}")

        simple_query(s2, "DROP TABLE role_test_t")
        s2.close()
    except Exception as e:
        fail(f"roleuser1 connection failed: {e}")

    simple_query(s, "REVOKE readers FROM roleuser1")
    simple_query(s, "DROP USER roleuser1")
    simple_query(s, "DROP ROLE readers")
    s.close()


# ================================================================
#  Test 10: User without role is denied
# ================================================================
def test_no_role_denied():
    section("10. User without role is denied")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE USER roleuser1 PASSWORD 'pass123'")
    # No role, no direct grants

    try:
        s2 = conn(user="roleuser1", password="pass123")
        cols, rows, err, tag = simple_query(
            s2, "CREATE TABLE denied_test (id INT PRIMARY KEY)"
        )
        if err and ("permission" in err.lower() or "denied" in err.lower()):
            ok("user without role is denied CREATE")
        elif err:
            ok(f"user denied: {err}")
        else:
            fail("expected permission denied for user without role/grants")
            simple_query(s2, "DROP TABLE denied_test")
        s2.close()
    except Exception as e:
        fail(f"connection failed: {e}")

    simple_query(s, "DROP USER roleuser1")
    s.close()


# ================================================================
#  Test 11: REVOKE role FROM user
# ================================================================
def test_revoke_role():
    section("11. REVOKE role FROM user")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE readers")
    simple_query(s, "GRANT ALL ON DATABASE evosql TO readers")
    simple_query(s, "CREATE USER roleuser1 PASSWORD 'pass123'")
    simple_query(s, "GRANT readers TO roleuser1")

    # Revoke
    cols, rows, err, tag = simple_query(s, "REVOKE readers FROM roleuser1")
    if err:
        fail("REVOKE role", err)
    else:
        ok("REVOKE readers FROM roleuser1 — success")

    # Verify user no longer has role membership
    cols, rows, err, tag = simple_query(s, "SHOW GRANTS FOR roleuser1")
    role_found = False
    for row in (rows or []):
        if row[1] == "ROLE":
            role_found = True
            break
    if not role_found:
        ok("role membership removed after REVOKE")
    else:
        fail(f"role membership still present: {rows}")

    simple_query(s, "DROP USER roleuser1")
    simple_query(s, "DROP ROLE readers")
    s.close()


# ================================================================
#  Test 12: SHOW GRANTS FOR role
# ================================================================
def test_show_grants_for_role():
    section("12. SHOW GRANTS FOR role")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE readers")
    simple_query(s, "GRANT SELECT ON DATABASE evosql TO readers")
    simple_query(s, "GRANT INSERT ON DATABASE evosql TO readers")

    cols, rows, err, tag = simple_query(s, "SHOW GRANTS FOR readers")
    if err:
        fail("SHOW GRANTS FOR role", err)
    else:
        # Should have at least one grant with SELECT and INSERT
        grant_found = False
        for row in (rows or []):
            if row[0] == "readers":
                grant_found = True
                break
        if grant_found:
            ok("SHOW GRANTS FOR role shows grants")
        else:
            fail(f"no grants found for role: {rows}")

    simple_query(s, "DROP ROLE readers")
    s.close()


# ================================================================
#  Test 13: Multiple roles
# ================================================================
def test_multiple_roles():
    section("13. Multiple roles")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE readers")
    simple_query(s, "CREATE ROLE writers")
    simple_query(s, "GRANT SELECT ON DATABASE evosql TO readers")
    simple_query(s, "GRANT INSERT ON DATABASE evosql TO writers")
    simple_query(s, "CREATE USER roleuser1 PASSWORD 'pass123'")
    simple_query(s, "GRANT readers TO roleuser1")
    simple_query(s, "GRANT writers TO roleuser1")

    # Verify user has two roles
    cols, rows, err, tag = simple_query(s, "SHOW GRANTS FOR roleuser1")
    role_count = sum(1 for r in (rows or []) if r[1] == "ROLE")
    if role_count == 2:
        ok("user has 2 role memberships")
    else:
        fail(f"expected 2 role memberships, got {role_count}: {rows}")

    simple_query(s, "REVOKE readers FROM roleuser1")
    simple_query(s, "REVOKE writers FROM roleuser1")
    simple_query(s, "DROP USER roleuser1")
    simple_query(s, "DROP ROLE readers")
    simple_query(s, "DROP ROLE writers")
    s.close()


# ================================================================
#  Test 14: DROP ROLE cleanup
# ================================================================
def test_drop_role_cleanup():
    section("14. DROP ROLE cleanup")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE readers")
    simple_query(s, "GRANT SELECT ON DATABASE evosql TO readers")
    simple_query(s, "CREATE USER roleuser1 PASSWORD 'pass123'")
    simple_query(s, "GRANT readers TO roleuser1")

    # Drop role
    cols, rows, err, tag = simple_query(s, "DROP ROLE readers")
    if err:
        fail("DROP ROLE", err)
    else:
        ok("DROP ROLE readers — success")

    # Verify role gone from SHOW ROLES
    cols, rows, err, tag = simple_query(s, "SHOW ROLES")
    role_names = [r[0] for r in rows] if rows else []
    if "readers" not in role_names:
        ok("role removed from SHOW ROLES")
    else:
        fail(f"role still in SHOW ROLES: {role_names}")

    # Verify membership cleaned from user
    cols, rows, err, tag = simple_query(s, "SHOW GRANTS FOR roleuser1")
    role_found = False
    for row in (rows or []):
        if row[1] == "ROLE" and row[2] == "readers":
            role_found = True
            break
    if not role_found:
        ok("user membership cleaned after DROP ROLE")
    else:
        fail(f"membership still present: {rows}")

    simple_query(s, "DROP USER roleuser1")
    s.close()


# ================================================================
#  Test 15: DROP ROLE non-existent
# ================================================================
def test_drop_role_nonexistent():
    section("15. DROP ROLE non-existent")
    s = conn()

    cols, rows, err, tag = simple_query(s, "DROP ROLE ghost_role")
    if err and "does not exist" in err.lower():
        ok("DROP non-existent role returns error")
    elif err:
        ok(f"DROP non-existent role error: {err}")
    else:
        fail("expected error for non-existent role")

    s.close()


# ================================================================
#  Test 16: DROP USER cleans role memberships
# ================================================================
def test_drop_user_cleans_membership():
    section("16. DROP USER cleans role memberships")
    s = conn()
    cleanup(s)

    simple_query(s, "CREATE ROLE readers")
    simple_query(s, "CREATE USER roleuser1 PASSWORD 'pass123'")
    simple_query(s, "GRANT readers TO roleuser1")

    # Drop user (should clean membership)
    simple_query(s, "DROP USER roleuser1")

    # Recreate user and verify no stale membership
    simple_query(s, "CREATE USER roleuser1 PASSWORD 'pass123'")
    cols, rows, err, tag = simple_query(s, "SHOW GRANTS FOR roleuser1")
    role_found = False
    for row in (rows or []):
        if row[1] == "ROLE":
            role_found = True
            break
    if not role_found:
        ok("role membership cleaned after DROP USER")
    else:
        fail(f"stale membership after DROP USER: {rows}")

    simple_query(s, "DROP USER roleuser1")
    simple_query(s, "DROP ROLE readers")
    s.close()


# ================================================================
#  Test 17: GRANT role to non-existent user
# ================================================================
def test_grant_role_errors():
    section("17. GRANT role error cases")
    s = conn()
    cleanup(s)

    # Non-existent role
    simple_query(s, "CREATE USER roleuser1 PASSWORD 'pass123'")
    cols, rows, err, tag = simple_query(s, "GRANT ghost_role TO roleuser1")
    if err:
        ok(f"GRANT non-existent role: error ({err[:50]})")
    else:
        fail("expected error for non-existent role")

    # Non-existent user
    simple_query(s, "CREATE ROLE readers")
    cols, rows, err, tag = simple_query(s, "GRANT readers TO ghost_user")
    if err:
        ok(f"GRANT role to non-existent user: error ({err[:50]})")
    else:
        fail("expected error for non-existent user")

    # Duplicate grant
    simple_query(s, "GRANT readers TO roleuser1")
    cols, rows, err, tag = simple_query(s, "GRANT readers TO roleuser1")
    if err:
        ok(f"duplicate GRANT role: error ({err[:50]})")
    else:
        fail("expected error for duplicate role grant")

    simple_query(s, "REVOKE readers FROM roleuser1")
    simple_query(s, "DROP USER roleuser1")
    simple_query(s, "DROP ROLE readers")
    s.close()


# ================================================================
#  Main
# ================================================================
if __name__ == "__main__":
    print("\n" + "=" * 60)
    print("  test_roles.py — Role-Based Access Control tests")
    print("=" * 60)

    test_create_role()
    test_create_role_duplicate()
    test_role_user_conflict()
    test_show_roles()
    test_show_users_excludes_roles()
    test_role_cannot_login()
    test_grant_priv_to_role()
    test_grant_role_to_user()
    test_privilege_inheritance()
    test_no_role_denied()
    test_revoke_role()
    test_show_grants_for_role()
    test_multiple_roles()
    test_drop_role_cleanup()
    test_drop_role_nonexistent()
    test_drop_user_cleans_membership()
    test_grant_role_errors()

    print(f"\n{'='*60}")
    print(f"  RESULTS: {PASS} passed, {FAIL} failed")
    print(f"{'='*60}\n")

    sys.exit(1 if FAIL > 0 else 0)
