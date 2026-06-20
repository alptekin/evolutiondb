"""
test_tenant_supervisor — Phase 2 #1 process-per-tenant fault isolation.

Drives the local engine binary (no Docker). Two tenants each get their own
engine process + data dir + HMAC-derived password. Verifies:

  - distinct ports + data dirs + passwords per tenant;
  - data isolation (one tenant's engine does not see the other's table);
  - FAULT ISOLATION: hard-killing one tenant's engine (SIGKILL) does NOT affect
    the other — it keeps serving;
  - the supervisor auto-restarts the crashed tenant on its own port, and its
    committed data survives (its data dir persists).

Run under the mcp-server venv (pg_helpers is stdlib; the import path is wired
below). Skips cleanly if the engine binary isn't built.
"""
from __future__ import annotations

import os
import sys
import time
import signal
import shutil
import tempfile

_TESTS = os.path.dirname(os.path.abspath(__file__))
_PKG_PARENT = os.path.dirname(_TESTS)                      # client/mcp-server-evosql
_REPO = os.path.dirname(os.path.dirname(_PKG_PARENT))      # repo root
sys.path.insert(0, _PKG_PARENT)
sys.path.insert(0, os.path.join(_REPO, "tests"))

os.environ.setdefault("EVOSQL_TENANT_SECRET", "test-tenant-secret")

from mcp_server_evosql.tenant_supervisor import TenantSupervisor  # noqa: E402
from pg_helpers import conn, simple_query                          # noqa: E402

BIN = os.path.join(_REPO, "adaptor", "evosql-server")

passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def q(port, password, sql):
    c = conn(host="127.0.0.1", port=port, user="admin", password=password,
             database="evosql")
    cols, rows, err, tag = simple_query(c, sql)
    c.close()
    return rows, err


def _exec(port, password, sql):
    rows, err = q(port, password, sql)
    if err:
        raise RuntimeError(f"query error on {sql!r}: {err}")
    return rows


def test_per_tenant_isolation_and_fault_isolation():
    base = tempfile.mkdtemp(prefix="evo_tenants_")
    sup = TenantSupervisor(base, binary=BIN, base_port=6420)
    try:
        a = sup.ensure("acme")
        b = sup.ensure("globex")

        # distinct isolation coordinates
        assert a.pg_port != b.pg_port, "tenants share a port"
        assert a.data_dir != b.data_dir, "tenants share a data dir"
        assert a.password != b.password, "tenants share a password"

        # distinct data in each engine
        _exec(a.pg_port, a.password, "DROP TABLE IF EXISTS t_acme")
        _exec(a.pg_port, a.password, "CREATE TABLE t_acme (id INT PRIMARY KEY)")
        _exec(a.pg_port, a.password, "INSERT INTO t_acme VALUES (1)")
        _exec(b.pg_port, b.password, "DROP TABLE IF EXISTS t_globex")
        _exec(b.pg_port, b.password, "CREATE TABLE t_globex (id INT PRIMARY KEY)")
        _exec(b.pg_port, b.password, "INSERT INTO t_globex VALUES (2)")

        # data isolation: acme's engine has no globex table
        _rows, err = q(a.pg_port, a.password, "SELECT COUNT(*) FROM t_globex")
        assert err is not None, "acme's engine saw globex's table (not isolated)"

        # FAULT ISOLATION: hard-kill acme's engine
        old_pid = a.proc.pid
        a.proc.send_signal(signal.SIGKILL)
        a.proc.wait(timeout=10)

        # globex MUST keep serving (different process)
        rows, err = q(b.pg_port, b.password, "SELECT COUNT(*) FROM t_globex")
        assert err is None and rows and rows[0][0] == "1", \
            f"globex affected by acme's crash — NOT fault-isolated (err={err}, rows={rows})"

        # supervisor auto-restarts acme on its own port; data survives
        restarted = False
        for _ in range(80):
            inst = sup.get("acme")
            if inst and inst.alive() and inst.proc.pid != old_pid:
                restarted = True
                break
            time.sleep(0.25)
        assert restarted, "supervisor did not auto-restart the crashed tenant"
        time.sleep(0.6)  # let it finish recovery
        rows, err = None, "not-yet"
        for _ in range(20):
            rows, err = q(a.pg_port, a.password, "SELECT COUNT(*) FROM t_acme")
            if err is None:
                break
            time.sleep(0.25)
        assert err is None and rows and rows[0][0] == "1", \
            f"acme's committed data lost after restart (err={err}, rows={rows})"
    finally:
        sup.stop_all()
        shutil.rmtree(base, ignore_errors=True)


def test_ensure_is_idempotent():
    base = tempfile.mkdtemp(prefix="evo_tenants_idem_")
    sup = TenantSupervisor(base, binary=BIN, base_port=6440)
    try:
        a1 = sup.ensure("acme")
        a2 = sup.ensure("acme")  # already running -> same instance, no new proc
        assert a1.proc.pid == a2.proc.pid, "ensure spawned a duplicate engine"
        assert a1.pg_port == a2.pg_port
    finally:
        sup.stop_all()
        shutil.rmtree(base, ignore_errors=True)


if __name__ == "__main__":
    print("=== Phase 2 #1: process-per-tenant fault isolation ===")
    if not os.path.exists(BIN):
        print(f"  SKIP: engine binary not built at {BIN}")
        sys.exit(0)
    run("per_tenant_isolation_and_fault_isolation",
        test_per_tenant_isolation_and_fault_isolation)
    run("ensure_is_idempotent", test_ensure_is_idempotent)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
