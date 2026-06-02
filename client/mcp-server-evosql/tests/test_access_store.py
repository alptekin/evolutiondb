"""
test_access_store — unified access side-store (roadmap step 3).

A read records retrieval_count + a capped `uses` epoch history on top of
last_accessed, and preserves fields other passes write (stability, rif_penalty).
Skipped without a server on EVOSQL_PG_PORT (default 5520).
"""
from __future__ import annotations

import json
import os
import sys
import time

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def _backend(prefix):
    from mcp_server_evosql.server import MemoryBackend
    return MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)


def main() -> int:
    try:
        import psycopg
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP (no server on :{PORT}: {exc})")
        return 0
    os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "none"
    os.environ["EVOSQL_EMBEDDING_MODEL_2"] = ""
    from mcp_server_evosql.server import ACCESS_USES_CAP
    ns = f"acc_{int(time.time())}"
    b = _backend(f"mcp_acc{int(time.time())}")

    # count + uses accumulate across reads
    for _ in range(3):
        b._touch_access(ns, ["k1"])
    rec = b._access_records(ns, ["k1"]).get("k1")
    assert rec, "k1 access record missing"
    assert rec["retrieval_count"] == 3, f"count={rec.get('retrieval_count')}"
    assert len(rec["uses"]) == 3 and "last_accessed" in rec, rec
    print(f"  ok  3 reads -> retrieval_count=3, uses=3, last_accessed set")

    # uses history is capped, count keeps growing past the cap
    for _ in range(ACCESS_USES_CAP + 8):
        b._touch_access(ns, ["k1"])
    rec = b._access_records(ns, ["k1"])["k1"]
    assert len(rec["uses"]) == ACCESS_USES_CAP, f"uses not capped: {len(rec['uses'])}"
    assert rec["retrieval_count"] == 3 + ACCESS_USES_CAP + 8, rec["retrieval_count"]
    print(f"  ok  uses capped at {ACCESS_USES_CAP}, count keeps growing")

    # fields written by other passes survive a read
    from mcp_server_evosql.server import _e
    b._exec(f"MEMORY PUT INTO {b.access_store} VALUES "
            f"('{_e(ns)}','k2','{_e(json.dumps({'stability': 7.5, 'rif_penalty': 0.2}))}')")
    b._touch_access(ns, ["k2"])
    rec = b._access_records(ns, ["k2"])["k2"]
    assert rec["stability"] == 7.5 and rec["rif_penalty"] == 0.2, \
        f"other fields lost on touch: {rec}"
    assert rec["retrieval_count"] == 1, rec
    print("  ok  stability/rif_penalty preserved across a read")
    print("OK — step 3 unified access side-store")
    return 0


if __name__ == "__main__":
    sys.exit(main())
