#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "catalog_internal.h"
#include "table_api.h"

int DropTableProcess(void)
{
    /* Resolve table via catalog */
    TableDesc td;
    if (tapi_resolve(g_tblDropName, &td, NULL, NULL) < 0) {
        printf("Error: table '%s' not found\n", g_tblDropName);
        TruncateDrop();
        return -1;
    }

    /* Destroy PK B+ tree */
    BTree2 pk_tree = tapi_pk_tree(&td);
    bt2_destroy(&pk_tree);

    /* Free all heap pages */
    tapi_free_heap_pages(&td);

    /* Destroy secondary index B+ trees */
    {
        IndexDesc indexes[16];
        int nIdx = cat_list_indexes(td.table_id, indexes, 16);
        for (int ix = 0; ix < nIdx; ix++) {
            if (indexes[ix].index_type == 'P') continue; /* PK handled above */
            BTree2 idx_tree = { .root_page = indexes[ix].root_page };
            bt2_destroy(&idx_tree);
        }
    }

    /* Drop table from catalog (removes table, columns, indexes, constraints) */
    cat_drop_table(td.table_id);

    printf("command(s) completed successfully!..\n");
    TruncateDrop();

    return 0;
}

int TruncateTableProcess(void)
{
    /* Resolve table via catalog */
    TableDesc td;
    ColumnDesc cols[CAT_MAX_COLUMNS];
    int ncols;
    if (tapi_resolve(g_tblDropName, &td, cols, &ncols) < 0) {
        printf("Error: table '%s' not found\n", g_tblDropName);
        TruncateDrop();
        return -1;
    }

    /* Delete all records: iterate PK B+ tree, delete each from heap */
    BTree2 pk_tree = tapi_pk_tree(&td);
    BTree2Cursor cursor;
    char keyBuf[256];
    RowID rid;

    /* Collect all keys first */
    char (*keys)[256] = (char (*)[256])malloc(200 * 256);
    int count = 0;

    if (!keys) {
        TruncateDrop();
        return -1;
    }

    if (bt2_cursor_first(&pk_tree, &cursor) == 0) {
        while (bt2_cursor_next(&cursor, keyBuf, &rid) == 0 && count < 200) {
            strcpy(keys[count], keyBuf);
            count++;
        }
    }

    /* Delete each record */
    for (int i = 0; i < count; i++) {
        RowID delRid;
        if (bt2_search(&pk_tree, keys[i], &delRid) == 0) {
            tapi_heap_delete(delRid);
            bt2_delete(&pk_tree, keys[i]);
        }
    }

    free(keys);

    printf("command(s) completed successfully!..\n");
    TruncateDrop();

    return 0;
}

int GetDropTableName(char *pname)
{
    db_table_path(pname, g_tblDropName, sizeof(g_tblDropName));
    return 0;
}

int TruncateDrop(void)
{
    int i;

    for (i = 0; i < 1024; ++i) {
        g_tblDropName[i] = '\0';
    }

    return 0;
}
