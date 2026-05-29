# Query-Side Transform Experiment — 2026-05-28

Eval-gated test of the hypothesis from the step-7 forensics: the recall
ceiling is a **cross-source query↔doc semantic gap** (Turkish natural-
language query vs. English/technical document), so rewriting the QUERY
side before embedding should recover coverage that rerank / BM25 / doc-
side enrichment all failed to move.

New: `mcp_server_evosql/query_transform.py` (LLM-backed, OpenAI-compatible
chat client → local ollama). Three modes; `search()` embeds every variant
and **max-pools cosine per row** across them (original query always kept
as variant[0], so dense channels can only gain coverage). Default `off`.

All runs: gold_set_v0, namespace `alptekin_topal` (13,716 rows), prefix
`mcp`, bge-m3 + e5 RRF, **reranker OFF** (isolates the transform), LLM =
qwen2.5:7b. 17 measured queries (12 skipped no-ideal, pii excluded from
quality but PII gate PASS on all runs).

## Aggregate

| Mode | R@5 | R@10 | MRR | nDCG@10 | p95 ms |
|---|---|---|---|---|---|
| baseline (prod-rrf) | 0.1667 | 0.2549 | 0.2451 | 0.2181 | 4080 |
| translate | 0.1863 (+12%) | 0.2549 (0) | 0.2451 (0) | 0.2189 (+0.4%) | 7639 |
| hyde | 0.2353 (+41%) | 0.2353 (−8%) | 0.2647 (+8%) | 0.2149 (−1.5%) | 15160 |
| multi | 0.1961 (+18%) | 0.2647 (+4%) | 0.3039 (+24%) | 0.2367 (+8.5%) | 10417 |

## Read

- **First lever to move Recall@5 on the real corpus.** Every prior
  experiment (rerank, BM25, LLM doc-enrichment) left R@5 flat at 0.1667.
  Query transform broke it. The hypothesis is validated.
- **multi = the only Pareto win**: R@5, R@10, MRR, nDCG ALL up at once.
  Best MRR (+24%) and nDCG (+8.5%). ~2.5x latency.
- **hyde = best R@5 (+41%)** and best on `simple_fact` (0.167→0.667, e.g.
  recovered "şirketin adresi" 0→1.0), but **loses R@10 (−8%)** — it
  sharpens around one answer direction and displaces other relevant docs
  past rank 10. Highest latency (15s). The plan's step-7 +40% R@5 gate is
  effectively met here, but at a coverage/latency cost.
- **translate = cheapest, weakest**: +12% R@5, rest flat. The local model
  misreads Turkish "son" (=latest) as a proper noun; limits the gain.

## Category breakdown (Recall@5)

| category | baseline | translate | hyde | multi |
|---|---|---|---|---|
| aggregation | 0.214 | 0.214 | 0.238 | 0.238 |
| simple_fact | 0.167 | 0.333 | **0.667** | 0.333 |
| recent | 0.000 | 0.000 | 0.000 | 0.000 |
| relational | 0.000 | 0.000 | 0.000 | 0.000 |
| synthesis | 1.000 | 1.000 | 1.000 | 1.000 |

## What query transform does NOT fix (all modes still 0)

These are not retrieval-vocabulary gaps — they're reasoning/aggregation
gaps that need a different layer:

- **q010 relational** ("Süreyya kimle yazışıyor"): returns emails FROM
  Süreyya, not her correspondence WITH others. Directional/relational →
  plan Adım 14-15 (entity + knowledge graph).
- **q017 / q021 aggregation-inference** ("sevdiğim müzik türü" → liked
  YouTube rock videos; "hangi hastalık" → diabetes signals): the system
  retrieves topically-near docs but can't infer the aggregate → plan Adım
  16-17 (episode synthesis + profile clusters).
- **q016 / q019 / q024 specific-fact-in-noise** (Diablo IV purchase, gas
  subscription SMS, new-home address): topically near, specifically wrong.

## Caveats

- Small N (17 measured queries) — percentages are directional, each
  ±1 query swings R@5 by ~6 points.
- Latency is the production blocker: the LLM call (~5-6s on qwen2.5:7b)
  dominates. Mitigations before shipping: transform cache, a faster/
  smaller model, or adaptive (transform only when first-pass recall is
  weak).

## Recommendation

Ship `multi` as the query-transform option (Pareto win, every metric up).
Keep `translate` as the low-latency fallback. The remaining recall misses
are relational/aggregation/profile queries — the next real lever is plan
Adım 14-17, not further retrieval tuning.

Artifacts: `qt-translate-rerankoff-2026-05-28.{json,md}`,
`qt-hyde-rerankoff-2026-05-28.{json,md}`,
`qt-multi-rerankoff-2026-05-28.{json,md}`,
`qt-translate-2026-05-28.{json,md}` (confounded first run, rerank on).
