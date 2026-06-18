# Data Retention Policy (Template)

!!! warning "Template — set your own retention windows and review"
    This template states **honestly** what the EvolutionDB agent-memory layer
    retains and what it does **not** auto-expire today. The retention windows
    themselves are `[RETENTION WINDOW]` placeholders for the operator to set
    under `[JURISDICTION]` and have reviewed by their own counsel. It asserts no
    compliance certification. See the [pack README](README.md).

**Operator:** `[LEGAL ENTITY]` · **Effective date:** `[EFFECTIVE DATE]` ·
**Version:** `[VERSION]`

## 1. The honest baseline: retention is operator-driven

The software does **not** currently apply an automatic time-to-live or expiry to
memory rows. Memory persists until an operator removes it. Do not assume data
ages out on its own — it does not. Setting and enforcing a retention window is an
**operator responsibility**.

## 2. Retention by data category

| Data | Current software behaviour | Your retention window |
| --- | --- | --- |
| Memory rows (facts, summaries, episodes, self-model, embeddings) | **No automatic TTL or expiry.** Persist until deleted by an operator action against the namespace. | `[RETENTION WINDOW]` |
| Audit store (mutating tool calls) | Pruned by a scheduled job to the **newest ~1000 rows per namespace** (`AUDIT_KEEP_PER_NS`). Older entries are dropped on prune. | `[RETENTION WINDOW]` (bounded by prune) |
| Outbox (queued / approved / sent items, with lifecycle history) | **Append-only by convention.** No automatic deletion; lifecycle transitions are kept as history. See [ADR-004](../adr/ADR-004-action-loop-send-approval.md). | `[RETENTION WINDOW]` |
| Write-ahead log (WAL) | Operational log on disk. Plaintext unless an encryption-enabled build + `EVOSQL_ENCRYPTION_KEY` are configured. | `[RETENTION WINDOW]` |
| Backups | Out of scope of the engine; whatever your backup process retains. | `[RETENTION WINDOW]` |

## 3. What "deletion" does and does not do

- Deletion is an **operator action** against the relevant memory namespace(s) in
  the data directory (`EVOSQL_DATA_DIR`). There is no scheduled erasure.
- The audit-store prune keeps only the newest ~1000 rows per namespace; it is a
  size bound, not a privacy-erasure mechanism, and it should not be relied on to
  satisfy an erasure request.
- Because there is no automatic expiry, an erasure or retention obligation must
  be met by a **manual or scripted operator procedure**. Document yours under
  `[ERASURE PROCEDURE]`.
- If the database is **not** encrypted at rest (see below), deleted rows may
  still be recoverable from disk, backups, or the WAL until those are also
  handled. Account for this in your erasure procedure.

## 4. Encryption-at-rest caveat for retained data

Whole-database encryption (AES-256-CTR page encryption) applies **only** with an
encryption-enabled build **and** an `EVOSQL_ENCRYPTION_KEY` passphrase. Without
both, retained data — the database file **and** the WAL — is **plaintext on
disk**. Even with encryption configured, page 0 is always plaintext and the
cipher provides confidentiality, **not** tamper detection. Factor this into where
and how long you retain data. See [dpa.md](dpa.md) section 5 and
[breach-response-runbook.md](breach-response-runbook.md).

## 5. Review

Review this policy at `[REVIEW INTERVAL]` and whenever connectors, providers, or
the engine's retention behaviour change.
