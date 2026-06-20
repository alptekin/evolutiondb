"""
test_tenant_router — Phase 2 tier-aware routing: shared pool vs dedicated engine.

A real shared engine (the "pool") runs one process hosting per-tenant databases
(the current model). The TenantSupervisor provides dedicated per-tenant engines
(the premium isolation tier). TenantRouter turns a tenant id into the right
connection coordinates for its tier, and a tier flip (graduate) re-routes it
without any code change.

Verifies:
  - a SHARED tenant routes to the shared engine, connects as its own DB user,
    USEs its database, and is GRANT-isolated;
  - a DEDICATED tenant routes to its OWN engine (own port) via the supervisor;
  - the two tenants cannot see each other's tables;
  - graduating a tenant shared->dedicated re-routes it to a dedicated engine
    purely by changing its tier (config, not code).

Drives real binaries (no Docker). Skips if the engine binary isn't built.
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

_TESTS = os.path.dirname(os.path.abspath(__file__))
_PKG_PARENT = os.path.dirname(_TESTS)
_REPO = os.path.dirname(os.path.dirname(_PKG_PARENT))
sys.path.insert(0, _PKG_PARENT)
sys.path.insert(0, os.path.join(_REPO, "tests"))

os.environ.setdefault("EVOSQL_TENANT_SECRET", "test-tenant-secret")

from mcp_server_evosql.tenant_supervisor import TenantSupervisor          # noqa: E402
from mcp_server_evosql.tenant_router import TenantRouter, SHARED, DEDICATED  # noqa: E402
from mcp_server_evosql.tenancy import (                                    # noqa: E402
    tenant_db_name, tenant_db_user, derive_db_password)
from pg_helpers import conn, simple_query                                  # noqa: E402

BIN = os.path.join(_REPO, "adaptor", "evosql-server")
SHARED_PORT = 5481
passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def _wait_port(port, t=20):
    end = time.time() + t
    while time.time() < end:
        try:
            socket.create_connection(("127.0.0.1", port), 0.5).close(); return True
        except OSError:
            time.sleep(0.12)
    return False


def _admin_q(port, sql, password="admin"):
    c = conn(host="127.0.0.1", port=port, user="admin", password=password,
             database="evosql")
    cols, rows, err, tag = simple_query(c, sql); c.close()
    return rows, err


def _via(coords, sql):
    """Connect using router coordinates (USE the db for the shared tier),
    run one statement, return (rows, err)."""
    c = conn(host=coords.host, port=coords.port, user=coords.user,
             password=coords.password, database=coords.db)
    if coords.issue_use:
        _c, _r, err, _t = simple_query(c, f"USE {coords.db}")
        if err:
            c.close(); return None, f"USE failed: {err}"
    cols, rows, err, tag = simple_query(c, sql); c.close()
    return rows, err


def test_tiered_routing_and_graduate():
    base = tempfile.mkdtemp(prefix="evo_router_")
    shared_dir = os.path.join(base, "shared")
    sup_dir = os.path.join(base, "dedicated")
    os.makedirs(shared_dir); os.makedirs(sup_dir)

    # the shared pool: one engine hosting per-tenant databases
    shared = subprocess.Popen(
        [BIN, "--pg-port", str(SHARED_PORT), "--evo-port", str(SHARED_PORT + 1),
         "--bind", "127.0.0.1"],
        env=dict(os.environ, EVOSQL_USER_NAME="admin", EVOSQL_PASSWORD="admin",
                 EVOSQL_DATA_DIR=shared_dir),
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    sup = TenantSupervisor(sup_dir, binary=BIN, base_port=6480)
    try:
        assert _wait_port(SHARED_PORT), "shared engine did not start"
        time.sleep(0.4)

        # provision "acme" in the shared pool (what tenancy.provision_tenant does)
        acme_db = tenant_db_name("acme"); acme_user = tenant_db_user("acme")
        acme_pw = derive_db_password("acme")
        for sql in (f"CREATE DATABASE IF NOT EXISTS {acme_db}",
                    f"CREATE USER {acme_user} PASSWORD '{acme_pw}'",
                    f"GRANT ALL ON DATABASE {acme_db} TO {acme_user}"):
            _rows, err = _admin_q(SHARED_PORT, sql)
            # CREATE USER may report "already exists" on a re-run; ignore that
            assert err is None or "exist" in (err or "").lower(), f"{sql} -> {err}"

        router = TenantRouter(sup, shared_host="127.0.0.1", shared_port=SHARED_PORT,
                              tiers={"acme": SHARED, "globex": DEDICATED})

        # -- shared tenant routes to the shared engine --
        ca = router.coordinates("acme")
        assert ca.tier == SHARED and ca.port == SHARED_PORT and ca.issue_use
        _via(ca, "DROP TABLE IF EXISTS r_acme")
        _, err = _via(ca, "CREATE TABLE r_acme (id INT PRIMARY KEY)")
        assert err is None, f"shared CREATE failed: {err}"
        _, err = _via(ca, "INSERT INTO r_acme VALUES (1)")
        assert err is None, f"shared INSERT failed: {err}"

        # -- dedicated tenant routes to its OWN engine --
        cg = router.coordinates("globex")
        assert cg.tier == DEDICATED and cg.port != SHARED_PORT, \
            f"dedicated tenant routed to shared port ({cg})"
        _, err = _via(cg, "CREATE TABLE r_globex (id INT PRIMARY KEY)")
        assert err is None, f"dedicated CREATE failed: {err}"
        _via(cg, "INSERT INTO r_globex VALUES (2)")

        # -- isolation: neither sees the other's table --
        _rows, err = _via(cg, "SELECT COUNT(*) FROM r_acme")
        assert err is not None, "dedicated globex engine saw acme's table"
        _rows, err = _via(ca, "SELECT COUNT(*) FROM r_globex")
        assert err is not None, "shared acme db saw globex's table"

        # -- GRADUATE: flip acme shared -> dedicated; routing changes by config --
        before = router.coordinates("acme")
        router.set_tier("acme", DEDICATED)
        after = router.coordinates("acme")
        assert before.tier == SHARED and after.tier == DEDICATED
        assert after.port != SHARED_PORT and after.port != cg.port, \
            "acme's dedicated engine should be its own (new port)"
        # the new dedicated engine is reachable (empty — data migration is the
        # next slice; the point here is the re-route is a metadata flip)
        _, err = _via(after, "CREATE TABLE graduated_ok (id INT PRIMARY KEY)")
        assert err is None, f"acme's new dedicated engine unreachable: {err}"
    finally:
        sup.stop_all()
        if shared.poll() is None:
            shared.send_signal(signal.SIGTERM)
            try:
                shared.wait(timeout=10)
            except subprocess.TimeoutExpired:
                shared.kill(); shared.wait()
        shutil.rmtree(base, ignore_errors=True)


if __name__ == "__main__":
    print("=== Phase 2: tier-aware routing (shared pool vs dedicated) ===")
    if not os.path.exists(BIN):
        print(f"  SKIP: engine binary not built at {BIN}")
        sys.exit(0)
    run("tiered_routing_and_graduate", test_tiered_routing_and_graduate)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
