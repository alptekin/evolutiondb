"""
test_closed_loop — the learned loop passes the longitudinal gate (roadmap step 28).

Reuses the step-7 longitudinal harness with the CLOSED-LOOP learn_fn
(recompute_utilities + fit_ranker). With EVOSQL_LEARNED_RANK on, a row credited
by feedback rises above a no-feedback control after the learning step — the
system improves from USE, gated by the same PR test that gates every learning
change. Skipped without a server on EVOSQL_PG_PORT (default 5520).
"""
from __future__ import annotations

import os
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from test_longitudinal_learning import run_longitudinal     # the shared gate

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
                       "EVOSQL_LEARNED_RANK": "1"})       # the closed loop on
    ns = f"cl_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_cl{int(time.time())}")
    # identical rows so the base ranking ties: only what we LEARN can move one
    ks = [b.save(ns, "release checklist deployment runbook step") for _ in range(8)]
    target, control = ks[5], ks[2]

    def closed_loop(backend, ns):
        backend.recompute_utilities(ns)        # row-identity from feedback
        backend.fit_ranker(ns)                 # learned feature blend

    rb, ra, cb, ca = run_longitudinal(
        b, ns, "release checklist deployment runbook", target, control,
        closed_loop)
    print(f"  target  rank: before={rb} after={ra}")
    print(f"  control rank: before={cb} after={ca}")
    assert ra < rb, f"closed loop did not improve the fed-back row: {rb}->{ra}"
    assert ra < ca, f"target {ra} not above no-feedback control {ca}"
    print("  ok  closed-loop learning lifts the used row above the control "
          "(held-out longitudinal gate)")

    os.environ.pop("EVOSQL_LEARNED_RANK", None)
    print("OK — step 28 closed loop passes the longitudinal gate")
    return 0


if __name__ == "__main__":
    sys.exit(main())
