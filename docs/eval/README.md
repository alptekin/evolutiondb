# Context Layer Eval Reports

This directory holds output from `tests/eval_memory_quality.py`. Each
file pair (`<name>.json` + `<name>.md`) is one eval run, frozen as
historical record.

## Naming convention

- `baseline-YYYY-MM-DD.{json,md}` — initial baseline before any
  Context Layer changes.
- `step-N-<short-tag>-YYYY-MM-DD.{json,md}` — eval after a numbered
  plan step lands.
- `compare-<a>-vs-<b>.md` — manual side-by-side notes (optional).

Example timeline:

```
baseline-2026-05-23.json/md          # Step 2: first baseline
step-04-multilingual-2026-05-30.json # Step 4: bge-m3 swap
step-07-rerank-2026-06-08.json       # Step 7: cross-encoder rerank
step-08-hnsw-graph-2026-06-25.json   # Step 8: true HNSW backend
```

## What a report contains

- **`.json`** — full per-query detail: ideal keys, returned keys,
  individual Recall@5/Recall@10/MRR/nDCG/latency. Machine-readable.
- **`.md`** — aggregate + per-category summary. Human-readable.
  Paste-able into a PR description.

## Regression discipline

Every PR for the Context Layer plan attaches a fresh eval and a
`step-N-delta.md` comparing it to the prior baseline. A negative
delta on `Recall@5` blocks merge — investigate, don't ship.

## Privacy

Reports contain only mem_keys (opaque identifiers) and aggregate
metrics. No row content, no PII. Safe to commit.
