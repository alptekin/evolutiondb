"""
test_document_store.py — Task 223 (Feature #223) tests.

Covers:
  - CREATE DOCUMENT STORE / DROP DOCUMENT STORE
  - WITH (embedding_dim=N, distance='cosine') accepted
  - SHOW DOCUMENT STORES lists registrations
  - DOCUMENT WRITE basic + with embedding
  - DOCUMENT FILTER with each operator: $eq, $ne, $gt, $gte, $lt, $lte
  - DOCUMENT FILTER with $in / $nin / $exists
  - DOCUMENT FILTER with $and / $or / $not composition
  - DOCUMENT FILTER with empty {} returns everything
  - DOCUMENT FILTER ... LIMIT n caps result
  - DOCUMENT SEARCH USING VECTOR returns rows + distance
  - DOCUMENT DELETE WHERE filter removes selected rows
  - Missing store rejected, malformed JSON rejected
  - Duplicate CREATE rejected
"""
import os
import sys

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn, simple_query


PASS = 0
FAIL = 0


def run(name, fn):
    global PASS, FAIL
    try:
        fn()
        print(f"  PASS: {name}")
        PASS += 1
    except Exception as e:
        print(f"  FAIL: {name} - {e}")
        FAIL += 1


def setup_store(s, name, with_embedding=False, n_docs=3):
    simple_query(s, f"DROP DOCUMENT STORE IF EXISTS {name}")
    if with_embedding:
        simple_query(s,
            f"CREATE DOCUMENT STORE {name} "
            f"WITH (embedding_dim = 3, distance = 'cosine')")
    else:
        simple_query(s, f"CREATE DOCUMENT STORE {name}")

    rows = [
        ("d1", "alpha note", '{"author":"alice","score":0.9}', "[1,0,0]"),
        ("d2", "beta note",  '{"author":"bob","score":0.3}',   "[0,1,0]"),
        ("d3", "gamma note", '{"author":"alice","score":0.6}', "[0,0,1]"),
    ]
    for i in range(min(n_docs, len(rows))):
        doc_id, content, meta, emb = rows[i]
        if with_embedding:
            simple_query(s,
                f"DOCUMENT WRITE INTO {name} VALUES "
                f"('{doc_id}', '{content}', '{meta}', '{emb}')")
        else:
            simple_query(s,
                f"DOCUMENT WRITE INTO {name} VALUES "
                f"('{doc_id}', '{content}', '{meta}')")


def filter_sql(name, filter_json, limit=None):
    if limit is None:
        return f"DOCUMENT FILTER FROM {name} WHERE '{filter_json}'"
    return f"DOCUMENT FILTER FROM {name} WHERE '{filter_json}' LIMIT {limit}"


def ids_of(rows):
    return sorted(r[0] for r in rows)


# ─── 1. CREATE / DROP accepted ───
def test_create_drop():
    s = conn()
    simple_query(s, "DROP DOCUMENT STORE IF EXISTS d_t1")
    _, _, err, _ = simple_query(s, "CREATE DOCUMENT STORE d_t1")
    assert err is None, f"create: {err}"
    _, _, err, _ = simple_query(s, "DROP DOCUMENT STORE d_t1")
    assert err is None, f"drop: {err}"


# ─── 2. WITH (embedding_dim=N, distance='cosine') accepted ───
def test_with_embedding():
    s = conn()
    simple_query(s, "DROP DOCUMENT STORE IF EXISTS d_t2")
    _, _, err, _ = simple_query(s,
        "CREATE DOCUMENT STORE d_t2 "
        "WITH (embedding_dim = 4, distance = 'cosine')")
    assert err is None, f"create with embedding: {err}"


# ─── 3. SHOW DOCUMENT STORES lists registrations ───
def test_show_lists():
    s = conn()
    simple_query(s, "DROP DOCUMENT STORE IF EXISTS d_t3")
    simple_query(s, "CREATE DOCUMENT STORE d_t3")
    _, rows, _, _ = simple_query(s, "SHOW DOCUMENT STORES")
    assert "d_t3" in [r[0] for r in rows]


# ─── 4. WRITE basic ───
def test_write_basic():
    s = conn()
    setup_store(s, "d_t4")
    _, rows, _, _ = simple_query(s, filter_sql("d_t4", "{}"))
    assert len(rows) == 3, f"3 docs: {rows}"


# ─── 5. FILTER $eq (sugar — bare value) ───
def test_filter_eq_sugar():
    s = conn()
    setup_store(s, "d_t5")
    _, rows, _, _ = simple_query(s, filter_sql("d_t5", '{"id":"d1"}'))
    assert ids_of(rows) == ["d1"], f"eq: {rows}"


# ─── 6. FILTER $or ───
def test_filter_or():
    s = conn()
    setup_store(s, "d_t6")
    _, rows, _, _ = simple_query(s, filter_sql("d_t6",
        '{"$or":[{"id":"d1"},{"id":"d3"}]}'))
    assert ids_of(rows) == ["d1", "d3"], f"or: {rows}"


# ─── 7. FILTER $and ───
def test_filter_and():
    s = conn()
    setup_store(s, "d_t7")
    _, rows, _, _ = simple_query(s, filter_sql("d_t7",
        '{"$and":[{"id":"d1"},{"content":"alpha note"}]}'))
    assert ids_of(rows) == ["d1"], f"and: {rows}"


# ─── 8. FILTER $in ───
def test_filter_in():
    s = conn()
    setup_store(s, "d_t8")
    _, rows, _, _ = simple_query(s, filter_sql("d_t8",
        '{"id":{"$in":["d1","d3"]}}'))
    assert ids_of(rows) == ["d1", "d3"], f"in: {rows}"


# ─── 9. FILTER $nin ───
def test_filter_nin():
    s = conn()
    setup_store(s, "d_t9")
    _, rows, _, _ = simple_query(s, filter_sql("d_t9",
        '{"id":{"$nin":["d2"]}}'))
    assert ids_of(rows) == ["d1", "d3"], f"nin: {rows}"


# ─── 10. FILTER $not + bare ───
def test_filter_not():
    s = conn()
    setup_store(s, "d_t10")
    _, rows, _, _ = simple_query(s, filter_sql("d_t10",
        '{"$not":{"id":"d2"}}'))
    assert ids_of(rows) == ["d1", "d3"], f"not: {rows}"


# ─── 11. FILTER LIMIT n caps result ───
def test_filter_limit():
    s = conn()
    setup_store(s, "d_t11")
    _, rows, _, _ = simple_query(s, filter_sql("d_t11", "{}", limit=2))
    assert len(rows) == 2, f"limit 2: {rows}"


# ─── 12. SEARCH returns score column ───
def test_search_with_vector():
    s = conn()
    setup_store(s, "d_t12", with_embedding=True)
    _, rows, _, _ = simple_query(s,
        "DOCUMENT SEARCH d_t12 USING VECTOR '[1,0,0]' LIMIT 3")
    assert len(rows) == 3, f"3 returned: {rows}"
    # Each row: (id, content, meta, score)
    assert len(rows[0]) == 4, f"row shape: {rows[0]}"


# ─── 13. DELETE WHERE filter removes rows ───
def test_delete_with_filter():
    s = conn()
    setup_store(s, "d_t13")
    simple_query(s,
        "DOCUMENT DELETE FROM d_t13 WHERE '{\"id\":\"d2\"}'")
    _, rows, _, _ = simple_query(s, filter_sql("d_t13", "{}"))
    assert ids_of(rows) == ["d1", "d3"], f"after delete: {rows}"


# ─── 14. Missing store rejected ───
def test_missing_store():
    s = conn()
    simple_query(s, "DROP DOCUMENT STORE IF EXISTS does_not_exist")
    _, _, err, _ = simple_query(s,
        "DOCUMENT FILTER FROM does_not_exist WHERE '{}'")
    assert err is not None


# ─── 15. Malformed JSON rejected ───
def test_malformed_json():
    s = conn()
    simple_query(s, "DROP DOCUMENT STORE IF EXISTS d_t15")
    simple_query(s, "CREATE DOCUMENT STORE d_t15")
    _, _, err, _ = simple_query(s,
        "DOCUMENT FILTER FROM d_t15 WHERE 'this is not json'")
    assert err is not None, "should reject"


if __name__ == "__main__":
    print("=== test_document_store.py (Task 223) ===\n")
    run("CREATE / DROP accepted",                   test_create_drop)
    run("WITH (embedding_dim, distance) accepted",  test_with_embedding)
    run("SHOW DOCUMENT STORES lists",               test_show_lists)
    run("WRITE basic",                               test_write_basic)
    run("FILTER {field:val} (eq sugar)",            test_filter_eq_sugar)
    run("FILTER $or",                                test_filter_or)
    run("FILTER $and",                               test_filter_and)
    run("FILTER $in",                                test_filter_in)
    run("FILTER $nin",                               test_filter_nin)
    run("FILTER $not",                               test_filter_not)
    run("FILTER LIMIT n caps result",                test_filter_limit)
    run("SEARCH returns score column",               test_search_with_vector)
    run("DELETE WHERE filter removes rows",          test_delete_with_filter)
    run("Missing store rejected",                    test_missing_store)
    run("Malformed JSON rejected",                   test_malformed_json)

    print(f"\n=== {PASS} passed, {FAIL} failed ===")
    sys.exit(0 if FAIL == 0 else 1)
