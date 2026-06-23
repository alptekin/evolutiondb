# Compliance control matrix (self-assessment template)

This document maps the security, privacy, and reliability controls that
EvolutionDB's agent-memory layer ships today onto the control areas of common
frameworks (GDPR, SOC 2, ISO/IEC 27001). It is a **self-assessment aid you
complete**, not a certification and not a statement that the software meets any
standard.

!!! danger "This is not a certification, and not a compliance claim"
    EvolutionDB is **not** "GDPR-compliant", "SOC 2 certified", or "ISO 27001
    certified" out of the box, and you must not represent it as such. A control
    being listed here does not mean it is on in your deployment. Many controls
    are **opt-in** and ship **off** by default, several are the **operator's
    responsibility** to configure and operate, and some are on the **roadmap and
    not shipped at all**. The framework references in the last column are
    **indicative only** — they point you at the clauses you will likely need to
    evidence, and you must **verify the mapping with your own auditor and legal
    counsel**. Certification requires an audit of *your* deployment, *your*
    processes, and *your* organisation — none of which this software can supply.

## How to use this matrix

1. Read each row's **Status** honestly:
    - **Provided** — the software implements the control mechanism. You still
      have to turn it on, configure it correctly, and operate it.
    - **Operator-responsibility** — the software gives you a hook or a knob, but
      whether the control actually holds depends on how *you* deploy, configure,
      and run it (key custody, network placement, supervisor, retention windows,
      legal basis, and so on).
    - **Roadmap** — not shipped. Do not rely on it. Listed so you can see the
      gap and plan compensating controls.
2. Confirm the **How to enable** column against your own running configuration.
   The environment variables and build flags below are taken from the source,
   but only your deployment tells you what is actually set.
3. Treat the **Indicative mapping** column as a pointer, not a verdict. Replace
   it with your auditor's own assessment.
4. Read this alongside the rest of the [governance doc pack](README.md), which
   describes the same data posture in prose and supplies the privacy/DPA
   templates you will need.

Defaults worth internalising before you read the tables:

- Encryption at rest is **off** unless you build with encryption **and** set a
  passphrase. Without both, the data file and the WAL are **plaintext on disk**.
- PII egress masking is **off** by default, so enrichment text reaches the model
  provider **unmasked** unless you turn it on.
- The listener binds to **loopback** by default; exposing it on the network is a
  deliberate, configured act that should come with TLS and authentication.

---

## Access control & authentication

| Control area | What EvolutionDB provides | How to enable (env / flag) | Status | Indicative mapping (verify with counsel) |
| --- | --- | --- | --- | --- |
| Network exposure default | The TCP listener binds to loopback so a fresh install is not reachable off-host. Exposing it on a network interface is an explicit configuration choice. | Default is loopback (no action). To expose: `EVOSQL_BIND=0.0.0.0` (or `--bind`). | Provided (secure default) | SOC 2 CC6.6; ISO A.8.20–8.21 (network security); GDPR Art. 32(1) |
| TLS-required gate for non-loopback | When enabled, non-loopback connections must use TLS or are refused. A startup lockout-guard refuses to start if the configuration would lock everyone out. Requires a TLS-enabled build. | `EVOSQL_REQUIRE_TLS` (or `--require-tls`); build with `make adaptor TLS=1`. | Provided (opt-in) | SOC 2 CC6.1, CC6.7; ISO A.8.20–8.21, A.5.14; GDPR Art. 32(1)(a) |
| Password-based authentication | User passwords are stored as PBKDF2-SHA256 hashes at 600,000 iterations (`PBKDF2_ITERATIONS` in `crypto.h`); the iteration count is embedded in each stored hash. | Always on (built in). | Provided | SOC 2 CC6.1; ISO A.5.17 (authentication information); GDPR Art. 32(1)(b) |
| Password never on the wire (PG protocol) | Opt-in SCRAM-SHA-256 over the PostgreSQL SASL framing (RFC 5802). When enabled the cleartext password never crosses the wire; only SCRAM-SHA-256 is advertised and any other mechanism is rejected. Off by default (cleartext-password auth). | `EVOSQL_PG_SASL` (set to enable). | Provided (opt-in) | SOC 2 CC6.1, CC6.7; ISO A.5.17, A.8.24; GDPR Art. 32(1)(a) |
| Agent web API authentication | The evoagent web API requires a shared-secret token on `/api/*` when set, compared in constant time (`hmac.compare_digest`). With no token the API is OPEN and the process warns when bound to a non-loopback host. | `EVOSQL_WEB_TOKEN` (set a strong secret). | Provided (opt-in; OPEN if unset) | SOC 2 CC6.1; ISO A.5.15, A.8.5; GDPR Art. 32(1)(b) |
| Agent web API rate limiting | Per-IP request rate limit on the web API, returning HTTP 429 when exceeded. | `EVOSQL_WEB_RATE_PER_MIN` (default 60). | Provided | SOC 2 CC6.6, A1.1; ISO A.8.6, A.8.20; GDPR Art. 32(1)(b) |
| Privilege model (engine) | Waterfall privilege check TABLE → SCHEMA → DATABASE for SQL-level authorization. | Built in (grant/revoke via SQL). | Provided | SOC 2 CC6.1, CC6.3; ISO A.8.2, A.8.3 (privileged & access rights); GDPR Art. 32(1)(b) |
| Single-tenant identity | `--user` / `--tenant` set `MCP_USER_ID` / `MCP_TENANT_ID` — the env-level single-tenant identity used to scope a user's stores. | `--user`, `--tenant` (CLI), or the env vars directly. | Provided (single-tenant) | SOC 2 CC6.1, CC6.3; ISO A.8.3; GDPR Art. 32(1)(b) |
| Multi-tenant isolation / RLS | Token-based multi-tenant authentication and per-tenant row-level isolation. | — | **Roadmap** (SaaS / Phase 2) — not shipped | SOC 2 CC6.1, CC6.3; ISO A.8.3 (planned control) |
| SSO / OIDC (agent web API) | The agent web API accepts an OIDC bearer JWT validated against a configured issuer's JWKS (RS256 signature + issuer + audience + expiry). The operator authenticates at their IdP (Keycloak / Entra ID / Okta / Google / Auth0), which enforces MFA, and presents the resulting token. Interactive browser redirect-login (auth-code flow) is additional UX, not yet shipped. Does not federate the SQL engine's own user auth. | `EVOSQL_OIDC_ISSUER` (+ `EVOSQL_OIDC_AUDIENCE`). | Provided (bearer-JWT; MFA via IdP) | SOC 2 CC6.1; ISO A.5.16, A.5.17 |

## Encryption in transit & at rest

| Control area | What EvolutionDB provides | How to enable (env / flag) | Status | Indicative mapping (verify with counsel) |
| --- | --- | --- | --- | --- |
| Encryption in transit (TLS) | OpenSSL TLS for client connections, with auto-generated self-signed certificates. Combine with the TLS-required gate above to refuse plaintext non-loopback connections. | Build with `make adaptor TLS=1`; enforce with `EVOSQL_REQUIRE_TLS`. Supply your own CA-signed certificate for production trust. | Provided (opt-in; operator supplies trusted certs) | SOC 2 CC6.1, CC6.7; ISO A.8.20–8.21, A.8.24; GDPR Art. 32(1)(a) |
| Encryption at rest (TDE) | Whole-database transparent encryption, AES-256-CTR, applied to data pages. **Opt-in.** Requires an encryption-enabled build **and** a passphrase. Without **both**, the data file **and** the WAL are **plaintext on disk**. | Build with `make adaptor TLS=1` (defines `EVO_ENCRYPTION`) **and** set `EVOSQL_ENCRYPTION_KEY`. | Provided (opt-in; **off by default**) | SOC 2 CC6.1; ISO A.8.24 (cryptography); GDPR Art. 32(1)(a) |
| Page 0 always plaintext | The FileHeader (page 0) is always stored in plaintext, even with TDE on, because crash recovery must read it before any key is available. | N/A (design invariant). | Provided (documented limitation) | ISO A.8.24; GDPR Art. 32(1)(a) — note residual metadata exposure |
| At-rest integrity / tamper detection | AES-256-CTR gives **confidentiality only**, not integrity or tamper detection. There is no authenticated-encryption / page-MAC layer. | — | **Roadmap / Not provided** | ISO A.8.24; SOC 2 CC6.1 — operator must add compensating controls |
| Encryption key custody | The passphrase is supplied by the operator via the environment; key storage, rotation discipline, and access control to the key are entirely the operator's responsibility. | Operator-managed (`EVOSQL_ENCRYPTION_KEY` source, secrets manager, file permissions). | Operator-responsibility | SOC 2 CC6.1; ISO A.8.24; GDPR Art. 32(1) |
| Passphrase (MEK) rotation | Rotate the at-rest encryption passphrase offline (`evosql-server --rekey`): the data-encryption key is re-wrapped under a new passphrase-derived key, so the old passphrase stops working. Header-only — the DEK and page ciphertext are unchanged. | `--rekey` with `EVOSQL_ENCRYPTION_KEY` (current) + `EVOSQL_ENCRYPTION_KEY_NEW` (new). | Provided (passphrase rotation) | ISO A.8.24; SOC 2 CC6.1 |
| Data-key (DEK) rotation / re-encryption | Rotate the data-encryption key and re-encrypt every page offline (`evosql-server --rotate-key`), with an atomic validated swap (original intact on failure). Same passphrase; cost is O(database size). | `--rotate-key` with the current `EVOSQL_ENCRYPTION_KEY`. | Provided (opt-in; offline) | ISO A.8.24; SOC 2 CC6.1 |
| External KMS / secret-store key sourcing | The TDE passphrase can be fetched from an external secret store / KMS via a key command (`EVOSQL_ENCRYPTION_KEY_CMD`) — e.g. `vault kv get`, an `aws`/`gcloud`/`az` CLI call, or any script — instead of a plaintext env var. The passphrase→MEK→wrapped-DEK envelope is unchanged; the secret simply lives in the store, not on the host. (Not a native KMS-wrapped-DEK envelope / HSM PKCS#11 integration.) | `EVOSQL_ENCRYPTION_KEY_CMD="<command>"`. | Provided (key-command hook) | ISO A.8.24; SOC 2 CC6.1 |
| Native KMS-envelope / HSM (PKCS#11) | KMS directly wrapping the DEK in the FileHeader, or an HSM holding the key via PKCS#11. | — | **Roadmap** — not shipped | ISO A.8.24 (planned control) |

## Audit & accountability

| Control area | What EvolutionDB provides | How to enable (env / flag) | Status | Indicative mapping (verify with counsel) |
| --- | --- | --- | --- | --- |
| Append-only event audit | A tenant-scoped, append-only audit of mutating tool calls, auth events, and privilege decisions (including RBAC denials and exceptions): WHO invoked WHICH tool WHEN with WHAT outcome. Stored in the tenant's own store so it inherits per-tenant isolation. | Built into the MCP server (`mcp_server_evosql/audit.py`). | Provided | SOC 2 CC4.1, CC7.2, CC7.3; ISO A.8.15 (logging); GDPR Art. 5(2) (accountability), Art. 30 |
| Minimal-data audit records | Audit rows record an explicit per-tool **whitelist of identifiers and lengths only** — never message bodies, fact text, query text, or recipient addresses. | Built in. | Provided (privacy by design) | ISO A.8.15; GDPR Art. 5(1)(c) (data minimisation), Art. 25 |
| Tamper-evident audit chain | Each audit row carries `prev` (previous row's hash) and `hash = sha256(prev + row content)`, chained per (store, namespace). `verify_chain()` detects edits, deletions, and reordering. | Built in; run `verify_chain` to check integrity. | Provided (tamper-**evident**) | SOC 2 CC7.2, CC7.3; ISO A.8.15; GDPR Art. 5(2), Art. 32(1) |
| Tamper-PROOF audit (external anchor) | The chain is tamper-evident but **not** tamper-proof: there is no external anchoring. Detecting tampering across a full chain rewrite needs periodic export of the head hash to an independent, append-only store. | — (operator can export head hashes manually today). | **Roadmap / Operator-responsibility** | SOC 2 CC7.2, CC7.3; ISO A.8.15 |
| Log retention & review | The audit prune bound (`AUDIT_KEEP_PER_NS`) caps rows per namespace; defining retention windows, exporting logs off-host, monitoring, and reviewing them is the operator's job. | Operator-managed (export, SIEM, retention schedule). | Operator-responsibility | SOC 2 CC7.2, CC7.3; ISO A.8.15, A.8.16; GDPR Art. 5(1)(e) |

## Data-subject rights / privacy

| Control area | What EvolutionDB provides | How to enable (env / flag) | Status | Indicative mapping (verify with counsel) |
| --- | --- | --- | --- | --- |
| Right of access (DSAR export) | `evoagent export-data` exports all of a user's data across their per-user stores. | `evoagent export-data --user <id>`. | Provided | GDPR Art. 15 (access), Art. 20 (portability); ISO A.5.34; SOC 2 P-series (privacy) |
| Right to erasure | `evoagent erase-data` sweeps all of a user's per-user stores. Requires `--yes`; without it, it is a dry run that only reports what would be erased. | `evoagent erase-data --user <id> --yes`. | Provided | GDPR Art. 17 (erasure); ISO A.5.34; SOC 2 P-series |
| Field-level PII masking at rest | Opt-in, per-connector masking via `protect_record()` from the `evolutiondb-pii` package, applied as records are ingested. Off unless the connector calls it. | Install/enable `evolutiondb-pii`; connector calls `protect_record`. | Provided (opt-in) | GDPR Art. 25 (data protection by design), Art. 32; ISO A.8.11 (data masking) |
| PII masking on retrieval | Masking applied when records are read back, controlled by a retrieval mode. | `EVOSQL_PII_RETRIEVAL` (e.g. `viewer` / `all`). | Provided (opt-in) | GDPR Art. 25, Art. 32; ISO A.8.11 |
| PII masking on outbound LLM egress | Masking of enrichment text sent to a model provider. **Off by default** — when off, enrichment text reaches the model provider **unmasked**. | `EVOSQL_PII_EGRESS=on` (default OFF). | Provided (opt-in; **off by default**) | GDPR Art. 25, Art. 28 (processor), Art. 44+ (transfers); ISO A.8.11, A.5.14 |
| Person-name / date-of-birth detection | Detection rules for personal names and dates of birth exist but ship **disabled** and are heuristic-only (`date_of_birth` and `person_name_tr` have `enabled: false` in the default ruleset). | Operator may enable, but reliability is not guaranteed. | **Roadmap / Operator-responsibility** (ships disabled, heuristic) | GDPR Art. 9 (special categories), Art. 25; ISO A.8.11 — do not rely on for redaction |
| Reliable name redaction | Dependable, high-recall person-name redaction. | — | **Roadmap** — not shipped | GDPR Art. 25, Art. 32; ISO A.8.11 (planned control) |
| Engine-level masking (SQL) | Masking enforced inside the engine via SQL (e.g. column masking policies). | — | **Roadmap** — not shipped | ISO A.8.11; GDPR Art. 25 (planned control) |
| Send-safety invariant | The agent never sends on its own. It drafts and queues; a human approves; delivery is a dry-run unless explicitly opted in. See [ADR-004](../adr/ADR-004-action-loop-send-approval.md). | Built in (design invariant). | Provided | GDPR Art. 5(1)(a), Art. 22 (automated decisions); SOC 2 CC2.2; ISO A.5.34 |
| Lawful basis, consent, transfers | The legal grounds for processing, consent capture, retention windows, and international-transfer safeguards are determined and operated by the deployer. | Operator-managed (see [privacy policy](privacy-policy.md), [DPA](dpa.md)). | Operator-responsibility | GDPR Art. 6, Art. 7, Art. 13–14, Art. 44+ |

## Availability & recovery

| Control area | What EvolutionDB provides | How to enable (env / flag) | Status | Indicative mapping (verify with counsel) |
| --- | --- | --- | --- | --- |
| Crash recovery of committed data | Write-ahead logging with full-page images. The last committed transaction is durable: the FileHeader is WAL-logged at commit and the commit marker rides the same fsync; two-pass crash recovery replays it on restart. | Built in. | Provided | SOC 2 A1.2, CC7.5; ISO A.8.13 (backup), A.5.30; GDPR Art. 32(1)(c) |
| WAL bounding (checkpointer) | Opt-in background checkpointer bounds WAL growth. | `EVOSQL_CHECKPOINT_INTERVAL_SEC` (>0 to enable; ≤0 disables). | Provided (opt-in) | SOC 2 A1.1, A1.2; ISO A.8.6 (capacity), A.8.13 |
| Crash safety-net | A SIGSEGV / SIGBUS handler turns a fatal fault into a clean exit so a supervisor can restart the process; committed data stays durable via the WAL. | Built in. | Provided | SOC 2 A1.2, CC7.4, CC7.5; ISO A.5.29, A.5.30 |
| Supervisor / restart policy | Reference supervisor configs: Docker `restart: on-failure:5` with a healthcheck, and a systemd unit (with `StartLimit`-style bounding). The operator must actually run under a supervisor. | Use the provided `docker-compose.yml` / systemd unit, or your own supervisor. | Provided (reference) + Operator-responsibility | SOC 2 A1.2; ISO A.8.6, A.5.30; GDPR Art. 32(1)(b) |
| Backup / restore | Crash-consistent backup and restore (`evoagent backup` / `evoagent restore`); restore refuses to run while the engine appears live and will not overwrite a non-empty data dir without `--force`. | `evoagent backup <dir>` / `evoagent restore <dir>`. | Provided | SOC 2 A1.2, A1.3, CC7.5; ISO A.8.13 (backup); GDPR Art. 32(1)(c) |
| Backup scheduling, off-site copies, restore testing | Scheduling backups, storing copies off-host/off-site, encrypting backup media, and periodically test-restoring are the operator's responsibility. | Operator-managed. | Operator-responsibility | SOC 2 A1.2, A1.3; ISO A.8.13, A.5.30; GDPR Art. 32(1)(c) |
| Point-in-time recovery (PITR) | Rewind the database to a past timestamp by replaying the WAL archive (`evosql-server --recover-to <epoch_us>`), with an atomic validated swap that leaves the original intact on failure. Requires archiving on from creation; recent-tail granularity is the last checkpoint. | `EVOSQL_WAL_ARCHIVE=1` from creation + periodic `EVOSQL_CHECKPOINT_INTERVAL_SEC`; recover with `--recover-to`. | Provided (opt-in; archive-from-creation) | SOC 2 A1.2; ISO A.8.13 |
| High availability / replication | ADR-001 describes replication v1; treat HA/failover topology as something you design, deploy, and test. | See [ADR-001](../adr/ADR-001-task-97-replication-v1.md). | Operator-responsibility / partial | SOC 2 A1.2; ISO A.8.14 (redundancy), A.5.29, A.5.30 |

## Secure deployment

| Control area | What EvolutionDB provides | How to enable (env / flag) | Status | Indicative mapping (verify with counsel) |
| --- | --- | --- | --- | --- |
| LLM spend cap | Opt-in daily token cap to bound runaway model spend. | `EVOSQL_LLM_DAILY_TOKENS` (positive value to enable; 0/unset = off). | Provided (opt-in) | SOC 2 CC3.1, A1.1; ISO A.8.6 (capacity) |
| LLM transient-failure backoff | Model calls retry on HTTP 429 / 5xx and transient network errors with exponential backoff, honouring `Retry-After`. | Built in (`mcp_server_evosql/llm.py`). | Provided | SOC 2 A1.1; ISO A.8.6, A.8.14 |
| Credential / secret handling | Live model-provider keys and tokens (`EVOSQL_ENCRYPTION_KEY`, `EVOSQL_WEB_TOKEN`, model API keys) are supplied via the environment. Secret storage, rotation, and least-privilege are the operator's responsibility; never commit secrets. | Operator-managed (secrets manager, `.env` kept out of version control). | Operator-responsibility | SOC 2 CC6.1; ISO A.8.24, A.5.17; GDPR Art. 32(1) |
| Hardened runtime / network placement | Host hardening, firewalling, placing the loopback-default listener behind a controlled boundary, OS patching, and container/image scanning are the operator's responsibility. | Operator-managed. | Operator-responsibility | SOC 2 CC6.6, CC7.1; ISO A.8.8, A.8.9, A.8.20–8.21; GDPR Art. 32(1) |
| Change management & vuln management | Patching, dependency updates, vulnerability scanning, and change control around the deployment are the operator's responsibility. | Operator-managed. | Operator-responsibility | SOC 2 CC7.1, CC8.1; ISO A.8.8, A.8.32 |
| Sub-processor governance | Which third-party model providers and connector services are involved depends entirely on what you enable; some connectors are local-only with no sub-processor at all. Maintain your own sub-processor list. | Operator-managed (see [sub-processors](sub-processors.md)). | Operator-responsibility | GDPR Art. 28, Art. 44+; SOC 2 CC9.2; ISO A.5.19–5.22 |

---

## Not provided / your responsibility

The following are **not shipped** today. They are listed explicitly so you do
not over-rely on the software and can plan compensating controls. Do not
represent any of these as available.

**Roadmap (not shipped):**

- **Native KMS-envelope / HSM (PKCS#11)** — the passphrase can be sourced from
  an external store via a key command (`EVOSQL_ENCRYPTION_KEY_CMD`), but KMS
  directly wrapping the DEK, or an HSM holding the key over PKCS#11, is not
  implemented. (Passphrase rotation `--rekey`, data-key rotation `--rotate-key`,
  and external-secret-store sourcing are all shipped.)
- **At-rest tamper detection / authenticated encryption** — AES-256-CTR provides
  confidentiality only; there is no page-MAC or integrity layer.
- **Per-tenant row-level security and isolation**, and **token-based
  multi-tenant authentication** — identity is single-tenant via the environment
  today; multi-tenant isolation is a SaaS / Phase-2 item.
- **SSO / OIDC federation** — no federated sign-on.
- **Engine-level masking SQL** — masking is connector/retrieval-side, not
  enforced inside the engine via SQL.
- **Reliable person-name redaction** — name and date-of-birth rules ship
  disabled and are heuristic-only; do not rely on them for redaction of special
  categories of data.
- **Tamper-PROOF audit with external anchoring** — the audit chain is
  tamper-evident; making it tamper-proof requires periodic export of head hashes
  to an independent store (operator-driven today).

**Operator-responsibility (the software cannot supply these):**

- Choosing and documenting a **lawful basis**, capturing **consent**, and
  meeting **transparency** obligations (privacy notices).
- **Key custody** for the encryption passphrase and all other secrets, including
  storage, access control, and rotation discipline.
- **Network placement and host hardening** — firewalling, TLS certificate trust
  (supply CA-signed certs), OS/dependency patching, image scanning.
- **Running under a supervisor**, scheduling and **off-site backups**, encrypting
  backup media, and **periodically test-restoring**.
- **Log export, retention windows, monitoring, and review** (SIEM integration).
- **High-availability topology** design, deployment, and failover testing.
- **Sub-processor governance**: maintaining the list, signing DPAs, and managing
  international transfers for every model provider and connector you enable.
- **Your own audit** of the deployment, organisation, and processes — the only
  route to any actual certification.

## Related governance documents

- [Governance doc pack overview](README.md)
- [Privacy policy (template)](privacy-policy.md)
- [Data Processing Addendum (template)](dpa.md)
- [Sub-processors (conditional)](sub-processors.md)
- [Data retention policy (template)](data-retention-policy.md)
- [Breach-response runbook (template)](breach-response-runbook.md)
- [ADR-004 — Action Loop / Send-Approval Gate](../adr/ADR-004-action-loop-send-approval.md)
