"""
test_knowledge_update — knowledge_update passes end to end (roadmap step 23).

Ties the step-5 metric (update_correct: new fact recalled AND stale fact absent)
to the step 19-22 belief-revision machinery: with the validity gate on, a
superseded fact is dropped, so the knowledge_update query scores 1.0; with the
gate off the stale fact resurfaces and it scores 0.0. Skipped without a server
on EVOSQL_PG_PORT (default 5520).
"""
from __future__ import annotations

import os
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))   # tests/
import eval_memory_quality as E   # sets up the MCP import path + update_correct

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
                       "EVOSQL_EMBEDDING_MODEL_2": "",
                       "EVOSQL_VALIDITY_GATE": "1"})
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_ku{int(time.time())}")
    ns = f"ku_{int(time.time())}"
    k_old = b.save(ns, "the user works at acme corporation")
    k_new = b.save(ns, "the user works at globex corporation")
    # belief revision marks the old fact stale (as reconcile_on_save would)
    b._set_validity(ns, k_old, status="stale", superseded_by=[k_new])

    returned = [r["key"] for r in b.search(ns, "where does the user work "
                                           "corporation", limit=10)]
    # the knowledge_update gold: ideal=[k_new], forbidden=[k_old]
    score = E.update_correct(returned, [k_new], [k_old], k=10)
    assert score == 1.0, (f"knowledge_update failed: new recalled? "
                          f"{k_new in returned}, old absent? {k_old not in returned}")
    print("  ok  with belief revision: new fact recalled, stale fact absent "
          "-> update_correct=1.0")

    # control: gate off -> the stale fact resurfaces -> the query fails
    b.validity_gate = False
    returned_off = [r["key"] for r in b.search(ns, "where does the user work "
                                               "corporation", limit=10)]
    score_off = E.update_correct(returned_off, [k_new], [k_old], k=10)
    assert score_off == 0.0, "without the gate the stale fact must resurface (0.0)"
    print("  ok  control (gate off): stale fact resurfaces -> update_correct=0.0")

    os.environ.pop("EVOSQL_VALIDITY_GATE", None)
    print("OK — step 23 knowledge_update passes end to end")
    return 0


if __name__ == "__main__":
    sys.exit(main())
