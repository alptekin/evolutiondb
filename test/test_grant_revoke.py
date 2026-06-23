#!/usr/bin/env python3
"""
test_grant_revoke.py — Tests for GRANT / REVOKE privilege system

Requires the server to be running with default admin/admin credentials.
Tests:
  1.  admin SHOW GRANTS — shows initial admin grant
  2.  GRANT SELECT ON DATABASE to user
  3.  user can SELECT after GRANT
  4.  user cannot INSERT without GRANT (permission denied)
  5.  GRANT INSERT to user, then INSERT works
  6.  REVOKE INSERT from user, INSERT denied again
  7.  GRANT ALL ON DATABASE
  8.  GRANT to PUBLIC — all users get privilege
  9.  WITH GRANT OPTION — user can delegate
 10.  Non-admin without GRANT OPTION cannot delegate
 11.  SHOW GRANTS FOR <user>
 12.  DROP USER also drops grants
"""

import sys
import os
import socket

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query, pg_startup, HOST, PORT

passed = 0
failed = 0


def ok(cond, name):
    global passed, failed
    if cond:
        passed += 1
        print(f"  \033[32mPASS\033[0m {name}")
    else:
        failed += 1
        print(f"  \033[31mFAIL\033[0m {name}")


def cleanup(s):
    """Best-effort cleanup of test users and test table."""
    simple_query(s, "DROP USER grantuser1")
    simple_query(s, "DROP USER grantuser2")
    simple_query(s, "DROP TABLE granttesttbl")
    simple_query(s, "REVOKE ALL ON DATABASE evosql FROM PUBLIC")


# ── setup ───────────────────────────────────────────────────────────

print("\n=== Grant / Revoke Tests ===\n")

# Connect as admin and clean up any leftovers
s_admin = conn()
cleanup(s_admin)

# Create test users
cols, rows, err, tag = simple_query(s_admin, "CREATE USER grantuser1 PASSWORD 'pass1'")
ok(err is None, "Setup: CREATE USER grantuser1")

cols, rows, err, tag = simple_query(s_admin, "CREATE USER grantuser2 PASSWORD 'pass2'")
ok(err is None, "Setup: CREATE USER grantuser2")

# Create a test table as admin
simple_query(s_admin, "CREATE TABLE granttesttbl (id INT, name TEXT)")
simple_query(s_admin, "INSERT INTO granttesttbl VALUES (1, 'hello')")
s_admin.close()


# --- Test 1: SHOW GRANTS — admin sees initial grant ---
s_admin = conn()
cols, rows, err, tag = simple_query(s_admin, "SHOW GRANTS")
ok(err is None, "1: SHOW GRANTS succeeds")
ok(len(rows) >= 1, "1: SHOW GRANTS returns at least 1 row")
# Check that admin grant exists
admin_grants = [r for r in rows if r[0].lower() == "admin"]
ok(len(admin_grants) >= 1, "1: admin grant exists in SHOW GRANTS")
s_admin.close()


# --- Test 2: GRANT SELECT ON DATABASE to grantuser1 ---
s_admin = conn()
cols, rows, err, tag = simple_query(s_admin,
    "GRANT SELECT ON DATABASE evosql TO grantuser1")
ok(err is None, "2: GRANT SELECT ON DATABASE evosql TO grantuser1")
s_admin.close()


# --- Test 3: grantuser1 can SELECT after GRANT ---
try:
    s_user1 = conn(user="grantuser1", password="pass1")
    cols, rows, err, tag = simple_query(s_user1, "SELECT * FROM granttesttbl")
    ok(err is None, "3: grantuser1 can SELECT after GRANT")
    s_user1.close()
except Exception as e:
    ok(False, f"3: grantuser1 can SELECT after GRANT: {e}")


# --- Test 4: grantuser1 cannot INSERT without GRANT ---
try:
    s_user1 = conn(user="grantuser1", password="pass1")
    cols, rows, err, tag = simple_query(s_user1,
        "INSERT INTO granttesttbl VALUES (2, 'world')")
    ok(err is not None, "4: grantuser1 INSERT denied without GRANT")
    # Check for permission denied error
    if err:
        ok("permission denied" in err.lower() or "42501" in err,
           "4: Error message mentions permission denied")
    else:
        ok(False, "4: Error message mentions permission denied (no error)")
    s_user1.close()
except Exception as e:
    ok(False, f"4: grantuser1 INSERT denied without GRANT: {e}")


# --- Test 5: GRANT INSERT, then INSERT works ---
s_admin = conn()
cols, rows, err, tag = simple_query(s_admin,
    "GRANT INSERT ON DATABASE evosql TO grantuser1")
ok(err is None, "5: GRANT INSERT ON DATABASE evosql TO grantuser1")
s_admin.close()

try:
    s_user1 = conn(user="grantuser1", password="pass1")
    cols, rows, err, tag = simple_query(s_user1,
        "INSERT INTO granttesttbl VALUES (2, 'world')")
    ok(err is None, "5: grantuser1 INSERT succeeds after GRANT")
    s_user1.close()
except Exception as e:
    ok(False, f"5: grantuser1 INSERT succeeds after GRANT: {e}")


# --- Test 6: REVOKE INSERT, INSERT denied again ---
s_admin = conn()
cols, rows, err, tag = simple_query(s_admin,
    "REVOKE INSERT ON DATABASE evosql FROM grantuser1")
ok(err is None, "6: REVOKE INSERT ON DATABASE evosql FROM grantuser1")
s_admin.close()

try:
    s_user1 = conn(user="grantuser1", password="pass1")
    cols, rows, err, tag = simple_query(s_user1,
        "INSERT INTO granttesttbl VALUES (3, 'nope')")
    ok(err is not None, "6: grantuser1 INSERT denied after REVOKE")
    s_user1.close()
except Exception as e:
    ok(False, f"6: grantuser1 INSERT denied after REVOKE: {e}")


# --- Test 7: GRANT ALL ON DATABASE ---
s_admin = conn()
cols, rows, err, tag = simple_query(s_admin,
    "GRANT ALL ON DATABASE evosql TO grantuser1")
ok(err is None, "7: GRANT ALL ON DATABASE evosql TO grantuser1")
s_admin.close()

try:
    s_user1 = conn(user="grantuser1", password="pass1")
    # Should be able to do SELECT and INSERT now
    cols, rows, err, tag = simple_query(s_user1, "SELECT * FROM granttesttbl")
    ok(err is None, "7: grantuser1 SELECT works with ALL")
    cols, rows, err, tag = simple_query(s_user1,
        "INSERT INTO granttesttbl VALUES (4, 'all')")
    ok(err is None, "7: grantuser1 INSERT works with ALL")
    s_user1.close()
except Exception as e:
    ok(False, f"7: grantuser1 ops with ALL: {e}")


# --- Test 8: GRANT to PUBLIC — all users get privilege ---
s_admin = conn()
# First revoke all from grantuser2 (should have nothing)
# Grant SELECT to PUBLIC
cols, rows, err, tag = simple_query(s_admin,
    "GRANT SELECT ON DATABASE evosql TO PUBLIC")
ok(err is None, "8: GRANT SELECT ON DATABASE evosql TO PUBLIC")
s_admin.close()

try:
    s_user2 = conn(user="grantuser2", password="pass2")
    cols, rows, err, tag = simple_query(s_user2, "SELECT * FROM granttesttbl")
    ok(err is None, "8: grantuser2 can SELECT via PUBLIC grant")
    s_user2.close()
except Exception as e:
    ok(False, f"8: grantuser2 can SELECT via PUBLIC: {e}")

# Clean up PUBLIC grant
s_admin = conn()
simple_query(s_admin, "REVOKE SELECT ON DATABASE evosql FROM PUBLIC")
s_admin.close()


# --- Test 9: WITH GRANT OPTION — user can delegate ---
s_admin = conn()
cols, rows, err, tag = simple_query(s_admin,
    "GRANT SELECT ON DATABASE evosql TO grantuser1 WITH GRANT OPTION")
ok(err is None, "9: GRANT SELECT WITH GRANT OPTION to grantuser1")
s_admin.close()

try:
    s_user1 = conn(user="grantuser1", password="pass1")
    cols, rows, err, tag = simple_query(s_user1,
        "GRANT SELECT ON DATABASE evosql TO grantuser2")
    ok(err is None, "9: grantuser1 can delegate SELECT to grantuser2")
    s_user1.close()
except Exception as e:
    ok(False, f"9: grantuser1 can delegate: {e}")


# --- Test 10: Non-admin without GRANT OPTION cannot delegate ---
# Revoke grantuser1's grants and give SELECT without GRANT OPTION
s_admin = conn()
simple_query(s_admin, "REVOKE ALL ON DATABASE evosql FROM grantuser1")
simple_query(s_admin, "GRANT SELECT ON DATABASE evosql TO grantuser1")
s_admin.close()

try:
    s_user1 = conn(user="grantuser1", password="pass1")
    cols, rows, err, tag = simple_query(s_user1,
        "GRANT SELECT ON DATABASE evosql TO grantuser2")
    ok(err is not None, "10: grantuser1 cannot delegate without GRANT OPTION")
    if err:
        ok("grant option" in err.lower() or "permission" in err.lower() or "42501" in err,
           "10: Error mentions GRANT OPTION / permission")
    else:
        ok(False, "10: Error mentions GRANT OPTION / permission (no error)")
    s_user1.close()
except Exception as e:
    ok(False, f"10: grantuser1 cannot delegate: {e}")


# --- Test 11: SHOW GRANTS FOR <user> ---
s_admin = conn()
cols, rows, err, tag = simple_query(s_admin, "SHOW GRANTS FOR grantuser1")
ok(err is None, "11: SHOW GRANTS FOR grantuser1 succeeds")
# Should see grants only for grantuser1
all_for_user1 = [r for r in rows if r[0].lower() == "grantuser1"]
ok(len(all_for_user1) == len(rows),
   "11: SHOW GRANTS FOR filters correctly")
s_admin.close()


# --- Test 12: DROP USER also drops grants ---
s_admin = conn()
# Verify grantuser1 has grants
cols, rows, err, tag = simple_query(s_admin, "SHOW GRANTS FOR grantuser1")
had_grants = len(rows) > 0
ok(had_grants, "12: grantuser1 has grants before DROP")

# Drop the user
cols, rows, err, tag = simple_query(s_admin, "DROP USER grantuser1")
ok(err is None, "12: DROP USER grantuser1 succeeds")

# Verify grants are gone
cols, rows, err, tag = simple_query(s_admin, "SHOW GRANTS FOR grantuser1")
ok(len(rows) == 0, "12: Grants removed after DROP USER")
s_admin.close()


# ── cleanup ─────────────────────────────────────────────────────────
s_admin = conn()
cleanup(s_admin)
s_admin.close()


# ── summary ─────────────────────────────────────────────────────────
print(f"\n{'='*40}")
print(f"  Grant/Revoke: {passed} passed, {failed} failed")
print(f"{'='*40}\n")

sys.exit(1 if failed else 0)
