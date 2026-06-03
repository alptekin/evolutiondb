"""
test_ranker — learned logistic ranker (roadmap step 26).

Unit: fit_logistic learns a predictive feature from IPS-weighted examples.
Integration (skipped without a server): fit_ranker persists a model, _load_ranker
reads it, EVOSQL_LEARNED_RANK engages it in search, and default-off is unchanged.
"""
from __future__ import annotations

import os
import sys
import time

from mcp_server_evosql.learn import fit_logistic, predict, FEATURES

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def _feat(**kw):
    d = {f: 0.0 for f in FEATURES}
    d.update(kw)
    return d


def test_unit():
    # bge is the discriminating feature: high -> used, low -> unused
    ex = []
    for _ in range(30):
        ex.append({"features": _feat(bge=0.9), "label": 1, "weight": 1.0})
        ex.append({"features": _feat(bge=0.1), "label": 0, "weight": 1.0})
    m = fit_logistic(ex)
    assert m["n"] == 60
    assert m["weights"]["bge"] > 0, "should learn bge is positive"
    assert predict(m, _feat(bge=0.9)) > predict(m, _feat(bge=0.1))
    assert predict(m, _feat(bge=0.9)) > 0.6, "learns the used pattern"
    assert fit_logistic([])["n"] == 0                    # cold start safe
    print(f"  ok  fit_logistic learns bge (w={m['weights']['bge']:.2f}); "
          f"predict separates used/unused")


def test_integration() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})

    # OFF by default
    os.environ.pop("EVOSQL_LEARNED_RANK", None)
    boff = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                         f"mcp_rk0{int(time.time())}")
    assert boff.learned_rank is False

    os.environ["EVOSQL_LEARNED_RANK"] = "1"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                      f"mcp_rk{int(time.time())}")
    assert b.learned_rank is True
    ns = f"rk_{int(time.time())}"
    ks = [b.save(ns, f"the incident postmortem timeline entry {i}")
          for i in range(5)]
    # cold start: learned_rank on but no ranker yet -> search still works
    assert b.search(ns, "incident postmortem timeline", limit=5), \
        "cold-start learned_rank must fall back, not break"

    for i in range(6):
        res = b.search(ns, "incident postmortem timeline", limit=5)
        b.log_query(ns, f"q{i}", "incident postmortem timeline",
                    [r["key"] for r in res])
        b.feedback(ns, f"q{i}", used_keys=[ks[0]])

    model = b.fit_ranker(ns)
    assert model.get("n", 0) > 0, "ranker should fit from feedback"
    loaded = b._load_ranker(ns)
    assert loaded and loaded.get("n") == model["n"], "ranker not persisted/loaded"
    # search now re-scores with the learned model (engaged, no crash); scores in (0,1)
    res = b.search(ns, "incident postmortem timeline", limit=5)
    assert res and all(0.0 <= r["score"] <= 1.0 for r in res), \
        f"learned scores out of range: {[r['score'] for r in res]}"
    print(f"  ok  fit_ranker persists (n={model['n']}); learned_rank engages "
          f"in search; cold-start + off-default safe")
    os.environ.pop("EVOSQL_LEARNED_RANK", None)
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 26 learned ranker")
    return 0


if __name__ == "__main__":
    sys.exit(main())
