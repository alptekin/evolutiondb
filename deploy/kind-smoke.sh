#!/usr/bin/env bash
#
# kind-smoke.sh — deploy the EvolutionDB Helm chart to a LOCAL kind cluster and
# prove it actually works: the pod becomes ready, a client can connect and run
# SQL, and the data SURVIVES a pod restart (the PersistentVolume is really used).
#
# This is the free, local rehearsal of the production K8s deployment — no AWS,
# no cost. It needs Docker running (kind runs the cluster as a container) plus
# kind, kubectl, and helm on PATH.
#
#   ./deploy/kind-smoke.sh           # full run: create -> deploy -> test -> destroy
#   KEEP=1 ./deploy/kind-smoke.sh    # leave the cluster up for inspection
#
# Exit non-zero on any failure (set -e). Safe to re-run.
set -euo pipefail

CLUSTER="${CLUSTER:-evo-smoke}"
RELEASE="${RELEASE:-evo}"
NS="${NS:-evo-smoke}"
IMAGE="evolutiondb/evolutiondb:smoke"
PASSWORD="${PASSWORD:-smoke-pass-123}"
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
CHART="$ROOT/deploy/helm/evolutiondb"
PGPORT=15433   # local port-forward target (avoid clashing with a dev server)

log() { printf '\n\033[1;36m== %s\033[0m\n' "$*"; }
fail() { printf '\033[1;31mFAIL: %s\033[0m\n' "$*" >&2; exit 1; }

# -- preflight --------------------------------------------------------------
log "Preflight"
for t in docker kind kubectl helm python3; do
  command -v "$t" >/dev/null 2>&1 || fail "$t not found on PATH"
done
docker info >/dev/null 2>&1 || fail "Docker is not running — start Docker Desktop first"
echo "tools OK; docker running"

cleanup() {
  if [ "${KEEP:-0}" != "1" ]; then
    log "Teardown"
    helm uninstall "$RELEASE" -n "$NS" >/dev/null 2>&1 || true
    kind delete cluster --name "$CLUSTER" >/dev/null 2>&1 || true
    [ -n "${PF_PID:-}" ] && kill "$PF_PID" >/dev/null 2>&1 || true
  else
    echo "KEEP=1 — leaving cluster '$CLUSTER' up. Remove with: kind delete cluster --name $CLUSTER"
  fi
}
trap cleanup EXIT

# -- build + load the engine image -----------------------------------------
log "Build engine image ($IMAGE)"
docker build -t "$IMAGE" "$ROOT"

log "Create kind cluster ($CLUSTER)"
kind get clusters 2>/dev/null | grep -qx "$CLUSTER" || kind create cluster --name "$CLUSTER"
kind load docker-image "$IMAGE" --name "$CLUSTER"

# -- deploy the chart -------------------------------------------------------
log "helm install"
kubectl create namespace "$NS" --dry-run=client -o yaml | kubectl apply -f -
helm upgrade --install "$RELEASE" "$CHART" -n "$NS" \
  --set image.repository=evolutiondb/evolutiondb \
  --set image.tag=smoke \
  --set image.pullPolicy=IfNotPresent \
  --set auth.password="$PASSWORD" \
  --set persistence.size=1Gi \
  --wait --timeout 180s

POD="$RELEASE-evolutiondb-0"
log "Wait for $POD ready"
kubectl wait --for=condition=ready "pod/$POD" -n "$NS" --timeout=120s \
  || { kubectl logs "$POD" -n "$NS" | tail -30; fail "pod did not become ready"; }

# -- connect + run SQL (raw PG wire via the repo's pg_helpers) --------------
# A tiny mode-driven helper avoids nested-quoting fragility: `seed` creates a
# table + 5 rows, `verify` asserts the 5 rows are still there.
SMOKE_PY="$(mktemp -t evo_smoke_XXXX.py)"
cat >"$SMOKE_PY" <<'PY'
import os, sys
sys.path.insert(0, os.path.join(os.environ["ROOT"], "tests"))
from pg_helpers import conn, simple_query
c = conn(host="127.0.0.1", port=int(os.environ["EVO_PG_PORT"]),
         user="admin", password=os.environ["EVO_PW"], database="evosql")
def q(sql):
    cols, rows, err, tag = simple_query(c, sql)
    if err:
        raise SystemExit(f"SQL error on {sql!r}: {err}")
    return rows
mode = sys.argv[1]
if mode == "seed":
    q("DROP TABLE IF EXISTS smoke_t")
    q("CREATE TABLE smoke_t (id INT PRIMARY KEY, v VARCHAR(30))")
    for i in range(1, 6):
        q("INSERT INTO smoke_t VALUES (%d, 'row_%d')" % (i, i))
    n = q("SELECT COUNT(*) FROM smoke_t")[0][0]
    assert n == "5", f"expected 5 rows, got {n}"
    print("  seeded + read back 5 rows OK")
elif mode == "verify":
    n = q("SELECT COUNT(*) FROM smoke_t")[0][0]
    assert n == "5", f"DATA LOST after restart — expected 5, got {n} (PVC not persisting?)"
    print("  data survived pod restart: 5 rows still present (PVC OK)")
PY
export ROOT
trap 'cleanup; rm -f "$SMOKE_PY"' EXIT

start_pf() {
  kubectl port-forward "svc/$RELEASE-evolutiondb" "$PGPORT:5433" -n "$NS" >/dev/null 2>&1 &
  PF_PID=$!
  for _ in $(seq 1 40); do
    (echo >"/dev/tcp/127.0.0.1/$PGPORT") >/dev/null 2>&1 && return 0
    sleep 0.25
  done
  fail "port-forward to $PGPORT did not open"
}
run_sql() { EVO_PG_PORT="$PGPORT" EVO_PW="$PASSWORD" python3 "$SMOKE_PY" "$1"; }

log "Seed data through the Service"
start_pf
run_sql seed
kill "$PF_PID" >/dev/null 2>&1 || true; PF_PID=""

# -- the real test: data survives a pod restart (PVC actually used) ---------
log "Delete the pod (StatefulSet recreates it) and verify the PVC persisted data"
kubectl delete "pod/$POD" -n "$NS" --wait=true
kubectl wait --for=condition=ready "pod/$POD" -n "$NS" --timeout=120s
start_pf
run_sql verify
kill "$PF_PID" >/dev/null 2>&1 || true; PF_PID=""

log "SMOKE TEST PASSED — chart deploys, serves SQL, and persists across restart"
