"""
test_arousal — affective/arousal salience (roadmap step 33).

A high-stakes / pinned memory keeps a high salience floor, so it resists the
archival a neutral row of the same age succumbs to. Skipped without a server.
"""
from __future__ import annotations

import json
import os
import sys
import time

from mcp_server_evosql.salience import arousal_score, compute_salience, DEFAULT_WEIGHTS

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_unit():
    assert arousal_score({"fact": "I am allergic to penicillin"}) > 0
    assert arousal_score({"pinned": True}) == 1.0
    assert arousal_score({"fact": "the weather is nice today"}) == 0.0
    # the floor lifts an old, otherwise-low-salience high-arousal row
    old = {"fact": "allergic to penicillin, critical medication", "created": 0}
    neutral = {"fact": "parking lot was full", "created": 0}
    sa = compute_salience(old, "k", now=1e9, sender_counts={}, max_count=0,
                          feedback_used={})
    sn = compute_salience(neutral, "k2", now=1e9, sender_counts={}, max_count=0,
                          feedback_used={})
    assert sa > sn and sa >= 1.0 - 1e-9, (sa, sn)
    print("  ok  arousal_score + salience floor for high-stakes rows")


def test_integration() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend, _e
        from mcp_server_evosql import salience, decay
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    ns = f"aro_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_aro{int(time.time())}")
    k_hot = b.save(ns, "allergic to penicillin, critical medication warning")
    k_cold = b.save(ns, "the parking lot was full that morning")
    salience.recompute(b, ns)                    # writes the arousal-floored salience
    old = time.time() - 250 * 86400              # same age for both
    for k in (k_hot, k_cold):
        b._exec(f"MEMORY PUT INTO {b.access_store} VALUES ('{_e(ns)}','{_e(k)}',"
                f"'{_e(json.dumps({'last_accessed': old}))}')")
    decay.decay_pass(b, ns)

    def archived(k):
        return bool(json.loads(b._fetch_by_keys(b.memory, ns, [k])[0][1]).get("archived"))

    assert not archived(k_hot) and archived(k_cold), \
        "the high-stakes memory must resist the archival the neutral one succumbs to"
    print("  ok  same age: high-stakes memory survives, neutral one archived")
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 33 affective/arousal salience")
    return 0


if __name__ == "__main__":
    sys.exit(main())
