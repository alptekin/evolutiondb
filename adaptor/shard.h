/*
 * shard.h — Shard Routing for EvoSQL Distributed Engine
 *
 * Hash and range sharding support. Resolves shard from key value,
 * routes DML to correct shard node, scatter-gather for full scans.
 */
#ifndef SHARD_H
#define SHARD_H

#include "result.h"
#include "query_executor.h"
#include "../evolution/db/catalog_internal.h"

/* Resolve which shard(s) a key value belongs to.
 * Returns number of matching shard ordinals written to shard_ordinals[].
 * For HASH: always 1 result. For RANGE: 1 result or 0 if no match. */
int shard_resolve(const TableDesc *td, const char *key_value,
                  int *shard_ordinals, int max);

/* Try shard-aware routing for a SQL statement.
 * Returns 1 if handled (shard routing), 0 if local. */
int shard_try_route(const char *sql, const TableDesc *td,
                    ResultSet *rs, SessionCtx *ctx);

/* Scatter-gather: execute query on all shards and merge results. */
int shard_scatter_gather(const TableDesc *td, const char *sql,
                         ResultSet *merged_rs, SessionCtx *ctx);

#endif /* SHARD_H */
