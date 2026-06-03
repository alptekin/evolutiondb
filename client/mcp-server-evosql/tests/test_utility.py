"""
test_utility — per-row utility from feedback (roadmap step 25).

Unit: update_utility is the ACT-R delta rule; accumulate_utilities drives a used
row's utility up and an unused row's down, query-conditioned by centroid.
Integration (skipped without a server): repeated feedback lifts the used row's
utility above the unused rows'.
"""
from __future__ import annotations

import os
import sys
import time

from mcp_server_evosql.learn import (update_utility, accumulate_utilities,
                                      UTILITY_PRIOR)

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_unit():
    assert abs(update_utility(0.5, 1.0, 0.2) - 0.6) < 1e-9
    assert abs(update_utility(0.5, 0.0, 0.2) - 0.4) < 1e-9
    # repeated reward converges toward 1
    u = UTILITY_PRIOR
    for _ in range(50):
        u = update_utility(u, 1.0, 0.2)
    assert u > 0.99
    print("  ok  update_utility: delta rule converges to the hit rate")

    rec = {"used_keys": ["k1"], "trace": [{"key": "k1", "rank": 0, "scores": {}},
                                          {"key": "k2", "rank": 1, "scores": {}}]}
    U = accumulate_utilities([rec] * 5)                 # 5 rounds, global centroid
    assert U["g:k1"] > UTILITY_PRIOR > U["g:k2"], U
    # centroid conditioning: same rows under a different context are separate
    U2 = accumulate_utilities([rec] * 3, centroid_fn=lambda r: "ctx7")
    assert "ctx7:k1" in U2 and "g:k1" not in U2
    print("  ok  accumulate: used up / unused down, centroid-keyed")


def test_integration() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    ns = f"util_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_util{int(time.time())}")
    ks = [b.save(ns, f"the annual security audit checklist item {i}")
          for i in range(5)]
    target = ks[0]
    for i in range(6):
        res = b.search(ns, "annual security audit checklist", limit=5)
        b.log_query(ns, f"q{i}", "annual security audit checklist",
                    [r["key"] for r in res])
        b.feedback(ns, f"q{i}", used_keys=[target])

    n = b.recompute_utilities(ns)
    assert n > 0, "no utilities written"
    umap = b._utility_map(ns, ks)
    assert umap.get(target, 0) > UTILITY_PRIOR, f"used row utility not lifted: {umap}"
    others = [umap.get(k, UTILITY_PRIOR) for k in ks[1:] if k in umap]
    assert all(u < UTILITY_PRIOR for u in others), f"unused rows not lowered: {umap}"
    print(f"  ok  feedback lifts used row utility ({umap.get(target):.2f}) "
          f"above unused")
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 25 per-row utility")
    return 0


if __name__ == "__main__":
    sys.exit(main())
