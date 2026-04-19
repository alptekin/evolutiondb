"""
test_fulltext.py — Basic full-text search (Task 86, Feature #52)

v1 scope:
  - CREATE FULLTEXT INDEX ON t(col)
  - MATCH (col) AGAINST ('query') returns hit count (0 = no match)
  - Tokenizer: lowercase, punctuation-strip, 2+ chars, English stop words

Index acceleration + incremental INSERT/UPDATE/DELETE maintenance are
deferred; v1 evaluates MATCH by tokenizing each scanned row in-memory,
which is correct but O(n).
"""

import pytest
from pg_helpers import PGConnection, simple_query


@pytest.fixture
def db():
    c = PGConnection()
    yield c
    c.close()


def _reset(db, tbl):
    try: db.query(f"DROP TABLE {tbl}")
    except Exception: pass


def test_create_fulltext_index(db):
    _reset(db, "ft_t1")
    db.query("CREATE TABLE ft_t1 (id INT PRIMARY KEY, body VARCHAR(500))")
    db.query("INSERT INTO ft_t1 VALUES (1, 'hello world'), (2, 'goodbye world')")

    cols, rows, err, tag = simple_query(
        db._sock, "CREATE FULLTEXT INDEX ft_body ON ft_t1 (body)"
    )
    assert err is None, err


def test_match_single_word(db):
    _reset(db, "ft_t2")
    db.query("CREATE TABLE ft_t2 (id INT PRIMARY KEY, body VARCHAR(500))")
    db.query(
        "INSERT INTO ft_t2 VALUES "
        "(1, 'the quick brown fox'), "
        "(2, 'jumps over the lazy dog'), "
        "(3, 'the quick turtle')"
    )
    db.query("CREATE FULLTEXT INDEX ft_body ON ft_t2 (body)")

    rows = db.query("SELECT id FROM ft_t2 WHERE MATCH (body) AGAINST ('quick')")
    ids = sorted(int(r[0]) for r in rows)
    assert ids == [1, 3]


def test_match_multi_word_union(db):
    """AGAINST(multiple terms) matches rows containing any term."""
    _reset(db, "ft_t3")
    db.query("CREATE TABLE ft_t3 (id INT PRIMARY KEY, body VARCHAR(500))")
    db.query(
        "INSERT INTO ft_t3 VALUES "
        "(1, 'database engine'), "
        "(2, 'fulltext search'), "
        "(3, 'unrelated text')"
    )
    db.query("CREATE FULLTEXT INDEX ft_body ON ft_t3 (body)")
    rows = db.query(
        "SELECT id FROM ft_t3 WHERE MATCH (body) AGAINST ('database fulltext')"
    )
    ids = sorted(int(r[0]) for r in rows)
    assert ids == [1, 2]


def test_match_no_result(db):
    _reset(db, "ft_t4")
    db.query("CREATE TABLE ft_t4 (id INT PRIMARY KEY, body VARCHAR(500))")
    db.query("INSERT INTO ft_t4 VALUES (1, 'hello world')")
    db.query("CREATE FULLTEXT INDEX ft_body ON ft_t4 (body)")
    rows = db.query("SELECT id FROM ft_t4 WHERE MATCH (body) AGAINST ('nonexistent')")
    assert rows == []


def test_match_stop_words_filtered(db):
    """Stop words ('the', 'is', etc.) should be filtered from the query and
    should not match on their own."""
    _reset(db, "ft_t5")
    db.query("CREATE TABLE ft_t5 (id INT PRIMARY KEY, body VARCHAR(500))")
    db.query(
        "INSERT INTO ft_t5 VALUES "
        "(1, 'the sky is blue'), "
        "(2, 'grass is green')"
    )
    db.query("CREATE FULLTEXT INDEX ft_body ON ft_t5 (body)")
    # Querying only stop words → no tokens → no matches
    rows = db.query("SELECT id FROM ft_t5 WHERE MATCH (body) AGAINST ('the is')")
    assert rows == []


def test_match_case_insensitive(db):
    _reset(db, "ft_t6")
    db.query("CREATE TABLE ft_t6 (id INT PRIMARY KEY, body VARCHAR(500))")
    db.query("INSERT INTO ft_t6 VALUES (1, 'PostgreSQL is awesome')")
    db.query("CREATE FULLTEXT INDEX ft_body ON ft_t6 (body)")
    rows = db.query("SELECT id FROM ft_t6 WHERE MATCH (body) AGAINST ('postgresql')")
    assert [int(r[0]) for r in rows] == [1]


def test_match_punctuation_stripped(db):
    _reset(db, "ft_t7")
    db.query("CREATE TABLE ft_t7 (id INT PRIMARY KEY, body VARCHAR(500))")
    db.query("INSERT INTO ft_t7 VALUES (1, 'hello, world!')")
    db.query("CREATE FULLTEXT INDEX ft_body ON ft_t7 (body)")
    rows = db.query("SELECT id FROM ft_t7 WHERE MATCH (body) AGAINST ('world')")
    assert [int(r[0]) for r in rows] == [1]


def test_match_ranking_hit_count(db):
    """MATCH returns hit count — useful in ORDER BY."""
    _reset(db, "ft_t8")
    db.query("CREATE TABLE ft_t8 (id INT PRIMARY KEY, body VARCHAR(500))")
    db.query(
        "INSERT INTO ft_t8 VALUES "
        "(1, 'database'), "
        "(2, 'database engine'), "
        "(3, 'search database engine')"
    )
    db.query("CREATE FULLTEXT INDEX ft_body ON ft_t8 (body)")
    rows = db.query(
        "SELECT id, MATCH (body) AGAINST ('database engine search') FROM ft_t8 "
        "WHERE MATCH (body) AGAINST ('database engine search') "
        "ORDER BY id"
    )
    # id=1: only 'database' → 1 hit
    # id=2: 'database' + 'engine' → 2 hits
    # id=3: all three terms → 3 hits
    assert [(int(r[0]), int(r[1])) for r in rows] == [(1, 1), (2, 2), (3, 3)]


def test_match_without_index(db):
    """MATCH works even if no FULLTEXT index exists (v1 scan-based)."""
    _reset(db, "ft_t9")
    db.query("CREATE TABLE ft_t9 (id INT PRIMARY KEY, body VARCHAR(500))")
    db.query("INSERT INTO ft_t9 VALUES (1, 'no index yet')")
    rows = db.query("SELECT id FROM ft_t9 WHERE MATCH (body) AGAINST ('index')")
    assert [int(r[0]) for r in rows] == [1]


def test_match_short_tokens_filtered(db):
    """Tokens shorter than 2 chars are filtered out."""
    _reset(db, "ft_t10")
    db.query("CREATE TABLE ft_t10 (id INT PRIMARY KEY, body VARCHAR(500))")
    db.query("INSERT INTO ft_t10 VALUES (1, 'a b hello world')")
    db.query("CREATE FULLTEXT INDEX ft_body ON ft_t10 (body)")
    # Single-char 'a' filtered — no match
    rows = db.query("SELECT id FROM ft_t10 WHERE MATCH (body) AGAINST ('a b')")
    assert rows == []
    # 'hello' reaches 5 chars — match
    rows = db.query("SELECT id FROM ft_t10 WHERE MATCH (body) AGAINST ('hello')")
    assert [int(r[0]) for r in rows] == [1]
