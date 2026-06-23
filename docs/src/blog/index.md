# Blog

Long-form writing about EvolutionDB — what we shipped, why, and how it
holds up under the engineering details.

## Featured

<div class="grid cards" markdown>

-   :material-newspaper-variant: **How we gave Claude a real long-term memory**

    _2026-05-05 · ~12 min read_

    A field note on building EvolutionDB's agent-memory layer for a
    non-engineering audience: the polling tax, the four-product side
    stack, the single-binary alternative, and the temporal trick that
    makes audit-and-replay free.

    [Read the product story :material-arrow-right:](2026-05-long-term-memory-medium.md)

-   :material-rocket-launch: **Powering long-term memory for agents — v3.0.0**

    _2026-04-28 · launch announcement_

    The v3.0.0 release is the closure of ADR-002: 26 tasks, ~10 weeks,
    one binary. Native agent-memory DDL, vectors with HNSW, temporal
    queries, push-not-poll streaming, and six framework adapters.

    [Read the launch post :material-arrow-right:](2026-launch.md)

</div>

## Technical series — Long-term memory in EvolutionDB

A companion to the product story. Eight articles that go underneath
the marketing surface and walk through every catalog object, every
wire format, every index structure, every fsync.

| #  | Article                                                                  |
|----|---------------------------------------------------------------------------|
| 00 | [Series index](series/00-index.md)                                        |
| 01 | [The MCP bridge — JSON-RPC over stdio in 388 lines](series/01-mcp-bridge.md) |
| 02 | [`MEMORY STORE` on disk — DDL, DML, and the catalog tree](series/02-memory-store-internals.md) |
| 03 | [`VECTOR(N)` and HNSW — semantic recall against a live transactional workload](series/03-vector-hnsw.md) |
| 04 | [Temporal memory — `FOR SYSTEM_TIME AS OF` on top of MVCC](series/04-temporal-mvcc.md) |
| 05 | [Push, not poll — durable subscriptions and CDC streaming](series/05-push-not-poll.md) |
| 06 | [The C SDK and FFI — one core, six languages, six framework adapters](series/06-c-sdk-and-ffi.md) |
| 07 | [Multi-tenant memory — namespace hierarchy meets row-level security](series/07-multi-tenant.md) |
| 08 | [Benchmarks — what an agent-memory workload actually looks like](series/08-benchmarks.md) |

## A note on tone

The product piece is written for a Medium-style audience and
deliberately avoids internal identifiers. The technical series does
the opposite — it names files, functions, page types, error codes,
and on-disk layouts directly. If you came in looking for a feeling,
start with the product piece. If you came in looking for a hex dump,
the series is the right place.
