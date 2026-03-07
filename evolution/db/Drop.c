#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"

int DropTableProcess(void)
{
    char datFile[SAFE_PATH_MAX];
    char idxFile[SAFE_PATH_MAX];
    char metaFile[SAFE_PATH_MAX];
    int ok = 0;

    snprintf(datFile, sizeof(datFile), "%s.dat", g_tblDropName);
    snprintf(idxFile, sizeof(idxFile), "%s.idx", g_tblDropName);
    snprintf(metaFile, sizeof(metaFile), "%s.meta", g_tblDropName);

    if (remove(datFile) == 0)
        ok++;
    if (remove(idxFile) == 0)
        ok++;
    if (remove(metaFile) == 0)
        ok++;

    /* Remove associated indexes */
    {
        char indexesFile[SAFE_PATH_MAX];
        snprintf(indexesFile, sizeof(indexesFile), "%s.indexes", g_tblDropName);
        FILE *fi = fopen(indexesFile, "r");
        if (fi) {
            char line[2048];
            while (fgets(line, sizeof(line), fi)) {
                /* Parse "name:col:btree_path" and remove btree file */
                char *col = strchr(line, ':');
                if (!col) continue;
                col++;
                char *path = strchr(col, ':');
                if (!path) continue;
                path++;
                /* Strip newline */
                int len = (int)strlen(path);
                while (len > 0 && (path[len-1] == '\n' || path[len-1] == '\r'))
                    path[--len] = '\0';
                if (path[0])
                    remove(path);
            }
            fclose(fi);
            remove(indexesFile);
            ok++;
        }
    }

    if (ok > 0)
        printf("command(s) completed successfully!..\n");
    else
        printf("Error: table '%s' not found\n", g_tblDropName);

    TruncateDrop();

    return 0;
}

int TruncateTableProcess(void)
{
    DBHANDLE db;
    char keyBuf[1024];
    char *data;

    /* Check table exists */
    if ((db = db_open(g_tblDropName, O_RDWR, FILE_MODE)) == NULL) {
        printf("Error: table '%s' not found\n", g_tblDropName);
        TruncateDrop();
        return -1;
    }

    /* Collect all keys first, then delete them */
    {
        static char keys[200][256];
        int count = 0, i;

        db_rewind(db);
        while ((data = db_nextrec(db, keyBuf)) != NULL && count < 200) {
            strcpy(keys[count], keyBuf);
            count++;
        }

        for (i = 0; i < count; i++) {
            db_delete(db, keys[i]);
        }
    }

    db_close(db);

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
