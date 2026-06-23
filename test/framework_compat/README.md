# framework_compat — Multi-Framework Compatibility Suite (Task 220)

Per-framework compatibility tests that exercise the public surface
each adapter promises to support, plus a cross-adapter concurrency
stress test.

## Layout

```
tests/framework_compat/
├── _harness.py              # shared Runner + fresh_conn + assert helpers
├── langgraph/test_lg_compat.py     8 cases — checkpoint + BaseStore
├── langchain/test_lc_compat.py     7 cases — chat history + entity memory
├── llamaindex/test_li_compat.py    8 cases — KV + DocumentStore + ChatBuffer
├── crewai/test_crew_compat.py      6 cases — STM + LTM + entity
├── autogen/test_ag_compat.py       6 cases — Memory protocol
├── mem0_compat/test_m0_compat.py   6 cases — add / search / get / update / delete
└── stress/test_concurrency.py      3 cases — N×M concurrent ops per adapter
```

## Running

A live evosql-server on `127.0.0.1:9967` (admin/admin) is required
and the C SDK shared library must be built:

```bash
docker compose up -d
make -C client/libevosql-memory

# One framework
python3 tests/framework_compat/langgraph/test_lg_compat.py

# Stress harness — defaults to 16 workers × 50 ops
python3 tests/framework_compat/stress/test_concurrency.py
FCOMPAT_STRESS_WORKERS=64 FCOMPAT_STRESS_OPS=200 \
    python3 tests/framework_compat/stress/test_concurrency.py
```

Set `FCOMPAT_TRACEBACK=1` to dump tracebacks on every failure.

## CI

`.github/workflows/framework-compat.yml` runs every framework as a
separate matrix job on push/PR to main, plus the stress harness. The
matrix is fail-fast=false so a single framework regression doesn't
hide failures elsewhere.

## Adding a framework

1. Create `tests/framework_compat/<name>/test_<name>_compat.py`.
2. Import the harness:
   ```python
   from _harness import Runner, fresh_conn, drop_if_exists, assert_eq
   runner = Runner("My framework compatibility")
   ```
3. Write `@runner.case("...")` decorated test bodies.
4. End with `runner.finish()` so the file exits non-zero on failure.
5. Add the file to the matrix in
   `.github/workflows/framework-compat.yml`.
