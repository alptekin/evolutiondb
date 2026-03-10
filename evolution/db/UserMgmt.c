/*
 * UserMgmt.c — User management for EvoSQL
 *
 * Storage: System catalog B+ tree (CAT_SYS_USERS) in unified storage file.
 * Key = username, Record = password_hash (PBKDF2-SHA256).
 *
 * SQL commands handled via catalog.c interception:
 *   CREATE USER <name> PASSWORD '<pass>'
 *   DROP USER <name>
 *   ALTER USER <name> PASSWORD '<newpass>'
 *   SHOW USERS
 *
 * Initial admin user is created from environment variables:
 *   EVOSQL_USER_NAME  (default: "admin")
 *   EVOSQL_PASSWORD   (if empty/unset, a random 16-char password is generated
 *                      and printed to stdout ONCE — MySQL-style)
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>
#include "database.h"
#include "crypto.h"
#include "catalog_internal.h"

/* ----------------------------------------------------------------
 *  db_ensure_users — Create initial admin user if not in catalog
 *
 *  Called from db_ensure_root() after cat_init().
 *  cat_init() already creates an "admin" entry with empty hash.
 *  This function sets the real password hash.
 * ---------------------------------------------------------------- */
void db_ensure_users(void)
{
    /* Check if admin already has a real password hash */
    UserDesc ud;
    if (cat_find_user("admin", &ud) == 0 && ud.password_hash[0] != '\0') {
        return; /* Already initialized */
    }

    /* Read initial credentials from environment */
    const char *env_user = getenv("EVOSQL_USER_NAME");
    const char *env_pass = getenv("EVOSQL_PASSWORD");
    if (!env_user || env_user[0] == '\0') env_user = "admin";

    /* If no password provided, generate a random 16-character password.
     * This is printed to stdout ONCE (MySQL --initialize style). */
    char generated_pass[32];
    int  password_generated = 0;
    if (!env_pass || env_pass[0] == '\0') {
        static const char charset[] =
            "abcdefghijklmnopqrstuvwxyz"
            "ABCDEFGHIJKLMNOPQRSTUVWXYZ"
            "0123456789!@#$%&*";
        uint8_t rand_bytes[16];
        if (crypto_random_bytes(rand_bytes, sizeof(rand_bytes)) < 0) {
            fprintf(stderr, "[UserMgmt] ERROR: Cannot generate random password\n");
            return;
        }
        for (int i = 0; i < 16; i++)
            generated_pass[i] = charset[rand_bytes[i] % (sizeof(charset) - 1)];
        generated_pass[16] = '\0';
        env_pass = generated_pass;
        password_generated = 1;
    }

    /* Hash the password */
    char hash_str[HASH_STRING_MAX];
    if (crypto_hash_password(env_pass, hash_str, sizeof(hash_str)) < 0) {
        fprintf(stderr, "[UserMgmt] ERROR: Failed to hash initial password\n");
        evo_secure_wipe(generated_pass, sizeof(generated_pass));
        return;
    }

    /* Update or create admin user in catalog */
    if (cat_find_user(env_user, NULL) == 0) {
        /* Admin entry exists (created by cat_init with empty hash) — update */
        cat_update_user(env_user, hash_str);
    } else {
        /* Custom username from EVOSQL_USER_NAME — create */
        cat_create_user(env_user, hash_str);
    }

    printf("[UserMgmt] Initial user '%s' created\n", env_user);
    if (password_generated) {
        printf("\n");
        printf("============================================================\n");
        printf("  GENERATED PASSWORD for '%s': %s\n", env_user, env_pass);
        printf("  Save this password! It will NOT be shown again.\n");
        printf("  Change it with: ALTER USER %s PASSWORD '<newpass>'\n", env_user);
        printf("============================================================\n");
        printf("\n");
        fflush(stdout);
    }

    /* Wipe sensitive buffers */
    evo_secure_wipe(generated_pass, sizeof(generated_pass));
    evo_secure_wipe(hash_str, sizeof(hash_str));
}

/* ----------------------------------------------------------------
 *  AuthenticateUser — Verify username + password
 *
 *  Returns 1 on success, 0 on failure.
 * ---------------------------------------------------------------- */
int AuthenticateUser(const char *username, const char *password)
{
    if (!username || !password) return 0;

    /* Case-insensitive lookup: lowercase the username for catalog search */
    char lower[CAT_MAX_NAME_LEN];
    size_t i;
    for (i = 0; username[i] && i < CAT_MAX_NAME_LEN - 1; i++)
        lower[i] = (char)tolower((unsigned char)username[i]);
    lower[i] = '\0';

    UserDesc ud;
    if (cat_find_user(lower, &ud) < 0) {
        /* Try original case */
        if (cat_find_user(username, &ud) < 0)
            return 0;
    }

    return crypto_verify_password(password, ud.password_hash) == 1 ? 1 : 0;
}

/* ----------------------------------------------------------------
 *  CreateUserProcess — CREATE USER <name> PASSWORD '<pass>'
 *
 *  Returns 0 on success, -1 on error (sets g_gui_error_msg).
 * ---------------------------------------------------------------- */
int CreateUserProcess(const char *username, const char *password)
{
    char hash_str[HASH_STRING_MAX];
    int result = 0;

    if (!username || !password || username[0] == '\0' || password[0] == '\0') {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Username and password are required");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INVALID_PARAMETER_VALUE);
        return -1;
    }

    /* Hash password before taking lock (expensive operation) */
    if (crypto_hash_password(password, hash_str, sizeof(hash_str)) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Failed to hash password");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INTERNAL_ERROR);
        return -1;
    }

    pthread_mutex_lock(&g_metadata_lock);

    if (cat_find_user(username, NULL) == 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "User '%s' already exists", username);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DUPLICATE_OBJECT);
        result = -1;
    } else {
        if (cat_create_user(username, hash_str) < 0) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "Failed to create user '%s'", username);
            g_gui_error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INTERNAL_ERROR);
            result = -1;
        }
    }

    pthread_mutex_unlock(&g_metadata_lock);
    evo_secure_wipe(hash_str, sizeof(hash_str));
    return result;
}

/* ----------------------------------------------------------------
 *  DropUserProcess — DROP USER <name>
 *
 *  Returns 0 on success, -1 on error.
 * ---------------------------------------------------------------- */
int DropUserProcess(const char *username)
{
    int result = 0;

    if (!username || username[0] == '\0') {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Username is required");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INVALID_PARAMETER_VALUE);
        return -1;
    }

    pthread_mutex_lock(&g_metadata_lock);

    if (cat_drop_user(username) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "User '%s' does not exist", username);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        result = -1;
    }

    pthread_mutex_unlock(&g_metadata_lock);
    return result;
}

/* ----------------------------------------------------------------
 *  AlterUserPasswordProcess — ALTER USER <name> PASSWORD '<newpass>'
 *
 *  Returns 0 on success, -1 on error.
 * ---------------------------------------------------------------- */
int AlterUserPasswordProcess(const char *username, const char *new_password)
{
    char hash_str[HASH_STRING_MAX];
    int result = 0;

    if (!username || !new_password ||
        username[0] == '\0' || new_password[0] == '\0') {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Username and new password are required");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INVALID_PARAMETER_VALUE);
        return -1;
    }

    /* Hash new password before taking lock (expensive operation) */
    if (crypto_hash_password(new_password, hash_str, sizeof(hash_str)) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Failed to hash password");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INTERNAL_ERROR);
        return -1;
    }

    pthread_mutex_lock(&g_metadata_lock);

    if (cat_update_user(username, hash_str) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "User '%s' does not exist", username);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        result = -1;
    }

    pthread_mutex_unlock(&g_metadata_lock);
    evo_secure_wipe(hash_str, sizeof(hash_str));
    return result;
}

/* ----------------------------------------------------------------
 *  ListUsers — Fill a names buffer with all usernames
 *
 *  Returns the number of users found.
 *  names[i] is filled with username (up to max_users).
 * ---------------------------------------------------------------- */
int ListUsers(char names[][256], int max_users)
{
    UserDesc users[64];
    int limit = max_users < 64 ? max_users : 64;
    int count = cat_list_users(users, limit);

    for (int i = 0; i < count; i++) {
        strncpy(names[i], users[i].username, 255);
        names[i][255] = '\0';
    }
    return count;
}
