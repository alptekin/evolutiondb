# ADR-002: Agent Memory Platform Roadmap (Task 200-225)

## Durum
Onerilen

## Baglam

EvolutionDB'nin vizyonu **"Powering Long-Term Memory for Agents"** — AI agent framework'lerinin kalici hafiza backend'i olarak konumlanmak. Rekabet manzarasi 2026 basi itibari ile:

- **MongoDB** — `langgraph-store-mongodb` paketi ile LangGraph BaseStore/Checkpointer arayuzune direkt backend sunuyor; Atlas Vector Search, Atlas Stream Processing, TTL indexleri, change streams ile reactive akis.
- **Pinecone** — vector-only sidecar; filter + metadata ile hybrid search, ancak SQL/JSON yok — uygulamanin iki stack (Postgres + Pinecone) yonetmesi gerekiyor.
- **Zep** — managed service; Graphiti temporal knowledge graph (bitemporal edges: `valid_from`, `valid_to`, `invalid_at`); LongMemEval %63.8 (rakiplerin ortalamasi %49).
- **Mem0** — managed ($249/ay Pro), LLM-extracted fact distillation, triple-scoped `user/agent/run`.
- **Weaviate**, **Qdrant**, **LanceDB** — vector-first; SQL/ACID yok.

EvoSQL'in mevcut zengin primitif seti bu pivot icin guclu bir temel sunuyor:

- **JSON + arrays (Task 90)** — flexible metadata, `$.path`, `JSON_EXTRACT/SET/REMOVE`.
- **7-layer MVCC (Task 37)** — snapshot isolation + CLOG + CSN → **temporal query icin zaten dogal altyapi**, sadece SQL yuzeyi eksik.
- **LISTEN / NOTIFY (Task 91)** — commit-time pub/sub; reactive agent workflow'lari icin Mongo Atlas'in change stream polling'ine karsi push-native rakip.
- **Replication + Raft (Task 97)** — 3-node HA, synchronous commit, base backup, TLS + auth.
- **RLS (Task 93)** — row-level policy → agent multi-tenant namespace isolation icin hazir.
- **Stored procs + triggers** — TTL cleanup, auto-summarization trigger surface.
- **TDE (Task 86)** — AES-256-CTR page encryption, on-prem / regulated pazar hazir.
- **PG wire protocol** — drop-in client uyumu.
- **Histogram + range selectivity + sampled ANALYZE (Task 99-102)** — query planner olgun.

Ancak agent-memory backend olabilmek icin **kritik 7 eksik** var:

1. **Vector tipi + distance fonksiyonlari** — `VECTOR(N)`, `<=>`, `<->`, `<#>` yok.
2. **ANN index (HNSW / IVFFLAT)** — semantic search icin olmazsa olmaz.
3. **LangGraph-uyumlu native DDL** — `BaseCheckpointSaver` + `BaseStore` icin SQL-seviyesinde obje tipi.
4. **TTL column + auto-expire daemon** — `WITH (ttl_column='expires_at')` ve arka plan cleanup.
5. **Temporal SQL yuzeyi** — MVCC var, `FOR SYSTEM_TIME AS OF` / `WITH SYSTEM VERSIONING` syntax'i yok.
6. **Durable streaming subscription** — LISTEN/NOTIFY bellek-ucucu; disconnect'te mesaj kaybi.
7. **Native C client library** — Python/Go/Rust/Node FFI'nin saglam ortak cekirdegi yok.

Ayrica **tek bir framework'le (LangGraph) sinirli kalmamak** icin 9 framework'un bellek abstraction'larini karsilayan ortak SQL primitive set'i gerekiyor:

| Framework | Bellek abstraction'i | EvoSQL primitive |
|---|---|---|
| LangGraph | `BaseCheckpointSaver` + `BaseStore` | CHECKPOINT + MEMORY STORE |
| LangChain classic | `BaseChatMessageHistory`, `VectorStoreRetrieverMemory`, `ConversationEntityMemory`, `ConversationKGMemory` | MESSAGE LOG + MEMORY STORE + ENTITY STORE + GRAPH STORE |
| LlamaIndex | `ChatMemoryBuffer`, `BaseKVStore`, `BaseDocumentStore` | MESSAGE LOG + MEMORY STORE + DOCUMENT STORE |
| CrewAI | `ShortTermMemory`, `LongTermMemory`, `EntityMemory` | MEMORY STORE + CHECKPOINT + ENTITY STORE |
| AutoGen / AG2 | `Memory` protocol + `MemoryContent{content,mime,metadata}` | MEMORY STORE (MIME JSON'da) |
| Semantic Kernel | `IMemoryStore`, `ISemanticTextMemory` | MEMORY STORE (zaten karsilanir) |
| Haystack | `DocumentStore` (Mongo-filter dict), `ChatMessageStore` | DOCUMENT STORE + Mongo-filter DSL |
| Mem0 | `Memory.add/search/get/update/delete` | MEMORY STORE + GRAPH STORE (opsiyonel) |
| Zep | Session messages + Graphiti temporal KG | MESSAGE LOG + GRAPH STORE (bitemporal) |
| OpenAI Swarm | stateless — caller persists | MESSAGE LOG (opsiyonel) |

Tek SQL primitive set (7 obje tipi) + thin adapter shim'leri (50-200 satir/adapter) = **N framework, tek backend**.

Problem ozeti: EvoSQL'in mevcut SQL/MVCC/replication/TDE altyapisi hazir. Agent-memory platformu olmak icin **vector + ANN + 7 native DDL objesi + temporal yuzey + durable subscription + C SDK** eklemek gerekiyor. Sonrasi hardcoded SQL primitive'leri ve thin Python/Go/Rust adapter'lari ile 9 framework'u karsilamak mumkun.

## Karar

Plan dosyasi `/Users/wechip/.claude/plans/golden-wobbling-hanrahan.md`'de **26 task / 8 sutun** olarak bolunmus enterprise push scope'u uygulanacak. Ozet kararlar:

### Sutun A — Vector & Semantic Search (Task 200-203)
- **Task 200**: `VECTOR(N)` tipi. Tuple format `type_code = 260000 + N`, N×4 byte payload, null bitmap tek bit. Parser `VECTOR(128)` type rule, `'[0.1, 0.2, 0.3]'::VECTOR(3)` literal, INSERT/SELECT dimension validation.
- **Task 201**: `cosine_distance`, `l2_distance`, `inner_product`, `l1_distance` fonksiyonlari; operatorler `<=>`, `<->`, `<#>` (evovector convention); `vector_dim`, `vector_norm`, `vector_normalize` helpers.
- **Task 202**: HNSW ANN index — `CREATE INDEX ... USING HNSW (col vector_cosine_ops) WITH (m=16, ef_construction=64)`. Graph on slotted pages, M-layer linked lists, greedy search + refinement. `ORDER BY col <=> $1 LIMIT k` planner hook.
- **Task 203**: Hybrid search — vector + filter tek pass. Selectivity < %10 → full scan + vector sort; > %10 → HNSW `k' = k/selectivity` aday + post-filter.

### Sutun B — Agent Memory Native DDL/DML (Task 204-206)
- **Task 204**: `CREATE CHECKPOINT STORE mem_ck` DDL; fiziksel tablo `__ck_<name>(thread_id, checkpoint_ns, checkpoint_id PK, values JSON, metadata JSON, parent_config JSON, created_at)`. DML: `CHECKPOINT PUT/GET/LIST/PUT WRITES`.
- **Task 205**: `CREATE MEMORY STORE mem WITH (embedding_dim=1536, distance='cosine')`. Fiziksel tablo `__mem_<name>(namespace TEXT[], key TEXT, value JSON, embedding VECTOR(N), created_at, ttl_at)`. DML: `MEMORY PUT/GET/SEARCH/DELETE/LIST NAMESPACES`.
- **Task 206**: Namespace hierarchy (`(user_id, "memories")`) prefix scan + RLS integration — `CREATE POLICY ... ON MEMORY STORE mem FOR SEARCH USING (namespace[1] = current_user)`.

### Sutun C — Temporal / Bitemporal Memory (Task 207-209)
- **Task 207**: `SELECT * FROM memories FOR SYSTEM_TIME AS OF '2026-04-20 14:00'`. MVCC timestamp → CSN lookup (CSN ring cache + CLOG binary search). `AS OF TIMESTAMP` ve `AS OF TRANSACTION N` variant.
- **Task 208**: `CREATE TABLE ... WITH SYSTEM VERSIONING` — otomatik `valid_from`, `valid_to` kolonlari + `t_history` table; UPDATE/DELETE hook'lari eski satiri history'e tasir.
- **Task 209**: `SET SYSTEM_TIME_RETENTION = '30 days'` — WAL archive pruning + history table pruning daemon.

### Sutun D — Reactive Streaming (Task 210-212)
- **Task 210**: `CREATE SUBSCRIPTION s FOR CHANNEL 'memory_updated' DURABLE` — ack-based cursor, disconnect/reconnect'te kaybolan mesajlar resume olur.
- **Task 211**: CDC streaming server (GAP-D7 tamamlama) — TCP JSON lines format `{"op":"I","table":"memories","pk":"42","new":{...},"lsn":N,"ts":...}`. `CREATE CDC STREAM` DDL + `CDC SUBSCRIBE s [FROM LSN n]` handshake.
- **Task 212**: `ON MEMORY PUT mem DO ...` — MEMORY STORE seviyesinde trigger; auto-summarization ve audit log sablonlari.

### Sutun E — Agent Ops (Task 213-215)
- **Task 213**: `CREATE TABLE ... WITH (ttl_column='expires_at')` + `ALTER TABLE ... SET TTL`. Background daemon her dakika `DELETE FROM t WHERE expires_at < NOW()`.
- **Task 214**: Auto-summarization stored procedure template + `token_length(text)` built-in + external LLM hook stub.
- **Task 215**: `CREATE JOB j ON SCHEDULE '*/5 * * * *' DO 'ANALYZE TABLE t'` — cron evaluator daemon, `SHOW JOBS`, `DROP JOB`.

### Sutun F — Framework-Common Primitives (Task 222-225)
- **Task 222**: `CREATE MESSAGE LOG chat` — append-only chat history. `LOG APPEND / READ LAST n / TRUNCATE / COUNT`; TTL integration.
- **Task 223**: `CREATE DOCUMENT STORE docs` + Mongo-stili JSON filter DSL (`{"$and":[{"user_id":"42"},{"score":{"$gt":0.5}}]}`) → 9 operator (`$eq, $ne, $gt, $gte, $lt, $lte, $in, $nin, $and, $or, $not, $exists`). `DOCUMENT WRITE / FILTER / SEARCH / DELETE`.
- **Task 224**: `CREATE GRAPH STORE kg` — bitemporal knowledge graph (Zep Graphiti parity). Node + edge tablolari, `valid_from/valid_to/invalid_at` triple-per-edge. `GRAPH UPSERT NODE/EDGE`, `GRAPH NEIGHBORS`, `GRAPH SEARCH`, `GRAPH PATH AS OF ts`.
- **Task 225**: `CREATE ENTITY STORE entities` — LangChain `ConversationEntityMemory` + CrewAI `EntityMemory` sablonu. `ENTITY PUT/GET/RANK`, mention_count + last_seen tracking.

### Sutun G — C Client Library (Task 216-218)
- **Task 216**: `libevosql-memory.{so,dylib,a}` — opaque `evo_conn_t`, EVO text protocol, checkpoint + memory + vector API, thread-local error handling.
- **Task 217**: Streaming API — `evo_subscribe(conn, channel, callback, ctx)` background thread, CDC client, ack API.
- **Task 218**: FFI + multi-framework adapters — LangGraph `BaseCheckpointSaver/BaseStore`, LangChain `BaseChatMessageHistory/VectorStoreRetrieverMemory/ConversationEntityMemory`, LlamaIndex `BaseKVStore/BaseDocumentStore/ChatMemoryBuffer`, CrewAI `ShortTerm/LongTerm/Entity`, AutoGen `Memory`, Mem0-compatible REST-benzeri Python API. Go cgo + Rust bindgen stub.

### Sutun H — Benchmarks & Positioning (Task 219-221)
- **Task 219**: LongMemEval dataset ingest + accuracy/latency karsilastirma (Zep, Mem0, langgraph-store-mongodb, Pinecone). Reactive latency LISTEN/NOTIFY vs Mongo polling. Temporal query `AS OF` vs Graphiti. Hedef: LongMemEval ≥ Zep (%63.8), p99 checkpoint put < 5 ms.
- **Task 220**: 6 framework icin resmi/official compat suite — LangGraph `langgraph-checkpoint-tests`, LangChain, LlamaIndex, CrewAI, AutoGen, Mem0. CI matrix + async stress (1k concurrent threads).
- **Task 221**: `README.md` rewrite, comparison matrix, architecture diagram, ADR-002 (bu belge), 60-sec quickstart, v3.0.0 major version bump (`evolution/db/version.h`, `deploy/helm/evolutiondb/Chart.yaml`), launch blog post.

### Sprint Sirasi

```
Sprint 1: 200-203 (vector foundation)
Sprint 2: 204-206 (LangGraph DDL)
Sprint 3: 207-209 (temporal)
Sprint 4: 210-212 (reactive)
Sprint 5: 213-215 (ops)
Sprint 6: 222-225 (framework primitives)
Sprint 7: 216-218 (C SDK + adapters)
Sprint 8: 219-221 (bench + relaunch)
```

MVP kritik yolu (LangGraph-only pazarlama demosu): **200 → 201 → 202 → 204 → 205 → 216 → 218(LangGraph) → 220** ≈ 3 sprint.

Full enterprise push: 26 task / ~9-10 hafta.

Release: v3.0.0 (major: urun repositioning).

## Alternatifler

### Secenek 1: Tam enterprise push — 26 task / 8 sutun (bu ADR'in onerdigi karar)
- **Avantajlar**: 4 differentiator axis birlikte acilir (SQL+vector+JSON single-process, temporal/bitemporal, reactive push, embedded+TDE on-prem); 9 framework ortak backend; Zep'in tek avantajini (Graphiti) Task 224 ile kopar; LongMemEval %63.8 hedefi; v3.0.0 launch marketing icin yeterli ozellik; C SDK ile Python/Go/Rust/Node FFI tek cekirdek.
- **Dezavantajlar**: ~9-10 hafta is, 8 sprint; scope creep riski (mitigation: sprint-level sign-off, MVP yolu 3 sprint icinde demo-ready); Graph store (Task 224) karmasiklik — bitemporal edges + BFS/path implementation bug-prone; HNSW recall tuning 128-dim'de Pinecone ile paritede olmayabilir (mitigation: Task 202 test'inde recall@10 > %90 hard gate).

### Secenek 2: MVP-only scope — sadece 200, 201, 202, 204, 205, 216, 218(LG), 220 (~3 sprint)
- **Avantajlar**: Hizli demo, LangGraph drop-in calisir, vector search + checkpoint + memory store ile Mongo/Pinecone pazarinin %80'i kapanir; risk az.
- **Dezavantajlar**: Tek differentiator axis (single-process SQL+vector); temporal yok → Zep/Graphiti farkini kapayamayiz; reactive/durable subscription yok → Mongo polling'e karsi avantaj sifir; multi-framework coverage yok → LangChain/LlamaIndex/CrewAI/AutoGen/Mem0 kullanicilari adapter yazmak zorunda → tutunma dusuk; Mongo Atlas'in TTL + change streams + temporal olmayisi sasirtici degilse **Mongo'yu gecemeyiz**. Positioning: "LangGraph-only vector DB" gibi gorunur — agent-memory platformu degil.

### Secenek 3: LangGraph-only ama tam feature — 200-215 (sutun F + C SDK + bench yok, ~5-6 sprint)
- **Avantajlar**: Temporal + reactive + ops axis'leri dolu; tek framework'e odak; C SDK rotasyonu sprint-8'e ertelenir; riskli tasklar (Graph Store, CDC streaming) sonraya atilir.
- **Dezavantajlar**: Multi-framework ekosistem tutunma firsati kacar — LangChain/CrewAI kullanicilari rakiplerde kalir; C SDK yoklugu Python'a bagimli kilar (Go/Rust/Node ekosistemi kendi basina sarmak zorunda); Mem0-compatible REST API yoklugunda Mem0 gocu engellenir; "agent-memory platform" iddiasini kismi tutar.

### Secenek 4: Saf vector DB (sadece Sutun A) — Pinecone-lite
- **Avantajlar**: Minimal is (~1 sprint); evovector + HNSW + hybrid kombinasyonu mevcut SQL motorlarinda nadir; Postgres vektor eklentilerine alternatif sunar.
- **Dezavantajlar**: Agent-memory vizyonu kaybolur — Postgres'in mevcut vektor eklentisi yerini koruyamaz, Qdrant/LanceDB/Weaviate ile rekabet komodite; MVCC/JSON/replication/TDE/RLS avantajlari gorunmez kalir; gelecekte agent platformuna gecis icin yine ayni 26 task'a donmek gerekir.

### Secenek 5: **External integration** — Mongo/Pinecone icin bridge + CDC → "use what exists"
- **Avantajlar**: Bakim yuku dista; mevcut Task 91 LISTEN/NOTIFY'yi Pinecone/Mongo'ya akitan adapter yazilir.
- **Dezavantajlar**: EvoSQL agent-memory platformu **olmaz**; MongoDB/Pinecone'a *besleyici* olur; tum agent-memory pozisyonu rakiplerin pazar lideri konumunu pekistirir; single-process SQL+vector differentiator'i kaybolur; enterprise on-prem kullanicisi icin hic bir avantaj sunmaz (Pinecone managed/Atlas managed).

## Sonuclar

### Olumlu
- **Tek proses = tek backend**: Agent uygulamalari Postgres + Pinecone (+ Mongo session + Redis cache) yerine tek `evosql.db` ile calisir → operasyonel karmasiklik %70+ duser.
- **ACID + vector + JSON tek TX**: Checkpoint write + embedding upsert + metadata update atomik — Mongo + Pinecone dual-write tutarsizligi ortadan kalkar.
- **Temporal primitive native**: MVCC zaten var, sadece SQL yuzeyi ekleniyor → AS OF sorgulari sifir ek depolama maliyetinde. Zep Graphiti'nin tek avantaji (LongMemEval %63.8 vs %49) kopyalanabilir.
- **Reaktif push Mongo polling'i yener**: LISTEN/NOTIFY + durable subscription + CDC TCP stream ile agent tick-loop latency 10-100x daha dusuk (Mongo 1 s polling interval'a karsi 1-10 ms push).
- **N framework tek backend**: 7 SQL primitive + thin adapter shim'leri ile 9 framework (LangGraph, LangChain, LlamaIndex, CrewAI, AutoGen, Semantic Kernel, Haystack, Mem0, Zep) destekli — framework migration vendor lock-in'i kirar.
- **C SDK / FFI**: Python'a bagimli degil; Go/Rust/Node/Zig kendi thin wrapper'ini yazabilir; embedded usage senaryosu acik (in-process library modu opsiyonel olarak v3.1'e erteleniyor).
- **On-prem + TDE + HA**: AES-256-CTR page encryption + 3-node Raft HA + PBKDF2 auth + TLS → regulated sektorler (finans, saglik) icin Pinecone managed veya Mongo Atlas'a karsi satin alinabilir SKU.
- **pg wire drop-in**: Mevcut Postgres tooling'i (DBeaver, pgAdmin, psql, Grafana, DataGrip) agent-memory sorgulari icin direkt calisir — operasyonel ekip icin ogrenme egrisi sifir.
- **Incremental rollout**: 8 sprint, her sprint demo-ready deliverable — MVP 3 sprintte launch-ready (LangGraph + vector + checkpoint + memory + C SDK + LangGraph adapter).
- **Mevcut primitive'ler geri donusluyor**: `bt2_cursor_seek`, `cat_upsert_stats`, `Json.c`, `mvcc_take_snapshot`, `auto_reclaim_start`, `notify_registry_init`, `repl_set_change_callback`, `tls_wrap_*`, `conn_t` — yeni kod %30-40 mevcut utility uzerine yazilir.

### Olumsuz
- **Scope risk**: 26 task / 9-10 hafta buyuk bir taahhut; sprint-level sign-off ve MVP yolu (3 sprint) ile risk azaltilir ama urunde "agent-memory" branding'i full sprint'ler bitmeden duyurulmamali — yanlis beklenti yaratir.
- **HNSW recall tuning**: 128-dim/1536-dim embedding'lerde Pinecone'un tuned HNSW'si ile paritede olmak deneysel — ilk `tests/test_hnsw_index.py`'de 10k vector recall@10 > %90 hard gate ile dogrulanmali; altinda kalirsa IVFFLAT fallback.
- **Graph Store (Task 224) karmasiklik**: Bitemporal edges + BFS/path/neighbors implementation bug-prone; MVP'den cikarip Sprint 6'ya birakildi; Zep parity icin kritik ama ilk release'de stub + follow-up v3.1 opsiyonu acik.
- **C SDK thread safety**: Agent uygulamalari cok-thread'li arar; `evo_subscribe` callback dispatch + main TX thread + IO thread race kosulu riski (mitigation: adanmis IO thread pattern + `tests/test_concurrency.c` 1k thread stress).
- **Framework API drift**: 6 adapter pinned versiyonlarla baslar; LangChain/LlamaIndex/CrewAI quarterly breaking change yapiyor; CI matrix (Task 220) her framework'u haftalik calistirir ama upgrade debt birikir (mitigation: quarterly upgrade job).
- **Vector bellek patlamasi**: 100k × 1536 float = ~600 MB tek tabloda; tuple format `VARBINARY`'den taskin olabilir → Task 200 streaming encode + overflow page (TOAST-like) gerekir; kisitlama ilk surumde 8 KB tuple limit'i muhtemel.
- **Mongo-filter DSL scope creep**: JSON path operatorleri sinirsiz; Task 223 sadece 9 operator (`$eq/$ne/$gt/$gte/$lt/$lte/$in/$nin/$and/$or/$not/$exists`); gerisi `42709 undefined_operator` donulur; kullanici talepleri v2'ye kuyruklanir.
- **Temporal retention disk sisirme**: `SET SYSTEM_TIME_RETENTION = '30 days'` default 7 gun; prune daemon yoksa disk doludurur → Task 209 WAL archive + history table pruning zorunlu; env var `EVOSQL_SYSTEM_TIME_RETENTION_DAYS` operator knobu.
- **v3.0.0 major bump iletisim maliyeti**: 2.x kullanicilari wiki + migration guide'a ihtiyac duyar; agent-memory DDL yeni (breaking degil) ama major bump urun repositioning + SKU soylemi etkiler; launch blog + release notes + pricing page (Task 221) dogru iletisimi yapmali.
- **CDC streaming server bakim yuku**: TCP accept loop + per-client WAL decoder + JSON encoding; bug'lar production'da gozlemi gecikmeli olur; opsiyonel flag (`--cdc-port 9970`) default disabled — opt-in model.
- **C SDK sinirli adapter demo**: Task 218 Python adapter'larin hepsi **reference** implementation; resmi pip paketleri v3.1'de upstream'e (LangGraph contrib) gonderilecek; kullanici ilk gunde kopyala-yapistir kullanir.

## Tarih

2026-04-24
