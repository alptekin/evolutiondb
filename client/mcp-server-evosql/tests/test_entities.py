"""
test_entities — Step 14 entity extraction + canonical-id resolution.

Two gates:
  1. Extraction quality on a hand-labeled set — micro-F1 >= 0.85, and
     wrong-canonicalization rate < 5% (the plan's eval criteria).
  2. DB round-trip: three memories naming the same person three different
     ways ("Jane Gardner" / "Jane G." / "Jane Gardener") collapse to ONE
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
# Fictional, English-only labeled set: it exercises the language-NEUTRAL email
# pattern plus the EN input locale's person/org patterns. Locale-specific
# detectors (structured ids, post-name honorifics, other-language org suffixes)
# are validated against their own locale data in test_locales.py.
LABELED = [
    ("Dr Jane Roe met the team monday",
     [("person", "Jane Roe")]),
    ("Mary Johnson from Initech LLC emailed mary@initech.com",
     [("person", "Mary Johnson"), ("org", "Initech LLC"), ("email", "mary@initech.com")]),
    ("contract signed with Globex Inc.",
     [("org", "Globex Inc.")]),
    ("Prof Alice Walker reviewed the report with John Smith",
     [("person", "Alice Walker"), ("person", "John Smith")]),
    ("Initech LLC and Globex Inc. announced a partnership",
     [("org", "Initech LLC"), ("org", "Globex Inc.")]),
    ("competitor pricing discussed with Robert Brown",
     [("person", "Robert Brown")]),
    ("write to support@example.org for help",
     [("email", "support@example.org")]),
    ("Acme Corp. quarterly report is ready",
     [("org", "Acme Corp.")]),
    ("Mr Sam Lee joined the call",
     [("person", "Sam Lee")]),
    ("the invoice from Widget Holding is paid",
     [("org", "Widget Holding")]),
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
        "p_jane":  ["Jane Gardner", "Jane G.", "Jane"],
        "p_alex":  ["Alex Turner", "Alex T.", "Alex"],
        "p_john":  ["John Smith", "John Smith"],
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

    # three mergeable variants of one person (full name, first+last-initial,
    # and a 1-edit misspelling caught by the fuzzy match) collapse to one entity
    b.save(ns, "Jane Gardner reviewed the report")
    b.save(ns, "Jane G. sent the file")
    b.save(ns, "met Jane Gardener about it")
    b.save(ns, "Sam Lee from Widget Inc called")

    ents = b._query(
        f"SELECT mem_value FROM __mem_{prefix}_entities "
        f"WHERE mem_namespace = '{ns}'")
    import json
    parsed = [json.loads(v[0]) for v in ents if v and v[0]]
    persons = [e for e in parsed if e["type"] == "person"]
    jgs = [e for e in persons if _norm("jane") in _norm(e["canonical"])]
    assert len(jgs) == 1, f"Jane variants must collapse to 1 entity: {jgs}"
    jg = jgs[0]
    assert jg["mention_count"] == 3, f"mention_count {jg['mention_count']} != 3"
    assert len(jg.get("aliases") or []) == 2, f"aliases: {jg.get('aliases')}"

    mentions = b._query(
        f"SELECT mem_value FROM __mem_{prefix}_entity_mentions "
        f"WHERE mem_namespace = '{ns}'")
    assert len(mentions) >= 4, f"expected >=4 mentions, got {len(mentions)}"
    print(f"  ok  db round-trip: {len(persons)} people, Jane "
          f"mention_count={jg['mention_count']} aliases={jg['aliases']}")
    return True


def main() -> int:
    test_extraction_f1()
    test_canonicalization_rate()
    test_db_roundtrip()
    print("OK — Step 14 entities: extraction F1>=0.85 + canonicalization "
          "+ cross-row id resolution")
    return 0


if __name__ == "__main__":
    sys.exit(main())
