"""
test_semantic_store — the semantic tier (roadmap step 15).

save_semantic writes a timeless generalization to the separate _semantic store,
tagged tier='semantic' with an abstraction_level and derived_from provenance.
Skipped without a server on EVOSQL_PG_PORT (default 5520).
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
    ns = f"sem_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_sem{int(time.time())}")

    key = b.save_semantic(ns, "the user prefers fixing the root cause over "
                          "patching symptoms",
                          derived_from=["k1", "k2", "k3"], abstraction_level=1)
    assert key.startswith("sem_"), key

    from mcp_server_evosql.server import _e
    rows = b._query(f"SELECT mem_value FROM __mem_{b.semantic_store} "
                    f"WHERE mem_namespace = '{_e(ns)}' AND mem_key = '{_e(key)}'")
    assert rows and rows[0] and rows[0][0], "semantic row not written"
    rec = json.loads(rows[0][0])
    assert rec["tier"] == "semantic", rec
    assert rec["abstraction_level"] == 1, rec
    assert rec["synthesized"] is True, rec
    assert rec["derived_from"] == ["k1", "k2", "k3"], rec
    assert "semantic" in rec["tags"], rec
    assert rec["fact"].startswith("the user prefers"), rec
    print("  ok  semantic row round-trips with tier/level/provenance, key=sem_*")
    print("OK — step 15 semantic store")
    return 0


if __name__ == "__main__":
    sys.exit(main())
