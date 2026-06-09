# Changelog

All notable changes to `mcp-server-evolutiondb` are documented here.

## 1.11.0 — Personal-assistant action loop

The server grows from read-only memory + suggestions into a full, human-in-the-loop
**action loop**: `read → understand → suggest → queue → approve → send → resolve`.

### Added
- **`suggest_reply`** tool — drafts a reply for an open loop, grounded in the
  thread, the self-model, and the language preference. Returns both the draft and
  the thread transcript so the host model can refine it. (The draft prompt refuses
  to fabricate facts it doesn't have and matches the other person's language.)
- **Send/approval loop (outbox)** with the `queue_reply`, `list_pending_replies`,
  `approve_send`, `reject_reply`, `outbox_audit`, and `send_scheduled` tools, plus
  an `outbox` CLI (`list | show | approve | reject | flush | audit`). Nothing
  auto-sends; `approve_send` is the only delivery path.
- **Send transports** for five channels — gmail, outlook (Graph), teams (Graph),
  slack, imessage (osascript). Registered only via `EVOSQL_SEND_CHANNELS` and gated
  by `EVOSQL_SEND_ENABLED`; real-account verified on iMessage, Gmail, Outlook, Teams.
- **Trust layer** (all opt-in, default off): undo window
  (`EVOSQL_SEND_UNDO_SECONDS` → `scheduled` state + `outbox_flush` job), pre-send
  `preview`, rate limit (`EVOSQL_SEND_RATE_PER_HOUR`, backpressure), dedup
  (`EVOSQL_SEND_DEDUP_SECONDS`), and a queryable audit trail.
- **Slack and iMessage** added as open-loop sources (alongside gmail/teams/outlook);
  a sent reply now closes its open loop immediately.
- One-command brief flow: `brief --queue [N]` drafts + queues, `brief --approve`
  delivers (dry-run unless sending is enabled).
- **`evolutiondb-send-setup`** onboarding command — reports the current send
  config and, for the channels you pick, prints the exact env block (with safe
  default undo/rate/dedup guards) plus the per-channel auth step. Writes nothing;
  sending stays off until you set the env and approve each reply.
- **`evolutiondb-outbox`** console script for the outbox CLI
  (`list | show | approve | reject | flush | audit`).
- `send` optional dependency group (`pip install mcp-server-evolutiondb[send]`) for
  the Teams transport's `msal`.

### Safety
Connectors stay read-only by default; sending is a per-channel opt-in scope
(`gmail.send` / `Mail.Send` / `ChatMessage.Send` / `chat:write`) the operator
enables deliberately. See `docs/adr/ADR-004-action-loop-send-approval.md`.

### Fixed
- iMessage transport used the reserved Messages class name `buddy` as a variable
  (osascript compile error) — surfaced by a real send.
- Gmail transport read the wrong env vars (`EVOSQL_GMAIL_*` instead of
  gmail-sync's `GOOGLE_CLIENT_ID` / `GOOGLE_CLIENT_SECRET` / `GMAIL_TOKEN_CACHE`).
- `open_loops` mislabeled the counterparty of an `awaiting_them` loop as the user.

## 1.10.0 and earlier

Long-term memory platform: `save_memory` / `search_memory` (hybrid
semantic + keyword) / `feedback` / `expand_episode` / `recent_memories` /
`forget` / `list_tags` / `show_profile` / `restore_memory` / `set_language` /
`daily_brief`, a background scheduler (embeddings, entities, salience, profile,
episodes, decay, consolidation, open-loops, self-model), and multi-source sync
connectors. See the project README and ADR-002.
