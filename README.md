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

## Run the whole stack (engine + agent)

One command brings up the SQL engine plus the standalone agent web UI:

```bash
./install.sh                            # bootstrap + build + up
```

`install.sh` is idempotent. It checks Docker is present, copies
`.env.example` to `.env` (never overwriting an existing `.env`),
generates a random `EVOSQL_PASSWORD` and `EVOSQL_ENCRYPTION_KEY` if those
are still blank/`admin`, then runs the agent profile. To do it by hand:

```bash
cp .env.example .env                    # then edit secrets in .env
docker compose --profile agent up -d    # engine + agent web UI
```

A plain `docker compose up -d` (no `--profile agent`) still brings up the
engine only, exactly as before. After the stack is up:

- PostgreSQL wire : `127.0.0.1:5433`
- EVO protocol    : `127.0.0.1:9967`
- Agent web UI    : `http://127.0.0.1:8800`

Set `ANTHROPIC_API_KEY` in `.env` to enable the cloud LLM (without it the
agent runs with no LLM turns).

### Secure-by-default posture

- **Loopback host ports.** Every published port binds to `127.0.0.1`, so
  a fresh install is not reachable from the LAN or internet.
- **Set secrets in `.env`.** `EVOSQL_PASSWORD` defaults to `admin` only
  when left blank; change it (or let `install.sh` generate one). The
  `.env` file is gitignored — never commit it.
- **Exposing publicly is opt-in.** To serve beyond loopback you must set
  `EVOSQL_BIND=0.0.0.0` (the engine binds `127.0.0.1` by default),
  provide a TLS cert/key, and set `EVOSQL_MCP_AUTH_TOKEN` for the MCP HTTP
  transport. Drop the `127.0.0.1:` prefix on the compose port mappings
  only after those are in place.

### Data-handling notes (what is and isn't protected)

- **PII masking is opt-in and field-level.** At rest it runs per
  connector via `protect_record()`; at retrieval via
  `EVOSQL_PII_RETRIEVAL`; outbound to an LLM it masks only when
  `EVOSQL_PII_EGRESS=on`. Default `off` means enrichment text reaches the
  model provider unmasked. (The agent image always installs
  `evolutiondb-pii`, so turning egress masking `on` never fail-closes.)
  name/DOB rules ship disabled (heuristic only).
- **Encryption at rest (TDE) needs both halves.** Whole-DB AES-256-CTR
  page encryption activates only with a `TLS=1` / `EVO_ENCRYPTION` build
  *and* an `EVOSQL_ENCRYPTION_KEY` passphrase. Without both, the DB file
  *and* the WAL are plaintext on disk. Page 0 (FileHeader) is always
  plaintext. CTR gives confidentiality, not tamper-detection.
- **Send invariant (ADR-004).** The agent never sends on its own; it
  drafts and queues, a human approves (`approve_send`), and delivery is
  dry-run unless explicitly opted in.
- **Roadmap, not shipped:** key rotation, per-tenant RLS, engine
  `MASKING` SQL, and reliable person-name redaction.
- **Sub-processors depend on what you enable.** Models: Anthropic
  (default, optional), OpenAI (optional embeddings), Gemini/Azure (named,
  not wired by default), Ollama (local, no egress). Connectors that call
  external APIs: Google (Gmail/Calendar/YouTube), Microsoft
  (Outlook/Teams), Slack, GitHub, Notion, Azure DevOps. Local-only (no
  sub-processor): iMessage, Apple Notes, Browser history, Claude sessions.
  Connector scopes are read-only by default; send scopes are opt-in.

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
