# Long-Term Memory in EvolutionDB — a technical series

_Companion to the [product piece](../2026-05-long-term-memory-medium.md)._

This series goes underneath the marketing surface and walks through how
EvolutionDB's agent-memory layer is actually built — every catalog
object, every wire format, every index structure, every fsync.

It is intended for readers who want to know _how_, not just _whether_, it
works: database engineers, agent-framework authors, and anyone considering
running this in production.

## The plan

| #  | Title                                                                   | Status |
|----|-------------------------------------------------------------------------|--------|
| 01 | [The MCP bridge — JSON-RPC over stdio in 388 lines](01-mcp-bridge.md)    | ✅      |
| 02 | [`MEMORY STORE` on disk — DDL, DML, and the catalog tree](02-memory-store-internals.md) | ✅      |
| 03 | [`VECTOR(N)` and HNSW — semantic recall against a live transactional workload](03-vector-hnsw.md) | ✅      |
| 04 | [Temporal memory — `FOR SYSTEM_TIME AS OF` on top of MVCC](04-temporal-mvcc.md) | ✅      |
| 05 | [Push, not poll — durable subscriptions and CDC streaming](05-push-not-poll.md) | ✅      |
| 06 | [The C SDK and FFI — one core, six languages, six framework adapters](06-c-sdk-and-ffi.md) | ✅      |
| 07 | [Multi-tenant memory — namespace hierarchy meets row-level security](07-multi-tenant.md) | ✅      |
| 08 | [Benchmarks — what an agent-memory workload actually looks like](08-benchmarks.md) | ✅      |

Articles are written so each one stands on its own; you can drop into
any of them without reading the others first.

## The cast of files

For readers who want to follow along in the source tree, the relevant
modules are:

- `evolution/db/memory_store.c` — `MEMORY STORE` DDL/DML
- `evolution/db/checkpoint_store.c` — `CHECKPOINT STORE` DDL/DML
- `evolution/db/vector.c` — `VECTOR(N)` tuple encoding + distance
  functions
- `evolution/db/hnsw.c` — HNSW graph index
- `evolution/db/mvcc.c` — visibility predicate, snapshots, CSN
- `evolution/db/temporal.c` — `FOR SYSTEM_TIME AS OF` rewrite
- `evolution/db/Notify.c` + `adaptor/notify.c` — `LISTEN/NOTIFY`
- `evolution/db/cdc.c` + `adaptor/cdc_server.c` — durable subscriptions
- `client/libevosql-memory/` — C SDK
- `client/python-evosql-memory/` — Python ctypes binding
- `client/mcp-server-evosql/` — Claude Desktop / Claude Code bridge

The full repository is at
[github.com/alptekin/evolutiondb](https://github.com/alptekin/evolutiondb).
Tests for every feature discussed live under `tests/`, and each
article points at the exact test file that exercises the behaviour
it describes.

## A note on tone

The product piece is written for a Medium audience and avoids internal
identifiers on purpose. This series does the opposite — it names files,
functions, page types, error codes, and on-disk layouts directly. If you
came in looking for a feeling, the product piece is upstairs. If you came
in looking for a hex dump, you're in the right place.
