# Part 2 — `MEMORY STORE` on disk: DDL, DML, and the catalog tree

_Series: [Long-Term Memory in EvolutionDB](00-index.md) — previous: [Part 1, the MCP bridge](01-mcp-bridge.md)._

In Part 1 we followed a fact from Claude's `tools/call` down through the
MCP bridge to a single line of Python:

```python
self.conn.memory_put(self.memory, user_id, key, value)
```

This article picks up where that line ends. We're going to follow it the
rest of the way: across the EVO text protocol, into the database engine,
through the system catalog, and onto the disk page where the row
ultimately lives. By the end you'll know exactly which catalog tree
holds the metadata, which slotted page holds the row, what the primary
key looks like as bytes, and why the backing table is called
`__mem_<name>` instead of just `<name>`.

## What `CREATE MEMORY STORE` actually does

The DDL surface looks like a single statement:

```sql
CREATE MEMORY STORE user_memory WITH (embedding_dim = 1536);
```

Underneath that, the engine does three things. The implementation lives
in `evolution/db/Memory.c`, function `CreateMemoryStoreProcess`.

**1. It creates a regular heap table** with a fixed schema. Naming is
deterministic — `backing_table_name()` simply prepends `mem_`:

```c
static void backing_table_name(const char *store_name, char *out, int out_size)
{
    snprintf(out, out_size, "mem_%s", store_name);
}
```

In the system catalog this gets resolved to a real `tables` row, and on
disk it shows up under the user's current schema as `mem_user_memory`.
(The MCP bridge sees it through the EVO protocol as `__mem_<prefix>` —
the leading underscores are the protocol's convention for "internal
table that DBeaver should hide by default" and are added by the wire
serialiser, not stored in the catalog.)

The columns are:

| Column          | Type         | Notes                                            |
|-----------------|--------------|--------------------------------------------------|
| `mem_namespace` | `VARCHAR(255)` NOT NULL | The user/agent/tenant scope                |
| `mem_key`       | `VARCHAR(255)` NOT NULL | Primary key within the namespace            |
| `pk`            | `VARCHAR(512)` PRIMARY KEY | `namespace + 0x1E + mem_key`            |
| `mem_value`     | `JSON`       | Application payload (the `fact`, tags, created)  |
| `embedding`     | `VECTOR(N)`  | Only present when `embedding_dim > 0`            |
| `created_at`    | `TIMESTAMP`  | Server time at insert                            |
| `ttl_at`        | `TIMESTAMP`  | Optional TTL, nullable                           |

The composite PK is the load-bearing piece. We don't put a unique index
on `(mem_namespace, mem_key)` separately — instead, the two are
concatenated with a `0x1E` (Record Separator) byte and stored as a
single B+ tree key:

```c
static void make_pk(const char *ns, const char *key, char *out, int out_size)
{
    snprintf(out, out_size, "%s\x1E%s", ns ? ns : "", key ? key : "");
}
```

There's a subtle reason `0x1E` is used instead of the more obvious
`0x1F`: the engine's `GetInsertions` path reserves `0x1F` (Unit
Separator) and `0x02` (STX) as in-memory delimiters between fields and
between rows. Using either as part of a user-visible key would let a
maliciously-crafted namespace corrupt the tuple buffer. `0x1E` is the
next character up the ASCII control table and isn't claimed by anything
in our wire format. The comment in `Memory.c` calls this out explicitly.

The type codes in the column definitions are EvoSQL's binary tuple
encoding — `typeVal / 10000` gives the family, `typeVal % 10000` gives
the size. So `130255` is `VARCHAR(255)`, `130512` is `VARCHAR(512)`,
`230000` is `JSON`, `100003` is `TIMESTAMP`, and `260000 + N` is
`VECTOR(N)`. The conditional inclusion of the embedding column is what
makes a memory store with no semantic search a pure JSON KV table — no
wasted bytes per row when the user didn't ask for vectors.

**2. It writes a row into `CAT_SYS_MEMORY_STORES`.** This is a dedicated
B+ tree in the system catalog, sibling to `CAT_SYS_TABLES`,
`CAT_SYS_INDEXES`, and so on. The key is the lowercased store name; the
value is a `MemoryStoreDesc` carrying `embedding_dim`, the distance
function, and the backing table id. The catalog API for this lives in
`catalog_internal.h`:

```c
int cat_create_memory_store(const MemoryStoreDesc *desc);
int cat_find_memory_store(const char *name, MemoryStoreDesc *out);
int cat_drop_memory_store(const char *name);
int cat_list_memory_stores(MemoryStoreDesc *out, int max);
```

The catalog row is what makes the memory store a first-class object
rather than "just a table that happens to be named a certain way". When
the engine sees `MEMORY PUT user_memory ...`, it looks up the catalog
row, finds the backing table id, and operates on the table directly —
it never has to re-resolve the name through the user's schema.

**3. It does _not_ create a vector index automatically.** That's a
separate `CREATE INDEX ... USING HNSW` step covered in Part 3 of this
series. The engine will accept `MEMORY SEARCH` against an unindexed
embedding column — the planner just falls back to a sequential scan
with on-the-fly distance computation. Slow on a million rows, totally
fine on the ten-thousand-row personal namespace this Claude bridge
produces.

## What `MEMORY PUT` does

The DML surface looks like:

```sql
MEMORY PUT user_memory NAMESPACE 'alptekin'
    KEY 'mem_1714824123456_a1b2c3'
    VALUE '{"fact":"loves jazz","tags":["preference"]}'
    EMBEDDING '[0.1, 0.2, ... ]'
    TTL '2026-12-31';
```

The C SDK's `memory_put` constructs that statement from its arguments,
sends it as one line over the EVO text protocol on TCP 9967, and the
engine routes it through `MemoryPutProcess` in `Memory.c`.

The interesting part of `MEMORY PUT` is the upsert semantics. SQL's
`INSERT` would fail on a duplicate primary key; users want
`save_memory("loves jazz")` to overwrite a previously-saved
"loves classical" without a separate UPDATE statement. So the engine
does a delete-then-insert under the hood:

```c
/* If a row already exists for the composite key
 * (namespace, mem_key), delete it first so the INSERT succeeds. */
```

Both operations run inside the same auto-commit transaction. Under MVCC,
that produces a tombstoned old row and a fresh new row visible to all
later snapshots — exactly the trace you'd want for the
`FOR SYSTEM_TIME AS OF` queries we'll cover in Part 4.

The actual write goes through the standard DML path:
`tapi_heap_insert` writes the tuple to a slotted page,
`bt2_insert` adds an entry to the primary-key B+ tree. There's no
special-case codepath for `MEMORY PUT` — it's a regular DML compiled
from a regular `INSERT`, and that's by design. Every storage feature
the engine has (replication, WAL, MVCC, TDE, RLS, durable subscriptions)
applies to memory stores automatically because they're literally just
tables underneath.

## What `MEMORY GET`, `MEMORY SEARCH`, and `MEMORY LIST NAMESPACES` do

All three are compiled to `SELECT` statements against the backing table.
The `Memory.c` code uses `seed_select` — an internal helper that builds
an AST programmatically — rather than going back through the parser.
The shape of each:

- `MEMORY GET store NAMESPACE ns KEY k` → `SELECT * FROM mem_store WHERE pk = 'ns\x1Ek'` — one PK lookup, hits the B+ tree directly.
- `MEMORY SEARCH store NAMESPACE ns NEAR <vec> LIMIT k` → `SELECT *, distance(...) FROM mem_store WHERE mem_namespace = 'ns' ORDER BY embedding <=> '[...]' LIMIT k`. The planner picks HNSW if an index exists, sequential scan with sort otherwise.
- `MEMORY LIST NAMESPACES store [PREFIX p]` → `SELECT DISTINCT mem_namespace FROM mem_store [WHERE mem_namespace LIKE 'p%']`. With a sufficiently selective prefix the planner can use the PK B+ tree as a range scan.

Because everything compiles down to standard SQL, you can also _hand-
write_ the equivalent and inspect the data directly. From the CLI
running against your own bridge:

```sql
SELECT mem_namespace, mem_key, mem_value
FROM   __mem_mcp_mem
WHERE  mem_namespace = 'alptekin'
ORDER  BY created_at DESC
LIMIT  10;
```

That's the same query the MCP bridge's `recent_memories` tool sends, and
you can run it against a live database while Claude is using it. There
is no opaque blob storage; what the model writes is what your operator
sees.

## How namespace isolation actually holds up

The `mem_namespace` column carries the multi-tenant boundary. The MCP
bridge pins it server-side from the `MCP_USER_ID` environment variable;
in a server-to-server deployment, the application code does the same.
But what stops a buggy application from reading another tenant's rows?

Two layers, depending on how paranoid you want to be.

**Application-layer**, which the MCP bridge relies on: every `MEMORY
GET / PUT / SEARCH` accepts the namespace as an argument and the engine
filters by it in the generated SQL. A bug in the application could leak
across namespaces, but a bug in the model can't (the bridge ignores
model-supplied namespaces).

**Database-layer**, available but not enabled by default: the engine's
row-level security (Task 93) lets you attach a policy to the backing
table:

```sql
CREATE POLICY user_isolation
ON       __mem_user_memory
FOR      ALL
USING    (mem_namespace = current_user);
```

With that policy active, even a SQL injection that bypasses the
application's filter cannot return rows for another namespace — the
visibility check fires inside the row scan itself. The product piece
mentions this casually as "namespace-scoped long-term memory"; the
underlying enforcement is just standard PostgreSQL-shape RLS over a
regular table.

## What's stored where, summarised

A complete tour of where one saved fact lives on disk, after a single
`save_memory` call:

| Data                                  | Lives in                                         |
|---------------------------------------|--------------------------------------------------|
| The fact's primary key (`ns + 0x1E + key`) | Primary-key B+ tree of `mem_<store_name>`       |
| The fact's columns (namespace, key, value, embedding, timestamps) | Slotted page in the heap of `mem_<store_name>`  |
| The store's metadata (embedding_dim, distance, backing table id) | `CAT_SYS_MEMORY_STORES` B+ tree                  |
| The MVCC `xmin`/`xmax` headers          | Tuple header bytes, 8 bytes after `[0xE7][table_id]` |
| The visibility map bit for the page      | `CAT_SYS_VMAP` B+ tree, indexed by page id        |
| The commit log entry for the inserting transaction | `CAT_SYS_CLOG`, 2 bits per XID                  |
| The WAL record for the tuple           | `evosql.wal` file, replayed on crash              |
| The encrypted page on disk (if TDE on) | `evosql.db`, AES-256-CTR keyed by the wrapped DEK |
| The CDC stream entry for downstream subscribers | `CAT_SYS_SUBSCRIPTIONS`, durable cursor per channel |

Every one of those structures is the same one a regular `CREATE TABLE
+ INSERT` would touch. No new storage primitives were introduced for
memory. The memory layer's job is to put a domain-specific surface on
top of primitives that already work — DDL that names what the table is
for, DML that names what the operations mean, and a catalog tree that
makes the whole thing first-class to the planner.

## Tests that prove the invariants

The behaviour described in this article is verified by:

- `tests/test_memory_store.py` — DDL idempotency, DML round-trips, NULL
  embedding handling, TTL column.
- `tests/test_memory_multitenant.py` — namespace isolation, cross-tenant
  read protection.
- `tests/test_memory_trigger.py` — `ON MEMORY PUT ... DO ...` trigger
  surface (Part 5 territory).

Each test ends with `DROP MEMORY STORE` to keep the catalog clean. None
mock the database; they all hit a real instance, because we'd been
burned before by integration tests where the mock and the engine
silently disagreed.

## What's next

Part 3 drops down to the `embedding` column itself: how `VECTOR(N)` is
encoded in the binary tuple, what an HNSW graph looks like on slotted
pages, how the `<=>` operator picks the index, and what
`recall@10 ≥ 0.9` cost us to hit.

→ Part 3 — `VECTOR(N)` and HNSW (planned)
