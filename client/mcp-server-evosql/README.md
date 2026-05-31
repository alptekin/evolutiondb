# mcp-server-evolutiondb

<!-- mcp-name: io.github.alptekin/evolutiondb-memory -->

A [Model Context Protocol](https://modelcontextprotocol.io) server
that gives Claude Desktop / Claude Code persistent **long-term
memory** backed by EvolutionDB. Anything Claude decides to remember
during a conversation is written to a real database; in any future
session — same window or weeks later — Claude can search it back
without you having to repaste context.

## Install

```bash
pipx install mcp-server-evolutiondb
# or:  pip install --user mcp-server-evolutiondb
```

The package installs the `mcp-server-evolutiondb` console entry-point
(also aliased as `mcp-server-evosql`). It speaks the PostgreSQL wire
protocol over `psycopg`, so installation is **pure-Python** — no C
toolchain, no `libevosql-memory.so` to build. EvolutionDB still has
to be running somewhere reachable; `docker compose up -d` in the
[main repo](https://github.com/alptekin/evolutiondb) is the easiest
way.

```
   ┌──────────────────┐         ┌─────────────────────┐         ┌────────────────┐
   │  Claude Desktop  │  stdio  │  mcp-server-evosql  │  TCP    │   EvolutionDB  │
   │   (or Claude     │ ◀──────▶│  (this package)     │ ◀──────▶│  (port 9967)   │
   │     Code)        │  JSON-  │                     │         │                │
   │                  │   RPC    │  save_memory       │         │ MEMORY STORE   │
   │                  │   2.0    │  search_memory     │         │ ENTITY STORE   │
   │                  │          │  recent_memories   │         │                │
   │                  │          │  forget            │         │                │
   │                  │          │  list_tags         │         │                │
   └──────────────────┘          └─────────────────────┘         └────────────────┘
```

## Why

The default Claude experience is **stateless** — every new chat starts
from scratch, so you waste tokens re-explaining who you are, what
project you're on, what your preferences are. Plug this server in
and the model:

- saves preferences / decisions / facts during natural conversation,
- searches them back the next time you ask something related,
- forgets entries on demand,
- never sees the user_id that pins the namespace (we override it
  server-side, so the model can't accidentally fragment the
  namespace by inventing IDs across sessions).

Token math: 100 chats × 3,000 tokens of pre-loaded context (~$0.90
on Sonnet) → 100 chats × ~250 tokens of just-relevant facts pulled
on demand (~$0.26). Roughly **3.5× cheaper inputs** without losing
context fidelity.

## What's exposed to Claude

Five tools, all under one `evolutiondb-memory` MCP server:

| Tool                | Purpose                                          |
|---------------------|--------------------------------------------------|
| `save_memory`        | Persist a fact + optional tags                   |
| `search_memory`      | Substring + tag search (use before answering)    |
| `recent_memories`    | Last N saved facts (most-recent-first)           |
| `forget`             | Delete by key                                    |
| `list_tags`          | All distinct tags in use, with counts            |

Each call's `user_id` is overridden server-side from the
`MCP_USER_ID` env var — stops the model from drifting the namespace
across "user" / "default_user" / your name etc.

## Install + run

**1. Bring up EvolutionDB**

```bash
cd /path/to/evolutiondb
docker compose up -d
```

**2. Build the SDK once**

```bash
make -C client/libevosql-memory
```

**3. Configure Claude Desktop**

Open the config file:

- macOS: `~/Library/Application Support/Claude/claude_desktop_config.json`
- Windows: `%APPDATA%\Claude\claude_desktop_config.json`

Drop in the entry from
[`examples/claude_desktop_config.json`](examples/claude_desktop_config.json),
substituting the absolute paths for your machine. Quit + restart
Claude Desktop.

You'll see a small 🔌 / hammer icon in the bottom-right of the
chat composer once `evolutiondb-memory` is connected.

**4. Talk normally**

Say "remember that I take my espresso single-shot, no sugar"; Claude
will run `save_memory(...)`. Days later open a new chat, ask "what
do I drink?" — Claude runs `search_memory(...)` and recalls.

## One-command setup for all supported hosts

`pip install mcp-server-evolutiondb` puts a small `evolutiondb-mcp-setup`
helper on $PATH. It autodetects every MCP host installed on the
machine and merges the `evolutiondb-memory` server into each of
their config files in one go:

```bash
evolutiondb-mcp-setup
# [setup] Claude Desktop: wrote /Users/you/Library/Application Support/Claude/claude_desktop_config.json
# [setup] ChatGPT Desktop: not detected — skipping
# [setup] Gemini CLI: wrote /Users/you/.gemini/settings.json
```

The merge is idempotent — running it twice changes nothing the
second time. Existing `mcpServers` entries are preserved; only the
`evolutiondb-memory` block is overwritten.

Useful flags:

- `--dry-run` — show what would change, write nothing.
- `--client claude-desktop` — only configure one host (repeatable).
- `--user-id NAME` — override the sticky namespace (default: `$MCP_USER_ID` or `default_user`).
- `--port 5433` — non-default EvolutionDB PG-wire port.

Override config paths via env vars when the auto-detected location
is wrong for your install: `EVOSQL_CLAUDE_CONFIG`,
`EVOSQL_CHATGPT_CONFIG`, `EVOSQL_GEMINI_CONFIG`.

## Per-host manual config

If you'd rather hand-edit, every host accepts the same JSON shape —
the `mcpServers` block is part of the MCP spec, not specific to any
vendor:

```json
{
  "mcpServers": {
    "evolutiondb-memory": {
      "command": "uvx",
      "args":    ["mcp-server-evolutiondb"],
      "env": {
        "EVOSQL_HOST":      "127.0.0.1",
        "EVOSQL_PORT":      "5433",
        "EVOSQL_USER":      "admin",
        "EVOSQL_PASSWORD":  "admin",
        "EVOSQL_DATABASE":  "evosql",
        "MCP_USER_ID":      "your-handle",
        "MCP_STORE_PREFIX": "mcp"
      }
    }
  }
}
```

File paths:

| Host             | macOS                                                                  | Linux / WSL                              | Windows                                          |
|------------------|------------------------------------------------------------------------|------------------------------------------|--------------------------------------------------|
| Claude Desktop   | `~/Library/Application Support/Claude/claude_desktop_config.json`      | `~/.config/Claude/claude_desktop_config.json` | `%APPDATA%\Claude\claude_desktop_config.json` |
| Claude Code      | `~/.claude/mcp.json`                                                   | `~/.claude/mcp.json`                     | `%USERPROFILE%\.claude\mcp.json`                |
| ChatGPT Desktop  | `~/Library/Application Support/ChatGPT/mcp.json`                       | `~/.config/ChatGPT/mcp.json`             | `%APPDATA%\ChatGPT\mcp.json`                    |
| Gemini CLI       | `~/.gemini/settings.json`                                              | `~/.gemini/settings.json`                | `%USERPROFILE%\.gemini\settings.json`           |

After editing, restart the host (or for Gemini CLI, just run the next
command — it re-reads its config on every launch).

## Remote HTTP transport (web ChatGPT, Gemini app, etc.)

Web-only MCP hosts cannot spawn a local process and so cannot use
stdio. They speak the spec's "streamable HTTP" transport instead.
Run the same server as an HTTP listener and point a tunnel at it:

```bash
# 1. Start the HTTP listener (default port 8970, path /mcp).
export EVOSQL_MCP_AUTH_TOKEN=$(openssl rand -hex 24)
evolutiondb-mcp-http

# 2. Expose it through a tunnel. Pick whichever you already use.
cloudflared tunnel --url http://127.0.0.1:8970
#   → outputs https://random-words.trycloudflare.com
# OR
ngrok http 8970
#   → outputs https://random.ngrok-free.app
```

In the web host's "MCP Connectors" or "Custom MCP server" panel,
register:

- URL: `https://your-tunnel-host/mcp`
- Authorization: `Bearer <the token you just generated>`

The server enforces three guards when bound to anything other than
loopback:

- Every request must carry the bearer token.
- `Origin` (when present) must be on the allow-list. The defaults
  cover `chat.openai.com`, `chatgpt.com`, `claude.ai`,
  `gemini.google.com`. Override via `EVOSQL_MCP_ALLOWED_ORIGINS`
  (comma-separated).
- Bound to 127.0.0.1 by default. The CLI warns if you flip to
  `0.0.0.0` without a token.

Identical tool surface as stdio — `save_memory`, `search_memory`,
`recent_memories`, `forget`, `list_tags`. New tools land in both
transports at once because both go through the same `MCPServer.handle`.

## Configuration

| Env var               | Default            | Purpose |
|-----------------------|--------------------|---------|
| `EVOSQL_HOST`          | `127.0.0.1`        | DB host |
| `EVOSQL_PORT`          | `9967`             | EVO port |
| `EVOSQL_USER`          | `admin`            | DB user |
| `EVOSQL_PASSWORD`      | `admin`            | DB password |
| `MCP_USER_ID`          | `default_user`     | Sticky namespace for every tool call |
| `MCP_STORE_PREFIX`     | `mcp`              | Catalog object prefix |
| `EVOSQL_PYTHON_SDK`    | (auto-discovered)  | Override path to the Python ctypes binding |
| `EVOSQL_MEMORY_LIB`    | (auto-discovered)  | Override path to libevosql-memory.dylib/so |
| `EVOSQL_EMBEDDING_PROVIDER` | `none`        | `openai`, `local`, or `none`. Turns `search_memory` into hybrid semantic+keyword |
| `EVOSQL_EMBEDDING_MODEL`    | provider default | Override embedding model (e.g. `text-embedding-3-large`) |
| `OPENAI_API_KEY`            | —             | Required when provider is `openai` |

### Context-layer boosts (all opt-in)

These layer extra signal onto retrieval. Each is off by default so the plain
hybrid search is unchanged; turn them on per deployment.

| Env var                  | Default | Purpose |
|--------------------------|---------|---------|
| `EVOSQL_SALIENCE_BOOST`  | `0`     | Weight (0-1) for the per-row salience score (recency × sender activity × thread depth × feedback) |
| `EVOSQL_GRAPH_BOOST`     | `0`     | Weight (0-1) for knowledge-graph spreading activation — relational queries reach rows that never name the queried entity |
| `EVOSQL_PROFILE_BOOST`   | `0`     | Weight (0-1) for the user interest profile — biases results toward the cluster the query points at |
| `EVOSQL_DECAY`           | `0`     | `1` to fade old, unused rows (archived, never deleted; `include_archived` digs them back up) |
| `EVOSQL_GRAPH_BUILD`     | `1`     | Build graph edges inline on save (cheap; needed before the graph boost helps) |
| `EVOSQL_ENTITY_EXTRACT`  | `1`     | Extract entities inline on save |

`salience`, `profile`, and `decay` read data the background scheduler
maintains, so run it for them to have any effect:

```bash
python -m mcp_server_evosql.scheduler run     # hourly/daily/weekly jobs
python -m mcp_server_evosql.scheduler status  # last run + failure ratio
```

It also embeds + entity-extracts new rows, recomputes salience, refreshes the
interest profile, regenerates episode summaries, and runs the decay pass.

## Semantic search

`search_memory` runs in keyword mode by default. Setting
`EVOSQL_EMBEDDING_PROVIDER=openai` (with `OPENAI_API_KEY`) or
`EVOSQL_EMBEDDING_PROVIDER=local` flips it into hybrid mode: new
saves are tagged with a dense vector and queries are ranked by a
weighted mix of cosine similarity (0.7) and substring overlap (0.3).
Rows saved before you enabled embeddings continue to score on
keyword overlap only, so the switch is non-destructive — older
memories don't disappear, they just rank lower against semantically
strong matches.

The `local` provider needs an extra install:

```
pip install 'mcp-server-evolutiondb[embeddings-local]'
```

## Tests

```bash
cd client/mcp-server-evosql
python3 tests/test_mcp.py
```

Eight cases — initialize handshake, tools/list discovery, save+search
round-trip, tag-filtered search, recent ordering, forget, list_tags
aggregation, and the "user_id can't be hijacked from the LLM side"
isolation case. Each test spawns the server as a real subprocess and
talks JSON-RPC, so framing bugs that an in-process unit test would
hide get caught.

## Inspect the database directly

While Claude is using the server, open another terminal and:

```bash
docker compose exec evosql evosql-cli -W admin
```

Then:

```sql
SELECT mem_namespace, mem_key, mem_value FROM __mem_mcp_mem;
ENTITY RANK FROM mcp_ents;
```

Everything Claude has decided to remember is right there as
queryable rows — no opaque blob storage.

## Wire format

Newline-delimited JSON-RPC 2.0 over stdio (no Content-Length
headers — that's the LSP variant; MCP uses plain `\n`-delimited).
The server speaks protocol version `2024-11-05`.

```
{"jsonrpc":"2.0","id":1,"method":"initialize",
 "params":{"protocolVersion":"2024-11-05","capabilities":{}}}

{"jsonrpc":"2.0","id":2,"method":"tools/list"}

{"jsonrpc":"2.0","id":3,"method":"tools/call",
 "params":{"name":"save_memory",
           "arguments":{"fact":"loves jazz","tags":["preference"]}}}
```

Errors come back as `{"jsonrpc":"2.0","id":N,"error":{"code":..,"message":..}}`
or as a `tools/call` result with `isError: true`.

## Known limitations

- **Single-process EvolutionDB connection.** The server holds one
  Connection — the SDK contract is one-per-thread, and MCP stdio is
  inherently single-threaded so this is fine.
- **No streaming responses.** Tool results return as single JSON
  blobs. Larger memories (>100 facts) take ~50 ms to serialise; the
  protocol can stream but Claude's tool-use UI doesn't render
  partial responses anyway.
- **Authentication via env-vars only.** If you expose the server to
  another machine (which you shouldn't — it's stdio), set
  `EVOSQL_PASSWORD` accordingly. The server doesn't rotate secrets.
