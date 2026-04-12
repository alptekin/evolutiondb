/*
 * scram.c -- SCRAM-SHA-256 server-side authentication for EVO protocol
 *
 * Implements the server half of RFC 5802 (SCRAM-SHA-256).
 *
 * Key derivation (per RFC 5802 / RFC 7677):
 *
 *   SaltedPassword  = PBKDF2-SHA-256(password, salt, iterations, 32)
 *   ClientKey       = HMAC-SHA-256(SaltedPassword, "Client Key")
 *   StoredKey       = SHA-256(ClientKey)
 *   ServerKey       = HMAC-SHA-256(SaltedPassword, "Server Key")
 *   AuthMessage     = client-first-bare "," server-first "," client-final-without-proof
 *   ClientSignature = HMAC-SHA-256(StoredKey, AuthMessage)
 *   ClientProof     = ClientKey XOR ClientSignature
 *   ServerSignature = HMAC-SHA-256(ServerKey, AuthMessage)
 *
 * The server stores SaltedPassword (as PBKDF2 hash).  It can derive
 * StoredKey and ServerKey from it without knowing the original password.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#include "scram.h"
#include "../evolution/db/crypto.h"
#include "../evolution/db/catalog_internal.h"

/* ================================================================
 *  Base64 encode/decode (RFC 4648)
 * ================================================================ */

static const char b64_table[] =
    "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";

static int b64_encode(const uint8_t *src, int src_len,
                      char *dst, int dst_size)
{
    int i, j = 0;
    int needed = 4 * ((src_len + 2) / 3) + 1;
    if (dst_size < needed) return -1;

    for (i = 0; i < src_len; i += 3) {
        uint32_t a = (uint32_t)src[i];
        uint32_t b = (i + 1 < src_len) ? (uint32_t)src[i + 1] : 0;
        uint32_t c = (i + 2 < src_len) ? (uint32_t)src[i + 2] : 0;
        uint32_t triple = (a << 16) | (b << 8) | c;

        dst[j++] = b64_table[(triple >> 18) & 0x3F];
        dst[j++] = b64_table[(triple >> 12) & 0x3F];
        dst[j++] = (i + 1 < src_len) ? b64_table[(triple >> 6) & 0x3F] : '=';
        dst[j++] = (i + 2 < src_len) ? b64_table[triple & 0x3F] : '=';
    }
    dst[j] = '\0';
    return j;
}

static int b64_decode_char(char c)
{
    if (c >= 'A' && c <= 'Z') return c - 'A';
    if (c >= 'a' && c <= 'z') return c - 'a' + 26;
    if (c >= '0' && c <= '9') return c - '0' + 52;
    if (c == '+') return 62;
    if (c == '/') return 63;
    return -1;
}

static int b64_decode(const char *src, uint8_t *dst, int dst_size)
{
    int src_len = (int)strlen(src);
    int i = 0, j = 0;

    /* Rough output length estimate */
    int out_len = src_len / 4 * 3;
    if (src_len > 0 && src[src_len - 1] == '=') out_len--;
    if (src_len > 1 && src[src_len - 2] == '=') out_len--;
    if (out_len > dst_size) return -1;

    while (i < src_len) {
        int v0 = (i < src_len && src[i] != '=') ? b64_decode_char(src[i]) : 0; i++;
        int v1 = (i < src_len && src[i] != '=') ? b64_decode_char(src[i]) : 0; i++;
        int v2 = (i < src_len && src[i] != '=') ? b64_decode_char(src[i]) : 0; i++;
        int v3 = (i < src_len && src[i] != '=') ? b64_decode_char(src[i]) : 0; i++;

        if (v0 < 0 || v1 < 0 || v2 < 0 || v3 < 0) return -1;

        uint32_t triple = ((uint32_t)v0 << 18) | ((uint32_t)v1 << 12) |
                          ((uint32_t)v2 << 6)  | (uint32_t)v3;

        if (j < out_len) dst[j++] = (uint8_t)((triple >> 16) & 0xFF);
        if (j < out_len) dst[j++] = (uint8_t)((triple >> 8) & 0xFF);
        if (j < out_len) dst[j++] = (uint8_t)(triple & 0xFF);
    }
    return out_len;
}

/* ================================================================
 *  Hex helpers (for parsing stored password hash)
 * ================================================================ */

static int hex_to_bytes(const char *hex, uint8_t *bytes, int max_len)
{
    int hex_len = (int)strlen(hex);
    int byte_len = hex_len / 2;
    int i;

    if (hex_len % 2 != 0 || byte_len > max_len)
        return -1;

    for (i = 0; i < byte_len; i++) {
        unsigned int val;
        if (sscanf(hex + i * 2, "%2x", &val) != 1)
            return -1;
        bytes[i] = (uint8_t)val;
    }
    return byte_len;
}

/* ================================================================
 *  Internal: parse stored PBKDF2 hash and derive SCRAM keys
 * ================================================================ */

/*
 * Parse "pbkdf2:<iterations>:<hex_salt>:<hex_hash>" and populate
 * the ScramState salt, iterations, salted_password, stored_key,
 * and server_key fields.
 *
 * The stored <hex_hash> is the output of PBKDF2(password, salt, iter, 32)
 * which is exactly the SCRAM SaltedPassword.
 */
static int scram_load_user_keys(const char *password_hash, ScramState *state)
{
    char salt_hex[256], hash_hex[256];
    int iter;

    if (sscanf(password_hash, "pbkdf2:%d:%255[^:]:%255s",
               &iter, salt_hex, hash_hex) != 3)
        return -1;

    state->iterations = iter;

    /* Decode salt from hex */
    state->salt_len = hex_to_bytes(salt_hex, state->salt, SCRAM_SALT_MAX);
    if (state->salt_len < 0)
        return -1;

    /* Decode SaltedPassword from hex */
    if (hex_to_bytes(hash_hex, state->salted_password, 32) != 32)
        return -1;

    /* Derive StoredKey = SHA-256(HMAC(SaltedPassword, "Client Key")) */
    uint8_t client_key[32];
    hmac_sha256(state->salted_password, 32,
                (const uint8_t *)"Client Key", 10,
                client_key);
    sha256(client_key, 32, state->stored_key);

    /* Derive ServerKey = HMAC(SaltedPassword, "Server Key") */
    hmac_sha256(state->salted_password, 32,
                (const uint8_t *)"Server Key", 10,
                state->server_key);

    evo_secure_wipe(client_key, sizeof(client_key));
    return 0;
}

/* ================================================================
 *  scram_server_first
 * ================================================================ */

int scram_server_first(const char *client_first, char *username,
                       ScramState *state, char *server_first,
                       int server_first_size)
{
    /*
     * client-first-message format (from task spec):
     *   <gs2header>,<username>,r=<client_nonce>
     *
     * gs2header is typically "n,," (no channel binding, no authzid).
     * Example: "n,,n=admin,r=abc123..."
     *
     * We need to extract:
     *   - client-first-bare = everything after gs2header
     *   - username (the "n=..." attribute)
     *   - client nonce (the "r=..." attribute)
     */

    /* Skip gs2-header: find the third comma-delimited section.
     * gs2-header = "n,," or "y,," or "p=..." — ends at second comma. */
    const char *p = client_first;
    int comma_count = 0;
    const char *bare_start = NULL;

    while (*p) {
        if (*p == ',') {
            comma_count++;
            if (comma_count == 2) {
                bare_start = p + 1;
                break;
            }
        }
        p++;
    }

    if (!bare_start) return -1;

    /* Save client-first-bare for auth_message later */
    snprintf(state->client_first_bare, sizeof(state->client_first_bare),
             "%s", bare_start);

    /* Parse client-first-bare: "n=<username>,r=<client_nonce>" */
    const char *n_attr = strstr(bare_start, "n=");
    const char *r_attr = strstr(bare_start, "r=");

    if (!n_attr || !r_attr) return -1;

    /* Extract username: from "n=" to next comma */
    {
        const char *ustart = n_attr + 2;
        const char *uend = strchr(ustart, ',');
        if (!uend) return -1;
        int ulen = (int)(uend - ustart);
        if (ulen <= 0 || ulen >= 256) return -1;
        memcpy(username, ustart, ulen);
        username[ulen] = '\0';
    }

    /* Extract client nonce: from "r=" to end of string or comma */
    {
        const char *nstart = r_attr + 2;
        const char *nend = strchr(nstart, ',');
        int nlen = nend ? (int)(nend - nstart) : (int)strlen(nstart);
        if (nlen <= 0 || nlen >= (int)sizeof(state->client_nonce)) return -1;
        memcpy(state->client_nonce, nstart, nlen);
        state->client_nonce[nlen] = '\0';
    }

    /* Look up user in catalog to get stored hash */
    {
        /* Case-insensitive lookup */
        char lower[256];
        size_t i;
        for (i = 0; username[i] && i < 255; i++)
            lower[i] = (char)tolower((unsigned char)username[i]);
        lower[i] = '\0';

        UserDesc ud;
        if (cat_find_user(lower, &ud) < 0) {
            if (cat_find_user(username, &ud) < 0)
                return -1;
        }
        if (ud.is_role) return -1;

        /* Derive SCRAM keys from stored PBKDF2 hash */
        if (scram_load_user_keys(ud.password_hash, state) < 0)
            return -1;

        evo_secure_wipe(&ud, sizeof(ud));
    }

    /* Generate server nonce */
    {
        uint8_t nonce_raw[SCRAM_NONCE_LEN];
        if (crypto_random_bytes(nonce_raw, SCRAM_NONCE_LEN) < 0)
            return -1;
        b64_encode(nonce_raw, SCRAM_NONCE_LEN,
                   state->server_nonce, sizeof(state->server_nonce));
        evo_secure_wipe(nonce_raw, sizeof(nonce_raw));
    }

    /* Combined nonce = client_nonce || server_nonce */
    snprintf(state->combined_nonce, sizeof(state->combined_nonce),
             "%s%s", state->client_nonce, state->server_nonce);

    /* Base64-encode the salt */
    char salt_b64[128];
    b64_encode(state->salt, state->salt_len, salt_b64, sizeof(salt_b64));

    /* Build server-first-message:
     *   r=<combined_nonce>,s=<base64_salt>,i=<iterations> */
    snprintf(state->server_first, sizeof(state->server_first),
             "r=%s,s=%s,i=%d",
             state->combined_nonce, salt_b64, state->iterations);

    /* Copy to output buffer */
    snprintf(server_first, server_first_size, "SCRAM-SERVER-FIRST %s",
             state->server_first);

    return 0;
}

/* ================================================================
 *  scram_server_final
 * ================================================================ */

int scram_server_final(const char *client_final, ScramState *state,
                       char *server_final, int server_final_size)
{
    /*
     * client-final-message format:
     *   c=<channel_binding_b64>,r=<combined_nonce>,p=<base64_client_proof>
     *
     * client-final-without-proof = everything before ",p=..."
     */

    /* Find the ",p=" to split off the proof */
    const char *proof_sep = strstr(client_final, ",p=");
    if (!proof_sep) return -1;

    /* client-final-without-proof */
    int cfwp_len = (int)(proof_sep - client_final);
    char client_final_without_proof[512];
    if (cfwp_len >= (int)sizeof(client_final_without_proof)) return -1;
    memcpy(client_final_without_proof, client_final, cfwp_len);
    client_final_without_proof[cfwp_len] = '\0';

    /* Extract and decode client proof (base64) */
    const char *proof_b64 = proof_sep + 3;  /* skip ",p=" */
    uint8_t client_proof[32];
    int proof_len = b64_decode(proof_b64, client_proof, 32);
    if (proof_len != 32) return -1;

    /* Verify combined nonce matches */
    {
        const char *r_attr = strstr(client_final, "r=");
        if (!r_attr) return -1;
        const char *nstart = r_attr + 2;
        const char *nend = strchr(nstart, ',');
        int nlen = nend ? (int)(nend - nstart) : (int)strlen(nstart);
        if (nlen != (int)strlen(state->combined_nonce)) return -1;
        if (memcmp(nstart, state->combined_nonce, nlen) != 0) return -1;
    }

    /* Build AuthMessage = client-first-bare "," server-first "," client-final-without-proof */
    snprintf(state->auth_message, sizeof(state->auth_message),
             "%s,%s,%s",
             state->client_first_bare,
             state->server_first,
             client_final_without_proof);

    /* Compute ClientSignature = HMAC(StoredKey, AuthMessage) */
    uint8_t client_signature[32];
    hmac_sha256(state->stored_key, 32,
                (const uint8_t *)state->auth_message,
                strlen(state->auth_message),
                client_signature);

    /* Recover ClientKey = ClientProof XOR ClientSignature */
    uint8_t recovered_client_key[32];
    int i;
    for (i = 0; i < 32; i++)
        recovered_client_key[i] = client_proof[i] ^ client_signature[i];

    /* Verify: SHA-256(recovered_client_key) must equal StoredKey */
    uint8_t recovered_stored_key[32];
    sha256(recovered_client_key, 32, recovered_stored_key);

    /* Constant-time comparison to prevent timing attacks */
    int diff = 0;
    for (i = 0; i < 32; i++)
        diff |= recovered_stored_key[i] ^ state->stored_key[i];

    evo_secure_wipe(recovered_client_key, sizeof(recovered_client_key));
    evo_secure_wipe(client_signature, sizeof(client_signature));
    evo_secure_wipe(client_proof, sizeof(client_proof));
    evo_secure_wipe(recovered_stored_key, sizeof(recovered_stored_key));

    if (diff != 0) return -1;  /* proof verification failed */

    /* Compute ServerSignature = HMAC(ServerKey, AuthMessage) */
    uint8_t server_signature[32];
    hmac_sha256(state->server_key, 32,
                (const uint8_t *)state->auth_message,
                strlen(state->auth_message),
                server_signature);

    /* Base64-encode ServerSignature */
    char sig_b64[64];
    b64_encode(server_signature, 32, sig_b64, sizeof(sig_b64));

    evo_secure_wipe(server_signature, sizeof(server_signature));

    /* Build server-final-message: v=<base64_server_signature> */
    snprintf(server_final, server_final_size,
             "SCRAM-SERVER-FINAL v=%s", sig_b64);

    return 0;
}
