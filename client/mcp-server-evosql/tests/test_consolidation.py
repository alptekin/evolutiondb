"""
test_consolidation — consolidation health-gate + forgetting detector (step 38).

Unit: the pure detector flags runaway forgetting (an archival spike above the
trailing baseline) and stalled abstraction (corpus grew, semantic layer flat),
and stays quiet on cold-start / within-trend. Integration (skipped without a
server): the job records a snapshot + verdict, the gate is a no-op by default,
and pauses decay only when explicitly enabled with a runaway verdict on record.
"""
from __future__ import annotations

import json
import os
import sys
import time

from mcp_server_evosql.consolidation import (
    archived_fraction, forgetting_verdict, consolidation_stalled,
    decay_gate_open, job_consolidation_health, consolidation_health)

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_unit():
    af = archived_fraction([("a", json.dumps({"archived": True})),
                            ("b", json.dumps({"archived": False})),
                            ("c", json.dumps({}))])
    assert af == {"archived": 1, "total": 3, "frac": 1 / 3}, af

    # cold start: fewer than 3 snapshots -> never runaway
    assert forgetting_verdict([{"archived_frac": 0.9}])["runaway"] is False
    # flat trend -> not runaway even at the latest point
    flat = [{"archived_frac": 0.10 + 0.001 * i} for i in range(8)]
    assert forgetting_verdict(flat)["runaway"] is False
    # a real spike at the end -> runaway
    spike = [{"archived_frac": 0.10} for _ in range(8)] + [{"archived_frac": 0.55}]
    v = forgetting_verdict(spike)
    assert v["runaway"] is True and v["latest_frac"] == 0.55, v
    # a small wobble within the absolute-jump floor -> not runaway
    wobble = [{"archived_frac": 0.10} for _ in range(8)] + [{"archived_frac": 0.18}]
    assert forgetting_verdict(wobble)["runaway"] is False
    print("  ok  forgetting_verdict: flags spikes, ignores cold-start/wobble")

    # stall: corpus grew, semantic layer was active but flat
    grew = [{"mem_total": 100 + 0, "semantic_total": 5},
            {"mem_total": 100 + 20, "semantic_total": 5},
            {"mem_total": 100 + 40, "semantic_total": 5}]
    assert consolidation_stalled(grew)["stalled"] is True
    # semantic never active -> not a stall (it's just not configured)
    none_sem = [{"mem_total": 100 + 30 * i, "semantic_total": 0} for i in range(4)]
    assert consolidation_stalled(none_sem)["stalled"] is False
    # corpus did not grow -> not a stall
    flat_mem = [{"mem_total": 100, "semantic_total": 5} for _ in range(4)]
    assert consolidation_stalled(flat_mem)["stalled"] is False
    print("  ok  consolidation_stalled: flags flat abstraction under growth")


def _backend(prefix):
    from mcp_server_evosql.server import MemoryBackend
    return MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)


def test_integration() -> bool:
    try:
        import psycopg
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    os.environ.pop("EVOSQL_FORGET_GATE", None)
    ns = f"cons_{int(time.time())}"
    b = _backend(f"mcp_cons{int(time.time())}")
    for i in range(3):
        b.save(ns, f"row number {i} about the project plan")

    # gate is a no-op by default (decay runs exactly as before)
    assert decay_gate_open(b) is True
    # the job records a snapshot + verdict; a fresh, growing ns is healthy
    assert job_consolidation_health(b, ns) == 0
    rep = consolidation_health(b, ns)
    assert rep["snapshot"]["mem_total"] == 3 and rep["healthy"] is True
    print("  ok  job records snapshot; default gate open; fresh ns healthy")

    # enable the gate + plant a runaway verdict -> the gate closes (pauses decay)
    from mcp_server_evosql.server import _e
    b._exec(f"MEMORY PUT INTO {b.job_runs_store} VALUES "
            f"('consolidation_state','{_e(ns)}','"
            f"{_e(json.dumps({'forgetting': {'runaway': True}}))}')")
    os.environ["EVOSQL_FORGET_GATE"] = "1"
    assert decay_gate_open(b) is False
    from mcp_server_evosql.scheduler import job_decay
    assert job_decay(b, ns) == 0          # decay skipped while runaway
    os.environ.pop("EVOSQL_FORGET_GATE", None)
    assert decay_gate_open(b) is True     # flag off -> open again
    print("  ok  EVOSQL_FORGET_GATE pauses decay on a runaway verdict, default off")
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 38 consolidation health-gate + forgetting detector")
    return 0


if __name__ == "__main__":
    sys.exit(main())
