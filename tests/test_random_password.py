#!/usr/bin/env python3
"""
test_random_password.py — Test random admin password generation

Requires the server to be freshly started WITHOUT EVOSQL_PASSWORD set.
The generated password is read from docker logs.
"""

import sys
import os
import socket
import subprocess

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


print("\n=== Random Password Tests ===\n")

# --- Step 0: Read generated password from docker logs ---
result = subprocess.run(
    ["docker", "logs", "evolutiondb-evosql-1"],
    capture_output=True, text=True
)
gen_pass = None
for line in result.stdout.splitlines():
    if "GENERATED PASSWORD" in line:
        # Format: "  GENERATED PASSWORD for 'admin': XXXXXXXXXXXXXXXX"
        gen_pass = line.split(": ", 1)[1].strip()
        break

ok(gen_pass is not None, "0: Generated password found in docker logs")
if gen_pass:
    ok(len(gen_pass) == 16, f"0: Password is 16 chars (got {len(gen_pass)})")
    print(f"     (generated password: {gen_pass})")

if not gen_pass:
    print("\nCannot continue without generated password.")
    sys.exit(1)


# --- Test 1: Connect with generated password ---
try:
    s = conn(user="admin", password=gen_pass)
    ok(True, "1: Connected with generated password")
except Exception as e:
    ok(False, f"1: Connected with generated password: {e}")
    sys.exit(1)


# --- Test 2: ALTER USER admin PASSWORD ---
cols, rows, err, tag = simple_query(s, "ALTER USER admin PASSWORD 'mynewpass123'")
ok(err is None, "2: ALTER USER admin PASSWORD succeeds")
s.close()


# --- Test 3: Connect with NEW password ---
try:
    s2 = conn(user="admin", password="mynewpass123")
    ok(True, "3: Connected with new password after ALTER")
    s2.close()
except Exception as e:
    ok(False, f"3: Connected with new password after ALTER: {e}")


# --- Test 4: Old generated password no longer works ---
try:
    s3 = socket.socket()
    s3.settimeout(5)
    s3.connect((HOST, PORT))
    pg_startup(s3, user="admin", password=gen_pass)
    ok(False, "4: Old generated password rejected (should have raised)")
    s3.close()
except RuntimeError:
    ok(True, "4: Old generated password rejected")
except Exception:
    ok(True, "4: Old generated password rejected")


# --- Test 5: Create new superuser via admin ---
try:
    s_admin = conn(user="admin", password="mynewpass123")
    cols, rows, err, tag = simple_query(s_admin, "CREATE USER superuser2 PASSWORD 'super123'")
    ok(err is None, "5: Admin can create new user")
    cols, rows, err, tag = simple_query(s_admin,
        "GRANT ALL ON DATABASE evosql TO superuser2 WITH GRANT OPTION")
    ok(err is None, "5: Admin can grant ALL WITH GRANT OPTION")
    s_admin.close()
except Exception as e:
    ok(False, f"5: Admin ops: {e}")


# --- Test 6: New superuser can operate ---
try:
    s_super = conn(user="superuser2", password="super123")
    cols, rows, err, tag = simple_query(s_super, "CREATE TABLE rptesttbl (id INT)")
    ok(err is None, "6: Superuser2 can CREATE TABLE")
    simple_query(s_super, "DROP TABLE rptesttbl")
    s_super.close()
except Exception as e:
    ok(False, f"6: Superuser2 ops: {e}")


# --- Cleanup ---
try:
    s_admin = conn(user="admin", password="mynewpass123")
    simple_query(s_admin, "DROP USER superuser2")
    # Restore admin password back for other tests (set via env in compose)
    # Since we're in random-password mode, leave as mynewpass123
    s_admin.close()
except Exception:
    pass


# ── summary ──────────────────────────────────────────────────────────
print(f"\n{'='*40}")
print(f"  Random Password: {passed} passed, {failed} failed")
print(f"{'='*40}\n")

sys.exit(1 if failed else 0)
