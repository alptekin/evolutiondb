/*
 * test_catalog.c — Unit tests for System Catalog
 *
 * Build:  gcc -Wall -g -I../evolution/db -o test_catalog test_catalog.c \
 *         ../evolution/db/catalog_internal.c ../evolution/db/btree2.c \
 *         ../evolution/db/page_mgr.c ../evolution/db/slotted.c \
 *         ../evolution/db/buffer_pool.c ../evolution/db/error.c \
 *         ../evolution/db/database_globals.c ../evolution/db/query_context.c \
 *         -lpthread
 */
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

#include "page_mgr.h"
#include "buffer_pool.h"
#include "btree2.h"
#include "catalog_internal.h"

#define TEST_FILE "/tmp/test_catalog.db"

static int tests_passed = 0;
static int tests_failed = 0;

#define TEST(name) do { printf("  %-55s ", name); } while(0)
#define PASS()     do { printf("PASS\n"); tests_passed++; } while(0)
#define FAIL(msg)  do { printf("FAIL: %s\n", msg); tests_failed++; } while(0)
#define ASSERT(cond, msg) do { if (!(cond)) { FAIL(msg); return; } } while(0)

static void setup(void)
{
    unlink(TEST_FILE);
    bp_init(256);
    pgm_init(TEST_FILE);
    cat_init();
}

static void teardown(void)
{
    cat_shutdown();
    pgm_shutdown();
    bp_destroy();
    unlink(TEST_FILE);
}

/* ----------------------------------------------------------------
 *  Bootstrap tests
 * ---------------------------------------------------------------- */

static void test_bootstrap_creates_trees(void)
{
    TEST("Bootstrap creates all 8 catalog B+ trees");
    for (int i = 0; i < CAT_MAX; i++) {
        uint32_t root = pgm_get_catalog_root((CatalogID)i);
        ASSERT(root != 0, "catalog root should be non-zero");
    }
    PASS();
}

static void test_bootstrap_default_database(void)
{
    TEST("Bootstrap creates default 'evosql' database");
    DatabaseDesc db;
    int ret = cat_find_database("evosql", &db);
    ASSERT(ret == 0, "evosql database not found");
    ASSERT(db.db_id == 1, "db_id should be 1");
    ASSERT(strcmp(db.db_name, "evosql") == 0, "name mismatch");
    PASS();
}

static void test_bootstrap_default_schema(void)
{
    TEST("Bootstrap creates default 'default' schema");
    SchemaDesc s;
    int ret = cat_find_schema(1, "default", &s);
    ASSERT(ret == 0, "default schema not found");
    ASSERT(s.schema_id == 1, "schema_id should be 1");
    ASSERT(s.db_id == 1, "db_id should be 1");
    PASS();
}

static void test_bootstrap_default_user(void)
{
    TEST("Bootstrap creates default 'admin' user");
    UserDesc u;
    int ret = cat_find_user("admin", &u);
    ASSERT(ret == 0, "admin user not found");
    ASSERT(strcmp(u.username, "admin") == 0, "username mismatch");
    PASS();
}

static void test_bootstrap_idempotent(void)
{
    TEST("Bootstrap is idempotent across restart");
    cat_shutdown();
    pgm_shutdown();
    bp_destroy();

    /* Reinitialize */
    bp_init(256);
    pgm_init(TEST_FILE);
    cat_init();

    DatabaseDesc db;
    ASSERT(cat_find_database("evosql", &db) == 0, "evosql gone after restart");
    ASSERT(db.db_id == 1, "db_id changed after restart");

    SchemaDesc s;
    ASSERT(cat_find_schema(1, "default", &s) == 0, "schema gone after restart");
    PASS();
}

/* ----------------------------------------------------------------
 *  Database tests
 * ---------------------------------------------------------------- */

static void test_create_database(void)
{
    TEST("Create and find a new database");
    int id = cat_create_database("testdb");
    ASSERT(id > 0, "create_database failed");

    DatabaseDesc db;
    int ret = cat_find_database("testdb", &db);
    ASSERT(ret == 0, "database not found");
    ASSERT(db.db_id == (uint32_t)id, "db_id mismatch");
    PASS();
}

static void test_create_duplicate_database(void)
{
    TEST("Duplicate database name returns -1");
    int ret = cat_create_database("evosql");
    ASSERT(ret == -1, "should reject duplicate");
    PASS();
}

static void test_drop_database(void)
{
    TEST("Drop database, find returns -1");
    cat_create_database("tempdb");
    int ret = cat_drop_database("tempdb");
    ASSERT(ret == 0, "drop failed");

    DatabaseDesc db;
    ret = cat_find_database("tempdb", &db);
    ASSERT(ret == -1, "should not find dropped db");
    PASS();
}

static void test_list_databases(void)
{
    TEST("List databases returns all entries");
    cat_create_database("db_a");
    cat_create_database("db_b");

    DatabaseDesc dbs[16];
    int count = cat_list_databases(dbs, 16);
    /* evosql + testdb + db_a + db_b = 4 (tempdb was dropped) */
    ASSERT(count >= 4, "should list at least 4 databases");
    PASS();
}

/* ----------------------------------------------------------------
 *  Schema tests
 * ---------------------------------------------------------------- */

static void test_create_schema(void)
{
    TEST("Create and find schema");
    int id = cat_create_schema(1, "public");
    ASSERT(id > 0, "create_schema failed");

    SchemaDesc s;
    int ret = cat_find_schema(1, "public", &s);
    ASSERT(ret == 0, "schema not found");
    ASSERT(strcmp(s.schema_name, "public") == 0, "name mismatch");
    PASS();
}

static void test_schema_isolation(void)
{
    TEST("Same schema name under different dbs are distinct");
    DatabaseDesc db;
    cat_find_database("db_a", &db);
    uint32_t db_a_id = db.db_id;

    int s1 = cat_create_schema(db_a_id, "shared");
    ASSERT(s1 > 0, "schema under db_a failed");

    cat_find_database("db_b", &db);
    uint32_t db_b_id = db.db_id;

    int s2 = cat_create_schema(db_b_id, "shared");
    ASSERT(s2 > 0, "schema under db_b failed");
    ASSERT(s1 != s2, "schema IDs should differ");
    PASS();
}

static void test_list_schemas(void)
{
    TEST("List schemas for a specific database");
    SchemaDesc schemas[16];
    int count = cat_list_schemas(1, schemas, 16);
    ASSERT(count >= 2, "should have at least 'default' and 'public'");
    PASS();
}

/* ----------------------------------------------------------------
 *  Table tests
 * ---------------------------------------------------------------- */

static void test_create_table(void)
{
    TEST("Create table with 3 columns");
    ColumnDesc cols[3];
    memset(cols, 0, sizeof(cols));

    strcpy(cols[0].col_name, "id");
    cols[0].type_code = 10004;  /* INT(4) */
    cols[0].is_pk = 1;
    cols[0].is_not_null = 1;

    strcpy(cols[1].col_name, "name");
    cols[1].type_code = 130050;  /* VARCHAR(50) */

    strcpy(cols[2].col_name, "age");
    cols[2].type_code = 10004;

    int id = cat_create_table(1, "users", cols, 3, 256, -1, 0, 0);
    ASSERT(id > 0, "create_table failed");

    TableDesc t;
    int ret = cat_find_table(1, "users", &t);
    ASSERT(ret == 0, "table not found");
    ASSERT(t.num_columns == 3, "num_columns mismatch");
    ASSERT(strcmp(t.table_name, "users") == 0, "name mismatch");
    ASSERT(t.pk_root_page > 0, "pk_root should be allocated");
    PASS();
}

static void test_create_table_auto_inc(void)
{
    TEST("Create table with auto-increment");
    ColumnDesc cols[2];
    memset(cols, 0, sizeof(cols));

    strcpy(cols[0].col_name, "id");
    cols[0].type_code = 10004;
    cols[0].is_pk = 1;

    strcpy(cols[1].col_name, "data");
    cols[1].type_code = 130100;

    int id = cat_create_table(1, "auto_tbl", cols, 2, 128, 0, 1, 1);
    ASSERT(id > 0, "create failed");

    TableDesc t;
    cat_find_table(1, "auto_tbl", &t);
    ASSERT(t.auto_inc_col == 0, "auto_inc_col mismatch");
    ASSERT(t.auto_inc_counter == 1, "auto_inc_counter mismatch");
    ASSERT(t.auto_inc_step == 1, "auto_inc_step mismatch");
    PASS();
}

static void test_find_columns(void)
{
    TEST("Find columns returns correct count and order");
    TableDesc t;
    cat_find_table(1, "users", &t);

    ColumnDesc cols[16];
    int count = cat_find_columns(t.table_id, cols, 16);
    ASSERT(count == 3, "should have 3 columns");
    ASSERT(strcmp(cols[0].col_name, "id") == 0, "first column should be 'id'");
    ASSERT(strcmp(cols[1].col_name, "name") == 0, "second column should be 'name'");
    ASSERT(strcmp(cols[2].col_name, "age") == 0, "third column should be 'age'");
    ASSERT(cols[0].is_pk == 1, "id should be pk");
    ASSERT(cols[1].type_code == 130050, "name type_code mismatch");
    PASS();
}

static void test_drop_table(void)
{
    TEST("Drop table removes table and columns");
    ColumnDesc cols[1];
    memset(cols, 0, sizeof(cols));
    strcpy(cols[0].col_name, "x");
    cols[0].type_code = 10004;

    int id = cat_create_table(1, "drop_me", cols, 1, 64, -1, 0, 0);
    ASSERT(id > 0, "create failed");

    int ret = cat_drop_table((uint32_t)id);
    ASSERT(ret == 0, "drop failed");

    TableDesc t;
    ret = cat_find_table(1, "drop_me", &t);
    ASSERT(ret == -1, "should not find dropped table");

    ColumnDesc found_cols[16];
    int count = cat_find_columns((uint32_t)id, found_cols, 16);
    ASSERT(count == 0, "columns should be deleted");
    PASS();
}

static void test_update_auto_inc(void)
{
    TEST("Update auto-increment counter");
    TableDesc t;
    cat_find_table(1, "auto_tbl", &t);

    int ret = cat_update_auto_inc(t.table_id, "auto_tbl", 1, 42);
    ASSERT(ret == 0, "update failed");

    cat_find_table(1, "auto_tbl", &t);
    ASSERT(t.auto_inc_counter == 42, "counter should be 42");
    PASS();
}

/* ----------------------------------------------------------------
 *  Index tests
 * ---------------------------------------------------------------- */

static void test_create_index(void)
{
    TEST("Create and find index");
    TableDesc t;
    cat_find_table(1, "users", &t);

    int ret = cat_create_index(t.table_id, "idx_name", 100, "name", 'N');
    ASSERT(ret == 0, "create_index failed");

    IndexDesc idx;
    ret = cat_find_index(t.table_id, "idx_name", &idx);
    ASSERT(ret == 0, "index not found");
    ASSERT(idx.root_page == 100, "root_page mismatch");
    ASSERT(idx.index_type == 'N', "type mismatch");
    PASS();
}

static void test_list_indexes(void)
{
    TEST("List indexes for table");
    TableDesc t;
    cat_find_table(1, "users", &t);

    cat_create_index(t.table_id, "idx_age", 200, "age", 'N');

    IndexDesc indexes[16];
    int count = cat_list_indexes(t.table_id, indexes, 16);
    ASSERT(count >= 2, "should have at least 2 indexes");
    PASS();
}

static void test_drop_index(void)
{
    TEST("Drop index, find returns -1");
    TableDesc t;
    cat_find_table(1, "users", &t);

    int ret = cat_drop_index(t.table_id, "idx_age");
    ASSERT(ret == 0, "drop failed");

    IndexDesc idx;
    ret = cat_find_index(t.table_id, "idx_age", &idx);
    ASSERT(ret == -1, "should not find dropped index");
    PASS();
}

/* ----------------------------------------------------------------
 *  Constraint tests
 * ---------------------------------------------------------------- */

static void test_add_constraint(void)
{
    TEST("Add CHECK constraint and list it");
    TableDesc t;
    cat_find_table(1, "users", &t);

    int ret = cat_add_constraint(t.table_id, 'C', "age > 0", 0, "");
    ASSERT(ret == 0, "add_constraint failed");

    ConstraintDesc cons[16];
    int count = cat_list_constraints(t.table_id, cons, 16);
    ASSERT(count >= 1, "should have at least 1 constraint");
    ASSERT(cons[0].constraint_type == 'C', "type mismatch");
    PASS();
}

/* ----------------------------------------------------------------
 *  User tests
 * ---------------------------------------------------------------- */

static void test_create_user(void)
{
    TEST("Create and find user");
    int ret = cat_create_user("bob", "hash_abc123");
    ASSERT(ret == 0, "create_user failed");

    UserDesc u;
    ret = cat_find_user("bob", &u);
    ASSERT(ret == 0, "user not found");
    ASSERT(strcmp(u.password_hash, "hash_abc123") == 0, "hash mismatch");
    PASS();
}

static void test_update_user(void)
{
    TEST("Update user password hash");
    int ret = cat_update_user("bob", "new_hash_xyz");
    ASSERT(ret == 0, "update failed");

    UserDesc u;
    cat_find_user("bob", &u);
    ASSERT(strcmp(u.password_hash, "new_hash_xyz") == 0, "hash not updated");
    PASS();
}

static void test_drop_user(void)
{
    TEST("Drop user, find returns -1");
    cat_create_user("temp_user", "hash");
    int ret = cat_drop_user("temp_user");
    ASSERT(ret == 0, "drop failed");

    UserDesc u;
    ret = cat_find_user("temp_user", &u);
    ASSERT(ret == -1, "should not find dropped user");
    PASS();
}

static void test_list_users(void)
{
    TEST("List users returns all entries");
    UserDesc users[16];
    int count = cat_list_users(users, 16);
    ASSERT(count >= 2, "should have at least admin + bob");
    PASS();
}

/* ----------------------------------------------------------------
 *  Grant tests
 * ---------------------------------------------------------------- */

static void test_create_grant(void)
{
    TEST("Create and find grant");
    int ret = cat_create_grant("bob", 0, "evosql", "ALL", 1);
    ASSERT(ret == 0, "create_grant failed");

    GrantDesc g;
    ret = cat_find_grant("bob", 0, "evosql", &g);
    ASSERT(ret == 0, "grant not found");
    ASSERT(strcmp(g.privileges, "ALL") == 0, "privileges mismatch");
    ASSERT(g.grant_option == 1, "grant_option mismatch");
    PASS();
}

static void test_list_grants(void)
{
    TEST("List grants for user");
    cat_create_grant("bob", 2, "users", "SELECT,INSERT", 0);

    GrantDesc grants[16];
    int count = cat_list_grants_for_user("bob", grants, 16);
    ASSERT(count >= 2, "should have at least 2 grants");
    PASS();
}

static void test_drop_all_grants(void)
{
    TEST("Drop all grants for user");
    cat_drop_all_grants_for_user("bob");

    GrantDesc grants[16];
    int count = cat_list_grants_for_user("bob", grants, 16);
    ASSERT(count == 0, "should have 0 grants after drop_all");
    PASS();
}

/* ----------------------------------------------------------------
 *  Persistence test
 * ---------------------------------------------------------------- */

static void test_persistence(void)
{
    TEST("Data persists across shutdown/restart");
    /* Create some data */
    cat_create_database("persist_db");
    cat_create_user("persist_user", "persist_hash");

    /* Shutdown */
    cat_shutdown();
    pgm_shutdown();
    bp_destroy();

    /* Restart */
    bp_init(256);
    pgm_init(TEST_FILE);
    cat_init();

    DatabaseDesc db;
    ASSERT(cat_find_database("persist_db", &db) == 0, "db not persisted");

    UserDesc u;
    ASSERT(cat_find_user("persist_user", &u) == 0, "user not persisted");
    ASSERT(strcmp(u.password_hash, "persist_hash") == 0, "hash not persisted");
    PASS();
}

/* ----------------------------------------------------------------
 *  Convenience test
 * ---------------------------------------------------------------- */

static void test_resolve_table(void)
{
    TEST("cat_resolve_table three-level lookup");
    /* users table was created under evosql/default */
    TableDesc t;
    int ret = cat_resolve_table("evosql", "default", "users", &t);
    ASSERT(ret == 0, "resolve failed");
    ASSERT(strcmp(t.table_name, "users") == 0, "table name mismatch");
    ASSERT(t.num_columns == 3, "columns mismatch");
    PASS();
}

/* ---------------------------------------------------------------- */
int main(void)
{
    printf("\n=== System Catalog Unit Tests ===\n\n");

    setup();

    /* Bootstrap */
    test_bootstrap_creates_trees();
    test_bootstrap_default_database();
    test_bootstrap_default_schema();
    test_bootstrap_default_user();
    test_bootstrap_idempotent();

    /* Database */
    test_create_database();
    test_create_duplicate_database();
    test_drop_database();
    test_list_databases();

    /* Schema */
    test_create_schema();
    test_schema_isolation();
    test_list_schemas();

    /* Table */
    test_create_table();
    test_create_table_auto_inc();
    test_find_columns();
    test_drop_table();
    test_update_auto_inc();

    /* Index */
    test_create_index();
    test_list_indexes();
    test_drop_index();

    /* Constraint */
    test_add_constraint();

    /* User */
    test_create_user();
    test_update_user();
    test_drop_user();
    test_list_users();

    /* Grant */
    test_create_grant();
    test_list_grants();
    test_drop_all_grants();

    /* Persistence */
    test_persistence();

    /* Convenience */
    test_resolve_table();

    teardown();

    printf("\n=== Results: %d passed, %d failed ===\n\n",
           tests_passed, tests_failed);
    return tests_failed > 0 ? 1 : 0;
}
