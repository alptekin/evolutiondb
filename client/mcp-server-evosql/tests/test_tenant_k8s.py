"""
test_tenant_k8s — Phase 2 #5: the Kubernetes spawn backend (no cluster).

Pure-unit: monkeypatches the kubectl runner so it always runs in CI. Asserts
  - tenant_k8s_name is DNS-safe (RFC 1123 label) and injective;
  - render_manifests emits a valid-shape Secret + headless Service + StatefulSet
    with the critical env (BIND=0.0.0.0, DATA_DIR), the per-tenant memory cap,
    the password wired from the Secret, and the delete-selector label on the PVC;
  - ensure/stop/delete/get build the right kubectl invocations;
  - a TenantRouter holding the K8s backend routes a dedicated tenant to its
    Service DNS (no USE) — the same surface as the local supervisor.

The real-cluster proof is deploy/kind-tenant-pod-smoke.sh.
"""
from __future__ import annotations

import os
import re
import sys

_TESTS = os.path.dirname(os.path.abspath(__file__))
_PKG_PARENT = os.path.dirname(_TESTS)
sys.path.insert(0, _PKG_PARENT)

os.environ.setdefault("EVOSQL_TENANT_SECRET", "test-tenant-secret")

from mcp_server_evosql.tenancy import tenant_k8s_name, derive_db_password   # noqa: E402
from mcp_server_evosql import tenant_k8s                                    # noqa: E402
from mcp_server_evosql.tenant_k8s import (                                  # noqa: E402
    KubernetesTenantBackend, K8sTenantInstance, LABEL_TENANT)
from mcp_server_evosql.tenant_router import TenantRouter, DEDICATED         # noqa: E402

passed = failed = 0
DNS1123 = re.compile(r"^[a-z0-9]([a-z0-9-]*[a-z0-9])?$")


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def _recording_backend(**kw):
    """A backend whose kubectl calls are recorded instead of executed."""
    b = KubernetesTenantBackend(image="evolutiondb:test", **kw)
    calls = []

    def fake_run(args, input_text=None):
        calls.append((list(args), input_text))
        # `get ... jsonpath={.spec.replicas}` must return a parseable number
        if args[:1] == ["get"]:
            return "1"
        return ""

    b._run = fake_run
    return b, calls


def test_name_is_dns_safe_and_injective():
    samples = ["acme.com", "acme_com", "acme-com", "ACME Corp",
               "tenant/with/slashes", "üñîçødé", "a" * 200, ""]
    names = {}
    for tid in samples:
        n = tenant_k8s_name(tid)
        assert DNS1123.match(n), f"{tid!r} -> {n!r} is not a valid RFC1123 label"
        assert len(n) <= 63, f"{n!r} exceeds 63 chars"
        names[tid] = n
    # collision-prone variants must stay distinct (hash suffix guarantees it)
    distinct = {names["acme.com"], names["acme_com"],
                names["acme-com"], names["ACME Corp"]}
    assert len(distinct) == 4, f"names collided: {distinct}"


def test_render_manifests_shape():
    b = KubernetesTenantBackend(image="evolutiondb:1.2.3", namespace="saas",
                                mem_limit_mb=128, storage_size="2Gi",
                                service_account="evo-control-plane")
    y = b.render_manifests("acme.com")
    name = tenant_k8s_name("acme.com")
    # three documents
    assert y.count("\nkind: ") + y.startswith("apiVersion") >= 0
    assert "kind: Secret" in y and "kind: Service" in y and "kind: StatefulSet" in y
    # critical engine env
    assert 'value: "0.0.0.0"' in y                       # EVOSQL_BIND
    assert "EVOSQL_DATA_DIR" in y and 'value: "/data"' in y
    assert "EVOSQL_BUFFER_POOL_SIZE" in y and 'value: "128M"' in y   # mem cap
    # password wired from the Secret, not inlined into the pod env
    assert "secretKeyRef" in y and f"name: {name}" in y
    assert derive_db_password("acme.com") in y           # only in the Secret
    # headless Service
    assert "clusterIP: None" in y
    assert f"port: {tenant_k8s.PG_PORT}" in y and f"port: {tenant_k8s.EVO_PORT}" in y
    # delete selector label present on workload AND the PVC template
    assert f"\"{LABEL_TENANT}\": \"{name}\"" in y
    assert "volumeClaimTemplates" in y and "storage: 2Gi" in y
    assert "serviceAccountName: \"evo-control-plane\"" in y
    assert "namespace: saas" in y


def test_no_mem_limit_omits_env():
    b = KubernetesTenantBackend(image="evolutiondb:test")
    y = b.render_manifests("bob")
    assert "EVOSQL_BUFFER_POOL_SIZE" not in y


def test_ensure_stop_delete_commands():
    b, calls = _recording_backend(namespace="saas")
    name = tenant_k8s_name("acme")

    inst = b.ensure("acme")
    verbs = [c[0][0] for c in calls]
    assert verbs == ["apply", "scale", "rollout"], verbs
    assert calls[0][1] is not None and "kind: StatefulSet" in calls[0][1]
    assert f"statefulset/{name}" in " ".join(calls[1][0])
    assert "--replicas=1" in calls[1][0]
    assert "status" in calls[2][0]
    assert isinstance(inst, K8sTenantInstance)
    assert inst.host == f"{name}.saas.svc.cluster.local"
    assert inst.pg_port == tenant_k8s.PG_PORT
    assert inst.password == derive_db_password("acme")

    calls.clear()
    b.stop("acme")
    assert calls[0][0][:2] == ["scale", f"statefulset/{name}"]
    assert "--replicas=0" in calls[0][0]

    calls.clear()
    b.delete("acme")
    assert calls[0][0][0] == "delete"
    joined = " ".join(calls[0][0])
    assert "pvc" in joined and f"{LABEL_TENANT}={name}" in joined
    assert "--ignore-not-found=true" in calls[0][0]


def test_get_parses_replicas():
    b = KubernetesTenantBackend(image="evolutiondb:test")
    b._run = lambda args, input_text=None: "0" if args[0] == "get" else ""
    inst = b.get("acme")
    assert inst is not None and inst.replicas == 0 and inst.alive() is False


def test_router_routes_to_service_dns():
    b, _calls = _recording_backend(namespace="saas")
    router = TenantRouter(b, tiers={"acme": DEDICATED})
    c = router.coordinates("acme")
    name = tenant_k8s_name("acme")
    assert c.tier == DEDICATED
    assert c.host == f"{name}.saas.svc.cluster.local"
    assert c.port == tenant_k8s.PG_PORT
    assert c.issue_use is False           # the pod IS the tenant — no USE
    assert c.user == "admin"
    assert c.password == derive_db_password("acme")


if __name__ == "__main__":
    print("=== Phase 2 #5: Kubernetes tenant backend (unit) ===")
    run("name_is_dns_safe_and_injective", test_name_is_dns_safe_and_injective)
    run("render_manifests_shape", test_render_manifests_shape)
    run("no_mem_limit_omits_env", test_no_mem_limit_omits_env)
    run("ensure_stop_delete_commands", test_ensure_stop_delete_commands)
    run("get_parses_replicas", test_get_parses_replicas)
    run("router_routes_to_service_dns", test_router_routes_to_service_dns)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
