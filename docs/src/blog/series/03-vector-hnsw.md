# Part 3 — `VECTOR(N)` and HNSW: semantic recall against a live transactional workload

_Series: [Long-Term Memory in EvolutionDB](00-index.md) — previous: [Part 2, `MEMORY STORE` on disk](02-memory-store-internals.md)._

A long-term memory system that can only do exact-match lookup is a
glorified key-value store. The thing that turns it into _memory_ — the
ability to ask "what did the user say that's _kind of like_ this?" — is
semantic search. In EvolutionDB, that's the `VECTOR(N)` type and the
HNSW index sitting on top of it.

This article walks through both. We'll cover how a vector is encoded in
the binary tuple, how `<=>` and friends are dispatched in the
expression engine, what the HNSW module looks like today, why v1 is a
brute-force store hiding behind the HNSW interface, and what it took to
keep recall honest against a live transactional workload.

## The type code

EvolutionDB's tuple format encodes column types as a 32-bit integer:
`typeVal / 10000` is the family, `typeVal % 10000` is the size. So a
`VECTOR(1536)` column has type code `260000 + 1536 = 261536`. Family
`26` is reserved for vectors and nothing else.

The column declaration in `Memory.c` writes this directly:

```c
if (embedding_dim > 0) {
    snprintf(cols[i].col_name, sizeof(cols[i].col_name), "embedding");
    cols[i].type_code = 260000 + embedding_dim;          /* VECTOR(N) */
    cols[i].col_ordinal = i; i++;
}
```

The dimension is part of the type, not the value. This is deliberate —
it means a `VECTOR(1536)` column rejects a 1024-dimensional row at
insert time, because the type-check fires before the encoder runs. No
silent truncation, no padding, no dimension drift between rows in the
same column.

## The on-disk encoding

A vector value is `N × 4 bytes` of little-endian float32, with no length
prefix. `tuple_format.c` carries the comment:

```c
/* VECTOR(N) → N × 4 bytes float4 LE, no length prefix
```

The length prefix is unnecessary because `N` is already pinned by the
type code in the column descriptor — the reader knows how many bytes to
consume without metadata in the value itself. For a 1536-dimensional
embedding, that's 6,144 bytes per row, which is comfortably under the
4 KB tuple soft-limit only if the value is the only large column on
the row. (Memory store values stay well under because the JSON payload
is typically a few hundred bytes; for stores that pack a longer JSON
plus a 1536-vector, the engine will overflow into TOAST-like out-of-line
storage, which is a v3.1 line item.)

Decoding back to text format:

```c
/* VECTOR(N) → read N × 4 bytes float4, format as "[f1,f2,...]".
```

That's what `SELECT embedding FROM ...` returns to a wire client — a
human-readable bracketed list, not the raw float bytes. Round-tripping
through text is lossy for sub-LSB precision, but every embedding model
produces float32-compatible outputs anyway, so in practice the round
trip is exact.

## Distance functions and the operators

There are four built-in distance functions, exposed both as expression
operators and as named functions:

| Operator | Function           | Kind code | What it computes                  |
|----------|--------------------|-----------|------------------------------------|
| `<=>`    | `cosine_distance`  | 0         | `1 - (a·b)/(‖a‖·‖b‖)`              |
| `<->`    | `l2_distance`      | 1         | `√Σ(aᵢ-bᵢ)²` (Euclidean)           |
| `<#>`    | `inner_product`    | 2         | `-(a·b)` (negated for sort order)  |
| `<+>`    | `l1_distance`      | 3         | `Σ|aᵢ-bᵢ|` (Manhattan)             |

Inner product is _negated_ on purpose: every other distance is a
"smaller is closer" measure, and we wanted `ORDER BY ... LIMIT k` to
work uniformly across all four operators. Negating dot product turns
"larger is closer" into "smaller is closer" without exposing the
flip to the user.

The dispatch lives in `expression.c`:

```c
if (e->type == EXPR_VEC_COSINE ||
    e->type == EXPR_VEC_L2 ||
    e->type == EXPR_VEC_INNER ||
    e->type == EXPR_VEC_L1) {
    ...
    case EXPR_VEC_COSINE: kind = 0; break;
    case EXPR_VEC_L2:     kind = 1; break;
    case EXPR_VEC_INNER:  kind = 2; break;
    default:              kind = 3; break;  /* EXPR_VEC_L1 */
    int rc = vec_distance(kind, lbuf, rbuf, out_buf, buf_size);
}
```

There is one quirk worth flagging. The `<=>` operator is _also_ SQL's
null-safe equality operator on non-vector types. The expression engine
keeps both behaviours alive — if either operand is a vector, it routes
to `vec_distance`; otherwise it falls back to null-safe equality. That
means `SELECT 1 <=> 1` still returns `t`, and `SELECT v1 <=> v2` runs
cosine distance, and the parser doesn't have to disambiguate at parse
time. The relevant check sits at the top of the cosine branch:

```c
case CMP_SUBTOK_NULL_EQ:
    type = EXPR_VEC_COSINE;
    break;  /* Task 201: <=> cosine distance
              (falls back to null-safe eq for non-vectors) */
```

This is the kind of decision you make once and then live with — the
alternative was a dedicated `<~>` token that would have collided with
something else in the lexer, and we chose dual-meaning over a new token.

## The HNSW interface

The user-facing DDL is:

```sql
CREATE INDEX user_memory_emb_idx
ON         __mem_user_memory  (embedding vector_cosine_ops)
USING      HNSW
WITH       (m = 16, ef_construction = 64);
```

The `vector_cosine_ops` operator class picks the distance function the
index is built for; `m` and `ef_construction` are the standard HNSW
build parameters (graph degree and search-during-build width). We
copied the names verbatim from the de-facto pgvector convention so
existing tooling works unchanged.

Inside the engine, the index's life cycle is four functions in
`hnsw.h`:

```c
int  hnsw_build(uint32_t table_id, const char *index_name,
                const char *col_name,
                int distance_kind, int m, int ef_construction);

int  hnsw_search_knn(uint32_t table_id, const char *index_name,
                     const char *query_text, int k,
                     HnswHit *out_hits);

int  hnsw_get_stats(uint32_t table_id, const char *index_name,
                    HnswStats *out);

void hnsw_drop(uint32_t table_id, const char *index_name);
```

`hnsw_build` runs at `CREATE INDEX` time. It scans the table, decodes
the `VECTOR(N)` column from each live row (live = visible under the
current snapshot), and stores `(pk_text, vector)` pairs. `hnsw_search_knn`
takes a query string in the same `[f1,f2,...]` format
`tup_extract_fields` produces, and writes up to `k` hits into a
caller-owned array.

## A confession about the v1 implementation

The header is honest about what's underneath:

```c
/* v1 uses an in-memory vector store backed by brute-force distance
 * evaluation — the on-disk HNSW graph and graph traversal are
 * scheduled for v1.1, protected behind the same hnsw_search_knn
 * interface so callers don't need to change. */
```

In other words: the API is HNSW; the implementation today is a
sequential scan with distance computation per row, plus a `partial_sort`
to pick the top `k`. This is faster than it sounds — for the
ten-thousand-row personal memory namespace the MCP bridge produces, a
brute-force pass is well under 10 ms even on a laptop.

The reason we shipped it this way is straightforward: the callers — the
SQL planner, the C SDK, the MCP bridge — care about the _interface_
(top-k semantic search), not the implementation. Putting the brute
force scan behind `hnsw_search_knn` lets every test we want to write
already run, and the eventual graph implementation in v1.1 only has to
preserve the function signature. The day we swap in the real HNSW
graph, every call site keeps working.

The interface choice isn't free, though. Brute force has perfect recall
by definition — every test that asserts `recall@10 ≥ 0.9` against the
v1 index passes trivially. When the graph implementation lands, those
tests will start failing in interesting ways (they should — graph
search is approximate by design), and the recall hard-gate in
`tests/test_hnsw_index.py` will start doing real work. We've kept the
gate in the test file so it's ready.

## Hybrid search — vector + filter

A pure top-k vector search is rarely what an agent actually wants. The
real query is "find the three memories most similar to this query
_that belong to namespace X_" or "_that have tag Y_". That filter
matters: it reduces the candidate set by orders of magnitude and
changes the optimal search strategy.

The engine picks one of two strategies per query, controlled by
`hnsw_search_knn_filter`:

- **Pre-filter** (`HNSW_HYBRID_PRE`): full-scan the filter column, rank
  only the matches. Optimal when the filter is _tight_ — say, a
  namespace that maps to 50 of 10,000 rows.
- **Post-filter** (`HNSW_HYBRID_POST`): HNSW-probe a wider candidate
  set (oversample `k / s` where `s` is the estimated selectivity),
  then keep the rows that match the filter. Optimal when the filter is
  loose — say, "all memories with at least one tag", which might match
  90% of rows.

The auto mode (`HNSW_HYBRID_AUTO`) picks based on the filter's
selectivity from the planner's stats, which it picks up from the
sampled `ANALYZE` histograms (Task 99-102). The trace structure
`HnswHybridTrace` reports the chosen strategy and the actual
selectivity observed at runtime, which `EXPLAIN` surfaces and the
hybrid-search tests assert against.

## Tying it back to `MEMORY SEARCH`

The `MEMORY SEARCH` DML statement compiles down to a regular `SELECT`
with an `ORDER BY ... <=> ... LIMIT k`. The planner sees the vector
operator, looks for a matching HNSW index on the column, and routes
through `hnsw_search_knn` instead of the heap scan. With the namespace
predicate present, the hybrid path fires automatically:

```sql
MEMORY SEARCH user_memory NAMESPACE 'alptekin'
    NEAR  '[0.12, 0.34, ...]'
    LIMIT 5;
```

is rewritten internally to roughly:

```sql
SELECT mem_key, mem_value,
       embedding <=> '[0.12, 0.34, ...]' AS distance
FROM   __mem_user_memory
WHERE  mem_namespace = 'alptekin'
ORDER  BY distance ASC
LIMIT  5;
```

The MCP bridge in Part 1 doesn't use this path yet — `search_memory`
falls back to lexical scoring in Python — because the bridge is
embedding-provider-agnostic. As soon as the user wires up an embedding
model on the application side, `MEMORY SEARCH` becomes the obvious
upgrade and the bridge logic gets simpler, not more complex.

## What's tested

The vector and HNSW code is exercised by:

- `tests/test_vector_type.py` — type code 26xxxx, dimension validation,
  encode/decode round trip, NULL handling.
- `tests/test_distance_functions.py` — all four operators against known
  pairs, the `<=>` non-vector fallback to null-safe equality.
- `tests/test_hnsw_index.py` — `CREATE/DROP INDEX USING HNSW`,
  `hnsw_get_stats` introspection, `recall@10` floor (currently trivial
  for v1, becomes a real gate at v1.1).
- `tests/test_hybrid_search.py` — auto/pre/post strategy selection,
  trace assertions, oversampling correctness.

## What's next

Part 4 covers the temporal layer: how `FOR SYSTEM_TIME AS OF
TRANSACTION N` rewrites a query into a synthetic snapshot, why the
storage engine doesn't need any new on-disk structures to support
time-travel, and what `mvcc_snapshot_at_xid` actually does.

→ [Part 4 — Temporal memory](04-temporal-mvcc.md)
