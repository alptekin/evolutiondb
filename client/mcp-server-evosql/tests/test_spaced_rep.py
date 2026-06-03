"""
test_spaced_rep — spaced-repetition reinforcement (roadmap step 31).

Unit: effective_lambda divides the decay rate down as retrieval_count rises.
Integration (skipped without a server): at the same long idle, a heavily-
retrieved row stays active while a never-retrieved one is archived.
"""
from __future__ import annotations

import json
import os
import sys
import time

from mcp_server_evosql.decay import effective_lambda, LAMBDA

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_unit():
    assert effective_lambda(0) == LAMBDA
    assert effective_lambda(100) < effective_lambda(0)
    assert effective_lambda(100) < effective_lambda(5) < effective_lambda(0)
    print("  ok  effective_lambda: more retrievals -> slower decay")


def test_integration() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend, _e
        from mcp_server_evosql import decay
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    ns = f"sr_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_sr{int(time.time())}")
    k_hot = b.save(ns, "my emergency contact is doctor lee")
    k_cold = b.save(ns, "i parked on level three that one tuesday")
    old = time.time() - 300 * 86400          # 300 days idle for BOTH
    # same idle; only the rehearsal count differs
    b._exec(f"MEMORY PUT INTO {b.access_store} VALUES ('{_e(ns)}','{_e(k_hot)}',"
            f"'{_e(json.dumps({'last_accessed': old, 'retrieval_count': 50}))}')")
    b._exec(f"MEMORY PUT INTO {b.access_store} VALUES ('{_e(ns)}','{_e(k_cold)}',"
            f"'{_e(json.dumps({'last_accessed': old, 'retrieval_count': 0}))}')")
    decay.decay_pass(b, ns)

    def archived(k):
        return bool(json.loads(b._fetch_by_keys(b.memory, ns, [k])[0][1]).get("archived"))

    assert not archived(k_hot) and archived(k_cold), \
        "the rehearsed row must survive the same idle the unrehearsed one fades at"
    print("  ok  same 300d idle: rehearsed row active, never-recalled one archived")
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 31 spaced-repetition reinforcement")
    return 0


if __name__ == "__main__":
    sys.exit(main())
