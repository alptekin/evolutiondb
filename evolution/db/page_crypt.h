/*
 * page_crypt.h — Page-Level Transparent Data Encryption (TDE) for EvoSQL
 *
 * Two-layer key architecture (Oracle TDE style):
 *   Passphrase (env var) → PBKDF2 → MEK (Master Encryption Key)
 *   MEK wraps/unwraps DEK (Data Encryption Key) via AES-256-GCM
 *   DEK encrypts/decrypts pages via AES-256-CTR
 *
 * Page 0 (FileHeader) is always plaintext.
 * All other pages are encrypted on disk, plaintext in the buffer pool.
 */
#ifndef PAGE_CRYPT_H
#define PAGE_CRYPT_H

#include <stdint.h>

#ifdef EVO_ENCRYPTION

/* Initialize encryption for a NEW database.
 * Generates random DEK + salt + IV prefix, wraps DEK with passphrase-derived MEK.
 * Fills salt_out[16], wrapped_dek_out[48], iv_prefix_out[8] for FileHeader.
 * Returns 0 on success, -1 if no EVOSQL_ENCRYPTION_KEY set. */
int  pcrypt_init_new(uint8_t *salt_out, uint8_t *wrapped_dek_out,
                     uint8_t *iv_prefix_out);

/* Initialize encryption for an EXISTING database.
 * Unwraps DEK using passphrase-derived MEK.
 * Returns 0 on success, -1 if wrong key (GCM tag fail). */
int  pcrypt_init_existing(const uint8_t *salt, const uint8_t *wrapped_dek,
                          const uint8_t *iv_prefix);

/* Encrypt a page buffer in-place. page_no used as part of CTR IV.
 * Skips page 0 (FileHeader). Returns 0 on success. */
int  pcrypt_encrypt_page(uint8_t *buf, uint32_t page_no);

/* Decrypt a page buffer in-place. Skips page 0.
 * Returns 0 on success. */
int  pcrypt_decrypt_page(uint8_t *buf, uint32_t page_no);

/* Re-wrap DEK with new passphrase (for ALTER SYSTEM ... REKEY).
 * Generates new salt, re-wraps DEK. IV prefix unchanged → no page re-encryption.
 * Returns 0 on success. */
int  pcrypt_rekey(const char *new_passphrase, uint8_t *new_salt_out,
                  uint8_t *new_wrapped_dek_out);

/* Wipe DEK + state from memory. */
void pcrypt_shutdown(void);

/* Is encryption active? */
int  pcrypt_is_enabled(void);

#else /* !EVO_ENCRYPTION — stub implementations */

static inline int pcrypt_init_new(uint8_t *s, uint8_t *w, uint8_t *iv)
{ (void)s; (void)w; (void)iv; return -1; }

static inline int pcrypt_init_existing(const uint8_t *s, const uint8_t *w,
                                       const uint8_t *iv)
{ (void)s; (void)w; (void)iv; return -1; }

static inline int pcrypt_encrypt_page(uint8_t *b, uint32_t p)
{ (void)b; (void)p; return 0; }

static inline int pcrypt_decrypt_page(uint8_t *b, uint32_t p)
{ (void)b; (void)p; return 0; }

static inline int pcrypt_rekey(const char *p, uint8_t *s, uint8_t *w)
{ (void)p; (void)s; (void)w; return -1; }

static inline void pcrypt_shutdown(void) {}

static inline int pcrypt_is_enabled(void) { return 0; }

#endif /* EVO_ENCRYPTION */
#endif /* PAGE_CRYPT_H */
