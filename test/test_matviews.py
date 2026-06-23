"""
test_matviews.py — Materialized views (Task 87, Feature #58)

v1 scope:
  - CREATE MATERIALIZED VIEW name AS <select>  → execute SELECT, store
    results as a regular catalog table, record stored SQL in the view
    catalog with is_materialized=1.
  - REFRESH MATERIALIZED VIEW name             → drop underlying table,
    re-execute the stored SELECT.
  - DROP MATERIALIZED VIEW name                → drop underlying table
    + remove the view entry; refuses on regular (non-materialized)
    views.
  - SELECT from the view works transparently (it's just a real table).
"""

import pytest
from pg_helpers import PGConnection, simple_query


@pytest.fixture
def db():
    c = PGConnection()
    yield c
    c.close()


def _reset(db, name, kind="TABLE"):
    try:
        if kind == "MVIEW":
            db.query(f"DROP MATERIALIZED VIEW {name}")
        elif kind == "VIEW":
            db.query(f"DROP VIEW {name}")
        else:
            db.query(f"DROP TABLE {name}")
    except Exception:
        pass


def test_create_materialized_view(db):
    _reset(db, "mv_src1")
    _reset(db, "mv1", "MVIEW")
    db.query("CREATE TABLE mv_src1 (id INT PRIMARY KEY, v INT)")
    db.query("INSERT INTO mv_src1 VALUES (1, 10), (2, 20), (3, 30)")

    cols, rows, err, tag = simple_query(
        db._sock, "CREATE MATERIALIZED VIEW mv1 AS SELECT id, v FROM mv_src1"
    )
    assert err is None, err
    assert tag == "CREATE MATERIALIZED VIEW", tag

    result = db.query("SELECT id, v FROM mv1 ORDER BY id")
    assert [(int(r[0]), int(r[1])) for r in result] == [(1, 10), (2, 20), (3, 30)]


def test_matview_is_decoupled_from_source(db):
    """Writes to the source table don't leak into the view until REFRESH."""
    _reset(db, "mv_src2")
    _reset(db, "mv2", "MVIEW")
    db.query("CREATE TABLE mv_src2 (id INT PRIMARY KEY, v INT)")
    db.query("INSERT INTO mv_src2 VALUES (1, 100)")
    db.query("CREATE MATERIALIZED VIEW mv2 AS SELECT id, v FROM mv_src2")

    db.query("INSERT INTO mv_src2 VALUES (2, 200)")
    # Before REFRESH, the view still shows only the original row
    result = db.query("SELECT id FROM mv2 ORDER BY id")
    assert [int(r[0]) for r in result] == [1]


def test_refresh_picks_up_source_changes(db):
    _reset(db, "mv_src3")
    _reset(db, "mv3", "MVIEW")
    db.query("CREATE TABLE mv_src3 (id INT PRIMARY KEY, v INT)")
    db.query("INSERT INTO mv_src3 VALUES (1, 100)")
    db.query("CREATE MATERIALIZED VIEW mv3 AS SELECT id, v FROM mv_src3")

    db.query("INSERT INTO mv_src3 VALUES (2, 200), (3, 300)")
    db.query("UPDATE mv_src3 SET v = 999 WHERE id = 1")

    cols, rows, err, tag = simple_query(db._sock, "REFRESH MATERIALIZED VIEW mv3")
    assert err is None, err
    assert tag == "REFRESH MATERIALIZED VIEW", tag

    result = db.query("SELECT id, v FROM mv3 ORDER BY id")
    assert [(int(r[0]), int(r[1])) for r in result] == [(1, 999), (2, 200), (3, 300)]


def test_drop_materialized_view(db):
    _reset(db, "mv_src4")
    _reset(db, "mv4", "MVIEW")
    db.query("CREATE TABLE mv_src4 (id INT PRIMARY KEY)")
    db.query("INSERT INTO mv_src4 VALUES (1)")
    db.query("CREATE MATERIALIZED VIEW mv4 AS SELECT id FROM mv_src4")

    cols, rows, err, tag = simple_query(db._sock, "DROP MATERIALIZED VIEW mv4")
    assert err is None, err
    assert tag == "DROP MATERIALIZED VIEW", tag

    # Underlying table should be gone too
    cols, rows, err, tag = simple_query(db._sock, "SELECT * FROM mv4")
    assert err is not None, "SELECT after DROP MATERIALIZED VIEW must fail"


def test_refresh_nonexistent_view(db):
    cols, rows, err, tag = simple_query(db._sock, "REFRESH MATERIALIZED VIEW no_such_mv")
    assert err is not None, "REFRESH on non-existent view must fail"


def test_drop_matview_on_regular_view_rejected(db):
    _reset(db, "mv_src6")
    _reset(db, "rv6", "VIEW")
    db.query("CREATE TABLE mv_src6 (id INT PRIMARY KEY)")
    db.query("INSERT INTO mv_src6 VALUES (1)")
    db.query("CREATE VIEW rv6 AS SELECT id FROM mv_src6")

    cols, rows, err, tag = simple_query(db._sock, "DROP MATERIALIZED VIEW rv6")
    assert err is not None, "DROP MATERIALIZED VIEW on regular view must fail"


def test_create_matview_duplicate_rejected(db):
    _reset(db, "mv_src7")
    _reset(db, "mv7", "MVIEW")
    db.query("CREATE TABLE mv_src7 (id INT PRIMARY KEY)")
    db.query("INSERT INTO mv_src7 VALUES (1)")
    db.query("CREATE MATERIALIZED VIEW mv7 AS SELECT id FROM mv_src7")

    cols, rows, err, tag = simple_query(
        db._sock, "CREATE MATERIALIZED VIEW mv7 AS SELECT id FROM mv_src7"
    )
    assert err is not None, "duplicate CREATE MATERIALIZED VIEW must fail"


def test_matview_with_where_and_aggregate(db):
    _reset(db, "mv_src8")
    _reset(db, "mv8", "MVIEW")
    db.query("CREATE TABLE mv_src8 (id INT PRIMARY KEY, v INT)")
    db.query(
        "INSERT INTO mv_src8 VALUES "
        "(1, 10), (2, 20), (3, 30), (4, 5)"
    )
    db.query(
        "CREATE MATERIALIZED VIEW mv8 AS "
        "SELECT id, v FROM mv_src8 WHERE v > 8"
    )

    result = db.query("SELECT id FROM mv8 ORDER BY id")
    assert [int(r[0]) for r in result] == [1, 2, 3]
