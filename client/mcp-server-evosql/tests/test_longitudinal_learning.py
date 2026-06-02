"""
test_longitudinal_learning — does the memory improve from USE? (roadmap step 7).

The keystone test: ingest a session, run a query, report feedback on the keys
that were actually useful, run the learning job, then assert the fed-back key
ranks HIGHER than before AND higher than a no-feedback control key. Without this
the "memory that learns" claim is unfalsifiable.

Today the "learning job" is salience.recompute (it already has a feedback term);
when the closed-loop learned controller lands (steps 24-28) it plugs into the
same `learn_fn` harness here, which becomes its PR gate.

Skipped without a server on EVOSQL_PG_PORT (default 5520).
"""
from __future__ import annotations

import os
import sys
import time

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def _rank(results, key):
    for i, r in enumerate(results):
        if r.get("key") == key:
            return i
    return len(results) + 99               # not found -> worst possible rank


def run_longitudinal(backend, ns, query, target_key, control_key, learn_fn,
                     *, rounds=6):
    """Generic longitudinal protocol: measure target rank, give `rounds` of
    feedback crediting target_key, run learn_fn, re-measure. Returns
    (rank_before, rank_after, control_before, control_after)."""
    before = backend.search(ns, query, limit=10)
    rank_before = _rank(before, target_key)
    ctrl_before = _rank(before, control_key)

    for i in range(rounds):
        res = backend.search(ns, query, limit=10)
        qid = f"q_{target_key}_{i}"
        backend.log_query(ns, qid, query, [r["key"] for r in res])
        backend.feedback(ns, qid, used_keys=[target_key])

    learn_fn(backend, ns)                  # the "sleep-time" learning step

    after = backend.search(ns, query, limit=10)
    rank_after = _rank(after, target_key)
    ctrl_after = _rank(after, control_key)
    return rank_before, rank_after, ctrl_before, ctrl_after


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
                       "EVOSQL_SALIENCE_BOOST": "0.5"})   # learning lever on
    ns = f"longi_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_lg{int(time.time())}")
    # 8 rows all equally matching the query terms, so the base ranking ties and
    # the only thing that can move a row is what we LEARN about its usefulness.
    keys = []
    for i in range(8):
        k = b.save(ns, f"alpha budget report quarterly item number {i}")
        keys.append(k)
    target = keys[5]            # gets the feedback
    control = keys[2]           # never fed back (the held-out control)

    from mcp_server_evosql.scheduler import job_salience
    rb, ra, cb, ca = run_longitudinal(
        b, ns, "alpha budget report quarterly", target, control, job_salience)

    print(f"  target  rank: before={rb} after={ra}")
    print(f"  control rank: before={cb} after={ca}")
    # the fed-back row must improve...
    assert ra < rb, f"target did not improve from feedback: {rb} -> {ra}"
    # ...and end up ranked above the no-feedback control (learning was targeted,
    # not a global shuffle)
    assert ra < ca, f"target {ra} not above control {ca} after learning"
    print("  ok  feedback on a key lifts it above a no-feedback control "
          "after the learning job")
    print("OK — step 7 longitudinal learning harness (memory improves from use)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
