# Eval Report — gold_set_v0.yaml

Generated: 2026-05-28T11:05:46

## Configuration

- Embedding provider: `local`
- Embedding model: `BAAI/bge-m3`
- Lexical scorer: `simple`
- Reranker: `cross-encoder` (`BAAI/bge-reranker-base`)
- Memory prefix: `mcp`
- Search limit: 10
- Query count: 17 (skipped without ideal_keys: 12, skipped unbounded_k: 3)

## Aggregate

| Metric | Value |
|---|---|
| Recall@5     | 0.1667 |
| Recall@10    | 0.1863 |
| MRR          | 0.1765 |
| nDCG@10      | 0.1476 |
| Latency p50  | 5297.05 ms |
| Latency p95  | 6017.92 ms |
| Latency mean | 5290.25 ms |

## By Category

| Category | N | Recall@5 | Recall@10 | MRR | nDCG@10 | Latency p50 |
|---|---|---|---|---|---|---|
| aggregation | 7 | 0.1667 | 0.2143 | 0.2143 | 0.1589 | 5478.45 ms |
| pii | 5 | 0.0 | 0.0 | 0.0 | 0.0 | 5206.43 ms |
| recent | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 4688.33 ms |
| relational | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 4934.98 ms |
| simple_fact | 2 | 0.3333 | 0.3333 | 0.5 | 0.3827 | 3597.12 ms |
| synthesis | 1 | 1.0 | 1.0 | 0.5 | 0.6309 | 5297.05 ms |

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
