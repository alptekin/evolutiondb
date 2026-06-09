# evolutiondb-outlook-sync

Pull Microsoft Outlook / Microsoft 365 mail — subject, from, to,
body, folder, categories — into EvolutionDB long-term memory so an
AI assistant can answer "did the procurement team ever close the
loop on that Q3 quote?" weeks later.

This package captures the full text body (not just metadata) up to
3 000 characters per message, plus folder, categories, importance,
read state, and attachment flag. Bodies are stripped of HTML on
Graph's side by asking for `outlook.body-content-type="text"`.

## Setup

Microsoft Graph requires an Entra ID app registration in your own
Azure tenant. Three-minute setup:

1. https://portal.azure.com → **Microsoft Entra ID** → **App
   registrations** → **New registration**.
   - Name: anything (e.g. `evolutiondb-outlook-sync`)
   - Supported account types: pick the one matching your inbox
     (single-tenant for work / school, multi-tenant + personal for
     `outlook.com`).
   - Redirect URI: leave blank — device-code flow doesn't use one.
2. In the new app: **Authentication** → "Advanced settings" →
   **Allow public client flows: Yes**. Save.
3. **API permissions** → Add a permission → Microsoft Graph →
   **Delegated permissions** → check `Mail.Read`, `User.Read`,
   `offline_access`. Grant admin consent if your tenant requires it.
4. **Overview** → copy the **Application (client) ID** into your
   `.env` as `AZURE_CLIENT_ID`, and the **Directory (tenant) ID**
   as `AZURE_TENANT_ID`. Use `common` for `AZURE_TENANT_ID` if you
   want to support personal Microsoft accounts.

By default the package only requests `Mail.Read` — it cannot send mail, mark
messages, or modify the mailbox. Sending is **opt-in**: setting
`EVOSQL_OUTLOOK_SEND=1` adds the `Mail.Send` scope at consent time, used only by
the outbox action loop's approve_send (see ADR-004). The default is unchanged
and read-only.

## Install

```
pip install evolutiondb-outlook-sync
# or, from this repo:
pip install -e client/outlook-sync
```

## First-time auth

The first run prints a short device code and a URL. Open the URL
in any browser (including on a different machine — handy for SSH /
headless hosts), sign into the Microsoft account you want to sync,
type the code, approve consent. Control returns to the terminal
once Microsoft confirms the sign-in.

```bash
evolutiondb-outlook-sync --auth
# [outlook-sync] open https://microsoft.com/devicelogin and enter the code:
#
#     ABCD-EFGH
#
```

Tokens land at `$OUTLOOK_TOKEN_CACHE` (default
`~/.evosql/outlook_token.json`, mode 0600). Subsequent runs use
the refresh token silently.

## Run

```bash
# One pass; pull the last 7 days. First-time bootstrap.
evolutiondb-outlook-sync --once --since 7d

# Just one folder.
evolutiondb-outlook-sync --once --since 30d --folder Inbox

# Daemon mode (15-minute polling).
evolutiondb-outlook-sync --interval 900

# See what would be written without touching the database.
evolutiondb-outlook-sync --once --since 1d --dry-run
```

## What lands in EvolutionDB

Each email becomes one row in the configured memory store
(`OUTLOOK_MEMORY_STORE`, default `mcp_mem`), keyed
`outlook_msg_<graph-id>`. Record fields:

| Field | Source |
|---|---|
| `subject`, `from`, `to`, `cc` | Graph headers |
| `snippet` | `bodyPreview` (~255 chars) |
| `body` | full text, stripped of HTML, capped at 3 000 chars |
| `folder` | `parentFolderId` resolved to display name |
| `categories`, `importance`, `is_read`, `has_attachments` | Graph |
| `received_at` | ISO 8601, also used as watermark |
| `web_link` | direct link to Outlook web UI |
| `tags` | `outlook`, `email`, folder, categories, plus `important` / `unread` / `attachment` / `truncated` when applicable |

Tag-based recall lets a downstream `search_memory(tag="important")`
or `search_memory(tag="unread")` answer "what should I read first"
without scanning every row.

## Environment variables

| Var | Default | Purpose |
|---|---|---|
| `AZURE_CLIENT_ID` | — (required) | Application (client) ID from Azure |
| `AZURE_TENANT_ID` | `common` | Directory (tenant) ID; `common` for personal accounts |
| `OUTLOOK_TOKEN_CACHE` | `~/.evosql/outlook_token.json` | Refresh-token cache location |
| `OUTLOOK_MEMORY_STORE` | `mcp_mem` | EvolutionDB memory store name |
| `OUTLOOK_POLL_INTERVAL` | `900` | Default `--interval` seconds |
| `MCP_USER_ID` | `default_user` | Namespace inside the memory store |
| `EVOSQL_HOST` | `127.0.0.1` | EvolutionDB host |
| `EVOSQL_PORT` | `5433` | PG-protocol port |
| `EVOSQL_USER` | `admin` | EvolutionDB user |
| `EVOSQL_PASSWORD` | `admin` | EvolutionDB password |
| `EVOSQL_DATABASE` | `evosql` | Target database |

## Limits

- Bodies cap at 3 000 chars to stay under EvolutionDB's current
  per-row size limit; cap'd rows carry a `truncated` tag. The cap
  will lift once Task #233 (TOAST overflow) lands.
- Messages are append-only: changes to read state or folder
  membership on the Outlook side are not back-propagated. A bad
  row never aborts the run — it's logged and skipped.
- Watermark is `receivedDateTime`. Messages backdated by a sender
  to a time earlier than the current watermark won't be picked up
  on the next pass. Workaround: occasional `--since 30d` re-runs
  catch any stragglers via the `has_message` dedup check.
