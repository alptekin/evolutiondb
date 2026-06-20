"""
test_tenant_migrate — Phase 2: graduate carries the tenant's DATA across.

Sets up a real shared engine hosting tenant "acme" with a memory store (JSON
values) and a table, provisions acme's dedicated engine via the supervisor,
runs graduate() to copy the data, flips the tier, and verifies that routing
"acme" now reaches its dedicated engine WITH its data — the one-step graduate.

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
from mcp_server_evosql import tenant_migrate                              # noqa: E402
from mcp_server_evosql.tenancy import (                                    # noqa: E402
    tenant_db_name, tenant_db_user, derive_db_password)
from pg_helpers import conn, simple_query                                  # noqa: E402

BIN = os.path.join(_REPO, "adaptor", "evosql-server")
SHARED_PORT = 5482
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


class PgConn:
    """Minimal Conn adapter (query/execute) over pg_helpers for tenant_migrate."""
    def __init__(self, host, port, user, password, db, use=None):
        self.sock = conn(host=host, port=port, user=user, password=password,
                         database=db)
        if use:
            simple_query(self.sock, f"USE {use}")

    def query(self, sql):
        _c, rows, err, _t = simple_query(self.sock, sql)
        if err:
            raise RuntimeError(f"{sql!r} -> {err}")
        return rows

    def execute(self, sql):
        _c, _r, err, _t = simple_query(self.sock, sql)
        if err and "exist" not in (err or "").lower():
            raise RuntimeError(f"{sql!r} -> {err}")

    def close(self):
        self.sock.close()


def test_graduate_moves_data():
    base = tempfile.mkdtemp(prefix="evo_migrate_")
    shared_dir = os.path.join(base, "shared"); os.makedirs(shared_dir)
    sup_dir = os.path.join(base, "dedicated"); os.makedirs(sup_dir)
    shared = subprocess.Popen(
        [BIN, "--pg-port", str(SHARED_PORT), "--evo-port", str(SHARED_PORT + 1),
         "--bind", "127.0.0.1"],
        env=dict(os.environ, EVOSQL_USER_NAME="admin", EVOSQL_PASSWORD="admin",
                 EVOSQL_DATA_DIR=shared_dir),
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    sup = TenantSupervisor(sup_dir, binary=BIN, base_port=6500)
    try:
        assert _wait_port(SHARED_PORT), "shared engine did not start"
        time.sleep(0.4)
        db = tenant_db_name("acme"); user = tenant_db_user("acme")
        pw = derive_db_password("acme")
        admin = PgConn("127.0.0.1", SHARED_PORT, "admin", "admin", "evosql")
        admin.execute(f"CREATE DATABASE IF NOT EXISTS {db}")
        admin.execute(f"CREATE USER {user} PASSWORD '{pw}'")
        admin.execute(f"GRANT ALL ON DATABASE {db} TO {user}")
        admin.close()

        # seed acme's data in the shared pool: a memory store (JSON) + a table
        src = PgConn("127.0.0.1", SHARED_PORT, user, pw, "evosql", use=db)
        src.execute("CREATE MEMORY STORE mem_notes")
        src.execute("""MEMORY PUT INTO mem_notes VALUES ('u1','k1','"first"')""")
        src.execute("""MEMORY PUT INTO mem_notes VALUES ('u1','k2','"second"')""")
        src.execute("CREATE TABLE proj (id INT, name VARCHAR(40))")
        src.execute("INSERT INTO proj VALUES (1,'alpha')")
        src.execute("INSERT INTO proj VALUES (2,'beta')")

        # provision acme's dedicated engine and MOVE the data into it
        inst = sup.ensure("acme")
        dst = PgConn("127.0.0.1", inst.pg_port, "admin", inst.password, "evosql")
        moved = tenant_migrate.graduate(src, dst, stores=["mem_notes"], tables=["proj"])
        assert moved["stores"]["mem_notes"] == 2, f"expected 2 store rows, {moved}"
        assert moved["tables"]["proj"] == 2, f"expected 2 table rows, {moved}"

        # flip the tier AFTER the data is in place
        router = TenantRouter(sup, shared_host="127.0.0.1", shared_port=SHARED_PORT,
                              tiers={"acme": SHARED})
        router.set_tier("acme", DEDICATED)

        # routing "acme" now reaches its dedicated engine WITH the data
        c = router.coordinates("acme")
        assert c.tier == DEDICATED and c.port == inst.pg_port
        chk = PgConn(c.host, c.port, c.user, c.password, c.db)
        rows = chk.query("SELECT COUNT(*) FROM __mem_mem_notes")
        assert rows[0][0] == "2", f"memory store not migrated: {rows}"
        rows = chk.query("SELECT mem_value FROM __mem_mem_notes WHERE mem_key='k1'")
        assert rows and rows[0][0] == '"first"', f"store value lost: {rows}"
        rows = chk.query("SELECT COUNT(*) FROM proj")
        assert rows[0][0] == "2", f"table not migrated: {rows}"
        rows = chk.query("SELECT name FROM proj WHERE id=2")
        assert rows and rows[0][0] == "beta", f"table value lost: {rows}"
        chk.close(); src.close(); dst.close()
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
    print("=== Phase 2: graduate carries the tenant's data ===")
    if not os.path.exists(BIN):
        print(f"  SKIP: engine binary not built at {BIN}")
        sys.exit(0)
    run("graduate_moves_data", test_graduate_moves_data)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
