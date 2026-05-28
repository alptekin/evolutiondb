# Eval Report — gold_set_v0.yaml

Generated: 2026-05-28T20:12:11

## Configuration

- Embedding provider: `local`
- Embedding model: `BAAI/bge-m3`
- Second embedder (RRF): `e5` (`intfloat/multilingual-e5-large`)
- Lexical scorer: `simple`
- Reranker: `none`
- Query transform: `multi` (`Qwen/Qwen2.5-1.5B-Instruct`)
- Memory prefix: `mcp`
- Search limit: 10
- Query count: 17 (skipped without ideal_keys: 12, skipped unbounded_k: 3)

## Aggregate

| Metric | Value |
|---|---|
| Recall@5     | 0.2255 |
| Recall@10    | 0.2353 |
| MRR          | 0.2471 |
| nDCG@10      | 0.2099 |
| Latency p50  | 8182.16 ms |
| Latency p95  | 9420.11 ms |
| Latency mean | 8255.52 ms |

## By Category

| Category | N | Recall@5 | Recall@10 | MRR | nDCG@10 | Latency p50 |
|---|---|---|---|---|---|---|
| aggregation | 7 | 0.2143 | 0.2381 | 0.2857 | 0.2445 | 8552.5 ms |
| pii | 5 | 0.0 | 0.0 | 0.0 | 0.0 | 8182.16 ms |
| recent | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 9007.94 ms |
| relational | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 9420.11 ms |
| simple_fact | 2 | 0.6667 | 0.6667 | 0.6 | 0.4281 | 7987.94 ms |
| synthesis | 1 | 1.0 | 1.0 | 1.0 | 1.0 | 5999.19 ms |

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
