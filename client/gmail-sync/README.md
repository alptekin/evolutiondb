# evolutiondb-gmail-sync

Pull Gmail message metadata — subject, from, to, snippet, labels —
into EvolutionDB long-term memory so an AI assistant can answer
"did Ahmet ever reply to that procurement thread?" weeks later.

This package stays in **metadata mode**: the message body is *not*
captured. The snippet Gmail provides (~150 characters) plus subject
+ sender + recipient + date covers most recall use-cases without
walking the multipart MIME tree.

## Setup

The Gmail API does not accept simple bearer tokens — you need an
OAuth client in your own Google Cloud project. Five-minute setup:

1. https://console.cloud.google.com/apis/library/gmail.googleapis.com
   → **Enable**.
2. APIs & Services → **OAuth consent screen** → External → fill in
   the app name + your email. Add yourself as a Test User.
3. APIs & Services → **Credentials** → Create credentials →
   **OAuth client ID** → Application type **Desktop app**.
4. Copy the generated **Client ID** and **Client secret** into your
   `.env` (`GOOGLE_CLIENT_ID`, `GOOGLE_CLIENT_SECRET`).

By default the package only requests `gmail.readonly` — it cannot send mail,
mark messages, or modify labels. Sending is **opt-in**: setting
`EVOSQL_GMAIL_SEND=1` adds the `gmail.send` scope at consent time, used only by
the outbox action loop's approve_send (see ADR-004). The default is unchanged
and read-only.

## Install

```
pip install evolutiondb-gmail-sync
# or, from this repo:
pip install -e client/gmail-sync
```

## First-time auth

The first run opens a browser tab for Google's consent screen. The
package spins up a one-shot HTTP listener on a random `127.0.0.1`
port, captures the redirect, exchanges the code for a refresh
token, and stores the result at `$GMAIL_TOKEN_CACHE` (default
`~/.evosql/gmail_token.json`, mode 0600).

```bash
evolutiondb-gmail-sync --auth
```

Subsequent runs are silent — the refresh token is used to mint
fresh access tokens as needed.

## Run

```bash
# One pass; pull the last 7 days. First-time bootstrap.
evolutiondb-gmail-sync --once --since 7d

# Daemon mode.
evolutiondb-gmail-sync --interval 900

# Skip promotions + social and only keep real correspondence.
evolutiondb-gmail-sync --once --since 30d \
  --query "-category:promotions -category:social"

# Verify auth without writing.
evolutiondb-gmail-sync --once --dry-run
```

Each pass prints a one-line JSON summary:

```
{"ok": true, "messages": 42, "skipped": 8, "errors": 0}
```

## What gets indexed

| Field            | Source                                |
|------------------|---------------------------------------|
| subject          | `Subject` header                      |
| from             | `From` header                         |
| to / cc          | `To`, `Cc` headers                    |
| snippet          | Gmail's pre-computed ~150-char preview|
| labels           | Resolved against `users/me/labels`    |
| thread_id        | Gmail thread id (for thread recall)   |
| internal_date_ms | Server-side receipt time              |

Records use the Gmail message id as key (`gmail_msg_<id>`), so
re-sync UPSERTS.

## What's not indexed

- **Message bodies** — keeps records small and avoids multipart
  MIME parsing. If you need full text, set `format=full` in
  `api.GmailClient.get_message_metadata` and add a body walker;
  Gmail returns base64url-encoded payloads.
- **Attachments** — same reasoning. The header line says "see
  attached file foo.pdf"; that signal is in the snippet already.

## Rate limits

Gmail's per-user quota is 250 quota units/second; metadata fetches
cost 5 units each. A 1,000-email backfill takes ~20s of wall time.
The client retries once on 429 with `Retry-After`.

## Privacy

Everything you read with this token lands in EvolutionDB and
becomes searchable by anyone with the matching `MCP_USER_ID`. Use a
dedicated Google account for noisy mailing lists or
work-confidential mail rather than pointing this at your primary
inbox.
