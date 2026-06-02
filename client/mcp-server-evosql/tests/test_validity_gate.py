"""
test_validity_gate — active-record gate in retrieval (roadmap step 21).

A row marked stale in the validity store is dropped from search (a superseded
fact stops out-ranking the current one); the gate is a no-op when off and when
no validity records exist. Skipped without a server on EVOSQL_PG_PORT (5520).
"""
from __future__ import annotations

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
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})

    # default off (no reconcile, no explicit gate)
    os.environ.pop("EVOSQL_VALIDITY_GATE", None)
    os.environ.pop("EVOSQL_RECONCILE", None)
    bdef = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                         f"mcp_vg0{int(time.time())}")
    assert bdef.validity_gate is False, "gate must default off"

    os.environ["EVOSQL_VALIDITY_GATE"] = "1"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_vg{int(time.time())}")
    assert b.validity_gate is True
    ns = f"vg_{int(time.time())}"
    k1 = b.save(ns, "the user lives in portland city")
    k2 = b.save(ns, "the user lives in seattle city")

    keys = [r["key"] for r in b.search(ns, "user lives city", limit=10)]
    assert k1 in keys and k2 in keys, f"both active before gating: {keys}"

    # supersede k1 -> it must drop out of present-time search
    b._set_validity(ns, k1, status="stale", superseded_by=[k2])
    keys2 = [r["key"] for r in b.search(ns, "user lives city", limit=10)]
    assert k1 not in keys2, f"stale row not gated out: {keys2}"
    assert k2 in keys2, "current row must remain"
    print("  ok  stale row dropped from present-time search; current row remains")

    # gate off -> stale row reappears (no-op when disabled)
    b.validity_gate = False
    keys3 = [r["key"] for r in b.search(ns, "user lives city", limit=10)]
    assert k1 in keys3, "gate off must not drop the stale row"
    b.validity_gate = True
    print("  ok  gate off is a no-op (stale row reappears)")

    os.environ.pop("EVOSQL_VALIDITY_GATE", None)
    print("OK — step 21 active-record gate")
    return 0


if __name__ == "__main__":
    sys.exit(main())
