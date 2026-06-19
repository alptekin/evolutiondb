# Breach Response Runbook (Template)

!!! warning "Template — adapt to your jurisdiction and review"
    This is a practical incident runbook for a self-hosted EvolutionDB
    agent-memory deployment. Notification timelines and authorities are
    `[PLACEHOLDER]` fields you must set under `[JURISDICTION]` and have reviewed
    by your own counsel. It asserts no compliance certification. See the
    [pack README](README.md).

**Operator:** `[LEGAL ENTITY]` · **Incident contact:** `[DPO CONTACT]` ·
**Version:** `[VERSION]`

## 0. Before an incident (preparation)

- Know your `[JURISDICTION]` breach-notification timelines and the supervisory
  authority / regulator to contact.
- Know where data lives: the data directory (`EVOSQL_DATA_DIR`), the WAL, and
  backups.
- Know whether you run an encryption-enabled build with `EVOSQL_ENCRYPTION_KEY`
  set. **If not, treat the database file and WAL as plaintext on disk** for
  exposure assessment.
- Keep the audit store and host logs accessible for forensics.

## 1. Detect

- Review host and server logs for anomalous access, and the per-namespace,
  append-only **audit store** of mutating tool calls (newest ~1000 rows per
  namespace) for unexpected writes.
- Check the **outbox** lifecycle history for any send activity (note: nothing
  sends without explicit human approval, and delivery is dry-run by default —
  see [ADR-004](../adr/ADR-004-action-loop-send-approval.md) — so unexpected
  delivered items are a strong signal).
- Confirm network exposure: the server should bind loopback (`EVOSQL_BIND`
  default `127.0.0.1`). Exposure beyond loopback widens the surface.

## 2. Contain

- **Stop the connectors** to halt further ingestion and any outbound API calls.
- **Re-bind to loopback:** set `EVOSQL_BIND=127.0.0.1` and restart, removing any
  non-loopback exposure.
- **Disable outbound LLM egress / sending:** turn off LLM enrichment and any send
  transport so no further data leaves the host; set
  `EVOSQL_LLM_DAILY_TOKENS=0` to cut model-provider calls.
- **Rotate keys and tokens:** rotate connector OAuth tokens and model-provider
  API keys, and any other credentials that may be exposed. (Note: engine-level
  encryption **key rotation is roadmap, not shipped** — rotating
  `EVOSQL_ENCRYPTION_KEY` in place is not a supported operation, so plan a
  re-encryption / migration if the encryption key is implicated.)
- Preserve evidence (logs, audit store, a copy of the data directory) before
  making changes where feasible.

## 3. Assess scope

- **Encryption posture drives exposure.** If you do **not** run an
  encryption-enabled build with `EVOSQL_ENCRYPTION_KEY`, the database file **and**
  WAL are **plaintext on disk** — assume their full content is exposed if the
  files were accessible. Even with encryption, **page 0 is always plaintext**,
  and CTR provides **confidentiality only, not tamper detection** — so you cannot
  rely on the cipher to prove data was not modified.
- **PII posture drives sensitivity.** Masking is opt-in and field-level (see
  [privacy-policy.md](privacy-policy.md) section 2.1). Unless masking was
  configured at rest (`protect_record()`), at retrieval (`EVOSQL_PII_RETRIEVAL`),
  or on egress (`EVOSQL_PII_EGRESS=on`), assume exposed text contains **unmasked**
  personal data. Person-name / date-of-birth rules ship **disabled**, so do not
  assume names were redacted.
- Identify which **connectors** were enabled to scope the data categories
  involved (see [sub-processors.md](sub-processors.md)). Local-only connectors
  (iMessage, Apple Notes, browser history, Claude sessions) imply host-local
  data; external-API connectors imply provider-side scope too.
- Determine affected data subjects and record categories and approximate volumes.

## 4. Notify

- Notify the supervisory authority / regulator within `[NOTIFICATION TIMELINE]`
  as required under `[JURISDICTION]`.
- Notify affected data subjects where required, within
  `[DATA SUBJECT NOTIFICATION TIMELINE]`.
- Notify affected sub-processors / providers as relevant (see
  [sub-processors.md](sub-processors.md)) and any contractual counterparties per
  [dpa.md](dpa.md).
- Maintain an internal incident record regardless of whether external
  notification is required.

## 5. Recover

- Restore from a known-good backup if integrity is in doubt (recall the cipher
  gives no tamper detection, so verify integrity by other means).
- Re-enable connectors only after credentials are rotated and the entry vector is
  closed.
- If encryption was not in place and data sensitivity warrants it, **enable an
  encryption-enabled build with a fresh `EVOSQL_ENCRYPTION_KEY`** as part of
  recovery, and tighten host-level controls (OS disk encryption, file-system
  permissions on `EVOSQL_DATA_DIR`).

## 6. Post-incident

- Conduct a review: root cause, what data was exposed, what controls failed.
- Update this runbook and the other documents in this pack as needed.
- Track remediation to closure and record lessons learned for `[LEGAL ENTITY]`.

## Related

- [privacy-policy.md](privacy-policy.md) · [dpa.md](dpa.md) ·
  [sub-processors.md](sub-processors.md) ·
  [data-retention-policy.md](data-retention-policy.md) ·
  [ADR-004](../adr/ADR-004-action-loop-send-approval.md)
