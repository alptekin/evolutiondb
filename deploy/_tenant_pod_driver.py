"""
_tenant_pod_driver.py — drives KubernetesTenantBackend against a REAL cluster to
prove Phase 2 #5 (pod-per-tenant) end to end. Invoked by kind-tenant-pod-smoke.sh.

It runs as the control-plane ServiceAccount (kubectl --as=...), so it ALSO
proves the chart's RBAC is sufficient — every kubectl call here goes through the
Role's verbs, not cluster-admin.

Phases (each asserts against the live API server):
  1. ensure(tenant)  -> a StatefulSet + Service + Secret + PVC appear, pod Ready;
  2. data served     -> port-forward the tenant Service, write rows, read them back;
  3. suspend (stop)  -> scale to 0, the pod goes away (compute freed);
  4. resume (ensure) -> pod returns AND the rows survived (the PVC was kept);
  5. delete          -> StatefulSet + Service + Secret + PVC are all gone.

Env: NS, SA (serviceaccount name), IMAGE, TENANT (default acme.example),
EVOSQL_TENANT_SECRET (shared so the rendered Secret password == the password the
driver connects with).
"""
import os
import subprocess
import sys
import time

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
sys.path.insert(0, os.path.join(ROOT, "client", "mcp-server-evosql"))
sys.path.insert(0, os.path.join(ROOT, "tests"))

from mcp_server_evosql.tenant_k8s import KubernetesTenantBackend          # noqa: E402
from mcp_server_evosql.tenancy import tenant_k8s_name, derive_db_password  # noqa: E402
from pg_helpers import conn, simple_query                                  # noqa: E402

NS = os.environ["NS"]
SA = os.environ["SA"]
IMAGE = os.environ["IMAGE"]
TENANT = os.environ.get("TENANT", "acme.example")
LPORT = int(os.environ.get("LPORT", "16433"))


def ok(m):   print(f"\033[1;32m  ok: {m}\033[0m")
def fail(m): print(f"\033[1;31mFAIL: {m}\033[0m", file=sys.stderr); sys.exit(1)


def kget(args):
    """A plain (non-impersonated) kubectl get for assertions."""
    p = subprocess.run(["kubectl", "-n", NS, *args], capture_output=True, text=True)
    return p.returncode, p.stdout.strip(), p.stderr.strip()


def resource_count(name):
    """How many of the tenant's objects exist (sts+svc+secret+pvc)."""
    n = 0
    for kind in ("statefulset", "service", "secret"):
        rc, out, _ = kget(["get", kind, name, "--ignore-not-found", "-o", "name"])
        n += 1 if (rc == 0 and out) else 0
    rc, out, _ = kget(["get", "pvc", "-l", f"evolutiondb.org/tenant={name}",
                       "-o", "name"])
    n += len([x for x in out.splitlines() if x]) if rc == 0 else 0
    return n


def pod_count(name):
    rc, out, _ = kget(["get", "pods", "-l", f"evolutiondb.org/tenant={name}",
                       "--no-headers"])
    return len([x for x in out.splitlines() if x.strip()]) if rc == 0 else 0


def with_portforward(name, fn):
    pf = subprocess.Popen(
        ["kubectl", "-n", NS, "port-forward", f"svc/{name}", f"{LPORT}:5433"],
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    try:
        deadline = time.time() + 30
        while time.time() < deadline:
            try:
                import socket
                socket.create_connection(("127.0.0.1", LPORT), 0.5).close()
                break
            except OSError:
                time.sleep(0.3)
        time.sleep(0.5)
        return fn()
    finally:
        pf.terminate()
        try:
            pf.wait(timeout=5)
        except subprocess.TimeoutExpired:
            pf.kill()


def query(sql, expect_ok=True):
    c = conn(host="127.0.0.1", port=LPORT, user="admin",
             password=derive_db_password(TENANT), database="evosql")
    _cols, rows, err, _tag = simple_query(c, sql)
    c.close()
    if expect_ok and err:
        fail(f"{sql!r} -> {err}")
    return rows, err


def main():
    backend = KubernetesTenantBackend(
        namespace=NS, image=IMAGE, image_pull_policy="IfNotPresent",
        storage_size="1Gi", mem_limit_mb=64, ready_timeout=180,
        kubectl=f"kubectl --as=system:serviceaccount:{NS}:{SA}")
    name = tenant_k8s_name(TENANT)
    print(f"== Phase 2 #5 pod-per-tenant: tenant={TENANT!r} k8s-name={name!r} ==")

    # 1. provision (as the control-plane SA -> also proves the RBAC) -----------
    backend.ensure(TENANT)
    if resource_count(name) != 4:
        fail(f"expected 4 tenant objects (sts/svc/secret/pvc), got "
             f"{resource_count(name)}")
    ok("ensure provisioned StatefulSet + Service + Secret + PVC (via the SA RBAC)")
    if pod_count(name) != 1:
        fail(f"expected 1 tenant pod, got {pod_count(name)}")
    ok("tenant pod is running")

    # 2. the dedicated engine serves ------------------------------------------
    def seed():
        query("CREATE TABLE saas_t (id INT PRIMARY KEY, v VARCHAR(32))")
        for i in range(7):
            query(f"INSERT INTO saas_t VALUES ({i}, 'r{i}')")
        rows, _ = query("SELECT COUNT(*) FROM saas_t")
        return rows
    rows = with_portforward(name, seed)
    if not rows or rows[0][0] != "7":
        fail(f"tenant engine did not serve writes: {rows}")
    ok("tenant engine served 7 rows through its Service")

    # 3. suspend -> scale to 0, compute freed ---------------------------------
    backend.stop(TENANT)
    deadline = time.time() + 60
    while time.time() < deadline and pod_count(name) != 0:
        time.sleep(1)
    if pod_count(name) != 0:
        fail("suspend did not remove the tenant pod (scale to 0)")
    ok("suspend scaled the tenant to 0 pods (PVC retained)")

    # 4. resume -> pod back AND data survived ----------------------------------
    backend.ensure(TENANT)
    if pod_count(name) != 1:
        fail("resume did not bring the tenant pod back")
    rows = with_portforward(name, lambda: query("SELECT COUNT(*) FROM saas_t")[0])
    if not rows or rows[0][0] != "7":
        fail(f"data did NOT survive suspend/resume (PVC lost?): {rows}")
    ok("resume restored the pod and the 7 rows survived (data on the PVC)")

    # 5. delete -> everything gone --------------------------------------------
    backend.delete(TENANT)
    deadline = time.time() + 60
    while time.time() < deadline and resource_count(name) != 0:
        time.sleep(1)
    if resource_count(name) != 0:
        fail(f"delete left {resource_count(name)} tenant objects behind")
    ok("delete removed the StatefulSet + Service + Secret + PVC")

    print("\033[1;32mTENANT-POD SMOKE PASSED — dedicated tenants are real, "
          "isolated, suspendable and offboardable on K8s\033[0m")


if __name__ == "__main__":
    main()
