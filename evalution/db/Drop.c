#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "database.h"

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
