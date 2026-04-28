# bench/ — agent-memory benchmark harness (Task 219)

Reproducible latency + reactivity benchmarks for EvolutionDB's
agent-memory primitives. Each sub-bench is standalone; `run_all.py`
glues them into a single markdown report at
`docs/benchmarks/v1.md`.

## Layout

```
bench/
├── _common.py              # timing + percentile helpers
├── run_all.py              # orchestrator → docs/benchmarks/v1.md
├── latency/run.py          # memory put/get, checkpoint put/get, search p50/p99
├── reactive/run.py         # NOTIFY push vs polling latency
├── temporal/run.py         # FOR SYSTEM_TIME AS OF vs current snapshot
└── longmemeval/
    ├── loader.py           # LongMemEval JSON → records
    ├── ingest.py           # records → MEMORY STORE
    └── run.py              # recall@k driver (lexical fallback)
```

## Prerequisites

A running EvoSQL server on `127.0.0.1:9967` (default `admin/admin`) and
the C SDK shared library compiled at
`client/libevosql-memory/build/libevosql-memory.{dylib,so}`:

```bash
docker compose up -d            # or: ./adaptor/evosql-server
make -C client/libevosql-memory # build the SDK
```

## Running

```bash
# Single bench
python3 bench/latency/run.py --iters 500
python3 bench/reactive/run.py --iters 200 --poll-interval-ms 1000
python3 bench/temporal/run.py --rows 500 --iters 200
python3 bench/longmemeval/run.py                       # synthetic fixture
python3 bench/longmemeval/run.py --dataset data.json   # public dataset

# Full sweep with markdown report
python3 bench/run_all.py
cat docs/benchmarks/v1.md
```

## Cross-vendor comparison (deferred to v2)

The runner is set up to add Zep, Mem0, `langgraph-store-mongodb`,
and Pinecone alongside EvoSQL in v2 — they ship as separate Docker
images and Task 220's compatibility harness will spin them up. v1
focuses on the EvoSQL-only baseline so we have stable numbers to
regress against.

## CI

`.github/workflows/bench.yml` runs the full sweep weekly (Mondays
03:00 UTC) and uploads `docs/benchmarks/v1.md` as a workflow
artifact. Triggerable manually via the Actions tab.
