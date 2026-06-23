# ADR-003: Embedded Mode + Install-Time Choice + SaaS

## Status
Proposed (2026-05-06)

## Context
v1.1.2 ships the MCP server through PyPI / MCP Registry / Smithery /
Anthropic DXT. The end-user UX is still gated on a manual prerequisite:
the user has to run `docker compose up -d` to get an EvolutionDB
instance reachable on `localhost:5433`. Two follow-up product
questions land here:

1. **Embedded mode** — can the MCP server install carry the database
   itself so there's no Docker step?
2. **Install-time choice** — can we ask the user "embedded vs external
   vs SaaS" during install instead of forcing one path?
3. **SaaS** — how do we offer a managed EvolutionDB so users who don't
   want to host anything still get the experience?

## Decision

Three parallel tracks. Each is independent; we can ship in any order.
Recommended sequence is **(1) → (2) → (3)** because each unlocks the
next.

---

## Track 1 — Embedded mode (`mcp-server-evolutiondb[embedded]`)

### What it is
A new optional install extra that bundles a per-platform EvolutionDB
binary inside the wheel. On first connect, the MCP server checks
`EVOSQL_HOST:EVOSQL_PORT`; if nothing is listening, it spawns the
bundled binary against a per-user data directory and connects to it.
The binary lives until the MCP server process ends.

### How it ships
- `pipx install "mcp-server-evolutiondb[embedded]"` pulls a per-platform
  wheel that vendors the C binary (~2-3 MB compressed).
- Wheels built via `cibuildwheel` for: linux-amd64, linux-arm64,
  darwin-amd64, darwin-arm64, windows-amd64. Same matrix the
  Helm/native-build workflows already use (we reuse those binaries).
- Data lives at `~/Library/Application Support/EvolutionDB/data/`
  (macOS), `~/.local/share/evolutiondb/data/` (Linux),
  `%APPDATA%\EvolutionDB\data\` (Windows). Per-user, per-namespace
  subdirs so multiple Claude profiles don't share state by accident.

### Code shape
```python
# mcp_server_evosql/embedded.py
class EmbeddedEvolutionDB:
    def __init__(self, data_dir: Path, port: int):
        self.binary  = _resolve_bundled_binary()
        self.proc    = None
        self.data    = data_dir
        self.port    = port

    def ensure_running(self) -> None:
        if _port_in_use(self.port):
            return                 # external instance — let it serve
        self.proc = subprocess.Popen(
            [str(self.binary),
             "--data-dir", str(self.data),
             "--pg-port", str(self.port),
             "--evo-port", str(self.port + 4534)],   # 9967 - 5433
            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        _wait_for_port(self.port, timeout=10)

    def close(self) -> None:
        if self.proc:
            self.proc.terminate()
            self.proc.wait(timeout=5)
```

### Tradeoffs
- **+** Zero-Docker UX. User pip-installs and immediately uses Claude.
  This is what most agent-memory products promise but few deliver.
- **+** No port conflict bugs from a separately-running EvolutionDB
  the user forgot was up — embedded mode owns the port lifecycle.
- **−** Wheel size goes from ~50 KB → ~3 MB. Acceptable.
- **−** Five wheels per release instead of one. `cibuildwheel`
  handles this; CI minutes go up by ~5×.
- **−** Embedded mode misses the cross-process story (one
  EvolutionDB shared by many tools). External / SaaS modes still
  exist for that — embedded is just the easy default.

### Cost estimate
~4 days of work:
- 1 day: cibuildwheel matrix + binary embedding
- 1 day: `embedded.py` lifecycle + port detection + data dir
- 1 day: regression tests across 5 platforms in CI
- 1 day: docs + Smithery / DXT manifest updates so embedded is
  the default

---

## Track 2 — Install-time choice (no extra mechanism needed)

### What it is
The DXT manifest's `user_config` schema and Smithery's `configSchema`
both already support enum-typed fields with descriptions. The
install dialog (Claude Desktop) and the Smithery web installer
both render those as a dropdown. We just have to add the field and
have the server branch on it at runtime.

### Manifest patch
```json
"user_config": {
  "backend_mode": {
    "type": "string",
    "title": "How should EvolutionDB be reached?",
    "description": "Embedded runs the database inside this extension — zero setup. External connects to your own EvolutionDB instance (Docker, on-prem). SaaS connects to memory.evolutiondb.cloud (free tier available).",
    "enum": ["embedded", "external", "saas"],
    "default": "embedded",
    "required": true
  },
  "evosql_host": {
    "type": "string",
    "title": "EvolutionDB host",
    "description": "Only used when backend_mode = external.",
    "default": "127.0.0.1"
  },
  ...
  "saas_api_key": {
    "type": "string",
    "title": "evolutiondb.cloud API key",
    "description": "Only used when backend_mode = saas. Get one at evolutiondb.cloud/settings/api-keys.",
    "sensitive": true
  }
}
```

### Server-side dispatch
```python
mode = os.environ.get("BACKEND_MODE", "embedded")
if mode == "embedded":
    self.db = EmbeddedEvolutionDB(_default_data_dir(), 5433)
    self.db.ensure_running()
    self.host, self.port = "127.0.0.1", 5433
elif mode == "external":
    self.host = os.environ["EVOSQL_HOST"]
    self.port = int(os.environ["EVOSQL_PORT"])
elif mode == "saas":
    self.host = "memory.evolutiondb.cloud"
    self.port = 5432
    self.password = os.environ["SAAS_API_KEY"]
```

### Tradeoffs
- **+** Single bundle, three install paths, user picks at install
  time. No CLI gymnastics.
- **+** Install dialog already prompts — we add fields, Anthropic /
  Smithery render them.
- **−** The dropdown UX in DXT install dialogs is plain (radio
  buttons, no rich preview). For a polished onboarding we'd need
  the SaaS landing page to handle "convert to SaaS" too.
- **−** Conditional fields (`evosql_host` only when external) aren't
  enforced by the schema — both DXT and Smithery render every
  field. Slightly noisy UI; accepted tradeoff.

### Cost estimate
~1 day. The mechanism exists; it's wiring three branches.

---

## Track 3 — SaaS (`memory.evolutiondb.cloud`)

### What it is
A managed EvolutionDB tenancy a user can hit from any client without
hosting anything. Free tier (small storage, rate-limited) + paid
tier (more storage, higher throughput, dedicated tenancy).

### Architecture (MVP)

```
                                ┌────────────────────────────┐
                                │  Cloudflare Workers          │
                                │  evolutiondb.cloud           │
                                │  - landing + signup          │
                                │  - dashboard + api keys      │
                                │  - billing portal (Stripe)   │
                                └─────────────┬────────────────┘
                                              │
                                              │ provisioning RPC
                                              │
                                ┌─────────────▼────────────────┐
                                │  Control plane (FastAPI)      │
                                │  - tenant registry             │
                                │  - usage metering              │
                                │  - per-tenant API key store    │
                                └─────────────┬────────────────┘
                                              │
                              ┌───────────────┴───────────────┐
                              │                                │
                  ┌───────────▼─────────┐         ┌───────────▼────────────┐
                  │  Shared instance      │         │  Dedicated instances    │
                  │  Single evosql binary │         │  Fly.io / Render        │
                  │  RLS per tenant       │         │  per-customer machine   │
                  │  — free tier          │         │  — paid tier            │
                  └─────────────────────┘         └────────────────────────┘
```

### Tenant isolation
- **Free tier**: shared EvolutionDB instance; per-tenant database +
  RLS policy (Task 93) on every table. `current_setting('app.tenant_id')`
  scoping. Rate-limited at the control plane.
- **Paid tier**: dedicated Fly.io machine per tenant. Wire
  protocol over TLS, API key as the password, namespace pinned in
  the connection string.

### Control plane stack
| Concern         | Choice                                  | Why                                     |
|-----------------|-----------------------------------------|-----------------------------------------|
| Auth            | Clerk or WorkOS                         | OAuth + magic link out of the box       |
| Landing         | Cloudflare Pages + Astro                | Static, cheap, fast                     |
| Control DB      | Neon (serverless Postgres)              | Free tier, branchable for staging       |
| Provisioning    | Fly.io Machines API                     | Per-tenant containers in seconds        |
| Billing         | Stripe Customer Portal                  | Self-serve, no support burden           |
| Metering        | EvolutionDB itself (we own it)          | LISTEN/NOTIFY on `pg_stat_*` aggregation |
| Observability   | Grafana Cloud free tier                 | One dashboard, alerts                   |

### Pricing (proposal)
| Tier        | Storage | Throughput        | Price       |
|-------------|---------|-------------------|-------------|
| Hobby       | 100 MB  | 100 ops/min       | Free        |
| Pro         | 5 GB    | 10k ops/min       | $19/mo      |
| Team        | 50 GB   | 100k ops/min      | $99/mo      |
| Enterprise  | custom  | dedicated machine | custom      |

Anchored against Mongo Atlas Vector Search ($X per cluster) and
Mem0 Pro ($249/mo). We undercut deliberately at the entry to win
the agent-memory long tail.

### Cost estimate
- **MVP** (~3-4 weeks of one engineer):
  - Week 1: landing + auth + control DB schema + Fly.io provisioning
  - Week 2: API key store + connection routing + usage metering
  - Week 3: Stripe integration + billing portal + tier enforcement
  - Week 4: Grafana dashboards + alerting + documentation
- **Infra MVP**: ~$80/mo (Cloudflare $0, Neon $0, Fly.io ~$50, Stripe % only, Grafana Cloud $0). Revenue-positive at ~5 Pro subscribers.

### Tradeoffs
- **+** Closes the "I don't want to run anything" segment — the
  largest segment of agent-memory consumers, by far.
- **+** Recurring revenue. Even modest adoption ($19 × 100 = $1.9k/mo)
  pays for the infra and a fraction of dev time.
- **+** Branding — `memory.evolutiondb.cloud` as a recognizable
  endpoint helps the open-source narrative ("trusted by the
  hosted version").
- **−** Operational burden. SaaS means uptime SLAs, on-call,
  abuse handling, GDPR/SOC2 questions, support email.
- **−** The free tier attracts the worst use cases (mining, abuse,
  noisy crawlers). Have to gate it from day one.
- **−** Control plane is real software we have to maintain forever
  in addition to EvolutionDB itself.

---

## Sequencing

The three tracks are independent but ordered for compounding leverage:

1. **Embedded mode first** (4 days). Removes the Docker prereq,
   makes "install and try" a 30-second loop. Drives DXT directory
   review experience smoother.
2. **Install-time choice** (1 day). Once embedded works, surface
   it as a radio button against external + SaaS. Gives us a
   migration story when SaaS lands ("flip the dropdown to SaaS,
   paste an API key").
3. **SaaS** (3-4 weeks). Build it after the embedded mode is the
   default UX. SaaS becomes the upgrade path: "your memories got
   bigger than your laptop — flip to SaaS, your dropdown does it
   in one step."

## Open questions

1. **Embedded mode license.** Do we ship the EvolutionDB binary
   under MIT (current OSS license) inside a pip wheel? Yes — MIT
   allows it. But add an explicit notice to the wheel's metadata
   so reviewers can see where it came from.
2. **SaaS marketing positioning.** Frame it as "managed
   EvolutionDB" or as a separate brand (e.g. "Memory by EvoSQL")?
   Probably keep one brand for now.
3. **Cross-region SaaS.** Fly.io supports global; do we target a
   single region (us-east) for MVP and add eu-west later, or
   ship multi-region from day one? MVP single-region; multi-region
   when paid tenants ask.
4. **EU compliance.** GDPR is the obvious one; SOC2 is harder.
   For SaaS launch, GDPR-only is enough; SOC2 deferred to first
   enterprise contract.
