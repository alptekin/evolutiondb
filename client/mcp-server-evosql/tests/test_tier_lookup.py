"""
test_tier_lookup — the tier an operator persists (control_plane.set_tier writes
it into the registry tenant meta) drives TenantRouter routing via
tenancy.registry_tier_lookup. Server-free (FakeBackend as the admin backend).
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

os.environ.setdefault("EVOSQL_TENANT_SECRET", "test-tier-secret")

from _assistant_fakes import FakeBackend                                   # noqa: E402
from mcp_server_evosql import tenancy                                       # noqa: E402
from mcp_server_evosql.tenant_router import TenantRouter, SHARED, DEDICATED # noqa: E402

passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def test_persisted_tier_drives_router():
    admin = FakeBackend()
    reg = tenancy.Registry(admin); reg.ensure_store()
    reg.put_tenant({"tenant_id": "acme", "tier": "shared", "status": "active"})
    router = TenantRouter(object(),
                          tier_lookup=tenancy.registry_tier_lookup(admin))
    assert router.tier("acme") == SHARED
    # operator graduates the tenant -> persisted dedicated -> router reflects it
    reg.put_tenant({"tenant_id": "acme", "tier": "dedicated", "status": "active"})
    assert router.tier("acme") == DEDICATED
    # unknown tenant / no tier -> default shared
    assert router.tier("ghost") == SHARED
    reg.put_tenant({"tenant_id": "bob", "status": "active"})        # no tier field
    assert router.tier("bob") == SHARED


def test_inmemory_override_wins():
    admin = FakeBackend()
    reg = tenancy.Registry(admin); reg.ensure_store()
    reg.put_tenant({"tenant_id": "acme", "tier": "shared", "status": "active"})
    router = TenantRouter(object(),
                          tier_lookup=tenancy.registry_tier_lookup(admin))
    router.set_tier("acme", "dedicated")           # runtime override beats lookup
    assert router.tier("acme") == DEDICATED


if __name__ == "__main__":
    print("=== persisted tier -> router routing ===")
    run("persisted_tier_drives_router", test_persisted_tier_drives_router)
    run("inmemory_override_wins", test_inmemory_override_wins)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
