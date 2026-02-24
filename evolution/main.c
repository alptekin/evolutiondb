#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "parser/evoparser.tab.h"
#include "db/database.h"

int yyparse(void);
int main()
{
    freopen("test.txt", "r", stdin);

    yyparse();

    return 0;
}