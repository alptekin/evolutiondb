#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "parser/evoparser.tab.h"
#include "db/database.h"
#include "db/query_context.h"

typedef void *yyscan_t;
extern int yyparse(void *scanner);
extern int yylex_init(yyscan_t *scanner);
extern int yylex_destroy(yyscan_t scanner);

int main()
{
    freopen("test.txt", "r", stdin);

    QueryContext *qctx = qctx_alloc();
    if (!qctx) {
        fprintf(stderr, "Out of memory for query context\n");
        return 1;
    }
    g_qctx = qctx;

    yyscan_t scanner;
    yylex_init(&scanner);
    yyparse(scanner);
    yylex_destroy(scanner);

    qctx_free(qctx);
    g_qctx = NULL;

    return 0;
}
