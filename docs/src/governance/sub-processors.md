# Sub-processors (Conditional)

!!! warning "Template — the actual set depends on what you enable"
    This is a **conditional** list, not a fixed one. EvolutionDB's agent-memory
    layer involves a third-party sub-processor **only** for the model providers
    and external-API connectors **you choose to enable**. Several connectors are
    **local-only** and involve no sub-processor at all. Complete the
    `[PLACEHOLDER]` fields and confirm the actual set for your deployment with
    your own legal review. This page asserts no compliance certification. See the
    [pack README](README.md) and [dpa.md](dpa.md) section 6.

The table below marks each potential sub-processor **OPTIONAL** and notes the
condition under which it becomes involved. A provider is a sub-processor **only
when the corresponding capability is enabled** in your configuration.

## Model providers (LLM enrichment)

Enrichment text is sent to the configured model provider. Unless
`EVOSQL_PII_EGRESS=on`, that outbound text is **unmasked** (see
[privacy-policy.md](privacy-policy.md), section 2.1).

| Provider | Status | Condition / notes |
| --- | --- | --- |
| Anthropic | OPTIONAL — default model provider | Involved when the default Anthropic model is used for enrichment / the agent loop. |
| OpenAI | OPTIONAL | Involved only if configured for embeddings. |
| Google (Gemini) | OPTIONAL | Named/supported, **not wired by default**. Involved only if explicitly configured. |
| Microsoft (Azure OpenAI) | OPTIONAL | Named/supported, **not wired by default**. Involved only if explicitly configured. |
| Ollama | LOCAL — no egress | Runs locally; **not a sub-processor** (no data leaves the host). |

## External-API connectors (data leaves the host to the provider's API)

These connectors read from a third-party API, so that provider processes the
relevant data when the connector is enabled. Read scopes are **read-only by
default**; send scopes are a separate opt-in (see
[ADR-004](../adr/ADR-004-action-loop-send-approval.md)).

| Provider | Status | Connector(s) / condition |
| --- | --- | --- |
| Google | OPTIONAL | Gmail, Calendar, YouTube connectors. |
| Microsoft | OPTIONAL | Outlook, Teams connectors. |
| Slack | OPTIONAL | Slack connector. |
| GitHub | OPTIONAL | GitHub connector. |
| Notion | OPTIONAL | Notion connector. |
| Azure DevOps | OPTIONAL | Azure DevOps connector. |

## Local-only connectors (no sub-processor)

These connectors read data **on the host only**. Enabling them involves **no**
third-party sub-processor and triggers **no** outbound transfer of the connected
data on its own (note: that data may still reach a model provider via enrichment
if you enable LLM features and have egress masking off — see the model-provider
table above).

| Source | Status | Notes |
| --- | --- | --- |
| iMessage | LOCAL-ONLY | Read locally; no sub-processor. |
| Apple Notes | LOCAL-ONLY | Read locally; no sub-processor. |
| Browser history | LOCAL-ONLY | Read locally; no sub-processor. |
| Claude sessions | LOCAL-ONLY | Read locally; no sub-processor. |

## How to finalise this list for your deployment

1. Strike out every row whose capability you have **not** enabled.
2. For each remaining model provider and external-API connector, add the
   provider's legal entity, the data it processes, its location, and the
   transfer mechanism — see `[TRANSFER MECHANISM]` and
   [dpa.md](dpa.md) section 10.
3. Record the date of this list as `[EFFECTIVE DATE]` and version it.
4. Follow the change-notice process in [dpa.md](dpa.md) section 6.1 whenever you
   enable a new connector or provider.

**Effective date of this list:** `[EFFECTIVE DATE]` · **Version:** `[VERSION]`
