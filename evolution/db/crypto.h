/*
 * crypto.h — SHA-256, HMAC-SHA256, PBKDF2-SHA256 for EvoSQL
 *
 * Pure C implementation — no external dependencies.
 * Used by UserMgmt.c for password hashing and verification.
 */
#ifndef CRYPTO_H
#define CRYPTO_H

#include <stdint.h>
#include <stddef.h>

/* SHA-256 digest size in bytes */
#define SHA256_DIGEST_SIZE  32
#define SHA256_BLOCK_SIZE   64

/* PBKDF2 parameters */
#define PBKDF2_ITERATIONS   100000
#define PBKDF2_SALT_LEN     16
#define PBKDF2_KEY_LEN      32

/* Maximum encoded hash string:
 * "pbkdf2:100000:<32-hex-salt>:<64-hex-hash>" = ~120 chars */
#define HASH_STRING_MAX     256

/* ----------------------------------------------------------------
 *  SHA-256
 * ---------------------------------------------------------------- */
typedef struct {
    uint32_t state[8];
    uint64_t bitcount;
    uint8_t  buffer[SHA256_BLOCK_SIZE];
} SHA256_CTX;

void sha256_init(SHA256_CTX *ctx);
void sha256_update(SHA256_CTX *ctx, const uint8_t *data, size_t len);
void sha256_final(SHA256_CTX *ctx, uint8_t digest[SHA256_DIGEST_SIZE]);

/* Convenience: hash data in one call */
void sha256(const uint8_t *data, size_t len, uint8_t digest[SHA256_DIGEST_SIZE]);

/* ----------------------------------------------------------------
 *  HMAC-SHA256
 * ---------------------------------------------------------------- */
void hmac_sha256(const uint8_t *key, size_t key_len,
                 const uint8_t *data, size_t data_len,
                 uint8_t out[SHA256_DIGEST_SIZE]);

/* ----------------------------------------------------------------
 *  PBKDF2-SHA256
 * ---------------------------------------------------------------- */

/* Derive key from password + salt.
 * out must be at least dk_len bytes. */
void pbkdf2_sha256(const uint8_t *password, size_t pass_len,
                   const uint8_t *salt, size_t salt_len,
                   int iterations,
                   uint8_t *out, size_t dk_len);

/* ----------------------------------------------------------------
 *  High-level password API
 * ---------------------------------------------------------------- */

/* Generate a random salt (reads /dev/urandom on Linux, CryptGenRandom on Windows) */
int crypto_random_bytes(uint8_t *buf, size_t len);

/* Hash a password → encoded string "pbkdf2:100000:<hex-salt>:<hex-hash>"
 * Returns 0 on success, -1 on error. */
int crypto_hash_password(const char *password, char *out, size_t out_size);

/* Verify a password against an encoded hash string.
 * Returns 1 if match, 0 if no match, -1 on error. */
int crypto_verify_password(const char *password, const char *encoded);

#endif /* CRYPTO_H */
