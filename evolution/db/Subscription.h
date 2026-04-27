/*
 * Subscription.h — Durable LISTEN/NOTIFY subscriptions (Task 210, Feature #210)
 *
 * Built on top of Task 91 (in-memory LISTEN/NOTIFY): a CREATE
 * SUBSCRIPTION registers a durable mailbox keyed by name. Whenever a
 * NOTIFY commits on the channel that subscription is bound to, the
 * payload lands in the subscription's __sub_<name> backing table with
 * an auto-incrementing seq. The consumer drains the mailbox with
 * RESUME SUBSCRIPTION (returns rows in seq order) and acknowledges
 * progress with ACK SUBSCRIPTION ... UPTO N. The auto-RECLAIM daemon
 * prunes acked rows and TTL-expired ones.
 *
 * DDL:
 *   CREATE SUBSCRIPTION s FOR CHANNEL ch
 *   DROP   SUBSCRIPTION s
 *
 * DML:
 *   RESUME SUBSCRIPTION s
 *   ACK    SUBSCRIPTION s UPTO N
 *
 * Introspection:
 *   SHOW SUBSCRIPTIONS  (handled in adaptor/catalog.c)
 */
#ifndef EVO_SUBSCRIPTION_H
#define EVO_SUBSCRIPTION_H

#include <stdint.h>

void  ResetSubscriptionOpts(void);
void  SetSubscriptionName(const char *name);
void  SetSubscriptionChannel(const char *channel);
void  SetSubscriptionAckSeq(long long seq);

int   CreateSubscriptionProcess(int if_not_exists);
int   DropSubscriptionProcess(int if_exists);
int   ResumeSubscriptionProcess(void);
int   AckSubscriptionProcess(void);

/* Called from the NOTIFY commit path after the in-memory broadcast.
 * For each durable subscription bound to `channel`, append a row to
 * the backing __sub_<name> table with an auto-incrementing seq. */
void  subscription_publish(const char *channel, const char *payload);

#endif /* EVO_SUBSCRIPTION_H */
