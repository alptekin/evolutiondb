"""
test_partition.py — RANGE partitioning (Task 88, Feature #53)

v1 scope:
  - CREATE TABLE t (...) PARTITION BY RANGE (col)
  - CREATE TABLE child PARTITION OF t FOR VALUES FROM (lo) TO (hi)
  - INSERT INTO t routes to the matching child by the partition column
    value (half-open range [lo, hi))
  - SELECT / UPDATE / DELETE target child tables directly in v1 —
    parent-level UNION ALL routing is deferred
"""

import pytest
from pg_helpers import PGConnection, simple_query


@pytest.fixture
def db():
    c = PGConnection()
    yield c
    c.close()


def _drop(db, *names):
    for n in names:
        try: db.query(f"DROP TABLE {n}")
        except Exception: pass


def test_create_partitioned_table(db):
    _drop(db, "pt_p1", "pt_p2", "pt1")
    cols, rows, err, tag = simple_query(
        db._sock,
        "CREATE TABLE pt1 (id INT PRIMARY KEY, v INT) PARTITION BY RANGE (id)"
    )
    assert err is None, err


def test_add_range_partition(db):
    _drop(db, "pt2_p1", "pt2")
    db.query("CREATE TABLE pt2 (id INT PRIMARY KEY, v INT) PARTITION BY RANGE (id)")
    cols, rows, err, tag = simple_query(
        db._sock,
        "CREATE TABLE pt2_p1 PARTITION OF pt2 FOR VALUES FROM (0) TO (100)"
    )
    assert err is None, err


def test_insert_routes_to_partition(db):
    _drop(db, "pt3_lo", "pt3_hi", "pt3")
    db.query("CREATE TABLE pt3 (id INT PRIMARY KEY, v INT) PARTITION BY RANGE (id)")
    db.query("CREATE TABLE pt3_lo PARTITION OF pt3 FOR VALUES FROM (0) TO (50)")
    db.query("CREATE TABLE pt3_hi PARTITION OF pt3 FOR VALUES FROM (50) TO (100)")

    cols, rows, err, tag = simple_query(db._sock, "INSERT INTO pt3 VALUES (5, 500)")
    assert err is None, err
    cols, rows, err, tag = simple_query(db._sock, "INSERT INTO pt3 VALUES (75, 750)")
    assert err is None, err

    lo = db.query("SELECT id, v FROM pt3_lo ORDER BY id")
    hi = db.query("SELECT id, v FROM pt3_hi ORDER BY id")
    assert [(int(r[0]), int(r[1])) for r in lo] == [(5, 500)]
    assert [(int(r[0]), int(r[1])) for r in hi] == [(75, 750)]


def test_insert_out_of_range_rejected(db):
    _drop(db, "pt4_lo", "pt4")
    db.query("CREATE TABLE pt4 (id INT PRIMARY KEY, v INT) PARTITION BY RANGE (id)")
    db.query("CREATE TABLE pt4_lo PARTITION OF pt4 FOR VALUES FROM (0) TO (10)")

    cols, rows, err, tag = simple_query(db._sock, "INSERT INTO pt4 VALUES (99, 1)")
    assert err is not None, "value outside all partitions must error"


def test_range_is_half_open(db):
    """FROM (10) TO (20) includes 10, excludes 20."""
    _drop(db, "pt5_a", "pt5_b", "pt5")
    db.query("CREATE TABLE pt5 (id INT PRIMARY KEY) PARTITION BY RANGE (id)")
    db.query("CREATE TABLE pt5_a PARTITION OF pt5 FOR VALUES FROM (0) TO (20)")
    db.query("CREATE TABLE pt5_b PARTITION OF pt5 FOR VALUES FROM (20) TO (40)")

    db.query("INSERT INTO pt5 VALUES (10)")
    db.query("INSERT INTO pt5 VALUES (19)")
    db.query("INSERT INTO pt5 VALUES (20)")
    db.query("INSERT INTO pt5 VALUES (39)")

    a = [int(r[0]) for r in db.query("SELECT id FROM pt5_a ORDER BY id")]
    b = [int(r[0]) for r in db.query("SELECT id FROM pt5_b ORDER BY id")]
    assert a == [10, 19]
    assert b == [20, 39]


def test_partition_of_non_partitioned_rejected(db):
    _drop(db, "regular_t", "reg_part")
    db.query("CREATE TABLE regular_t (id INT PRIMARY KEY)")
    cols, rows, err, tag = simple_query(
        db._sock,
        "CREATE TABLE reg_part PARTITION OF regular_t FOR VALUES FROM (0) TO (10)"
    )
    assert err is not None, "cannot create a partition of a non-partitioned table"


def test_invalid_bounds_rejected(db):
    _drop(db, "pt7_bad", "pt7")
    db.query("CREATE TABLE pt7 (id INT PRIMARY KEY) PARTITION BY RANGE (id)")
    cols, rows, err, tag = simple_query(
        db._sock,
        "CREATE TABLE pt7_bad PARTITION OF pt7 FOR VALUES FROM (50) TO (10)"
    )
    assert err is not None, "FROM >= TO must be rejected"


def test_select_from_children_directly(db):
    """v1 contract: users SELECT from child tables, not the parent."""
    _drop(db, "pt8_p", "pt8")
    db.query("CREATE TABLE pt8 (id INT PRIMARY KEY, v VARCHAR(50)) PARTITION BY RANGE (id)")
    db.query("CREATE TABLE pt8_p PARTITION OF pt8 FOR VALUES FROM (0) TO (1000)")
    db.query("INSERT INTO pt8 VALUES (1, 'first'), (2, 'second')")

    result = db.query("SELECT id, v FROM pt8_p ORDER BY id")
    assert [(int(r[0]), r[1]) for r in result] == [(1, 'first'), (2, 'second')]
