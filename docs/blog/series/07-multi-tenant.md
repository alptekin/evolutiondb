# Part 7 — Multi-tenant memory: namespace hierarchy meets row-level security

_Series: [Long-Term Memory in EvolutionDB](00-index.md) — previous: [Part 6, The C SDK and FFI](06-c-sdk-and-ffi.md)._

If a memory store only ever holds one user's facts, multi-tenancy is
trivial. The interesting cases all involve _shared_ memory stores —
one physical store, many logical owners. A team-wide knowledge base
where every engineer's notes are private. A SaaS product where each
tenant's agent has its own memory. A regulated environment where the
auditor needs to see _their own_ trail of who saw which fact and when.

The product piece described this in one phrase ("namespace-scoped
long-term memory") and moved on. This article unpacks that phrase
into the actual mechanism: the namespace tuple, the prefix-scan
optimisation that makes hierarchical namespaces cheap, the row-level
security policy you opt into when "application-layer filtering" isn't
strong enough, and the threat model we have versus the one we'd
defend against if this were a managed service.

## Namespaces are just an array column

The `mem_namespace` column on a `MEMORY STORE` is `VARCHAR(255)` in v3
and `TEXT[]` in v3.1 — the array variant landed for hierarchy support.
With the array shape, a "namespace" can be any tuple of identifiers:

| Use case                              | Namespace tuple                       |
|---------------------------------------|----------------------------------------|
| Single-user agent                     | `('alptekin',)`                        |
| Per-thread memory inside a user       | `('alptekin', 'thread_42')`            |
| SaaS tenant + user                    | `('acme_corp', 'alice')`               |
| Tenant + user + LangGraph namespace   | `('acme_corp', 'alice', 'memories')`   |
| Multi-agent team                      | `('research_team', 'agent_b')`         |

The first element is the conventional outermost scope (typically the
tenant or user), and the engine optimises for prefix scans on it.

## Why prefix scans matter

The composite primary key from Part 2 was `namespace + 0x1E + key`. For
a flat-string namespace, that's the literal `namespace` string. For an
array-shape namespace, the engine encodes the tuple as
`element1 + 0x1F + element2 + 0x1F + ... + 0x1E + key` — `0x1F` between
namespace elements, `0x1E` between the namespace and the key.

With this encoding, "list all memories for tenant `acme_corp`"
becomes a B+ tree _range scan_ — a leaf-page walk starting at the key
`acme_corp\x1F` and stopping at the first key that doesn't share that
prefix:

```sql
MEMORY LIST NAMESPACES user_memory PREFIX ('acme_corp',);
```

Compiles internally to:

```sql
SELECT DISTINCT mem_namespace
FROM   __mem_user_memory
WHERE  mem_namespace LIKE 'acme_corp\x1F%';
```

…which the planner serves out of the PK B+ tree directly. No table
scan, no temp index, no separate "namespace registry". The same
mechanism that makes per-user listing cheap makes
per-tenant-then-per-user listing cheap.

The cost is encoding discipline — `0x1F` cannot appear inside a
namespace element itself, which the engine enforces at insert time
(`22001 — string_data_right_truncation` if the user tries). For
practical namespace identifiers (UUIDs, usernames, ULIDs) this is
never a constraint.

## When application-layer filtering isn't enough

The MCP bridge from Part 1 relies entirely on application-layer
filtering: every tool call passes `user_id` to the SDK, the SDK
includes it in the WHERE clause, the engine filters by it. This works
for the MCP bridge because there is _exactly one_ application — the
bridge itself — and the bridge controls how the namespace is set
(server-side override from `MCP_USER_ID`).

In a real multi-tenant deployment, that doesn't hold. Multiple
applications, multiple developers, multiple ORMs, an analytics dashboard
that wants raw SQL access — any of them can forget the namespace
filter and pull cross-tenant rows. Application-layer filtering is a
discipline; what we want is an _enforcement_.

That's row-level security (Task 93). The policy DDL is one statement:

```sql
CREATE POLICY user_isolation
ON       __mem_user_memory
FOR      ALL
USING    (mem_namespace[1] = current_user);
```

With that policy active and the table set to enforce
(`ALTER TABLE __mem_user_memory ENABLE ROW LEVEL SECURITY`), every
read and every write filters by `mem_namespace[1] = current_user`.
The check fires inside the heap scan and the index lookup — there is
no path through the engine that sees rows the policy excluded.

The interaction with the `MEMORY GET / PUT / SEARCH` DML is
transparent. The SQL the engine generates from `MEMORY GET` already
filters by `mem_namespace`; with RLS active, the row scan applies the
policy on top of it. A bug in the application that passed the wrong
namespace would still return zero rows because the policy disagrees
with the query — the application bug becomes "no results found"
instead of "leaks another tenant's data". That's the right failure
mode.

## The role pattern for SaaS

A common pattern for tenant isolation is to give each tenant its own
SQL role (rather than its own connection user). The application code
reuses one connection pool but switches the active role per request:

```sql
SET LOCAL ROLE tenant_acme_corp;
-- ...all subsequent SELECTs see only acme_corp's rows...
RESET ROLE;
```

The policy uses `current_user` (or `current_role`, depending on which
shape you want) to decide which rows to expose, so the per-request
role switch is the only thing the application needs to remember. We
keep the role-creation DDL in `examples/multi_tenant_setup.sql` for
operators who want to copy-paste the pattern.

For workloads where the tenant identifier comes from an external IdP
(Auth0, Keycloak, etc.) and isn't a SQL role, the policy can read
from a session-scoped GUC instead:

```sql
CREATE POLICY user_isolation
ON       __mem_user_memory
FOR      ALL
USING    (mem_namespace[1] = current_setting('app.tenant_id'));
```

…and the application sets `SET LOCAL app.tenant_id = 'acme_corp'`
once per request. Same enforcement, different identifier source.

## Scope-as-data: the audit table

One pattern we picked up from running the demo agent in production is
making the namespace itself an auditable entity. There's a parallel
`__namespace_audit` table:

```sql
CREATE TABLE __namespace_audit (
    namespace_path  TEXT[]    PRIMARY KEY,
    created_at      TIMESTAMP DEFAULT NOW(),
    created_by      TEXT      DEFAULT current_user,
    description     TEXT,
    retention_days  INTEGER   DEFAULT 90
);
```

The MCP bridge writes a row here on first save into a new namespace,
and `subscription_publish` from Part 5 fires a `namespace_created`
notification. This buys two operational properties for free:

- An auditor can list every namespace that's ever been created plus
  who created it, ordered by `created_at`.
- A retention-cleanup job can join `__namespace_audit` against the
  memory store and drop entire namespaces that have been dormant past
  their `retention_days`. Without the audit table, you'd have to scan
  the memory store to discover the namespace inventory in the first
  place.

This isn't enforced by the engine — it's a convention layered on top
of the existing tables. We documented it because the second time we
asked "wait, who owns this namespace and why is it 80% of the disk"
we wished we'd had it from the start.

## Threat model — what we defend against

The current shape defends against four concrete threats:

**1. The model picks the wrong identifier.** Defended at the bridge
layer by the server-side `MCP_USER_ID` override. The model can write
"alice" or "the user" or any other invented identifier; the bridge
ignores all of them and uses the env var.

**2. The application forgets the WHERE clause.** Defended at the
database layer by RLS — when policies are enabled, the engine itself
filters the rows. Application bugs become empty results, not data
leaks.

**3. SQL injection bypasses the application's filter.** Same as (2):
the policy fires inside the row scan and is unbypassable by string
manipulation in the application's WHERE clause. The injected SQL still
runs against a virtual table that's already been narrowed to the
caller's tenant.

**4. A read replica serves stale data to the wrong tenant.** Defended
at the replication layer by Task 97's catalog snapshot — replicas
inherit the same RLS policies as the primary; they can't be configured
out of policy enforcement without a primary-side DDL change.

## Threat model — what we don't defend against (yet)

Three honest gaps:

**1. A privileged operator with raw filesystem access.** Anyone with
`evosql.db` and the encryption passphrase can read every tenant's
data. TDE protects against the first half (the file alone is useless
without the key), but the database server itself has the decrypted
view, so a compromised server-side process is game over. This is the
same threat model as every relational database; the answer is the
operating system's process isolation plus the typical
defence-in-depth, not anything memory-specific.

**2. Side channels in the planner.** A craftily-built query whose
runtime depends on data the policy excludes _could_ leak that data
through timing. We've audited the obvious cases (PK lookups, B+ tree
range scans) and the policy fires before the comparison; we haven't
formally verified that every operator is constant-time relative to
filtered rows. For LIKE-on-namespace and JSON-path predicates, this
gap is real.

**3. Cross-tenant aggregation in shared indexes.** A shared B+ tree
indexes _all_ tenants' rows under one structure. The leaf node a
tenant's row lives on may be physically adjacent to another tenant's
row. Adjacent rows on a leaf page mean a vmap bit flip on
auto-RECLAIM is observable; with enough effort, an adversary could
infer aggregate write rates by another tenant from observed `LATCH`
contention. This is exotic and hasn't been weaponised against us, but
it's a real concern for a managed multi-tenant deployment that
serves competing customers from the same physical instance. The fix
is per-tenant tablespaces, which is on the v3.2 list.

## Tests

The multi-tenant behaviour is exercised by:

- `tests/test_memory_multitenant.py` — basic isolation, prefix scan
  correctness, role-switch round-trip.
- `tests/test_rls_policies.py` (Task 93) — every CRUD path filtered
  by RLS, policy combination, role-vs-GUC source.
- `tests/test_subscription_isolation.py` — durable subscription rows
  inherit RLS too, so tenant A's listener cannot drain tenant B's
  mailbox even if both are bound to the same channel name.

## What's next

Part 8 closes the series with measurement: the benchmark harness
(`bench/`), what the agent-memory workload actually looks like, the
LongMemEval pipeline, and what those single-process p99 numbers from
the launch blog were measuring underneath.

→ Part 8 — Benchmarks (planned)
