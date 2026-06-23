/*
 * Document.h — Document store with Mongo-style filter DSL (Task 223,
 * Feature #223). Backs Haystack DocumentStore and LlamaIndex
 * BaseDocumentStore.
 *
 *   CREATE DOCUMENT STORE name [WITH (embedding_dim=N, distance='cosine')]
 *   DROP   DOCUMENT STORE name [IF EXISTS]
 *   DOCUMENT WRITE  INTO name VALUES (id, content, meta [, embedding])
 *   DOCUMENT FILTER FROM name WHERE '<json filter>' [LIMIT n]
 *   DOCUMENT SEARCH name USING VECTOR 'q' [WHERE '<json filter>'] LIMIT k
 *   DOCUMENT DELETE FROM name WHERE '<json filter>'
 */
#ifndef EVO_DOCUMENT_H
#define EVO_DOCUMENT_H

void  ResetDocumentOpts(void);
void  SetDocumentStoreName(const char *name);
void  SetDocumentEmbeddingDim(int dim);
void  SetDocumentDistance(const char *literal_with_quotes);

/* DML staging */
void  SetDocumentId(const char *id);
void  SetDocumentContent(const char *content);
void  SetDocumentMeta(const char *meta_or_null);
void  SetDocumentEmbedding(const char *vec_text_or_null);
void  SetDocumentFilterJson(const char *json);
void  SetDocumentLimit(int n);
void  SetDocumentQuery(const char *vec_text);

int   CreateDocumentStoreProcess(int if_not_exists);
int   DropDocumentStoreProcess(int if_exists);
int   DocumentWriteProcess(void);
int   DocumentFilterProcess(void);
int   DocumentSearchProcess(void);
int   DocumentDeleteProcess(void);

#endif /* EVO_DOCUMENT_H */
