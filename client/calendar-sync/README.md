# evolutiondb-calendar-sync

Pull Google Calendar events into EvolutionDB long-term memory so an
AI assistant can answer "when did we meet about the database move?"
weeks later, side by side with the chat and email memory that the
other connectors write.

## Setup

If you already configured `evolutiondb-gmail-sync`, you can reuse
the same OAuth Desktop client. Just enable the Calendar API on the
same Google Cloud project.

1. https://console.cloud.google.com/apis/library/calendar-json.googleapis.com → **Enable**.
2. APIs & Services → **Credentials** → reuse the existing Desktop
   OAuth client (or create one of type Desktop app).
3. Copy the Client ID + Client secret into `.env`
   (`GOOGLE_CLIENT_ID`, `GOOGLE_CLIENT_SECRET`).
4. Make sure your Google account is listed under "Test Users" on
   the OAuth consent screen.

The package only requests `calendar.readonly` — it cannot create,
edit, or delete events on your calendar.

## Install

```
pip install evolutiondb-calendar-sync
# or, from this repo:
pip install -e client/calendar-sync
```

## First-time auth

```bash
evolutiondb-calendar-sync --auth
```

Opens a browser tab for Google's consent screen and stores the
refresh token at `~/.evosql/calendar_token.json` (mode 0600).
Subsequent runs are silent.

## Run

```bash
# One pass; pull the last 30 days. Bootstrap.
evolutiondb-calendar-sync --once --since 30d

# Daemon mode, polls every 15 minutes.
evolutiondb-calendar-sync --interval 900

# Auth + scope check without writes.
evolutiondb-calendar-sync --once --dry-run
```

Each pass prints a one-line JSON summary:

```
{"ok": true, "calendars": 6, "events": 142, "deleted": 3, "skipped": 1, "errors": 0}
```

## How "incremental" works

Google's Calendar API hands back a `nextSyncToken` on every list
call. We persist it per-calendar and pass it on the next run, so
only events that changed since last time come over the wire. A
deleted event also flows through — the connector picks it up,
removes the matching row from the memory store, and counts it.

If the token is older than 30 days Google returns 410. The
connector clears the stale token and re-bootstraps from the
`--since` floor automatically; nothing for you to do.

## What gets indexed

| Field         | Source                                |
|---------------|---------------------------------------|
| summary       | event title                           |
| description   | event body, clipped to 1 kB           |
| location      | event location string                 |
| organizer     | display name or email of the creator  |
| attendees     | list of attendee names                |
| start / end   | RFC 3339 timestamps (or date for all-day) |
| status        | confirmed / tentative / cancelled     |
| html_link     | Google Calendar deep link             |
| calendar_name | the calendar this event lives on      |

Records use the calendar id and event id as the key
(`gcal_event_<calendar_id>_<event_id>`), so re-sync UPSERTs.

## Privacy

The token reads what your account can see, including events you
were invited to on other people's calendars. Once an event lands
in EvolutionDB, anyone with the matching `MCP_USER_ID` can recall
it through `search_memory`. Use a dedicated Google account for
sensitive calendars rather than pointing this at your primary one.
