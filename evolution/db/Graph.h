/*
 * Graph.h — Bitemporal knowledge graph store (Task 224, Feature #224)
 *
 *   CREATE GRAPH STORE name [WITH (embedding_dim=N)]
 *   DROP   GRAPH STORE name [IF EXISTS]
 *
 *   GRAPH UPSERT NODE INTO name VALUES ('id', 'type', 'props')
 *   GRAPH UPSERT EDGE INTO name VALUES ('src', 'rel', 'dst' [, 'props'])
 *
 *   GRAPH NEIGHBORS OF 'id' IN name [DEPTH N] [AS OF 'YYYY-MM-DD HH:MM:SS']
 *   SHOW  GRAPH STORES
 *
 * UPSERT EDGE auto-closes any prior live triple matching (src, rel, dst)
 * by stamping its invalid_at = NOW(). NEIGHBORS BFS filters edges
 * through (valid_from <= as_of AND (invalid_at IS NULL OR invalid_at > as_of))
 * so historical AS OF queries surface the graph that was live at that
 * instant — Zep Graphiti's temporal-edge advantage.
 */
#ifndef EVO_GRAPH_H
#define EVO_GRAPH_H

void  ResetGraphOpts(void);

/* DDL staging */
void  SetGraphStoreName(const char *name);

/* DML staging */
void  SetGraphNodeId(const char *id);
void  SetGraphNodeType(const char *type);
void  SetGraphNodeProps(const char *props_or_null);
void  SetGraphEdgeSrc(const char *src);
void  SetGraphEdgeRel(const char *rel);
void  SetGraphEdgeDst(const char *dst);
void  SetGraphEdgeProps(const char *props_or_null);
void  SetGraphNeighborsId(const char *id);
void  SetGraphNeighborsDepth(int depth);
void  SetGraphNeighborsAsOf(const char *ts);

int   CreateGraphStoreProcess(int if_not_exists);
int   DropGraphStoreProcess(int if_exists);
int   GraphUpsertNodeProcess(void);
int   GraphUpsertEdgeProcess(void);
int   GraphNeighborsProcess(void);

#endif /* EVO_GRAPH_H */
