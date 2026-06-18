# Privacy Policy (Template)

!!! warning "Template — complete and review before publishing"
    This is a starting template for the privacy notice of a self-hosted
    EvolutionDB agent-memory deployment. It describes the software's actual
    behaviour honestly, but the legal framing is left as `[PLACEHOLDER]` fields
    for **your own legal review**. It makes no compliance-certification claim.
    See the [pack README](README.md) for how to fill in placeholders.

**Operator:** `[LEGAL ENTITY]`
**Effective date:** `[EFFECTIVE DATE]`
**Version:** `[VERSION]`
**Applicable regime:** `[JURISDICTION]`

## 1. Who we are

`[LEGAL ENTITY]` ("we", "us") operates a self-hosted deployment of EvolutionDB's
agent-memory layer. This notice explains what personal data the deployment
processes, why, and the choices available to data subjects. For data-protection
enquiries, contact `[DPO CONTACT]`.

## 2. What data the deployment processes

The deployment ingests data **only from the connectors the operator chooses to
enable**, and derives memory from it. Depending on the enabled connectors, this
may include:

- **Messages and email** — message bodies, subjects, sender/recipient
  identifiers, and timestamps (for example from Gmail, Outlook, Teams, Slack,
  iMessage).
- **Calendar data** — event titles, times, attendees, and descriptions.
- **Code and project data** — repository content, issues, pull requests, and
  work items (for example from GitHub or Azure DevOps).
- **Documents and notes** — pages and notes (for example from Notion or Apple
  Notes).
- **Browsing and media history** — browser history and watched-video metadata,
  where those connectors are enabled.
- **Derived memory** — summaries, extracted facts, episodes, embeddings
  (vectors), and an agent self-model generated from the above.

Connector read scopes are **read-only by default** (for example
`gmail.readonly`); any send scope is a separate, deliberate opt-in. Which
connectors are active, and therefore which categories above apply, is an operator
decision — see [sub-processors.md](sub-processors.md).

### 2.1 PII masking is opt-in, not on by default

The deployment can mask personal identifiers, but masking is **opt-in and
field-level**, and applies at three distinct points:

- **At rest** — masking happens per connector only where that connector calls
  `protect_record()`. Fields not routed through it are stored unmasked.
- **At retrieval** — `EVOSQL_PII_RETRIEVAL` (`off` / `viewer` / `all`) controls
  whether text fields returned by read tools are masked. The default is `off`.
- **On the outbound path to a model provider** — `EVOSQL_PII_EGRESS` controls
  whether enrichment text is masked **before it leaves the host for the model
  provider**. The default is `off`, which means **enrichment text reaches the
  model provider unmasked** unless the operator sets `EVOSQL_PII_EGRESS=on`.
  When egress masking is on, it fails closed (it errors rather than sending
  unmasked text if the masker is unavailable).

Person-name and date-of-birth detection ship **disabled** (heuristic only).
Reliable person-name redaction is a roadmap item, not a shipped guarantee.
Operators relying on masking for a lawful basis must verify their configuration
and not assume the defaults mask anything.

## 3. Lawful basis

We process the data described above on the basis of `[LAWFUL BASIS]`. Where
processing relies on consent, data subjects may withdraw consent as described in
section 7.

## 4. How the data is used, including automated processing

- **Memory and retrieval** — the data is stored and indexed so the assistant can
  recall context on request.
- **Automated enrichment (LLM)** — text is sent to a model provider to generate
  summaries, suggested replies, and the self-model. Unless `EVOSQL_PII_EGRESS=on`
  (see 2.1), this outbound text is **unmasked**. The model provider involved
  depends on configuration — see [sub-processors.md](sub-processors.md).
- **Agent loop** — the assistant drafts and queues actions (for example reply
  drafts) for review.

### 4.1 The send-approval invariant (automated decision-making safeguard)

The agent does **not** take outward-facing actions on its own. Per
[ADR-004](../adr/ADR-004-action-loop-send-approval.md), the only code path that
can deliver a message is an explicit human approval (`approve_send`). Drafting
and queueing never sends. Delivery is a **dry-run by default**: it requires both
that sending is explicitly enabled **and** that a transport is registered;
otherwise the item is held, not sent. This means no automated outbound message
is delivered without a human in the loop. This is a favourable safeguard against
solely automated decisions with significant effect; operators should still
assess whether the LLM enrichment itself constitutes automated processing under
`[JURISDICTION]` and document it accordingly.

## 5. Retention

Retention is **operator-driven**. The software does not currently apply an
automatic time-to-live or expiry to memory rows. The audit store is pruned to the
newest rows per namespace by a scheduled job. See
[data-retention-policy.md](data-retention-policy.md) for the full, honest
statement and the `[RETENTION WINDOW]` the operator must set.

## 6. Security of the data

Security measures are stated honestly in [dpa.md](dpa.md), section "Security
measures". In summary: whole-database encryption at rest exists **only** with an
encryption-enabled build **and** an `EVOSQL_ENCRYPTION_KEY` passphrase; without
both, the database file and write-ahead log are **plaintext on disk**. Even with
encryption configured, page 0 is always plaintext and the cipher provides
confidentiality but **not** tamper detection. Operators must not represent the
deployment as encrypted at rest unless both conditions hold.

## 7. Data-subject rights

Subject to `[JURISDICTION]` and the applicable lawful basis, data subjects may
have rights to access, rectify, erase, restrict, port, or object to processing of
their personal data, and to withdraw consent. To exercise a right, contact
`[DPO CONTACT]`. We will respond within `[RESPONSE TIMELINE]`. Note that erasure
in this deployment is an operator action against the relevant memory namespace;
see [data-retention-policy.md](data-retention-policy.md).

## 8. Sub-processors and international transfers

The third parties involved in processing depend entirely on which connectors and
model providers the operator enables; several connectors are **local-only** and
involve no third party. The current conditional set, and any cross-border
transfer implications, are listed in [sub-processors.md](sub-processors.md).

## 9. Changes to this notice

We will update this notice as the deployment changes and record the new
`[VERSION]` and `[EFFECTIVE DATE]` above.

## 10. Contact

Data-protection enquiries: `[DPO CONTACT]`.
Operator: `[LEGAL ENTITY]`, `[CONTACT ADDRESS]`.
