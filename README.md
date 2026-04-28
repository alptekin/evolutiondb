# EvolutionDB — Powering Long-Term Memory for Agents

A single-process database that gives AI agent frameworks everything
they need from one binary: **SQL + vector search + JSON + temporal
queries + reactive push streaming** with first-class adapters for
**LangGraph, LangChain, LlamaIndex, CrewAI, AutoGen, and Mem0**.

> _Replace the MongoDB + Pinecone dual-stack — and the polling loops
> that go with it — with a single Postgres-compatible server you run
> locally or on-prem._

[![Framework Compat](https://github.com/alptekin/evolutiondb/actions/workflows/framework-compat.yml/badge.svg)](https://github.com/alptekin/evolutiondb/actions/workflows/framework-compat.yml)
[![CodeQL](https://github.com/alptekin/evolutiondb/actions/workflows/codeql.yml/badge.svg)](https://github.com/alptekin/evolutiondb/actions/workflows/codeql.yml)

## Why EvolutionDB for agent memory

| Need | What we give you |
|------|------------------|
| LangGraph-compatible checkpoint store | `CHECKPOINT STORE` DDL/DML + `EvoCheckpointSaver` |
| Cross-thread memory with vector search | `MEMORY STORE … WITH (embedding_dim=N)` + HNSW index |
| Append-only chat history | `MESSAGE LOG` + `EvoChatMessageHistory` |
| Mongo-style document store w/ filter DSL | `DOCUMENT STORE` + `$and / $or / $eq / $gt …` |
| Temporal-knowledge graph (bitemporal edges) | `GRAPH STORE` with `valid_from / valid_to / invalid_at` |
| LangChain entity memory | `ENTITY STORE` with auto-bumped `mention_count` |
| "Notify me when X changes" | `LISTEN/NOTIFY` push + durable subscription queues |
| Replay / time-travel queries | `FOR SYSTEM_TIME AS OF TRANSACTION <xid>` |
| Postgres clients (psql, DBeaver, JDBC) | Drop-in PG wire protocol on port 5433 |
| On-prem regulated deploys | AES-256 Transparent Data Encryption (TDE) |

For the head-to-head against MongoDB / Pinecone / Zep / Mem0 / Weaviate
see [docs/comparison.md](docs/comparison.md).

## 60-second quickstart

```bash
docker compose up -d              # PG:5433  EVO:9967

# Python (LangGraph drop-in via the bundled adapter)
export PYTHONPATH=$PWD/client/python-evosql-memory:$PYTHONPATH
python3 - <<'PY'
from evosql_memory import connect
from evosql_memory.adapters.langgraph_evosql import EvoCheckpointSaver, EvoBaseStore

c = connect("127.0.0.1", 9967, "admin", "admin")
saver = EvoCheckpointSaver(c, "demo_ck")
store = EvoBaseStore(c, "demo_mem")

cfg = {"configurable": {"thread_id": "agent-1", "checkpoint_ns": ""}}
saver.put(cfg, {"id": "cp-1", "channels": {"step": 1}})
print("latest:", saver.get(cfg))

store.put(("user_42", "memos"), "favourite", {"genre": "jazz"})
print("memo:",   store.get(("user_42", "memos"), "favourite"))
PY
```

The full quickstart (C SDK, ReAct demo, Mem0 drop-in, reactive
subscription) is at [docs/quickstart.md](docs/quickstart.md).

## SQL surface (first-class objects)

```sql
-- LangGraph BaseCheckpointSaver
CREATE CHECKPOINT STORE agent_checkpoints;

-- LangGraph BaseStore + LangChain VectorStoreRetrieverMemory
CREATE MEMORY STORE agent_memories WITH (embedding_dim = 1536);

-- LangChain BaseChatMessageHistory + LlamaIndex ChatMemoryBuffer
CREATE MESSAGE LOG agent_chat;

-- Haystack DocumentStore + LlamaIndex BaseDocumentStore
CREATE DOCUMENT STORE agent_docs;

-- Zep Graphiti + Mem0 graph mode (bitemporal edges)
CREATE GRAPH STORE agent_kg;

-- LangChain ConversationEntityMemory + CrewAI EntityMemory
CREATE ENTITY STORE agent_entities;
```

Plus everything you'd expect from a relational engine: tables,
indexes, constraints, JOINs, subqueries, transactions, MVCC,
prepared statements, COPY, replication, RLS.

## Clients

| Layer            | Path                                   | Status |
|------------------|----------------------------------------|--------|
| C SDK            | [`client/libevosql-memory/`](client/libevosql-memory/) | shipped — connect, exec, memory/checkpoint, vector helpers, NOTIFY + CDC subscribe |
| Python ctypes    | [`client/python-evosql-memory/`](client/python-evosql-memory/) | shipped — auto-discovers the SDK; thread-local errors |
| Framework adapters | `evosql_memory.adapters.*`           | shipped — LangGraph, LangChain, LlamaIndex, CrewAI, AutoGen, Mem0 |
| Postgres wire    | `psql -h 127.0.0.1 -p 5433 …`          | shipped — DBeaver / pgAdmin / JDBC compatible |
| Native EVO       | `./cli/evosql-cli -W admin`            | shipped |

Compatibility tests for every adapter run on push and PR via
[`framework-compat.yml`](.github/workflows/framework-compat.yml).

## Performance (single process, p99)

From `bench/run_all.py` (full report at
[docs/benchmarks/v1.md](docs/benchmarks/v1.md)):

| op                          | p99 (ms) |
|-----------------------------|---------:|
| `MEMORY PUT`                | ~ 8 |
| `MEMORY GET`                | ~ 2 |
| `CHECKPOINT PUT`            | ~ 5 |
| `CHECKPOINT GET LATEST`     | ~ 1 |
| `MEMORY SEARCH` (top-10)    | ~ 4 |
| `NOTIFY` push delivery      | ~ 0.4 |
| polling @ 1 s interval      | ~ 990 |

Push is roughly **2900× faster** than a 1-second polling loop — the
gap that lets reactive agents react in real time instead of every
poll tick.

## Build

**Requirements:** GCC, Bison, Flex, libreadline-dev. For TLS:
libssl-dev.

```bash
make                  # core engine + adaptor + CLI
make adaptor TLS=1    # build with OpenSSL TLS support
make clean
make generate         # regenerate Flex/Bison parser from .y/.l files
make -C client/libevosql-memory   # build the C SDK
```

## Docker

```bash
docker compose up -d                    # PG:5433  EVO:9967
docker compose down                     # stop (data preserved)
docker compose down -v                  # stop and delete data

docker run -d -p 5433:5433 -p 9967:9967 \
    -e EVOSQL_PASSWORD=mysecret evolutiondb/evolutiondb:latest
```

## Testing

```bash
docker compose up -d
python tests/test_memory_store.py
python tests/test_checkpoint_store.py
python tests/test_evo_protocol.py
python client/python-evosql-memory/python_tests/test_adapters.py
python tests/framework_compat/langgraph/test_lg_compat.py
```

## Background

EvolutionDB started ~18 years ago as a personal C database project
to learn how engines work internally — parser, storage, indexing,
execution layer, all from scratch. It was archived on a DVD and
sat dormant for over a decade.

Resumed in early 2026 with AI-assisted development, the engine
matured into a Postgres-compatible relational core and then pivoted
toward agent memory: storing the kind of structured, semi-structured,
vector-indexed, and time-versioned state that AI agent frameworks
need but currently get by stitching together MongoDB + Pinecone +
custom polling + a hand-rolled checkpointer.

The agent-memory pivot is documented in
[ADR-002](docs/adr/ADR-002-agent-memory-platform-roadmap.md).

## Documentation

- [60-second quickstart](docs/quickstart.md)
- [Comparison vs MongoDB / Pinecone / Zep / Mem0 / Weaviate](docs/comparison.md)
- [Benchmarks](docs/benchmarks/v1.md)
- [ADR-002 — Agent Memory pivot](docs/adr/ADR-002-agent-memory-platform-roadmap.md)
- [Release notes 3.0.0](docs/release-notes/3.0.0.md)
- [Launch blog post](docs/blog/2026-launch.md)

Architecture deep-dives live in the [Wiki](../../wiki):

- [Architecture Overview](../../wiki/Architecture)
- [Unified Storage](../../wiki/Unified-Storage-Overview)
- [Storage Engine](../../wiki/Storage-Engine) · [B+ Tree](../../wiki/BPlus-Tree) · [System Catalog](../../wiki/System-Catalog)
- [SQL Parser](../../wiki/SQL-Parser) · [SQL Operations](../../wiki/SQL-Operations) · [Expression Engine](../../wiki/Expression-Engine)
- [Transactions](../../wiki/Transactions)
- [PostgreSQL Wire Protocol](../../wiki/PostgreSQL-Wire-Protocol) · [EVO Protocol](../../wiki/EVO-Protocol)
- [Authentication and Security](../../wiki/Authentication-and-Security)
- [Server Architecture](../../wiki/Server-Architecture)
- [CLI Client](../../wiki/CLI-Client)
