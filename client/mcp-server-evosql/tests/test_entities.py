"""
test_entities — Adım 14 entity extraction + canonical-id resolution.

Two gates:
  1. Extraction quality on a hand-labeled set — micro-F1 >= 0.85, and
     wrong-canonicalization rate < 5% (the plan's eval criteria).
  2. DB round-trip: three memories naming the same person three different
     ways ("Süreyya Gül" / "Süreyya G." / "Süreyya hanım") collapse to ONE
     entity (mention_count 3, two aliases) through the inline save trigger.

The DB section needs an EvoSQL server on EVOSQL_PG_PORT; it skips cleanly
when none is reachable so the extraction gate still runs anywhere.
"""
from __future__ import annotations

import os
import sys
import time

from mcp_server_evosql.entities import (extract_entities, EntityStore, _norm)

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5505"))

# ---------------------------------------------------------------- #
#  hand-labeled extraction set: (text, [(type, surface), ...])      #
# ---------------------------------------------------------------- #
LABELED = [
    ("Süreyya Gül hanım ile Pazartesi toplantı, sg@widgetco.com",
     [("person", "Süreyya Gül"), ("email", "sg@widgetco.com")]),
    ("Ahmet Yılmaz, Acme A.Ş. firmasından aradı, 0532 123 45 67",
     [("person", "Ahmet Yılmaz"), ("org", "Acme A.Ş."), ("phone", "0532 123 45 67")]),
    ("IBAN TR33 0006 1005 1978 6457 8413 26 hesabına ödeme yapıldı",
     [("iban", "TR33 0006 1005 1978 6457 8413 26")]),
    ("Dr. Mehmet Demir raporu John Smith ile inceledi",
     [("person", "Mehmet Demir"), ("person", "John Smith")]),
    ("Globex Inc. ile sözleşme imzalandı",
     [("org", "Globex Inc.")]),
    ("TCKN 12345678950 doğrulandı",
     [("tckn", "12345678950")]),
    ("Mary Johnson from Initech LLC emailed mary@initech.com",
     [("person", "Mary Johnson"), ("org", "Initech LLC"), ("email", "mary@initech.com")]),
    ("Prof. Zeynep Arslan yeni projeyi sundu",
     [("person", "Zeynep Arslan")]),
    ("competitor pricing discussed with Robert Brown",
     [("person", "Robert Brown")]),
    ("Initech LLC ve Globex Inc. ortaklığı duyuruldu",
     [("org", "Initech LLC"), ("org", "Globex Inc.")]),
    ("Fatma Şahin ile görüştüm",
     [("person", "Fatma Şahin")]),
    ("support@example.org adresine yazın",
     [("email", "support@example.org")]),
    ("Mehmet bey toplantıya katıldı",
     [("person", "Mehmet")]),
    ("Acme Corp. quarterly report hazır",
     [("org", "Acme Corp.")]),
    ("ödeme +90 555 987 65 43 numarasından geldi",
     [("phone", "+90 555 987 65 43")]),
]


def test_extraction_f1():
    tp = fp = fn = 0
    for text, gold in LABELED:
        g = {(t, _norm(s)) for t, s in gold}
        pred = {(m["type"], _norm(m["surface"])) for m in extract_entities(text)}
        tp += len(g & pred)
        fp += len(pred - g)
        fn += len(g - pred)
    prec = tp / (tp + fp) if tp + fp else 0.0
    rec = tp / (tp + fn) if tp + fn else 0.0
    f1 = 2 * prec * rec / (prec + rec) if prec + rec else 0.0
    print(f"  extraction: P={prec:.3f} R={rec:.3f} F1={f1:.3f} "
          f"(tp={tp} fp={fp} fn={fn})")
    assert f1 >= 0.85, f"F1 {f1:.3f} below eval gate 0.85"


def test_canonicalization_rate():
    """Each surface form is routed; count how many land on the WRONG entity.
    Same-person variants must merge; different people must stay split."""
    forms = {
        "p_sureyya": ["Süreyya Gül", "Süreyya G.", "Süreyya hanım", "Sureyya Gul"],
        "p_ahmet":   ["Ahmet Yılmaz", "Ahmet Y.", "Ahmet bey"],
        "p_john":    ["John Smith", "John Smith"],
    }
    es = EntityStore(lambda s: None, lambda s: [], "ns", "E", "M")
    wrong = total = 0
    group_to_eid = {}
    for group, surfaces in forms.items():
        for surf in surfaces:
            es.upsert("k", surf, "person", 0, 1, 0.8, 1.0, write=False)
            eid, _ = es.resolve(surf, "person")
            total += 1
            if group not in group_to_eid:
                group_to_eid[group] = eid
            elif group_to_eid[group] != eid:
                wrong += 1
    # cross-group collision (two different people on one id) also counts wrong
    if len(set(group_to_eid.values())) != len(group_to_eid):
        wrong += 1
    rate = wrong / total
    n_entities = len({e["id"] for e in es._cache.values()})
    print(f"  canonicalization: {n_entities} entities from {total} forms, "
          f"wrong-rate={rate:.3f}")
    assert n_entities == 3, f"expected 3 people, got {n_entities}"
    assert rate < 0.05, f"wrong-canonicalization rate {rate:.3f} >= 0.05"


def test_distinct_people_sharing_first_name_do_not_merge():
    """Regression: two different people who share only a first name must NOT
    be fused into one entity (the bare-first-name match key did this and
    corrupted the catalog). A bare first-name reference folds in only when a
    single known person carries that first name. (Fictional English names.)"""
    es = EntityStore(lambda s: None, lambda s: [], "ns", "E", "M")
    es.upsert("k", "John Doe", "person", 0, 1, 0.8, 1.0, write=False)
    doe = es.resolve("John Doe", "person")[0]
    es.upsert("k", "John Smith", "person", 0, 1, 0.8, 2.0, write=False)
    smith = es.resolve("John Smith", "person")[0]
    assert doe != smith, "distinct surnames sharing a first name must not fuse"
    assert len({e["id"] for e in es._cache.values()}) == 2

    # an ambiguous bare first-name reference must NOT silently pick one of them
    bare, is_new = es.resolve("John", "person")
    assert is_new and bare not in (doe, smith), \
        "ambiguous first-name reference must not fold onto a guessed person"

    # but when only ONE person carries the first name, a bare reference folds in
    es2 = EntityStore(lambda s: None, lambda s: [], "ns", "E", "M")
    es2.upsert("k", "Mary Major", "person", 0, 1, 0.8, 1.0, write=False)
    mm = es2.resolve("Mary Major", "person")[0]
    folded, is_new2 = es2.resolve("Mary", "person")
    assert folded == mm and not is_new2, \
        "a bare first name should fold onto the single known person"


# ---------------------------------------------------------------- #
#  DB round-trip (optional)                                         #
# ---------------------------------------------------------------- #
def test_db_roundtrip() -> bool:
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        conn = psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                               password="admin", dbname="evosql",
                               autocommit=True, connect_timeout=3)
        conn.close()
    except Exception as exc:
        print(f"  SKIP db round-trip (no server on :{PORT}: {exc})")
        return True

    os.environ.update({"EVOSQL_HOST": "127.0.0.1", "EVOSQL_PORT": str(PORT),
                       "EVOSQL_USER": "admin", "EVOSQL_PASSWORD": "admin",
                       "EVOSQL_DATABASE": "evosql",
                       "EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    prefix = f"mcp_ent{int(time.time())}"
    ns = f"enttest_{int(time.time())}"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)

    b.save(ns, "Süreyya Gül ile pazartesi toplantı yapıldı")
    b.save(ns, "Süreyya G. raporu gönderdi")
    b.save(ns, "Süreyya hanım teklifi onayladı")
    b.save(ns, "Ahmet Yılmaz, Acme A.Ş. firmasından aradı")

    ents = b._query(
        f"SELECT mem_value FROM __mem_{prefix}_entities "
        f"WHERE mem_namespace = '{ns}'")
    import json
    parsed = [json.loads(v[0]) for v in ents if v and v[0]]
    persons = [e for e in parsed if e["type"] == "person"]
    sgs = [e for e in persons if _norm("süreyya") in _norm(e["canonical"])]
    assert len(sgs) == 1, f"Süreyya variants must collapse to 1 entity: {sgs}"
    sg = sgs[0]
    assert sg["mention_count"] == 3, f"mention_count {sg['mention_count']} != 3"
    assert len(sg.get("aliases") or []) == 2, f"aliases: {sg.get('aliases')}"

    mentions = b._query(
        f"SELECT mem_value FROM __mem_{prefix}_entity_mentions "
        f"WHERE mem_namespace = '{ns}'")
    assert len(mentions) >= 4, f"expected >=4 mentions, got {len(mentions)}"
    print(f"  ok  db round-trip: {len(persons)} people, Süreyya "
          f"mention_count={sg['mention_count']} aliases={sg['aliases']}")
    return True


def main() -> int:
    test_extraction_f1()
    test_canonicalization_rate()
    test_db_roundtrip()
    print("OK — Adım 14 entities: extraction F1>=0.85 + canonicalization "
          "+ cross-row id resolution")
    return 0


if __name__ == "__main__":
    sys.exit(main())
