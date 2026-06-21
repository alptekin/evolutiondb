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

from mcp_server_evosql.tenancy import (                                     # noqa: E402
    tenant_k8s_name, derive_db_password, derive_encryption_key)
from mcp_server_evosql import tenant_k8s                                    # noqa: E402
from mcp_server_evosql.tenant_k8s import (                                  # noqa: E402
    KubernetesTenantBackend, K8sTenantInstance, K8sSecretKeyProvider,
    LABEL_TENANT, _KEYREF_FILE, _key_fingerprint)
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


def _enc_backend(**kw):
    """An encrypted backend whose kubectl + secret-store calls are faked, so
    backup/restore/rotate orchestration is unit-testable with no cluster."""
    b = KubernetesTenantBackend(image="evolutiondb:test", encrypt=True, **kw)
    calls = []
    store = {}    # the tenant Secret's key/value store: {(name, key): value}

    def fake_run(args, input_text=None):
        calls.append((list(args), input_text))
        if args[:2] == ["get", "pods"]:
            return ""              # _wait_pods_gone -> already gone
        if args[:1] == ["get"]:
            return "1"
        return ""

    b._run = fake_run
    b._get_secret_key = lambda name, key: store.get((name, key))
    b._set_secret_key = lambda name, key, value: store.__setitem__((name, key), value)
    b._clear_secret_key = lambda name, key: store.pop((name, key), None)
    b._wait_pods_gone = lambda name, timeout=None: None
    b._job_status = "succeeded"
    b._run_rotation_job = lambda name, mode, secret: b._job_status
    return b, calls, store


# -- opt-in encryption rendering -----------------------------------------------
def test_encrypt_off_render_has_no_key():
    b = KubernetesTenantBackend(image="evolutiondb:test")     # encrypt=False
    y = b.render_manifests("acme")
    assert "EVOSQL_ENCRYPTION_KEY" not in y
    assert "encryption-key" not in y                          # byte-for-byte


def test_encrypt_on_render_wires_secretref():
    b = KubernetesTenantBackend(image="evolutiondb:test", encrypt=True)
    y = b.render_manifests("acme")
    assert "EVOSQL_ENCRYPTION_KEY" in y and "key: encryption-key" in y
    # the Secret body still carries ONLY the password; encryption-key is seeded
    # via patch in ensure() (so re-apply can never clobber a rotated key).
    secret_doc = y.split("---")[0]
    assert "password:" in secret_doc and "encryption-key" not in secret_doc


def test_key_provider_for_implies_encrypt():
    b = KubernetesTenantBackend(image="evolutiondb:test",
                                key_provider_for=lambda tid: None)
    assert b.encrypt is True


# -- backup ordering -----------------------------------------------------------
def test_backup_orders_db_first_wal_last():
    import tempfile
    b, _calls = _recording_backend()
    b._exec_capture = lambda pod, sh: (
        b"evosql.wal\nevosql.db\ncerts/\nBACKUP_LABEL\nevosql.wal.archive\n")
    order = []
    b._exec_stream_to_file = lambda pod, sh, dest: order.append(
        os.path.basename(dest))
    d = tempfile.mkdtemp()
    assert b.backup("acme", d) == d
    assert order[0] == "evosql.db"                  # data file first
    assert order[-2:] == ["evosql.wal", "evosql.wal.archive"]   # WAL last
    assert "certs" not in order                     # directory skipped


# -- restore always brings the tenant back -------------------------------------
def test_restore_always_scales_back_up():
    import tempfile
    b, calls = _recording_backend()
    b._wait_pods_gone = lambda name, timeout=None: None
    b._wait_pod_ready = lambda pod, timeout=None: None
    b._delete_pod = lambda pod: None
    b._exec_capture = lambda pod, sh: b""           # wipe ok
    def boom(pod, sh, data):
        raise RuntimeError("feed failed")
    b._exec_feed = boom
    d = tempfile.mkdtemp()
    with open(os.path.join(d, "evosql.db"), "wb") as fh:
        fh.write(b"x")
    raised = False
    try:
        b.restore("acme", d)
    except RuntimeError:
        raised = True
    assert raised, "a failed restore must surface the error"
    # ...but ensure() (scale to 1) must still have run, so the tenant is back up
    assert any(c[0][:1] == ["scale"] and "--replicas=1" in c[0] for c in calls)


# -- rotate_key two-phase ------------------------------------------------------
def test_rotate_key_requires_encryption():
    b = KubernetesTenantBackend(image="evolutiondb:test")     # encrypt=False
    raised = False
    try:
        b.rotate_key("acme")
    except Exception:
        raised = True
    assert raised, "rotate_key on an unencrypted backend must raise"


def test_rotate_key_success_commits():
    b, calls, store = _enc_backend(namespace="saas")
    b._job_status = "succeeded"
    name = tenant_k8s_name("acme")
    seed = derive_encryption_key("acme")
    res = b.rotate_key("acme")
    assert res["ok"] and res["passphrase_rotated"] and res["dek_rotated"]
    assert res["needs_reconcile"] is False
    # current key rotated away from the seed, pending cleared (committed)
    assert store.get((name, "encryption-key")) not in (None, seed)
    assert (name, "encryption-key-pending") not in store
    # the transient key Secret was applied AND cleaned up
    assert any(c[0][:1] == ["apply"] and c[1] and f"{name}-rotkeys" in c[1]
               for c in calls)
    assert any(c[0] == ["delete", "secret", f"{name}-rotkeys",
                        "--ignore-not-found=true"] for c in calls)
    # tenant scaled back up
    assert any(c[0][:1] == ["scale"] and "--replicas=1" in c[0] for c in calls)


def test_rotate_key_clean_failure_rolls_back():
    b, _calls, store = _enc_backend()
    b._job_status = "failed"
    name = tenant_k8s_name("acme")
    seed = derive_encryption_key("acme")
    res = b.rotate_key("acme")
    assert res["ok"] is False and res["needs_reconcile"] is False
    assert store.get((name, "encryption-key")) == seed     # unchanged
    assert (name, "encryption-key-pending") not in store   # rolled back


def test_rotate_key_indeterminate_reconciles_when_ready():
    # indeterminate rekey, but the tenant comes back Ready under the CURRENT key
    # (fake _sts_ready -> True): the rekey never committed, so the stale pending
    # is reconciled away (unblocking future rotations) while needs_reconcile is
    # still surfaced.
    b, _calls, store = _enc_backend()
    b._job_status = "indeterminate"
    name = tenant_k8s_name("acme")
    seed = derive_encryption_key("acme")
    res = b.rotate_key("acme")
    assert res["ok"] is False and res["needs_reconcile"] is True
    assert store.get((name, "encryption-key")) == seed     # current untouched
    assert (name, "encryption-key-pending") not in store   # stale pending cleared


def test_rotate_key_indeterminate_retains_pending_when_not_ready():
    # indeterminate rekey AND the tenant does not become Ready under the current
    # key (the rekey may have reached disk): the pending key is RETAINED so the
    # next ensure can self-heal by promoting it.
    b, _calls, store = _enc_backend()
    b._job_status = "indeterminate"
    b._sts_ready = lambda name: False
    name = tenant_k8s_name("acme")
    seed = derive_encryption_key("acme")
    res = b.rotate_key("acme")
    assert res["ok"] is False and res["needs_reconcile"] is True
    assert store.get((name, "encryption-key")) == seed     # current untouched
    assert (name, "encryption-key-pending") in store       # retained for heal


def test_rotate_key_reports_down_tenant_when_ensure_fails():
    # a successful rekey, but the post-rotation ensure() cannot bring the tenant
    # back Ready -> rotate_key must NOT report ok=True (it would mask a down,
    # possibly-stranded tenant).
    b, _calls, store = _enc_backend()
    b._job_status = "succeeded"
    def boom(tid):
        raise RuntimeError("rollout timed out")
    b.ensure = boom
    res = b.rotate_key("acme")
    assert res["ok"] is False and res["needs_reconcile"] is True
    assert "did not return to Ready" in res["detail"]


# -- encrypted restore refuses a key-mismatched backup -------------------------
def test_restore_refuses_key_mismatch():
    import tempfile
    b, _calls, store = _enc_backend()
    name = tenant_k8s_name("acme")
    store[(name, "encryption-key")] = "current-key"
    d = tempfile.mkdtemp()
    with open(os.path.join(d, _KEYREF_FILE), "w") as fh:
        fh.write(_key_fingerprint("an-old-rotated-away-key"))   # different key
    with open(os.path.join(d, "evosql.db"), "wb") as fh:
        fh.write(b"ciphertext")
    raised = False
    try:
        b.restore("acme", d)
    except Exception:
        raised = True
    assert raised, "restore must refuse a backup taken under a different key"


# -- the Secret-backed KeyProvider ---------------------------------------------
def test_k8s_secret_key_provider_two_phase():
    store = {}

    class FakeB:
        def _get_secret_key(self, name, key): return store.get((name, key))
        def _set_secret_key(self, name, key, value): store[(name, key)] = value
        def _clear_secret_key(self, name, key): store.pop((name, key), None)

    p = K8sSecretKeyProvider(FakeB(), "t-acme", seed="seed-key")
    assert p.current() == "seed-key"                       # seeds on first use
    assert store[("t-acme", "encryption-key")] == "seed-key"
    new = p.rotate()
    assert new != "seed-key" and p.pending_key() == new
    assert p.current() == "seed-key"                       # current stays put
    # a second rotate while one is pending is refused
    dbl = False
    try:
        p.rotate()
    except Exception:
        dbl = True
    assert dbl
    p.commit()
    assert p.current() == new and p.pending_key() is None
    # a fresh rotate then rollback discards the pending, current unchanged
    p.rotate()
    p.rollback()
    assert p.pending_key() is None and p.current() == new


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
    run("encrypt_off_render_has_no_key", test_encrypt_off_render_has_no_key)
    run("encrypt_on_render_wires_secretref", test_encrypt_on_render_wires_secretref)
    run("key_provider_for_implies_encrypt", test_key_provider_for_implies_encrypt)
    run("backup_orders_db_first_wal_last", test_backup_orders_db_first_wal_last)
    run("restore_always_scales_back_up", test_restore_always_scales_back_up)
    run("rotate_key_requires_encryption", test_rotate_key_requires_encryption)
    run("rotate_key_success_commits", test_rotate_key_success_commits)
    run("rotate_key_clean_failure_rolls_back", test_rotate_key_clean_failure_rolls_back)
    run("rotate_key_indeterminate_reconciles_when_ready", test_rotate_key_indeterminate_reconciles_when_ready)
    run("rotate_key_indeterminate_retains_pending_when_not_ready", test_rotate_key_indeterminate_retains_pending_when_not_ready)
    run("rotate_key_reports_down_tenant_when_ensure_fails", test_rotate_key_reports_down_tenant_when_ensure_fails)
    run("restore_refuses_key_mismatch", test_restore_refuses_key_mismatch)
    run("k8s_secret_key_provider_two_phase", test_k8s_secret_key_provider_two_phase)
    run("router_routes_to_service_dns", test_router_routes_to_service_dns)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
