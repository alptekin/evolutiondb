#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <fcntl.h>
#include "database.h"
#include "apue.h"
#include "apue_db.h"

int DropTableProcess(void)
{
    char datFile[1024];
    char idxFile[1024];
    char metaFile[1024];
    int ok = 0;

    sprintf(datFile, "%s.dat", g_tblDropName);
    sprintf(idxFile, "%s.idx", g_tblDropName);
    sprintf(metaFile, "%s.meta", g_tblDropName);

    if (remove(datFile) == 0)
        ok++;
    if (remove(idxFile) == 0)
        ok++;
    if (remove(metaFile) == 0)
        ok++;

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
    strcat(g_tblDropName, pname);
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
