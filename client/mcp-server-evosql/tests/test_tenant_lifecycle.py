"""
test_tenant_lifecycle — Phase 2 #4: tenant lifecycle + resource quota.

  - suspend(): refuse routing + stop the tenant's engine (free resources);
    resume() brings it back with data intact;
  - delete(): offboard — engine stopped, data dir removed;
  - mem_limit_mb: a dedicated engine is started with a bounded buffer pool
    (--buffer-pool-size), the per-tenant noisy-neighbour cap.

Drives real binaries (no Docker). Skips if the engine binary isn't built.
"""
from __future__ import annotations

import os
import sys
import time
import socket
import shutil
import tempfile

_TESTS = os.path.dirname(os.path.abspath(__file__))
_PKG_PARENT = os.path.dirname(_TESTS)
_REPO = os.path.dirname(os.path.dirname(_PKG_PARENT))
sys.path.insert(0, _PKG_PARENT)
sys.path.insert(0, os.path.join(_REPO, "tests"))

os.environ.setdefault("EVOSQL_TENANT_SECRET", "test-tenant-secret")

from mcp_server_evosql.tenant_supervisor import TenantSupervisor          # noqa: E402
from mcp_server_evosql.tenant_router import (                              # noqa: E402
    TenantRouter, DEDICATED, SUSPENDED, ACTIVE, TenantSuspended)
from pg_helpers import conn, simple_query                                  # noqa: E402

BIN = os.path.join(_REPO, "adaptor", "evosql-server")
passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def _exec(coords, sql):
    c = conn(host=coords.host, port=coords.port, user=coords.user,
             password=coords.password, database=coords.db)
    _c, rows, err, _t = simple_query(c, sql); c.close()
    if err:
        raise RuntimeError(f"{sql!r} -> {err}")
    return rows


def test_suspend_resume_keeps_data():
    base = tempfile.mkdtemp(prefix="evo_life_")
    sup = TenantSupervisor(base, binary=BIN, base_port=6520)
    router = TenantRouter(sup, tiers={"acme": DEDICATED})
    try:
        c = router.coordinates("acme")
        _exec(c, "CREATE TABLE life_t (id INT PRIMARY KEY)")
        _exec(c, "INSERT INTO life_t VALUES (1)")
        assert sup.get("acme") and sup.get("acme").alive()

        router.suspend("acme")
        assert router.status("acme") == SUSPENDED
        assert sup.get("acme") is None, "suspend did not stop the tenant's engine"
        raised = False
        try:
            router.coordinates("acme")
        except TenantSuspended:
            raised = True
        assert raised, "routing a suspended tenant was not refused"

        router.resume("acme")
        assert router.status("acme") == ACTIVE
        c2 = router.coordinates("acme")            # engine restarts on demand
        rows = None
        for _ in range(20):
            try:
                rows = _exec(c2, "SELECT COUNT(*) FROM life_t"); break
            except Exception:
                time.sleep(0.25)
        assert rows and rows[0][0] == "1", f"data lost across suspend/resume: {rows}"
    finally:
        sup.stop_all(); shutil.rmtree(base, ignore_errors=True)


def test_delete_offboards():
    base = tempfile.mkdtemp(prefix="evo_del_")
    sup = TenantSupervisor(base, binary=BIN, base_port=6540)
    router = TenantRouter(sup, tiers={"bob": DEDICATED})
    try:
        c = router.coordinates("bob")
        _exec(c, "CREATE TABLE del_t (id INT PRIMARY KEY)")
        _exec(c, "INSERT INTO del_t VALUES (42)")
        data_dir = sup.get("bob").data_dir
        assert os.path.isdir(data_dir)

        sup.delete("bob")
        assert sup.get("bob") is None, "delete left the engine running"
        assert not os.path.isdir(data_dir), "delete left the tenant's data dir"

        # a fresh ensure gives a brand-new EMPTY engine (no old data)
        c2 = router.coordinates("bob")
        rows, err = None, None
        c3 = conn(host=c2.host, port=c2.port, user=c2.user, password=c2.password,
                  database=c2.db)
        _c, rows, err, _t = simple_query(c3, "SELECT COUNT(*) FROM del_t"); c3.close()
        assert err is not None, "deleted tenant's table reappeared (data not gone)"
    finally:
        sup.stop_all(); shutil.rmtree(base, ignore_errors=True)


def test_memory_quota_applied():
    base = tempfile.mkdtemp(prefix="evo_quota_")
    sup = TenantSupervisor(base, binary=BIN, base_port=6560, mem_limit_mb=64)
    router = TenantRouter(sup, tiers={"acme": DEDICATED})
    try:
        # the engine must start + serve with a bounded buffer pool
        c = router.coordinates("acme")
        _exec(c, "CREATE TABLE q_t (id INT PRIMARY KEY, v VARCHAR(40))")
        for i in range(50):
            _exec(c, f"INSERT INTO q_t VALUES ({i}, 'row_{i}')")
        rows = _exec(c, "SELECT COUNT(*) FROM q_t")
        assert rows[0][0] == "50", f"capped-memory engine did not serve: {rows}"
    finally:
        sup.stop_all(); shutil.rmtree(base, ignore_errors=True)


if __name__ == "__main__":
    print("=== Phase 2 #4: tenant lifecycle + resource quota ===")
    if not os.path.exists(BIN):
        print(f"  SKIP: engine binary not built at {BIN}")
        sys.exit(0)
    run("suspend_resume_keeps_data", test_suspend_resume_keeps_data)
    run("delete_offboards", test_delete_offboards)
    run("memory_quota_applied", test_memory_quota_applied)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
