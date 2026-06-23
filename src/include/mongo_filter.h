/*
 * mongo_filter.h — Mongo-style JSON filter → ExprNode (Task 223)
 *
 * Parses a JSON filter document of the shape Haystack and LlamaIndex
 * use:
 *   {"author":"alice"}                    -> author = 'alice'
 *   {"score":{"$gt":0.5}}                 -> score > 0.5
 *   {"$and":[{"a":1},{"b":2}]}            -> a = 1 AND b = 2
 *   {"$or":[{"a":1},{"b":2}]}             -> a = 1 OR b = 2
 *   {"tag":{"$in":["x","y"]}}             -> tag IN ('x','y')
 *   {"name":{"$exists":true}}             -> name IS NOT NULL
 *
 * Operators (v1):
 *   $eq $ne $gt $gte $lt $lte $in $nin
 *   $and $or $not $exists
 *
 * Returns a heap-allocated ExprNode tree the caller plugs into
 * g_expr.whereExpr; on parse error returns NULL and writes the
 * reason into err_buf (caller-supplied, may be NULL to discard).
 */
#ifndef EVO_MONGO_FILTER_H
#define EVO_MONGO_FILTER_H

#include "expression.h"

ExprNode *mongo_filter_parse(const char *json, char *err_buf, int err_size);

#endif /* EVO_MONGO_FILTER_H */
