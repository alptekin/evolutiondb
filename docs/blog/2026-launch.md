# Powering long-term memory for agents

_Posted 2026-04-28_

EvolutionDB 3.0.0 ships today. The headline change is a deliberate
re-positioning: from "another open-source SQL database" to a backend
purpose-built for AI agent frameworks — what LangGraph, LangChain,
LlamaIndex, CrewAI, AutoGen, and Mem0 all need from a database when
they grow up.

## The pattern we kept seeing

Every serious agent stack we looked at was running roughly the same
side-stack:

- a relational database (Postgres, usually) for the boring
  transactional stuff,
- MongoDB or DynamoDB for "everything else" — chat history,
  document stores, semi-structured snapshots,
- Pinecone or Weaviate as a vector sidecar,
- a webhook or polling loop to wake the agent up when the world
  changes,
- and a custom checkpoint table because LangGraph's
  `BaseCheckpointSaver` needs one and there's no canonical answer.

That's four to five moving parts, three to four pricing line items,
and at least two ways for the data to drift out of sync between
them. Worse, it's polling-by-default — the agent wakes up on a
timer, not when something interesting happens.

## What changed

EvolutionDB 3.0 collapses that whole pile into one Postgres-
compatible binary you can run in Docker, on bare metal, on the
edge, or behind a corporate firewall.

The agent-memory primitives are now first-class SQL DDL:

```sql
CREATE CHECKPOINT STORE agent_checkpoints;
CREATE MEMORY STORE     agent_memories  WITH (embedding_dim = 1536);
CREATE MESSAGE LOG      agent_chat;
CREATE DOCUMENT STORE   agent_docs;
CREATE GRAPH STORE      agent_kg;       -- bitemporal edges
CREATE ENTITY STORE     agent_entities;
```

Around them: native `VECTOR(N)` columns with HNSW indexing, a
Mongo-style filter DSL on documents, a bitemporal knowledge graph,
`FOR SYSTEM_TIME AS OF TRANSACTION` for time-travel queries, and
`LISTEN/NOTIFY` plus durable subscription queues for push streaming
(no polling).

For the framework you already use, there's a drop-in adapter:

```python
# LangGraph
from evosql_memory.adapters.langgraph_evosql import EvoCheckpointSaver, EvoBaseStore

# Mem0 (drop-in for "from mem0 import Memory")
from evosql_memory.adapters.mem0_compat import Memory
```

Six frameworks, six adapter modules, all duck-typed against the
public protocol — none of them imports its target framework, so
your application only pulls in what it actually uses.

## What it costs you

Latency from the bundled Python ctypes client (single-process
deploy, p99):

| operation                     | p99       |
|-------------------------------|----------:|
| `MEMORY PUT`                  | ~ 8 ms    |
| `MEMORY GET`                  | ~ 2 ms    |
| `CHECKPOINT PUT`              | ~ 5 ms    |
| `MEMORY SEARCH` top-10        | ~ 4 ms    |
| NOTIFY push delivery          | ~ 0.4 ms  |
| polling at 1 s interval       | ~ 990 ms  |

Push beats polling by roughly 2900×. That's the gap between an
agent that reacts in real time and one that wakes up every second
to ask "did anything happen?".

The full report (with reactive comparison and AS OF temporal
queries) is at
[docs/benchmarks/v1.md](../benchmarks/v1.md). It runs as a weekly
GitHub Actions sweep.

## What's not in the box

We're not pretending to be Pinecone-at-billion-vectors-scale, or
Mongo Atlas Vector Search at 60-region deploys. If your need is
"managed vector search at extreme scale", those tools are still
better. EvolutionDB is opinionated toward the
single-process / on-prem / regulated / edge / "I want one binary
to operate" deployment story.

The full head-to-head matrix is at
[docs/comparison.md](../comparison.md), including where MongoDB,
Pinecone, Zep, Mem0, and Weaviate still beat us.

## How to try it

```bash
git clone https://github.com/alptekin/evolutiondb && cd evolutiondb
docker compose up -d
python3 client/python-evosql-memory/examples/react_agent_demo.py
```

The ReAct demo runs a minimal LangGraph-style loop entirely on
EvolutionDB — checkpoint per step, message log per session,
namespace-scoped long-term memory, and a NOTIFY channel that
broadcasts each step's completion in real time.

The full quickstart (C SDK, Mem0 drop-in, reactive subscription,
psql / DBeaver) is at [docs/quickstart.md](../quickstart.md).

## What's next

- **v3.1**: Job DAG (Task 171) — chained scheduled jobs so a
  workflow lives next to the data it operates on, plus the SQL-exec
  body for Task 215 v2.
- **v3.2**: cross-vendor benchmark sweep against Zep, Mem0,
  langgraph-store-mongodb, and Pinecone running side-by-side in
  one Docker-compose recipe.
- **v3.3**: native gRPC streaming for CDC consumers that don't want
  a TCP/JSON-lines client, plus a Rust-bindgen surface over the C
  SDK.

## Thank you

This release is the closure of the agent-memory roadmap proposed in
[ADR-002](../adr/ADR-002-agent-memory-platform-roadmap.md). 26
tasks, ~10 weeks, a single-developer / AI-pair-programmed codebase.
The roadmap stayed honest because the alternatives we'd otherwise
have to recommend (Mongo + Pinecone + Mem0 + custom polling) added
up to a stack that nobody actually liked operating.

If you're building agents and you're tired of reconciling four
backends, we'd love to hear what works and what doesn't. Issues
and PRs at
[github.com/alptekin/evolutiondb](https://github.com/alptekin/evolutiondb).
