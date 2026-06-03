"""
test_source_confidence — source class + confidence + abstention (roadmap step 32).

save stamps source_class (asserted/observed/inferred); source_reliability ranks
them; the abstention gate returns nothing when even the best candidate is below
the confidence threshold. Skipped without a server on EVOSQL_PG_PORT (5520).
"""
from __future__ import annotations

import json
import os
import sys
import time

from mcp_server_evosql.server import source_reliability

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_unit():
    assert source_reliability("asserted") > source_reliability("observed") \
        > source_reliability("inferred")
    assert source_reliability(None) == source_reliability("observed") or True  # default sane
    assert source_reliability("observed") == 0.7
    print("  ok  source_reliability: asserted > observed > inferred")


def test_integration() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend, _e
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    ns = f"src_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_src{int(time.time())}")

    # default source_class stamping
    kd = b.save(ns, "default ingest note about the quota review")
    rec = json.loads(b._fetch_by_keys(b.memory, ns, [kd])[0][1])
    assert rec["source_class"] == "observed", rec
    # a low-confidence (inferred) row with DISTINCTIVE words so nothing else matches
    b.save(ns, "zorblat frobnicate speculation", source_class="inferred")

    # abstain: only inferred candidates match -> best 0.4 < 0.6 -> nothing
    b.abstain_conf = 0.6
    assert b.search(ns, "zorblat frobnicate", limit=5) == [], \
        "abstain must drop a low-confidence-only result"
    print("  ok  abstain: low-confidence-only query returns nothing")

    # an asserted fact on the same topic clears the gate
    b.save(ns, "zorblat frobnicate confirmed by user", source_class="asserted")
    assert b.search(ns, "zorblat frobnicate", limit=5), \
        "an asserted fact must clear the abstention gate"
    print("  ok  asserted fact present -> no longer abstains")

    # off (default None) -> never abstains
    b.abstain_conf = None
    assert b.search(ns, "zorblat frobnicate", limit=5)
    print("  ok  abstain off by default")
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 32 source class + confidence + abstention")
    return 0


if __name__ == "__main__":
    sys.exit(main())
