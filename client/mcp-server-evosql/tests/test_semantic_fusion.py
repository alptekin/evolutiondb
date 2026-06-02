"""
test_semantic_fusion — fuse semantic candidates into search (roadmap step 17).

A query gets both episodic rows and the semantic generalization, fused in the
same ranking; EVOSQL_SEMANTIC_SEARCH=0 is the kill-switch. Skipped without a
server on EVOSQL_PG_PORT (default 5520).
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
    os.environ["EVOSQL_SEMANTIC_SEARCH"] = "1"     # opt-in (default off)

    ns = f"sfx_{int(time.time())}"
    b = _backend(f"mcp_sfx{int(time.time())}")
    ep = [b.save(ns, f"meeting notes about the payment gateway integration {i}")
          for i in range(4)]
    sem_key = b.save_semantic(
        ns, "the user consistently works on payment gateway projects",
        derived_from=ep, abstraction_level=1)

    res = b.search(ns, "payment gateway", limit=10)
    keys = [r["key"] for r in res]
    assert sem_key in keys, f"semantic generalization not fused: {keys}"
    sem_row = next(r for r in res if r["key"] == sem_key)
    assert sem_row.get("tier") == "semantic", sem_row
    # both tiers present: episodic + semantic
    assert any(k in keys for k in ep), "episodic rows missing"
    print(f"  ok  search fuses semantic ({sem_key}) alongside episodic rows")

    # kill-switch: flip the flag on the SAME populated store, so the assertion
    # actually exercises gating (not cross-prefix table isolation).
    b.semantic_search = False
    res2 = b.search(ns, "payment gateway", limit=10)
    assert sem_key not in [r["key"] for r in res2], "kill-switch did not disable fusion"
    b.semantic_search = True
    os.environ.pop("EVOSQL_SEMANTIC_SEARCH", None)
    print("  ok  kill-switch disables fusion on the same populated store")

    print("OK — step 17 semantic+episodic RRF fusion")
    return 0


if __name__ == "__main__":
    sys.exit(main())
