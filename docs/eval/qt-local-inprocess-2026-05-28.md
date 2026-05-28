# Query Transform — In-Process Model (ollama dropped) — 2026-05-28

Follow-up to `qt-query-transform-2026-05-28.md`. The first experiment
ran the rewrite LLM via ollama (qwen2.5:7b, external daemon). To make
the feature auto-install with the package — exactly like the bge-m3 /
e5 embedding models — the backend was rewritten to run **in-process
via transformers** (a small instruction-tuned causal LM that
auto-downloads from HuggingFace, runs on MPS/CPU, no ollama, no
network endpoint). transformers + torch already ship with the
`embeddings-local` extra, so no new heavy dependency.

Model: `Qwen/Qwen2.5-1.5B-Instruct` (in-process, MPS). Same gold set,
namespace `alptekin_topal`, RRF on, reranker off.

## Aggregate (in-process 1.5B)

| Mode | R@5 | R@10 | MRR | nDCG@10 | p95 ms |
|---|---|---|---|---|---|
| baseline (prod-rrf) | 0.1667 | 0.2549 | 0.2451 | 0.2181 | 4080 |
| **translate** | **0.2451 (+47%)** | 0.2549 (0) | 0.2471 (+0.8%) | 0.2239 (+2.7%) | 5927 |
| multi | 0.2255 (+35%) | 0.2353 (−8%) | 0.2471 (+0.8%) | 0.2099 (−4%) | 9420 |
| hyde | 0.1667 (0) | 0.1667 (−35%) | 0.2353 (−4%) | 0.1812 (−17%) | 12289 |

PII gate PASS on all runs.

## Key finding — mode quality scales with model size

The best mode FLIPPED when the generator shrank from 7B to 1.5B:

| Mode | ollama 7B (R@5) | in-process 1.5B (R@5) |
|---|---|---|
| hyde | 0.2353 (+41%, best) | 0.1667 (+0%, collapsed) |
| multi | 0.1961 (+18%, Pareto) | 0.2255 (+35%) |
| translate | 0.1863 (+12%, weakest) | **0.2451 (+47%, best)** |

- **HyDE needs a capable generator.** Writing a *good* hypothetical
  answer passage is hard; the 1.5B model writes weak/generic passages
  that drag retrieval the wrong way (R@10 −35%, nDCG −17%). With the
  7B it was the star; with 1.5B it's the worst.
- **translate is the right task for a small model.** Translation is
  the simplest of the three, so 1.5B does it cleanly: biggest R@5
  gain (+47%), zero regression on R@10/MRR/nDCG, and the lowest added
  latency (5.9s vs 9.4s multi / 12.3s hyde).

## Decision

Production-bound mode changed `multi` → **`translate`** (Claude Desktop
config: `EVOSQL_QUERY_TRANSFORM=translate`, `EVOSQL_QT_MODEL=
Qwen/Qwen2.5-1.5B-Instruct`). multi was chosen under the 7B results;
once the deployed generator is the in-process 1.5B (Yol A), the eval
clearly favors translate — bigger R@5, no regression, fastest.

Rule of thumb captured: **match the transform mode to the generator
size** — small in-process model → translate; large model → hyde/multi.

## Caveats

- Small N (17 measured queries); ±1 query ≈ ±6 R@5 points. Directional.
- Latency still above baseline (translate p95 5.9s vs 4.1s) — the
  in-process generation is the cost. Cheaper than the ollama path's
  multi (10.4s) though.
- Remaining recall misses unchanged (relational/aggregation/profile) —
  next lever is plan Adım 14-17, not retrieval tuning.

Artifacts: `qt-{translate,multi,hyde}-local15b-2026-05-28.{json,md}`.
