/*
 * Index.c — B-tree index for EvoSQL
 *
 * On-disk format (.evo file):
 *   Header (16 bytes): [root_offset:8][node_count:4][order:2][padding:2]
 *   Nodes (fixed-size): [is_leaf:1][key_count:2][padding:1]
 *                       [keys: ORDER-1 * KEY_SIZE]
 *                       [values: ORDER-1 * VAL_SIZE]   (leaf: PK values)
 *                       [children: ORDER * 8]           (internal: child offsets)
 *
 * Each key is a string (indexed column value).
 * Each value is a string (primary key of the row).
 * For simplicity, duplicate index keys are supported (multiple rows with same value).
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <fcntl.h>
#include <sys/stat.h>
#include <unistd.h>
#include <dirent.h>
#include "apue.h"
#include "database.h"
#include "apue_db.h"

/* Read column names from .meta file (first line, semicolon-separated) */
static int IndexReadColumnNames(const char *tableName,
                                char colNames[][128], int maxCols)
{
    char metaFile[SAFE_PATH_MAX], line[2048];
    int count = 0;
    char *tok;

    snprintf(metaFile, sizeof(metaFile), "%s.meta", tableName);
    FILE *fp = fopen(metaFile, "r");
    if (!fp) return 0;

    if (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\n")] = '\0';
        tok = strtok(line, ";");
        while (tok && count < maxCols) {
            strncpy(colNames[count], tok, 127);
            colNames[count][127] = '\0';
            count++;
            tok = strtok(NULL, ";");
        }
    }
    fclose(fp);
    return count;
}

/* B-tree parameters */
#define BTREE_ORDER    64
#define KEY_SIZE       128
#define VAL_SIZE       128
#define MAX_KEYS       (BTREE_ORDER - 1)  /* 63 */

/* Header: 16 bytes */
typedef struct {
    long   root_offset;    /* offset of root node (0 = empty tree) */
    int    node_count;     /* total nodes allocated */
    short  order;          /* tree order (BTREE_ORDER) */
    short  padding;
} BTreeHeader;

/* Node: fixed size */
typedef struct {
    unsigned char is_leaf;
    unsigned short key_count;
    unsigned char  padding;
    char  keys[MAX_KEYS][KEY_SIZE];
    char  vals[MAX_KEYS][VAL_SIZE];    /* PK values (leaf only) */
    long  children[BTREE_ORDER];       /* child offsets (internal only) */
} BTreeNode;

#define HEADER_SIZE  sizeof(BTreeHeader)
#define NODE_SIZE    sizeof(BTreeNode)

/* ── File I/O helpers ── */

static int read_header(FILE *f, BTreeHeader *h)
{
    fseek(f, 0, SEEK_SET);
    return fread(h, HEADER_SIZE, 1, f) == 1 ? 0 : -1;
}

static int write_header(FILE *f, const BTreeHeader *h)
{
    fseek(f, 0, SEEK_SET);
    return fwrite(h, HEADER_SIZE, 1, f) == 1 ? 0 : -1;
}

static int read_node(FILE *f, long offset, BTreeNode *n)
{
    fseek(f, offset, SEEK_SET);
    return fread(n, NODE_SIZE, 1, f) == 1 ? 0 : -1;
}

static int write_node(FILE *f, long offset, const BTreeNode *n)
{
    fseek(f, offset, SEEK_SET);
    return fwrite(n, NODE_SIZE, 1, f) == 1 ? 0 : -1;
}

static long alloc_node(FILE *f, BTreeHeader *h)
{
    long offset = HEADER_SIZE + (long)h->node_count * NODE_SIZE;
    h->node_count++;
    write_header(f, h);
    return offset;
}

/* String comparison for keys (numeric-aware) */
static int key_cmp(const char *a, const char *b)
{
    /* Try numeric comparison first */
    char *ea, *eb;
    double da = strtod(a, &ea);
    double db = strtod(b, &eb);
    if (*ea == '\0' && *eb == '\0' && ea != a && eb != b) {
        if (da < db) return -1;
        if (da > db) return 1;
        return 0;
    }
    return strcmp(a, b);
}

/* ── B-tree create ── */

int btree_create(const char *path)
{
    FILE *f = fopen(path, "wb");
    if (!f) return -1;

    BTreeHeader h = {0};
    h.order = BTREE_ORDER;
    write_header(f, &h);
    fclose(f);
    return 0;
}

/* ── B-tree insert ── */

/* Split child node at index `idx` of parent */
static void split_child(FILE *f, BTreeHeader *h,
                         BTreeNode *parent, int idx,
                         BTreeNode *child, long child_off)
{
    int mid = MAX_KEYS / 2;  /* 31 */
    BTreeNode new_node;
    memset(&new_node, 0, sizeof(new_node));
    new_node.is_leaf = child->is_leaf;
    new_node.key_count = child->key_count - mid - 1;

    /* Copy upper half of keys/vals to new node */
    int j;
    for (j = 0; j < new_node.key_count; j++) {
        strncpy(new_node.keys[j], child->keys[mid + 1 + j], KEY_SIZE - 1);
        strncpy(new_node.vals[j], child->vals[mid + 1 + j], VAL_SIZE - 1);
    }
    if (!child->is_leaf) {
        for (j = 0; j <= new_node.key_count; j++)
            new_node.children[j] = child->children[mid + 1 + j];
    }

    child->key_count = mid;

    long new_off = alloc_node(f, h);

    /* Shift parent's children and keys to make room */
    for (j = parent->key_count; j > idx; j--) {
        strncpy(parent->keys[j], parent->keys[j - 1], KEY_SIZE);
        strncpy(parent->vals[j], parent->vals[j - 1], VAL_SIZE);
        parent->children[j + 1] = parent->children[j];
    }

    /* Promote middle key to parent */
    strncpy(parent->keys[idx], child->keys[mid], KEY_SIZE);
    strncpy(parent->vals[idx], child->vals[mid], VAL_SIZE);
    parent->children[idx + 1] = new_off;
    parent->key_count++;

    write_node(f, child_off, child);
    write_node(f, new_off, &new_node);
}

/* Insert into a non-full node */
static void insert_nonfull(FILE *f, BTreeHeader *h,
                            BTreeNode *node, long node_off,
                            const char *key, const char *pk)
{
    int i = node->key_count - 1;

    if (node->is_leaf) {
        /* Shift keys right to make room */
        while (i >= 0 && key_cmp(key, node->keys[i]) < 0) {
            strncpy(node->keys[i + 1], node->keys[i], KEY_SIZE);
            strncpy(node->vals[i + 1], node->vals[i], VAL_SIZE);
            i--;
        }
        strncpy(node->keys[i + 1], key, KEY_SIZE - 1);
        node->keys[i + 1][KEY_SIZE - 1] = '\0';
        strncpy(node->vals[i + 1], pk, VAL_SIZE - 1);
        node->vals[i + 1][VAL_SIZE - 1] = '\0';
        node->key_count++;
        write_node(f, node_off, node);
    } else {
        /* Find child to descend into */
        while (i >= 0 && key_cmp(key, node->keys[i]) < 0)
            i--;
        i++;

        BTreeNode child;
        long child_off = node->children[i];
        read_node(f, child_off, &child);

        if (child.key_count == MAX_KEYS) {
            split_child(f, h, node, i, &child, child_off);
            write_node(f, node_off, node);
            if (key_cmp(key, node->keys[i]) > 0) {
                i++;
                child_off = node->children[i];
                read_node(f, child_off, &child);
            }
        }
        insert_nonfull(f, h, &child, child_off, key, pk);
    }
}

int btree_insert(const char *path, const char *key, const char *pk)
{
    FILE *f = fopen(path, "r+b");
    if (!f) return -1;

    BTreeHeader h;
    if (read_header(f, &h) < 0) { fclose(f); return -1; }

    if (h.root_offset == 0) {
        /* Empty tree — create root leaf */
        BTreeNode root;
        memset(&root, 0, sizeof(root));
        root.is_leaf = 1;
        root.key_count = 1;
        strncpy(root.keys[0], key, KEY_SIZE - 1);
        strncpy(root.vals[0], pk, VAL_SIZE - 1);

        long root_off = alloc_node(f, &h);
        h.root_offset = root_off;
        write_header(f, &h);
        write_node(f, root_off, &root);
        fclose(f);
        return 0;
    }

    BTreeNode root;
    read_node(f, h.root_offset, &root);

    if (root.key_count == MAX_KEYS) {
        /* Root is full — split it */
        BTreeNode new_root;
        memset(&new_root, 0, sizeof(new_root));
        new_root.is_leaf = 0;
        new_root.key_count = 0;
        new_root.children[0] = h.root_offset;

        long new_root_off = alloc_node(f, &h);
        split_child(f, &h, &new_root, 0, &root, h.root_offset);
        h.root_offset = new_root_off;
        write_header(f, &h);
        write_node(f, new_root_off, &new_root);

        insert_nonfull(f, &h, &new_root, new_root_off, key, pk);
    } else {
        insert_nonfull(f, &h, &root, h.root_offset, key, pk);
    }

    fclose(f);
    return 0;
}

/* ── B-tree search (exact match) ── */

int btree_search(const char *path, const char *key,
                 char results[][256], int max_results)
{
    FILE *f = fopen(path, "rb");
    if (!f) return 0;

    BTreeHeader h;
    if (read_header(f, &h) < 0 || h.root_offset == 0) {
        fclose(f);
        return 0;
    }

    int count = 0;
    BTreeNode node;
    long offset = h.root_offset;

    while (offset != 0) {
        if (read_node(f, offset, &node) < 0) break;

        int i;
        for (i = 0; i < node.key_count; i++) {
            int c = key_cmp(key, node.keys[i]);
            if (c == 0) {
                /* Found a match — collect the PK */
                if (count < max_results) {
                    strncpy(results[count], node.vals[i], 255);
                    results[count][255] = '\0';
                    count++;
                }
                /* Continue scanning for duplicates in leaf */
                if (node.is_leaf) {
                    /* Check remaining keys in this leaf */
                    int j;
                    for (j = i + 1; j < node.key_count && count < max_results; j++) {
                        if (key_cmp(key, node.keys[j]) == 0) {
                            strncpy(results[count], node.vals[j], 255);
                            results[count][255] = '\0';
                            count++;
                        } else break;
                    }
                }
                fclose(f);
                return count;
            } else if (c < 0) {
                break;
            }
        }

        if (node.is_leaf) break;
        offset = node.children[i];
    }

    fclose(f);
    return count;
}

/* ── B-tree range scan ── */

static void range_scan_node(FILE *f, long offset,
                            const char *lo, const char *hi,
                            int lo_inc, int hi_inc,
                            char results[][256], int max, int *count)
{
    if (offset == 0 || *count >= max) return;

    BTreeNode node;
    if (read_node(f, offset, &node) < 0) return;

    int i;
    for (i = 0; i < node.key_count && *count < max; i++) {
        if (!node.is_leaf)
            range_scan_node(f, node.children[i], lo, hi, lo_inc, hi_inc,
                            results, max, count);

        int clo = lo ? key_cmp(node.keys[i], lo) : 1;
        int chi = hi ? key_cmp(node.keys[i], hi) : -1;

        int in_lo = lo ? (lo_inc ? clo >= 0 : clo > 0) : 1;
        int in_hi = hi ? (hi_inc ? chi <= 0 : chi < 0) : 1;

        if (in_lo && in_hi && *count < max) {
            strncpy(results[*count], node.vals[i], 255);
            results[*count][255] = '\0';
            (*count)++;
        }

        /* If past upper bound, stop */
        if (hi && (hi_inc ? chi > 0 : chi >= 0))
            return;
    }

    /* Visit last child */
    if (!node.is_leaf && *count < max)
        range_scan_node(f, node.children[i], lo, hi, lo_inc, hi_inc,
                        results, max, count);
}

int btree_range(const char *path, const char *lo, const char *hi,
                int lo_inclusive, int hi_inclusive,
                char results[][256], int max_results)
{
    FILE *f = fopen(path, "rb");
    if (!f) return 0;

    BTreeHeader h;
    if (read_header(f, &h) < 0 || h.root_offset == 0) {
        fclose(f);
        return 0;
    }

    int count = 0;
    range_scan_node(f, h.root_offset, lo, hi, lo_inclusive, hi_inclusive,
                    results, max_results, &count);
    fclose(f);
    return count;
}

/* ── B-tree delete ── */

/* Simple lazy delete: find and remove the key+pk pair from the leaf.
 * For a production DB we'd do proper B-tree deletion with rebalancing,
 * but lazy delete (mark & skip) suffices for correctness. */
static int delete_from_node(FILE *f, long offset,
                            const char *key, const char *pk)
{
    if (offset == 0) return 0;

    BTreeNode node;
    if (read_node(f, offset, &node) < 0) return 0;

    int i;
    for (i = 0; i < node.key_count; i++) {
        int c = key_cmp(key, node.keys[i]);
        if (c == 0) {
            if (node.is_leaf) {
                /* Check if pk matches (for duplicate keys) */
                if (pk == NULL || strcmp(node.vals[i], pk) == 0) {
                    /* Remove by shifting left */
                    int j;
                    for (j = i; j < node.key_count - 1; j++) {
                        strncpy(node.keys[j], node.keys[j + 1], KEY_SIZE);
                        strncpy(node.vals[j], node.vals[j + 1], VAL_SIZE);
                    }
                    node.key_count--;
                    memset(node.keys[node.key_count], 0, KEY_SIZE);
                    memset(node.vals[node.key_count], 0, VAL_SIZE);
                    write_node(f, offset, &node);
                    return 1;
                }
                /* Check next entries with same key */
                int j;
                for (j = i + 1; j < node.key_count; j++) {
                    if (key_cmp(key, node.keys[j]) != 0) break;
                    if (pk == NULL || strcmp(node.vals[j], pk) == 0) {
                        /* Remove this one */
                        int k;
                        for (k = j; k < node.key_count - 1; k++) {
                            strncpy(node.keys[k], node.keys[k + 1], KEY_SIZE);
                            strncpy(node.vals[k], node.vals[k + 1], VAL_SIZE);
                        }
                        node.key_count--;
                        memset(node.keys[node.key_count], 0, KEY_SIZE);
                        memset(node.vals[node.key_count], 0, VAL_SIZE);
                        write_node(f, offset, &node);
                        return 1;
                    }
                }
                return 0;
            }
            /* Internal node: descend into right child */
            if (delete_from_node(f, node.children[i + 1], key, pk))
                return 1;
            /* Also try left child */
            return delete_from_node(f, node.children[i], key, pk);
        } else if (c < 0) {
            if (node.is_leaf) return 0;
            return delete_from_node(f, node.children[i], key, pk);
        }
    }

    if (node.is_leaf) return 0;
    return delete_from_node(f, node.children[i], key, pk);
}

int btree_delete(const char *path, const char *key, const char *pk)
{
    FILE *f = fopen(path, "r+b");
    if (!f) return 0;

    BTreeHeader h;
    if (read_header(f, &h) < 0 || h.root_offset == 0) {
        fclose(f);
        return 0;
    }

    int result = delete_from_node(f, h.root_offset, key, pk);
    fclose(f);
    return result;
}

/* ── B-tree drop (delete file) ── */

int btree_drop(const char *path)
{
    return remove(path);
}

/* ── Index metadata (.indexes file) ── */
/* Format: one line per index: "index_name:column_name:btree_path" */

static void get_indexes_path(const char *tblBasePath, char *out, int outSize)
{
    snprintf(out, outSize, "%s.indexes", tblBasePath);
}

int index_exists(const char *tblPath, const char *colName,
                 char *idxPath, int idxPathSize)
{
    char indexesFile[1024];
    get_indexes_path(tblPath, indexesFile, sizeof(indexesFile));

    FILE *f = fopen(indexesFile, "r");
    if (!f) return 0;

    char line[2048];
    while (fgets(line, sizeof(line), f)) {
        /* Strip newline */
        int len = (int)strlen(line);
        while (len > 0 && (line[len-1] == '\n' || line[len-1] == '\r'))
            line[--len] = '\0';

        /* Parse "name:column:path" */
        char *col = strchr(line, ':');
        if (!col) continue;
        col++;
        char *path = strchr(col, ':');
        if (!path) continue;
        *path = '\0';
        path++;

        if (strcasecmp(col, colName) == 0) {
            if (idxPath)
                strncpy(idxPath, path, idxPathSize - 1);
            fclose(f);
            return 1;
        }
    }
    fclose(f);
    return 0;
}

int index_list_for_table(const char *tblPath, char names[][256],
                         char cols[][256], char paths[][1024], int max)
{
    char indexesFile[1024];
    get_indexes_path(tblPath, indexesFile, sizeof(indexesFile));

    FILE *f = fopen(indexesFile, "r");
    if (!f) return 0;

    int count = 0;
    char line[2048];
    while (fgets(line, sizeof(line), f) && count < max) {
        int len = (int)strlen(line);
        while (len > 0 && (line[len-1] == '\n' || line[len-1] == '\r'))
            line[--len] = '\0';

        char *col = strchr(line, ':');
        if (!col) continue;
        *col = '\0';
        col++;
        char *path = strchr(col, ':');
        if (!path) continue;
        *path = '\0';
        path++;

        strncpy(names[count], line, 255);
        strncpy(cols[count], col, 255);
        strncpy(paths[count], path, 1023);
        count++;
    }
    fclose(f);
    return count;
}

/* ── CREATE INDEX / DROP INDEX process functions ── */

void SetIndexInfo(const char *idxName, const char *tblName, const char *colName)
{
    strncpy(g_indexName, idxName, sizeof(g_indexName) - 1);
    g_indexName[sizeof(g_indexName) - 1] = '\0';
    strncpy(g_indexTableName, tblName, sizeof(g_indexTableName) - 1);
    g_indexTableName[sizeof(g_indexTableName) - 1] = '\0';
    strncpy(g_indexColumnName, colName, sizeof(g_indexColumnName) - 1);
    g_indexColumnName[sizeof(g_indexColumnName) - 1] = '\0';
}

void SetDropIndexName(const char *idxName)
{
    strncpy(g_indexName, idxName, sizeof(g_indexName) - 1);
    g_indexName[sizeof(g_indexName) - 1] = '\0';
}

int CreateIndexProcess(void)
{
    char tblPath[1024];
    char btreePath[1024];
    char indexesFile[1024];
    char metaPath[1024];

    /* Resolve table path */
    db_table_path(g_indexTableName, tblPath, sizeof(tblPath));

    /* Verify table exists by checking .meta */
    db_meta_path(g_indexTableName, metaPath, sizeof(metaPath));
    {
        FILE *f = fopen(metaPath, "r");
        if (!f) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "table '%s' does not exist", g_indexTableName);
            g_gui_error = 1;
            return -1;
        }
        fclose(f);
    }

    /* Verify column exists */
    {
        char colNames[64][128];
        int numCols = IndexReadColumnNames(tblPath, colNames, 64);
        int found = 0, i;
        for (i = 0; i < numCols; i++) {
            if (strcasecmp(colNames[i], g_indexColumnName) == 0) {
                found = 1;
                break;
            }
        }
        if (!found) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "column '%s' does not exist in table '%s'",
                     g_indexColumnName, g_indexTableName);
            g_gui_error = 1;
            return -1;
        }
    }

    /* Build btree file path: same directory as table, named <index>.evo */
    {
        /* Get directory of table */
        char dir[1024];
        strncpy(dir, tblPath, sizeof(dir) - 1);
        char *slash = strrchr(dir, '/');
        if (slash) *(slash + 1) = '\0';
        else strcpy(dir, "./");
        snprintf(btreePath, sizeof(btreePath), "%s%s.evo", dir, g_indexName);
    }

    /* Check if index already exists */
    if (index_exists(tblPath, g_indexColumnName, NULL, 0)) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "index already exists on column '%s'", g_indexColumnName);
        g_gui_error = 1;
        return -1;
    }

    /* Create .evo file */
    if (btree_create(btreePath) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "failed to create index file");
        g_gui_error = 1;
        return -1;
    }

    /* Populate index from existing data */
    {
        DBHANDLE db = db_open(tblPath, O_RDONLY, FILE_MODE);
        if (db) {
            char colNames[64][128];
            int numCols = IndexReadColumnNames(tblPath, colNames, 64);
            int colIdx = -1, i;
            for (i = 0; i < numCols; i++) {
                if (strcasecmp(colNames[i], g_indexColumnName) == 0) {
                    colIdx = i;
                    break;
                }
            }

            if (colIdx >= 0) {
                char keyBuf[1024];
                char *rec;
                db_rewind(db);
                while ((rec = db_nextrec(db, keyBuf)) != NULL) {
                    /* Extract column value from record */
                    char colVal[256] = "";
                    char tmp[RECORD_BUF_SIZE];
                    strncpy(tmp, rec, sizeof(tmp) - 1);
                    tmp[sizeof(tmp) - 1] = '\0';
                    char *tok = strtok(tmp, ";");
                    int ci = 0;
                    while (tok && ci <= colIdx) {
                        if (ci == colIdx) {
                            strncpy(colVal, tok, sizeof(colVal) - 1);
                            break;
                        }
                        ci++;
                        tok = strtok(NULL, ";");
                    }
                    if (colVal[0])
                        btree_insert(btreePath, colVal, keyBuf);
                }
            }
            db_close(db);
        }
    }

    /* Register index in .indexes file */
    get_indexes_path(tblPath, indexesFile, sizeof(indexesFile));
    {
        FILE *f = fopen(indexesFile, "a");
        if (f) {
            fprintf(f, "%s:%s:%s\n", g_indexName, g_indexColumnName, btreePath);
            fclose(f);
        }
    }

    printf("Index '%s' created on %s(%s).\n",
           g_indexName, g_indexTableName, g_indexColumnName);
    return 0;
}

int DropIndexProcess(void)
{
    /* Search all tables in current schema for the index name */
    char schemaDir[1024];
    snprintf(schemaDir, sizeof(schemaDir), "%s/%s/%s",
             db_get_root(), db_get_current_database(), db_get_current_schema());

    /* Find the index in .indexes files */
    char cmd[2048];
    char found_indexes_file[1024] = "";
    char found_btree_path[1024] = "";

    /* Scan directory for .indexes files */
    {
        char dirPath[1024];
        strncpy(dirPath, schemaDir, sizeof(dirPath) - 1);

        /* Use platform-independent approach: try known table names */
        /* Actually, iterate .indexes files by scanning .meta files */
        DIR *d = opendir(dirPath);
        if (!d) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "cannot open schema directory");
            g_gui_error = 1;
            return -1;
        }

        struct dirent *ent;
        while ((ent = readdir(d)) != NULL) {
            /* Look for .indexes files */
            char *ext = strstr(ent->d_name, ".indexes");
            if (!ext || ext[8] != '\0') continue;

            char idxFile[1024];
            snprintf(idxFile, sizeof(idxFile), "%s/%s", dirPath, ent->d_name);

            FILE *f = fopen(idxFile, "r");
            if (!f) continue;

            char line[2048];
            char remaining[4096] = "";
            int found = 0;

            while (fgets(line, sizeof(line), f)) {
                /* Parse "name:col:path" */
                char lineCopy[2048];
                strncpy(lineCopy, line, sizeof(lineCopy) - 1);
                lineCopy[sizeof(lineCopy) - 1] = '\0';

                /* Strip newline */
                int len = (int)strlen(lineCopy);
                while (len > 0 && (lineCopy[len-1] == '\n' || lineCopy[len-1] == '\r'))
                    lineCopy[--len] = '\0';

                char *col = strchr(lineCopy, ':');
                if (!col) { strcat(remaining, line); continue; }
                *col = '\0';

                if (strcasecmp(lineCopy, g_indexName) == 0) {
                    /* Found it — extract btree path */
                    col++;
                    char *path = strchr(col, ':');
                    if (path) {
                        path++;
                        strncpy(found_btree_path, path, sizeof(found_btree_path) - 1);
                    }
                    strncpy(found_indexes_file, idxFile, sizeof(found_indexes_file) - 1);
                    found = 1;
                } else {
                    /* Restore colon and keep this line */
                    *col = ':'; /* undo the split above */
                    /* Actually, just append the original line */
                    strcat(remaining, line);
                }
            }
            fclose(f);

            if (found) {
                /* Rewrite .indexes file without the dropped index */
                f = fopen(idxFile, "w");
                if (f) {
                    if (remaining[0])
                        fputs(remaining, f);
                    fclose(f);
                }

                /* Delete .evo file */
                if (found_btree_path[0])
                    btree_drop(found_btree_path);

                closedir(d);
                printf("Index '%s' dropped.\n", g_indexName);
                return 0;
            }
        }
        closedir(d);
    }

    snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
             "index '%s' does not exist", g_indexName);
    g_gui_error = 1;
    return -1;
}
