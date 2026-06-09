# ADR-004: Action Loop — Send/Approval Gate

## Status
Accepted (2026-06-09)

## Context

The personal-assistant layer shipped read-only and advisory:

- **read** — connectors (gmail/teams/outlook/…) ingest into EvolutionDB with
  strictly read scopes (`gmail.readonly`, etc.). The README guarantee is explicit:
  *"the package only requests `gmail.readonly` — it cannot send mail"*.
- **understand** — `open_loops` (who's waiting on me), `self_model` (about-me),
  `daily_brief` (morning standup).
- **suggest** — `suggest_reply` drafts a reply, grounded in the thread + the
  self-model + the language preference, and returns the draft.

Everything stopped at *suggestion*. The assistant could say "Ulaş is waiting,
here's a draft" but could not act on it. To become an agent (not just a memory
backend for other agents) it needs a path from a drafted reply to a sent one —
**without** ever sending something the user didn't approve, and **without**
silently widening the read-only blast radius of the connectors.

This is the dangerous step: sending a message is outward-facing and irreversible.
A wrong auto-send is a real-world mistake (a half-finished reply to a customer),
not a recoverable DB write. So the design question is not "how do we send" but
"how do we make sending **impossible by default** and **gated by an explicit human
act** when enabled".

## Decision

Introduce an **outbox** with a human-in-the-loop state machine, and keep the
actual transport behind two independent locks. The connectors stay read-only;
sending is an opt-in capability the operator turns on deliberately.

### The loop

```
read ─▶ understand ─▶ suggest_reply ─▶ queue_reply ─▶ approve_send ─▶ (transport)
                                          │                 │
                                          ▼                 ▼
                                      pending           reject_reply ─▶ rejected
```

### State machine (`outbox.py`)

```
pending ──approve_send──▶ sent       (a transport delivered it)
    │              └─scheduled──▶ sent   (undo window elapsed, flush delivered)
    │                 └─▶ approved   (dry-run / no transport — held, retriable)
    ├──reject────────────▶ rejected
approved ──approve_send──▶ sent       (retry once a transport exists)
scheduled ──reject──▶ rejected        (cancelled inside the undo window)
```

**Undo window (trust layer).** With `EVOSQL_SEND_UNDO_SECONDS > 0`, `approve_send`
does not deliver immediately — it moves the item to `scheduled` with a
`send_after` timestamp and returns. A `reject` inside the window cancels it; once
the window elapses, `flush_scheduled` (the `outbox_flush` scheduler job, every
30s) delivers it. This is the one practical guard against an irreversible
mistake: a few seconds to take it back. Default is 0 (immediate), preserving the
original behavior. A pre-send `preview(item)` exposes exactly what will go out.

Items live in a per-namespace `<prefix>_outbox` MEMORY STORE, each carrying its
body, recipient, channel, status, and a `history` of timestamped transitions
(the audit trail).

### Security boundaries (the invariants)

1. **Nothing auto-sends.** `queue_reply` only ever creates a `pending` item.
   The *single* code path that can deliver is `approve_send`. An assistant model
   cannot send by queuing; a human (or the user via the model, explicitly) must
   approve.
2. **Dry-run by default — two locks.** `approve_send` delivers only when
   **both** (a) `EVOSQL_SEND_ENABLED` is set, and (b) a transport is registered
   for the channel. With either missing, delivery is a dry-run: the item moves to
   `approved` (held, retriable), records *why* it didn't send, and nothing leaves
   the process. The default state has neither lock open.
3. **Connectors stay read-only.** Sending is NOT added to the ingest connectors'
   scope. A send transport is a separate module with its own opt-in write-scope
   OAuth (`gmail.send`), enabled only when the operator asks for it. The
   `gmail.readonly` guarantee holds unless someone deliberately turns on sending.
4. **Idempotency.** `approve_send` on an already-`sent` item is a no-op that
   returns the existing result — never a second delivery. A transport exception
   holds the item as `approved` (retriable) rather than losing it or
   double-sending.
5. **No duplicate sends.** `queue_reply` upserts by `loop_key`: re-drafting a loop
   replaces its pending item instead of stacking a second send for the same thread.
   Additionally `EVOSQL_SEND_DEDUP_SECONDS > 0` refuses to queue a reply to a loop
   already answered within that window (raised at queue time, so no retry loop) —
   a re-run can't double-reply. Default 0 = off.
6. **Audit.** Every transition is timestamped in the item's `history`; the store
   is queryable like any other (`SELECT … FROM __mem_<prefix>_outbox`).
   `outbox.audit()` / `outbox stats` surface the full trail and a per-hour
   health view (`outbox audit` CLI).
7. **Rate limit (backpressure).** `EVOSQL_SEND_RATE_PER_HOUR > 0` caps real sends
   per namespace per rolling hour. Over the cap, a send is HELD (not dropped, not
   doubled) and retried later — a runaway loop can't blast a mailbox. Default 0 =
   unlimited.

### MCP surface

`queue_reply(loop_key, body, [to])`, `list_pending_replies`, `approve_send(item_id)`,
`reject_reply(item_id)`. `approve_send` is the only tool that can send, and its
description tells the host model to call it only with the user's explicit
go-ahead.

### Transport seam

`outbox.TRANSPORTS` maps `channel → callable(item) -> result`. It is empty by
default. A real sender (e.g. Gmail `users.messages.send`) registers here, gated by
`EVOSQL_SEND_ENABLED` + its own send-scope auth. The MIME building and the API
call are unit-tested with an injected fake sender, so no test (and no default
deployment) can emit a real message.

## Consequences

- The assistant can now complete an action **with a human in the loop**, while the
  safe default (read + suggest, no send) is unchanged for everyone who doesn't opt
  in.
- "Do we have an agent?" — the full `read → suggest → queue → approve → send` loop
  exists. The only remaining real-world step is enabling a transport, which is a
  deliberate operator action with its own consent, not a code default.
- Wiring each new channel (Teams, Outlook) is additive: implement a transport,
  register it, document its write scope. No change to the state machine.

## Alternatives considered

- **Auto-send on high confidence** — rejected. The cost of a wrong outbound
  message is asymmetric; confidence scoring does not justify removing the human.
- **Send directly from `suggest_reply`** — rejected. Collapsing suggest and send
  removes the review/approve gate, which is the whole point.
- **Add `gmail.send` to the connector scope** — rejected. It would silently break
  the documented read-only guarantee for every existing user.
