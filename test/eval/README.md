# MCP Memory Retrieval Eval Set

This directory holds the gold standard for measuring MCP memory
retrieval quality. Every step in the Context Layer roadmap is gated
on improvement against the metrics this set produces.

## Why this exists

Without ground truth, "we improved retrieval" is opinion. With it,
the claim is a number you can put in a release note, defend in a
sales call, and use to reject regressing PRs automatically.

## Files

- `gold_set_v0.yaml` — seed template, 10 example queries across four
  categories. Fill `ideal_keys` per query to make each one count
  toward the score.
- (added later) `gold_set_v1.yaml`, `gold_set_v2.yaml` — append-only
  versions as the corpus and question style evolve.

## Categories

The set targets 40 queries total, 10 per category:

| Category    | What it tests                                       |
|-------------|-----------------------------------------------------|
| simple_fact | Single-entity recall ("X'in e-postası ne")          |
| recent      | Time-bounded retrieval ("son hafta X")              |
| aggregation | Cross-row synthesis ("en çok X")                    |
| relational  | Multi-entity / graph queries ("X'te kim aktif")     |

Baseline expectation: `simple_fact` should already score high
(~%80+); `aggregation` is expected to score low without the
synthesis layer (Steps 14-16 of the plan).

## Workflow to label a query

```bash
# 1. Find candidate keys for a query
export MCP_USER_ID="<your-user-id>"
export EVOSQL_EMBEDDING_PROVIDER=local   # or openai
python tests/eval_memory_quality.py \
    --collect "Süreyya'nın e-postası ne" \
    --prefix mcp

# Output: top-20 candidates with key + truncated fact, plus a hint
# to copy the best 3-5 keys into the YAML.
```

```bash
# 2. Edit gold_set_v0.yaml, paste the keys under ideal_keys for q001:
#
#   - id: q001
#     category: simple_fact
#     query: "Süreyya'nın e-postası ne"
#     ideal_keys:
#       - mem_1747823491_a1b2c3
#       - mem_1747823498_d4e5f6
#       - mem_1747823505_g7h8i9
```

Repeat for every query. You can start running the eval with as few
as 5 labeled queries; aim for ≥20 before treating the score as
representative, and 40 before locking in the baseline.

## Running the full eval

```bash
# 3. From repo root:
export MCP_USER_ID="<your-user-id>"
export EVOSQL_EMBEDDING_PROVIDER=local
python tests/eval_memory_quality.py \
    --gold tests/eval/gold_set_v0.yaml \
    --out  docs/eval/baseline-$(date +%Y-%m-%d)
```

Writes two files:

- `<out>.json` — full per-query detail (ideal vs. returned, latency)
- `<out>.md`   — aggregate + per-category summary

The CLI also prints the headline numbers to stdout:
`Recall@5=... MRR=... p95=...ms`.

## Discipline

- **Append-only.** Never mutate a query once labeled. If data drifts
  and the labels become wrong, add a new `id` (e.g. `q001_v2`) so
  historical comparisons stay valid.
- **PR-gated.** Every Context Layer PR runs this and includes
  `docs/eval/step-N-delta.md` showing the metric movement. Recall@5
  regressions block merge.
- **Two embedding providers.** Run baseline with both `local` and
  `openai` to know which path you're improving against.
- **Privacy.** The eval reads but never writes; `ideal_keys` are
  identifiers, not PII. The harness never logs row content beyond
  the truncated `--collect` preview.

## When to retire `gold_set_v0`

Cut `gold_set_v1` once one of these is true:

- The corpus changes shape (new data source onboarded, schema
  migration) and a meaningful fraction of v0 ideal_keys no longer
  exist.
- You learn that the v0 question style is too narrow (e.g. all
  queries are in Turkish; you need EN coverage too).
- The set hits ceiling (Recall@5 > 0.95 across all categories);
  it stops being a useful gradient.

Never delete `gold_set_v0` — keep it for trend reporting.
