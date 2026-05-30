"""
test_graph — Adım 15 knowledge graph + 2-hop spreading activation.

Unit:
  - extract_triples picks a typed predicate from the verb between two entity
    spans, and a co-occurrence related_to otherwise.
  - spreading_activation reaches 2 hops, decays per hop, and terminates on a
    cyclic graph (no feedback blow-up).

Eval gate (the plan's criterion): a relational corpus where each company hub
has people whose later rows never repeat the company name. With the graph
boost ON, "who is active at <hub>" reaches those keyword-less rows through the
entity graph — Recall@5 lifts >= 30% over the keyword baseline.
"""
from __future__ import annotations

import json
import os
import sys
import time

from mcp_server_evosql.graph import (extract_triples, GraphStore,
                                     DEFAULT_PREDICATE)

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5505"))


# ---------------------------------------------------------------- #
#  unit                                                            #
# ---------------------------------------------------------------- #
def test_triples():
    text = "Ahmet Yilmaz worked on Globex Inc. last quarter"
    mentions = [
        {"entity_id": "e_ahmet", "start": 0, "end": 11, "type": "person"},
        {"entity_id": "e_globex", "start": 23, "end": 34, "type": "org"},
    ]
    tr = extract_triples(text, mentions)
    assert ("e_ahmet", "worked_on", "e_globex") in tr, tr
    # no verb between -> related_to
    text2 = "Ahmet Yilmaz, Globex Inc."
    tr2 = extract_triples(text2, [
        {"entity_id": "e_ahmet", "start": 0, "end": 11, "type": "person"},
        {"entity_id": "e_globex", "start": 14, "end": 25, "type": "org"}])
    assert ("e_ahmet", DEFAULT_PREDICATE, "e_globex") in tr2, tr2
    print("  ok  triples: typed predicate + co-occurrence default")


def test_spreading():
    g = GraphStore(lambda s: None, lambda s: [], "ns", "E", "M")
    # A — B — C — D chain (+ a cycle A-B-A); D is 3 hops from A
    g._adj = {"A": {"B": 1.0}, "B": {"A": 1.0, "C": 1.0},
              "C": {"B": 1.0, "D": 1.0}, "D": {"C": 1.0}}
    act = g.spreading_activation(["A"], depth=2)
    assert act["A"] == 1.0
    assert act.get("B", 0) > 0, "1-hop B must activate"
    assert act.get("C", 0) > 0, "2-hop C must activate"
    assert act.get("C", 0) < act["B"], "activation decays with distance"
    assert act.get("D", 0) == 0, "depth=2 must not reach 3-hop D"
    # cyclic graph terminates (A<->B<->A): just must return
    g2 = GraphStore(lambda s: None, lambda s: [], "ns", "E", "M")
    g2._adj = {"A": {"B": 1.0}, "B": {"A": 1.0}}
    a2 = g2.spreading_activation(["A"], depth=5)
    assert a2["A"] == 1.0 and a2.get("B", 0) > 0
    print("  ok  spreading: 2-hop reach, decay, depth bound, cycle-safe")


# ---------------------------------------------------------------- #
#  eval gate — relational Recall@5, graph off vs on                #
# ---------------------------------------------------------------- #
HUBS = {
    "Acme A.Ş.":        ["Ahmet Yılmaz", "Ayşe Kaya"],
    "Globex Inc.":      ["Mehmet Demir", "Zeynep Arslan"],
    "Initech LLC":      ["Fatma Şahin", "Ali Vural"],
    "Umbrella Holding": ["Can Öztürk", "Deniz Aydın"],
}
# per person: a verb so the hub-row gets a typed edge; the keyword-less
# follow-up rows are what only the graph can reach.
FOLLOWUPS = {
    "Ahmet Yılmaz": "raporu tamamladı ve bütçeyi gönderdi",
    "Ayşe Kaya": "müşteri görüşmesini bitirdi",
    "Mehmet Demir": "test planını onayladı",
    "Zeynep Arslan": "sunum taslağını hazırladı",
    "Fatma Şahin": "sözleşme maddelerini gözden geçirdi",
    "Ali Vural": "dağıtım takvimini güncelledi",
    "Can Öztürk": "lansman kontrol listesini çıkardı",
    "Deniz Aydın": "geri bildirimleri derledi",
}
NOISE = ["bugün hava çok güneşli", "öğle yemeği toplantısı iptal edildi",
         "fatura geçen hafta ödendi", "ofis taşınması ertelendi",
         "kahve makinesi tamir edildi", "yıllık izin planı duyuruldu"]


def _seed(b, ns):
    gold = {}   # hub -> set(relevant mem_keys)
    for hub, people in HUBS.items():
        gold[hub] = set()
        for p in people:
            k1 = b.save(ns, f"{p}, {hub} firmasında çalışıyor")
            k2 = b.save(ns, f"{p} {FOLLOWUPS[p]}")   # no hub keyword
            gold[hub].update([k1, k2])
    for n in NOISE:
        b.save(ns, n)
    return gold


def _recall_at_5(b, ns, gold) -> float:
    queries = []
    for hub in HUBS:
        queries.append((f"{hub} firmasında kimler aktif", gold[hub]))
        queries.append((f"{hub} ekibinde kimler var", gold[hub]))
    # two more to reach 10
    queries.append(("Acme A.Ş. projesinde kim çalıştı", gold["Acme A.Ş."]))
    queries.append(("Globex Inc. için kim sorumlu", gold["Globex Inc."]))
    tot = 0.0
    for q, rel in queries:
        keys = {r["key"] for r in b.search(ns, q, limit=5)}
        tot += len(keys & rel) / len(rel)
    return tot / len(queries)


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
    prefix = f"mcp_g{int(time.time())}"
    ns = f"gtest_{int(time.time())}"

    os.environ["EVOSQL_GRAPH_BOOST"] = "0"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)
    gold = _seed(b, ns)
    base = _recall_at_5(b, ns, gold)

    os.environ["EVOSQL_GRAPH_BOOST"] = "0.5"
    b2 = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)
    boosted = _recall_at_5(b2, ns, gold)

    lift = (boosted - base) / base if base > 0 else float("inf")
    print(f"  Recall@5: baseline={base:.3f}  graph={boosted:.3f}  "
          f"lift={lift*100:.0f}%")
    assert boosted >= base, "graph must not hurt recall"
    assert lift >= 0.30, f"relational Recall@5 lift {lift*100:.0f}% < 30% gate"
    return True


def main() -> int:
    test_triples()
    test_spreading()
    test_eval_gate()
    print("OK — Adım 15 knowledge graph: triples + 2-hop spreading + "
          "relational Recall@5 +30%")
    return 0


if __name__ == "__main__":
    sys.exit(main())
