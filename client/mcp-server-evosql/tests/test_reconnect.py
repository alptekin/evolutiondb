"""
test_reconnect.py — MemoryBackend recovers from a stale DB connection.

Long-running MCP server processes (Claude Desktop / Claude Code stay
open for days) outlive the database container they connect to. Without
retry, the next tool call after a `docker compose restart` returns
"the connection is closed" and the user has to restart the entire MCP
host to recover.

This test simulates that exact failure:
    1. Open a MemoryBackend, run a successful save_memory.
    2. Forcibly close the underlying psycopg connection (mimics a
       network drop / container restart from the client's point of view).
    3. Run another save_memory — the backend must reconnect and succeed.

Pre-req: a live EvolutionDB on 127.0.0.1:5433 (the same one the
broader test suite uses; `docker compose up -d` from the repo root).
"""

from __future__ import annotations

import os
import sys
import uuid
import time

# Make the in-tree package importable
HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, os.path.join(HERE, ".."))

from mcp_server_evosql.server import MemoryBackend  # noqa: E402

PASS = 0
FAIL = 0


def check(label, ok, detail=""):
    global PASS, FAIL
    if ok:
        PASS += 1
        print(f"  PASS  {label}")
    else:
        FAIL += 1
        print(f"  FAIL  {label}{(' — ' + detail) if detail else ''}")


def main():
    prefix = f"reconnect_{uuid.uuid4().hex[:6]}"
    backend = MemoryBackend(
        host="127.0.0.1", port=5433,
        user="admin", password="admin",
        database="testdb", prefix=prefix,
    )

    user_id = "reconnect_test"

    # 1. Healthy save
    key1 = backend.save(user_id, "first fact before drop", tags=["before"])
    check("first save_memory succeeds on a fresh connection",
          key1 and key1.startswith("mem_"))

    # 2. Forcibly kill the connection — same shape as a docker restart
    try:
        backend.conn.close()
    except Exception:
        pass
    check("psycopg connection forcibly closed",
          backend.conn.closed)

    # 3. Next save MUST recover via _with_retry's reconnect loop
    t0 = time.time()
    try:
        key2 = backend.save(user_id, "second fact after drop", tags=["after"])
        recovered = key2 and key2.startswith("mem_")
        elapsed = time.time() - t0
        check("save_memory after connection drop reconnects + succeeds",
              recovered, f"key={key2!r}")
        check("recovery happens in under 5s",
              elapsed < 5.0, f"took {elapsed:.2f}s")
    except Exception as exc:
        check("save_memory after connection drop reconnects + succeeds",
              False, f"raised {type(exc).__name__}: {exc}")

    # 4. The recovered backend continues to behave normally
    results = backend.search(user_id, "fact")
    check("search_memory after reconnect returns both saved facts",
          len(results) == 2, f"got {len(results)} results: {results}")

    # 5. recent_memories still works
    recent = backend.recent(user_id, limit=10)
    check("recent_memories after reconnect returns both rows",
          len(recent) == 2, f"got {len(recent)}")

    # 6. Cleanup
    for r in recent:
        backend.forget(user_id, r["key"])
    try:
        with backend.conn.cursor() as cur:
            cur.execute(f"DROP MEMORY STORE IF EXISTS {prefix}_mem")
            cur.execute(f"DROP ENTITY STORE IF EXISTS {prefix}_ents")
    except Exception:
        pass
    backend.conn.close()

    total = PASS + FAIL
    print(f"\n  {PASS}/{total} pass")
    sys.exit(0 if FAIL == 0 else 1)


if __name__ == "__main__":
    main()
