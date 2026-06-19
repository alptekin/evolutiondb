/*
 * scram.h -- SCRAM-SHA-256 authentication for EvoSQL EVO protocol
 *
 * Server-side implementation of RFC 5802 (simplified for EVO text protocol).
 * Provides challenge-response authentication that never sends the password
 * over the wire -- even without TLS, the password is protected.
 */
#ifndef SCRAM_H
#define SCRAM_H

#include <stdint.h>
#include <stddef.h>

/* SCRAM nonce / buffer sizes */
#define SCRAM_NONCE_LEN      24   /* raw bytes; base64 = 32 chars */
#define SCRAM_SALT_MAX       32   /* raw salt bytes (from stored hash) */
#define SCRAM_AUTH_MSG_MAX  1024   /* auth-message concatenation buffer */

/* ----------------------------------------------------------------
 *  ScramState -- per-session SCRAM handshake state
 *
 *  Allocated on the stack inside evo_handle_client(), zeroed and
 *  wiped after authentication completes (success or failure).
 * ---------------------------------------------------------------- */
typedef struct {
    /* Nonces (base64-encoded, null-terminated) */
    char client_nonce[48];
    char server_nonce[48];
    char combined_nonce[96];

    /* Salt from stored password hash (raw bytes + length) */
    uint8_t salt[SCRAM_SALT_MAX];
    int     salt_len;

    /* PBKDF2 iteration count from stored hash */
    int iterations;

    /* Derived keys (32 bytes = SHA-256 digest) */
    uint8_t salted_password[32];
    uint8_t stored_key[32];
    uint8_t server_key[32];

    /* Auth message for proof computation */
    char auth_message[SCRAM_AUTH_MSG_MAX];

    /* client-first-bare (without gs2 header) for auth_message */
    char client_first_bare[256];

    /* server-first-message for auth_message */
    char server_first[512];
} ScramState;

/* ----------------------------------------------------------------
 *  scram_server_first -- process SCRAM-CLIENT-FIRST, produce
 *                        SCRAM-SERVER-FIRST
 *
 *  client_first : the payload after "SCRAM-CLIENT-FIRST " prefix
 *  username     : extracted username (output, at least 256 bytes)
 *  state        : caller-allocated ScramState, zeroed before call
 *  server_first : output buffer for server-first-message line
 *  server_first_size : size of server_first buffer
 *
 *  Returns 0 on success, -1 on parse / crypto error.
 * ---------------------------------------------------------------- */
/* override_username: when non-NULL, the username is taken from here (the PG
 * wire carries it in the StartupMessage, so the client-first n= is empty);
 * NULL = parse it from the client-first n= (EVO).
 * bare_output: 0 = prefix the output with "SCRAM-SERVER-FIRST " (EVO text
 * framing); 1 = emit the bare server-first-message (PG SASL). The bare body is
 * always what goes into the SCRAM AuthMessage, regardless of framing. */
int scram_server_first(const char *client_first, const char *override_username,
                       char *username, ScramState *state, char *server_first,
                       int server_first_size, int bare_output);

/* ----------------------------------------------------------------
 *  scram_server_final -- process SCRAM-CLIENT-FINAL, verify client
 *                        proof, produce SCRAM-SERVER-FINAL
 *
 *  client_final : the payload after "SCRAM-CLIENT-FINAL " prefix
 *  state        : ScramState populated by scram_server_first()
 *  server_final : output buffer for server-final-message line
 *  server_final_size : size of server_final buffer
 *
 *  Returns 0 on success (proof valid), -1 on failure.
 * ---------------------------------------------------------------- */
int scram_server_final(const char *client_final, ScramState *state,
                       char *server_final, int server_final_size,
                       int bare_output);

#endif /* SCRAM_H */
