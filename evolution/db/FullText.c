/*
 * FullText.c — tokenizer + inverted-index key helpers for Task 86.
 */

#include <ctype.h>
#include <stdio.h>
#include <string.h>

#include "FullText.h"

/* Small English stop-word list — sorted for bsearch. Matches the
 * lowercase token after punctuation stripping. */
static const char *const ft_stop_words[] = {
    "a", "an", "and", "are", "as", "at", "be", "but", "by",
    "for", "if", "in", "is", "it", "no", "not", "of", "on",
    "or", "so", "that", "the", "this", "to", "was", "were",
    "will", "with"
};
static const int ft_stop_word_count =
    (int)(sizeof(ft_stop_words) / sizeof(ft_stop_words[0]));

static int ft_is_stop_word(const char *tok)
{
    /* Linear scan — the list is short enough that binary search wouldn't
     * win. Keep sorted so we can switch if the list grows. */
    for (int i = 0; i < ft_stop_word_count; i++) {
        if (strcmp(ft_stop_words[i], tok) == 0) return 1;
    }
    return 0;
}

int ft_tokenize(const char *text,
                char tokens[][FT_MAX_TOKEN_LEN],
                int max)
{
    if (!text || !tokens || max <= 0) return 0;
    int n = 0;
    const char *p = text;
    char buf[FT_MAX_TOKEN_LEN];
    int bp = 0;

    while (*p && n < max) {
        unsigned char c = (unsigned char)*p;
        if (isalnum(c)) {
            if (bp < FT_MAX_TOKEN_LEN - 1) {
                buf[bp++] = (char)tolower(c);
            }
            /* Else: truncate silently — matches how most FT engines behave on
             * overlong tokens. */
            p++;
            continue;
        }

        /* Non-alnum byte — end of token. */
        if (bp > 0) {
            buf[bp] = '\0';
            if (bp >= 2 && !ft_is_stop_word(buf)) {
                strcpy(tokens[n], buf);
                n++;
            }
            bp = 0;
        }
        p++;
    }

    /* Flush trailing token. */
    if (bp > 0 && n < max) {
        buf[bp] = '\0';
        if (bp >= 2 && !ft_is_stop_word(buf)) {
            strcpy(tokens[n], buf);
            n++;
        }
    }
    return n;
}

int ft_build_key(const char *word, const char *pk_key,
                 char *out, size_t out_size)
{
    if (!word || !pk_key || !out || out_size == 0) return -1;
    int n = snprintf(out, out_size, "%s%c%s", word, FT_KEY_SEP, pk_key);
    if (n < 0 || (size_t)n >= out_size) return -1;
    return n;
}

int ft_split_key(const char *key, char *word, size_t w_size,
                 char *pk, size_t p_size)
{
    if (!key || !word || !pk) return -1;
    const char *sep = strchr(key, FT_KEY_SEP);
    if (!sep) return -1;
    size_t w_len = (size_t)(sep - key);
    if (w_len >= w_size) w_len = w_size - 1;
    memcpy(word, key, w_len);
    word[w_len] = '\0';
    size_t p_len = strlen(sep + 1);
    if (p_len >= p_size) p_len = p_size - 1;
    memcpy(pk, sep + 1, p_len);
    pk[p_len] = '\0';
    return 0;
}
