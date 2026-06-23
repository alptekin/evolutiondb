# Part 1 — The MCP bridge: JSON-RPC over stdio in 388 lines

_Series: [Long-Term Memory in EvolutionDB](00-index.md)_

The bridge between Claude Desktop and EvolutionDB is the smallest
interesting piece of this whole stack and probably the easiest place to
start. By the end of this article you'll know exactly what bytes flow
between Claude and the database, where the line is drawn between "the
model decides" and "the server enforces", and why the entire thing fits
in a single Python file.

## What the bridge actually is

The Model Context Protocol (MCP) is Anthropic's open spec for letting
Claude talk to external tools. From Claude's side it looks like a
function-calling surface: the model receives a list of tools at
conversation start, and during the conversation it can decide to call any
of them. From _our_ side — the side writing the tools — it's a JSON-RPC
2.0 server that speaks newline-delimited JSON over stdin/stdout.

That second part is worth pausing on. The transport is **stdio**, not
HTTP. Claude Desktop launches our server as a child process. Every
request the model makes is a single line of JSON written to our
stdin. Every response is a single line we write to our stdout. There is
no network, no port, no TLS, no auth header. The trust boundary is the
process boundary.

This makes the wire format almost embarrassingly simple:

```
{"jsonrpc":"2.0","id":1,"method":"initialize","params":{"protocolVersion":"2024-11-05","capabilities":{}}}
{"jsonrpc":"2.0","id":1,"result":{"protocolVersion":"2024-11-05","capabilities":{"tools":{"listChanged":false}},"serverInfo":{"name":"evolutiondb-memory","version":"1.0.0"}}}
{"jsonrpc":"2.0","id":2,"method":"tools/list"}
{"jsonrpc":"2.0","id":2,"result":{"tools":[ ... ]}}
{"jsonrpc":"2.0","id":3,"method":"tools/call","params":{"name":"save_memory","arguments":{"fact":"loves jazz","tags":["preference"]}}}
{"jsonrpc":"2.0","id":3,"result":{"content":[{"type":"text","text":"{\"ok\":true,\"key\":\"mem_1714824123456_a1b2c3\",\"user_id\":\"alptekin\"}"}],"isError":false}}
```

That's the whole thing. Eight lines of JSON for one full
initialize-list-call round trip. No Content-Length headers (those are the
LSP variant of the same wire format; MCP dropped them).

## The five tools we expose

The full surface, as advertised on `tools/list`:

| Tool              | Inputs                       | What it does                                    |
|-------------------|------------------------------|-------------------------------------------------|
| `save_memory`     | `fact`, optional `tags[]`    | Persist a fact + tags to the user's namespace   |
| `search_memory`   | `query`, optional `tag`, `limit` | Substring + tag scoring against the namespace |
| `recent_memories` | `limit`                      | Most-recently-saved facts, descending by `created` |
| `forget`          | `key`                        | Delete by primary key                           |
| `list_tags`       | _(none)_                     | Distinct tags + counts in the namespace         |

These names matter — they show up verbatim in the model's tool palette,
and the model picks between them based on the descriptions in the
schema. You can read the actual descriptions in
`client/mcp-server-evosql/mcp_server_evosql/server.py` around the `TOOLS`
constant; they're written deliberately to nudge the model toward _calling
search before answering questions about the user_, which is the most
common failure mode if the descriptions are vague.

## The server-side override that matters

Every tool takes an implicit `user_id` — the namespace the memory belongs
to. The interesting question is who chooses it.

If the LLM chose, you'd lose data. Across a hundred sessions Claude would
fragment the namespace as `"user"`, `"default_user"`, `"alptekin"`,
`"the user"`, and any other variation it invented mid-conversation. Each
of those would scope to a different bucket and `search_memory` would
return empty.

So the bridge ignores anything the model passes for `user_id` and pins
it server-side from the `MCP_USER_ID` environment variable:

```python
class MCPServer:
    def __init__(self) -> None:
        self.user_id = os.environ.get("MCP_USER_ID", "default_user")
        ...
```

Every dispatch uses `self.user_id`, never `args.get("user_id")`. This is
the single most important defensive decision in the whole bridge — every
other thing in this file can be wrong without losing memories; this one
can't.

## How the memory backend hangs off the bridge

The bridge itself is dumb. The actual storage — what makes the facts
durable across sessions — lives one layer down in the EvolutionDB Python
SDK (`client/python-evosql-memory/`), which in turn wraps the C SDK
(`client/libevosql-memory/`), which in turn speaks the EVO native text
protocol on TCP port 9967.

The bridge instantiates one connection at first use:

```python
def _connect(self) -> MemoryBackend:
    if self.backend is None:
        self.backend = MemoryBackend(self.host, self.port,
                                       self.user, self.pw,
                                       self.prefix)
    return self.backend
```

Two catalog objects get created idempotently the first time:

```python
for kind, name in [
    ("MEMORY STORE", self.memory),
    ("ENTITY STORE", self.entities),
]:
    try:
        self.conn.exec_(f"CREATE {kind} {name}")
    except Exception:
        pass
```

The `try/except Exception: pass` is intentional. `CREATE MEMORY STORE`
returns a duplicate-name error on every restart after the first; the
bridge has no business propagating that to the model.

The actual `save_memory` body shows what each row looks like on disk:

```python
def save(self, user_id, fact, tags=None):
    created = time.time()
    key = f"mem_{int(created*1000)}_{uuid.uuid4().hex[:6]}"
    value = json.dumps({
        "fact":    fact,
        "tags":    tags or [],
        "created": created,
    })
    self.conn.memory_put(self.memory, user_id, key, value)
    return key
```

A millisecond timestamp + 6 hex chars of UUID gives a primary key that's
both monotonically sortable (so `recent` orders correctly) and globally
unique (so a save-storm on the same millisecond doesn't collide). The
value is JSON because the storage layer accepts JSON natively as a
`MEMORY STORE` value column — see Part 2 of this series for what that
looks like inside the catalog.

## Why search isn't a SQL `LIKE`

If you read `MemoryBackend.search` carefully, you'll notice it doesn't
push the substring match into SQL. It pulls up to 512 rows for the
namespace and does the term-scoring in Python:

```python
sql = (f"SELECT mem_namespace, mem_key, mem_value FROM "
       f"__mem_{self.memory} WHERE mem_namespace = "
       f"'{_e(user_id)}' LIMIT 512")
rows = self.conn.query(sql, max_rows=512, max_cols=8, col_buf_size=8192)
q_terms = [w for w in query.lower().split() if len(w) > 1]
out = []
for r in rows:
    rec = json.loads(r[2]) if r[2] else None
    haystack = (rec.get("fact","").lower() + " "
                + " ".join(rec.get("tags") or []).lower())
    score = sum(1 for w in q_terms if w in haystack)
    ...
```

This is a deliberate choice for v1. The right answer in v2 is the
`MEMORY SEARCH` DML statement that hits the HNSW index over the
embedding column — covered in Part 3. Lexical-fallback search keeps the
bridge functional even when the user hasn't configured an embedding
provider, and 512 rows is small enough that the Python pass is
sub-millisecond. We rejected pushing the `LIKE` into SQL because the
real future of this code path is the vector index, and we didn't want
the bridge to develop a SQL dialect we'd have to throw away.

## The dispatch loop

The whole stdio loop is twenty lines:

```python
def main() -> int:
    server = MCPServer()
    for raw_line in sys.stdin:
        raw_line = raw_line.strip()
        if not raw_line:
            continue
        try:
            msg = json.loads(raw_line)
        except json.JSONDecodeError as e:
            print(f"[mcp-evosql] bad JSON line: {e}",
                   file=sys.stderr, flush=True)
            continue
        try:
            resp = server.handle(msg)
        except Exception as e:
            traceback.print_exc(file=sys.stderr)
            resp = server._err(msg.get("id"), -32603, str(e))
        if resp is not None:
            sys.stdout.write(json.dumps(resp, ensure_ascii=False) + "\n")
            sys.stdout.flush()
    return 0
```

A few things worth noting:

- **Every error logs to stderr, never stdout.** Stdout is a JSON-RPC
  channel; the moment a stray `print()` slips in, the next line Claude
  reads is half ours and half garbage, and the entire session goes red.
  We log to stderr instead, which Claude Desktop captures into a logs
  pane.
- **JSON decode errors don't kill the loop.** A malformed line is
  reported and skipped. This matters during development — Claude Desktop
  occasionally sends an empty line or a partial frame on disconnect, and
  we'd rather skip it than respawn.
- **The `notifications/initialized` message has no `id`** and so gets no
  response (`if msg_id is None: return None`). Returning a response to a
  notification is a protocol violation that some clients tolerate and
  others don't.

## What we tested

The eight cases in `tests/test_mcp.py` cover:

1. `initialize` handshake returns the protocol version and `serverInfo`.
2. `tools/list` returns all five tools with non-empty descriptions.
3. `save_memory` followed by `search_memory` round-trips the same fact.
4. `search_memory` with a `tag` filter returns only matching tags.
5. `recent_memories` orders by `created` descending across N saves.
6. `forget` deletes by key and a follow-up `search_memory` returns
   nothing.
7. `list_tags` aggregates counts correctly across multiple saves.
8. The user_id isolation case: the test sets `MCP_USER_ID=alice`, makes
   a tool call passing `arguments.user_id="bob"`, then with
   `MCP_USER_ID=bob` does a search — and verifies _the second user can't
   see Alice's data_, proving the server-side override actually fires.

Each test spawns the server as a real subprocess and communicates over
real stdin/stdout, so any bug in the framing layer (missing newline,
bad JSON, unflushed stdout) gets caught — none of these would show up
in an in-process unit test.

## What's next

Part 2 follows the `memory_put` call from this article down into the
database itself: how `MEMORY STORE` is laid out in the system catalog,
what tables it expands into, how the namespace tuple is encoded into the
B+ tree key, and what the `__mem_<name>` prefix actually buys us.

→ [Part 2 — `MEMORY STORE` on disk](02-memory-store-internals.md)
