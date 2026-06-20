"""
test_tenant_backend_routing — Phase 2: the MCP backend factory honours the tier
router. No engines/psycopg needed: a fake supervisor returns a stub dedicated
instance, and MemoryBackend is monkeypatched to record its connection target.

Verifies:
  - TenantRouter.target_for_identity maps a resolved Identity to the right tier
    target (dedicated -> own engine, no USE; shared -> shared pool, USE its db);
  - MCPServer._backend_for routes a resolved tenant identity through the router
    when one is set, but keeps the legacy/default identity on the shared path
    (and is byte-for-byte unchanged when no router is configured).
"""
from __future__ import annotations

import os
import sys
from types import SimpleNamespace

_TESTS = os.path.dirname(os.path.abspath(__file__))
_PKG_PARENT = os.path.dirname(_TESTS)
sys.path.insert(0, _PKG_PARENT)

os.environ.setdefault("EVOSQL_TENANT_SECRET", "test-tenant-secret")
os.environ.pop("EVOSQL_EMBEDDED", None)  # keep _backend_for from spawning an engine

from mcp_server_evosql.tenant_router import TenantRouter, SHARED, DEDICATED  # noqa: E402
from mcp_server_evosql.tenancy import (                                       # noqa: E402
    for_tenant, env_identity, tenant_db_name, tenant_db_user)

passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


class FakeSup:
    def __init__(self):
        self.ensured = []

    def ensure(self, tid):
        self.ensured.append(tid)
        return SimpleNamespace(pg_port=7777, password="ded-secret", tenant_id=tid)


def _router():
    return TenantRouter(FakeSup(), shared_host="shared.host", shared_port=1234,
                        tiers={"acme": DEDICATED, "bob": SHARED})


def test_target_for_identity_dedicated_vs_shared():
    r = _router()
    acme = for_tenant("acme", "alice", ("admin",))
    t = r.target_for_identity(acme)
    assert t["host"] == "127.0.0.1" and t["port"] == 7777, t
    assert t["user"] == "admin" and t["password"] == "ded-secret", t
    assert t["use_database"] is None, "dedicated tier must not issue USE"
    assert t["prefix"] == acme.prefix, "store prefix must be preserved"

    bob = for_tenant("bob", "bob", ("member",))
    t2 = r.target_for_identity(bob)
    assert t2["host"] == "shared.host" and t2["port"] == 1234, t2
    assert t2["user"] == tenant_db_user("bob"), t2
    assert t2["use_database"] == tenant_db_name("bob"), "shared tier must USE its db"


def test_backend_factory_routes_through_router():
    try:
        import mcp_server_evosql.server as server
    except Exception as e:  # pragma: no cover
        raise AssertionError(f"could not import server: {e}")

    records = []

    class FakeBackend:
        def __init__(self, host, port, user, password, database, prefix, **kw):
            self.host, self.port, self.user = host, port, user
            self.database, self.prefix = database, prefix
            self.use_database = kw.get("use_database")
            records.append(self)

    orig = server.MemoryBackend
    server.MemoryBackend = FakeBackend
    try:
        srv = server.MCPServer()
        srv.router = _router()

        # a resolved tenant (dedicated) routes to its own engine
        acme = for_tenant("acme", "alice", ("admin",))
        b = srv._backend_for(acme)
        assert b.host == "127.0.0.1" and b.port == 7777, (b.host, b.port)
        assert b.use_database is None

        # the legacy/default identity stays on the shared path (NOT routed)
        d = srv._backend_for(srv.default_identity)
        assert d.host == srv.host and d.port == srv.port, (d.host, d.port)

        # caching: same dedicated tenant -> same backend object
        b2 = srv._backend_for(for_tenant("acme", "alice", ("admin",)))
        assert b2 is b, "dedicated backend not cached"
    finally:
        server.MemoryBackend = orig


if __name__ == "__main__":
    print("=== Phase 2: backend factory tier routing ===")
    run("target_for_identity_dedicated_vs_shared",
        test_target_for_identity_dedicated_vs_shared)
    run("backend_factory_routes_through_router",
        test_backend_factory_routes_through_router)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
