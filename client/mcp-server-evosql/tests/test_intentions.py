"""
test_intentions — prospective memory (roadmap step 35).

Time-based intentions fire when due; event-based fire when their cue entity is
mentioned; the scheduler job fires the due ones. Skipped without a server.
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
        from mcp_server_evosql.server import MemoryBackend
        from mcp_server_evosql.scheduler import job_intentions
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP (no server on :{PORT}: {exc})")
        return 0
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    ns = f"int_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_int{int(time.time())}")
    now = time.time()
    past = b.add_intention(ns, "email the quarterly report", due_ts=now - 60)
    b.add_intention(ns, "renew the domain", due_ts=now + 86400)          # future
    ev = b.add_intention(ns, "ask about the migration", cue_entity="e_db")

    # time-based: only the past-due one is due
    due = b.due_intentions(ns)
    assert [d["key"] for d in due] == [past], [d["key"] for d in due]
    print("  ok  due_intentions returns only the past-due time intention")

    # event-based: fires when the cue entity is mentioned
    fired = b.fire_event_intentions(ns, ["e_db", "e_other"])
    assert [f["key"] for f in fired] == [ev], fired
    print("  ok  event intention fires on its cue entity")

    # the scheduler job fires due time intentions
    n = job_intentions(b, ns)
    assert n == 1, n                          # the past one
    rec = json.loads(b._fetch_by_keys(b.intentions_store, ns, [past])[0][1])
    assert rec["status"] == "fired" and rec.get("fired_at"), rec
    # already fired -> not due again
    assert b.due_intentions(ns) == []
    print("  ok  scheduler job fires due intentions, marks them fired (once)")

    print("OK — step 35 prospective memory")
    return 0


if __name__ == "__main__":
    sys.exit(main())
