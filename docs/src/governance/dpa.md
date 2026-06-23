# Data Processing Addendum (Template)

!!! warning "Template — complete and review before signing"
    This is a scaffold for a Data Processing Addendum (DPA) for a self-hosted
    EvolutionDB agent-memory deployment. It is **shaped like** the
    accountable-processor obligations found in regimes such as GDPR Article 28,
    but it is written to be **regime-neutral** with `[PLACEHOLDER]` fields. It is
    **not** a finished agreement and **not** legal advice. Have it adapted and
    reviewed by your own counsel before execution. It asserts no
    compliance certification. See the [pack README](README.md).

**This Addendum** is entered into between `[CONTROLLER]` (the "Controller") and
`[PROCESSOR]` (the "Processor") and forms part of `[MAIN AGREEMENT]`.
**Effective date:** `[EFFECTIVE DATE]`. **Version:** `[VERSION]`.

## 1. Roles of the parties

The Controller determines the purposes and means of processing the personal data
described in Annex A. The Processor processes that personal data **only on the
documented instructions of the Controller**, including the configuration choices
the Controller makes when enabling connectors, model providers, and masking
options. Where the deployment is operated by a single self-hoster for their own
purposes, that operator may act as Controller; the parties must confirm their
actual roles under `[JURISDICTION]`.

## 2. Scope and nature of processing (Annex A)

- **Subject matter:** provision and operation of the EvolutionDB agent-memory
  layer.
- **Duration:** for the term of `[MAIN AGREEMENT]` and until deletion/return
  under section 8.
- **Nature and purpose:** ingestion of connector-sourced data, storage and
  indexing as memory, automated enrichment via a model provider, and
  human-approved assistant actions.
- **Categories of data subjects:** `[DATA SUBJECT CATEGORIES]` (for example the
  operator's correspondents, colleagues, and contacts appearing in connected
  accounts).
- **Categories of personal data:** as enumerated in
  [privacy-policy.md](privacy-policy.md), section 2 — message and email content,
  calendar data, code and project data, documents and notes, browsing/media
  history, and derived memory, **limited to the connectors actually enabled**.
- **Special-category data:** `[SPECIAL CATEGORY — SPECIFY OR "NONE INTENDED"]`.
  Note that free-text connector content may incidentally contain
  special-category data; the Controller is responsible for assessing this.

## 3. Controller instructions

The Processor processes personal data only on documented Controller instructions
and informs the Controller if, in its opinion, an instruction infringes
applicable data-protection law. The Controller's configuration of the deployment
(enabled connectors, `EVOSQL_PII_RETRIEVAL`, `EVOSQL_PII_EGRESS`, encryption
build and `EVOSQL_ENCRYPTION_KEY`, `EVOSQL_BIND`, send-enablement) constitutes
part of those instructions.

## 4. Confidentiality

Persons authorised to process the personal data are bound by an appropriate
obligation of confidentiality.

## 5. Security measures (stated honestly)

The Processor implements the measures below. They are stated **as the software
actually behaves**, not aspirationally:

- **Network exposure.** The server binds to loopback `127.0.0.1` by default via
  `EVOSQL_BIND`. Exposing it beyond loopback is a deliberate operator action.
- **Encryption at rest — conditional.** Whole-database encryption (AES-256-CTR
  page encryption) is available **only** with an encryption-enabled build (a
  `TLS=1` / `EVO_ENCRYPTION` build) **and** an `EVOSQL_ENCRYPTION_KEY`
  passphrase. **Without both, the database file and the write-ahead log are
  plaintext on disk.** Even when configured, **page 0 (the file header) is always
  plaintext**, and CTR provides **confidentiality only — not tamper detection /
  integrity**. The Controller must not assume encryption at rest unless both
  conditions are met.
- **PII masking — opt-in, field-level.** Masking is not on by default. At rest it
  depends on each connector calling `protect_record()`; at retrieval on
  `EVOSQL_PII_RETRIEVAL`; on the outbound path to the model provider only when
  `EVOSQL_PII_EGRESS=on` (default off, so outbound enrichment text is otherwise
  unmasked). Person-name and date-of-birth rules ship **disabled** (heuristic
  only). See [privacy-policy.md](privacy-policy.md), section 2.1.
- **Outbound-action safeguard.** No outward-facing action is taken without
  explicit human approval, and delivery is dry-run by default — see
  [ADR-004](../adr/ADR-004-action-loop-send-approval.md).
- **Spend / egress limits.** `EVOSQL_LLM_DAILY_TOKENS` bounds daily model-provider
  token use (`0` = off). `EVOSQL_PII_EGRESS` fails closed when enabled.
- **Audit.** Mutating tool calls are recorded in a per-namespace, append-only
  audit store; see [data-retention-policy.md](data-retention-policy.md).
- **Not yet shipped (roadmap, not a current measure):** key rotation,
  per-tenant row-level security, engine-level masking SQL, and reliable
  person-name redaction. The parties must not rely on these as implemented
  controls.

The Controller is responsible for the operational measures around the host
(operating-system hardening, disk encryption at the OS level, access control to
the data directory `EVOSQL_DATA_DIR`, backups, and secret management for
`EVOSQL_ENCRYPTION_KEY`).

## 6. Sub-processors

The Processor's use of sub-processors is **conditional on the Controller's
configuration**. The current conditional list is maintained in
[sub-processors.md](sub-processors.md). The Controller authorises the use of the
sub-processors that correspond to the connectors and model providers it enables.
Connectors marked **local-only** involve **no** sub-processor.

### 6.1 Change notice

The Processor will give the Controller `[NOTICE PERIOD]` prior notice of any
intended addition or replacement of a sub-processor, giving the Controller the
opportunity to object on reasonable data-protection grounds. Enabling a new
connector or model provider is itself such a change and is a Controller action.

## 7. Assistance to the Controller

The Processor assists the Controller, taking into account the nature of
processing, in responding to data-subject rights requests, in security and breach
obligations (see [breach-response-runbook.md](breach-response-runbook.md)), and
in any required impact assessment, to the extent reasonable for a self-hosted
deployment.

## 8. Deletion or return on termination

On termination of `[MAIN AGREEMENT]`, and at the Controller's choice, the
Processor will delete or return the personal data and delete existing copies,
unless retention is required by law. In this deployment, deletion is performed
against the relevant memory namespace(s) in the data directory; see
[data-retention-policy.md](data-retention-policy.md) for what deletion does and
does not cover (including that there is no automatic expiry today).

## 9. Audit and information

The Processor makes available to the Controller information necessary to
demonstrate compliance with this Addendum and contributes to audits as agreed in
`[MAIN AGREEMENT]`.

## 10. International transfers

Any transfer of personal data outside `[JURISDICTION]` occurs only where a valid
transfer mechanism is in place. Transfers arise principally through the enabled
model provider and external-API connectors; see
[sub-processors.md](sub-processors.md).

## 11. Liability and term

Liability, term, and governing law are as set out in `[MAIN AGREEMENT]`.
Governing law: `[JURISDICTION]`.

---

**Controller:** `[CONTROLLER]`   Signature: `__________`   Date: `__________`
**Processor:** `[PROCESSOR]`   Signature: `__________`   Date: `__________`
