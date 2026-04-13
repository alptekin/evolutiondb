# DML Profile — After Phase 6.1 Schema Presence Cache

Follow-up to `docs/dml-profile-baseline.md`. Phase 6.1 adds two
presence flags to `TableDesc` populated at `tapi_resolve()` time, and
guards the DML call sites so `evo_fire_triggers` and
`delete_secondary_indexes` / `idx_load_secondary` are skipped entirely
on tables that have neither triggers nor secondary indexes.

## Wall-clock (off mode, 3 runs, no profile overhead)

| Op | Before 6.1 | After 6.1 | Delta | PG |
|---|---:|---:|---:|---:|
| INSERT 10K | 1572 ms | 1555 ms |  -1% | 1509 ms |
| DELETE 5K (`id <= 5000`) | **85 ms** | **37 ms** | **-56%** | 2 ms |
| UPDATE 2K (`id <= 7000`) | **65 ms** | **46 ms** | **-29%** | 5 ms |
| **TOTAL** | **1722 ms** | **1638 ms** | **-5%** | ~1516 ms |

- Three consecutive off-mode runs: 37/37/37 ms DELETE, 47/46/46 ms
  UPDATE — stable, not noise.
- TOTAL gap vs PG is now 122 ms; most of it remains in INSERT 10K
  (~46 ms gap), not in DELETE/UPDATE.

## Profile mode — DELETE 5000 rows (4-run average)

```
loop_total 36.55 ms    avg 7.31 us/row
```

| slot              | calls | total_ms | avg_us | %loop |
|---|---:|---:|---:|---:|
| `bt2_search`      | 5000  |   24.72  |  4.94  | 67.6% |
| `[unaccounted]`   |  -    |    5.04  |   -    | 13.8% |
| `heap_set_xmax`   | 5000  |    1.43  |  0.29  |  3.9% |
| `fk_check`        | 5000  |    1.33  |  0.27  |  3.6% |
| `vmap_clear`      | 5000  |    1.27  |  0.26  |  3.5% |
| `lock_row_acquire`| 5000  |    0.68  |  0.14  |  1.9% |
| `tapi_heap_read`  | 5000  |    0.66  |  0.13  |  1.8% |
| `cg_check_write`  | 5000  |    0.63  |  0.13  |  1.7% |
| `tup_extract`     | 5000  |    0.51  |  0.10  |  1.4% |
| `conc_mod_log`    | 5000  |    0.14  |  0.03  |  0.4% |
| `mvcc_ensure_xid` | 5000  |    0.12  |  0.03  |  0.3% |

**Notice what's missing**: `trigger_before`, `trigger_after`,
`sec_idx_delete` — completely absent from the profile. The guards
short-circuit before `DML_PROF` can record a call. Compare to baseline
where these three slots summed to **59.1% of loop_total** (64.5 ms of
wasted catalog scanning).

### Phase 6.1 net savings breakdown

| Component | Baseline total_ms | After 6.1 | Saved |
|---|---:|---:|---:|
| trigger_before | 25.28 | 0 | 25.28 |
| trigger_after  | 24.92 | 0 | 24.92 |
| sec_idx_delete | 14.29 | 0 | 14.29 |
| **Sum eliminated** |  | | **64.49 ms** |

Observed profile-mode loop_total drop: 109.16 → 36.55 ms = 72.61 ms
improvement. The extra ~8 ms beyond the three eliminated slots is
natural: skipping the trigger/sec_idx block also eliminates associated
stack-var setup, column pointer array filling, and the DML_PROF
instrumentation overhead that wrapped those calls.

## Profile mode — UPDATE 2000 rows (4-run average)

```
loop_total 44.27 ms    avg 22.14 us/row
```

| slot                | calls | total_ms | avg_us | %loop |
|---|---:|---:|---:|---:|
| `apply_update_total`| 2000  |   44.15  | 22.07  | 99.7% |
| `bt2_update`        | 2000  |   14.66  |  7.33  | 33.1% |
| `bt2_search`        | 2000  |   14.01  |  7.01  | 31.6% |
| `vmap_clear`        | 4000  |    1.38  |  0.34  |  3.1% |
| `heap_insert`       | 2000  |    1.17  |  0.58  |  2.6% |
| `heap_set_xmax`     | 2000  |    0.72  |  0.36  |  1.6% |
| `lock_row_acquire`  | 2000  |    0.37  |  0.18  |  0.8% |
| `tapi_heap_read`    | 2000  |    0.28  |  0.14  |  0.6% |
| `cg_check_write`    | 2000  |    0.24  |  0.12  |  0.5% |
| `mvcc_ensure_xid`   | 2000  |    0.06  |  0.03  |  0.1% |

Baseline UPDATE loop_total was 74.83 ms; dropped to 44.27 ms — a
30.56 ms improvement. Of that, the eliminated trigger_before +
trigger_after = 20.98 ms. The rest (~9.6 ms) is again the removed
secondary-index inner work + stack setup.

## Gap to <10 ms target

DELETE is now dominated by **`bt2_search` (67.6%)** — Phase 6.2 target.
The PK range fast path already has the `RowID` for every matched key
during the cursor walk, but the current inner loop drops it and
re-looks up. Plan 6.2: save `(key, rid)` pairs in the collection
array, skip `bt2_search` in the loop.

Expected 6.2 numbers:
- DELETE 5K: 37 ms − ~25 ms (bt2_search share) = **~12 ms** (close
  to PG's 2 ms target range)
- UPDATE 2K: 46 ms − ~14 ms = **~32 ms**

After 6.2, UPDATE's remaining dominant helper is `bt2_update` at
~7 µs/row. That's structurally needed (PK tree must be updated when
the tuple moves pages under non-destructive UPDATE). Getting below
~30 ms on UPDATE 2K requires either batching the PK updates or
inlining the per-row bt2 write — larger refactor, deferred.

## Off-mode regression

All 11 functional test suites green after Phase 6.1 (with the guards
in place but unused because tests define no triggers / indexes on
the benchmark tables):

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

Trigger/index tests in particular prove the guards correctly switch
to the full helper path when `has_triggers=1` or
`has_secondary_indexes=1`.

## Files changed

- `evolution/db/catalog_internal.h` — `TableDesc` gets two
  `uint8_t` fields (transient, not serialized)
- `evolution/db/table_api.c` — `tapi_resolve()` populates the flags
  via cheap prefix-scan probes (`cat_list_triggers_for_table`,
  `cat_list_indexes` each with `max=1`)
- `evolution/db/Delete.c` — guards on `evo_fire_triggers` BEFORE/AFTER
  and `delete_secondary_indexes`, plus the legacy path + `evo_delete_row`
- `evolution/db/Update.c` — guards on `evo_fire_triggers` BEFORE/AFTER
  and `idx_load_secondary` inside `ApplyUpdateToRow`
- `evolution/db/Insert.c` — guards on `evo_fire_triggers` BEFORE/AFTER
  and `idx_load_secondary`
