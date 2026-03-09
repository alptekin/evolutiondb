#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "parser/evoparser.tab.h"
#include "db/database.h"
#include "db/query_context.h"

int yyparse(void);
int main()
{
    freopen("test.txt", "r", stdin);

    /* Allocate per-query context (required for all query globals) */
    QueryContext *qctx = qctx_alloc();
    if (!qctx) {
        fprintf(stderr, "Out of memory for query context\n");
        return 1;
    }
    g_qctx = qctx;

    yyparse();

    qctx_free(qctx);
    g_qctx = NULL;

    return 0;
}