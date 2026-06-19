# Secure deployment & hardening

This is the operator's guide to deploying EvolutionDB (the SQL engine) and the
agent (the MCP server + agent loop + web UI) so they stay private by default
and can be exposed safely when you choose to.

!!! warning "What this guide is, and is not"
    This document describes what the software **provides**, what is **your
    responsibility to configure**, and what is **roadmap** (not shipped). It
    makes **no** compliance-certification claims. EvolutionDB is not
    "GDPR-compliant" or "SOC 2 certified" out of the box; the governance pack
    under [Governance](governance/README.md) is a set of templates for your own
    legal review, not a finished compliance program.

A one-line summary of the security model:

- **Provided by the software** — loopback-only host ports by default, a
  startup gate that refuses to expose plaintext-password auth, opt-in
  SCRAM-SHA-256 and TLS, opt-in whole-DB encryption at rest, opt-in PII
  masking, a daily LLM spend cap, a crash safety net, a tamper-evident audit
  chain, and DSAR export/erase tooling.
- **Operator responsibility** — turning the opt-in protections on, supplying
  strong secrets and certificates, and running behind a supervisor.
- **Roadmap (not shipped)** — encryption key rotation, per-tenant
  isolation/RLS, SSO/OIDC, engine-side masking SQL, reliable name redaction,
  and tamper-*proof* (externally anchored) audit.

---

## 1. Deployment options

### One-command Docker stack

`./install.sh` is the recommended path. It is idempotent (safe to re-run),
copies `.env.example` to `.env` without clobbering an existing one, generates a
random `EVOSQL_PASSWORD` and `EVOSQL_ENCRYPTION_KEY` if they are still blank or
the well-known `admin` default, then brings up the engine plus the agent web UI:

```bash
./install.sh
```

Under the hood it runs `docker compose --profile agent up -d --build`. The
`agent` profile is deliberately separate, so a plain `docker compose up -d`
stays engine-only (no agent, no web UI):

```bash
docker compose up -d                  # engine only
docker compose --profile agent up -d  # engine + agent web UI
```

**Loopback-by-default host ports.** Every published port in
`docker-compose.yml` is bound to `127.0.0.1`, so a fresh `up` is not reachable
from the LAN or the internet:

| Service | Host binding | Purpose |
| --- | --- | --- |
| PostgreSQL wire | `127.0.0.1:5433` | psql / DBeaver / drivers |
| EVO text protocol | `127.0.0.1:9967` | native protocol, CLI |
| CDC stream | `127.0.0.1:9970` | change-data-capture (JSON Lines) |
| Agent web UI | `127.0.0.1:8800` | chat UI over the MCP tools (agent profile) |

The `"127.0.0.1:"` prefix on each port mapping is what keeps the engine off the
network. Do not drop it without also enabling TLS and auth (see the checklist).
The engine itself also binds loopback inside the container via
`EVOSQL_BIND` (default `127.0.0.1`); the compose file sets the agent's
`EVOSQL_WEB_HOST=0.0.0.0` only so the loopback host-port mapping can reach it.

The compose service restarts with a bounded backoff (`restart: on-failure:5` —
not `restart: always`), so a hard-failing config surfaces instead of looping
forever, and a healthcheck probes the EVO port.

### systemd unit (Linux installer)

The Debian package (`client/linux-installer`) installs a systemd unit at
`/lib/systemd/system/evolutiondb.service` that runs the engine as a dedicated
`evolutiondb` user with a modest hardening profile:

- `ExecStart=/usr/bin/evosql-server --pg-port 5433 --evo-port 9967`
- `Restart=on-failure` with `StartLimitIntervalSec=60` / `StartLimitBurst=5`,
  so more than 5 crashes in 60 seconds fail-stops the unit (no silent churn).
- `ProtectSystem=strict`, `ProtectHome=true`, `NoNewPrivileges=true`,
  `PrivateTmp=true`, and `ReadWritePaths=/var/lib/evolutiondb /var/log/evolutiondb`.

The shipped unit sets `EVOSQL_USER_NAME=admin` and `EVOSQL_PASSWORD=admin`.
**Change `EVOSQL_PASSWORD`** (and add the other env from the checklist) by
editing the unit or a drop-in before exposing the host.

### launchd unit (macOS installer)

The macOS package (`client/macos-installer`) installs a LaunchDaemon at
`com.evolutiondb.server.plist` that runs `/usr/local/bin/evosql-server
--pg-port 5433 --evo-port 9967`.

Note the supervisor difference: launchd has no equivalent to systemd's
`StartLimitBurst`, so `KeepAlive=true` respawns the daemon on every exit with no
built-in give-up threshold. `ThrottleInterval` (10s) only spaces restarts out.
A hard-failing binary will loop; ops must intervene (e.g. `launchctl bootout`)
and check `/usr/local/share/evosql/server.err.log`.

---

## 2. Secure-by-default posture and the hardening checklist

A default install is private because the host ports are loopback-only. The
moment you bind any of them to a routable interface, the following must all be
true. Treat this as a gate, not a menu.

!!! danger "Before exposing anything beyond localhost"

    - [ ] **Set a strong `EVOSQL_PASSWORD`.** Leaving it blank or `admin` keeps
          the well-known default credential. `./install.sh` generates a random
          one; the systemd/launchd units ship with `admin` and must be changed.
    - [ ] **Set `EVOSQL_ENCRYPTION_KEY`** if you need encryption at rest, and
          use a build that supports it (see TDE note below). Otherwise the data
          file and WAL are plaintext on disk.
    - [ ] **Keep `EVOSQL_BIND` at `127.0.0.1`** unless you have completed the
          rest of this list. Set `0.0.0.0` only together with TLS and auth.
    - [ ] **Set `EVOSQL_REQUIRE_TLS=1` and provide a cert/key**
          (`EVOSQL_TLS_CERT` / `EVOSQL_TLS_KEY`, built with `TLS=1`). This
          rejects plaintext-password auth on non-loopback PG connections. The
          server refuses to start if you set this without TLS available, so it
          cannot lock you out silently.
    - [ ] **Enable `EVOSQL_PG_SASL=1`** so the PostgreSQL wire negotiates
          SCRAM-SHA-256 and the password never crosses the wire (even on a
          non-TLS link). Passwords are stored as PBKDF2-SHA256 with 600,000
          iterations regardless.
    - [ ] **Set `EVOSQL_WEB_TOKEN`** (and a sane `EVOSQL_WEB_RATE_PER_MIN`)
          before exposing the agent web UI. Without a token the `/api/*`
          surface is open; the server prints a warning when bound without one.
          The token check is constant-time.
    - [ ] **Set `EVOSQL_MCP_AUTH_TOKEN`** before exposing the MCP HTTP
          transport. Blank means the HTTP transport is unauthenticated; the
          startup path warns if you bind it non-loopback without a token.
    - [ ] **Decide on `EVOSQL_PII_EGRESS`.** It defaults to `off`, meaning
          enrichment text reaches the model provider **unmasked**. Set it to
          `on` to mask PII before prompts leave the host.
    - [ ] **Set `EVOSQL_LLM_DAILY_TOKENS`** to a positive cap so a runaway loop
          cannot run up the model bill (`0` disables the cap).
    - [ ] **Enable the WAL checkpointer** (`EVOSQL_CHECKPOINT_INTERVAL_SEC`
          greater than 0) to bound WAL growth; otherwise the WAL is only
          checkpointed at shutdown.
    - [ ] **Run under a supervisor that restarts on crash** (the Docker
          `restart: on-failure` + healthcheck, or the systemd unit with
          `StartLimit*`). The engine installs a SIGSEGV/SIGBUS handler that
          exits cleanly so the supervisor can restart it; committed data is
          durable via the WAL.

### Encryption at rest (TDE) — read before relying on it

Whole-DB Transparent Data Encryption is **opt-in** and has two preconditions:

1. a build with encryption support (`TLS=1` / `EVO_ENCRYPTION`), **and**
2. a non-empty `EVOSQL_ENCRYPTION_KEY` passphrase.

If either is missing, the data file **and the WAL** are **plaintext on disk**.
When active, encryption is AES-256-CTR per page. Important caveats:

- **Page 0 (the FileHeader) is always plaintext.**
- CTR mode gives **confidentiality, not integrity** — it does not detect
  tampering of the ciphertext.
- **There is no key rotation yet** (roadmap). Choose the passphrase carefully.

### Send safety

Per ADR-004, the agent never sends messages on its own. It drafts and queues;
a human approves; delivery is a dry run unless explicitly opted in (the send
env is off by default). Exposing the agent does not change this invariant.

---

## 3. Environment-variable reference

All knobs are `EVOSQL_*` unless noted. "Recommended when exposed" is the value
to use once any port is reachable beyond loopback.

### Engine: auth, network, encryption

| Name | What it does | Default | Recommended when exposed |
| --- | --- | --- | --- |
| `EVOSQL_USER_NAME` | Admin username for the SQL engine. | `admin` | a non-obvious name |
| `EVOSQL_PASSWORD` | Admin password (stored PBKDF2-SHA256, 600k iters). | `admin` (or blank → `admin` in compose) | strong random secret |
| `EVOSQL_ENCRYPTION_KEY` | Whole-DB TDE passphrase (AES-256-CTR). Empty = data file + WAL plaintext. Needs a `TLS=1`/`EVO_ENCRYPTION` build to take effect. | empty (TDE off) | set, on an encryption-enabled build |
| `EVOSQL_BIND` | Interface the engine binds inside the container. Unparseable values fail safe to loopback. | `127.0.0.1` | `127.0.0.1`; `0.0.0.0` only with TLS+auth |
| `EVOSQL_REQUIRE_TLS` | When set (truthy), non-loopback PG connections must use TLS; plaintext password never accepted over the network. Server refuses to start if set without TLS available. | `0` (off) | `1` |
| `EVOSQL_PG_SASL` | When set (truthy), require SCRAM-SHA-256 on the PG wire; password never sent. | off | `1` |
| `EVOSQL_TLS_CERT` | Path to the TLS certificate (PG wire). | unset (TLS off) | set |
| `EVOSQL_TLS_KEY` | Path to the TLS private key. | unset (TLS off) | set |
| `EVOSQL_DATA_DIR` | Engine data directory holding `evosql.db` + the WAL. | `root` (compose uses a named volume) | a dedicated, backed-up path |
| `EVOSQL_CHECKPOINT_INTERVAL_SEC` | Background WAL checkpointer interval. `<= 0` disables it (checkpoint only at shutdown). | `0` (disabled) | a positive interval |
| `EVOSQL_WAL_ARCHIVE` | When set (truthy), retain `evosql.wal.archive` for offline restore tooling. Off = no ever-growing archive. | off | leave off unless you have external restore tooling |
| `EVOSQL_AUTO_RECLAIM_INTERVAL_SEC` | TTL-driven row-expiry tick interval. (compose sets `2` for tests; engine default is higher.) | `30` (compose overrides to `2`) | default |

### Agent web UI

| Name | What it does | Default | Recommended when exposed |
| --- | --- | --- | --- |
| `EVOSQL_WEB_HOST` | Interface the web UI binds. (compose sets `0.0.0.0` inside the container behind a loopback host-port map.) | `127.0.0.1` | `127.0.0.1` behind a reverse proxy |
| `EVOSQL_WEB_PORT` | Web UI port. | `8800` | n/a |
| `EVOSQL_WEB_TOKEN` | Shared secret required on `/api/*` (Bearer header or `?token=`), constant-time compared. Empty = auth disabled. | empty (open) | set a strong token |
| `EVOSQL_WEB_RATE_PER_MIN` | Per-IP request rate limit for the web API; `0` disables. | `60` | tune to your traffic |

### MCP HTTP transport

| Name | What it does | Default | Recommended when exposed |
| --- | --- | --- | --- |
| `EVOSQL_MCP_AUTH_TOKEN` | Bearer token required by the MCP HTTP transport (constant-time). Empty = unauthenticated. | empty | set a strong token |
| `EVOSQL_MCP_HTTP_PORT` | MCP HTTP transport port. | `8970` | n/a |
| `EVOSQL_MCP_ALLOWED_ORIGINS` | Comma-separated allow-list validated against the `Origin` header. | empty | set for browser clients |

### LLM / spend / PII

| Name | What it does | Default | Recommended when exposed |
| --- | --- | --- | --- |
| `EVOSQL_LLM_DAILY_TOKENS` | Daily token budget fuse; over-cap calls are refused (429s back off automatically). `0` = no cap. | `0` (compose/`.env` set `200000`) | a positive cap |
| `EVOSQL_LLM_SPEND_FILE` | JSON ledger file for the spend fuse. | `~/.evosql/llm_spend.json` | a writable path |
| `EVOSQL_PII_EGRESS` | Mask PII in outbound LLM prompts. `off` = enrichment text reaches the provider unmasked. | `off` | `on` |
| `EVOSQL_PII_RETRIEVAL` | Mask PII on retrieval paths. | `off` | `on` if returning data to untrusted callers |
| `EVOSQL_PII_MASK` | Master switch for at-rest masking/protection at the integration layer. | `on` | `on` |
| `EVOSQL_PII_KEYSTORE` | Where the PII keypair lives: `auto`, `file`, or `db`. | `auto` | per your topology |

!!! note "PII masking is heuristic and partly disabled by default"
    Field-level masking is opt-in. At rest, masking happens per-connector via
    `protect_record`. The `person_name` and `date_of_birth` rules ship
    **disabled** (heuristic only) — do not rely on them for reliable name
    redaction (roadmap). With `EVOSQL_PII_EGRESS=off` (the default),
    enrichment text is sent to the model provider unmasked.

### Identity (single-tenant)

| Name | What it does | Default | Recommended when exposed |
| --- | --- | --- | --- |
| `MCP_USER_ID` | Memory namespace / sticky user id (also set by `evoagent --user`). | `default_user` | per deployment |
| `MCP_TENANT_ID` | Tenant id for the env single-tenant identity (set by `evoagent --tenant`). | unset | per deployment |

`--user` / `--tenant` set the env single-tenant identity. Token-based
multi-tenant access and per-tenant isolation/RLS are SaaS/Phase-2 roadmap, not
shipped.

---

## 4. Backup & recovery

Use the agent CLI (`evoagent`). The engine's data directory is self-contained:
after the data-dir hardening, the WAL lives next to `evosql.db` inside
`EVOSQL_DATA_DIR` (default `root`), so a copy of that directory is a complete
backup.

```bash
evoagent backup [DEST]            # default DEST: current dir; --data-dir to override
evoagent restore SRC             # --force to overwrite a non-empty data dir
```

- **`backup` is a crash-consistent online backup.** It copies `evosql.db`
  first and the WAL last, so a restore replays the WAL to a consistent state
  (the same path crash recovery uses). It is safe to run against a live engine.
- **`restore` refuses to run under a live engine.** It checks the PG port and
  bails if something is listening, because restoring under a running engine
  would corrupt the data. Stop the engine first.

Crash recovery now recovers the **last committed transaction**: the FileHeader
is WAL-logged at commit and the commit marker rides the same `fsync`. Enable the
background checkpointer (`EVOSQL_CHECKPOINT_INTERVAL_SEC`) to keep the WAL
bounded between restarts.

### Point-in-time recovery (PITR)

PITR rewinds the database to a past instant by replaying the opt-in WAL archive.
It is **off unless you enable archiving from the start**:

1. Run with `EVOSQL_WAL_ARCHIVE=1` **from database creation**, plus periodic
   checkpoints (`EVOSQL_CHECKPOINT_INTERVAL_SEC` > 0). Each checkpoint appends
   the WAL records since the last one to `EVOSQL_DATA_DIR/evosql.wal.archive`.
   That archive grows continuously — its retention is your responsibility.
2. To recover, **stop the server cleanly first** (a clean shutdown archives the
   final WAL tail). Copy the data dir if you may still want the current state.
3. Rewind, then start normally:

```bash
evosql-server --recover-to <epoch_microseconds> --data-dir <dir>   # rewinds, then exits
evosql-server --data-dir <dir>                                     # serves the as-of-T DB
```

`--recover-to` reconstructs the database as of the target into a temp file,
validates it, and swaps it in atomically — a failed or torn-archive recovery
leaves the original data file **intact** (it aborts with a non-zero exit). It
prints the archive's available time window; pick a target inside it.

Caveats, stated honestly:

- **Archiving must have been on from creation.** If it started late, early pages
  are missing and recovery is refused (no valid header) or incomplete.
- **Granularity for the recent tail is the last checkpoint.** Records written
  after the last checkpoint reach the archive only on a clean shutdown, so PITR
  to a moment between the last checkpoint and an unclean crash is not possible —
  recovery rounds down to the last archived state and says so.
- **Encrypted databases** are supported: page 0 stays plaintext, data pages are
  re-encrypted with the same key. Use the same `EVOSQL_ENCRYPTION_KEY`.
- `--recover-to` rewrites the data file in place. Do it on a stopped engine.

### Data-subject requests (DSAR)

```bash
evoagent export-data [--out FILE]   # export all of a user's data (access)
evoagent erase-data [--yes]         # erase all of a user's data (erasure)
```

`erase-data` is a **dry run** without `--yes` (it only reports what would be
erased); with `--yes` it is **irreversible** and sweeps all of the user's
per-user stores. Both honor the `--user` identity.

---

## 5. Upgrade and migration notes

- **The WAL now lives in the data directory.** It is `EVOSQL_DATA_DIR/evosql.wal`
  (alongside `evosql.db`), not the working directory. A clean prior shutdown
  leaves the old CWD WAL empty, so moving the path loses nothing on a graceful
  upgrade. The only edge case is an un-replayed crash WAL left in the old CWD
  from a previous version: that file would be skipped. **Before upgrading,
  shut the old engine down cleanly** so its WAL is checkpointed and empty.
  After the move, a volume/backup of the data dir captures the full durable
  state.

- **WAL archiving is opt-in.** `EVOSQL_WAL_ARCHIVE` defaults to off. Nothing in
  the running server reads the archive (crash recovery replays the live WAL;
  temporal reads use MVCC snapshots), so by default it is not grown. Turn it on
  only if you use external offline-restore tooling — and then its retention is
  your responsibility.

---

## Audit trail

Tool, auth, and privilege events are written to an **append-only,
tamper-evident** audit store: a per-`(store, ns)` SHA-256 hash chain where each
record hashes the previous record's hash plus its own content. `verify_chain()`
recomputes the chain and detects edits, deletions, and reordering. The audit
records **ids and lengths only** — never tokens, message bodies, or recipients.

This is tamper-**evident**, not tamper-**proof**: there is no external anchor,
so a party that can rewrite the whole store could recompute a clean chain.
Periodic export of the chain head-hash to an external system (roadmap) would
close that gap.
