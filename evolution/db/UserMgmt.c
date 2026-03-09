/*
 * UserMgmt.c — User management for EvoSQL
 *
 * Storage layout:
 *   root/users          (text file: "username:pbkdf2-hash" per line)
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

#define USERS_FILE  "users"
#define MAX_LINE    1024

/* ----------------------------------------------------------------
 *  Helpers
 * ---------------------------------------------------------------- */
static void users_path(char *out, size_t size)
{
    snprintf(out, size, "%s/%s", db_get_root(), USERS_FILE);
}

/* Check if a user exists.  Returns 1 if found, 0 otherwise. */
static int user_exists(const char *username)
{
    char path[1024], line[MAX_LINE];
    FILE *fp;
    size_t ulen = strlen(username);

    users_path(path, sizeof(path));
    fp = fopen(path, "r");
    if (!fp) return 0;

    while (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\n\r")] = '\0';
        /* Format: username:hash */
        if (strncasecmp(line, username, ulen) == 0 && line[ulen] == ':') {
            fclose(fp);
            return 1;
        }
    }
    fclose(fp);
    return 0;
}

/* ----------------------------------------------------------------
 *  db_ensure_users — Create initial admin user if users file empty
 *
 *  Called from db_ensure_root().
 * ---------------------------------------------------------------- */
void db_ensure_users(void)
{
    char path[1024];
    FILE *fp;

    users_path(path, sizeof(path));

    /* If file already exists and has content, skip */
    fp = fopen(path, "r");
    if (fp) {
        char line[MAX_LINE];
        if (fgets(line, sizeof(line), fp) && line[0] != '\0' && line[0] != '\n') {
            fclose(fp);
            return; /* Users file already populated */
        }
        fclose(fp);
    }

    /* Read initial credentials from environment */
    const char *env_user = getenv("EVOSQL_USER_NAME");
    const char *env_pass = getenv("EVOSQL_PASSWORD");
    if (!env_user || env_user[0] == '\0') env_user = "admin";

    /* If no password provided, generate a random 16-character password.
     * This is printed to stdout ONCE (MySQL --initialize style).
     * The user must then ALTER USER to change it. */
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
        return;
    }

    /* Write initial user */
    fp = fopen(path, "w");
    if (fp) {
        fprintf(fp, "%s:%s\n", env_user, hash_str);
        fclose(fp);
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
    } else {
        fprintf(stderr, "[UserMgmt] ERROR: Cannot create users file: %s\n", path);
    }

    /* Wipe sensitive buffers regardless of outcome */
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
    char path[1024], line[MAX_LINE];
    FILE *fp;
    size_t ulen;

    if (!username || !password) return 0;

    ulen = strlen(username);
    users_path(path, sizeof(path));

    fp = fopen(path, "r");
    if (!fp) return 0;

    while (fgets(line, sizeof(line), fp)) {
        line[strcspn(line, "\n\r")] = '\0';
        if (line[0] == '\0') continue;

        /* Match username (case-insensitive) */
        if (strncasecmp(line, username, ulen) == 0 && line[ulen] == ':') {
            const char *stored_hash = line + ulen + 1;
            fclose(fp);
            return crypto_verify_password(password, stored_hash) == 1 ? 1 : 0;
        }
    }

    fclose(fp);
    return 0; /* User not found */
}

/* ----------------------------------------------------------------
 *  CreateUserProcess — CREATE USER <name> PASSWORD '<pass>'
 *
 *  Returns 0 on success, -1 on error (sets g_gui_error_msg).
 * ---------------------------------------------------------------- */
int CreateUserProcess(const char *username, const char *password)
{
    char path[1024], hash_str[HASH_STRING_MAX];
    FILE *fp;
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

    if (user_exists(username)) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "User '%s' already exists", username);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_DUPLICATE_OBJECT);
        result = -1;
    } else {
        /* Append to users file */
        users_path(path, sizeof(path));
        fp = fopen(path, "a");
        if (!fp) {
            snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                     "Cannot open users file");
            g_gui_error = 1;
            EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_IO_ERROR);
            result = -1;
        } else {
            fprintf(fp, "%s:%s\n", username, hash_str);
            fclose(fp);
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
    char path[1024], tmp_path[1024], line[MAX_LINE];
    FILE *fp, *tmp;
    int found = 0;
    size_t ulen;
    int result = 0;

    if (!username || username[0] == '\0') {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Username is required");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INVALID_PARAMETER_VALUE);
        return -1;
    }

    ulen = strlen(username);
    users_path(path, sizeof(path));
    snprintf(tmp_path, sizeof(tmp_path), "%s.tmp", path);

    pthread_mutex_lock(&g_metadata_lock);

    fp = fopen(path, "r");
    if (!fp) {
        pthread_mutex_unlock(&g_metadata_lock);
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Cannot open users file");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_IO_ERROR);
        return -1;
    }

    tmp = fopen(tmp_path, "w");
    if (!tmp) {
        fclose(fp);
        pthread_mutex_unlock(&g_metadata_lock);
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Cannot create temp file");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_IO_ERROR);
        return -1;
    }

    while (fgets(line, sizeof(line), fp)) {
        char clean[MAX_LINE];
        strncpy(clean, line, sizeof(clean));
        clean[strcspn(clean, "\n\r")] = '\0';

        if (strncasecmp(clean, username, ulen) == 0 && clean[ulen] == ':') {
            found = 1;
            continue; /* Skip this line (drop user) */
        }
        fputs(line, tmp);
    }

    fclose(fp);
    fclose(tmp);

    if (!found) {
        remove(tmp_path);
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "User '%s' does not exist", username);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        result = -1;
    } else {
        /* Replace original with temp */
        remove(path);
        rename(tmp_path, path);
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
    char path[1024], tmp_path[1024], line[MAX_LINE];
    char hash_str[HASH_STRING_MAX];
    FILE *fp, *tmp;
    int found = 0;
    size_t ulen;
    int result = 0;

    if (!username || !new_password ||
        username[0] == '\0' || new_password[0] == '\0') {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Username and new password are required");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INVALID_PARAMETER_VALUE);
        return -1;
    }

    ulen = strlen(username);

    /* Hash new password before taking lock (expensive operation) */
    if (crypto_hash_password(new_password, hash_str, sizeof(hash_str)) < 0) {
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Failed to hash password");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_INTERNAL_ERROR);
        return -1;
    }

    users_path(path, sizeof(path));
    snprintf(tmp_path, sizeof(tmp_path), "%s.tmp", path);

    pthread_mutex_lock(&g_metadata_lock);

    fp = fopen(path, "r");
    if (!fp) {
        pthread_mutex_unlock(&g_metadata_lock);
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Cannot open users file");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_IO_ERROR);
        evo_secure_wipe(hash_str, sizeof(hash_str));
        return -1;
    }

    tmp = fopen(tmp_path, "w");
    if (!tmp) {
        fclose(fp);
        pthread_mutex_unlock(&g_metadata_lock);
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "Cannot create temp file");
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_IO_ERROR);
        evo_secure_wipe(hash_str, sizeof(hash_str));
        return -1;
    }

    while (fgets(line, sizeof(line), fp)) {
        char clean[MAX_LINE];
        strncpy(clean, line, sizeof(clean));
        clean[strcspn(clean, "\n\r")] = '\0';

        if (strncasecmp(clean, username, ulen) == 0 && clean[ulen] == ':') {
            fprintf(tmp, "%s:%s\n", username, hash_str);
            found = 1;
        } else {
            fputs(line, tmp);
        }
    }

    fclose(fp);
    fclose(tmp);

    if (!found) {
        remove(tmp_path);
        snprintf(g_gui_error_msg, sizeof(g_gui_error_msg),
                 "User '%s' does not exist", username);
        g_gui_error = 1;
        EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_UNDEFINED_OBJECT);
        result = -1;
    } else {
        remove(path);
        rename(tmp_path, path);
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
    char path[1024], line[MAX_LINE];
    FILE *fp;
    int count = 0;

    users_path(path, sizeof(path));
    fp = fopen(path, "r");
    if (!fp) return 0;

    while (fgets(line, sizeof(line), fp) && count < max_users) {
        line[strcspn(line, "\n\r")] = '\0';
        if (line[0] == '\0') continue;

        /* Extract username (before ':') */
        char *colon = strchr(line, ':');
        if (colon) {
            size_t ulen = (size_t)(colon - line);
            if (ulen >= 256) ulen = 255;
            strncpy(names[count], line, ulen);
            names[count][ulen] = '\0';
            count++;
        }
    }

    fclose(fp);
    return count;
}
