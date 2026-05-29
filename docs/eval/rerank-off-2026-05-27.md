# Eval Report — gold_set_v0.yaml

Generated: 2026-05-27T00:31:11

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
| Latency p50  | 1848.53 ms |
| Latency p95  | 2014.79 ms |
| Latency mean | 1863.36 ms |

## By Category

| Category | N | Recall@5 | Recall@10 | MRR | nDCG@10 | Latency p50 |
|---|---|---|---|---|---|---|
| aggregation | 7 | 0.2143 | 0.2381 | 0.1786 | 0.1632 | 1918.61 ms |
| pii | 5 | 0.0 | 0.0 | 0.0 | 0.0 | 1829.72 ms |
| recent | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 1977.94 ms |
| relational | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 1726.44 ms |
| simple_fact | 2 | 0.1667 | 0.1667 | 0.5 | 0.2346 | 1678.82 ms |
| synthesis | 1 | 1.0 | 1.0 | 0.25 | 0.4307 | 1762.55 ms |

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
