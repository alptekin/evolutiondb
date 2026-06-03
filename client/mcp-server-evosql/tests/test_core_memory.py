"""
test_core_memory — core / working-memory tier (roadmap step 36).

Named mutable blocks the agent keeps in context: get / append / replace, bounded
by max_chars. Skipped without a server on EVOSQL_PG_PORT (5520).
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
    ns = f"core_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_core{int(time.time())}")

    b.core_memory_append(ns, "human", "name is Alptekin")
    b.core_memory_append(ns, "human", "prefers root-cause fixes")
    b.core_memory_replace(ns, "persona", "a careful database engineer")

    h = b.core_memory_get(ns, "human")["human"]
    assert "Alptekin" in h and "root-cause" in h and "\n" in h, h
    allb = b.core_memory_get(ns)
    assert set(allb) == {"human", "persona"} and allb["persona"].startswith("a careful")
    print("  ok  append builds a block, replace sets one, get returns all")

    # replace overwrites (not append)
    b.core_memory_replace(ns, "human", "name is A. Topal")
    assert b.core_memory_get(ns, "human")["human"] == "name is A. Topal"
    print("  ok  replace overwrites the block")

    # max_chars bound enforced
    b.core_max_chars = 20
    stored = b.core_memory_replace(ns, "persona", "x" * 200)
    assert len(stored) == 20 and b.core_memory_get(ns, "persona")["persona"] == stored
    print("  ok  max_chars bound enforced on overflow")

    print("OK — step 36 core / working-memory tier")
    return 0


if __name__ == "__main__":
    sys.exit(main())
