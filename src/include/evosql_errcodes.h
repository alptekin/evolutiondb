/*
 * evosql_errcodes.h — EvoSQL SQLSTATE Error Code Definitions
 *
 * SQLSTATE is a 5-character code: CC + XXX (class + subclass).
 *
 * Naming convention:
 *   - ISO Standard codes (classes 00–44, A–H): kept as defined by SQL standard.
 *   - EvoSQL vendor subclass: prefix 'E' within standard classes (e.g. 42E01).
 *     PostgreSQL uses 'P', MySQL uses 'S', DB2 uses numeric — 'E' is unique.
 *   - EvoSQL vendor class: range E0–EZ (entirely EvoSQL-owned).
 *
 * Copyright (c) 2025-2026, Alptekin — EvoSQL / EvolutionDB Project
 */

#ifndef EVOSQL_ERRCODES_H
#define EVOSQL_ERRCODES_H

/*
 * Convenience macro: set the global SQLSTATE in one line.
 * Usage: EVOSQL_SET_SQLSTATE(EVOSQL_ERRCODE_NOT_NULL_VIOLATION);
 * Requires database.h (for g_err.sqlstate extern).
 */
#define EVOSQL_SET_SQLSTATE(code) \
    do { \
        g_err.sqlstate[0] = (code)[0]; \
        g_err.sqlstate[1] = (code)[1]; \
        g_err.sqlstate[2] = (code)[2]; \
        g_err.sqlstate[3] = (code)[3]; \
        g_err.sqlstate[4] = (code)[4]; \
        g_err.sqlstate[5] = '\0';      \
    } while (0)

/* ================================================================
 * Class 00 — Successful Completion (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_SUCCESSFUL_COMPLETION           "00000"

/* ================================================================
 * Class 01 — Warning (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_WARNING                         "01000"
#define EVOSQL_ERRCODE_WARNING_STRING_TRUNCATION        "01004"

/* ================================================================
 * Class 02 — No Data (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_NO_DATA                         "02000"

/* ================================================================
 * Class 03 — SQL Statement Not Yet Complete (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_SQL_STATEMENT_NOT_YET_COMPLETE  "03000"

/* ================================================================
 * Class 08 — Connection Exception (ISO + EvoSQL vendor)
 * ================================================================ */
#define EVOSQL_ERRCODE_CONNECTION_EXCEPTION            "08000"
#define EVOSQL_ERRCODE_CONNECTION_DOES_NOT_EXIST       "08003"
#define EVOSQL_ERRCODE_CONNECTION_FAILURE              "08006"
#define EVOSQL_ERRCODE_SQLCLIENT_UNABLE_TO_CONNECT     "08001"
#define EVOSQL_ERRCODE_SQLSERVER_REJECTED_CONNECTION   "08004"
/* EvoSQL vendor subclass (replaces PG 08P01) */
#define EVOSQL_ERRCODE_PROTOCOL_VIOLATION              "08E01"

/* ================================================================
 * Class 0A — Feature Not Supported (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_FEATURE_NOT_SUPPORTED           "0A000"

/* ================================================================
 * Class 22 — Data Exception (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_DATA_EXCEPTION                  "22000"
#define EVOSQL_ERRCODE_STRING_DATA_RIGHT_TRUNCATION    "22001"
#define EVOSQL_ERRCODE_NUMERIC_VALUE_OUT_OF_RANGE      "22003"
#define EVOSQL_ERRCODE_INVALID_DATETIME_FORMAT         "22007"
#define EVOSQL_ERRCODE_DATETIME_FIELD_OVERFLOW         "22008"
#define EVOSQL_ERRCODE_DIVISION_BY_ZERO                "22012"
#define EVOSQL_ERRCODE_INVALID_PARAMETER_VALUE         "22023"
#define EVOSQL_ERRCODE_INVALID_TEXT_REPRESENTATION     "22E02"

/* ================================================================
 * Class 23 — Integrity Constraint Violation (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_INTEGRITY_CONSTRAINT_VIOLATION  "23000"
#define EVOSQL_ERRCODE_NOT_NULL_VIOLATION              "23502"
#define EVOSQL_ERRCODE_FOREIGN_KEY_VIOLATION           "23503"
#define EVOSQL_ERRCODE_UNIQUE_VIOLATION                "23505"
#define EVOSQL_ERRCODE_CHECK_VIOLATION                 "23514"

/* ================================================================
 * Class 25 — Invalid Transaction State (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_INVALID_TRANSACTION_STATE       "25000"
#define EVOSQL_ERRCODE_ACTIVE_SQL_TRANSACTION          "25001"
#define EVOSQL_ERRCODE_READ_ONLY_SQL_TRANSACTION       "25006"
#define EVOSQL_ERRCODE_NO_ACTIVE_SQL_TRANSACTION       "25E01"

/* ================================================================
 * Class 28 — Invalid Authorization Specification (ISO + EvoSQL vendor)
 * ================================================================ */
#define EVOSQL_ERRCODE_INVALID_AUTH_SPEC               "28000"
/* EvoSQL vendor subclass (replaces PG 28P01) */
#define EVOSQL_ERRCODE_INVALID_PASSWORD                "28E01"

/* ================================================================
 * Class 3D — Invalid Catalog Name (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_UNDEFINED_DATABASE              "3D000"

/* ================================================================
 * Class 3F — Invalid Schema Name (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_UNDEFINED_SCHEMA                "3F000"

/* ================================================================
 * Class 40 — Transaction Rollback
 * ================================================================ */
#define EVOSQL_ERRCODE_TRANSACTION_ROLLBACK            "40000"
#define EVOSQL_ERRCODE_SERIALIZATION_FAILURE           "40001"
#define EVOSQL_ERRCODE_DEADLOCK_DETECTED               "40P01"

/* ================================================================
 * Class 55 — Object Not In Prerequisite State
 * ================================================================ */
#define EVOSQL_ERRCODE_LOCK_NOT_AVAILABLE              "55P03"

/* ================================================================
 * Class 42 — Syntax Error or Access Rule Violation (ISO + EvoSQL vendor)
 * ================================================================ */
#define EVOSQL_ERRCODE_SYNTAX_ERROR_OR_ACCESS_VIOLATION "42000"
#define EVOSQL_ERRCODE_SYNTAX_ERROR                    "42601"
#define EVOSQL_ERRCODE_INSUFFICIENT_PRIVILEGE          "42501"
#define EVOSQL_ERRCODE_CANNOT_COERCE                   "42846"
#define EVOSQL_ERRCODE_GROUPING_ERROR                  "42803"
#define EVOSQL_ERRCODE_INVALID_NAME                    "42602"
#define EVOSQL_ERRCODE_NAME_TOO_LONG                   "42622"
#define EVOSQL_ERRCODE_UNDEFINED_COLUMN                "42703"
#define EVOSQL_ERRCODE_UNDEFINED_OBJECT                "42704"
#define EVOSQL_ERRCODE_DUPLICATE_COLUMN                "42701"
#define EVOSQL_ERRCODE_DUPLICATE_OBJECT                "42710"
#define EVOSQL_ERRCODE_INVALID_COLUMN_DEFINITION       "42611"
/* EvoSQL vendor subclass (replaces PG 42Pxx) */
#define EVOSQL_ERRCODE_UNDEFINED_TABLE                 "42E01"
#define EVOSQL_ERRCODE_UNDEFINED_PARAMETER             "42E02"
#define EVOSQL_ERRCODE_DUPLICATE_DATABASE              "42E04"
#define EVOSQL_ERRCODE_DUPLICATE_SCHEMA                "42E06"
#define EVOSQL_ERRCODE_DUPLICATE_TABLE                 "42E07"
#define EVOSQL_ERRCODE_INVALID_TABLE_DEFINITION        "42E16"

/* ================================================================
 * Class 44 — WITH CHECK OPTION Violation (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_WITH_CHECK_OPTION_VIOLATION     "44000"

/* ================================================================
 * Class 53 — Insufficient Resources (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_INSUFFICIENT_RESOURCES          "53000"
#define EVOSQL_ERRCODE_DISK_FULL                       "53100"
#define EVOSQL_ERRCODE_OUT_OF_MEMORY                   "53200"
#define EVOSQL_ERRCODE_TOO_MANY_CONNECTIONS            "53300"

/* ================================================================
 * Class 54 — Program Limit Exceeded (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_PROGRAM_LIMIT_EXCEEDED          "54000"
#define EVOSQL_ERRCODE_STATEMENT_TOO_COMPLEX           "54001"
#define EVOSQL_ERRCODE_TOO_MANY_COLUMNS                "54011"

/* ================================================================
 * Class 57 — Operator Intervention (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_OPERATOR_INTERVENTION           "57000"
#define EVOSQL_ERRCODE_QUERY_CANCELED                  "57014"

/* ================================================================
 * Class 58 — System Error (ISO)
 * ================================================================ */
#define EVOSQL_ERRCODE_SYSTEM_ERROR                    "58000"
#define EVOSQL_ERRCODE_IO_ERROR                        "58030"

/* ================================================================
 * Class E0 — EvoSQL Storage Engine (vendor-owned)
 *
 * Codes in E0xxx cover the APUE-based storage layer and
 * file-system level operations unique to EvoSQL.
 * ================================================================ */
#define EVOSQL_ERRCODE_PATH_NAME_TRUNCATED             "E0001"
#define EVOSQL_ERRCODE_STORAGE_ENGINE_ERROR            "E0002"
#define EVOSQL_ERRCODE_RECORD_TOO_LARGE                "E0003"
#define EVOSQL_ERRCODE_TABLE_FILE_CORRUPTED            "E0004"
#define EVOSQL_ERRCODE_META_FILE_NOT_FOUND             "E0005"

/* ================================================================
 * Class E1 — EvoSQL Buffer Pool (vendor-owned)
 * ================================================================ */
#define EVOSQL_ERRCODE_BUFFER_POOL_EVICTION_FAILED     "E1001"
#define EVOSQL_ERRCODE_BUFFER_POOL_FULL                "E1002"

/* ================================================================
 * Class E2 — EvoSQL RECLAIM / Garbage Collection (vendor-owned)
 * ================================================================ */
#define EVOSQL_ERRCODE_RECLAIM_IN_PROGRESS             "E2001"
#define EVOSQL_ERRCODE_RECLAIM_IO_ERROR                "E2002"

/* ================================================================
 * Class E3 — EvoSQL Temporary Tables (vendor-owned)
 * ================================================================ */
#define EVOSQL_ERRCODE_TEMP_TABLE_LIMIT                "E3001"

/* ================================================================
 * Class E4 — EvoSQL UUID Generation (vendor-owned)
 * ================================================================ */
#define EVOSQL_ERRCODE_UUID_GENERATION_FAILED          "E4001"

/* ================================================================
 * Class E5 — EvoSQL Snowflake ID (vendor-owned)
 * ================================================================ */
#define EVOSQL_ERRCODE_SNOWFLAKE_SEQ_EXHAUSTED         "E5001"
#define EVOSQL_ERRCODE_SNOWFLAKE_CLOCK_REGRESSION      "E5002"

/* ================================================================
 * Class E6 — EvoSQL Query Timeout / Cancellation (vendor-owned)
 * ================================================================ */
#define EVOSQL_ERRCODE_QUERY_TIMEOUT                   "E6001"
#define EVOSQL_ERRCODE_STATEMENT_CANCELLED             "E6002"

/* ================================================================
 * Class EX — EvoSQL Internal Error (vendor-owned)
 *
 * These are "should never happen" conditions and software bugs.
 * ================================================================ */
#define EVOSQL_ERRCODE_INTERNAL_ERROR                  "EX000"
#define EVOSQL_ERRCODE_DATA_CORRUPTED                  "EX001"
#define EVOSQL_ERRCODE_INDEX_CORRUPTED                 "EX002"

#endif /* EVOSQL_ERRCODES_H */
