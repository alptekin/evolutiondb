# evolutiondb-hub

One panel for every EvolutionDB sync connector and AI memory client.
The web UI and the terminal share the same controls; whatever you
click in the browser you can also do from a shell script.

## What the hub does

- Shows every sync connector (teams, gmail, slack, github, calendar)
  on one page with current state, last run, the binary's install
  status, and a free-form "agent owner" label so you can record
  which AI assistant you mentally assigned to that source.
- Starts and stops connectors as detached background processes.
  Existing launchd / systemd runs are detected and marked as
  "externally managed" — the hub will not double-spawn or interfere.
- Wires the same `evolutiondb-memory` block into Claude Desktop,
  ChatGPT Desktop, and Gemini CLI config files, or removes it.
  All three AI hosts read from the same memory store, so anything
  one connector writes is searchable from any of them.
- Same operations are available from the terminal for headless
  setups and shell automation.

## Install

```
pip install evolutiondb-hub mcp-server-evolutiondb
```

You also need the connector packages you actually plan to use —
each is its own PyPI release:

```
pip install evolutiondb-teams-sync   evolutiondb-gmail-sync \
            evolutiondb-slack-sync   evolutiondb-github-sync \
            evolutiondb-calendar-sync
```

## Web UI

```bash
evolutiondb-hub web
# → http://127.0.0.1:8771
```

Five source cards on top (one per connector), three client cards
below (Claude / ChatGPT / Gemini). Buttons drive the same operations
as the CLI. Auto-refreshes every 10 seconds so a connector that
crashes is visible quickly.

The UI binds to 127.0.0.1 only and has no auth — it is a personal
local panel, not a shared dashboard.

## Terminal

```bash
# Table of every source.
evolutiondb-hub status

# Spawn / kill one source.
evolutiondb-hub start  gmail
evolutiondb-hub stop   gmail

# Tag a source with the AI agent you assigned to it.
evolutiondb-hub set-agent gmail   gemini
evolutiondb-hub set-agent teams   claude
evolutiondb-hub set-agent slack   chatgpt
evolutiondb-hub set-agent github  claude
evolutiondb-hub set-agent calendar gemini

# Wire / unwire one AI host's MCP config.
evolutiondb-hub client claude-desktop  enable
evolutiondb-hub client gemini-cli      enable
evolutiondb-hub client chatgpt-desktop disable

# Same status JSON the web UI uses.
evolutiondb-hub status --json
```

Subcommand reference:

| Command                          | What it does                                       |
|----------------------------------|----------------------------------------------------|
| `status [--json]`                | Per-connector state table                          |
| `start <name> [--interval N]`    | Spawn the connector in the background              |
| `stop <name>`                    | SIGTERM the hub-managed pid (then SIGKILL after 5s)|
| `set-agent <name> <agent>`       | Label the source with an owner agent (or `none`)   |
| `client <name> enable\|disable\|status` | Manage AI host config                       |
| `web [--port 8771] [--host …]`   | Launch the web UI                                  |

Source names: `teams`, `gmail`, `slack`, `github`, `calendar`.
Client names: `claude-desktop`, `chatgpt-desktop`, `gemini-cli`.

## How the agent-owner label works

The label is a local annotation, not data. Connectors do not know
or care which agent owns them; every record they write still lands
in the same memory store and is searchable from every AI host.
The label is there so you can answer "which agent is supposed to
keep an eye on my Gmail this week?" by reading the panel.

## State on disk

```
~/.evosql/orchestrator.json    hub state (pids, labels, intervals)
~/.evosql/logs/<source>.log    stdout + stderr of each hub-spawned connector
```

The state file is mode 0600 and contains no secrets — auth tokens
remain in their own per-connector caches under `~/.evosql/`.
