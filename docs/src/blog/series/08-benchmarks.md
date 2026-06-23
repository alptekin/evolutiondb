# Part 8 — Benchmarks: what an agent-memory workload actually looks like

_Series: [Long-Term Memory in EvolutionDB](00-index.md) — previous: [Part 7, Multi-tenant memory](07-multi-tenant.md)._

The launch blog quoted six numbers in a small table. This article
unpacks all six: where the workload comes from, how the harness
runs, why an agent-memory workload looks nothing like the TPC-C
shape we'd reflexively build for a database benchmark, and what we
chose _not_ to claim.

## What we're trying to measure

A traditional database benchmark answers _how fast can the engine do X
under sustained load?_ — TPC-C, YCSB, sysbench. An agent-memory
benchmark has a different question: _how does the engine behave under
the access pattern an actual agent produces?_

That distinction matters because the access pattern is unusual. A
typical agent step:

- _One_ `MEMORY GET` with a known key (cache-hot, sub-millisecond).
- _One_ `MEMORY SEARCH` with a fresh embedding (vector index hit, a
  few milliseconds).
- _Zero or one_ `MEMORY PUT` of the conclusion (DML, MVCC, WAL).
- _One_ `CHECKPOINT PUT` of the agent's reasoning state at the end of
  the step (DML, often the largest payload).
- A NOTIFY or two for downstream listeners.

Steps run serially on one logical thread per agent (because LLM calls
are the bottleneck, not the database), but many agents run
concurrently. The shape is _bursty point-lookups + a few large writes
per step_, not the sustained scan-and-update of an OLTP benchmark.

The harness lives at `bench/run_all.py`, with sub-suites in:

- `bench/latency/` — per-operation latency for the six primitive verbs
- `bench/reactive/` — push-vs-poll comparison
- `bench/temporal/` — `AS OF` queries against the same store at
  different ages
- `bench/longmemeval/` — open-domain accuracy on a public agent-memory
  benchmark dataset
- `bench/vendors/` — placeholder runners for the cross-vendor sweep
  (Zep, Mem0, langgraph-store-mongodb, Pinecone) deferred to v3.2

## The latency table, decoded

The six numbers from the launch blog, with how they were measured:

| op                       | p99       | what it means                                              |
|--------------------------|-----------|-------------------------------------------------------------|
| `MEMORY PUT`             | ~ 8 ms    | One `MEMORY PUT INTO ...` round trip, single Python client, single-process server, fsync at commit |
| `MEMORY GET`             | ~ 2 ms    | One PK lookup, B+ tree → tuple decode, one round trip      |
| `CHECKPOINT PUT`         | ~ 5 ms    | One `CHECKPOINT PUT`, JSON payload ~1 KB, fsync at commit  |
| `MEMORY SEARCH` top-10   | ~ 4 ms    | 10k-row store, brute-force HNSW (Part 3), top-10 by cosine |
| NOTIFY push delivery     | ~ 0.4 ms  | publish-to-receive on the same EVO connection              |
| polling at 1 s interval  | ~ 990 ms  | publish at random offset within the 1-second polling window |

A few honest caveats:

**It's the bundled Python client.** The C SDK, the Go binding, and the
Rust binding all show numbers within ±10% of these — the SDK overhead
is small relative to engine time — but the table is consistent on
Python because that's the one most readers will reproduce.

**It's single-process.** No replication, no TLS, no encryption. Each
of those changes the picture: synchronous-commit replication adds
network latency to every PUT (typically +1-3 ms across a LAN); TLS
adds about 100 µs per round trip on first TLS use, less on session
resumption; TDE adds about 2-3 µs per page (which is rounding error
at this scale). The launch table represents the "barebones happy
path" so the relative magnitudes are interpretable.

**The numbers are p99, not average.** Average is ~30% lower across
the board, but quoting averages would be misleading: an agent that
hits a 50 ms outlier on every fifteenth call _feels_ slow, even if
the average is fast. p99 is the right "what does this feel like"
metric.

**Hardware was a 2024-class developer laptop.** Apple M3 Pro, NVMe,
no other processes contending. Server-class hardware is faster but
varies more wildly; we report what's reproducible on commodity gear.

## The reactive comparison

The 2,900× number from the launch blog is the ratio between the last
two rows: `990 / 0.4`. The benchmark for both lives in
`bench/reactive/`. It's the simplest of the suites:

```python
# Push case
sub = conn.subscribe("test_channel", on_event)
publisher.notify("test_channel", "hello")
# measure publisher_send_time → on_event entry time

# Poll case (separate run, otherwise the push subscriber would also notice)
publisher.notify("test_channel", "hello")  # at random offset in [0, 1.0s]
while True:
    rows = conn.query("SELECT * FROM events WHERE seq > %s" % last_seq)
    if rows:
        break
    time.sleep(1.0)
# measure publisher_send_time → loop_break_time
```

The publisher and the consumer are different processes. The clock is
the wall clock on a single host (so there's no clock-skew correction
to argue about). Each case runs 10,000 iterations; we report p50,
p95, p99 for both.

The interesting thing isn't the headline ratio — it's that the push
distribution is _tight_ (p50 ≈ 200 µs, p99 ≈ 400 µs, both small enough
to be noise from other processes) and the poll distribution is
_wide_ (p50 ≈ 500 ms by construction, p99 ≈ 990 ms). For an agent
ticking through a long task, the wide distribution is the part that
hurts: an unlucky run experiences worst-case poll latency on every
event, and the cumulative drag is much worse than the average ratio
suggests.

## The temporal benchmark

`bench/temporal/` measures `FOR SYSTEM_TIME AS OF` against a store
that's been written to at known transaction IDs. The shape is:

1. Populate the store with 10k rows under XID 100.
2. Update half the rows under XID 200.
3. Update the remaining half under XID 300.
4. Run point queries `SELECT mem_value FROM ... FOR SYSTEM_TIME AS OF
   TRANSACTION N WHERE pk = '...'` for `N` = 100, 200, 300.

The pass condition is two-fold: every query at `N=100` returns the
original value, every query at `N=300` returns the latest value, and
the median latency for the historical query is within 50% of the
latency for the live query. The 50% margin is generous; in practice
the difference is closer to 5%, because the visibility predicate
runs the same number of comparisons in both cases.

This benchmark is the empirical evidence behind the claim from Part
4 that temporal queries cost nothing extra at runtime. It's also the
test that would fail _interestingly_ if we accidentally stopped using
the CSN cache: the live query would stay fast, the historical query
would slow down, and the ratio test would catch it.

## LongMemEval

`bench/longmemeval/` runs the public LongMemEval dataset — five
question categories, each with a set of ground-truth Q&A pairs over
a multi-session conversational history. The harness:

1. Ingests the conversation history into a `MEMORY STORE` (with a
   placeholder embedding pipeline; v3.0 ships with a lexical-fallback
   scorer because we didn't want to bake in a specific embedding
   provider).
2. Runs each question through `MEMORY SEARCH`, takes the top-3 hits.
3. Asks an LLM to answer the question conditioned only on those hits.
4. Compares the answer to the ground truth.

The current scoreboard:

| category                 | recall@10 | answer accuracy |
|--------------------------|-----------|------------------|
| single-session-user      | 1.0       | 0.78             |
| single-session-assistant | 1.0       | 0.74             |
| multi-session            | 1.0       | 0.65             |
| temporal                 | 1.0       | 0.61             |
| knowledge-update         | 1.0       | 0.69             |

Two notes:

The recall is `1.0` everywhere because the v3.0 retrieval is
brute-force against a tractable corpus; once the HNSW graph
implementation lands (Part 3), the recall numbers become real and
will sit somewhere below 1.0 by design.

The cross-vendor comparison (us vs Zep, Mem0, langgraph-store-mongodb,
Pinecone) was deferred to v3.2 because each vendor needs its own
Docker image plus a stable embedding pipeline, and we didn't want to
ship questionable comparison numbers in the launch. The harness is
ready; the comparison run is bookkeeping.

## What we deliberately don't claim

A few benchmarks we _could_ run but won't, because they'd mislead:

**Throughput at maximum concurrency.** We can drive the server hard
enough to hit `g_parse_lock` contention and produce a flattering
"100k QPS sustained" number. But at that load every individual query
is slower than the table above suggests, and an agent stepping
serially never sees the throughput case anyway. We benchmark p99
latency at "natural" concurrency (a couple hundred threads, each
ticking through agent steps) instead.

**Single-vector-search QPS.** "Vector DB" benchmarks tend to lead
with this number. We could match it, but the only way agents access
vector search is bundled with the surrounding `MEMORY GET / PUT /
NOTIFY` pattern. A lone vector search QPS is a measurement of an
operation that doesn't happen in production.

**Synthetic-skew workloads.** Skewed key distributions are the
classic way to stress test a B+ tree. Our workload is naturally
skewed (recent memories dominate access frequency), and we benchmark
on that distribution rather than synthesising a worse one. The
worst-case is interesting; we'd rather measure the realistic case
and improve the worst-case opportunistically.

## Reproducing it

The whole harness is one command:

```bash
docker compose up -d
python3 bench/run_all.py --suite all
```

The suite runs in about 8 minutes on the laptop class above; it
prints the per-op p50/p95/p99 table, the reactive comparison, the
temporal latency ratio, and the LongMemEval scoreboard. The output is
stored in `bench/results/<timestamp>.json`, which is the source for
the launch blog table.

There's also a GitHub Actions workflow that runs the full sweep
weekly on `ubuntu-latest` runners; the trend graphs (per-op p99 over
time) are checked into `bench/trends/` and reviewed monthly. Drift
detection is the boring half of benchmarking; without it, every
optimisation eventually slips back over a long enough horizon.

## Closing thoughts on the series

We started this series wanting to know how a long-term memory
backend was actually built. Eight articles later, the answer is mostly
"it isn't." Almost every component on the way down was already in
the database for non-memory reasons — the storage engine, MVCC, WAL,
RLS, replication, TDE, the planner, the buffer pool, the catalog. The
new code is concentrated in the SQL surface (`Memory.c`,
`Checkpoint.c`, the vector type and HNSW), the C client library, and
the framework adapters. Everything underneath was already a database.

That's the part of the story that's easiest to lose in marketing
copy: the "agent-memory backend" framing is a positioning choice; the
underlying claim is that an honest SQL database with the right surface
on top is the same thing as the agent-memory backend you'd otherwise
have to glue together. The benchmarks are how we know that's not just
a claim.

## Where to go next

- The [product article](../2026-05-long-term-memory-medium.md) — the
  same story for a non-engineering audience.
- The repository — [github.com/alptekin/evolutiondb](https://github.com/alptekin/evolutiondb).
  Issues and PRs welcome; the agent-memory tag has a few good
  first-issues if you want to add an adapter for a framework we
  haven't covered.
- ADR-002 — the decision document behind the agent-memory roadmap,
  including the alternatives we considered and rejected.

If you've read all eight articles and want to argue with one of them,
that's also welcome. The comment thread on the product piece is a
fine venue; opening an issue with `[series]` in the title works too.
