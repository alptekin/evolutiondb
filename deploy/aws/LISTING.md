# AWS Marketplace Listing — EvolutionDB

Cheat sheet for the AWS Marketplace seller portal. Copy each field
into the matching form. Tone: technical + concrete; AWS reviewers
prefer concrete claims over marketing copy.

Portal URL: https://aws.amazon.com/marketplace/management/

---

## Product details

### Product title (≤72 chars)
EvolutionDB — Long-Term Memory Backend for AI Agents

### Short description (≤300 chars)
Single-binary SQL database purpose-built for AI agent memory. PostgreSQL-wire compatible, native `MEMORY STORE` / `CHECKPOINT STORE` / `VECTOR(N)` / temporal queries / push streaming. Replaces the four-product side stack (Postgres + Mongo + Pinecone + queue) with one Docker container.

### Long description (Markdown allowed)
EvolutionDB is an open-source SQL database purpose-built as a memory
backend for AI agent frameworks — LangGraph, LangChain, LlamaIndex,
CrewAI, AutoGen, Mem0, and Claude Desktop / Claude Code through MCP.

Where most agent stacks today run a four-product side stack
(relational database + document store + vector index + push channel),
EvolutionDB collapses that into one binary that speaks the PostgreSQL
wire protocol — every tool you already use (psql, DBeaver, pgAdmin,
your ORM, Grafana) connects unchanged.

**What's in the box**
- Native agent-memory primitives as first-class SQL DDL: `CREATE
  MEMORY STORE`, `CREATE CHECKPOINT STORE`, `CREATE MESSAGE LOG`,
  `CREATE DOCUMENT STORE`, `CREATE GRAPH STORE`, `CREATE ENTITY STORE`
- `VECTOR(N)` columns with HNSW indexing + `<=>` / `<->` / `<#>` /
  `<+>` distance operators
- Temporal queries: `FOR SYSTEM_TIME AS OF TRANSACTION N` over the
  built-in MVCC engine. No history tables, no extra storage cost.
- Push streaming: `LISTEN/NOTIFY`, durable subscription mailboxes,
  CDC stream over TCP/JSON-lines
- Multi-tenancy: namespace hierarchy + row-level security (RLS) +
  TDE (AES-256-CTR) on disk
- 6 framework adapters (Python) covering LangGraph, LangChain,
  LlamaIndex, CrewAI, AutoGen, Mem0
- Native MCP server published on PyPI / MCP Registry / Smithery /
  Anthropic DXT directory — `pipx install mcp-server-evolutiondb`

**Performance** (single-process p99, 2024-class laptop):
- `MEMORY PUT`: ~8 ms
- `MEMORY GET`: ~2 ms
- `CHECKPOINT PUT`: ~5 ms
- `MEMORY SEARCH` top-10: ~4 ms
- NOTIFY push delivery: ~0.4 ms (vs 990 ms polling at 1 s — 2,900× faster)

**Open source** under MIT. Active development, 26-task agent-memory
roadmap closed in v3.0.0.

### Highlights (3 bullets, ≤100 chars each)
- Single-binary alternative to Postgres + Mongo + Pinecone + queue
- PostgreSQL wire protocol — every existing tool connects unchanged
- Native `MEMORY STORE` / `VECTOR(N)` / temporal queries

### Search keywords (≤20)
agent memory, vector database, postgresql, vector search, hnsw,
mcp server, claude desktop, langgraph, llm memory, ai agent,
checkpoint, memory store, hybrid search, temporal database,
listen notify, mvcc, embedded database, sql, multi-tenant, rls

### Categories
- Primary: **Databases — Operational Databases**
- Secondary: **Machine Learning — ML Infrastructure**

### Support contact
- Email: topal.alptekin@gmail.com
- Documentation: https://alptekin.github.io/evolutiondb/
- Issues: https://github.com/alptekin/evolutiondb/issues

### EULA
See [EULA.md](EULA.md). Standard MIT-derivative software license
extended with marketplace-specific arbitration + warranty terms.

---

## Pricing model

**Recommended: BYOL (Bring Your Own License) — $0/hour, free to install**

EvolutionDB is open-source MIT-licensed; we don't charge a per-hour
fee. The marketplace listing exists for discovery + 1-click deploy
convenience, not gating. Revenue capture happens via the support
contracts ($X/month) and the SaaS tier (`memory.evolutiondb.cloud`)
sold separately.

If/when we add a paid tier in the marketplace itself:
- **Hourly**: $0.10/hr small (t3.small), $0.50/hr standard
  (t3.large), $1.50/hr enterprise (m6i.xlarge + dedicated tenancy)
- **Monthly contract**: $50 / $250 / $1,000 — same tier sizing,
  ~30% discount vs hourly

Free tier today; paid tier post-Q4 once SOC 2 Type 1 lands.

---

## Container delivery (Container Product)

### Image source
- **ECR Public**: `public.ecr.aws/evolutiondb/evolutiondb`
- Multi-arch: `linux/amd64`, `linux/arm64`
- Tags: `latest`, `v3.0.YYYYMMDD.N` (date-stamped semver)

### Deployment options accepted by AWS reviewers
1. **AWS Fargate** — `cloudformation/evolutiondb-ecs-fargate.yaml`
2. **EKS** — Helm chart at `deploy/helm/evolutiondb/`,
   `helm repo add evolutiondb https://alptekin.github.io/evolutiondb`
3. **ECS on EC2** — same task definition, on-instance

### Required IAM (minimum permissions for buyer)
- `ecs:*` (Fargate / ECS path)
- `eks:*` + `ec2:Describe*` (EKS path)
- `iam:CreateServiceLinkedRole`
- `cloudwatch:*` for logs
- Optional: `s3:*` for WAL archive backup target

### Architecture diagram
[`assets/architecture.svg`](assets/architecture.svg) — 1024×768.

### Docker run smoke
```bash
docker run -d --name evolutiondb \
  -p 5433:5433 -p 9967:9967 \
  -v evosql_data:/var/lib/evosql \
  -e EVOSQL_PASSWORD=admin \
  public.ecr.aws/evolutiondb/evolutiondb:latest
```

After ~5 seconds the container is healthy. Connect:
```bash
psql -h 127.0.0.1 -p 5433 -U admin -d testdb   # password: admin
```

---

## Documents to upload (alongside the form)

| Slot                  | File                                |
|-----------------------|-------------------------------------|
| Logo (PNG, 256×256)   | `assets/logo-256.png`               |
| Cover image (PNG)     | `assets/cover-1024.png`             |
| Architecture diagram  | `assets/architecture.svg`           |
| EULA                  | `EULA.md` (rendered to PDF on submit)|
| Setup / usage guide   | `setup-guide.md` (rendered to PDF)  |
| Optional demo video   | YouTube unlisted URL                |

---

## Review timeline expectations

- **Initial submission acceptance** by AWS Marketplace ops: 2-4
  business days (form completeness check)
- **Container security scan**: 1-3 days (Trivy + AWS internal scan)
- **Marketplace listing review**: 5-10 business days
- **Final approval & publish**: 1-2 business days after revisions

Total realistic: **2-3 weeks** from form submission to live listing.
Add a buffer if asked for screenshot variants or additional
compliance documents.
