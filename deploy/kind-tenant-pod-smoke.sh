#!/usr/bin/env bash
#
# kind-tenant-pod-smoke.sh — prove Phase 2 #5 (multi-tenant SaaS deploy) on a
# real local kind cluster, free:
#
#   - the chart's controlPlane RBAC creates a ServiceAccount + namespaced Role
#     that can manage per-tenant workloads (verified with `kubectl auth can-i`);
#   - KubernetesTenantBackend, running AS THAT ServiceAccount (kubectl --as=...),
#     provisions a DEDICATED tenant as a StatefulSet + Service + Secret + PVC,
#     the engine pod serves through its Service, suspend scales it to 0, resume
#     brings it back WITH the data intact (PVC retained), and delete offboards
#     every object.
#
# This is the container-per-tenant promise the TenantSupervisor docstring made,
# now proven against a real API server + scheduler — not just rendered YAML.
#
# Needs Docker running plus kind, kubectl, helm, python3.
#   ./deploy/kind-tenant-pod-smoke.sh
#   KEEP=1 ./deploy/kind-tenant-pod-smoke.sh   # leave the cluster up
set -euo pipefail

CLUSTER="${CLUSTER:-evo-tenant}"
RELEASE="${RELEASE:-evo}"
NS="${NS:-saas}"
ENGINE_IMG="evolutiondb/evolutiondb:smoke"
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
CHART="$ROOT/deploy/helm/evolutiondb"
SA="$RELEASE-evolutiondb-control-plane"
export EVOSQL_TENANT_SECRET="${EVOSQL_TENANT_SECRET:-kind-tenant-pod-secret}"

log()  { printf '\n\033[1;36m== %s\033[0m\n' "$*"; }
ok()   { printf '\033[1;32m  ok: %s\033[0m\n' "$*"; }
fail() { printf '\033[1;31mFAIL: %s\033[0m\n' "$*" >&2; exit 1; }

log "Preflight"
for t in docker kind kubectl helm python3; do
  command -v "$t" >/dev/null 2>&1 || fail "$t not found on PATH"
done
docker info >/dev/null 2>&1 || fail "Docker is not running — start Docker Desktop first"
ok "tools + docker"

cleanup() {
  if [ "${KEEP:-0}" != "1" ]; then
    log "Teardown"
    kind delete cluster --name "$CLUSTER" >/dev/null 2>&1 || true
  else
    echo "KEEP=1 — cluster '$CLUSTER' left up. Delete: kind delete cluster --name $CLUSTER"
  fi
}
trap cleanup EXIT

log "Build engine image"
docker build -t "$ENGINE_IMG" "$ROOT"

log "Create kind cluster + load image"
kind get clusters 2>/dev/null | grep -qx "$CLUSTER" || kind create cluster --name "$CLUSTER"
kind load docker-image "$ENGINE_IMG" --name "$CLUSTER"
kubectl create namespace "$NS" --dry-run=client -o yaml | kubectl apply -f -

log "helm install (shared engine + control-plane RBAC)"
helm upgrade --install "$RELEASE" "$CHART" -n "$NS" \
  --set image.repository=evolutiondb/evolutiondb --set image.tag=smoke --set image.pullPolicy=IfNotPresent \
  --set auth.password=shared-pass-123 --set persistence.size=1Gi \
  --set controlPlane.enabled=true \
  --wait --timeout 240s

# -- RBAC sufficiency: the control-plane SA can manage tenant workloads -------
log "Control-plane RBAC (kubectl auth can-i as the ServiceAccount)"
AS="system:serviceaccount:$NS:$SA"
check_can() {
  local verb="$1" res="$2"
  local got
  got="$(kubectl auth can-i "$verb" "$res" --as="$AS" -n "$NS" 2>/dev/null || true)"
  [ "$got" = "yes" ] || fail "SA cannot '$verb $res' (got '$got') — RBAC insufficient"
  ok "SA can $verb $res"
}
check_can create statefulsets
check_can update statefulsets/scale     # suspend/resume; the driver also exercises it
check_can delete statefulsets
check_can create services
check_can create secrets
check_can create persistentvolumeclaims
# negative control: the namespaced Role must NOT grant cluster-wide power
NO="$(kubectl auth can-i create nodes --as="$AS" 2>/dev/null || true)"
[ "$NO" = "no" ] || fail "SA unexpectedly can create nodes — Role too broad"
ok "SA cannot create cluster-scoped nodes (Role is correctly namespaced)"

# -- end-to-end pod-per-tenant lifecycle (driver runs AS the SA) --------------
log "Pod-per-tenant lifecycle (provision -> serve -> suspend -> resume -> delete)"
NS="$NS" SA="$SA" IMAGE="$ENGINE_IMG" TENANT="acme.example" \
  python3 "$ROOT/deploy/_tenant_pod_driver.py" || fail "tenant-pod driver failed"

log "TENANT-POD SMOKE PASSED — Phase 2 #5: dedicated tenants are real pods on K8s, RBAC-scoped, suspendable + offboardable"
