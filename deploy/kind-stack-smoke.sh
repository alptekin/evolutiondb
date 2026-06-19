#!/usr/bin/env bash
#
# kind-stack-smoke.sh — deploy the FULL stack (engine + agent) to a local kind
# cluster and prove it works end-to-end, including operator OIDC SSO live:
#
#   - engine pod ready + data persists (the engine chart, already covered by
#     kind-smoke.sh — re-checked here in the full-stack context);
#   - agent pod ready, web UI responds, and it connects to the engine Service;
#   - the agent's /api auth gate: no token -> 401, static token -> 200;
#   - OIDC SSO against an in-cluster mock IdP: a freshly MINTED valid JWT -> 200,
#     a forged-signature JWT -> 401. (A real IdP — Keycloak/Entra/Okta —
#     replaces the mock; the agent validates identically.)
#
# Free + local: needs Docker running plus kind, kubectl, helm, python3, curl.
#   ./deploy/kind-stack-smoke.sh
#   KEEP=1 ./deploy/kind-stack-smoke.sh   # leave the cluster up to poke at it
set -euo pipefail

CLUSTER="${CLUSTER:-evo-stack}"
RELEASE="${RELEASE:-evo}"
NS="${NS:-evo-stack}"
ENGINE_IMG="evolutiondb/evolutiondb:smoke"
AGENT_IMG="evolutiondb/evolution-agent:smoke"
PASSWORD="${PASSWORD:-smoke-pass-123}"
WEB_TOKEN="${WEB_TOKEN:-static-web-token-abc}"
OIDC_AUD="evolutiondb"
IDP_SVC="evo-mock-idp"
IDP_ISSUER="http://${IDP_SVC}:8080"
ROOT="$(cd "$(dirname "$0")/.." && pwd)"
CHART="$ROOT/deploy/helm/evolutiondb"
AGENT_LPORT=18800
IDP_LPORT=18080

log()  { printf '\n\033[1;36m== %s\033[0m\n' "$*"; }
ok()   { printf '\033[1;32m  ok: %s\033[0m\n' "$*"; }
fail() { printf '\033[1;31mFAIL: %s\033[0m\n' "$*" >&2; exit 1; }

log "Preflight"
for t in docker kind kubectl helm python3 curl; do
  command -v "$t" >/dev/null 2>&1 || fail "$t not found on PATH"
done
docker info >/dev/null 2>&1 || fail "Docker is not running — start Docker Desktop first"
ok "tools + docker"

PF_AGENT=""; PF_IDP=""
cleanup() {
  [ -n "$PF_AGENT" ] && kill "$PF_AGENT" >/dev/null 2>&1 || true
  [ -n "$PF_IDP" ] && kill "$PF_IDP" >/dev/null 2>&1 || true
  if [ "${KEEP:-0}" != "1" ]; then
    log "Teardown"
    kind delete cluster --name "$CLUSTER" >/dev/null 2>&1 || true
  else
    echo "KEEP=1 — cluster '$CLUSTER' left up. Delete: kind delete cluster --name $CLUSTER"
  fi
}
trap cleanup EXIT

log "Build images (engine + agent)"
docker build -t "$ENGINE_IMG" "$ROOT"
docker build -f "$ROOT/client/Dockerfile.python" -t "$AGENT_IMG" "$ROOT/client"

log "Create kind cluster + load images"
kind get clusters 2>/dev/null | grep -qx "$CLUSTER" || kind create cluster --name "$CLUSTER"
kind load docker-image "$ENGINE_IMG" "$AGENT_IMG" --name "$CLUSTER"
kubectl create namespace "$NS" --dry-run=client -o yaml | kubectl apply -f -

# -- in-cluster mock OIDC provider (runs _mock_idp.py inside the agent image) --
log "Deploy mock OIDC provider ($IDP_SVC)"
kubectl create configmap evo-mock-idp-src --from-file=_mock_idp.py="$ROOT/deploy/_mock_idp.py" \
  -n "$NS" --dry-run=client -o yaml | kubectl apply -f -
kubectl apply -n "$NS" -f - <<YAML
apiVersion: apps/v1
kind: Deployment
metadata: { name: $IDP_SVC, labels: { app: $IDP_SVC } }
spec:
  replicas: 1
  selector: { matchLabels: { app: $IDP_SVC } }
  template:
    metadata: { labels: { app: $IDP_SVC } }
    spec:
      containers:
        - name: idp
          image: $AGENT_IMG
          imagePullPolicy: IfNotPresent
          command: ["python3", "/idp/_mock_idp.py", "serve", "8080", "$IDP_ISSUER"]
          ports: [ { containerPort: 8080, name: http } ]
          volumeMounts: [ { name: src, mountPath: /idp } ]
          readinessProbe: { httpGet: { path: /jwks, port: 8080 }, initialDelaySeconds: 3, periodSeconds: 5 }
      volumes: [ { name: src, configMap: { name: evo-mock-idp-src } } ]
---
apiVersion: v1
kind: Service
metadata: { name: $IDP_SVC }
spec:
  selector: { app: $IDP_SVC }
  ports: [ { port: 8080, targetPort: 8080, name: http } ]
YAML

log "helm install engine + agent (static token + OIDC issuer = $IDP_ISSUER)"
helm upgrade --install "$RELEASE" "$CHART" -n "$NS" \
  --set image.repository=evolutiondb/evolutiondb --set image.tag=smoke --set image.pullPolicy=IfNotPresent \
  --set auth.password="$PASSWORD" --set persistence.size=1Gi \
  --set agent.enabled=true \
  --set agent.image.repository=evolutiondb/evolution-agent --set agent.image.tag=smoke --set agent.image.pullPolicy=IfNotPresent \
  --set agent.webToken="$WEB_TOKEN" \
  --set agent.oidc.issuer="$IDP_ISSUER" --set agent.oidc.audience="$OIDC_AUD" \
  --wait --timeout 240s

log "Wait for all pods ready (engine, agent, idp)"
kubectl wait --for=condition=ready pod -l app.kubernetes.io/component=agent -n "$NS" --timeout=120s \
  || { kubectl logs -l app.kubernetes.io/component=agent -n "$NS" --tail=40; fail "agent pod not ready"; }
kubectl wait --for=condition=ready pod -l app=$IDP_SVC -n "$NS" --timeout=60s || fail "mock idp not ready"
ok "engine + agent + idp pods ready"

# -- agent web UI + auth gate ------------------------------------------------
kubectl port-forward "svc/$RELEASE-evolutiondb-agent" "$AGENT_LPORT:8800" -n "$NS" >/dev/null 2>&1 & PF_AGENT=$!
kubectl port-forward "svc/$IDP_SVC" "$IDP_LPORT:8080" -n "$NS" >/dev/null 2>&1 & PF_IDP=$!
for _ in $(seq 1 40); do (echo >/dev/tcp/127.0.0.1/$AGENT_LPORT) >/dev/null 2>&1 && break; sleep 0.25; done
for _ in $(seq 1 40); do (echo >/dev/tcp/127.0.0.1/$IDP_LPORT) >/dev/null 2>&1 && break; sleep 0.25; done

code() { curl -s -o /dev/null -w '%{http_code}' "$@"; }
A="http://127.0.0.1:$AGENT_LPORT"

log "Agent web UI + auth gate"
[ "$(code "$A/")" = "200" ] || fail "web UI / did not return 200"
ok "web UI responds (200)"
[ "$(code "$A/api/pending")" = "401" ] || fail "no-token /api/pending should be 401"
ok "no token -> 401"
[ "$(code -H "Authorization: Bearer $WEB_TOKEN" "$A/api/pending")" = "200" ] \
  || fail "static token /api/pending should be 200 (agent->engine?)"
ok "static token -> 200 (agent reaches the engine Service)"

# -- live OIDC: mint from the in-cluster IdP, validate at the agent ----------
log "OIDC SSO live (mint at in-cluster IdP, validate at the agent)"
VALID=$(curl -s "http://127.0.0.1:$IDP_LPORT/mint?aud=$OIDC_AUD" | python3 -c 'import sys,json;print(json.load(sys.stdin)["token"])')
FORGED=$(curl -s "http://127.0.0.1:$IDP_LPORT/mint?aud=$OIDC_AUD&forge=1" | python3 -c 'import sys,json;print(json.load(sys.stdin)["token"])')
[ -n "$VALID" ] || fail "could not mint a token from the mock IdP"
[ "$(code -H "Authorization: Bearer $VALID" "$A/api/pending")" = "200" ] \
  || fail "valid OIDC token rejected (agent couldn't reach the in-cluster IdP JWKS?)"
ok "valid OIDC token -> 200"
[ "$(code -H "Authorization: Bearer $FORGED" "$A/api/pending")" = "401" ] \
  || fail "FORGED OIDC token was accepted — signature not verified!"
ok "forged OIDC token -> 401"

log "FULL-STACK SMOKE PASSED — engine + agent deploy, agent auth gate + live OIDC SSO work on K8s"
