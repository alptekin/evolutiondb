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

import base64
import hashlib
import json
import os
import shlex
import subprocess
import sys
import time
from dataclasses import dataclass
from typing import Callable, Dict, List, Optional

from .tenancy import (tenant_k8s_name, derive_db_password,
                      derive_encryption_key)

# A non-secret fingerprint of the encryption key that was current at backup time,
# written into the backup dir so restore can refuse (rather than wipe + serve a
# broken engine) when the key has since rotated. The key itself is NEVER stored.
_KEYREF_FILE = ".evosql-keyref"


def _key_fingerprint(key: str) -> str:
    return hashlib.sha256((key or "").encode("utf-8")).hexdigest()

# KeyProvider is the two-phase key-source contract; the at-rest rotation here
# reuses it (current/rotate/commit/rollback/pending_key) but drives the engine
# via a Kubernetes Job instead of a local subprocess. Guarded so tenant_k8s
# stays importable standalone (without the package), matching the module's
# existing dependency discipline.
try:
    from .key_rotation import KeyProvider, KeyProviderError
except Exception:  # pragma: no cover - standalone import fallback
    class KeyProvider:  # type: ignore
        pass

    class KeyProviderError(RuntimeError):  # type: ignore
        pass

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


# Component label value for short-lived maintenance workloads (restore helper
# pod, rotation Jobs). Distinct from the engine pod's "tenant-engine" so the
# engine-pod waiters never match a maintenance pod (and vice versa).
COMPONENT_MAINT = "tenant-maintenance"


class K8sSecretKeyProvider(KeyProvider):
    """A KeyProvider backed by a tenant's Kubernetes Secret.

    ``current()`` reads the ``encryption-key`` field (seeding it from ``seed`` on
    first use); ``rotate()`` mints a new random key into ``encryption-key-pending``
    while ``current`` stays put; ``commit()`` promotes pending -> current;
    ``rollback()`` discards pending. Two-phase by design, so a crash between a
    successful ``--rekey`` Job and the commit leaves the data recoverable under
    the pending key (mirrors FileKeyProvider + the local supervisor's _spawn
    pending recovery). All state lives in the Secret — the authoritative store —
    so the StatefulSet's ``EVOSQL_ENCRYPTION_KEY`` (a secretKeyRef on
    ``encryption-key``) always tracks the current key across pod restarts."""

    CUR = "encryption-key"
    PEND = "encryption-key-pending"

    def __init__(self, backend: "KubernetesTenantBackend", name: str, *,
                 seed: Optional[str] = None, key_bytes: int = 32):
        self._b = backend
        self._name = name
        self._seed = seed
        self._key_bytes = key_bytes

    def current(self) -> str:
        v = self._b._get_secret_key(self._name, self.CUR)
        if v is None:
            import secrets
            v = self._seed or secrets.token_urlsafe(self._key_bytes)
            self._b._set_secret_key(self._name, self.CUR, v)   # seed on first use
        return v

    def pending_key(self) -> Optional[str]:
        return self._b._get_secret_key(self._name, self.PEND)

    def rotate(self) -> str:
        if self.pending_key() is not None:
            raise KeyProviderError(
                f"a rotation is already pending for tenant secret {self._name!r}")
        import secrets
        new = secrets.token_urlsafe(self._key_bytes)
        self._b._set_secret_key(self._name, self.PEND, new)
        return new

    def commit(self) -> None:
        p = self.pending_key()
        if p is not None:
            self._b._set_secret_key(self._name, self.CUR, p)
            self._b._clear_secret_key(self._name, self.PEND)

    def rollback(self) -> None:
        if self.pending_key() is not None:
            self._b._clear_secret_key(self._name, self.PEND)


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
                 encrypt: bool = False,
                 key_provider_for: Optional[
                     Callable[[str], KeyProvider]] = None,
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
        # Opt-in per-tenant at-rest encryption. OFF by default so existing
        # unencrypted tenants render byte-for-byte unchanged. Supplying a
        # key_provider_for factory implies encryption is on (parity with the
        # local TenantSupervisor). When on, each tenant's passphrase lives in
        # its Secret (authoritative) and is injected as EVOSQL_ENCRYPTION_KEY;
        # rotate_key rotates it. None factory -> the Secret-backed provider.
        self.key_provider_for = key_provider_for
        self.encrypt = bool(encrypt) or key_provider_for is not None
        self.extra_labels = dict(extra_labels or {})

    # -- public API (duck-types TenantSupervisor) ---------------------------
    def ensure(self, tenant_id: str) -> K8sTenantInstance:
        """Idempotently provision the tenant's engine and scale it to 1. Returns
        once the StatefulSet rollout is complete (the pod is Ready)."""
        name = tenant_k8s_name(tenant_id)
        manifests = self.render_manifests(tenant_id)
        self._run(["apply", "-f", "-"], input_text=manifests)
        # For an encrypted tenant, seed the Secret's encryption-key BEFORE the
        # rollout (the pod's secretKeyRef must resolve or it never starts). Seed
        # only when absent so a previously-rotated key is preserved (apply never
        # carries encryption-key, so it cannot clobber it either).
        if self.encrypt:
            self._seed_encryption_key(tenant_id, name)
        # apply leaves replicas at the manifest's value (1); make sure a
        # previously-suspended (scaled-to-0) tenant comes back.
        self._run(["scale", f"statefulset/{name}", "--replicas=1"])
        try:
            self._run(["rollout", "status", f"statefulset/{name}",
                       f"--timeout={self.ready_timeout}s"])
        except KubernetesError:
            # An encrypted tenant whose data sits under a PENDING (uncommitted)
            # key — e.g. after an indeterminate rotation where --rekey reached
            # disk but the commit did not — fails to open under the current key.
            # Recover by promoting the pending key and retrying ONCE (the K8s
            # analog of the supervisor's _spawn pending recovery). If that also
            # fails the pending key is reverted (data was NOT under it) and the
            # original error is surfaced.
            if not (self.encrypt and self._heal_pending_key(tenant_id, name)):
                raise
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
        # Template PVC carries it too (set in the template metadata). job/pod
        # cover any short-lived maintenance workload (restore helper / rotation
        # Job) that a crashed backup/restore/rotate might have orphaned.
        try:
            self._run(["delete", "statefulset,service,secret,pvc,job,pod",
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

        # Opt-in at-rest encryption: inject the tenant's passphrase from its
        # Secret's `encryption-key` field. The field itself is NOT rendered in
        # the Secret below (only `password` is) — it is seeded once via patch in
        # ensure() and then OWNED by the Secret, so re-`apply` never clobbers a
        # rotated key. Empty when encryption is off -> byte-for-byte unchanged.
        enc_env = ""
        if self.encrypt:
            enc_env = (
                "\n            - name: EVOSQL_ENCRYPTION_KEY"
                "\n              valueFrom:"
                "\n                secretKeyRef:"
                f"\n                  name: {name}"
                "\n                  key: encryption-key")

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
                  key: password{enc_env}
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

    # -- data management: backup / restore / key rotation -------------------
    #    (duck-types TenantSupervisor.backup/restore/rotate_key)
    def backup(self, tenant_id: str, dest_dir: str) -> str:
        """Hot (online) per-tenant backup: copy the RUNNING engine pod's data
        dir out into local ``dest_dir``. The engine keeps serving (reads only),
        and files are copied in the SAME crash-consistent order the local
        supervisor uses — ``evosql.db`` first, the WAL last — so a restore
        replays the WAL to a consistent state. Returns ``dest_dir``.

        The slim runtime image ships no ``tar``; each file is streamed out with
        ``cat`` (coreutils is present). Subdirectories (e.g. ``certs/``, which
        the entrypoint regenerates) are skipped — only data files are copied."""
        name = tenant_k8s_name(tenant_id)
        pod = f"{name}-0"
        d = self.data_dir
        listing = self._exec_capture(
            pod, f"ls -1Ap {shlex.quote(d)}").decode("utf-8", "replace")
        files = [ln for ln in listing.splitlines() if ln and not ln.endswith("/")]
        os.makedirs(dest_dir, exist_ok=True)
        for n in self._ordered_files(files):
            self._exec_stream_to_file(
                pod, f"cat -- {shlex.quote(d + '/' + n)}",
                os.path.join(dest_dir, n))
        # For an encrypted tenant, evosql.db is ciphertext wrapped under whatever
        # key was CURRENT at backup time. Record a non-secret fingerprint of it
        # so restore can refuse if the key has since rotated (the key itself is
        # never written to the backup).
        if self.encrypt:
            cur = self._get_secret_key(tenant_k8s_name(tenant_id),
                                       K8sSecretKeyProvider.CUR)
            if cur:
                with open(os.path.join(dest_dir, _KEYREF_FILE), "w") as fh:
                    fh.write(_key_fingerprint(cur))
        return dest_dir

    def restore(self, tenant_id: str, src_dir: str) -> K8sTenantInstance:
        """Restore a tenant from a ``backup`` dir. Offline for THIS tenant only:
        scale its StatefulSet to 0 (freeing the RWO PVC), run a short-lived
        helper pod mounting the SAME PVC, wipe + repopulate the data dir from
        ``src_dir``, then scale back to 1. The tenant is ALWAYS scaled back up —
        even if the copy fails — so a failed restore never leaves it at
        replicas=0. ``certs/`` (the pod's TLS identity) is preserved across the
        wipe so the server cert stays stable. RWO means the helper schedules onto
        the PVC's node, automatic on a single-node (kind) cluster.

        For an ENCRYPTED tenant whose key has rotated since the backup, the
        ciphertext cannot open under the current key — restore refuses up front
        (via the backup's key fingerprint) rather than wipe + serve a broken
        engine."""
        if not os.path.isdir(src_dir):
            raise KubernetesError(f"backup source {src_dir!r} not found")
        name = tenant_k8s_name(tenant_id)
        helper = f"{name}-restore"
        d = self.data_dir
        self._check_restore_keyref(name, src_dir)   # fail fast before any wipe
        body_err: Optional[Exception] = None
        ensure_err: Optional[Exception] = None
        inst: Optional[K8sTenantInstance] = None
        self.stop(tenant_id)
        try:
            self._wait_pods_gone(name)
            self._run(["apply", "-f", "-"],
                      input_text=self._render_helper_pod(name, helper))
            self._wait_pod_ready(helper)
            # Wipe everything EXCEPT certs/ (no findutils in the slim image -> a
            # portable shell loop; the case-guards skip an unmatched glob).
            self._exec_capture(
                helper,
                f"cd {shlex.quote(d)} && for f in * .[!.]*; do "
                f"case \"$f\" in certs|'*'|'.[!.]*') continue ;; esac; "
                f"rm -rf -- \"$f\"; done; true")
            for n in self._ordered_files(os.listdir(src_dir)):
                if n == _KEYREF_FILE:
                    continue
                fp = os.path.join(src_dir, n)
                if os.path.isdir(fp):
                    continue
                with open(fp, "rb") as fh:
                    self._exec_feed(
                        helper, f"cat > {shlex.quote(d + '/' + n)}", fh.read())
        except Exception as e:   # noqa: BLE001 - surfaced AFTER the tenant is back
            body_err = e
        finally:
            self._delete_pod(helper)
            self._wait_maint_pods_gone(name)   # free the PVC before scale-up
            try:
                inst = self.ensure(tenant_id)  # ALWAYS bring the tenant back up
            except Exception as ee:            # noqa: BLE001
                ensure_err = ee
        if body_err is not None:
            raise body_err
        if ensure_err is not None:
            raise ensure_err
        return inst

    def rotate_key(self, tenant_id: str, *, rotate_dek: bool = True) -> dict:
        """Rotate a dedicated tenant's at-rest encryption key. Offline for THIS
        tenant only. Fail-closed two-phase (mirrors key_rotation.rotate_engine_key
        but runs the offline ``--rekey`` / ``--rotate-key`` as Kubernetes Jobs):

          1. mint a PENDING new key in the tenant Secret (current stays put);
          2. scale to 0, run the ``--rekey`` Job (re-wrap the header under the
             new key) reading cur/new from a transient Secret;
          3. on Job success -> commit (the Secret's encryption-key becomes the
             new key; NEVER roll back past here); on clean Job failure -> roll
             back (data intact under the current key); on indeterminate -> keep
             the pending key + flag needs_reconcile (the next ensure self-heals);
          4. optionally a ``--rotate-key`` Job (new DEK + re-encrypt pages);
          5. ALWAYS delete the Jobs + transient Secret and scale back to 1 — the
             restarted pod reads the now-current key from its Secret.

        Returns ``{ok, passphrase_rotated, dek_rotated, needs_reconcile, detail}``
        (the same shape as the local rotate_engine_key)."""
        if not self.encrypt:
            raise KubernetesError(
                "rotate_key requires encryption (construct with encrypt=True)")
        name = tenant_k8s_name(tenant_id)
        # Start clean: reap leftover maintenance objects from a crashed op, and
        # reconcile a stale pending key (a prior indeterminate rotation whose
        # data is verifiably under the current key) so rotate() is not blocked.
        self._reap_maintenance(name)
        prov = self._key_provider(tenant_id, name)
        self._reconcile_stale_pending(tenant_id, name, prov)
        cur = prov.current()          # seeds the Secret if absent
        new = prov.rotate()           # writes encryption-key-pending
        rot_secret = f"{name}-rotkeys"
        result = {"ok": False, "passphrase_rotated": False,
                  "dek_rotated": False, "needs_reconcile": False, "detail": ""}
        committed = False
        try:
            self.stop(tenant_id)
            self._wait_pods_gone(name)
            self._apply_transient_secret(
                name, rot_secret,
                {"encryption-key": cur, "encryption-key-new": new})
            status = self._run_rotation_job(name, "rekey", rot_secret)
            if status == "succeeded":
                self._delete_job(f"{name}-rekey")
                committed = self._commit_rotation(name, prov, result)
                if committed and rotate_dek:
                    self._apply_transient_secret(
                        name, rot_secret, {"encryption-key": new})
                    ds = self._run_rotation_job(name, "rotate-key", rot_secret)
                    if ds == "succeeded":
                        result["dek_rotated"] = True
                    else:
                        extra = ("data-key rotation did not complete (data still "
                                 "readable under the new passphrase)")
                        result["detail"] = (result["detail"] + "; " + extra
                                            if result["detail"] else extra)
                        if ds != "failed":   # indeterminate DEK Job
                            result["needs_reconcile"] = True
            elif status == "failed":
                prov.rollback()
                result["detail"] = ("rekey Job failed; data intact under the "
                                    "current key")
            else:   # indeterminate
                result.update(
                    needs_reconcile=True,
                    detail="rekey Job did not reach Complete/Failed; pending key "
                           "retained (reconciled on the next ensure/rotate)")
        finally:
            self._cleanup_rotation(name, rot_secret, result)
            self._wait_maint_pods_gone(name)   # free the RWO PVC before scale-up
            try:
                self.ensure(tenant_id)         # ALWAYS scale back up
                # If we never committed (indeterminate rekey) but the tenant came
                # back Ready under the CURRENT key, the rekey did not reach disk
                # -> discard the now-stale pending key so future rotations work.
                if not committed:
                    self._reconcile_stale_pending(tenant_id, name, prov)
            except Exception as ee:            # noqa: BLE001
                # The tenant did NOT return to Ready -> do not report success.
                result.update(
                    ok=False, needs_reconcile=True,
                    detail=(result["detail"] + "; " if result["detail"] else "")
                    + "tenant did not return to Ready after rotation: "
                    + str(ee)[:200])
        return result

    # -- internals: naming + ordering ---------------------------------------
    @staticmethod
    def pvc_name(name: str) -> str:
        """The StatefulSet's volumeClaimTemplate PVC resource name
        (``<volName>-<sts>-<ordinal>`` -> ``data-<name>-0``)."""
        return f"data-{name}-0"

    @staticmethod
    def _ordered_files(names) -> List[str]:
        """Crash-consistent copy order (mirrors TenantSupervisor.backup):
        evosql.db first, other files next, the WAL + archive last."""
        names = list(names)
        wal = ("evosql.wal", "evosql.wal.archive")
        return ([n for n in names if n == "evosql.db"]
                + [n for n in names if n not in ("evosql.db",) + wal]
                + [n for n in names if n in wal])

    def _maint_labels(self, name: str) -> Dict[str, str]:
        lbls = dict(self.labels(name))
        lbls[LABEL_COMPONENT] = COMPONENT_MAINT
        return lbls

    # -- internals: maintenance manifests -----------------------------------
    def _render_helper_pod(self, name: str, pod_name: str,
                           sleep_s: int = 900) -> str:
        """A bare Pod that mounts the tenant's PVC and just sleeps, so we can
        exec into it to rewrite the data dir while the engine is scaled down.
        ``command`` overrides the image ENTRYPOINT, so the engine never starts."""
        def yl(d, indent):
            pad = " " * indent
            return "\n".join(f"{pad}{json.dumps(k)}: {json.dumps(v)}"
                             for k, v in d.items())
        lbls = self._maint_labels(name)
        sa_line = (f"  serviceAccountName: {json.dumps(self.service_account)}\n"
                   if self.service_account else "")
        return f"""apiVersion: v1
kind: Pod
metadata:
  name: {pod_name}
  namespace: {self.namespace}
  labels:
{yl(lbls, 4)}
spec:
  restartPolicy: Never
{sa_line}  containers:
    - name: maint
      image: {json.dumps(self.image)}
      imagePullPolicy: {self.image_pull_policy}
      command: ["sh", "-c", "sleep {int(sleep_s)}"]
      volumeMounts:
        - name: data
          mountPath: {json.dumps(self.data_dir)}
  volumes:
    - name: data
      persistentVolumeClaim:
        claimName: {self.pvc_name(name)}
"""

    def _render_rotation_job(self, name: str, job: str, mode: str,
                             secret_name: str) -> str:
        """A run-to-completion Job that runs an offline engine mode
        (``--rekey`` / ``--rotate-key``) against the tenant's PVC. The image
        ENTRYPOINT exec's the server with ``args``; the passphrases come from the
        transient Secret via secretKeyRef (never argv, never a literal in the
        committed manifest body)."""
        def yl(d, indent):
            pad = " " * indent
            return "\n".join(f"{pad}{json.dumps(k)}: {json.dumps(v)}"
                             for k, v in d.items())
        lbls = self._maint_labels(name)
        sa_line = (f"      serviceAccountName: {json.dumps(self.service_account)}\n"
                   if self.service_account else "")
        key_env = (
            "            - name: EVOSQL_ENCRYPTION_KEY\n"
            "              valueFrom:\n"
            "                secretKeyRef:\n"
            f"                  name: {secret_name}\n"
            "                  key: encryption-key\n")
        if mode == "rekey":
            key_env += (
                "            - name: EVOSQL_ENCRYPTION_KEY_NEW\n"
                "              valueFrom:\n"
                "                secretKeyRef:\n"
                f"                  name: {secret_name}\n"
                "                  key: encryption-key-new\n")
        flag = "--rekey" if mode == "rekey" else "--rotate-key"
        return f"""apiVersion: batch/v1
kind: Job
metadata:
  name: {job}
  namespace: {self.namespace}
  labels:
{yl(lbls, 4)}
spec:
  backoffLimit: 0
  ttlSecondsAfterFinished: 120
  template:
    metadata:
      labels:
{yl(lbls, 8)}
    spec:
      restartPolicy: Never
{sa_line}      containers:
        - name: rotate
          image: {json.dumps(self.image)}
          imagePullPolicy: {self.image_pull_policy}
          args: [{json.dumps(flag)}]
          env:
            - name: EVOSQL_DATA_DIR
              value: {json.dumps(self.data_dir)}
            - name: EVOSQL_CHECKPOINT_INTERVAL_SEC
              value: "0"
{key_env}          volumeMounts:
            - name: data
              mountPath: {json.dumps(self.data_dir)}
      volumes:
        - name: data
          persistentVolumeClaim:
            claimName: {self.pvc_name(name)}
"""

    def _apply_transient_secret(self, name: str, secret_name: str,
                                data: Dict[str, str]) -> None:
        """Create/replace a short-lived Secret holding rotation key material,
        labeled with the tenant so delete()/_cleanup_rotation/_reap_maintenance
        reap it, AND owned by the StatefulSet so Kubernetes GC removes it on
        offboard even if in-process cleanup never runs. The keys are consumed by
        the Job via secretKeyRef and never appear in argv."""
        def yl(d, indent):
            pad = " " * indent
            return "\n".join(f"{pad}{json.dumps(k)}: {json.dumps(v)}"
                             for k, v in d.items())
        lbls = self._maint_labels(name)
        owner = self._sts_owner_ref(name)
        sd = "\n".join(f"  {json.dumps(k)}: {json.dumps(v)}"
                       for k, v in data.items())
        manifest = f"""apiVersion: v1
kind: Secret
metadata:
  name: {secret_name}
  namespace: {self.namespace}
  labels:
{yl(lbls, 4)}{owner}
type: Opaque
stringData:
{sd}
"""
        self._run(["apply", "-f", "-"], input_text=manifest)

    def _sts_owner_ref(self, name: str) -> str:
        """An ownerReferences block tying a transient object to the tenant's
        StatefulSet (so K8s GC reaps it on offboard). Empty if the sts/UID can't
        be read (the object then relies on label-based cleanup only)."""
        try:
            uid = self._run(["get", f"statefulset/{name}", "-o",
                             "jsonpath={.metadata.uid}"]).strip()
        except KubernetesError:
            uid = ""
        if not uid:
            return ""
        return ("\n  ownerReferences:"
                "\n    - apiVersion: apps/v1"
                "\n      kind: StatefulSet"
                f"\n      name: {name}"
                f"\n      uid: {uid}")

    # -- internals: encryption key state ------------------------------------
    def _key_provider(self, tenant_id: str, name: str) -> KeyProvider:
        if self.key_provider_for is not None:
            return self.key_provider_for(tenant_id)
        return K8sSecretKeyProvider(
            self, name, seed=derive_encryption_key(tenant_id))

    def _seed_encryption_key(self, tenant_id: str, name: str) -> None:
        """Ensure the tenant Secret's encryption-key field exists (the pod's
        secretKeyRef must resolve). Seed it from the provider's current key ONLY
        when absent, so a previously-rotated key is never overwritten."""
        if self._get_secret_key(name, K8sSecretKeyProvider.CUR) is not None:
            return
        prov = self._key_provider(tenant_id, name)
        self._set_secret_key(name, K8sSecretKeyProvider.CUR, prov.current())

    def _heal_pending_key(self, tenant_id: str, name: str) -> bool:
        """Recover an encrypted tenant whose data opens only under the PENDING
        key (an indeterminate rotation that rekeyed the header but did not
        commit). Promote pending -> current, force a fresh pod start, and verify
        Ready; if so commit (clear pending) and return True. If it does NOT come
        up under the pending key, the data was NOT under it -> revert to the
        prior current key and return False (caller re-raises). Fail-closed: the
        Secret never ends up pointing at a key the data is not under."""
        prov = self._key_provider(tenant_id, name)
        pending = prov.pending_key()
        if not pending:
            return False
        prior = self._get_secret_key(name, K8sSecretKeyProvider.CUR)
        if prior is None:
            # Cannot read the current key -> cannot safely revert if the pending
            # key fails to open. Refuse to overwrite CUR with an unverified key.
            return False
        self._set_secret_key(name, K8sSecretKeyProvider.CUR, pending)
        # a Secret change does not restart a running pod; bounce it so the new
        # EVOSQL_ENCRYPTION_KEY is read at container start.
        self._run(["scale", f"statefulset/{name}", "--replicas=0"])
        self._wait_pods_gone(name)
        self._run(["scale", f"statefulset/{name}", "--replicas=1"])
        try:
            self._run(["rollout", "status", f"statefulset/{name}",
                       f"--timeout={self.ready_timeout}s"])
        except KubernetesError:
            if prior is not None:
                self._set_secret_key(name, K8sSecretKeyProvider.CUR, prior)
            return False
        prov.commit()    # pending verified -> commit (clears the pending field)
        return True

    def _get_secret_key(self, name: str, key: str) -> Optional[str]:
        """Read + base64-decode one field from the tenant Secret's data. None if
        the Secret or the field is absent."""
        try:
            out = self._run(["get", "secret", name, "-o",
                             f"jsonpath={{.data['{key}']}}"])
        except KubernetesError:
            return None
        out = (out or "").strip()
        if not out:
            return None
        try:
            return base64.b64decode(out).decode("utf-8")
        except Exception:   # noqa: BLE001
            return None

    def _set_secret_key(self, name: str, key: str, value: str) -> None:
        """Set one field in the tenant Secret via a merge patch (stringData, so
        the API server base64-encodes it). Leaves every other field intact.

        The patch carries RAW key material, so it is fed on STDIN via
        ``--patch-file=/dev/stdin`` and NEVER placed in argv — otherwise the key
        would be visible in the process list and echoed into _run's error
        message (which joins argv). _run does not include stdin in that message."""
        patch = json.dumps({"stringData": {key: value}})
        self._run(["patch", "secret", name, "--type=merge",
                   "--patch-file=/dev/stdin"], input_text=patch)

    def _clear_secret_key(self, name: str, key: str) -> None:
        """Remove one field from the tenant Secret's data (idempotent)."""
        patch = json.dumps([{"op": "remove", "path": f"/data/{key}"}])
        try:
            self._run(["patch", "secret", name, "--type=json", "-p", patch])
        except KubernetesError:
            pass   # field already absent

    # -- internals: pod / job lifecycle waits -------------------------------
    def _wait_pods_gone(self, name: str, timeout: Optional[int] = None) -> None:
        """Block until the tenant's ENGINE pod is gone (so the RWO PVC is free).
        Selects the engine component only, so a maintenance pod never matches."""
        sel = f"{LABEL_TENANT}={name},{LABEL_COMPONENT}=tenant-engine"
        deadline = time.time() + (timeout or self.ready_timeout)
        while time.time() < deadline:
            out = self._run(["get", "pods", "-l", sel, "-o", "name"]).strip()
            if not out:
                return
            time.sleep(1)
        raise KubernetesError(
            f"tenant {name!r} engine pod did not terminate within timeout")

    def _wait_pod_ready(self, pod: str, timeout: Optional[int] = None) -> None:
        self._run(["wait", "--for=condition=Ready", f"pod/{pod}",
                   f"--timeout={timeout or self.ready_timeout}s"])

    def _wait_maint_pods_gone(self, name: str,
                              timeout: Optional[int] = None) -> None:
        """Best-effort wait until no maintenance pod (restore helper / rotation
        Job pod) for this tenant remains, so the RWO PVC is free before the
        StatefulSet scales back up (the multi-attach guard). Never raises — on a
        delete/wait timeout it returns, but the foreground deletes upstream make
        a lingering pod unlikely."""
        sel = f"{LABEL_TENANT}={name},{LABEL_COMPONENT}={COMPONENT_MAINT}"
        deadline = time.time() + (timeout or self.ready_timeout)
        while time.time() < deadline:
            try:
                out = self._run(["get", "pods", "-l", sel, "-o", "name"]).strip()
            except KubernetesError:
                return
            if not out:
                return
            time.sleep(1)

    def _sts_ready(self, name: str) -> bool:
        """True if the tenant's StatefulSet reports a ready replica — i.e. the
        engine pod is serving. With the engine's fail-closed start, Ready implies
        the data opened under EVOSQL_ENCRYPTION_KEY=current."""
        try:
            out = self._run(["get", f"statefulset/{name}", "-o",
                             "jsonpath={.status.readyReplicas}"]).strip()
        except KubernetesError:
            return False
        return out.isdigit() and int(out) >= 1

    def _delete_pod(self, pod: str) -> None:
        try:
            self._run(["delete", "pod", pod, "--ignore-not-found=true",
                       f"--timeout={self.ready_timeout}s"])
        except KubernetesError:
            pass

    def _delete_job(self, job: str) -> None:
        # foreground cascade so the Job's pod (which mounts the RWO PVC) is gone
        # before the caller scales the StatefulSet back up.
        try:
            self._run(["delete", "job", job, "--ignore-not-found=true",
                       "--cascade=foreground",
                       f"--timeout={self.ready_timeout}s"])
        except KubernetesError:
            pass

    def _wait_job(self, job: str, timeout: Optional[int] = None) -> str:
        """Classify a Job's terminal state: 'succeeded' | 'failed' |
        'indeterminate' (neither observed within timeout)."""
        deadline = time.time() + (timeout or self.ready_timeout)
        while time.time() < deadline:
            s = self._run(["get", f"job/{job}", "-o",
                           "jsonpath={.status.succeeded}"]).strip()
            if s.isdigit() and int(s) >= 1:
                return "succeeded"
            f = self._run(["get", f"job/{job}", "-o",
                           "jsonpath={.status.failed}"]).strip()
            if f.isdigit() and int(f) >= 1:
                return "failed"
            time.sleep(1)
        return "indeterminate"

    def _run_rotation_job(self, name: str, mode: str, secret_name: str) -> str:
        job = f"{name}-{mode}"
        self._delete_job(job)   # clear any stale Job from a prior attempt
        self._run(["apply", "-f", "-"],
                  input_text=self._render_rotation_job(
                      name, job, mode, secret_name))
        return self._wait_job(job)

    def _cleanup_rotation(self, name: str, secret_name: str,
                          result: Optional[dict] = None) -> None:
        for job in (f"{name}-rekey", f"{name}-rotate-key"):
            self._delete_job(job)
        # The transient Secret holds key material; make a real effort to delete
        # it and SURFACE a failure (never silently leave a key Secret behind).
        last: Optional[Exception] = None
        for _ in range(3):
            try:
                self._run(["delete", "secret", secret_name,
                           "--ignore-not-found=true"])
                return
            except KubernetesError as ex:
                last = ex
        msg = (f"could not delete transient key Secret {secret_name!r} "
               f"({str(last)[:120]}); it may still hold key material")
        print(f"[tenant_k8s] WARNING: {msg}", file=sys.stderr, flush=True)
        if result is not None:
            result["needs_reconcile"] = True
            result["detail"] = ((result.get("detail") + "; " if result.get("detail")
                                 else "") + msg)

    def _reap_maintenance(self, name: str) -> None:
        """Best-effort removal of leftover maintenance objects (restore helper
        pod, rotation Jobs, transient key Secret) from a previously-crashed op,
        so a new op starts clean and no key-bearing transient Secret lingers."""
        sel = f"{LABEL_TENANT}={name},{LABEL_COMPONENT}={COMPONENT_MAINT}"
        for kind in ("job", "pod", "secret"):
            try:
                self._run(["delete", kind, "-l", sel,
                           "--ignore-not-found=true"])
            except KubernetesError:
                pass

    # -- internals: rotation key state machine ------------------------------
    def _commit_rotation(self, name: str, prov: KeyProvider,
                         result: dict) -> bool:
        """Promote the pending key to current after a successful --rekey. The
        on-disk header is already under the new key, so this is retried (never
        rolled back). Returns True on commit; on persistent failure leaves the
        pending key in place (the next ensure self-heals by promoting it) and
        flags needs_reconcile."""
        last: Optional[Exception] = None
        for _ in range(3):
            try:
                prov.commit()
                # sync the Secret's current field (idempotent for the
                # Secret-backed provider; required for an external provider).
                self._set_secret_key(name, K8sSecretKeyProvider.CUR,
                                     prov.current())
                result.update(ok=True, passphrase_rotated=True)
                return True
            except Exception as ex:   # noqa: BLE001 - disk truth is `new`; retry
                last = ex
        result.update(
            ok=True, passphrase_rotated=True, needs_reconcile=True,
            detail="rekeyed on disk but key-source commit failed after retries; "
                   "the next ensure self-heals by promoting the pending key: "
                   + str(last)[:160])
        return False

    def _reconcile_stale_pending(self, tenant_id: str, name: str,
                                 prov: Optional[KeyProvider] = None) -> None:
        """If a pending key lingers from a crashed/indeterminate rotation AND the
        engine is currently serving (Ready), the data is under the CURRENT key
        (fail-closed: Ready <=> the data opened under EVOSQL_ENCRYPTION_KEY=cur),
        so the pending rekey never committed -> discard it. This unblocks future
        rotations (rotate() refuses while a pending exists). No-op otherwise."""
        prov = prov or self._key_provider(tenant_id, name)
        try:
            if prov.pending_key() is None:
                return
            if self._sts_ready(name):
                prov.rollback()
        except Exception:   # noqa: BLE001 - reconcile is best-effort
            pass

    def _check_restore_keyref(self, name: str, src_dir: str) -> None:
        """For an encrypted tenant, refuse a restore whose backup was taken under
        a DIFFERENT key than the tenant's current one (the ciphertext would not
        open under the current key after the wipe). No-op for an unencrypted
        tenant or a backup with no recorded fingerprint."""
        if not self.encrypt:
            return
        path = os.path.join(src_dir, _KEYREF_FILE)
        if not os.path.exists(path):
            return
        with open(path) as fh:
            want = fh.read().strip()
        if not want:
            return
        cur = self._get_secret_key(name, K8sSecretKeyProvider.CUR)
        if not (cur and _key_fingerprint(cur) == want):
            raise KubernetesError(
                "refusing to restore: the backup was taken under a different "
                "encryption key than the tenant's current key (it has rotated "
                "since the backup). Restore the matching key first.")

    # -- internals: binary kubectl (cat streams) ----------------------------
    def _run_io(self, args: List[str], *, input_bytes: Optional[bytes] = None,
                capture: bool = True) -> bytes:
        """Binary-mode sibling of _run (text=False) for exec'd cat/stream I/O.
        Returns raw stdout bytes; raises KubernetesError on a non-zero exit."""
        cmd = [*self.kubectl, "-n", self.namespace, *args]
        proc = subprocess.run(
            cmd, input=input_bytes,
            stdout=subprocess.PIPE if capture else None,
            stderr=subprocess.PIPE)
        if proc.returncode != 0:
            err = (proc.stderr or b"").decode("utf-8", "replace").strip()
            raise KubernetesError(
                f"{' '.join(cmd)} failed (rc={proc.returncode}): {err}")
        return proc.stdout or b""

    def _exec_capture(self, pod: str, sh: str) -> bytes:
        """``kubectl exec <pod> -- sh -c '<sh>'``, capturing binary stdout."""
        return self._run_io(["exec", pod, "--", "sh", "-c", sh])

    def _exec_feed(self, pod: str, sh: str, data: bytes) -> None:
        """``kubectl exec -i <pod> -- sh -c '<sh>'``, feeding binary stdin."""
        self._run_io(["exec", "-i", pod, "--", "sh", "-c", sh],
                     input_bytes=data, capture=False)

    def _exec_stream_to_file(self, pod: str, sh: str, dest_path: str) -> None:
        """Stream an exec'd command's stdout straight to a local file (so a large
        data file is never fully buffered in memory)."""
        cmd = [*self.kubectl, "-n", self.namespace, "exec", pod, "--",
               "sh", "-c", sh]
        with open(dest_path, "wb") as out:
            proc = subprocess.Popen(cmd, stdout=out, stderr=subprocess.PIPE)
            _o, err = proc.communicate()
        if proc.returncode != 0:
            raise KubernetesError(
                f"{' '.join(cmd)} failed (rc={proc.returncode}): "
                f"{(err or b'').decode('utf-8', 'replace').strip()}")
