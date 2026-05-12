# evolutiondb-teams-sync

Stream Microsoft Teams 1:1 and group chat messages into EvolutionDB so
they become part of the long-term memory the MCP server already
exposes to Claude, ChatGPT, Gemini, and Copilot. After running the
sync, "what did Ahmet say last week about the release plan" becomes a
normal `search_memory` call from any MCP-aware client.

Channel messages, meeting transcripts, and call recordings are out of
scope. They need higher-privilege Graph permissions that require
tenant admin consent — this client deliberately stays inside scopes a
user can self-consent to.

---

## Before you enable this

A few non-technical things to settle first:

- **Other people's words land in the memory too.** A 1:1 chat or group
  chat captures everyone's messages, not just yours. Some workplaces
  treat external archiving of colleagues' messages as a policy
  violation independent of the technical access controls. This is an
  HR / legal question, not a permissions question.
- **Microsoft sees the request.** Every Graph API call is logged
  against your account in the tenant audit log. Your IT team can see
  that an app is reading your chats.
- **Token revocation is one click.** You can pull the plug at any time
  from `https://myaccount.microsoft.com/applications` — the sync
  daemon's next call gets a `401` and stops.

If those are fine in your environment, continue.

---

## One-time setup

### 1. Register an Entra ID app

1. Open https://portal.azure.com → **Microsoft Entra ID** → **App
   registrations** → **New registration**. (Microsoft renamed Azure
   Active Directory to Microsoft Entra ID in 2023; legacy docs that
   say "Azure AD" mean the same thing.)
2. Name: `EvolutionDB Memory Sync` (or anything you like).
3. Supported account types: **Accounts in this organizational
   directory only** (single tenant) is enough.
4. Redirect URI: leave blank — the device-code flow doesn't use one.
5. After registration, open **Authentication** → enable **Allow public
   client flows** → save.
6. Open **API permissions** → **Add a permission** → **Microsoft
   Graph** → **Delegated permissions** → tick:
   - `Chat.Read`
   - `User.Read`
   - `offline_access`
7. Copy the **Application (client) ID** and the **Directory (tenant)
   ID** from the app's Overview page.

None of these scopes require tenant admin consent — you can grant
them to yourself the first time you log in.

### 2. Configure the sync

```bash
cd client/teams-sync
cp .env.example .env
$EDITOR .env   # paste AZURE_TENANT_ID and AZURE_CLIENT_ID
```

### 3. Install the package

From PyPI (recommended once a release is up there):

```bash
pip install evolutiondb-teams-sync
```

Or from source if you're working on the code:

```bash
pip install -e .
```

### 4. One-stop bootstrap

```bash
evosql-teams-sync --setup
```

Run this once after `pip install`. It downloads the platform-correct
`evosql-server` binary from the latest `server-v*` GitHub release,
caches it under `~/.evosql/bin`, and merges the MCP server entry into
Claude Desktop's `claude_desktop_config.json`. The command is
idempotent — re-running it on a configured machine reports
"nothing to do" and exits.

### 5. Log in once

```bash
evosql-teams-sync --auth
```

The CLI prints a Microsoft login URL and a short code. Open the URL,
paste the code, sign in with your work account, approve the
permissions. The refresh token lands in
`~/.evosql/teams_token_cache.json` (mode `0600`).

---

## Daily use

```bash
# One-shot, last 24 hours (uses the per-chat watermark on later runs):
python -m teams_sync.sync --once

# Daemon, polls every 10 minutes:
python -m teams_sync.sync --interval 600

# Verify auth + scopes without writing to the DB:
python -m teams_sync.sync --once --dry-run
```

`--since 1h | 24h | 7d | 30m` controls how far back the *first* run on
a chat goes. After that, the per-chat watermark in EvolutionDB takes
over, so reruns never re-ingest the same message.

---

## Running in Docker

The repo's demo compose file ships a `teams-sync` service behind a
profile so it doesn't start with the rest of the demo:

```bash
# First-run device-code login (runs once, cleans up after itself):
docker compose -f docker-compose.demo.yml --profile teams \
    run --rm teams-sync --auth

# Bring the daemon up:
docker compose -f docker-compose.demo.yml --profile teams up -d teams-sync
```

The token cache lives on a named volume (`teams_sync_state`), so
container recreates don't force you to log in again.

---

## How a synced message looks in memory

Each Teams message becomes one memory row in the `mcp_mem` store
(or whatever `TEAMS_MEMORY_STORE` points to):

```json
{
  "fact":         "Ahmet Yılmaz: Stagingde regression testi başarısız",
  "source":       "teams",
  "kind":         "chat",
  "chat_id":      "19:meeting_…",
  "chat_name":    "Backend standup grubu",
  "chat_type":    "group",
  "message_id":   "1715064862123",
  "sender":       "Ahmet Yılmaz",
  "sender_id":    "<aad-object-id>",
  "text":         "Stagingde regression testi başarısız",
  "created_at":   "2026-05-07T09:14:22Z",
  "modified_at":  "2026-05-07T09:14:22Z",
  "tags":         ["teams", "chat", "Backend standup grubu"]
}
```

Per-chat watermarks live alongside the messages, keyed
`teams_state_<chat_id>`. The store wrapper hides them from message
counters and they're filtered out by the MCP `search_memory` tool
because their `fact` field is empty.
