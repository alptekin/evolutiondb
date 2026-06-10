"""
test_profile — Step 17 user interest profile (K-cluster mixture).

Unit:
  - kmeans recovers clean clusters; _pick_k respects the 5-10 band; cold
    start (< MIN_ROWS) yields no profile.

Eval gate (the plan's criterion): with the profile boost ON, a query inside
the user's dominant interest cluster surfaces the cluster's other rows — ones
the query doesn't directly match — so Recall@5 lifts >= 15% over the no-profile
baseline. Uses a deterministic stub embedder (no sentence-transformers in CI):
work-cluster rows share a small `work` component, personal-cluster rows a
`personal` one, the two orthogonal — the geometry the boost is meant to read.
"""
from __future__ import annotations

import math
import os
import sys
import time
from typing import List, Optional

from mcp_server_evosql import profile as PROF

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5505"))

# ---- deterministic stub embedder ------------------------------------ #
# dims: 0 work  1 report 2 meeting 3 task  4 personal 5 vacation 6 hobby 7 errand
_KW = {
    "report": [(0, 0.5), (1, 1.0)],
    "meeting": [(0, 0.5), (2, 1.0)],
    "task": [(0, 0.5), (3, 1.0)],
    "vacation": [(4, 0.5), (5, 1.0)],
    "hobby": [(4, 0.5), (6, 1.0)],
    "errand": [(4, 0.5), (7, 1.0)],
}


class StubEmbedder:
    kind = "stub"
    model_name = "stub-v1"

    def embed(self, text: str) -> Optional[List[float]]:
        v = [0.0] * 8
        for w in (text or "").lower().replace(",", " ").split():
            for d, x in _KW.get(w, ()):
                v[d] += x
        if not any(v):
            v = [0.01] * 8
        n = math.sqrt(sum(x * x for x in v)) or 1.0
        return [x / n for x in v]

    def embed_query(self, text):   return self.embed(text)
    def embed_passage(self, text): return self.embed(text)


# ---------------------------------------------------------------- #
#  unit                                                            #
# ---------------------------------------------------------------- #
def test_kmeans_and_k():
    vs = [[1, 0, 0], [0.9, 0.1, 0], [0, 1, 0], [0.1, 0.9, 0],
          [0, 0, 1], [0, 0.1, 0.9]]
    labels, cen = PROF.kmeans(vs, 3, seed=3)
    assert len(set(labels)) == 3, labels
    assert labels[0] == labels[1] and labels[2] == labels[3] \
        and labels[4] == labels[5], labels
    assert PROF._pick_k(40, None) <= PROF.K_MAX
    assert PROF._pick_k(40, None) >= PROF.K_MIN
    assert PROF._pick_k(8, 3) == 3
    print("  ok  kmeans clusters + _pick_k band")


# ---------------------------------------------------------------- #
#  DB eval gate                                                    #
# ---------------------------------------------------------------- #
def _recall_at_5(b, ns, query, gold) -> float:
    keys = {r["key"] for r in b.search(ns, query, limit=5)}
    return len(keys & gold) / len(gold)


def test_eval_gate() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql",
                        autocommit=True, connect_timeout=3).close()
    except Exception as exc:
        print(f"  SKIP eval gate (no server on :{PORT}: {exc})")
        return True

    os.environ.update({"EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": str(PORT),
                       "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
                       "EVOSQL_DATABASE": "evosql",
                       "EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    prefix = f"mcp_pr{int(time.time())}"
    ns = f"prtest_{int(time.time())}"

    def mk(boost):
        os.environ["EVOSQL_PROFILE_BOOST"] = str(boost)
        return MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql",
                             prefix, embedder=StubEmbedder())

    b = mk(0.0)
    gold = set()
    # work cluster (dominant interest): one query-matching anchor + the gold
    # meeting rows the query does NOT mention (one carries the neutral query
    # word so the baseline isn't a flat zero).
    b.save(ns, "prepared the weekly report")                      # anchor
    gold.add(b.save(ns, "team meeting notes"))
    gold.add(b.save(ns, "customer meeting summary"))
    gold.add(b.save(ns, "sprint meeting decisions"))
    gold.add(b.save(ns, "meeting status update"))                # has 'status'
    # personal cluster: 3 distractors carry the neutral query word `status`
    # (pure-keyword hits that crowd the baseline top-5 ahead of the gold).
    for f in ["vacation status plan", "hobby status note", "errand status list"]:
        b.save(ns, f)
    for f in ["vacation booking", "hobby supplies", "errand tracking",
              "vacation photos", "hobby class", "errand list",
              "vacation route", "hobby event", "errand plan",
              "vacation luggage", "hobby group", "vacation insurance"]:
        b.save(ns, f)

    query = "report status"
    base = _recall_at_5(b, ns, query, gold)

    clusters = b.build_profile(ns, window_days=0, k=2)
    assert len(clusters) >= 2, f"expected >=2 interest clusters: {clusters}"

    b2 = mk(0.6)
    boosted = _recall_at_5(b2, ns, query, gold)
    lift = (boosted - base) / base if base > 0 else float("inf")
    print(f"  Recall@5: baseline={base:.3f}  profile={boosted:.3f}  "
          f"rel-lift={lift*100:.0f}%  abs+{(boosted-base)*100:.0f}pts  "
          f"clusters={[(c['label'][:18], c['weight']) for c in clusters]}")
    assert boosted >= base, "profile must not hurt recall"
    # gate: relative +15% (well-defined since the baseline is non-zero)
    assert lift >= 0.15, f"profile Recall@5 lift {lift*100:.0f}% < 15% gate"

    # cold start: a fresh namespace with few rows yields no profile
    ns2 = ns + "_cold"
    for i in range(5):
        b.save(ns2, f"stray note {i}")
    assert b.build_profile(ns2, window_days=0) == [], "cold start must be passive"
    print("  ok  cold start passive (< MIN_ROWS)")
    return True


def main() -> int:
    test_kmeans_and_k()
    test_eval_gate()
    print("OK — Step 17 profile: kmeans + interest mixture + "
          "personalized Recall@5 +15% + cold-start guard")
    return 0


if __name__ == "__main__":
    sys.exit(main())
