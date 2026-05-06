# EvolutionDB vs the agent-memory market

A factual comparison of where EvolutionDB sits next to MongoDB
(plus its `langgraph-store-mongodb` library), Pinecone, Zep,
Mem0, and Weaviate.

The goal is *picking the right tool*, not a sales pitch. EvolutionDB
covers a specific axis (single-process SQL + vector + JSON +
temporal + reactive on-prem) that the others either skip or only
partially serve. If you're already happy with one of these stacks,
the matrix should make it easy to see whether switching makes sense.

## At a glance

| Capability | **EvolutionDB** | MongoDB + langgraph-store-mongodb | Pinecone | Zep | Mem0 | Weaviate |
|------------|:--:|:--:|:--:|:--:|:--:|:--:|
| Relational SQL surface (joins, txns, RLS, FKs) | ✅ Postgres-compat wire | ⚠️ document-only | ❌ | ❌ | ❌ | ⚠️ GraphQL only |
| Vector search w/ ANN index | ✅ HNSW built-in | ⚠️ Atlas Vector (managed) | ✅ core product | ✅ embedded | ✅ embedded | ✅ core product |
| JSON column type + path operators | ✅ native JSON | ✅ BSON | ❌ | ⚠️ via document field | ⚠️ via metadata | ⚠️ object property |
| LangGraph BaseCheckpointSaver | ✅ first-class object | ✅ via library | ❌ | ❌ | ⚠️ partial | ❌ |
| LangGraph BaseStore | ✅ first-class object | ✅ via library | ✅ namespace | ❌ | ⚠️ partial | ⚠️ via class |
| LangChain ChatMessageHistory | ✅ `MESSAGE LOG` | ⚠️ via collection | ❌ | ✅ session memory | ⚠️ via memories | ⚠️ via class |
| LangChain ConversationEntityMemory | ✅ `ENTITY STORE` | ❌ | ❌ | ❌ | ✅ entities | ❌ |
| Mongo-style filter DSL on docs | ✅ `DOCUMENT FILTER` | ✅ native | ⚠️ metadata filters | ❌ | ⚠️ basic | ⚠️ where filters |
| Bitemporal knowledge graph | ✅ `GRAPH STORE` (valid_from / valid_to / invalid_at) | ❌ | ❌ | ✅ Graphiti | ⚠️ graph mode | ❌ |
| Time-travel queries (`AS OF`) | ✅ `FOR SYSTEM_TIME AS OF TRANSACTION` | ❌ | ❌ | ⚠️ historical view | ❌ | ❌ |
| Push streaming (no polling) | ✅ `LISTEN/NOTIFY` + durable subs + CDC | ⚠️ change streams (Atlas) | ❌ pull only | ⚠️ webhook | ❌ pull only | ⚠️ filters only |
| Single-process deploy (no sidecar) | ✅ one binary | ❌ + Atlas Vector | ❌ managed-only | ✅ embedded option | ⚠️ with self-host | ❌ separate cluster |
| Embedded / on-prem deploy | ✅ Docker / bare-metal / Helm | ⚠️ Atlas-only for vector | ❌ SaaS-only | ⚠️ self-host beta | ⚠️ self-host (limited) | ✅ self-host |
| Transparent Data Encryption | ✅ AES-256 page-level | ✅ enterprise add-on | ✅ managed | ⚠️ session-level | ❌ | ❌ |
| Postgres wire (psql, DBeaver, JDBC) | ✅ port 5433 | ❌ | ❌ | ❌ | ❌ | ❌ |
| Pricing (self-host) | free | free Community / paid Atlas | $70+/mo per pod | self-host beta | $249/mo Pro | free |
| License | MIT-style | SSPL | proprietary | dual | dual | BSD-3 |

✅ = first-class • ⚠️ = supported with caveats • ❌ = not available

## Where each option still wins

| If you need… | Best fit |
|--------------|----------|
| 60+ regions, 9-figure scale, fully managed | **MongoDB Atlas Vector Search** (commodity scaling, mature ecosystem) |
| Pure vector search at billion-vector scale | **Pinecone** (purpose-built ANN service) |
| Best-in-class temporal knowledge graph + LongMemEval scores out of the box | **Zep + Graphiti** (LongMemEval 63.8% vs ~49% baseline) |
| Hosted UX with prompt-engineered fact distillation | **Mem0 Pro** ($249/mo) |
| Pure GraphQL / hybrid search across modalities, weak on transactions | **Weaviate** |
| Postgres-compatible SQL **plus** vector **plus** JSON **plus** temporal **plus** push streaming, in one binary, on-prem | **EvolutionDB** |

## Sample sticky-tradeoffs

### "I'm already on MongoDB Atlas — why move?"

EvolutionDB lives where Atlas can't follow you: regulated on-prem
deployments, single-binary edge boxes, or anywhere you can't (or
don't want to) take a $/node-hour SaaS dependency. If you're happy
with Atlas pricing and don't need true SQL joins, RLS, or
`FOR SYSTEM_TIME AS OF` time-travel, stay on Atlas.

### "Pinecone gives me sub-10ms vector search — does EvolutionDB?"

For top-10 nearest neighbours over a few hundred thousand vectors,
EvolutionDB's bundled HNSW is in the same order (~4 ms p99 in our
single-process bench). For billion-vector workloads with strict
multi-tenant isolation, Pinecone's purpose-built infrastructure
still wins on operational maturity. The argument for EvolutionDB
isn't "faster ANN" — it's "you don't need a sidecar at all".

### "Zep already has the temporal graph thing"

Yes. Zep + Graphiti is the reason EvolutionDB ships `GRAPH STORE`
with `valid_from / valid_to / invalid_at` and `FOR SYSTEM_TIME AS OF`
— so the scenario "what did the agent know about X six months ago"
runs natively on EvolutionDB without leaving SQL. If you're already
on Zep and the rest of the stack works for you, stay there. The
wins from a switch are: native joins against the graph from the same
process, push delivery on edge updates, and the on-prem story.

### "Mem0 has the cleanest memory.add() API"

We agree, which is why
[`evosql_memory.adapters.mem0_compat`](https://github.com/alptekin/evolutiondb/blob/main/client/python-evosql-memory/evosql_memory/adapters/mem0_compat.py)
is a drop-in for `from mem0 import Memory`. The argument is the same
backend, lower TCO, and you keep your existing Mem0-shaped code.

## Apples-to-apples latency

Cross-vendor `memory_put` / `memory_get` numbers are produced by
[`bench/vendors/run_all.py`](https://github.com/alptekin/evolutiondb/blob/main/bench/vendors/README.md) and roll up
into [docs/benchmarks/v2-vendors.md](benchmarks/v2-vendors.md). The
same iteration count + key shape + value payload runs through every
backend whose driver and dependent service are available; missing
backends are skipped with a one-line note in the report so it's
obvious why a row is empty.

```bash
docker compose up -d                              # EvoSQL
docker compose -f docker-compose.bench.yml up -d  # mongo + weaviate
pip install pymongo weaviate-client
python3 bench/vendors/run_all.py --iters 200
```

## Open question

Where should this go next? Pull requests welcome on
[github.com/alptekin/evolutiondb](https://github.com/alptekin/evolutiondb).
