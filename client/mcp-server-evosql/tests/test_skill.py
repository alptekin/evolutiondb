"""
test_skill — procedural / skill memory (roadmap step 34).

save_skill records a reusable how-to; find_skill retrieves the one matching a
task; record_skill_outcome tracks success/fail. Skipped without a server.
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
        from mcp_server_evosql.server import MemoryBackend, _e
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP (no server on :{PORT}: {exc})")
        return 0
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    ns = f"skl_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_skl{int(time.time())}")
    kd = b.save_skill(ns, "deploy", "deploy the application to production servers",
                      steps=["build", "push", "switch traffic"], trigger="release")
    b.save_skill(ns, "rollback", "roll back a bad release to the previous version",
                 steps=["select prev", "switch traffic"], trigger="incident")

    hits = b.find_skill(ns, "how do I deploy to production")
    assert hits and hits[0]["name"] == "deploy", [h["name"] for h in hits]
    assert hits[0]["steps"] == ["build", "push", "switch traffic"]
    print(f"  ok  find_skill returns the matching how-to ({hits[0]['name']})")

    # outcome counters
    b.record_skill_outcome(ns, kd, success=True)
    b.record_skill_outcome(ns, kd, success=True)
    b.record_skill_outcome(ns, kd, success=False)
    rec = json.loads(b._fetch_by_keys(b.skill_store, ns, [kd])[0][1])
    assert rec["success_count"] == 2 and rec["fail_count"] == 1, rec
    print("  ok  record_skill_outcome tracks success/fail (2/1)")

    # unrelated task -> no skill
    assert b.find_skill(ns, "xyzzy plugh nothing matches") == []
    print("  ok  no matching skill -> empty")

    print("OK — step 34 procedural / skill memory")
    return 0


if __name__ == "__main__":
    sys.exit(main())
