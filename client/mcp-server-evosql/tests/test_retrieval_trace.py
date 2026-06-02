"""
test_retrieval_trace — per-query feature logging (roadmap step 4).

A search followed by log_query records a `trace` of {key, rank, scores} aligned
to the returned keys — the labelled-feature backbone for the learned controller
and eval. The returned page itself stays clean (no internal _score fields leak
to the model). Skipped without a server on EVOSQL_PG_PORT (default 5520).
"""
from __future__ import annotations

import json
import os
import sys
import time

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def main() -> int:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP (no server on :{PORT}: {exc})")
        return 0
    os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "none"
    os.environ["EVOSQL_EMBEDDING_MODEL_2"] = ""
    ns = f"trace_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_tr{int(time.time())}")
    for i in range(6):
        b.save(ns, f"the quarterly budget report for project alpha number {i}")

    results = b.search(ns, "budget report project alpha", limit=4)
    assert results, "search returned nothing"
    keys = [r["key"] for r in results]

    # the page handed to the model must not leak internal scoring fields
    leaked = [k for r in results for k in r
              if k in ("_bge", "_e5", "_kw", "_haystack", "_psim", "_scores")]
    assert not leaked, f"internal fields leaked to the model: {set(leaked)}"

    # log_query records a trace aligned to the returned keys
    qid = "q_test_1"
    b.log_query(ns, qid, "budget report project alpha", keys)
    from mcp_server_evosql.server import _e
    rec = b._query(f"SELECT mem_value FROM __mem_{b.feedback_store} "
                   f"WHERE mem_namespace = '{_e(ns)}' AND mem_key = '{_e(qid)}'")
    assert rec and rec[0] and rec[0][0], "feedback record not written"
    fb = json.loads(rec[0][0])
    trace = fb.get("trace")
    assert trace and len(trace) == len(keys), f"trace missing/short: {trace}"
    for i, (t, k) in enumerate(zip(trace, keys)):
        assert t["key"] == k and t["rank"] == i, f"trace misaligned at {i}: {t}"
        sc = t["scores"]
        for f in ("bge", "e5", "kw", "hybrid", "final"):
            assert f in sc, f"score component '{f}' missing: {sc}"
    print(f"  ok  trace logged: {len(trace)} rows, aligned, features present; "
          f"page clean")
    print("OK — step 4 retrieval-trace logging")
    return 0


if __name__ == "__main__":
    sys.exit(main())
