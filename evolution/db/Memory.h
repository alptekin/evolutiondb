/*
 * Memory.h — Long-term agent memory store (Task 205 — Feature #205)
 *
 * `CREATE MEMORY STORE name [WITH (embedding_dim=N, distance='cosine')]`
 * registers a MemoryStoreDesc and auto-creates the backing table
 *   mem_<name>(namespace, mem_key, value, embedding, created_at, ttl_at)
 *
 * Composite uniqueness (namespace, mem_key) is encoded into a single
 * VARCHAR primary key (namespace || \x1F || mem_key) so the existing
 * one-column PK machinery applies. Hierarchical namespace listing
 * walks a prefix range under the same key.
 *
 * DML surface (parser-driven):
 *   MEMORY PUT INTO name VALUES (ns, key, value [, embedding])
 *   MEMORY GET FROM name WHERE NS=ns AND KEY=key
 *   MEMORY SEARCH name USING VECTOR query [LIMIT k]
 *   MEMORY DELETE FROM name WHERE NS=ns AND KEY=key
 *   MEMORY LIST NAMESPACES IN name [PREFIX prefix]
 */
#ifndef MEMORY_H
#define MEMORY_H

void  ResetMemoryOpts(void);

/* Store DDL fields */
void  SetMemoryStoreName(const char *name);
void  SetMemoryEmbeddingDim(int dim);
void  SetMemoryDistance(const char *literal_with_quotes);
void  SetMemoryStoreCascade(int c);

/* DML fields — populated by per-statement parser actions */
void  SetMemoryNs(const char *ns);
void  SetMemoryKey(const char *key);
void  SetMemoryValue(const char *json_or_null);
void  SetMemoryEmbedding(const char *vec_text_or_null);
void  SetMemoryQuery(const char *vec_text);
void  SetMemoryLimit(int n);
void  SetMemoryPrefix(const char *prefix);

int   CreateMemoryStoreProcess(int if_not_exists);
int   DropMemoryStoreProcess(int if_exists);
int   MemoryPutProcess(void);
int   MemoryGetProcess(void);
int   MemorySearchProcess(void);
int   MemoryDeleteProcess(void);
int   MemoryListNamespacesProcess(void);

#endif /* MEMORY_H */
