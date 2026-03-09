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
    ctx->exprNodePool = (ExprNode *)calloc(EXPR_POOL_SIZE, sizeof(ExprNode));
    if (!ctx->exprNodePool) {
        free(ctx);
        return NULL;
    }
    ctx->exprNodePoolSize = EXPR_POOL_SIZE;

    /* Non-zero defaults (matching old static initializers) */
    ctx->primaryKeyIndex = -1;
    ctx->autoIncColIndex = -1;
    ctx->autoIncStart    = 1;
    ctx->autoIncStep     = 1;

    return ctx;
}

void qctx_free(QueryContext *ctx)
{
    if (!ctx) return;
    free(ctx->exprNodePool);
    free(ctx);
}
