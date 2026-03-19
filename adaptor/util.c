/*
 * util.c — Shared adaptor utilities
 *
 * Provides evo_secure_wipe() and sql_redact_password() for all adaptor
 * modules, eliminating duplicate static copies across protocol handlers.
 */
#include <string.h>
#include <ctype.h>
#include <strings.h>
#include "util.h"

/* evo_secure_wipe is defined in crypto.c and declared in util.h.
 * No duplicate definition needed here — adaptor links crypto.o. */

/* ----------------------------------------------------------------
 *  sql_redact_password — scrub PASSWORD 'secret' → PASSWORD '***'
 * ---------------------------------------------------------------- */
void sql_redact_password(char *dst, size_t dst_size, const char *src)
{
    const char *p = src;
    char *d = dst;
    char *end = dst + dst_size - 1;

    while (*p && d < end) {
        if (strncasecmp(p, "PASSWORD", 8) == 0 &&
            (p == src || isspace((unsigned char)p[-1])) &&
            (p[8] == '\0' || isspace((unsigned char)p[8]))) {
            const char *kw = "PASSWORD ";
            while (*kw && d < end) *d++ = *kw++;
            p += 8;
            while (*p && isspace((unsigned char)*p)) p++;
            if (*p == '\'') {
                p++;
                while (*p && *p != '\'') p++;
                if (*p == '\'') p++;
            } else {
                while (*p && !isspace((unsigned char)*p) && *p != ';') p++;
            }
            const char *redacted = "'***'";
            while (*redacted && d < end) *d++ = *redacted++;
        } else {
            *d++ = *p++;
        }
    }
    *d = '\0';
}
