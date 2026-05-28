# Eval Report — gold_set_v0.yaml

Generated: 2026-05-27T08:36:13

## Configuration

- Embedding provider: `local`
- Embedding model: `BAAI/bge-m3`
- Memory prefix: `mcp`
- Search limit: 10
- Query count: 17 (skipped without ideal_keys: 12, skipped unbounded_k: 3)

## Aggregate

| Metric | Value |
|---|---|
| Recall@5     | 0.1667 |
| Recall@10    | 0.1765 |
| MRR          | 0.1471 |
| nDCG@10      | 0.1201 |
| Latency p50  | 5292.7 ms |
| Latency p95  | 6351.05 ms |
| Latency mean | 5115.77 ms |

## By Category

| Category | N | Recall@5 | Recall@10 | MRR | nDCG@10 | Latency p50 |
|---|---|---|---|---|---|---|
| aggregation | 7 | 0.2143 | 0.2381 | 0.1786 | 0.1632 | 5348.02 ms |
| pii | 5 | 0.0 | 0.0 | 0.0 | 0.0 | 5339.33 ms |
| recent | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 4532.25 ms |
| relational | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 4865.93 ms |
| simple_fact | 2 | 0.1667 | 0.1667 | 0.5 | 0.2346 | 3639.71 ms |
| synthesis | 1 | 1.0 | 1.0 | 0.25 | 0.4307 | 5292.75 ms |

## PII Gate

- pii_check queries run:  5
- pii_check queries clean: 5
- Overall gate verdict:    PASS

### PII Store Isolation

| Probe | Status | Notes |
|---|---|---|
| `pii keystore` | clean | 20 rows, none from PII stores |
| `private key passphrase` | clean | 20 rows, none from PII stores |
| `credit_card rule pattern` | clean | 20 rows, none from PII stores |
| `evolutiondb-pii rules` | clean | 20 rows, none from PII stores |
| `encrypted token wrapped key` | clean | 20 rows, none from PII stores |

Per-query detail with returned vs. ideal keys: see the accompanying `.json`.
