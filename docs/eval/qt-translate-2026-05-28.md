# Eval Report — gold_set_v0.yaml

Generated: 2026-05-28T19:06:27

## Configuration

- Embedding provider: `local`
- Embedding model: `BAAI/bge-m3`
- Second embedder (RRF): `e5` (`intfloat/multilingual-e5-large`)
- Lexical scorer: `simple`
- Reranker: `cross-encoder` (`BAAI/bge-reranker-base`)
- Query transform: `translate` (`qwen2.5:7b`)
- Memory prefix: `mcp`
- Search limit: 10
- Query count: 17 (skipped without ideal_keys: 12, skipped unbounded_k: 3)

## Aggregate

| Metric | Value |
|---|---|
| Recall@5     | 0.1902 |
| Recall@10    | 0.3 |
| MRR          | 0.2373 |
| nDCG@10      | 0.1945 |
| Latency p50  | 28131.8 ms |
| Latency p95  | 39149.08 ms |
| Latency mean | 28965.01 ms |

## By Category

| Category | N | Recall@5 | Recall@10 | MRR | nDCG@10 | Latency p50 |
|---|---|---|---|---|---|---|
| aggregation | 7 | 0.1667 | 0.2619 | 0.2252 | 0.1609 | 30969.94 ms |
| pii | 5 | 0.0 | 0.0 | 0.0 | 0.0 | 37761.71 ms |
| recent | 1 | 0.4 | 0.6 | 1.0 | 0.5983 | 27527.8 ms |
| relational | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 22633.36 ms |
| simple_fact | 2 | 0.3333 | 0.8333 | 0.5625 | 0.5404 | 27742.43 ms |
| synthesis | 1 | 1.0 | 1.0 | 0.3333 | 0.5 | 9625.33 ms |

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
