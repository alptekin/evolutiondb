# Anthropic DXT Directory — Submission Cheat Sheet

Form: https://forms.gle/tyiAZvch1kDADKoP9

Below are pre-written answers to the standard fields the form asks for.
Copy each into the matching field; tweak as needed. Anthropic reviews
for quality + security, so concrete + honest beats marketing copy.

---

## Extension name
EvolutionDB Long-Term Memory

## Short tagline (≤100 chars)
Persistent long-term memory for Claude Desktop / Claude Code, backed by EvolutionDB.

## Long description
Drops in a `save_memory` / `search_memory` / `recent_memories` / `forget` /
`list_tags` tool surface so Claude can remember preferences, decisions,
biographical details, and project context across sessions.

Backed by EvolutionDB (open-source SQL database, runs in one Docker
container) over the PostgreSQL wire protocol — no opaque blob storage,
every fact is a real row you can `SELECT` against.

The user's namespace is server-side overridden from the `MCP_USER_ID`
env var — the LLM cannot fragment your private memory across sessions
by inventing other identifiers. This is the bridge between you and a
memory layer that is yours, queryable, exportable, and deletable.

## Author
- Name: alptekin topal
- Email: topal.alptekin@gmail.com
- GitHub: https://github.com/alptekin

## Repository / source code
https://github.com/alptekin/evolutiondb (extension source: `client/mcp-server-evosql/`)

## Documentation URL
https://alptekin.github.io/evolutiondb/blog/series/01-mcp-bridge/

## License
MIT

## Bundle download URL (.dxt)
After the v1.1.1 release CI completes (macOS x86_64 runner currently
queued), the four per-platform `.dxt` files attach to:
https://github.com/alptekin/evolutiondb/releases/tag/v1.1.1

Until then, the macOS arm64 / Linux / Windows builds are at
https://github.com/alptekin/evolutiondb/actions/runs/25452756333

## Manifest version
0.3

## MCP server type
Local (stdio)

## Tools exposed
- `save_memory` — persist a long-term fact about the user
- `search_memory` — substring + tag search before answering
- `recent_memories` — list the most recently saved facts
- `forget` — delete a stored fact by key
- `list_tags` — list all distinct tags used so far

## User configuration required
- `MCP_USER_ID` — sticky namespace identifier (required, default "default_user")
- `EVOSQL_HOST` (default 127.0.0.1)
- `EVOSQL_PORT` (default 5433)
- `EVOSQL_USER` (default admin)
- `EVOSQL_PASSWORD` (default admin)
- `EVOSQL_DATABASE` (default testdb)
- `MCP_STORE_PREFIX` (default claude_desktop)

## External dependencies
A running EvolutionDB instance reachable on the configured host:port.
The simplest path is `docker run -d -p 5433:5433 ghcr.io/alptekin/evolutiondb:latest`
on the user's machine. No external network calls beyond that.

## Privacy / data handling statement
- All memories are stored in the user's own EvolutionDB instance.
  No data leaves the user's machine.
- The extension does not collect telemetry or analytics.
- The `MCP_USER_ID` value is the only identifier used; it stays
  server-side and is never sent to any external service.
- Removing the extension and dropping the EvolutionDB volume erases
  every stored memory.

## Security review notes
- The MCP server is ~400 lines of Python (`mcp_server_evosql/server.py`)
  + the `psycopg[binary]>=3.1` dependency (pinned, signed PyPI wheels).
- Inbound: stdio JSON-RPC 2.0 only. No network listener.
- Outbound: a single connection to `EVOSQL_HOST:EVOSQL_PORT` over the
  PostgreSQL wire protocol. Default `127.0.0.1`.
- All SQL is generated server-side from a fixed grammar
  (`MEMORY PUT/DELETE`, parameterised `SELECT`); user-supplied strings
  are escaped via `_e()` before interpolation.
- `MCP_USER_ID` is overridden server-side on every tool call — the
  LLM cannot escalate to another tenant by passing a different
  `user_id` argument.
- The extension does not exec arbitrary commands, fetch URLs, or
  evaluate model-supplied code.

## Cross-platform testing
- macOS arm64 (Apple Silicon): smoke-tested end-to-end with Claude Code
  on 2026-05-06 (handshake, `tools/list`, `save_memory`,
  `search_memory` round-trip green).
- Linux amd64: DXT bundle built green in CI; not yet smoke-tested
  end-to-end (next on the list).
- Windows amd64: DXT bundle built green in CI; not yet smoke-tested
  end-to-end.
- macOS x86_64: bundle build queued for a `macos-13` GitHub Actions
  runner at submission time; will be attached to the release when
  available.

## Already published on
- PyPI: https://pypi.org/project/mcp-server-evolutiondb/
- MCP Registry: io.github.alptekin/evolutiondb-memory
- Smithery: https://smithery.ai/server/topal-alptekin/evolutiondb-memory

## Icon
A 256×256 PNG at `dxt/icon.png` — pending design (drop one in before
final submission so the manifest's `icon` field resolves; Anthropic
reviewers expect at least a placeholder).

## Screenshots (optional)
1. Claude Desktop tool palette showing the five memory tools
2. A round-trip: user "remember that..." → Claude calls `save_memory`
3. Next session: user asks something → Claude calls `search_memory`
4. The actual rows in DBeaver / psql (proves "your data, queryable")

## Known limitations
- Pre-requires the user to run an EvolutionDB instance somewhere
  reachable. The first-run UX is "open the extension, paste
  `docker run ...` into your terminal, then come back and use it."
  An embedded-mode is on the roadmap.
- The bundle ships a Python tree with `psycopg[binary]` vendored.
  The macOS arm64 bundle is ~4.7 MB; other platforms similar.
- The extension exposes the user's memory namespace to any other
  tool / extension running in the same Claude Desktop session,
  unless the user reads/writes from distinct namespaces.
