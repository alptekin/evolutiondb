/*
 * Notify.c — parser-to-executor staging for LISTEN / NOTIFY / UNLISTEN
 *
 * Keeps the parser file small: grammar actions call these setters
 * to stash the LISTEN/NOTIFY command in the active QueryContext. The
 * adaptor's query_executor picks up g_notify and fires the real
 * registry/pending-list work there (Task 91 — Feature #62).
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include "database.h"
#include "query_context.h"

static void notify_set_channel(char *out, const char *channel)
{
    if (!channel) { out[0] = '\0'; return; }
    size_t n = strlen(channel);
    if (n >= 64) n = 63;
    memcpy(out, channel, n);
    out[n] = '\0';
}

void SetListenChannel(const char *channel, int self_flag)
{
    if (!g_qctx) return;
    g_notify.kind = NOTIFY_CMD_LISTEN;
    g_notify.self_flag = self_flag ? 1 : 0;
    g_notify.payload_len = 0;
    g_notify.payload[0] = '\0';
    notify_set_channel(g_notify.channel, channel);
}

void SetUnlistenChannel(const char *channel)
{
    if (!g_qctx) return;
    g_notify.kind = NOTIFY_CMD_UNLISTEN;
    g_notify.self_flag = 0;
    g_notify.payload_len = 0;
    g_notify.payload[0] = '\0';
    notify_set_channel(g_notify.channel, channel);
}

void SetUnlistenAll(void)
{
    if (!g_qctx) return;
    g_notify.kind = NOTIFY_CMD_UNLISTEN_ALL;
    g_notify.self_flag = 0;
    g_notify.payload_len = 0;
    g_notify.payload[0] = '\0';
    g_notify.channel[0] = '\0';
}

void SetNotifyChannel(const char *channel, const char *payload)
{
    if (!g_qctx) return;
    g_notify.self_flag = 0;
    notify_set_channel(g_notify.channel, channel);
    if (payload && *payload) {
        size_t n = strlen(payload);
        if (n > 8000) {
            /* Flag the overflow for the executor to raise 22023. We still
             * stash truncated data so the dispatcher can also detect it
             * via strlen() > NOTIFY_PAYLOAD_MAX, but the length marker
             * here prevents silent corruption. */
            g_notify.payload_len = -1;  /* sentinel: too long */
            g_notify.payload[0] = '\0';
            g_notify.kind = NOTIFY_CMD_NOTIFY_WITH_PAYLOAD;
            return;
        }
        memcpy(g_notify.payload, payload, n);
        g_notify.payload[n] = '\0';
        g_notify.payload_len = (int)n;
        g_notify.kind = NOTIFY_CMD_NOTIFY_WITH_PAYLOAD;
    } else {
        g_notify.payload[0] = '\0';
        g_notify.payload_len = 0;
        g_notify.kind = NOTIFY_CMD_NOTIFY;
    }
}
