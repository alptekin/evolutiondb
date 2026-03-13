/*
 * page_crypt.c — Page-Level Transparent Data Encryption (TDE) for EvoSQL
 *
 * Two-layer key architecture:
 *   MEK (Master Encryption Key) — derived from passphrase via PBKDF2-SHA256
 *   DEK (Data Encryption Key)   — random 256-bit, wraps/unwraps via AES-256-GCM
 *   Pages encrypted via AES-256-CTR (zero storage overhead, no per-page tag)
 *
 * Requires: OpenSSL EVP API (linked via -lssl -lcrypto with TLS=1)
 */
#ifdef EVO_ENCRYPTION

#include "page_crypt.h"
#include "page_mgr.h"
#include "crypto.h"

#include <openssl/evp.h>
#include <string.h>
#include <stdlib.h>
#include <stdio.h>

/* ================================================================
 *  Module state (file scope — not accessible externally)
 * ================================================================ */
static uint8_t         g_dek[32];             /* Data Encryption Key */
static uint8_t         g_iv_prefix[8];        /* Fixed prefix for page CTR IVs */
static int             g_encryption_enabled = 0;
static EVP_CIPHER_CTX *g_ctr_ctx = NULL;      /* Cached CTR context (avoids alloc per page) */

/* ================================================================
 *  MEK derivation: passphrase + salt → 256-bit key
 * ================================================================ */
static void derive_mek(const char *passphrase, const uint8_t *salt,
                       uint8_t mek[32])
{
    pbkdf2_sha256((const uint8_t *)passphrase, strlen(passphrase),
                  salt, 16, PBKDF2_ITERATIONS, mek, 32);
}

/* ================================================================
 *  DEK wrapping / unwrapping via AES-256-GCM
 *
 *  wrap:   dek[32]     → out[48] = ciphertext[32] + GCM_tag[16]
 *  unwrap: wrapped[48] → dek[32], returns -1 on auth failure
 *
 *  Fixed 12-byte IV for wrapping (safe: each salt produces a unique MEK,
 *  so the same IV is never reused with the same key).
 * ================================================================ */
static const uint8_t WRAP_IV[12] = {
    'E','V','O','_','W','R','A','P','_','K','E','Y'
};

static int wrap_dek(const uint8_t mek[32], const uint8_t dek[32],
                    uint8_t out[48])
{
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    if (!ctx) return -1;

    int len, rc = -1;

    if (EVP_EncryptInit_ex(ctx, EVP_aes_256_gcm(), NULL, NULL, NULL) != 1)
        goto done;
    if (EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, 12, NULL) != 1)
        goto done;
    if (EVP_EncryptInit_ex(ctx, NULL, NULL, mek, WRAP_IV) != 1)
        goto done;
    if (EVP_EncryptUpdate(ctx, out, &len, dek, 32) != 1)
        goto done;
    if (EVP_EncryptFinal_ex(ctx, out + len, &len) != 1)
        goto done;
    if (EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_GET_TAG, 16, out + 32) != 1)
        goto done;
    rc = 0;

done:
    EVP_CIPHER_CTX_free(ctx);
    return rc;
}

static int unwrap_dek(const uint8_t mek[32], const uint8_t wrapped[48],
                      uint8_t dek[32])
{
    EVP_CIPHER_CTX *ctx = EVP_CIPHER_CTX_new();
    if (!ctx) return -1;

    int len, rc = -1;

    if (EVP_DecryptInit_ex(ctx, EVP_aes_256_gcm(), NULL, NULL, NULL) != 1)
        goto done;
    if (EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_IVLEN, 12, NULL) != 1)
        goto done;
    if (EVP_DecryptInit_ex(ctx, NULL, NULL, mek, WRAP_IV) != 1)
        goto done;
    if (EVP_DecryptUpdate(ctx, dek, &len, wrapped, 32) != 1)
        goto done;
    /* Set expected GCM tag for verification */
    if (EVP_CIPHER_CTX_ctrl(ctx, EVP_CTRL_GCM_SET_TAG, 16,
                            (void *)(wrapped + 32)) != 1)
        goto done;
    /* DecryptFinal verifies the tag — fails if wrong key */
    if (EVP_DecryptFinal_ex(ctx, dek + len, &len) != 1)
        goto done;
    rc = 0;

done:
    EVP_CIPHER_CTX_free(ctx);
    return rc;
}

/* ================================================================
 *  Page encryption / decryption via AES-256-CTR
 *
 *  CTR mode: ciphertext same size as plaintext, no tag overhead.
 *  CTR is symmetric: encrypt == decrypt (same function).
 *
 *  IV (16 bytes): iv_prefix[8] || page_no_LE[4] || zeros[4]
 *  The iv_prefix is randomly generated once per database and stored
 *  in the FileHeader. It never changes, even on passphrase rekey.
 * ================================================================ */
static void init_ctr_ctx(void)
{
    if (g_ctr_ctx) return;
    g_ctr_ctx = EVP_CIPHER_CTX_new();
    if (g_ctr_ctx)
        EVP_EncryptInit_ex(g_ctr_ctx, EVP_aes_256_ctr(), NULL, NULL, NULL);
}

static int crypt_page_ctr(uint8_t *buf, uint32_t page_no)
{
    if (!g_ctr_ctx) return -1;

    uint8_t iv[16];
    memcpy(iv, g_iv_prefix, 8);
    iv[8]  = (uint8_t)(page_no);
    iv[9]  = (uint8_t)(page_no >> 8);
    iv[10] = (uint8_t)(page_no >> 16);
    iv[11] = (uint8_t)(page_no >> 24);
    memset(iv + 12, 0, 4);

    int len;

    /* Re-init with key + IV; cipher already set on the cached context */
    if (EVP_EncryptInit_ex(g_ctr_ctx, NULL, NULL, g_dek, iv) != 1)
        return -1;
    /* CTR supports in-place: output overwrites input directly */
    if (EVP_EncryptUpdate(g_ctr_ctx, buf, &len, buf, EVO_PAGE_SIZE) != 1)
        return -1;

    return 0;
}

/* ================================================================
 *  Default-key detection — warn if using the well-known passphrase
 *  shipped in docker-compose.yml
 * ================================================================ */
static const char *KNOWN_DEFAULT_KEY =
    "MuhtacOldugunKudret!DamarlarindakiAsilKandaMevcuttur";

static void warn_default_key(const char *passphrase)
{
    if (strcmp(passphrase, KNOWN_DEFAULT_KEY) == 0) {
        fprintf(stderr,
            "\n"
            "  ╔══════════════════════════════════════════════════════╗\n"
            "  ║  WARNING: Using the default encryption passphrase!   ║\n"
            "  ║  This key is publicly known. Set a custom            ║\n"
            "  ║  EVOSQL_ENCRYPTION_KEY for production use.           ║\n"
            "  ╚══════════════════════════════════════════════════════╝\n"
            "\n");
    }
}

/* ================================================================
 *  Public API
 * ================================================================ */

int pcrypt_init_new(uint8_t *salt_out, uint8_t *wrapped_dek_out,
                    uint8_t *iv_prefix_out)
{
    const char *passphrase = getenv("EVOSQL_ENCRYPTION_KEY");
    if (!passphrase || !passphrase[0]) return -1;

    /* 1. Generate random DEK */
    if (crypto_random_bytes(g_dek, 32) < 0) {
        fprintf(stderr, "[TDE] Failed to generate random DEK\n");
        return -1;
    }

    /* 2. Generate random salt for MEK derivation */
    uint8_t salt[16];
    if (crypto_random_bytes(salt, 16) < 0) {
        fprintf(stderr, "[TDE] Failed to generate random salt\n");
        return -1;
    }
    memcpy(salt_out, salt, 16);

    /* 3. Generate random IV prefix for page encryption */
    if (crypto_random_bytes(g_iv_prefix, 8) < 0) {
        fprintf(stderr, "[TDE] Failed to generate IV prefix\n");
        return -1;
    }
    memcpy(iv_prefix_out, g_iv_prefix, 8);

    /* 4. Derive MEK from passphrase + salt */
    uint8_t mek[32];
    derive_mek(passphrase, salt, mek);

    /* 5. Wrap DEK with MEK */
    int rc = wrap_dek(mek, g_dek, wrapped_dek_out);
    evo_secure_wipe(mek, 32);

    if (rc == 0) {
        init_ctr_ctx();
        g_encryption_enabled = 1;
        fprintf(stderr, "[TDE] Encryption initialized for new database\n");
        warn_default_key(passphrase);
    }

    return rc;
}

int pcrypt_init_existing(const uint8_t *salt, const uint8_t *wrapped_dek,
                         const uint8_t *iv_prefix)
{
    const char *passphrase = getenv("EVOSQL_ENCRYPTION_KEY");
    if (!passphrase || !passphrase[0]) return -1;

    memcpy(g_iv_prefix, iv_prefix, 8);

    /* Derive MEK → unwrap DEK */
    uint8_t mek[32];
    derive_mek(passphrase, salt, mek);
    int rc = unwrap_dek(mek, wrapped_dek, g_dek);
    evo_secure_wipe(mek, 32);

    if (rc < 0) return -1;  /* wrong passphrase → GCM tag verification failed */

    init_ctr_ctx();
    g_encryption_enabled = 1;
    fprintf(stderr, "[TDE] Encryption key verified, database unlocked\n");
    warn_default_key(passphrase);
    return 0;
}

int pcrypt_encrypt_page(uint8_t *buf, uint32_t page_no)
{
    if (!g_encryption_enabled || page_no == 0) return 0;
    return crypt_page_ctr(buf, page_no);
}

int pcrypt_decrypt_page(uint8_t *buf, uint32_t page_no)
{
    if (!g_encryption_enabled || page_no == 0) return 0;
    return crypt_page_ctr(buf, page_no);  /* CTR: encrypt == decrypt */
}

int pcrypt_rekey(const char *new_passphrase, uint8_t *new_salt_out,
                 uint8_t *new_wrapped_dek_out)
{
    if (!g_encryption_enabled) return -1;

    /* New salt + new MEK → same DEK re-wrapped */
    crypto_random_bytes(new_salt_out, 16);

    uint8_t new_mek[32];
    derive_mek(new_passphrase, new_salt_out, new_mek);
    int rc = wrap_dek(new_mek, g_dek, new_wrapped_dek_out);
    evo_secure_wipe(new_mek, 32);

    /* iv_prefix stays the same → no page re-encryption needed */
    return rc;
}

void pcrypt_shutdown(void)
{
    if (g_ctr_ctx) {
        EVP_CIPHER_CTX_free(g_ctr_ctx);
        g_ctr_ctx = NULL;
    }
    evo_secure_wipe(g_dek, 32);
    evo_secure_wipe(g_iv_prefix, 8);
    g_encryption_enabled = 0;
}

int pcrypt_is_enabled(void)
{
    return g_encryption_enabled;
}

#endif /* EVO_ENCRYPTION */
