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

## Same setup for Claude Code

If you use Claude Code (the CLI), drop the same `mcpServers` entry
into `~/.claude/mcp.json`:

```bash
mkdir -p ~/.claude
cp client/mcp-server-evosql/examples/claude_desktop_config.json ~/.claude/mcp.json
# edit the absolute paths
```

Claude Code picks it up automatically on the next `claude` invocation.

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
