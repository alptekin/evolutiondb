# Eval Report — gold_set_v0.yaml

Generated: 2026-05-28T19:27:20

## Configuration

- Embedding provider: `local`
- Embedding model: `BAAI/bge-m3`
- Second embedder (RRF): `e5` (`intfloat/multilingual-e5-large`)
- Lexical scorer: `simple`
- Reranker: `none`
- Query transform: `multi` (`qwen2.5:7b`)
- Memory prefix: `mcp`
- Search limit: 10
- Query count: 17 (skipped without ideal_keys: 12, skipped unbounded_k: 3)

## Aggregate

| Metric | Value |
|---|---|
| Recall@5     | 0.1961 |
| Recall@10    | 0.2647 |
| MRR          | 0.3039 |
| nDCG@10      | 0.2367 |
| Latency p50  | 6200.13 ms |
| Latency p95  | 10417.08 ms |
| Latency mean | 7047.33 ms |

## By Category

| Category | N | Recall@5 | Recall@10 | MRR | nDCG@10 | Latency p50 |
|---|---|---|---|---|---|---|
| aggregation | 7 | 0.2381 | 0.2619 | 0.4286 | 0.2882 | 5858.47 ms |
| pii | 5 | 0.0 | 0.0 | 0.0 | 0.0 | 8459.13 ms |
| recent | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 5466.79 ms |
| relational | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 6758.23 ms |
| simple_fact | 2 | 0.3333 | 0.8333 | 0.5833 | 0.5035 | 5370.9 ms |
| synthesis | 1 | 1.0 | 1.0 | 1.0 | 1.0 | 4673.84 ms |

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
