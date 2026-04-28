# bench/vendors — Cross-vendor agent-memory benchmark

Per-vendor `memory_put` / `memory_get` latency sweep. Same iteration
count, same key shape, same value payload, run against EvolutionDB
plus every other backend whose driver is available at runtime.

## Layout

```
bench/vendors/
├── _base.py              VendorDriver protocol + summarize_ms / time_op helpers
├── evosql_driver.py      EvolutionDB (always available when the C SDK is built)
├── mongo_driver.py       MongoDB — pymongo, langgraph-store-mongodb shape
├── mem0_driver.py        Mem0 (upstream + bundled mem0-compat)
├── zep_driver.py         Zep cloud / self-host
├── pinecone_driver.py    Pinecone serverless
├── weaviate_driver.py    Weaviate
└── run_all.py            orchestrator → docs/benchmarks/v2-vendors.md
```

## Running

```bash
# 1. EvolutionDB (always available out of the box)
docker compose up -d
make -C client/libevosql-memory

# 2. The two open-source backends that ship as Docker images
docker compose -f docker-compose.bench.yml up -d
pip install pymongo weaviate-client

# 3. The SaaS / upstream backends — set env vars to enable them
export PINECONE_API_KEY=...
export PINECONE_REGION=us-east-1
export ZEP_API_KEY=...           # or ZEP_BASE_URL for self-host
export MEM0_API_KEY=...           # gates the upstream Mem0 driver
pip install pinecone-client zep-python mem0ai

# 4. Sweep
python3 bench/vendors/run_all.py --iters 200
cat docs/benchmarks/v2-vendors.md

# 5. Tear down
docker compose -f docker-compose.bench.yml down
docker compose down
```

The runner gracefully skips any driver whose `is_available()` returns
False, so the sweep is rerunnable on a clean dev box: out of the box
you get the EvolutionDB + Mem0-compat columns; install the rest in
phases.

## Driver contract

```python
class VendorDriver:
    name: str

    def is_available(self) -> bool: ...
    def setup(self) -> None: ...
    def teardown(self) -> None: ...
    def memory_put(self, ns, key, value, embedding=None) -> None: ...
    def memory_get(self, ns, key) -> str: ...
```

A new vendor takes ~ 50-80 lines of driver code; the runner discovers
the class through `bench/vendors/run_all.py`'s import list.

## What we measure

- `put p50/p95/p99`: latency of writing one (namespace, key, value)
  triple, including any vendor-required indexing. JSON value is
  fixed at 56 bytes for fairness.
- `get p50/p95/p99`: latency of reading the just-written key by
  primary identity (vendor's natural lookup path).

We **don't** benchmark vector search here — that's deferred until we
can supply identical embedding distributions across all backends
(some bring their own embedders, some accept raw vectors only). The
LongMemEval-style retrieval bench in `bench/longmemeval/` covers the
retrieval-quality axis.
