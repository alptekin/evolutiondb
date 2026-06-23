#ifndef ADAPTOR_UTIL_H
#define ADAPTOR_UTIL_H

#include <stddef.h>

/* Secure memory wipe — prevents compiler from optimizing out memset.
 * Local copy for adaptor modules to avoid crypto.h / OpenSSL clash. */
void evo_secure_wipe(void *ptr, size_t len);

/* Redact PASSWORD clauses from SQL for safe logging.
 * Replaces PASSWORD 'secret' with PASSWORD '***'. */
void sql_redact_password(char *dst, size_t dst_size, const char *src);

#endif /* ADAPTOR_UTIL_H */
