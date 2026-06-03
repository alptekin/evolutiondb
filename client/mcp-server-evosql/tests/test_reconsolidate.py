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

    # reconsolidate the SAME base key a SECOND time: must resolve to the head
    # (k#v2) and mint k#v3, NOT clobber k#v2 (atomic upsert = silent data loss)
    nk3 = b.reconsolidate(ns, k, "actually the deploy window is wednesdays",
                          judge=lambda o, c: "REFINE")
    assert nk3 == f"{k}#v3", nk3
    # both corrections survive, distinct and readable
    v2 = b._fetch_by_keys(b.memory, ns, [nk])
    v3 = b._fetch_by_keys(b.memory, ns, [nk3])
    assert v2 and v2[0][1] and v3 and v3[0][1], (v2, v3)
    r2, r3 = json.loads(v2[0][1]), json.loads(v3[0][1])
    assert r2["fact"].startswith("the deploy window is now mondays"), r2["fact"]
    assert r3["fact"].startswith("actually the deploy window is wednesdays"), r3["fact"]
    assert r3["version"] == 3 and r3["supersedes"] == nk, r3
    # the head chain advanced: v2 now stale, v3 active
    assert b._validity_map(ns, [nk]).get(nk, {}).get("status") == "stale"
    assert b._validity_map(ns, [nk3]).get(nk3, {}).get("status") == "active"
    print("  ok  second REFINE on base key -> #v3 (no clobber, both kept)")

    print("OK — step 29 reconsolidation")
    return 0


if __name__ == "__main__":
    sys.exit(main())
