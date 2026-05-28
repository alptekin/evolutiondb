# Eval Report — gold_set_v0.yaml

Generated: 2026-05-28T19:21:14

## Configuration

- Embedding provider: `local`
- Embedding model: `BAAI/bge-m3`
- Second embedder (RRF): `e5` (`intfloat/multilingual-e5-large`)
- Lexical scorer: `simple`
- Reranker: `none`
- Query transform: `hyde` (`qwen2.5:7b`)
- Memory prefix: `mcp`
- Search limit: 10
- Query count: 17 (skipped without ideal_keys: 12, skipped unbounded_k: 3)

## Aggregate

| Metric | Value |
|---|---|
| Recall@5     | 0.2353 |
| Recall@10    | 0.2353 |
| MRR          | 0.2647 |
| nDCG@10      | 0.2149 |
| Latency p50  | 9921.43 ms |
| Latency p95  | 15159.78 ms |
| Latency mean | 10377.7 ms |

## By Category

| Category | N | Recall@5 | Recall@10 | MRR | nDCG@10 | Latency p50 |
|---|---|---|---|---|---|---|
| aggregation | 7 | 0.2381 | 0.2381 | 0.3214 | 0.2506 | 11076.55 ms |
| pii | 5 | 0.0 | 0.0 | 0.0 | 0.0 | 10159.21 ms |
| recent | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 9020.55 ms |
| relational | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 12533.29 ms |
| simple_fact | 2 | 0.6667 | 0.6667 | 0.625 | 0.45 | 8961.71 ms |
| synthesis | 1 | 1.0 | 1.0 | 1.0 | 1.0 | 4995.94 ms |

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
