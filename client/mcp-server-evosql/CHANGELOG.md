# Changelog

All notable changes to `mcp-server-evolutiondb` are documented here.

## 1.12.1 — Code-review hardening (19 fixes)

Adversarially-verified, bug-focused review of the personal-assistant agent. No
SQL injection was found; all fixes are test-gated (full server-free suite green,
7 new regression tests).

### Fixed
- **Entity catalog corruption (critical)**: two different people sharing a first
  name (`Ali Veli` / `Ali Can`) were fused into one entity, corrupting the graph,
  episode and salience layers built on it. Honorific folding (`Ahmet bey` →
  `Ahmet Yılmaz`) is preserved via an asymmetric, ambiguity-aware first-name
  index; `_norm` also no longer mangles Turkish dotless-ı.
- **Silent memory truncation**: a long `save_memory` fact is now trimmed-and-
  flagged via `_fit_payload` instead of being silently cut by the engine's 8 KB
  value buffer (which corrupted the row while `save_memory` reported success).
- **OAuth proxy**: rejects public clients with empty / non-https `redirect_uris`
  and requires an exact registered-URI match (open-redirect / auth-code leak);
  caps + sweeps in-memory and persisted state; blocks auth-code replay.
- **Embedded mode**: the spawned `evosql-server` is now reaped on SIGTERM/SIGINT
  (no orphan on `docker stop` / systemd stop); the lazy first-connect is locked
  so concurrent first HTTP requests can't double-spawn it.
- **Decay** no longer clobbers a concurrent `save()` (re-reads before patching).
- **Graph boost** reaches rows saved after the mention index first warms.
- **Embedding migration** between two OpenAI models is no longer a silent no-op.
- **Identity merge** folds all matched identities instead of orphaning some.
- **Open-loop direction** isn't inverted when a single conversation makes the
  "me" detection ambiguous.
- **Setup** writes the operator's real connection settings (not admin/admin).
- Plus minor fixes: UTC-naive timestamps, graph weight accumulation, `www.`
  prefix stripping, search query tokenization, scheduler audit-log growth, and
  reconcile no longer passing an opaque entity id to the LLM adjudicator.

## 1.12.0 — Embedded mode auto-fetches its binary

### Added
- **Zero-download embedded mode**: when `EVOSQL_EMBEDDED=1` and no `evosql-server`
  binary is found, the server now **auto-fetches** the prebuilt binary for this
  OS/arch from the `server-v*` GitHub release, verifying its `.sha256`, and caches
  it per-user. So `pip install mcp-server-evolutiondb` + `EVOSQL_EMBEDDED=1` is a
  truly Docker-free, binary-free start. Disable with `EVOSQL_EMBEDDED_AUTOFETCH=0`;
  pin the version with `EVOSQL_SERVER_VERSION`.
- **`evolutiondb-embedded-fetch`** console script to pre-download the binary.

Verified end-to-end: the real `evosql-server-macos-arm64` asset fetched from the
`server-v3.0.0` release, checksum-verified, spawned, queried, and closed.

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
- One-command brief flow via the `evolutiondb-brief` console script:
  `--queue [N]` drafts + queues, `--approve` delivers (dry-run unless enabled).
- **`evolutiondb-send-setup`** onboarding command — reports the current send
  config and, for the channels you pick, prints the exact env block (with safe
  default undo/rate/dedup guards) plus the per-channel auth step. Writes nothing;
  sending stays off until you set the env and approve each reply.
- **`evolutiondb-outbox`** console script for the outbox CLI
  (`list | show | approve | reject | flush | audit`).
- `send` optional dependency group (`pip install mcp-server-evolutiondb[send]`) for
  the Teams transport's `msal`.
- **Zero-Docker embedded mode** (`EVOSQL_EMBEDDED=1`): on first connect, if nothing
  is serving `EVOSQL_HOST:PORT`, the server spawns a local EvolutionDB against a
  per-user data dir and reaps it on exit (an external/shared instance still wins).
  Binary resolved from `EVOSQL_SERVER_BINARY` → bundled (`[embedded]` wheel) →
  PATH → dev checkout. See ADR-003.

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
