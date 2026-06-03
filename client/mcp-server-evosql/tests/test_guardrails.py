"""
test_guardrails — closed-loop guardrails (roadmap step 27).

trust dampens the learned score against the base; epsilon adds bounded
exploration noise; IPS weights are variance-clipped. Mostly pure.
"""
from __future__ import annotations

import os
import random
import sys
import time

from mcp_server_evosql.learn import guarded_score, ips_weight, _IPS_CLIP

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_unit():
    # trust dampening: 1.0 = pure learned, 0.0 = pure base, 0.5 = blend
    assert guarded_score(0.8, 0.2, trust=1.0) == 0.8
    assert guarded_score(0.8, 0.2, trust=0.0) == 0.2
    assert abs(guarded_score(0.8, 0.2, trust=0.5) - 0.5) < 1e-9
    print("  ok  trust blends learned vs base (dampening)")

    # exploration: bounded, reproducible, lifts the score within [0, epsilon)
    r1, r2 = random.Random(1), random.Random(1)
    a = guarded_score(0.5, 0.5, epsilon=0.1, rng=r1)
    b = guarded_score(0.5, 0.5, epsilon=0.1, rng=r2)
    assert a == b and 0.5 <= a < 0.6
    assert guarded_score(0.5, 0.5, epsilon=0.0) == 0.5      # no exploration
    print("  ok  epsilon adds bounded, reproducible exploration noise")

    # IPS variance cap
    assert ips_weight(10_000) <= _IPS_CLIP
    assert ips_weight(0) <= _IPS_CLIP
    print(f"  ok  IPS weights clipped at {_IPS_CLIP}")


def test_params() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP params (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none"})
    for k in ("EVOSQL_LEARNED_TRUST", "EVOSQL_LEARNED_EPSILON"):
        os.environ.pop(k, None)
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_gr{int(time.time())}")
    assert b.learned_trust == 1.0 and b.learned_epsilon == 0.0, \
        "guardrails must default to pure-learned / no-exploration"
    os.environ["EVOSQL_LEARNED_TRUST"] = "0.5"
    os.environ["EVOSQL_LEARNED_EPSILON"] = "0.05"
    b2 = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                       f"mcp_gr2{int(time.time())}")
    assert b2.learned_trust == 0.5 and b2.learned_epsilon == 0.05
    for k in ("EVOSQL_LEARNED_TRUST", "EVOSQL_LEARNED_EPSILON"):
        os.environ.pop(k, None)
    print("  ok  trust/epsilon params read from env with sane defaults")
    return True


def main() -> int:
    test_unit()
    test_params()
    print("OK — step 27 closed-loop guardrails")
    return 0


if __name__ == "__main__":
    sys.exit(main())
