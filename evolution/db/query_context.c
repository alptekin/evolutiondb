/*
 * query_context.c — Thread-local QueryContext allocation
 */
#include <stdlib.h>
#include <string.h>

/* Include expression.h BEFORE query_context.h to get ExprNode
 * without triggering macros on the definition code below. */
#include "expression.h"
#include "query_context.h"

/* Thread-local context pointer */
#if defined(_WIN32)
__declspec(thread) QueryContext *g_qctx = NULL;
#else
__thread QueryContext *g_qctx = NULL;
#endif

QueryContext *qctx_alloc(void)
{
    QueryContext *ctx = (QueryContext *)calloc(1, sizeof(QueryContext));
    if (!ctx) return NULL;

    /* Heap-allocate expression pool (too large for struct) */
    ctx->expr.nodePool = (ExprNode *)calloc(EXPR_POOL_SIZE, sizeof(ExprNode));
    if (!ctx->expr.nodePool) {
        free(ctx);
        return NULL;
    }
    ctx->expr.nodePoolSize = EXPR_POOL_SIZE;

    /* Non-zero defaults (matching old static initializers) */
    ctx->create.primaryKeyIndex = -1;
    ctx->create.autoIncColIndex = -1;
    ctx->create.autoIncStart    = 1;
    ctx->create.autoIncStep     = 1;

    /* Sort context default */
    ctx->select.sortColIndex = -1;

    /* Database/Schema defaults (sane fallback before SessionCtx loads) */
    strncpy(ctx->currentDatabase, "evosql", sizeof(ctx->currentDatabase) - 1);
    strncpy(ctx->currentSchema, "default", sizeof(ctx->currentSchema) - 1);

    return ctx;
}

void qctx_free(QueryContext *ctx)
{
    if (!ctx) return;
    /* Release any LATERAL subquery SQL buffers still held by the select slot */
    for (int i = 0; i < MAX_JOIN_TABLES; i++) {
        if (ctx->select.joinLateralSql[i]) {
            free(ctx->select.joinLateralSql[i]);
            ctx->select.joinLateralSql[i] = NULL;
        }
    }
    free(ctx->expr.nodePool);
    free(ctx);
}
