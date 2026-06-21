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
  4b. backup/restore -> back up the live data dir, write more rows, restore, and
                        the tenant rolls back to the snapshot while a SECOND
                        tenant stays untouched (restore is per-tenant);
  4c. key rotation   -> a dedicated ENCRYPTED tenant rotates its at-rest key via
                        offline Jobs; the Secret's key changes and the data still
                        serves (it reopened under the rotated key);
  5. delete          -> StatefulSet + Service + Secret + PVC are all gone.

Env: NS, SA (serviceaccount name), IMAGE, TENANT (default acme.example),
TENANT2/TENANT3 (the isolation control + encrypted rotate tenants),
EVOSQL_TENANT_SECRET (shared so the rendered Secret password == the password the
driver connects with).
"""
import os
import shutil
import subprocess
import sys
import tempfile
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
TENANT2 = os.environ.get("TENANT2", "beta.example")    # isolation control
TENANT3 = os.environ.get("TENANT3", "gamma.example")   # encrypted (rotate proof)
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


def pf_query(tenant, name, sqls):
    """Port-forward a tenant's Service and run a list of SQL statements as that
    tenant (its own derived password). Returns the LAST statement's rows."""
    def run_all():
        c = conn(host="127.0.0.1", port=LPORT, user="admin",
                 password=derive_db_password(tenant), database="evosql")
        last = None
        try:
            for sql in sqls:
                _cols, rows, err, _tag = simple_query(c, sql)
                if err:
                    fail(f"{sql!r} -> {err}")
                last = rows
        finally:
            c.close()
        return last
    return with_portforward(name, run_all)


def secret_key(name, key):
    """Read one (already base64-encoded) field from a tenant Secret, for
    asserting key rotation actually changed the stored value."""
    rc, out, _ = kget(["get", "secret", name, "-o",
                       f"jsonpath={{.data['{key}']}}"])
    return out.strip() if rc == 0 else ""


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

    # 4b. backup -> mutate -> restore (point-in-time recovery, per-tenant) -----
    bdir = tempfile.mkdtemp(prefix="evo-bk-")
    backend.backup(TENANT, bdir)
    if not os.path.exists(os.path.join(bdir, "evosql.db")):
        fail(f"backup did not produce evosql.db in {bdir}")
    ok("backup copied the live data dir out (evosql.db present)")

    rows = pf_query(TENANT, name, [
        *[f"INSERT INTO saas_t VALUES ({i}, 'r{i}')" for i in range(7, 12)],
        "SELECT COUNT(*) FROM saas_t"])
    if not rows or rows[0][0] != "12":
        fail(f"expected 12 rows after post-backup inserts, got {rows}")
    ok("inserted 5 more rows AFTER the backup (12 total)")

    # a second tenant proves restore is per-tenant — it must stay untouched.
    backend.ensure(TENANT2)
    name2 = tenant_k8s_name(TENANT2)
    rows = pf_query(TENANT2, name2, [
        "CREATE TABLE saas_t (id INT PRIMARY KEY, v VARCHAR(32))",
        *[f"INSERT INTO saas_t VALUES ({i}, 'b{i}')" for i in range(3)],
        "SELECT COUNT(*) FROM saas_t"])
    if not rows or rows[0][0] != "3":
        fail(f"second tenant did not seed: {rows}")
    ok(f"second tenant {TENANT2!r} seeded 3 rows (isolation control)")

    backend.restore(TENANT, bdir)
    shutil.rmtree(bdir, ignore_errors=True)
    if pod_count(name) != 1:
        fail("restore did not bring the tenant pod back up")
    rows = pf_query(TENANT, name, ["SELECT COUNT(*) FROM saas_t"])
    if not rows or rows[0][0] != "7":
        fail(f"restore did NOT roll back to the 7-row backup: {rows}")
    ok("restore rolled the tenant back to the 7-row snapshot (5 post-rows gone)")

    rows = pf_query(TENANT2, name2, ["SELECT COUNT(*) FROM saas_t"])
    if not rows or rows[0][0] != "3":
        fail(f"restoring one tenant disturbed another: {rows}")
    ok(f"second tenant {TENANT2!r} still serves its 3 rows (restore is isolated)")
    backend.delete(TENANT2)

    # 4c. per-tenant at-rest key rotation (a dedicated ENCRYPTED tenant) -------
    enc = KubernetesTenantBackend(
        namespace=NS, image=IMAGE, image_pull_policy="IfNotPresent",
        storage_size="1Gi", mem_limit_mb=64, ready_timeout=180, encrypt=True,
        kubectl=f"kubectl --as=system:serviceaccount:{NS}:{SA}")
    name3 = tenant_k8s_name(TENANT3)
    enc.ensure(TENANT3)
    if pod_count(name3) != 1:
        fail("encrypted tenant pod did not start")
    pre_key = secret_key(name3, "encryption-key")
    if not pre_key:
        fail("encrypted tenant Secret has no encryption-key field")
    rows = pf_query(TENANT3, name3, [
        "CREATE TABLE saas_t (id INT PRIMARY KEY, v VARCHAR(32))",
        *[f"INSERT INTO saas_t VALUES ({i}, 'g{i}')" for i in range(5)],
        "SELECT COUNT(*) FROM saas_t"])
    if not rows or rows[0][0] != "5":
        fail(f"encrypted tenant did not serve writes: {rows}")
    ok(f"encrypted tenant {TENANT3!r} served 5 rows (EVOSQL_ENCRYPTION_KEY set)")

    res = enc.rotate_key(TENANT3)
    if not (res.get("ok") and res.get("passphrase_rotated")
            and res.get("dek_rotated")):
        fail(f"rotate_key did not fully rotate: {res}")
    ok(f"rotate_key rotated passphrase + DEK (offline Jobs): {res}")

    post_key = secret_key(name3, "encryption-key")
    if not post_key or post_key == pre_key:
        fail("the Secret's encryption-key did not change after rotation")
    ok("the tenant Secret's encryption-key changed (new key persisted)")

    if pod_count(name3) != 1:
        fail("rotate_key did not scale the tenant back up")
    rows = pf_query(TENANT3, name3, ["SELECT COUNT(*) FROM saas_t"])
    if not rows or rows[0][0] != "5":
        fail(f"data did NOT survive key rotation (reopen under new key?): {rows}")
    ok("the 5 rows survived rotation — data reopened under the rotated key")
    enc.delete(TENANT3)

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
