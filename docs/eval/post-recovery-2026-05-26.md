# Eval Report — gold_set_v0.yaml

Generated: 2026-05-26T22:17:40

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
| MRR          | 0.1412 |
| nDCG@10      | 0.115 |
| Latency p50  | 2076.1 ms |
| Latency p95  | 2115.32 ms |
| Latency mean | 2067.97 ms |

## By Category

| Category | N | Recall@5 | Recall@10 | MRR | nDCG@10 | Latency p50 |
|---|---|---|---|---|---|---|
| aggregation | 7 | 0.2143 | 0.2381 | 0.1714 | 0.1569 | 2075.3 ms |
| pii | 5 | 0.0 | 0.0 | 0.0 | 0.0 | 2089.28 ms |
| recent | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 2096.4 ms |
| relational | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 2016.42 ms |
| simple_fact | 2 | 0.1667 | 0.1667 | 0.5 | 0.2346 | 2091.41 ms |
| synthesis | 1 | 1.0 | 1.0 | 0.2 | 0.3869 | 2055.08 ms |

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
