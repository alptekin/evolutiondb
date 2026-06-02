"""
test_health — derived-store integrity audit (roadmap step 1).

Unit: eval_rows classifies a store as healthy only when every present row
decodes; an empty store is healthy; rows with empty/None values are NOT.

Integration (skipped without a server on EVOSQL_PG_PORT, default 5520): after
saving rows + running extraction/salience, every derived store audits clean and
job_health records a report to job_runs and returns 0.
"""
from __future__ import annotations

import json
import os
import sys
import time

from mcp_server_evosql import health

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_eval_rows():
    healthy = [("k1", json.dumps({"a": 1})), ("k2", {"b": 2})]
    assert health.eval_rows(healthy)["ok"] is True
    assert health.eval_rows([])["ok"] is True                       # empty = ok
    damaged = [("k1", json.dumps({"a": 1})), ("k2", None), ("k3", "")]
    r = health.eval_rows(damaged)
    assert r["ok"] is False and r["rows"] == 3 and r["readable"] == 1
    print("  ok  eval_rows: healthy / empty / damaged classified correctly")


def test_integration() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql",
                        autocommit=True, connect_timeout=3,
                        prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    prefix = f"mcp_h{int(time.time())}"
    ns = f"health_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)
    for i in range(6):
        b.save(ns, f"Ahmet Yilmaz worked on Globex Inc. note {i}")
    from mcp_server_evosql.scheduler import job_extract_entities, job_salience
    job_extract_entities(b, ns)
    job_salience(b, ns)

    rep = health.store_health(b, ns)
    bad = {k: v for k, v in rep.items() if not v["ok"]}
    assert not bad, f"unhealthy stores after a clean build: {bad}"
    # the populated stores must actually have decoded rows
    assert rep["entities"]["readable"] > 0, "entities should be populated"
    assert rep["salience"]["readable"] > 0, "salience should be populated"

    unhealthy = health.job_health(b, ns)
    assert unhealthy == 0, f"job_health reported {unhealthy} unhealthy"
    # the report was recorded under job_runs ('health' ns)
    rec = b._query("SELECT mem_value FROM __mem_%s_job_runs "
                   "WHERE mem_namespace = 'health' AND mem_key = '%s'"
                   % (prefix, ns))
    assert rec and rec[0] and json.loads(rec[0][0])["entities"]["ok"], \
        "health report not recorded to job_runs"
    print(f"  ok  integration: {len(rep)} stores audited clean, recorded, "
          f"job_health=0")
    return True


def main() -> int:
    test_eval_rows()
    test_integration()
    print("OK — step 1 derived-store health audit")
    return 0


if __name__ == "__main__":
    sys.exit(main())
