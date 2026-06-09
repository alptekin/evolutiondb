# evolutiondb-slack-sync

Pull Slack DMs, group DMs, and the channels you're a member of into
EvolutionDB long-term memory. The MCP server then surfaces them
through `search_memory` so an AI assistant can answer "what did
Ahmet say about the database migration last week?" weeks later.

## Setup

1. Visit https://api.slack.com/apps → "Create New App" → "From scratch".
2. Under "OAuth & Permissions", add the **User Token Scopes** listed
   in `.env.example`. They're all read-only:
   `channels:history`, `channels:read`, `groups:history`,
   `groups:read`, `im:history`, `im:read`, `mpim:history`,
   `mpim:read`, `users:read`.
3. Install the app to your workspace.
4. Copy the **User OAuth Token** (starts with `xoxp-`) into your
   `.env` as `SLACK_USER_TOKEN`.

No workspace-admin approval is needed for user-scope tokens.

Sending is **opt-in** and off by default. The outbox action loop's approve_send
only posts a Slack reply when sending is enabled (`EVOSQL_SEND_ENABLED=1`,
`EVOSQL_SEND_CHANNELS=slack`) AND the `SLACK_USER_TOKEN` additionally carries the
`chat:write` scope (see ADR-004). Omit `chat:write` to stay strictly read-only.

## Install

```
pip install evolutiondb-slack-sync
# or, from this repo:
pip install -e client/slack-sync
```

## Run

```bash
# First run — pull the last three days, then exit.
evolutiondb-slack-sync --once --since 3d

# Daemon mode.
evolutiondb-slack-sync --interval 600

# Auth/scope check, no DB writes.
evolutiondb-slack-sync --once --dry-run
```

Each pass prints a one-line JSON summary:

```
{"ok": true, "channels": 28, "messages": 412, "replies": 96, "skipped": 14, "errors": 0}
```

## What gets indexed

| Record               | Key shape                          |
|----------------------|------------------------------------|
| A top-level message  | `slack_msg_<channel>_<ts>`         |
| A thread reply       | `slack_msg_<channel>_<ts>`         |

Keys carry the Slack `ts` which is unique per channel, so re-sync
UPSERTS instead of duplicating. Each record carries the channel
display name, sender display name, and `thread_ts` if it lives
inside a thread, so `search_memory` can filter the way you'd want.

## What's not indexed

- `channel_join` / `bot_add` system messages — pure noise.
- Files / images — the text caption is captured, the binary isn't.
- Reactions — too high-volume relative to recall value.

## Rate limits

Slack throttles `conversations.history` at Tier 3 (50+ req/min per
workspace). The client honours `Retry-After` on 429 responses and
retries exactly once. For very active workspaces with hundreds of
channels, increase `SLACK_POLL_INTERVAL` rather than running tighter
loops.

## Privacy

The user-scope token reads the same conversations the human can see
— no privilege escalation. But once a message lands in EvolutionDB,
anyone with the matching `MCP_USER_ID` namespace can recall it via
`search_memory`. Confirm with your employer that piping work-Slack
into a personal memory store is acceptable before flipping it on.
