/*
 * FullText.h — Basic full-text search (Task 86, Feature #52)
 *
 * Model: inverted index as a B+ tree per FT index.
 *   Key format: "<word>\x1f<pk_key>"
 *   Value (RowID): heap location of the indexed row.
 *
 * Tokenizer: lowercase, strip non-alphanumeric, drop short tokens (<2
 * chars) and a small English stop-word list. Shared between index-build
 * time and query time so MATCH AGAINST sees the same token stream.
 */
#ifndef EVO_FULLTEXT_H
#define EVO_FULLTEXT_H

#include <stddef.h>
#include <stdint.h>

#ifdef __cplusplus
extern "C" {
#endif

#define FT_MAX_TOKENS      256
#define FT_MAX_TOKEN_LEN   64
#define FT_KEY_SEP         '\x1f'

/* Tokenize `text` in place: writes lowercased tokens into `tokens[]`.
 * Returns the number of tokens written (0 if all filtered out).
 * Caller-provided buffers:
 *   tokens: char[FT_MAX_TOKENS][FT_MAX_TOKEN_LEN]
 *   max: entries available (<= FT_MAX_TOKENS) */
int ft_tokenize(const char *text,
                char tokens[][FT_MAX_TOKEN_LEN],
                int max);

/* Build a full-text index key: "<word>\x1f<pk_key>".
 * Returns bytes written (excluding terminator), or -1 if the output
 * buffer is too small. */
int ft_build_key(const char *word, const char *pk_key,
                 char *out, size_t out_size);

/* Split an FT key back into (word, pk_key). Returns 0 on success. */
int ft_split_key(const char *key, char *word, size_t w_size,
                 char *pk, size_t p_size);

#ifdef __cplusplus
}
#endif

#endif /* EVO_FULLTEXT_H */
