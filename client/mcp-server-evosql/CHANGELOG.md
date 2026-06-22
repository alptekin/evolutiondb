# Changelog

All notable changes to `mcp-server-evolutiondb` are documented here.

## 1.17.0 — Multi-tenant SaaS: tenancy backends, governance + operator control plane

### Added
- **Per-tenant spawn backends**: `TenantSupervisor` (process-per-tenant) and
  `KubernetesTenantBackend` (pod-per-tenant — a StatefulSet + Service + Secret +
  PVC each), duck-type compatible behind `TenantRouter` (shared + dedicated
  tiers). Both expose `backup` / `restore` / `rotate_key`; the Kubernetes path is
  proven end-to-end on a local `kind` cluster.
- **Operator control plane** (`evosql-control-plane`): an operator-authenticated
  (OIDC allowlist + static token) web UI + JSON API — provision / suspend /
  resume / set-tier / delete, issue tokens, DSAR export+erase, OAuth-consent
  revoke, connected-accounts list/revoke, at-rest **KMS key rotation**,
  **backup/restore**, and a **per-tenant connector allow-list**.
- **Per-tenant connector allow-list** (`connectors_allowed`): an operator
  restricts which connectors a tenant may use; enforced in the connector token
  store (a disallowed connector cannot establish a token and reads inert) plus
  immediate revoke of disallowed connections.
- **Governance**: DSAR (subject data export + erase with receipts), automated
  at-rest key rotation (KMS-provider-agnostic, two-phase fail-closed), and a
  no-train / data-residency egress gate.

### Changed
- **Engine fails closed on a wrong/missing encryption key**: the server exits
  non-zero before binding any listener when an existing encrypted data file
  cannot be decrypted (previously the init failure was swallowed and the port
  bound anyway). A wrong-key start is now observably "down" — the invariant the
  Kubernetes readiness probe and the supervisor's pending-key recovery rely on.

Everything here is OFF by default — single-user / non-tenant deployments are
byte-for-byte unchanged; multi-tenancy activates only when `EVOSQL_TENANT_SECRET`
is set.

## 1.16.0 — Provider-agnostic LLM + searchable history + self-brief
- Provider-agnostic chat resolver (`llm.py`: Anthropic default + OpenAI-compatible
  + Ollama), the `claude-session-sync` connector (past conversations become
  searchable), and scheduled self-delivery of the morning brief. All opt-in.

## 1.15.0 — PII retrieval masking + N-approver
- Role-based PII masking of read-tool returns (`pii_gate`), the ADR-004
  N-approver quorum for sends, and the `azure-devops-sync` connector.

## 1.14.0 — Multi-tenant business platform (phases 0–4)
- The multi-tenant program: per-request `Identity` + DB-level tenant isolation,
  `meeting_brief` + GitHub/Azure-DevOps open-loops, Claude code-review drafted to
  a human-approved PR comment, release tools, tenant audit + retention,
  templates, and the rule engine. All opt-in.

## 1.13.1 — Locale layer phase 2 (language-neutral source)

### Changed
- Extended the runtime locale layer to the remaining modules, so **no source
  `.py` file contains any natural-language literal** any more (the only
  language data is in `locales/*.json`):
  - **salience** arousal/urgency vocabulary, **profile** stopwords, **graph**
    predicate verb stems, and **gist** tokenization + the optional morphological
    stemmer are now driven by the active input locales (`locales.heuristics()`);
    Unicode-aware `\w` replaced the per-language letter classes.
  - **episodes** extractive summary template and the **outbox** CLI output are
    locale-driven (rendered in the user's language preference, default English).
  - Replaced the Turkish "Adım N" roadmap-step comments with "Step N" and
    anglicized the remaining docstring example names.

Behavior is unchanged for a Turkish user (the Turkish data lives in `tr.json`,
active by default via `EVOSQL_LOCALES=en,tr`); the code is simply language-neutral.

## 1.13.0 — Runtime i18n locale layer (phase 1)

### Added
- **`locales/` resource layer + `locales.py` loader.** All natural-language
  data — UI strings and detection heuristics — now lives in per-language JSON
  resources (`en.json`, `tr.json`), loaded at runtime. The Python code is
  language-neutral. Two axes are separated: the OUTPUT language (the brief is
  rendered in the user's language preference, default English) and the INPUT
  languages whose heuristics parse incoming messages (union of the active input
  locales, default `en,tr`, override with `EVOSQL_LOCALES`).

### Changed
- **brief / suggest**: all output strings are now locale-driven (default
  English). The brief renders in the user's `/language` preference — so a
  Turkish user still gets a Turkish brief, driven by runtime data rather than
  literals in the code.
- **open_loops / entities**: the question / promise / closure / automated-sender
  detectors and the person / org / honorific / id patterns are compiled from the
  active input locales instead of being hardcoded — Turkish message parsing is
  unchanged, but no language literals remain in these modules.

### Note
This is phase 1 (the assistant brief + open-loop pipeline). Remaining
language-specific data in other modules (profile stopwords, salience arousal
terms, graph predicate keywords, gist tokenization, episodes/outbox CLI output)
will move to the same locale layer in follow-ups.

## 1.12.4 — Language-neutral code

### Changed
- Removed hardcoded natural-language (non-English) optimizations from the code:
  the brief's automated-sender content filter is now language-neutral (one-time
  / OTP / verification codes + unsubscribe footers); the heavy lifting stays in
  the language-neutral sender heuristic (ALL-CAPS brand ids and numeric
  short-codes). All test fixtures, code examples and comments use fictional,
  English placeholders. Detected-language behavior continues to come from the
  user's data at runtime, not from literals in the code.

## 1.12.3 — Brief: filter automated SMS/brand senders

### Fixed
- The daily brief surfaced automated SMS / notification senders as "waiting on
  you". The two-way *"did I ever reply"* filter was applied only to
  gmail/outlook, so automated senders arriving via iMessage (brand name or
  short-code in `chat`, never replied to) leaked in. `_is_auto` is now
  channel-aware: it reads the sender from `from`/`chat`/`handle`, flags ALL-CAPS
  brand ids and short numeric SMS short-codes, and flags automated notification
  content (one-time / OTP / verification codes, unsubscribe footers). Real
  proper-case contacts and real-phone first texts are not affected, so genuine
  loops still surface. (Content markers were made language-neutral in 1.12.4.)

## 1.12.2 — Security hardening

A focused security audit of the personal-assistant agent. All fixes are
test-gated (full server-free suite green, +11 security regressions).

### Security
- **SQL injection (critical)**: `_e()` doubles quotes but not backslashes, and
  the EVO lexer treats `\'` as an escaped quote, so a caller-supplied memory
  key/id ending in a backslash could escape its SQL string literal — via
  `save_memory`'s `derived_from` (an IN-list of two keys) this enabled
  cross-namespace reads, and `expand_episode` / `feedback` / `forget` /
  `restore_memory` allowed predicate manipulation or statement DoS. Every
  externally-supplied key/id is now allow-listed (`_valid_key`) against the
  strict server-key charset before it is inlined.
- **HTTP transport**: constant-time bearer comparison (`hmac.compare_digest`);
  the server now refuses to bind a non-loopback address without
  `EVOSQL_MCP_AUTH_TOKEN` (fail-closed, was a warning); CORS only reflects
  allow-listed origins.
- **Embedded auto-fetch**: the prebuilt-binary source is pinned to `https` on
  the official GitHub host and the version format is validated, so a stray
  `EVOSQL_SERVER_RELEASE_BASE` can no longer make the server fetch and execute
  an arbitrary binary. (The sha256 is still verified before the binary is made
  executable.)
- **OAuth proxy**: the discovery / redirect origin is derived from
  `EVOSQL_PUBLIC_ORIGIN` (or an `EVOSQL_OAUTH_ALLOWED_HOSTS` allow-list) instead
  of the attacker-controllable `Host` / `X-Forwarded-Proto` headers; access
  tokens now expire after `EVOSQL_OAUTH_TOKEN_TTL_DAYS` (default 90, was 1 year).
- **ReDoS**: the email regexes (the inbound `from` header in the outbox, and
  every saved fact during entity extraction) are de-ambiguated and
  length-bounded, and extraction input is capped — an 80 KB adversarial value
  went from tens of seconds (blocking the global execution lock) to under 50 ms.
- **iMessage**: the recipient handle and message body are passed to `osascript`
  via the child environment, not the command line (argv is world-readable).

## 1.12.1 — Code-review hardening (19 fixes)

Adversarially-verified, bug-focused review of the personal-assistant agent. No
SQL injection was found; all fixes are test-gated (full server-free suite green,
7 new regression tests).

### Fixed
- **Entity catalog corruption (critical)**: two different people sharing a first
  name (`John Doe` / `John Smith`) were fused into one entity, corrupting the
  graph, episode and salience layers built on it. Folding a bare first-name
  reference (`John` → `John Doe`) is preserved via an asymmetric, ambiguity-aware
  first-name
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
