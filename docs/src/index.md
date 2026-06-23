---
title: EvolutionDB
hide:
  - navigation
  - toc
---

# Powering long-term memory for agents

EvolutionDB is an open-source SQL database, written in C, that fits in
**one binary** and replaces the four-product side stack agents typically
need: a relational database, a document store, a vector index, and a
push channel. It could speaks the **PostgreSQL wire protocol**, so every tool
you already use (psql, DBeaver, pgAdmin, your ORM) connects to it
unchanged.

[Quickstart :material-arrow-right:](quickstart.md){ .md-button .md-button--primary }
[Read the product story :material-arrow-right:](blog/2026-05-long-term-memory-medium.md){ .md-button }
[Browse the technical series :material-arrow-right:](blog/series/00-index.md){ .md-button }

---

## What's in the box

<div class="grid cards" markdown>

-   :material-database: **Agent-memory primitives, native**

    First-class SQL DDL for `MEMORY STORE`, `CHECKPOINT STORE`,
    `MESSAGE LOG`, `DOCUMENT STORE`, `GRAPH STORE`, and
    `ENTITY STORE` — not a layer, the database.

-   :material-vector-arrange-above: **Vectors and HNSW, in-engine**

    `VECTOR(N)` columns, `<=>`/`<->`/`<#>` distance operators,
    HNSW indexing, hybrid filter+vector search — no sidecar.

-   :material-clock-time-four-outline: **Time-travel queries**

    `FOR SYSTEM_TIME AS OF TRANSACTION N` over a real MVCC engine.
    No history table, no extra storage cost.

-   :material-broadcast: **Push, not poll**

    `LISTEN/NOTIFY`, durable subscription mailboxes, and a
    JSON-lines CDC stream — committed events arrive in
    sub-millisecond, not on a polling tick.

-   :material-shield-key: **Multi-tenant by construction**

    Namespace hierarchy with row-level security, TDE
    (AES-256-CTR) on disk, role + GUC scoping, and a
    threat-model document that names what we don't defend
    against.

-   :material-language-c: **One C core, six languages**

    `libevosql-memory` is the truth; Python ctypes, Go cgo, Rust
    bindgen, and Node FFI all bind to the same calls and the same
    bug fixes.

</div>

## 60-second quickstart

```bash
git clone https://github.com/alptekin/evolutiondb && cd evolutiondb
docker compose up -d                 # PG:5433  EVO:9967

# any Postgres client — DBeaver, psql, your ORM
psql -h 127.0.0.1 -p 5433 -U admin -d testdb
```

The full quickstart (Python SDK, LangGraph drop-in, Claude Desktop
bridge, reactive subscriptions) is at [Quickstart](quickstart.md).

## How EvolutionDB compares

A short answer:

- vs **Postgres + pgvector** — same wire protocol, same tools, but
  agent-memory primitives are native DDL instead of an extension's
  function table.
- vs **Mongo Atlas Vector Search** — single binary instead of a
  managed service, push instead of polling, and a real ACID engine
  underneath.
- vs **Pinecone / Weaviate / Qdrant** — these are vector-only
  sidecars; EvolutionDB has the vector and the rest of the database
  in the same process.
- vs **Zep / Mem0** — open source and on-prem, with a temporal
  surface that doesn't require a separate graph store.

The full head-to-head matrix lives at
[Comparison](comparison.md).

## Built on the agent-memory roadmap

EvolutionDB v3 is the closure of [ADR-002 — Agent-Memory Platform
Roadmap](adr/ADR-002-agent-memory-platform-roadmap.md): 26 tasks, eight
sprints, one repository, one binary. The
[v3.0.0 release notes](release-notes/3.0.0.md) name every feature that
landed.

If you're building agents and you're tired of reconciling four
backends, give it a weekend. Open the repository, run one Docker
command, and tell Claude three things about yourself.

[:simple-github: github.com/alptekin/evolutiondb](https://github.com/alptekin/evolutiondb){ .md-button }
