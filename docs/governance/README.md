# Governance Doc Pack

This directory is a **template pack**, not a finished compliance program. The
files here give a self-hoster of EvolutionDB's agent-memory layer a starting
skeleton for the privacy and data-protection paperwork a real deployment needs.
Every document is written to be completed, edited, and signed off by **your own
legal counsel and data-protection advisor**. Nothing in this pack is legal
advice, and nothing here certifies the deployment against any standard.

!!! warning "These are templates requiring your own legal review"
    The documents in this pack are scaffolding. They describe the software's
    actual data-handling behaviour honestly, but the legal framing, retention
    windows, lawful basis, breach-notification timelines, and party names are
    left as `[PLACEHOLDER]` fields for you to complete under the regime that
    applies to you. Do **not** publish any of these as-is. There are **no**
    compliance-certification claims here — this software is not "GDPR-compliant"
    or "SOC 2 certified" out of the box, and you should not represent it as such.

## What's in the pack

| File | Purpose |
| --- | --- |
| [privacy-policy.md](privacy-policy.md) | Template privacy notice — what the deployment processes, the send-approval invariant, automated processing, data-subject rights. |
| [dpa.md](dpa.md) | Data Processing Addendum scaffold — controller/processor roles, scope, sub-processors, security measures, termination. |
| [sub-processors.md](sub-processors.md) | Conditional sub-processor table — which third parties are involved depends on the connectors and model providers you enable. |
| [data-retention-policy.md](data-retention-policy.md) | Honest statement of what the software retains and what it does not auto-expire today. |
| [breach-response-runbook.md](breach-response-runbook.md) | Practical incident steps: detect, contain, assess, notify, recover, learn. |

## How to use the `[PLACEHOLDER]` fields

Each document uses bracketed `[PLACEHOLDER]` markers for facts only you can
supply. Search each file for `[` and fill in every one. The common ones:

- `[LEGAL ENTITY]` — the name of the organisation operating the deployment.
- `[JURISDICTION]` — the country/region whose data-protection law applies, and
  whose breach-notification timelines you must meet.
- `[LAWFUL BASIS]` — the legal ground you rely on to process the data.
- `[RETENTION WINDOW]` — how long you keep each category of data before deletion.
- `[DPO CONTACT]` — the contact point for data-protection enquiries (a named
  Data Protection Officer where one is required, otherwise a responsible
  contact).
- `[CONTROLLER]` / `[PROCESSOR]` — the parties to the DPA.
- `[EFFECTIVE DATE]` / `[VERSION]` — document control fields.

Do not leave any placeholder in a published document. A bracket left in the text
is a signal the document is not ready.

## One-paragraph honest summary of the deployment's data posture

EvolutionDB's agent-memory layer ingests data from the connectors you choose to
enable (messages, calendar events, source code, documents) and derives memory
records, summaries, and embeddings from them. PII masking is **opt-in and
field-level**, not on by default: at rest it depends on each connector calling
`protect_record()`, at retrieval on `EVOSQL_PII_RETRIEVAL`, and on the outbound
path to a model provider it masks **only** when `EVOSQL_PII_EGRESS=on` — the
default is off, so enrichment text reaches the model provider unmasked unless you
turn egress masking on. Whole-database encryption at rest (AES-256-CTR page
encryption) exists **only** with an encryption-enabled build **and** an
`EVOSQL_ENCRYPTION_KEY` passphrase; without both, the database file and the
write-ahead log are **plaintext on disk**, and even with it page 0 is always
plaintext and CTR provides confidentiality but **not** tamper detection. The
agent never sends anything on its own (see [ADR-004](../adr/ADR-004-action-loop-send-approval.md)):
it drafts and queues, a human approves, and delivery is a dry-run unless
explicitly opted in. Key rotation, per-tenant row-level security, engine-level
masking SQL, and reliable person-name redaction are roadmap items, not shipped.
Which third-party sub-processors are involved is entirely a function of which
connectors and model providers you enable; several connectors are local-only and
involve no sub-processor at all. Read the documents in this pack against this
posture, fill in the placeholders, and have them reviewed before you rely on
them.

## Related

- [ADR-004 — Action Loop / Send-Approval Gate](../adr/ADR-004-action-loop-send-approval.md) — the send invariant referenced throughout this pack.
- [ADR-002 — Agent-memory roadmap](../adr/ADR-002-agent-memory-platform-roadmap.md) — context on the memory platform.
