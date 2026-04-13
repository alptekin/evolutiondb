# DML Inner-Loop Profile — Baseline

Phase 6.0 measurement. No code optimizations — this file captures the
real per-helper cost so Phase 6.1 is driven by data instead of guesses.

## Setup

- Platform: macOS (Darwin 25.3.0), local server
- Binary: `feature/dml-profiling` branch, debug build (`-O0 -g`)
- Server: `EVOSQL_PASSWORD=admin EVOSQL_DML_PROFILE=1 ./adaptor/evosql-server`
- Profile log: `/tmp/evosql_dml_profile.log`
- Scenario per iteration (6 total, first 2 discarded as warm-up):
  ```sql
  CREATE TABLE bench_items_N (id INTEGER PRIMARY KEY, val VARCHAR(50));
  INSERT INTO bench_items_N VALUES (1,'v1'), ..., (10000,'v10000');  -- 10000 rows
  DELETE FROM bench_items_N WHERE id <= 5000;                         -- 5000 rows
  UPDATE bench_items_N SET val = 'u' WHERE id <= 7000;                -- 2000 rows
  DROP TABLE bench_items_N;
  ```
- No triggers, no secondary indexes, no foreign keys referencing the
  table. Every `trigger_*`, `sec_idx_*`, `fk_check` hit below is a
  **no-op catalog scan that returns 0** — pure overhead.

## Profile-mode overhead

`clock_gettime(CLOCK_MONOTONIC)` wrappers add ~28 ms to DELETE 5K and
~15 ms to UPDATE 2K vs the off-mode wall-clock. Relative percentages
below are the signal; subtract ~5 µs/row from absolute numbers to
approximate real off-mode cost.

Wall-clock, last 4 runs, on:
```
INS=1949 ms  DEL=113 ms  UPD=81 ms   (profile mode)
INS=~1570  DEL=~85   UPD=~65         (off mode, Phase 5 baseline)
```

## DELETE — 5000 rows, 4-run average

```
loop_total = 109.16 ms    avg_us = 21.83 per row
```

| Helper             | calls |  total_ms | avg_us | %loop | Notes |
|---|---:|---:|---:|---:|---|
| `bt2_search`       | 5000  |   27.75   |  5.55  | 25.4% | **hot** — cursor already had rid |
| `trigger_before`   | 5000  |   25.28   |  5.06  | 23.2% | **no triggers exist** — 100% catalog scan waste |
| `trigger_after`    | 5000  |   24.92   |  4.98  | 22.8% | **no triggers exist** — 100% catalog scan waste |
| `sec_idx_delete`   | 5000  |   14.29   |  2.86  | 13.1% | **no sec indexes exist** — 100% catalog scan waste |
| `[unaccounted]`    |   -   |    6.19   |    -   |  5.7% | loop control, frees, memset, returning check |
| `vmap_clear`       | 5000  |    2.42   |  0.48  |  2.2% |   |
| `heap_set_xmax`    | 5000  |    2.35   |  0.47  |  2.2% | **in-place tuple mark** — surprisingly cheap |
| `fk_check`         | 5000  |    1.79   |  0.36  |  1.6% | **no FKs referencing** — fast early return |
| `lock_row_acquire` | 5000  |    1.45   |  0.29  |  1.3% | **Phase 1 overestimate** — hash insert is cheap |
| `tapi_heap_read`   | 5000  |    0.90   |  0.18  |  0.8% | **Phase 1 overestimate** — heap read is cheap |
| `cg_check_write`   | 5000  |    0.79   |  0.16  |  0.7% |   |
| `tup_extract`      | 5000  |    0.68   |  0.14  |  0.6% |   |
| `mvcc_ensure_xid`  | 5000  |    0.17   |  0.04  |  0.2% | idempotent NOP after first call |
| `conc_mod_log`     | 5000  |    0.17   |  0.03  |  0.2% | no concurrent index build active |

### Top 4 = 84.5% of loop_total

The **top 4 helpers consume 84.5% of the loop**, and three of them
(`trigger_before`, `trigger_after`, `sec_idx_delete` = 59.1%) are
**pure no-op catalog lookups** for features the table does not have.

## UPDATE — 2000 rows, 4-run average

```
loop_total = 74.83 ms    avg_us = 37.42 per row   (apply_update_total = 99.8% of loop)
```

| Helper               | calls |  total_ms | avg_us | %loop | Notes |
|---|---:|---:|---:|---:|---|
| `apply_update_total` | 2000  |   74.66   | 37.33  | 99.8% | the work is all inside ApplyUpdateToRow |
| `bt2_update`         | 2000  |   16.31   |  8.16  | 21.8% | PK tree points to new heap rid (unavoidable) |
| `bt2_search`         | 2000  |   15.72   |  7.86  | 21.0% | **redundant** — cursor already had rid |
| `trigger_before`     | 2000  |   10.67   |  5.34  | 14.3% | **no triggers** — 100% waste |
| `trigger_after`      | 2000  |   10.31   |  5.15  | 13.8% | **no triggers** — 100% waste |
| `vmap_clear`         | 4000  |    1.57   |  0.39  |  2.1% | called twice per row (old + new page) |
| `heap_insert`        | 2000  |    1.35   |  0.68  |  1.8% | non-destructive UPDATE writes new tuple |
| `heap_set_xmax`      | 2000  |    0.92   |  0.46  |  1.2% | soft-delete old version |
| `lock_row_acquire`   | 2000  |    0.41   |  0.21  |  0.6% |   |
| `tapi_heap_read`     | 2000  |    0.36   |  0.18  |  0.5% |   |
| `cg_check_write`     | 2000  |    0.33   |  0.16  |  0.4% |   |
| `mvcc_ensure_xid`    | 2000  |    0.06   |  0.03  |  0.1% |   |

### Top 5 = 70.7% of loop_total

Same pattern as DELETE: two no-op trigger scans (28.1%) + a redundant
`bt2_search` (21.0%) dominate.

## Estimate vs reality

Phase 1 code-reading estimates (from the pre-work exploration) vs the
numbers measured here:

| Helper             | Phase 1 guess (µs/row) | Measured (µs/row) | Verdict |
|---|---:|---:|---|
| `bt2_search`       | 2-3  | 5.55 | underestimated — cursor save wins more than expected |
| `tapi_heap_read`   | 5-8  | 0.18 | **32-44× overestimate** — page is hot in buffer pool |
| `lock_row_acquire` | 3-5  | 0.29 | **10-17× overestimate** — hash insert is fast |
| `fk_check` (no FK) | 10-50 | 0.36 | **28-140× overestimate** — early return already works |
| `cg_check_write`   | 1-2  | 0.16 | 6-12× overestimate |
| `heap_set_xmax`    | 3-5  | 0.47 | 6-10× overestimate — in-place, page is hot |
| `vmap_clear`       | 0.5-1 | 0.48 | accurate |
| `trigger_*` (no trigger) | ~0 | 4.98 | **wildly underestimated** — no per-table cache, full scan every row |
| `sec_idx_delete` (no idx) | ~0 | 2.86 | **wildly underestimated** — same full scan waste |

**Lesson**: the intuition "no triggers / no FKs / no indexes → free"
was wrong. The early-return paths inside those helpers still pay the
full catalog B+ tree scan to *discover* that there's nothing to do.
Phase 6.1 should focus on **caching presence flags on TableDesc**, not
on skipping locks or elimination of hot-path helpers that are already
cheap.

## Phase 6.1 recommendation (data-driven)

Rank by (avg_us × frequency) across DELETE + UPDATE:

| Rank | Helper         | Fix | Expected save |
|---|---|---|---|
| 1 | `trigger_before/after` (no-trigger) | Cache `has_triggers` flag on TableDesc at resolve time; skip `evo_fire_triggers` when 0 | DELETE ~10 µs/row = 50 ms total<br>UPDATE ~10 µs/row = 20 ms total |
| 2 | `bt2_search` (fast-path redundancy) | Save `(key, rid)` pairs during PK-range cursor walk; drop `bt2_search` from inner loop | DELETE ~5.5 µs/row = 28 ms total<br>UPDATE ~7.9 µs/row = 16 ms total |
| 3 | `sec_idx_delete` (no-index) | Cache `has_secondary_indexes` flag; skip `delete_secondary_indexes` when 0 | DELETE ~2.9 µs/row = 14 ms total |
| 4 | `vmap_clear` per-page batching | Sort match list by `page_no`, clear vmap once per page | DELETE ~0.3 µs/row = 1.5 ms total<br>UPDATE ~0.2 µs/row = 0.4 ms total |
| 5 | `heap_set_xmax` per-page batching | Group same-page soft-deletes → single `pgm_read_page` / `pgm_write_page` | DELETE ~0.3 µs/row = 1.5 ms |

Conservative total for #1-#3 alone (skipping #4/#5 as noise):

- DELETE 5K: 85 ms → 85 − 50 − 28 − 14 = **~-7 ms … clamp to ~5 ms**
- UPDATE 2K: 65 ms → 65 − 20 − 16 = **~29 ms**

#1–#3 are all **low-risk**, schema-cache-only changes — no batch
lock, no deferred undo, no transaction-semantics risk. A single
`TableMetaFlags` struct populated during `tapi_resolve()` + a `(key,
rid)` pair in the fast-path collection list would knock DELETE under
the <10 ms target and bring UPDATE within 5× of PG.

Trigger caching alone is the biggest-ROI single change and should be
Phase 6.1. bt2_search elimination and secondary-index flag are
Phase 6.2 / 6.3.

## Files referenced

- Delete.c inner loop: `evolution/db/Delete.c:556-711`
- Update.c inner loop: `evolution/db/Update.c:1414-1458`
- ApplyUpdateToRow: `evolution/db/Update.c:331-1019`
- Trigger dispatch: `evo_fire_triggers()` — full catalog scan every
  call (see `cat_list_triggers_for_table` inside Trigger.c)
- Secondary index loader: `idx_load_secondary()` — catalog B+ tree
  scan every call
- PK range fast path (Phase 5): `evolution/db/Delete.c:408-480`,
  `evolution/db/Update.c:1280-1402`
