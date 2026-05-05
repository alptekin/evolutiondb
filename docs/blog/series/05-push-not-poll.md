# Part 5 — Push, not poll: durable subscriptions and CDC streaming

_Series: [Long-Term Memory in EvolutionDB](00-index.md) — previous: [Part 4, Temporal memory](04-temporal-mvcc.md)._

The standard way an agent finds out something happened in its memory is
to ask. Every second, every five seconds, every minute. _Anything new?_
_Anything new?_ _Anything new?_ Most of the time the answer is no, and
the network round-trip plus the SQL execution plus the marshalling cost
on both ends adds up to a steady tax with no benefit.

The product piece quoted a 2,900× speedup for push over polling. This
article walks through where that number comes from: the in-memory
`LISTEN/NOTIFY` primitive (Task 91), the durable subscription mailbox
on top of it (Task 210), and the CDC streaming server that turns the
WAL into an external event feed (Task 211).

## The in-memory layer: `LISTEN/NOTIFY`

`LISTEN/NOTIFY` is the Postgres-shaped pub/sub primitive: a session
calls `LISTEN channel`, another session calls `NOTIFY channel,
'payload'`, and the first session receives the payload. EvolutionDB's
implementation lives in `evolution/db/Notify.c` and `adaptor/notify.c`,
split across the engine and the wire layer because the registry of
listeners is per-connection.

There are three things worth knowing about how it's wired:

**1. Delivery is commit-time, not statement-time.** A `NOTIFY` inside a
transaction does not deliver until the transaction commits. The payload
is _staged_ in the transaction's notify queue while the transaction is
in progress; if the transaction rolls back, the notifications are
dropped silently. This matches Postgres's semantics and means a
listener never sees an event for a row that doesn't exist.

**2. Per-transaction dedup.** Two identical `NOTIFY ch, 'p'` calls in
the same transaction produce one delivered event. This is by design —
agents that re-run the same workflow step on retry shouldn't fan out to
twice the listeners.

**3. Output mutex per connection.** Notifications are pushed onto the
same TCP stream the connection is reading queries from, so the engine
acquires a per-connection output mutex before writing. Otherwise an
in-flight result row and a notification frame could interleave in the
output buffer. (This is the bug that took the longest to diagnose
during Task 91.)

The wire format on the PG protocol is the standard `'A'` message —
backend pid + channel name + payload — for compatibility with `psql`
and every existing Postgres-aware client. On the EVO native protocol
it's a single `NOTIFY ch payload\n` line, also frame-aligned with the
output mutex.

The big drawback of in-memory `LISTEN/NOTIFY` is that it's exactly
that — _in-memory_. A subscriber that disconnects between the publish
and the next reconnect misses the message. This is fine for some
workflows and catastrophic for others. Hence Task 210.

## The durable layer: `CREATE SUBSCRIPTION`

A subscription is a named, persistent mailbox. The DDL is one
statement:

```sql
CREATE SUBSCRIPTION agent_events FOR CHANNEL 'memory_updated';
```

That creates a backing table `__sub_agent_events(seq, payload, ts)`
and registers the subscription in the catalog. From that moment, every
`NOTIFY 'memory_updated', '...'` that commits appends one row to the
backing table. The `Subscription.h` header summarises the contract:

> _Whenever a NOTIFY commits on the channel that subscription is bound
> to, the payload lands in the subscription's `__sub_<name>` backing
> table with an auto-incrementing seq. The consumer drains the mailbox
> with RESUME SUBSCRIPTION (returns rows in seq order) and acknowledges
> progress with ACK SUBSCRIPTION ... UPTO N. The auto-RECLAIM daemon
> prunes acked rows and TTL-expired ones._

Two DML verbs do the work:

```sql
RESUME SUBSCRIPTION agent_events;            -- drain unacked rows
ACK    SUBSCRIPTION agent_events UPTO 1042;  -- mark seq <= 1042 done
```

The publish side is `subscription_publish`, called from the NOTIFY
commit path:

```c
/* Called from the NOTIFY commit path after the in-memory broadcast.
 * For each durable subscription bound to `channel`, append a row to
 * the backing __sub_<name> table with an auto-incrementing seq. */
void subscription_publish(const char *channel, const char *payload);
```

The order of operations matters. The in-memory broadcast fires _first_,
so live subscribers see the event with no extra latency. The durable
append happens _next_, in the same transaction as the NOTIFY itself —
which means the durable mailbox is exactly as consistent as the
underlying data change. If the publishing transaction rolls back,
neither the live notification nor the durable row was ever sent.

## The mailbox is a regular table

This is the design choice that pays for itself.

`__sub_agent_events` is a normal user-style heap with a primary-key B+
tree on `seq`. RESUME is a `SELECT` with an open cursor. ACK is an
`UPDATE` that bumps the `last_acked_seq` column on the catalog row.
RECLAIM is the same auto-RECLAIM daemon that handles MVCC garbage —
it now knows about subscription mailboxes and prunes rows whose `seq`
is below the catalog row's `last_acked_seq`.

That means every property of regular tables applies to subscription
mailboxes for free:

- They participate in WAL, so a crash mid-publish doesn't lose
  acknowledged-but-not-yet-flushed events.
- They participate in TDE, so the payloads are encrypted at rest if
  the database is.
- They participate in replication, so a hot standby has the same
  mailbox state as the primary.
- They participate in `FOR SYSTEM_TIME AS OF`, so you can ask "what
  events were in the mailbox at 3:42 PM yesterday" — useful if the
  consumer was buggy and you need to replay.

We didn't have to write any of those. The mailbox is just rows.

## CDC streaming: when the consumer isn't a SQL client

There's one more notch up. `LISTEN/NOTIFY` and durable subscriptions
both assume the consumer holds a SQL connection. For consumers that
don't — Kafka bridges, observability pipelines, agent runtimes in
languages without a SQL driver — Task 211 adds a TCP/JSON-lines CDC
server.

The DDL is:

```sql
CREATE CDC STREAM agent_cdc
  FOR TABLE __mem_user_memory;
```

The handshake is one TCP connection per consumer:

```
CDC SUBSCRIBE agent_cdc [FROM LSN 1042]
```

…and from then on, every row change to the named table arrives as one
JSON line:

```json
{"op":"I","table":"__mem_user_memory","pk":"alptekinkey42",
 "new":{...},"lsn":4812,"ts":"2026-05-04T15:42:13Z"}
```

`op` is `I`, `U`, or `D`. The `lsn` is the WAL log-sequence number,
which the consumer pins so a reconnect with `FROM LSN N` resumes from
exactly where it left off. The `ts` is server-side wall-clock time,
useful for `MAX_LAG` calculations on the consumer side.

The CDC server is opt-in (default disabled, enabled with `--cdc-port
9970`) because not every deployment needs it and the WAL decoder costs
a little memory per active subscriber. When it _is_ enabled, the
underlying mechanism is the same WAL we already write for crash
recovery — there is no separate replication log, no tail-of-table
trigger, no double-write.

## What "2,900×" actually measures

The launch blog quotes a measured difference of `~0.4 ms` for NOTIFY
push delivery versus `~990 ms` for polling at 1 s intervals. The
benchmark for both lives in `bench/reactive/`:

- The push case publishes a row, the subscriber receives the
  notification on the same connection, the test measures the
  publish-to-receive wall-clock latency. Median is around 200 µs;
  p99 is around 400 µs.
- The poll case sets a 1 s polling interval, publishes a row at a
  random offset within the interval, and measures publish-to-detect
  wall-clock latency. The expected value is half the interval (≈ 500
  ms), and we report p99 instead, which is approximately the full
  interval.

The 2,900× ratio is `990 / 0.4`. It's the wall-clock latency advantage,
not a throughput claim. Throughput is dominated by what the consumer
does with the event after receiving it, which is application-specific
and not what the benchmark tries to measure.

The interesting takeaway isn't the headline number. It's that an
agent which polls every second wakes up, on average, half a second
late on every event. Over a long run, that's the difference between
"feels like it's responding to me" and "feels like it's behind."

## Tests

The push layer is exercised by:

- `tests/test_listen_notify.py` (Task 91) — 20 cases, including
  per-tx dedup, savepoint scoping, output-mutex correctness under
  concurrent listeners.
- `tests/test_durable_subscription.py` (Task 210) — RESUME ordering,
  ACK semantics, RECLAIM-prunes-acked, crash-during-publish recovery.
- `tests/test_cdc_stream.py` (Task 211) — JSON-line framing, LSN
  resume, INSERT/UPDATE/DELETE op codes, multi-consumer fan-out.

## What's next

Part 6 walks through the C SDK that ties all of this together — the
opaque `evo_conn_t`, the EVO text protocol's surface in
`libevosql-memory`, and how the same underlying calls are reached from
Python ctypes, Go cgo, and Rust bindgen.

→ Part 6 — The C SDK and FFI (planned)
