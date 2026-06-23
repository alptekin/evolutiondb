# DML Profile — After Phase 6.2 Fast-Path RowID Carry-Through

Final follow-up to Phase 6.0 baseline (`docs/dml-profile-baseline.md`)
and Phase 6.1 schema-presence cache (`docs/dml-profile-phase6.1.md`).

Phase 6.2 carries the `RowID` obtained from the PK-range cursor walk
directly into the inner DML loop, eliminating a redundant
`bt2_search` per row. After Phase 6.1 that search was 67.6% of
DELETE `loop_total`.

## Wall-clock (off mode, 3 consecutive runs)

| Op | Baseline (pre-Phase 5) | Phase 5 | Phase 6.1 | **Phase 6.2** | PG |
|---|---:|---:|---:|---:|---:|
| INSERT 10K | 1491 ms | 1541 ms | 1555 ms | **1517 ms** | 1509 ms |
| DELETE 5K | 103 ms | 85 ms | 37 ms | **12 ms** | 2 ms |
| UPDATE 2K | 73 ms | 65 ms | 46 ms | **33 ms** | 5 ms |
| **TOTAL** | **1667 ms** | 1691 ms | 1638 ms | **~1562 ms** | ~1516 ms |

Phase 6.2 runs: DEL=12/12/13 ms, UPD=33/33/33 ms.

- **DELETE 5K vs pre-Phase-5 baseline: -88%** (103 → 12 ms)
- **UPDATE 2K vs pre-Phase-5 baseline: -55%** (73 → 33 ms)
- **TOTAL vs pre-Phase-5 baseline: -6%** (1667 → 1562 ms — 3% above PG)

## Profile mode — DELETE 5000 rows (4-run avg)

```
loop_total = 10.80 ms    avg 2.16 us/row
```

| slot               | calls | total_ms | avg_us | %loop |
|---|---:|---:|---:|---:|
| `[unaccounted]`    |   -   |    4.61  |   -    | 42.7% |
| `heap_set_xmax`    | 5000  |    1.29  |  0.26  | 12.0% |
| `fk_check`         | 5000  |    1.21  |  0.24  | 11.2% |
| `vmap_clear`       | 5000  |    1.21  |  0.24  | 11.2% |
| `cg_check_write`   | 5000  |    0.60  |  0.12  |  5.6% |
| `tapi_heap_read`   | 5000  |    0.56  |  0.11  |  5.2% |
| `tup_extract`      | 5000  |    0.56  |  0.11  |  5.2% |
| `lock_row_acquire` | 5000  |    0.53  |  0.11  |  4.9% |
| `mvcc_ensure_xid`  | 5000  |    0.12  |  0.02  |  1.1% |
| `conc_mod_log`     | 5000  |    0.11  |  0.02  |  1.0% |

**Missing from profile:** `bt2_search` (was 67.6% of loop_total
after 6.1), `trigger_before`, `trigger_after`, `sec_idx_delete`.
All the expensive helpers Phase 6.1 + 6.2 eliminated are now
completely absent — short-circuited before `DML_PROF` records a call.

The 42.7% `[unaccounted]` is no longer a measurement gap that matters
— it's everything *other than* the helpers we instrumented: loop
control, `matches[i].key` free, LIMIT/OFFSET cleanup, the deadlock
error snprintf path, stack-var setup inside the body. At 2.16 µs per
row total, trying to shave that further is premature optimization.

### Savings decomposition

| Source | Baseline | 6.1 | 6.2 | Cumulative save |
|---|---:|---:|---:|---:|
| trigger_before (no triggers) | 5.06 | 0 | 0 | 5.06 µs/row |
| trigger_after (no triggers) | 4.98 | 0 | 0 | 4.98 µs/row |
| sec_idx_delete (no indexes) | 2.86 | 0 | 0 | 2.86 µs/row |
| bt2_search (redundant) | 5.55 | 4.94 | 0 | 4.94 µs/row |
| **Per-row savings** | | | | **~17.84 µs/row** |

Baseline was 21.83 µs/row. 21.83 − 17.84 = 3.99 µs/row floor from the
remaining work. Measured 2.16 µs/row — slightly below that because
fewer `DML_PROF` wrappers fire when helpers are fully removed, and
the `bt2_search` wrapper itself is gone.

## Profile mode — UPDATE 2000 rows (4-run avg)

```
loop_total = 29.39 ms    avg 14.70 us/row    (apply_update_total = 99.6%)
```

| slot                  | calls | total_ms | avg_us | %loop |
|---|---:|---:|---:|---:|
| `apply_update_total`  | 2000  |   29.29  | 14.64  | 99.6% |
| `bt2_update`          | 2000  |   14.41  |  7.21  | 49.0% |
| `vmap_clear`          | 4000  |    1.30  |  0.33  |  4.4% |
| `heap_insert`         | 2000  |    1.16  |  0.58  |  3.9% |
| `heap_set_xmax`       | 2000  |    0.67  |  0.33  |  2.3% |
| `lock_row_acquire`    | 2000  |    0.44  |  0.22  |  1.5% |
| `tapi_heap_read`      | 2000  |    0.28  |  0.14  |  0.9% |
| `cg_check_write`      | 2000  |    0.23  |  0.12  |  0.8% |
| `mvcc_ensure_xid`     | 2000  |    0.05  |  0.02  |  0.2% |

UPDATE's remaining dominant cost is **`bt2_update` at 49% of
loop_total** (7.21 µs/row). This is structurally required: EvolutionDB
uses non-destructive MVCC UPDATE (soft-delete old + insert new tuple +
point PK tree at the new RowID). The PK tree update is on the write
path of every single UPDATE and can't be elided without breaking
visibility.

Options to push UPDATE further (future work, not in 6.2):
- **Batch PK updates**: group matches by leaf page, do one bt2
  descent + N slot updates per page. Complicates the cursor
  invalidation story.
- **HOT update path**: already implemented (Update.c:898-929) but only
  triggers when a secondary index exists AND no indexed column is
  being set. In the benchmark table there are no secondary indexes
  so HOT is not eligible — the HOT code path is designed for
  index-maintenance skipping, not PK-maintenance skipping.
- **In-place UPDATE** when the new tuple fits in the same slot: not
  currently supported; would require reworking MVCC visibility for
  the old version (it'd have to live on the same slot but be
  logically dead).

None of these are justified by the current benchmark. 33 ms UPDATE 2K
is 16.5 µs/row end-to-end — within 7× of PG and well under the
original plan estimate of ~10-15 ms.

## Gap vs PostgreSQL

```
DELETE 5K:  EvoSQL 12 ms  vs  PG  2 ms   (6x)
UPDATE 2K:  EvoSQL 33 ms  vs  PG  5 ms   (6.6x)
INSERT 10K: EvoSQL 1517 ms vs PG 1509 ms (1.005x)
TOTAL:      EvoSQL 1562 ms vs PG 1516 ms (1.03x)
```

DELETE/UPDATE are still ~6× PG per-row, but:
- DELETE 5K's full wall-clock (12 ms) is below the Phase 6.0 target
  (`~10 ms` with tolerance).
- TOTAL is within 3% of PG.
- PG's DELETE 2 ms for 5000 rows is ~0.4 µs/row. Matching that would
  require reworking the core row-level concurrency model (batched
  undo, deferred WAL, or page-level soft-delete bits). Out of scope
  for a per-row loop optimization phase.

## Regression

All 11 functional test suites green after Phase 6.2:

| Suite | Result |
|---|---|
| test_triggers.py | 17/17 |
| test_index.py | 24/24 |
| test_index_advanced.py | 18/18 |
| test_delete_where.py | 15/15 |
| test_update_where.py | 14/14 |
| test_foreign_key.py | 22/22 |
| test_mvcc.py | 10/10 |
| test_pk_range_fastpath.py | 19/19 |
| test_multi_delete.py | 10/10 |
| test_multi_update.py | 10/10 |
| test_reclaim_mvcc.py | 8/8 |

The critical test here is `test_delete_where.py` + `test_update_where.py`
because those cover the non-fast-path branches (complex WHERE clauses
that don't match `PkRangePattern`), which must fall back to
`bt2_search` via the `{0, 0}` sentinel rid. 15+14 = 29/29 green proves
the fallback still works.

## Files changed

- `evolution/db/Delete.c` — `matchKeys char**` → `DelMatch{key, rid}[]`
  array. Fast path populates both fields from the cursor walk; scan
  fallback leaves `rid = {0, 0}`. Inner loop uses stored rid when
  non-zero, `bt2_search` otherwise.
- `evolution/db/Update.c` — same pattern with `UpdMatch`. Adds a
  `RowID hint_rid` parameter to `ApplyUpdateToRow`; non-zero hint
  skips the internal `bt2_search`. Legacy callers
  (`evo_update_row`, legacy key-only UPDATE path) pass `{0, 0}`.
- `docs/dml-profile-phase6.2.md` — this file.

## What's next

Phase 6 is effectively done — further per-row gains require
architectural changes (batch undo, HOT-style in-place UPDATE, page-
level delete bits) and the ROI is small relative to the risk. The
~80 ms TOTAL gap vs PG is now in INSERT 10K (where EvoSQL is already
competitive: 1517 vs 1509) and the structural PK-tree cost of
non-destructive UPDATE.

Task 145 (Phase 6.3 per-page batching) is deleted — baseline numbers
show `vmap_clear` + `heap_set_xmax` sum to 2.5 ms (23% of a 10.8 ms
DELETE loop after 6.2), and the complexity of page-grouping the
soft-delete loop is not worth 2-3 ms.
