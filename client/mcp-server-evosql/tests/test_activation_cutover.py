"""
test_activation_cutover — wiring A_i into search behind a flag (roadmap step 14).

OFF (default): activation is disabled, ranking unchanged.
ON: a row with a rich use history (high base-level B_i) outranks identical rows
never retrieved.
Threshold: a high tau makes the memory abstain (return nothing).
Skipped without a server on EVOSQL_PG_PORT (default 5520).
"""
from __future__ import annotations

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

    # OFF by default
    os.environ.pop("EVOSQL_ACTIVATION", None)
    boff = _backend(f"mcp_aco{int(time.time())}")
    assert boff.activation_enabled is False
    ns = f"acto_{int(time.time())}"
    keys = [boff.save(ns, "alpha report budget quarterly") for _ in range(6)]
    res_off = boff.search(ns, "alpha report budget quarterly", limit=6)
    assert len(res_off) == 6, f"off ranking should return all 6: {len(res_off)}"
    print("  ok  OFF: activation disabled, ranking unchanged (6 rows)")

    # ON: build a use history on one row, it should rise to the top
    os.environ["EVOSQL_ACTIVATION"] = "1"
    b = _backend(f"mcp_acn{int(time.time())}")
    assert b.activation_enabled is True
    ns2 = f"actn_{int(time.time())}"
    ks = [b.save(ns2, "alpha report budget quarterly") for _ in range(6)]
    target = ks[3]
    for _ in range(10):
        b._touch_access(ns2, [target])           # rich retrieval history
    res_on = b.search(ns2, "alpha report budget quarterly", limit=6)
    assert res_on and res_on[0]["key"] == target, \
        f"the heavily-used row must rank #1 under A_i: {[r['key'] for r in res_on][:3]}"
    print(f"  ok  ON: heavily-retrieved row rose to rank #1 via base-level B_i")

    # abstention: a high threshold returns nothing ("can't recall")
    b.act_tau = 100.0
    assert b.search(ns2, "alpha report budget quarterly", limit=6) == []
    print("  ok  high tau -> abstention (empty result)")

    print("OK — step 14 unified-activation cutover (flagged)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
