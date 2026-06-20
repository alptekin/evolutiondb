"""
test_role_superuser — Phase 2 #3: role-based superuser (no hardcoded "admin").

The engine used to hardcode `username == "admin"` as the all-powerful superuser
in three places (GrantMgmt CheckPrivilege/HasGrantOption, Policy RLS, and the
query_executor fast path). That is replaced by a central, role-based test:
a superuser is the CONFIGURED bootstrap admin (EVOSQL_USER_NAME) OR a holder of
the reserved "superuser" role.

Drives the local binary (no Docker). Verifies:
  - the bootstrap admin is a superuser (privileged op allowed);
  - a normal user is NOT a superuser (privileged op denied);
  - granting the "superuser" role makes a normal user a superuser;
  - the bootstrap is CONFIGURABLE: with EVOSQL_USER_NAME=root, "root" is the
    superuser and a user literally named "admin" has NO special power.

Run:  python tests/test_role_superuser.py   (skips if the binary isn't built)
"""
from __future__ import annotations

import os
import sys
import time
import socket
import signal
import shutil
import tempfile
import subprocess

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn as pg_conn, simple_query

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SERVER = os.path.join(ROOT, "adaptor", "evosql-server")
passed = failed = 0


def run_test(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def _wait(port, t=20):
    end = time.time() + t
    while time.time() < end:
        try:
            socket.create_connection(("127.0.0.1", port), 0.5).close(); return True
        except OSError:
            time.sleep(0.12)
    return False


def _start(data_dir, port, admin_user="admin", admin_pw="admin"):
    p = subprocess.Popen(
        [SERVER, "--pg-port", str(port), "--evo-port", str(port + 1), "--bind", "127.0.0.1"],
        env=dict(os.environ, EVOSQL_USER_NAME=admin_user, EVOSQL_PASSWORD=admin_pw,
                 EVOSQL_DATA_DIR=data_dir),
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    assert _wait(port), f"server on :{port} did not start"
    time.sleep(0.4)
    return p


def _stop(p):
    if p and p.poll() is None:
        p.send_signal(signal.SIGTERM)
        try:
            p.wait(timeout=10)
        except subprocess.TimeoutExpired:
            p.kill(); p.wait()


def _q(port, user, password, sql):
    """Run one statement; return the error string (or None). A failed connect /
    auth is returned as an error string too, so a denied/blocked op reads
    uniformly as 'not None' (e.g. an account whose password was NOT taken over
    simply fails to authenticate with the attacker's password)."""
    try:
        c = pg_conn(host="127.0.0.1", port=port, user=user, password=password,
                    database="evosql")
    except Exception as e:
        return f"connect/auth error: {e}"
    _c, _r, err, _t = simple_query(c, sql); c.close()
    return err


def test_role_based_superuser():
    d = tempfile.mkdtemp(prefix="evo_su_")
    p = _start(d, 5495, "admin", "admin")
    try:
        # bootstrap admin is a superuser
        assert _q(5495, "admin", "admin", "CREATE DATABASE su_a") is None, \
            "bootstrap admin could not CREATE DATABASE (should be superuser)"
        assert _q(5495, "admin", "admin", "CREATE USER alice PASSWORD 'alicepw'") is None

        # a normal user is NOT a superuser: a privileged op is denied
        err = _q(5495, "alice", "alicepw", "CREATE TABLE alice_t (id INT PRIMARY KEY)")
        assert err is not None, "normal user alice was allowed CREATE (should be denied)"

        # grant the reserved superuser role -> alice becomes a superuser
        assert _q(5495, "admin", "admin", "CREATE ROLE superuser") is None
        assert _q(5495, "admin", "admin", "GRANT superuser TO alice") is None
        err = _q(5495, "alice", "alicepw", "CREATE TABLE alice_t2 (id INT PRIMARY KEY)")
        assert err is None, f"alice with the superuser role was still denied: {err}"
    finally:
        _stop(p); shutil.rmtree(d, ignore_errors=True)


def test_bootstrap_is_configurable_and_admin_not_magic():
    d = tempfile.mkdtemp(prefix="evo_su_root_")
    p = _start(d, 5497, "root", "rootpw")
    try:
        # the configured bootstrap (root) is the superuser
        assert _q(5497, "root", "rootpw", "CREATE DATABASE root_a") is None, \
            "configured bootstrap 'root' is not a superuser"
        # the engine always seeds an "admin" user (cat_init); give it a password
        # so we can connect AS "admin" and prove the NAME has no special power.
        assert _q(5497, "root", "rootpw", "ALTER USER admin PASSWORD 'adminpw'") is None, \
            "root (superuser) could not ALTER USER admin"
        err = _q(5497, "admin", "adminpw", "CREATE TABLE admin_t (id INT PRIMARY KEY)")
        assert err is not None, \
            "a user named 'admin' was treated as superuser — the magic name leaked"
    finally:
        _stop(p); shutil.rmtree(d, ignore_errors=True)


def test_non_superuser_cannot_manage_users_or_roles():
    """Boundary defense: a non-superuser cannot escalate via user/role DDL —
    not CREATE/DROP USER, not minting a role, and crucially not
    `ALTER USER <admin> PASSWORD` (the real takeover). It MAY change its own
    password."""
    d = tempfile.mkdtemp(prefix="evo_esc_")
    p = _start(d, 5493, "admin", "admin")
    try:
        assert _q(5493, "admin", "admin", "CREATE USER bob PASSWORD 'bobpw'") is None

        # every privilege-escalating user/role op must be denied for bob
        for sql in ("CREATE USER evil PASSWORD 'x'",
                    "DROP USER admin",
                    "CREATE ROLE superuser",
                    "ALTER USER admin PASSWORD 'pwned'"):
            err = _q(5493, "bob", "bobpw", sql)
            assert err is not None, f"non-superuser bob was ALLOWED: {sql!r}"

        # the admin takeover attempt must NOT have changed admin's password
        assert _q(5493, "admin", "admin", "CREATE DATABASE still_admin") is None, \
            "admin password was changed by a non-superuser (ALTER USER takeover worked!)"
        assert _q(5493, "admin", "pwned", "SELECT 1") is not None, \
            "admin authenticated with the attacker's password — takeover succeeded"

        # a non-superuser MAY change ITS OWN password (self-service)
        assert _q(5493, "bob", "bobpw", "ALTER USER bob PASSWORD 'bob2'") is None, \
            "bob could not change its own password"
        assert _q(5493, "bob", "bob2", "SELECT 1") is None, \
            "bob's self password change did not take effect"
    finally:
        _stop(p); shutil.rmtree(d, ignore_errors=True)


if __name__ == "__main__":
    print("=== Phase 2 #3: role-based superuser (no hardcoded admin) ===")
    if not os.path.exists(SERVER):
        print(f"  SKIP: server binary not built at {SERVER}")
        sys.exit(0)
    run_test("role_based_superuser", test_role_based_superuser)
    run_test("bootstrap_is_configurable_and_admin_not_magic",
             test_bootstrap_is_configurable_and_admin_not_magic)
    run_test("non_superuser_cannot_manage_users_or_roles",
             test_non_superuser_cannot_manage_users_or_roles)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
