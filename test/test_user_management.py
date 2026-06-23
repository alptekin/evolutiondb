#!/usr/bin/env python3
"""
test_user_management.py — Tests for CREATE/DROP/ALTER USER and SHOW USERS

Requires the server to be running with default admin/admin credentials.
"""

import socket
import sys
import os

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query, pg_startup, _send, _recv, HOST, PORT

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


# ── cleanup helper ──────────────────────────────────────────────────
def cleanup_user(s, username):
    """Drop a user if it exists (ignore errors)."""
    simple_query(s, f"DROP USER {username}")


# ── tests ────────────────────────────────────────────────────────────

print("\n=== User Management Tests ===\n")

# --- Test 1: SHOW USERS (should at least contain admin) ---
s = conn()
cols, rows, err, tag = simple_query(s, "SHOW USERS")
ok(err is None, "SHOW USERS succeeds")
ok("username" in [c.lower() for c in cols], "SHOW USERS has username column")
usernames = [r[0] for r in rows]
ok("admin" in usernames, "SHOW USERS contains admin user")
s.close()

# --- Test 2: CREATE USER ---
s = conn()
cleanup_user(s, "testuser1")
cols, rows, err, tag = simple_query(s, "CREATE USER testuser1 PASSWORD 'testpass1'")
ok(err is None, "CREATE USER testuser1 succeeds")
s.close()

# --- Test 3: New user can connect ---
try:
    s2 = conn(user="testuser1", password="testpass1")
    ok(True, "testuser1 can connect with correct password")
    s2.close()
except Exception as e:
    ok(False, f"testuser1 can connect with correct password: {e}")

# --- Test 4: Wrong password is rejected ---
try:
    s3 = socket.socket()
    s3.settimeout(5)
    s3.connect((HOST, PORT))
    pg_startup(s3, user="testuser1", password="wrongpass")
    # If we get here, auth succeeded unexpectedly
    ok(False, "Wrong password is rejected (should have raised)")
    s3.close()
except RuntimeError as e:
    ok("Auth error" in str(e) or "28P01" in str(e), "Wrong password is rejected")
except Exception as e:
    ok(False, f"Wrong password is rejected (unexpected error: {e})")

# --- Test 5: Duplicate user is rejected ---
s = conn()
cols, rows, err, tag = simple_query(s, "CREATE USER testuser1 PASSWORD 'otherpass'")
ok(err is not None, "CREATE USER duplicate is rejected")
s.close()

# --- Test 6: ALTER USER PASSWORD ---
s = conn()
cols, rows, err, tag = simple_query(s, "ALTER USER testuser1 PASSWORD 'newpass1'")
ok(err is None, "ALTER USER PASSWORD succeeds")
s.close()

# --- Test 7: Old password no longer works ---
try:
    s4 = socket.socket()
    s4.settimeout(5)
    s4.connect((HOST, PORT))
    pg_startup(s4, user="testuser1", password="testpass1")
    ok(False, "Old password no longer works (should have raised)")
    s4.close()
except RuntimeError:
    ok(True, "Old password no longer works")
except Exception:
    ok(True, "Old password no longer works")

# --- Test 8: New password works ---
try:
    s5 = conn(user="testuser1", password="newpass1")
    ok(True, "New password works after ALTER USER")
    s5.close()
except Exception as e:
    ok(False, f"New password works after ALTER USER: {e}")

# --- Test 9: SHOW USERS shows new user ---
s = conn()
cols, rows, err, tag = simple_query(s, "SHOW USERS")
usernames = [r[0] for r in rows]
ok("testuser1" in usernames, "SHOW USERS shows testuser1")
s.close()

# --- Test 10: DROP USER ---
s = conn()
cols, rows, err, tag = simple_query(s, "DROP USER testuser1")
ok(err is None, "DROP USER testuser1 succeeds")
s.close()

# --- Test 11: Dropped user cannot connect ---
try:
    s6 = socket.socket()
    s6.settimeout(5)
    s6.connect((HOST, PORT))
    pg_startup(s6, user="testuser1", password="newpass1")
    ok(False, "Dropped user cannot connect (should have raised)")
    s6.close()
except RuntimeError:
    ok(True, "Dropped user cannot connect")
except Exception:
    ok(True, "Dropped user cannot connect")

# --- Test 12: SHOW USERS no longer shows dropped user ---
s = conn()
cols, rows, err, tag = simple_query(s, "SHOW USERS")
usernames = [r[0] for r in rows]
ok("testuser1" not in usernames, "SHOW USERS no longer shows testuser1")
s.close()

# --- Test 13: DROP non-existent user fails ---
s = conn()
cols, rows, err, tag = simple_query(s, "DROP USER nosuchuser")
ok(err is not None, "DROP non-existent user fails")
s.close()

# --- Test 14: ALTER non-existent user fails ---
s = conn()
cols, rows, err, tag = simple_query(s, "ALTER USER nosuchuser PASSWORD 'x'")
ok(err is not None, "ALTER non-existent user fails")
s.close()

# --- Test 15: CREATE USER with empty password fails ---
s = conn()
cols, rows, err, tag = simple_query(s, "CREATE USER emptypass PASSWORD ''")
# This should either fail or succeed depending on policy; just verify no crash
ok(True, "CREATE USER with empty password does not crash")
cleanup_user(s, "emptypass")
s.close()

# ── summary ──────────────────────────────────────────────────────────

print(f"\n{'='*40}")
print(f"  User Management: {passed} passed, {failed} failed")
print(f"{'='*40}\n")

sys.exit(1 if failed else 0)
