"""
tenant_k8s — Phase 2 #5: the Kubernetes spawn backend for dedicated tenants.

The TenantSupervisor proved process-per-tenant fault isolation with local
subprocesses, and its docstring always promised the same abstraction would
"swap its spawn backend from local subprocesses to one pod per tenant on
Kubernetes (container-per-tenant) without the callers changing". This is that
backend.

A dedicated tenant becomes:
  * a 1-replica **StatefulSet** running the engine image (its own pod, its own
    PVC -> its own data; a crash is restarted by Kubernetes itself, so there is
    no in-process monitor thread here — K8s IS the supervisor);
  * a headless **Service** giving the engine a stable in-cluster DNS name;
  * a per-tenant **Secret** holding the HMAC-derived admin password.

It is duck-type compatible with TenantSupervisor for the surface TenantRouter
uses — ``ensure`` / ``get`` / ``stop`` / ``delete`` returning an instance with
``.host`` / ``.pg_port`` / ``.password`` — so a TenantRouter can hold either one
unchanged. The only router change needed was to read ``inst.host`` (loopback for
local processes, the Service DNS here).

Lifecycle maps onto Kubernetes cleanly:
  * ``ensure``  -> apply the manifests and scale to 1 (idempotent);
  * ``stop``    -> scale to 0 (suspend: free compute, KEEP the PVC/data);
  * ``delete``  -> delete the StatefulSet + Service + Secret + PVC (offboard).

Provisioning shells out to ``kubectl`` (the same tool the deploy/ kind smokes
already drive), so it needs no new Python dependency and works wherever a
kubeconfig is reachable — including from inside the cluster via the
control-plane ServiceAccount (see deploy/helm RBAC).
"""
from __future__ import annotations

import json
import subprocess
from dataclasses import dataclass
from typing import Dict, List, Optional

from .tenancy import tenant_k8s_name, derive_db_password

PG_PORT = 5433
EVO_PORT = 9967

# Label keys (also the delete selector). app.kubernetes.io/* are the standard
# recommended labels; evolutiondb.org/tenant is our per-tenant selector.
LABEL_NAME = "app.kubernetes.io/name"
LABEL_COMPONENT = "app.kubernetes.io/component"
LABEL_MANAGED = "app.kubernetes.io/managed-by"
LABEL_TENANT = "evolutiondb.org/tenant"


@dataclass
class K8sTenantInstance:
    """A dedicated tenant's Kubernetes workload. Mirrors TenantInstance's
    router-facing surface (host/pg_port/evo_port/password)."""
    tenant_id: str
    name: str           # the StatefulSet/Service/Secret name (DNS-safe)
    host: str           # in-cluster Service DNS
    password: str
    pg_port: int = PG_PORT
    evo_port: int = EVO_PORT
    user: str = "admin"
    replicas: int = 1

    def alive(self) -> bool:
        # Liveness on K8s is the pod's own readiness, reconciled by the cluster;
        # a non-zero desired replica count means "should be serving".
        return self.replicas > 0


class KubernetesError(RuntimeError):
    pass


class KubernetesTenantBackend:
    def __init__(self, *, namespace: str = "default", image: str,
                 image_pull_policy: str = "IfNotPresent",
                 storage_size: str = "1Gi", storage_class: Optional[str] = None,
                 service_account: Optional[str] = None,
                 cluster_domain: str = "cluster.local",
                 mem_limit_mb: Optional[int] = None,
                 data_dir: str = "/data",
                 kubectl="kubectl",
                 ready_timeout: int = 180,
                 extra_labels: Optional[Dict[str, str]] = None):
        self.namespace = namespace
        self.image = image
        self.image_pull_policy = image_pull_policy
        self.storage_size = storage_size
        self.storage_class = storage_class
        self.service_account = service_account
        self.cluster_domain = cluster_domain
        # Per-tenant noisy-neighbour cap, applied via EVOSQL_BUFFER_POOL_SIZE
        # (the engine accepts the same "<N>M" suffix as the --buffer-pool-size
        # flag). None = engine default.
        self.mem_limit_mb = mem_limit_mb
        self.data_dir = data_dir
        # Accept either "kubectl" or a full invocation ("kubectl --as=...") /
        # an argv list, so a caller can impersonate the control-plane
        # ServiceAccount or point at a specific kubeconfig/context.
        self.kubectl = kubectl.split() if isinstance(kubectl, str) else list(kubectl)
        self.ready_timeout = ready_timeout
        self.extra_labels = dict(extra_labels or {})

    # -- public API (duck-types TenantSupervisor) ---------------------------
    def ensure(self, tenant_id: str) -> K8sTenantInstance:
        """Idempotently provision the tenant's engine and scale it to 1. Returns
        once the StatefulSet rollout is complete (the pod is Ready)."""
        name = tenant_k8s_name(tenant_id)
        manifests = self.render_manifests(tenant_id)
        self._run(["apply", "-f", "-"], input_text=manifests)
        # apply leaves replicas at the manifest's value (1); make sure a
        # previously-suspended (scaled-to-0) tenant comes back.
        self._run(["scale", f"statefulset/{name}", "--replicas=1"])
        self._run(["rollout", "status", f"statefulset/{name}",
                   f"--timeout={self.ready_timeout}s"])
        return self._instance(tenant_id, replicas=1)

    def get(self, tenant_id: str) -> Optional[K8sTenantInstance]:
        name = tenant_k8s_name(tenant_id)
        try:
            out = self._run(["get", f"statefulset/{name}",
                             "-o", "jsonpath={.spec.replicas}"])
        except KubernetesError:
            return None
        try:
            replicas = int((out or "0").strip() or "0")
        except ValueError:
            replicas = 0
        return self._instance(tenant_id, replicas=replicas)

    def stop(self, tenant_id: str) -> None:
        """Suspend: scale to 0 so the tenant uses no compute, but KEEP the PVC so
        resume (ensure) brings the same data back. No-op if it doesn't exist."""
        name = tenant_k8s_name(tenant_id)
        try:
            self._run(["scale", f"statefulset/{name}", "--replicas=0"])
        except KubernetesError:
            pass

    def delete(self, tenant_id: str) -> None:
        """Offboard: remove the StatefulSet, Service, Secret AND the PVC. The
        PVC is created by the volumeClaimTemplate and is NOT garbage-collected
        with the StatefulSet, so it is deleted explicitly by tenant label."""
        name = tenant_k8s_name(tenant_id)
        sel = f"{LABEL_TENANT}={name}"
        # statefulset/service/secret carry the tenant label; the volumeClaim-
        # Template PVC carries it too (set in the template metadata).
        try:
            self._run(["delete", "statefulset,service,secret,pvc",
                       "-l", sel, "--ignore-not-found=true"])
        except KubernetesError:
            pass

    # -- rendering ----------------------------------------------------------
    def service_host(self, tenant_id: str) -> str:
        name = tenant_k8s_name(tenant_id)
        return f"{name}.{self.namespace}.svc.{self.cluster_domain}"

    def labels(self, name: str) -> Dict[str, str]:
        lbls = {
            LABEL_NAME: "evolutiondb",
            LABEL_COMPONENT: "tenant-engine",
            LABEL_MANAGED: "evolutiondb-control-plane",
            LABEL_TENANT: name,
        }
        lbls.update(self.extra_labels)
        return lbls

    def render_manifests(self, tenant_id: str) -> str:
        """Render the Secret + headless Service + StatefulSet as one multi-doc
        YAML string (values JSON-quoted, so any password/charset is safe)."""
        name = tenant_k8s_name(tenant_id)
        password = derive_db_password(tenant_id)
        lbls = self.labels(name)
        sel = {LABEL_NAME: "evolutiondb", LABEL_TENANT: name}

        def yaml_labels(d: Dict[str, str], indent: int) -> str:
            pad = " " * indent
            return "\n".join(f"{pad}{json.dumps(k)}: {json.dumps(v)}"
                             for k, v in d.items())

        env = [
            ("EVOSQL_USER_NAME", "admin"),
            ("EVOSQL_BIND", "0.0.0.0"),
            ("EVOSQL_DATA_DIR", self.data_dir),
        ]
        if self.mem_limit_mb:
            env.append(("EVOSQL_BUFFER_POOL_SIZE", f"{self.mem_limit_mb}M"))
        env_lines = []
        for k, v in env:
            env_lines.append(f"            - name: {k}")
            env_lines.append(f"              value: {json.dumps(str(v))}")
        env_block = "\n".join(env_lines)

        sa_line = (f"      serviceAccountName: {json.dumps(self.service_account)}\n"
                   if self.service_account else "")
        sc_line = (f"        storageClassName: {json.dumps(self.storage_class)}\n"
                   if self.storage_class else "")

        secret = f"""apiVersion: v1
kind: Secret
metadata:
  name: {name}
  namespace: {self.namespace}
  labels:
{yaml_labels(lbls, 4)}
type: Opaque
stringData:
  password: {json.dumps(password)}
"""

        service = f"""apiVersion: v1
kind: Service
metadata:
  name: {name}
  namespace: {self.namespace}
  labels:
{yaml_labels(lbls, 4)}
spec:
  clusterIP: None
  selector:
{yaml_labels(sel, 4)}
  ports:
    - name: pg
      port: {PG_PORT}
      targetPort: {PG_PORT}
    - name: evo
      port: {EVO_PORT}
      targetPort: {EVO_PORT}
"""

        statefulset = f"""apiVersion: apps/v1
kind: StatefulSet
metadata:
  name: {name}
  namespace: {self.namespace}
  labels:
{yaml_labels(lbls, 4)}
spec:
  serviceName: {name}
  replicas: 1
  selector:
    matchLabels:
{yaml_labels(sel, 6)}
  template:
    metadata:
      labels:
{yaml_labels(lbls, 8)}
    spec:
{sa_line}      containers:
        - name: evolutiondb
          image: {json.dumps(self.image)}
          imagePullPolicy: {self.image_pull_policy}
          ports:
            - name: pg
              containerPort: {PG_PORT}
            - name: evo
              containerPort: {EVO_PORT}
          env:
{env_block}
            - name: EVOSQL_PASSWORD
              valueFrom:
                secretKeyRef:
                  name: {name}
                  key: password
          volumeMounts:
            - name: data
              mountPath: {json.dumps(self.data_dir)}
          readinessProbe:
            tcpSocket:
              port: pg
            initialDelaySeconds: 3
            periodSeconds: 5
          livenessProbe:
            tcpSocket:
              port: pg
            initialDelaySeconds: 10
            periodSeconds: 15
  volumeClaimTemplates:
    - metadata:
        name: data
        labels:
{yaml_labels(lbls, 10)}
      spec:
        accessModes:
          - ReadWriteOnce
{sc_line}        resources:
          requests:
            storage: {self.storage_size}
"""
        return "---\n".join([secret, service, statefulset])

    # -- internals ----------------------------------------------------------
    def _instance(self, tenant_id: str, *, replicas: int) -> K8sTenantInstance:
        return K8sTenantInstance(
            tenant_id=tenant_id, name=tenant_k8s_name(tenant_id),
            host=self.service_host(tenant_id),
            password=derive_db_password(tenant_id), replicas=replicas)

    def _run(self, args: List[str], input_text: Optional[str] = None) -> str:
        """Run kubectl with -n <namespace>. Overridable in tests. Raises
        KubernetesError on a non-zero exit."""
        cmd = [*self.kubectl, "-n", self.namespace, *args]
        proc = subprocess.run(cmd, input=input_text, capture_output=True,
                              text=True)
        if proc.returncode != 0:
            raise KubernetesError(
                f"{' '.join(cmd)} failed (rc={proc.returncode}): "
                f"{proc.stderr.strip() or proc.stdout.strip()}")
        return proc.stdout
