# ADR-001: Task 97 — Replication v1 (Hardened Production)

## Durum
Onerilen

## Baglam

EvolutionDB'de replication alt yapisi yaklasik 1 641 satir halinde `adaptor/replication.c` (838 L), `adaptor/replication.h` (152 L), `adaptor/raft.c` (530 L), `adaptor/raft.h` (121 L) dosyalarinda zaten mevcut:

- Primary tarafinda WAL sender (accept loop + per-replica streaming thread + 5 s heartbeat tail polling), replica tarafinda WAL receiver (`pwrite()` at `page_no * 4096` + TDE yeniden sifreleme + `root/evosql.slot`'e LSN persist + exponential backoff auto-reconnect).
- CDC decoder logical `I`/`U`/`D` eventlerini replay sirasinda uretiyor.
- Raft: election timer, heartbeat, AppendEntries listener, leader/follower state machine.
- `adaptor/main.c` icinde `--replication-port`, `--replica host:port`, `--cluster`, `--node-id` CLI bayraklari.
- `adaptor/query_executor.c` satir ~5600'de replica write rejection (SQLSTATE 25006).
- `evolution/db/wal.c:344` `wal_log_page()` icinden `repl_notify_new_wal()` cagriyor.

**Kod calisiyor; production icin guvenli mi?** Hayir — `tasks.md` Task 97 hedefini 10 adima bolmus ama 11 somut eksik var:

1. `EVOSQL_REPLICATION_ROLE` / `EVOSQL_PRIMARY_HOST` / `EVOSQL_PRIMARY_PORT` env var destegi yok; sadece CLI bayraklari calisiyor. (Grep: bu isimler yalnizca `tasks.md`'de geciyor, kodda yok.)
2. `tests/test_replication.py` yok — feature hic dogrulanmamis. (Test dizininde sadece alakasiz `test_uservars_replace.py` var.)
3. `docker-compose.replication.yml` yok — cok konteynerli primary+replica topolojisi uretilmemis.
4. Receiver → master ACK feedback loop yok; master korluk icinde yayin yapiyor → synchronous commit yapilamiyor.
5. `repl_enable_tls(1)` ve `repl_set_auth("u","p")` bayraklari saklaniyor fakat handshake'te dogrulanmiyor → wire uzerindeki herkes replica gibi davranabilir.
6. Raft ile Replication arasinda glue yok — Raft leader secimi replication rolunu cevirmiyor; ancak elle `repl_promote()` cagrilabiliyor.
7. Raft `current_term` / `voted_for` persist edilmiyor → restart = secim gecmisini unut = split-brain riski.
8. Witness mode bayragi mevcut ama SELECT path'inde enforce edilmiyor — witness nodelar cevaplamamalari gereken SELECT'leri cevapliyor.
9. Log compaction yok → Raft log sinirsiz buyur, uzun surelerde OOM.
10. Base backup pipeline yok → yeni bir replica `cp evosql.db` haricinde bootstrap yapamiyor; `pg_basebackup` karsiligi eksik.
11. `SHOW REPLICATION STATUS` yok — operatorler lag, slot durumu ve rol icin gozlemlenebilir bir view'den yoksun.

Goal: 3-node HA topolojisi (primary + 2 replica), proxy arkasinda, synchronous commit, TLS'li replication, dogrulanan handshake ve sinirli Raft logu ile guvenle deploy edilebilecek bir **Task 97 v1**. "v2'ye ertelenecek hardening" kalmayacak.

## Karar

Plan dosyasi `/Users/wechip/.claude/plans/tidy-toasting-pillow.md`'de 9 commit cadence olarak bolunmus sekilde uygulanacak. Ozet kararlar:

- **Config**: `EVOSQL_REPLICATION_ROLE` (`primary|replica|witness`), `EVOSQL_PRIMARY_HOST`, `EVOSQL_PRIMARY_PORT`, `EVOSQL_REPLICATION_PORT`, `EVOSQL_REPLICATION_USER`, `EVOSQL_REPLICATION_PASSWORD` env var'lari `adaptor/main.c`'de parse edilecek; CLI bayraklari onceligini korur.
- **ACK feedback**: Yeni mesaj tiplari `REPL_MSG_ACK` (`'A'` + `[confirmed_lsn:4B]`) ve `REPL_MSG_AUTH` (`'U'`). Replica her 100 kayitta bir ve her 5 s heartbeat'te ACK gonderir; sender non-blocking `recv` ile okuyup `ReplicationSlot.confirmed_lsn`'i gunceller.
- **Sync commit**: `repl_sync_commit(uint32_t lsn, int timeout_ms)` condvar uzerinde `majority_confirmed_lsn >= lsn`'e kadar bloke olur; `EVOSQL_SYNC_COMMIT=1` bayragi COMMIT path'inde majoritiye bekler; default 2 s timeout.
- **TLS**: `adaptor/tls.c`'den `tls_wrap_server(fd)` / `tls_wrap_client(fd, host)` genellestirilecek; mevcut PG-wire TLS ile ayni `EVOSQL_TLS_CERT` / `_KEY` env var'lari paylasir.
- **Auth**: Handshake `REPLICATE <lsn>\n` sonrasi `AUTH <user> <password>\n` bekler; `cat_find_user` + `crypto_verify_password` ile PBKDF2 karsilastirmasi; yeni `G_REPLICATION` grant kind.
- **Raft glue**: `raft_set_role_callback(cb)` — `FOLLOWER ↔ CANDIDATE ↔ LEADER` gecislerinde tetiklenir; `adaptor/replication.c` boot zamaninda kaydolur (`LEADER → repl_promote() + repl_start_sender()`, `FOLLOWER → repl_demote() + repl_start_receiver(...)`). `RaftNode`'a `repl_host` + `repl_port` eklenir, AppendEntries heartbeat'larinda yayimlanir.
- **Raft persistence + log compaction**: `root/raft.state`'e `{current_term:4B, voted_for:4B}` temp+rename ile yazilir; her 10 000 AppendEntries'te `root/raft.snapshot` olusur + `min(majority_confirmed_lsn) − safety_margin` altinda in-memory log kirpilir.
- **Witness gating**: SELECT girisinde `repl_is_witness()` true ise SQLSTATE 08006 "witness node does not serve queries" doner.
- **Base backup**: `evosql-server --base-backup PATH` modu — `bp_flush_all() + wal_fsync()` ile consistent LSN pinle, MVCC snapshot al, `evosql.db` + `evosql.wal` + `root/*`'i `sendfile` (Linux) veya `fread`/`fwrite` ile kopyala, `BACKUP_LABEL` yaz, server loop'a girmeden cikis yap.
- **Gozlemlenebilirlik**: `SHOW REPLICATION STATUS` komutu + `pg_stat_replication` ve `pg_is_in_recovery()` pg_catalog shim'i.
- **Deploy**: `docker-compose.replication.yml` — `primary:5433`, `replica1:5434`, `replica2:5435`; TLS + auth; replicas `depends_on: [primary, condition: service_healthy]`.
- **Test**: `tests/test_replication.py` 20+ case — Basic (5), Consistency (4), Sync commit (2), TLS+auth (3), Raft failover (3), Base backup + compaction (3).

Release: v2.1.0 (major: HA-ready).

## Alternatifler

### Secenek 1: v1 olarak **hardened production** (bu ADR'in onerdigi karar)
- **Avantajlar**: 11 gap tek PR'da kapanir; proxy arkasinda 3-node HA, synchronous commit, TLS, auth, bounded Raft log, 20+ test coverage; "v2 followup" brkloga tasimaz; v2.1.0 gercekten HA-ready.
- **Dezavantajlar**: 9 commit ~2-3 hafta surecek; PR review fatigue riski (mitigation: her commit bagimsiz CI-runnable; gerekirse Commit 5'te split).

### Secenek 2: v1 sadece `tasks.md`'deki 10 adim, v2'yi TLS+auth+sync commit icin ayir
- **Avantajlar**: Daha kucuk PR; hizli demo.
- **Dezavantajlar**: Auth'suz TLS'siz replication prod'a konmamaz → v1 "hazir" degil; v2 2-3 sprint surer; mevcut replication.c/raft.c'nin production-grade oldugu yaniltici izlenimi verir (`tests/test_replication.py` yoklugu zaten feature'i dogrulamadi); split-brain ve impersonation riskleri bir sureligne acik kalir.

### Secenek 3: Built-in replication yerine **WAL + external tool** (Debezium/pg_basebackup-rsync)
- **Avantajlar**: Bakim yuku dista; logical replication stream'ini Kafka/Debezium uzerinden tuket.
- **Dezavantajlar**: Built-in Raft+replication kodu (1 641 L) bos kalir / silinir; CDC pipeline gecici gecikmeli; synchronous commit garantisi veremez; TDE yeniden sifreleme pipeline'i kullanilamaz; docker-compose basit degil — 3rd party sistem gerekir; mevcut Task 91 LISTEN/NOTIFY cross-server delivery'ine temel birakmaz.

### Secenek 4: `adaptor/raft.c`'yi silip **single-primary + manual failover**'a geri don
- **Avantajlar**: Kodu sadelestirir; Raft persistence + log compaction ihtiyaci yok.
- **Dezavantajlar**: Otomatik failover kaybolur; kurumsal HA beklentisi karsilanmaz; `adaptor/raft.c` 530 L bos yere yazilmis olur; proxy tarafinda manual fencing gerekir.

## Sonuclar

### Olumlu
- 3-node HA topolojisi proxy arkasinda dogrudan calisir; leader olumu `<1 s` icinde yeni leader secer.
- Synchronous commit majority ACK ile durability arttirir; replica lag gozlemlenebilir (`SHOW REPLICATION STATUS` + `pg_stat_replication`).
- Replication trafigi TLS ile sifreli, PBKDF2 auth ile dogrulanir → wire impersonation onlenir.
- Raft `{current_term, voted_for}` persist edildigi icin restart sonrasi ayni term'de ikinci oy kullanilmaz → split-brain teknik olarak imkansiz.
- Raft log compaction (10 000 entry snapshot + safety margin truncation) uzun calisan cluster'larda OOM'i onler.
- Base backup pipeline yeni replica bootstrap'ini operator-friendly yapar (`--base-backup /path` tek komut).
- `tests/test_replication.py` 20+ case ile feature her CI run'inda dogrulanir — yillik bozulma riski azalir.
- MVCC, RLS, TDE gibi mevcut katmanlarla birlikte calisir (RLS replica'nin oturum kullanicisina gore uygulanir — PG semantigi ile tutarli).

### Olumsuz
- PR sizesi 9 commit + yeni docker-compose + yeni test dosyasi + wiki guncellemesi → reviewer baski altinda kalabilir (risk mitigation: commit bazli inceleme + Commit 5'te split optionu).
- `tls_wrap_server` / `tls_wrap_client` refactoru mevcut PG-wire TLS path'ini bozma riski tasir (mitigation: her iki path icin mevcut TLS testleri yesil kalmali + OpenSSL `SSL_new` + `SSL_accept` surface'i kucuk tutulur).
- Raft `root/raft.state` atomic rename bazi FS'lerde (tmpfs) atomik olmayabilir (mitigation: `fsync(dir)` fallback + tmpfs incompat dokumantasyonu).
- Sync commit tum replica'lar dustugunde deadlock riski tasir (mitigation: hard timeout default 2 s, timeout'ta async commit'e dus + slot'u `stale` isaretle).
- Base backup ~GB boyutunda dosya kopyalar; lock-free olsa da initial transfer 10-30 s surebilir (dokumantasyona koyulacak).
- Witness SELECT gate her SELECT girisinde bir flag read ekler — parse maliyetinin yaninda ihmal edilebilir ama Commit 7'de benchmark ile dogrulanmali.
- CDC subscription persist edilmiyor (v2 kapsaminda); bu v1 surumune girmez.
- Cascading replication, multi-primary, delayed replicas, pg_rewind, replication-aware read routing v2'ye erteleniyor → "read scale-out" talebi kaciniz.

## Tarih

2026-04-24
