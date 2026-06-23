# Part 4 — Temporal memory: `FOR SYSTEM_TIME AS OF` on top of MVCC

_Series: [Long-Term Memory in EvolutionDB](00-index.md) — previous: [Part 3, Vectors and HNSW](03-vector-hnsw.md)._

The hardest invariant for an agent-memory system to hold is _what did
I believe at this point in time?_ Agents act on the memory they have
when they decide to act. If by the time you debug the decision the
memory has changed, the audit trail is broken. The standard fix is to
write append-only audit logs alongside the live tables — and immediately
discover that joining the audit log back to the live table at a given
timestamp is its own software project.

EvolutionDB takes a different route, and it costs us almost nothing
because we already had the parts. Every row in every table is already
versioned by the storage engine for transactional reasons. We just had
to expose that versioning at the SQL surface.

## What `FOR SYSTEM_TIME` looks like

The grammar is borrowed from the SQL:2011 temporal extension:

```sql
SELECT *
FROM   user_memory
FOR    SYSTEM_TIME AS OF TRANSACTION 4217
WHERE  mem_namespace = 'alptekin';
```

There's also a timestamp variant — `AS OF TIMESTAMP '2026-03-15 12:00'`
— which the engine resolves to the highest committed XID at or before
that wall-clock time. The XID variant is the primitive; the timestamp
variant is sugar.

Either way, the result is the rows _as they were_ when transaction
4217 committed. New rows that landed after are invisible. Rows that
existed at the time but were later deleted are still present. Rows
that have been updated show their old values.

## How it works — and what's actually new

There is genuinely _nothing new_ on the storage side. The storage
engine has tracked `xmin` and `xmax` on every row since Task 37 (the
MVCC roll-out), originally for snapshot isolation: when a transaction
runs at `READ COMMITTED` or `REPEATABLE READ`, the visibility predicate
checks the row's `xmin`/`xmax` against the active snapshot and decides
whether to show it.

`AS OF` is the same machinery with a synthetic snapshot. The relevant
function in `mvcc.c` is six lines of substance:

```c
void mvcc_snapshot_at_xid(uint32_t at_xid, Snapshot *out)
{
    memset(out, 0, sizeof(Snapshot));
    if (at_xid == 0) {
        mvcc_snapshot_take(out);
        return;
    }
    out->xmin = at_xid + 1;     /* nothing in-progress in the past view */
    out->xmax = at_xid + 1;     /* anything >= xmax is "future" → invisible */
    out->nactive = 0;
    out->my_xid = 0;
    out->snapshot_csn = clog_get_csn(at_xid);
}
```

The function builds a fake snapshot positioned right after `at_xid`
committed. The `xmin = xmax = at_xid + 1` setup is the trick: with no
active transactions in the past view (`nactive = 0`), the visibility
check reduces to "was this row's `xmin` ≤ `at_xid` AND was its `xmax`
either zero or > `at_xid`". That's exactly _what was visible right
after `at_xid` committed_, by definition.

The engine plumbs this through the parser via a tiny side-channel:

```c
void SetAsOfXid(uint32_t at_xid)
{
    if (g_qctx) g_qctx->asof_xid = at_xid;
}
```

The grammar action calls `SetAsOfXid` while parsing the `FOR
SYSTEM_TIME` clause; `query_executor` reads `g_qctx->asof_xid` when
constructing the snapshot for the SELECT, swaps in
`mvcc_snapshot_at_xid` instead of `mvcc_snapshot_take`, runs the query
normally, then resets the field so the next statement starts fresh.

There is no additional disk read, no separate history table, no shadow
join. The rows the visibility predicate filters out for the live query
are the same ones it filters _in_ for the temporal query. The cost is
one branch in the visibility check.

## Why CSN matters

Earlier versions of EvolutionDB's MVCC visibility check walked an
active transaction list every time. With a few thousand TPS that list
got long, the visibility check turned into a hotspot, and the
sequential scan it dominated would creep up to dozens of microseconds
per row.

Task 37's CSN (Commit Sequence Number) layer fixed that. Each commit
gets a monotonically-increasing CSN; the snapshot records the highest
CSN at the moment it was taken; visibility for committed transactions
becomes one CLOG lookup and one comparison:

> _"If the row's xmin's CSN ≤ snapshot.csn, it's visible without
> scanning the active list."_

The active list is only consulted for transactions that aren't yet
known to the CSN cache — typically the few hundred that committed in
the last second. Old history is checked in O(1).

For temporal queries, this is what makes `AS OF` cheap. The synthetic
snapshot at XID `at_xid` carries the CSN of `at_xid`'s commit:

```c
out->snapshot_csn = clog_get_csn(at_xid);
```

…and from there every row visibility check is O(1). A `FOR SYSTEM_TIME
AS OF TRANSACTION N` over a 100k-row memory store runs at the same
speed as the equivalent live query. We've measured this in the
temporal benchmark suite (`bench/temporal/`) and it holds within a
few percent.

## Retention is the real cost

The temporal feature is free at query time, but it's not free at
storage time. Every UPDATE leaves an old version on disk; every DELETE
turns a row into a tombstone but doesn't reclaim the bytes. If
nothing ever cleans those up, the database fills the disk.

The engine has two mechanisms working against this:

**1. Auto-RECLAIM** (Task 27 + GAP-7) walks tables in the background
and removes versions that no live snapshot can possibly need. The
"cannot possibly need" predicate is `xmin_horizon` — the lowest XID
held open by any active transaction. Anything older _and_ retired _and_
not pinned by `SET SYSTEM_TIME_RETENTION` is fair game.

**2. `SET SYSTEM_TIME_RETENTION = '30 days'`** (Task 209) explicitly
holds versions back from RECLAIM for the configured window. The default
is seven days; the operator knob is the env var
`EVOSQL_SYSTEM_TIME_RETENTION_DAYS` plus the SQL setter. Beyond the
window, RECLAIM treats the version as collectible and `AS OF` queries
returning a timestamp older than the window will return an error
(`02000 — no_data, retention window expired`) rather than silently
returning a partial truth.

The retention knob is the operator's lever. Tighten it for disk
budgets, loosen it for compliance audits, set it explicitly per
memory store if some classes of memory matter more than others.

## What this gets you in practice

Three things, in increasing order of how much they matter to me.

**Audit, the boring one.** _"What did the agent know about user X at
3:42 PM yesterday when it triggered the refund?"_ becomes a single
query, no separate audit infrastructure required:

```sql
SELECT mem_key, mem_value
FROM   user_memory
FOR    SYSTEM_TIME AS OF TIMESTAMP '2026-05-04 15:42:00'
WHERE  mem_namespace = 'user-x';
```

**Diff, the interesting one.** Comparing memory between two points in
time is a self-join across two `AS OF` snapshots:

```sql
SELECT n.mem_key,
       n.mem_value AS new_value,
       o.mem_value AS old_value
FROM       user_memory FOR SYSTEM_TIME AS OF TRANSACTION 4217  o
FULL JOIN  user_memory FOR SYSTEM_TIME AS OF TRANSACTION 4612  n
       ON n.mem_key = o.mem_key
WHERE  n.mem_value IS DISTINCT FROM o.mem_value;
```

That returns every fact that changed (or was added or removed) between
those two transactions. It's a memory diff. We use it during
testing — point-in-time inspection of how the agent's beliefs evolved
across a multi-step run is invaluable when something goes wrong four
steps in.

**Replay, the one I care most about.** A failed agent run can be
re-driven against the memory state it actually saw, rather than
the current state. You take the timestamp of the failure, run
the agent in dry-run mode with `SET TRANSACTION SNAPSHOT` pointing at
that timestamp, and the model sees exactly what it saw at the time —
including the absence of facts that arrived later. This is the closest
thing to a debugger an agent can have.

The internal demo for this lives in `examples/agent_replay/`. It
re-drives a recorded ReAct loop against a `MEMORY STORE` at three
different timestamps and shows how the model's plan diverges based on
what it knew when. It's also a depressingly effective way to show why
the standard "log everything to a file" approach is insufficient.

## Limits we know about

The temporal layer is built on top of MVCC, so its limits are MVCC's
limits.

**No `AS OF FUTURE`.** XIDs in the future haven't happened yet. The
parser rejects them at compile time.

**The retention window is the floor.** A query against a timestamp
older than the configured retention returns `02000` rather than a
partial result. We chose the explicit error over silent truncation
because agents that act on truncated memory are worse than agents that
fail loudly.

**Replication is best-effort for `AS OF`.** Replicas catch up
asynchronously by default; an `AS OF` query on a lagging replica may
not yet have the version you're asking for. The engine returns
`08006 — connection_failure_in_doubt` until the replay catches up to
your requested XID. Synchronous-commit setups don't see this, but they
trade latency for the guarantee.

**TDE doesn't change the story.** Encrypted-at-rest pages are decrypted
into the buffer pool transparently, and the visibility predicate
operates on the decrypted in-memory view. `AS OF` works on a
TDE-enabled database with no changes to the SQL or the operator
experience.

## What's next

Part 5 turns to push: how `LISTEN/NOTIFY` was extended into a durable
subscription queue (Task 210), how the CDC streaming server (Task
211) shapes a row-level change feed for downstream consumers, and what
the `__sub_<name>` mailbox looks like under the hood.

→ Part 5 — Push, not poll (planned)
