/*
 * crypto.c — SHA-256, HMAC-SHA256, PBKDF2-SHA256 for EvoSQL
 *
 * Pure C implementation based on FIPS 180-4 / RFC 2104 / RFC 2898.
 * No external dependencies.
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "crypto.h"

#ifdef _WIN32
#include <windows.h>
#include <wincrypt.h>
#else
#include <fcntl.h>
#include <unistd.h>
#endif

/* ================================================================
 *  SHA-256 Implementation (FIPS 180-4)
 * ================================================================ */

static const uint32_t K256[64] = {
    0x428a2f98, 0x71374491, 0xb5c0fbcf, 0xe9b5dba5,
    0x3956c25b, 0x59f111f1, 0x923f82a4, 0xab1c5ed5,
    0xd807aa98, 0x12835b01, 0x243185be, 0x550c7dc3,
    0x72be5d74, 0x80deb1fe, 0x9bdc06a7, 0xc19bf174,
    0xe49b69c1, 0xefbe4786, 0x0fc19dc6, 0x240ca1cc,
    0x2de92c6f, 0x4a7484aa, 0x5cb0a9dc, 0x76f988da,
    0x983e5152, 0xa831c66d, 0xb00327c8, 0xbf597fc7,
    0xc6e00bf3, 0xd5a79147, 0x06ca6351, 0x14292967,
    0x27b70a85, 0x2e1b2138, 0x4d2c6dfc, 0x53380d13,
    0x650a7354, 0x766a0abb, 0x81c2c92e, 0x92722c85,
    0xa2bfe8a1, 0xa81a664b, 0xc24b8b70, 0xc76c51a3,
    0xd192e819, 0xd6990624, 0xf40e3585, 0x106aa070,
    0x19a4c116, 0x1e376c08, 0x2748774c, 0x34b0bcb5,
    0x391c0cb3, 0x4ed8aa4a, 0x5b9cca4f, 0x682e6ff3,
    0x748f82ee, 0x78a5636f, 0x84c87814, 0x8cc70208,
    0x90befffa, 0xa4506ceb, 0xbef9a3f7, 0xc67178f2
};

#define ROTR32(x, n)  (((x) >> (n)) | ((x) << (32 - (n))))
#define SHR(x, n)     ((x) >> (n))
#define CH(x, y, z)   (((x) & (y)) ^ (~(x) & (z)))
#define MAJ(x, y, z)  (((x) & (y)) ^ ((x) & (z)) ^ ((y) & (z)))
#define SIGMA0(x)      (ROTR32(x, 2) ^ ROTR32(x, 13) ^ ROTR32(x, 22))
#define SIGMA1(x)      (ROTR32(x, 6) ^ ROTR32(x, 11) ^ ROTR32(x, 25))
#define sigma0(x)      (ROTR32(x, 7) ^ ROTR32(x, 18) ^ SHR(x, 3))
#define sigma1(x)      (ROTR32(x, 17) ^ ROTR32(x, 19) ^ SHR(x, 10))

static void sha256_transform(uint32_t state[8], const uint8_t block[64])
{
    uint32_t W[64];
    uint32_t a, b, c, d, e, f, g, h;
    int i;

    /* Prepare message schedule */
    for (i = 0; i < 16; i++) {
        W[i] = ((uint32_t)block[i*4] << 24) |
               ((uint32_t)block[i*4+1] << 16) |
               ((uint32_t)block[i*4+2] << 8) |
               ((uint32_t)block[i*4+3]);
    }
    for (i = 16; i < 64; i++) {
        W[i] = sigma1(W[i-2]) + W[i-7] + sigma0(W[i-15]) + W[i-16];
    }

    a = state[0]; b = state[1]; c = state[2]; d = state[3];
    e = state[4]; f = state[5]; g = state[6]; h = state[7];

    for (i = 0; i < 64; i++) {
        uint32_t T1 = h + SIGMA1(e) + CH(e, f, g) + K256[i] + W[i];
        uint32_t T2 = SIGMA0(a) + MAJ(a, b, c);
        h = g; g = f; f = e; e = d + T1;
        d = c; c = b; b = a; a = T1 + T2;
    }

    state[0] += a; state[1] += b; state[2] += c; state[3] += d;
    state[4] += e; state[5] += f; state[6] += g; state[7] += h;
}

void sha256_init(SHA256_CTX *ctx)
{
    ctx->state[0] = 0x6a09e667;
    ctx->state[1] = 0xbb67ae85;
    ctx->state[2] = 0x3c6ef372;
    ctx->state[3] = 0xa54ff53a;
    ctx->state[4] = 0x510e527f;
    ctx->state[5] = 0x9b05688c;
    ctx->state[6] = 0x1f83d9ab;
    ctx->state[7] = 0x5be0cd19;
    ctx->bitcount = 0;
    memset(ctx->buffer, 0, SHA256_BLOCK_SIZE);
}

void sha256_update(SHA256_CTX *ctx, const uint8_t *data, size_t len)
{
    size_t i;
    size_t buf_pos = (size_t)((ctx->bitcount >> 3) & 0x3F);

    ctx->bitcount += (uint64_t)len << 3;

    for (i = 0; i < len; i++) {
        ctx->buffer[buf_pos++] = data[i];
        if (buf_pos == SHA256_BLOCK_SIZE) {
            sha256_transform(ctx->state, ctx->buffer);
            buf_pos = 0;
        }
    }
}

void sha256_final(SHA256_CTX *ctx, uint8_t digest[SHA256_DIGEST_SIZE])
{
    size_t buf_pos = (size_t)((ctx->bitcount >> 3) & 0x3F);
    int i;

    ctx->buffer[buf_pos++] = 0x80;

    if (buf_pos > 56) {
        memset(ctx->buffer + buf_pos, 0, SHA256_BLOCK_SIZE - buf_pos);
        sha256_transform(ctx->state, ctx->buffer);
        memset(ctx->buffer, 0, 56);
    } else {
        memset(ctx->buffer + buf_pos, 0, 56 - buf_pos);
    }

    /* Append length in bits (big-endian) */
    for (i = 0; i < 8; i++) {
        ctx->buffer[56 + i] = (uint8_t)(ctx->bitcount >> (56 - i * 8));
    }
    sha256_transform(ctx->state, ctx->buffer);

    for (i = 0; i < 8; i++) {
        digest[i*4]     = (uint8_t)(ctx->state[i] >> 24);
        digest[i*4 + 1] = (uint8_t)(ctx->state[i] >> 16);
        digest[i*4 + 2] = (uint8_t)(ctx->state[i] >> 8);
        digest[i*4 + 3] = (uint8_t)(ctx->state[i]);
    }

    /* Wipe sensitive data */
    evo_secure_wipe(ctx, sizeof(SHA256_CTX));
}

void sha256(const uint8_t *data, size_t len, uint8_t digest[SHA256_DIGEST_SIZE])
{
    SHA256_CTX ctx;
    sha256_init(&ctx);
    sha256_update(&ctx, data, len);
    sha256_final(&ctx, digest);
}

/* ================================================================
 *  HMAC-SHA256 (RFC 2104)
 * ================================================================ */
void hmac_sha256(const uint8_t *key, size_t key_len,
                 const uint8_t *data, size_t data_len,
                 uint8_t out[SHA256_DIGEST_SIZE])
{
    SHA256_CTX ctx;
    uint8_t k_ipad[SHA256_BLOCK_SIZE];
    uint8_t k_opad[SHA256_BLOCK_SIZE];
    uint8_t tk[SHA256_DIGEST_SIZE];
    int i;

    /* If key is longer than block size, hash it */
    if (key_len > SHA256_BLOCK_SIZE) {
        sha256(key, key_len, tk);
        key = tk;
        key_len = SHA256_DIGEST_SIZE;
    }

    memset(k_ipad, 0x36, SHA256_BLOCK_SIZE);
    memset(k_opad, 0x5c, SHA256_BLOCK_SIZE);

    for (i = 0; i < (int)key_len; i++) {
        k_ipad[i] ^= key[i];
        k_opad[i] ^= key[i];
    }

    /* Inner hash: H(k_ipad || data) */
    sha256_init(&ctx);
    sha256_update(&ctx, k_ipad, SHA256_BLOCK_SIZE);
    sha256_update(&ctx, data, data_len);
    sha256_final(&ctx, out);

    /* Outer hash: H(k_opad || inner_hash) */
    sha256_init(&ctx);
    sha256_update(&ctx, k_opad, SHA256_BLOCK_SIZE);
    sha256_update(&ctx, out, SHA256_DIGEST_SIZE);
    sha256_final(&ctx, out);

    /* Wipe sensitive data */
    evo_secure_wipe(k_ipad, sizeof(k_ipad));
    evo_secure_wipe(k_opad, sizeof(k_opad));
}

/* ================================================================
 *  PBKDF2-SHA256 (RFC 2898)
 * ================================================================ */
void pbkdf2_sha256(const uint8_t *password, size_t pass_len,
                   const uint8_t *salt, size_t salt_len,
                   int iterations,
                   uint8_t *out, size_t dk_len)
{
    uint8_t U[SHA256_DIGEST_SIZE];
    uint8_t T[SHA256_DIGEST_SIZE];
    uint8_t salt_block[256]; /* salt + 4-byte block index */
    uint32_t block = 1;
    size_t offset = 0;
    int i, j;

    while (offset < dk_len) {
        /* salt || INT(block) */
        memcpy(salt_block, salt, salt_len);
        salt_block[salt_len]     = (uint8_t)(block >> 24);
        salt_block[salt_len + 1] = (uint8_t)(block >> 16);
        salt_block[salt_len + 2] = (uint8_t)(block >> 8);
        salt_block[salt_len + 3] = (uint8_t)(block);

        /* U_1 = PRF(password, salt || INT(block)) */
        hmac_sha256(password, pass_len, salt_block, salt_len + 4, U);
        memcpy(T, U, SHA256_DIGEST_SIZE);

        /* U_2 .. U_c */
        for (i = 1; i < iterations; i++) {
            hmac_sha256(password, pass_len, U, SHA256_DIGEST_SIZE, U);
            for (j = 0; j < SHA256_DIGEST_SIZE; j++)
                T[j] ^= U[j];
        }

        /* Copy to output */
        size_t copy_len = dk_len - offset;
        if (copy_len > SHA256_DIGEST_SIZE)
            copy_len = SHA256_DIGEST_SIZE;
        memcpy(out + offset, T, copy_len);

        offset += copy_len;
        block++;
    }

    evo_secure_wipe(U, sizeof(U));
    evo_secure_wipe(T, sizeof(T));
}

/* ================================================================
 *  Random bytes
 * ================================================================ */
int crypto_random_bytes(uint8_t *buf, size_t len)
{
#ifdef _WIN32
    HCRYPTPROV hProv;
    if (!CryptAcquireContext(&hProv, NULL, NULL, PROV_RSA_FULL,
                             CRYPT_VERIFYCONTEXT | CRYPT_SILENT))
        return -1;
    if (!CryptGenRandom(hProv, (DWORD)len, buf)) {
        CryptReleaseContext(hProv, 0);
        return -1;
    }
    CryptReleaseContext(hProv, 0);
    return 0;
#else
    int fd = open("/dev/urandom", O_RDONLY);
    if (fd < 0) return -1;
    ssize_t n = read(fd, buf, len);
    close(fd);
    return (n == (ssize_t)len) ? 0 : -1;
#endif
}

/* ================================================================
 *  Hex encoding helpers
 * ================================================================ */
static void bytes_to_hex(const uint8_t *bytes, size_t len, char *hex)
{
    static const char hextab[] = "0123456789abcdef";
    size_t i;
    for (i = 0; i < len; i++) {
        hex[i*2]     = hextab[(bytes[i] >> 4) & 0x0F];
        hex[i*2 + 1] = hextab[bytes[i] & 0x0F];
    }
    hex[len*2] = '\0';
}

static int hex_to_bytes(const char *hex, uint8_t *bytes, size_t max_len)
{
    size_t hex_len = strlen(hex);
    size_t byte_len = hex_len / 2;
    size_t i;

    if (hex_len % 2 != 0 || byte_len > max_len)
        return -1;

    for (i = 0; i < byte_len; i++) {
        unsigned int val;
        if (sscanf(hex + i*2, "%2x", &val) != 1)
            return -1;
        bytes[i] = (uint8_t)val;
    }
    return (int)byte_len;
}

/* ================================================================
 *  High-level password API
 * ================================================================ */

/*
 * Hash format: "pbkdf2:<iterations>:<hex-salt>:<hex-hash>"
 * Example:     "pbkdf2:100000:a1b2c3d4...:<64 hex chars>"
 */
int crypto_hash_password(const char *password, char *out, size_t out_size)
{
    uint8_t salt[PBKDF2_SALT_LEN];
    uint8_t hash[PBKDF2_KEY_LEN];
    char salt_hex[PBKDF2_SALT_LEN * 2 + 1];
    char hash_hex[PBKDF2_KEY_LEN * 2 + 1];

    if (out_size < HASH_STRING_MAX)
        return -1;

    /* Generate random salt */
    if (crypto_random_bytes(salt, PBKDF2_SALT_LEN) < 0)
        return -1;

    /* Derive key */
    pbkdf2_sha256((const uint8_t *)password, strlen(password),
                  salt, PBKDF2_SALT_LEN,
                  PBKDF2_ITERATIONS,
                  hash, PBKDF2_KEY_LEN);

    /* Encode */
    bytes_to_hex(salt, PBKDF2_SALT_LEN, salt_hex);
    bytes_to_hex(hash, PBKDF2_KEY_LEN, hash_hex);

    snprintf(out, out_size, "pbkdf2:%d:%s:%s",
             PBKDF2_ITERATIONS, salt_hex, hash_hex);

    /* Wipe sensitive buffers */
    evo_secure_wipe(salt, sizeof(salt));
    evo_secure_wipe(hash, sizeof(hash));

    return 0;
}

int crypto_verify_password(const char *password, const char *encoded)
{
    int iterations;
    char salt_hex[256], hash_hex[256];
    uint8_t salt[PBKDF2_SALT_LEN];
    uint8_t expected_hash[PBKDF2_KEY_LEN];
    uint8_t computed_hash[PBKDF2_KEY_LEN];
    int salt_len;
    int i;

    /* Parse encoded string */
    if (sscanf(encoded, "pbkdf2:%d:%255[^:]:%255s",
               &iterations, salt_hex, hash_hex) != 3)
        return -1;

    salt_len = hex_to_bytes(salt_hex, salt, PBKDF2_SALT_LEN);
    if (salt_len < 0)
        return -1;

    if (hex_to_bytes(hash_hex, expected_hash, PBKDF2_KEY_LEN) < 0)
        return -1;

    /* Recompute */
    pbkdf2_sha256((const uint8_t *)password, strlen(password),
                  salt, (size_t)salt_len,
                  iterations,
                  computed_hash, PBKDF2_KEY_LEN);

    /* Constant-time comparison to prevent timing attacks */
    int diff = 0;
    for (i = 0; i < PBKDF2_KEY_LEN; i++)
        diff |= computed_hash[i] ^ expected_hash[i];

    /* Wipe */
    evo_secure_wipe(salt, sizeof(salt));
    evo_secure_wipe(expected_hash, sizeof(expected_hash));
    evo_secure_wipe(computed_hash, sizeof(computed_hash));

    return (diff == 0) ? 1 : 0;
}

/* ================================================================
 *  Secure memory wipe (CWE-14 mitigation)
 *
 *  Uses a volatile function pointer so the compiler cannot
 *  optimise the call away even when the buffer is dead afterwards.
 *  Falls back to explicit_bzero() / SecureZeroMemory() when available.
 * ================================================================ */
#if defined(_WIN32)
void evo_secure_wipe(void *ptr, size_t len)
{
    SecureZeroMemory(ptr, len);
}
#elif defined(__STDC_LIB_EXT1__)
void evo_secure_wipe(void *ptr, size_t len)
{
    memset_s(ptr, len, 0, len);
}
#else
/* Volatile function pointer trick — the indirection prevents
 * the compiler from proving the call has no side effects. */
static void *(*const volatile evo_memset_ptr)(void *, int, size_t) = memset;

void evo_secure_wipe(void *ptr, size_t len)
{
    evo_memset_ptr(ptr, 0, len);
}
#endif
