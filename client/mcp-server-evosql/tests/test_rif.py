"""
test_rif — retrieval-induced (interference) forgetting (roadmap step 30).

Unit: decay_score multiplies by (1 - rif_penalty); near_dup_competitors finds
the out-competed near-duplicates.
Integration (skipped without a server): a row with a heavy rif penalty is
archived by the decay pass while its un-penalized near-duplicate stays active.
"""
from __future__ import annotations

import json
import os
import sys
import time

from mcp_server_evosql.decay import decay_score, near_dup_competitors

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_unit():
    now = 1_000_000.0
    assert decay_score(0.5, now, now) == 0.5
    assert abs(decay_score(0.5, now, now, rif_penalty=0.5) - 0.25) < 1e-9
    assert decay_score(0.5, now, now, rif_penalty=0.9) < 0.06   # heavily forgotten
    # near-dup detection
    comp = near_dup_competitors([1.0, 0.0], {"a": [1.0, 0.02], "b": [0.0, 1.0]},
                                thresh=0.92)
    assert comp == ["a"], comp
    print("  ok  decay_score (1-rif) factor + near_dup_competitors")


def test_integration() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend, _e
        from mcp_server_evosql import decay
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    ns = f"rif_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_rif{int(time.time())}")
    k1 = b.save(ns, "the standup is at nine every weekday morning")
    k2 = b.save(ns, "the standup is at nine every weekday morning")   # near-dup

    b._bump_rif(ns, [k1], delta=0.95)        # k1 was repeatedly out-competed
    decay.decay_pass(b, ns)

    def archived(k):
        v = b._fetch_by_keys(b.memory, ns, [k])[0][1]
        return bool(json.loads(v).get("archived"))

    assert archived(k1) and not archived(k2), \
        "the out-competed near-dup must fade while its winner stays"
    print("  ok  rif penalty archives the out-competed near-dup, keeps the winner")
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 30 retrieval-induced forgetting")
    return 0


if __name__ == "__main__":
    sys.exit(main())
