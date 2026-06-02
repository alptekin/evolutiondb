"""
test_validity_store — bitemporal validity side store (roadmap step 19).

_set_validity writes/merges a validity record (valid_from preserved on update,
supersession lists unioned, status set each call); _validity_map reads it.
Skipped without a server on EVOSQL_PG_PORT (default 5520).
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
    os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "none"
    os.environ["EVOSQL_EMBEDDING_MODEL_2"] = ""
    ns = f"val_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_val{int(time.time())}")

    # first write: active, valid_from defaults to now
    r = b._set_validity(ns, "k1")
    assert r["status"] == "active" and r["valid_from"] and r["valid_to"] is None
    vf = r["valid_from"]
    got = b._validity_map(ns, ["k1"]).get("k1")
    assert got and got["status"] == "active", got
    # a key with no record is simply absent (treated active by readers)
    assert "kX" not in b._validity_map(ns, ["kX"])
    print("  ok  first write: active, valid_from set, missing key absent")

    # update to stale: valid_from preserved, valid_to + superseded_by set
    now = time.time()
    r = b._set_validity(ns, "k1", valid_to=now, status="stale",
                        superseded_by=["k2"])
    assert r["valid_from"] == vf, "valid_from must be preserved on update"
    assert r["status"] == "stale" and r["valid_to"] == now
    assert r["superseded_by"] == ["k2"], r
    print("  ok  update -> stale: valid_from preserved, valid_to + superseded_by set")

    # lists union across calls (no duplicates, no loss)
    r = b._set_validity(ns, "k1", status="stale", superseded_by=["k3", "k2"])
    assert r["superseded_by"] == ["k2", "k3"], r["superseded_by"]
    print("  ok  superseded_by unioned across updates")

    print("OK — step 19 validity store")
    return 0


if __name__ == "__main__":
    sys.exit(main())
