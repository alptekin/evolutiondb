"""
test_reconsolidate — recall-time reconsolidation (roadmap step 29).

A REFINE/CONTRADICT verdict writes a new #vN version carrying the correction,
supersedes the old row, and marks it stale (kept for audit); CONFIRM leaves it;
opt-in (no judge/env) is a no-op. Skipped without a server on EVOSQL_PG_PORT.
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
        from mcp_server_evosql.server import MemoryBackend, _e
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP (no server on :{PORT}: {exc})")
        return 0
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    os.environ.pop("EVOSQL_RECONSOLIDATE_LLM", None)
    ns = f"rcs_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_rcs{int(time.time())}")
    k = b.save(ns, "the deploy window is fridays at noon")

    # opt-in: no judge + no env -> no-op
    assert b.reconsolidate(ns, k, "the deploy window moved to mondays") is None
    print("  ok  no judge -> no-op (opt-in)")

    # CONFIRM -> unchanged
    assert b.reconsolidate(ns, k, "fridays still fine",
                           judge=lambda o, c: "CONFIRM") is None

    # REFINE -> new version supersedes the old, old marked stale
    nk = b.reconsolidate(ns, k, "the deploy window is now mondays at 9am",
                         judge=lambda o, c: "REFINE")
    assert nk == f"{k}#v2", nk
    rows = b._query(f"SELECT mem_value FROM __mem_{b.memory} "
                    f"WHERE mem_namespace = '{_e(ns)}' AND mem_key = '{_e(nk)}'")
    nrec = json.loads(rows[0][0])
    assert nrec["fact"].startswith("the deploy window is now mondays")
    assert nrec["version"] == 2 and nrec["supersedes"] == k
    ov = b._validity_map(ns, [k]).get(k)
    assert ov and ov["status"] == "stale" and ov["superseded_by"] == [nk], ov
    nv = b._validity_map(ns, [nk]).get(nk)
    assert nv and nv["supersedes"] == [k] and nv["status"] == "active", nv
    # old version kept (labile != deleted) — still physically present
    assert b._fetch_by_keys(b.memory, ns, [k])[0][1], "old version must be kept"
    print("  ok  REFINE -> #v2 supersedes, old stale + kept for audit")

    print("OK — step 29 reconsolidation")
    return 0


if __name__ == "__main__":
    sys.exit(main())
