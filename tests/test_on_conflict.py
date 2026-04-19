"""
test_on_conflict.py — Tests for ON CONFLICT (Task 84, Feature #57)

Covers PostgreSQL UPSERT syntax:
    INSERT ... ON CONFLICT (col) DO NOTHING
    INSERT ... ON CONFLICT (col) DO UPDATE SET ... [= EXCLUDED.x + ...]
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


def test_do_nothing_on_pk_conflict(db):
    _reset(db, "oc_t1")
    db.query("CREATE TABLE oc_t1 (id INT PRIMARY KEY, name VARCHAR(50))")
    db.query("INSERT INTO oc_t1 VALUES (1, 'alice')")

    cols, rows, err, tag = simple_query(
        db._sock, "INSERT INTO oc_t1 VALUES (1, 'bob') ON CONFLICT (id) DO NOTHING"
    )
    assert err is None, err

    result = db.query("SELECT name FROM oc_t1 WHERE id = 1")
    assert result[0][0] == "alice", "DO NOTHING must preserve existing row"


def test_do_update_overwrites(db):
    _reset(db, "oc_t2")
    db.query("CREATE TABLE oc_t2 (id INT PRIMARY KEY, name VARCHAR(50))")
    db.query("INSERT INTO oc_t2 VALUES (1, 'alice')")

    cols, rows, err, tag = simple_query(
        db._sock,
        "INSERT INTO oc_t2 VALUES (1, 'bob') "
        "ON CONFLICT (id) DO UPDATE SET name = 'bob'"
    )
    assert err is None, err

    result = db.query("SELECT name FROM oc_t2 WHERE id = 1")
    assert result[0][0] == "bob"


def test_excluded_column_reference(db):
    _reset(db, "oc_t3")
    db.query("CREATE TABLE oc_t3 (id INT PRIMARY KEY, name VARCHAR(50))")
    db.query("INSERT INTO oc_t3 VALUES (1, 'alice')")

    cols, rows, err, tag = simple_query(
        db._sock,
        "INSERT INTO oc_t3 VALUES (1, 'charlie') "
        "ON CONFLICT (id) DO UPDATE SET name = EXCLUDED.name"
    )
    assert err is None, err

    result = db.query("SELECT name FROM oc_t3 WHERE id = 1")
    assert result[0][0] == "charlie", (
        f"EXCLUDED.name should carry the INSERT value, got {result[0][0]!r}"
    )


def test_excluded_arithmetic(db):
    _reset(db, "oc_t4")
    db.query("CREATE TABLE oc_t4 (id INT PRIMARY KEY, counter INT)")
    db.query("INSERT INTO oc_t4 VALUES (1, 10)")

    cols, rows, err, tag = simple_query(
        db._sock,
        "INSERT INTO oc_t4 VALUES (1, 5) "
        "ON CONFLICT (id) DO UPDATE SET counter = counter + EXCLUDED.counter"
    )
    assert err is None, err

    result = db.query("SELECT counter FROM oc_t4 WHERE id = 1")
    assert int(result[0][0]) == 15, f"expected 10+5=15, got {result[0][0]}"


def test_insert_path_no_conflict(db):
    _reset(db, "oc_t5")
    db.query("CREATE TABLE oc_t5 (id INT PRIMARY KEY, name VARCHAR(50))")

    cols, rows, err, tag = simple_query(
        db._sock,
        "INSERT INTO oc_t5 VALUES (42, 'x') ON CONFLICT (id) DO NOTHING"
    )
    assert err is None, err

    result = db.query("SELECT COUNT(*) FROM oc_t5")
    assert int(result[0][0]) == 1


def test_multi_row_partial_conflict(db):
    """Multi-row INSERT with one duplicate — DO NOTHING should let the
    conflict-free rows land and silently skip the dup."""
    _reset(db, "oc_t6")
    db.query("CREATE TABLE oc_t6 (id INT PRIMARY KEY, v VARCHAR(50))")
    db.query("INSERT INTO oc_t6 VALUES (2, 'existing')")

    cols, rows, err, tag = simple_query(
        db._sock,
        "INSERT INTO oc_t6 VALUES (1,'a'), (2,'new'), (3,'c') "
        "ON CONFLICT (id) DO NOTHING"
    )
    assert err is None, err

    result = db.query("SELECT id, v FROM oc_t6 ORDER BY id")
    assert [int(r[0]) for r in result] == [1, 2, 3]
    assert result[1][1] == "existing", "row 2 must keep original value under DO NOTHING"


def test_do_update_uses_excluded_and_existing(db):
    _reset(db, "oc_t7")
    db.query("CREATE TABLE oc_t7 (id INT PRIMARY KEY, tag VARCHAR(50), cnt INT)")
    db.query("INSERT INTO oc_t7 VALUES (1, 'hello', 100)")

    cols, rows, err, tag = simple_query(
        db._sock,
        "INSERT INTO oc_t7 VALUES (1, 'world', 1) "
        "ON CONFLICT (id) DO UPDATE SET tag = EXCLUDED.tag, cnt = cnt + 1"
    )
    assert err is None, err

    result = db.query("SELECT tag, cnt FROM oc_t7 WHERE id = 1")
    assert result[0][0] == "world"
    assert int(result[0][1]) == 101


def test_do_nothing_on_unique_index(db):
    _reset(db, "oc_t8")
    db.query("CREATE TABLE oc_t8 (id INT PRIMARY KEY, email VARCHAR(100) UNIQUE)")
    db.query("INSERT INTO oc_t8 VALUES (1, 'a@x.com')")

    cols, rows, err, tag = simple_query(
        db._sock,
        "INSERT INTO oc_t8 VALUES (2, 'a@x.com') ON CONFLICT (email) DO NOTHING"
    )
    assert err is None, err
    result = db.query("SELECT COUNT(*) FROM oc_t8")
    assert int(result[0][0]) == 1, "UNIQUE conflict under DO NOTHING must not insert"


def test_do_nothing_without_conflict_target(db):
    """PG allows ON CONFLICT DO NOTHING with no explicit target — any
    unique conflict is silently absorbed."""
    _reset(db, "oc_t9")
    db.query("CREATE TABLE oc_t9 (id INT PRIMARY KEY, v VARCHAR(50))")
    db.query("INSERT INTO oc_t9 VALUES (1, 'first')")

    cols, rows, err, tag = simple_query(
        db._sock, "INSERT INTO oc_t9 VALUES (1, 'second') ON CONFLICT DO NOTHING"
    )
    assert err is None, err
    result = db.query("SELECT v FROM oc_t9 WHERE id = 1")
    assert result[0][0] == "first"


def test_rollback_on_explicit_transaction(db):
    _reset(db, "oc_t10")
    db.query("CREATE TABLE oc_t10 (id INT PRIMARY KEY, n INT)")
    db.query("INSERT INTO oc_t10 VALUES (1, 10)")

    db.query("BEGIN")
    cols, rows, err, tag = simple_query(
        db._sock,
        "INSERT INTO oc_t10 VALUES (1, 99) "
        "ON CONFLICT (id) DO UPDATE SET n = 99"
    )
    assert err is None, err
    db.query("ROLLBACK")

    result = db.query("SELECT n FROM oc_t10 WHERE id = 1")
    assert int(result[0][0]) == 10, "ROLLBACK must restore original value"
