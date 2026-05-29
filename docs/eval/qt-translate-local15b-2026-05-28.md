# Eval Report — gold_set_v0.yaml

Generated: 2026-05-28T20:17:56

## Configuration

- Embedding provider: `local`
- Embedding model: `BAAI/bge-m3`
- Second embedder (RRF): `e5` (`intfloat/multilingual-e5-large`)
- Lexical scorer: `simple`
- Reranker: `none`
- Query transform: `translate` (`Qwen/Qwen2.5-1.5B-Instruct`)
- Memory prefix: `mcp`
- Search limit: 10
- Query count: 17 (skipped without ideal_keys: 12, skipped unbounded_k: 3)

## Aggregate

| Metric | Value |
|---|---|
| Recall@5     | 0.2451 |
| Recall@10    | 0.2549 |
| MRR          | 0.2471 |
| nDCG@10      | 0.2239 |
| Latency p50  | 5526.49 ms |
| Latency p95  | 5927.46 ms |
| Latency mean | 5529.98 ms |

## By Category

| Category | N | Recall@5 | Recall@10 | MRR | nDCG@10 | Latency p50 |
|---|---|---|---|---|---|---|
| aggregation | 7 | 0.2143 | 0.2381 | 0.2857 | 0.245 | 5695.97 ms |
| pii | 5 | 0.0 | 0.0 | 0.0 | 0.0 | 5415.15 ms |
| recent | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 5897.31 ms |
| relational | 1 | 0.0 | 0.0 | 0.0 | 0.0 | 5647.22 ms |
| simple_fact | 2 | 0.8333 | 0.8333 | 0.6 | 0.5454 | 5313.95 ms |
| synthesis | 1 | 1.0 | 1.0 | 1.0 | 1.0 | 4693.9 ms |

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
