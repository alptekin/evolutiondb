# Deploying EvolutionDB

The `helm/evolutiondb` chart deploys the engine as a single-instance
StatefulSet (the engine is a single-writer process, so `replicaCount` stays 1)
with a PersistentVolume for `evosql.db` + the WAL, a headless Service, optional
Ingress, and Secrets for the admin password and the TDE key. An **optional**
standalone agent (web UI + MCP, with OIDC SSO) can be enabled alongside it.

## Quick start (production-shaped values)

```bash
helm install evo deploy/helm/evolutiondb \
  --set auth.password='<strong-password>' \
  --set persistence.size=20Gi
```

### Hardening knobs (all map to the engine's EVOSQL_* env)

| Value | Effect |
| --- | --- |
| `network.bind` | Interface inside the pod. **Defaults to `0.0.0.0`** because the engine binary defaults to loopback — without this the Service can't reach it. |
| `persistence.mountPath` | Where the PVC is mounted; the engine's `EVOSQL_DATA_DIR` points here so data actually persists. |
| `encryption.enabled` + `encryption.key` | TDE passphrase, stored in a Secret. |
| `encryption.keyCommand` | KMS hook — a command whose stdout is the passphrase (e.g. `vault kv get ...`); takes precedence over a literal key. |
| `security.pgSasl` | Require SCRAM-SHA-256 on the PG wire (password never on the wire). |
| `security.requireTls` | Refuse non-loopback plaintext PG connections. |
| `wal.checkpointIntervalSec` | Bound WAL growth (`0` = checkpoint only at shutdown). |
| `wal.archive` | Keep the WAL archive (needed for PITR). |

### Optional agent (web UI + OIDC SSO)

```bash
helm install evo deploy/helm/evolutiondb \
  --set agent.enabled=true \
  --set agent.oidc.issuer='https://<your-idp>/realms/evo' \
  --set agent.oidc.audience='evolutiondb' \
  --set agent.ingress.enabled=true \
  --set agent.ingress.host='agent.example.com'
```

MFA is enforced by your IdP — EvolutionDB only validates the resulting token.

## Free local rehearsal — `kind-smoke.sh`

Before paying for a cloud cluster, prove the chart actually works on a **local**
Kubernetes (kind) on your machine — no AWS, no cost. It builds the engine image,
spins up a kind cluster, `helm install`s the chart, connects and runs SQL, then
**deletes the pod and verifies the data survived** (the PVC is really used).

```bash
./deploy/kind-smoke.sh        # needs Docker running + kind, kubectl, helm
KEEP=1 ./deploy/kind-smoke.sh # leave the cluster up to poke at it
```

This catches ~90% of deployment bugs (templating, PVC binding, secret wiring,
the engine actually starting and persisting) for free, in minutes.

### Full stack — `kind-stack-smoke.sh`

Goes further: builds **both** images (engine + agent), deploys the whole stack
plus an in-cluster mock OIDC provider, and proves the agent works end-to-end —
the web UI responds, the `/api` auth gate enforces (no token → 401, static
token → 200, so the agent really reaches the engine Service), and **operator
OIDC SSO works live**: a JWT minted by the in-cluster IdP is accepted (agent
fetches its JWKS and validates) while a forged-signature JWT is rejected.

```bash
./deploy/kind-stack-smoke.sh        # engine + agent + live OIDC, then destroy
KEEP=1 ./deploy/kind-stack-smoke.sh # leave it up; port-forward to poke at the UI
```

A real IdP (Keycloak / Entra ID / Okta) replaces the mock — the agent validates
identically, and MFA is enforced by the IdP.

## When to go to AWS / EKS

The engine is single-process, so for a **single self-hosted deployment** you get
the most value from K8s's supervised restart + durable PVC + ingress — which
local kind already proves, and which a single EC2/Fargate + Docker Compose also
covers far more cheaply than EKS. Reach for **EKS** when you have a real pilot
(needing real cloud storage classes, ALB/DNS/TLS, and cloud KMS/IdP) or when you
start Phase 2 (multi-tenant) and actually need to orchestrate many instances.
