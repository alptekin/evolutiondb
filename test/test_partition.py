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


# ── Review-fix regression tests (PR-follow-up to #87) ─────────────────

def test_multi_row_insert_same_partition(db):
    """Multi-row INSERT where every row falls in the same partition must
    still work after the v1 multi-row-spanning guard lands."""
    _drop(db, "pt9_lo", "pt9_hi", "pt9")
    db.query("CREATE TABLE pt9 (id INT PRIMARY KEY, v INT) PARTITION BY RANGE (id)")
    db.query("CREATE TABLE pt9_lo PARTITION OF pt9 FOR VALUES FROM (0) TO (100)")
    db.query("CREATE TABLE pt9_hi PARTITION OF pt9 FOR VALUES FROM (100) TO (200)")

    cols, rows, err, tag = simple_query(
        db._sock, "INSERT INTO pt9 VALUES (1, 10), (2, 20), (3, 30)"
    )
    assert err is None, err
    lo = db.query("SELECT id FROM pt9_lo ORDER BY id")
    assert [int(r[0]) for r in lo] == [1, 2, 3]


def test_multi_row_insert_across_partitions_rejected(db):
    """Cross-partition multi-row INSERT must be rejected up front to
    prevent silent mis-routing (review issue #1)."""
    _drop(db, "pt10_lo", "pt10_hi", "pt10")
    db.query("CREATE TABLE pt10 (id INT PRIMARY KEY) PARTITION BY RANGE (id)")
    db.query("CREATE TABLE pt10_lo PARTITION OF pt10 FOR VALUES FROM (0) TO (50)")
    db.query("CREATE TABLE pt10_hi PARTITION OF pt10 FOR VALUES FROM (50) TO (100)")

    cols, rows, err, tag = simple_query(
        db._sock, "INSERT INTO pt10 VALUES (5), (75)"
    )
    assert err is not None, "cross-partition batch must be rejected"
    # Neither child should have any rows
    assert db.query("SELECT COUNT(*) FROM pt10_lo") == [["0"]]
    assert db.query("SELECT COUNT(*) FROM pt10_hi") == [["0"]]


def test_overlapping_partition_rejected(db):
    """Creating a partition whose range intersects an existing one must
    fail (review issue #2)."""
    _drop(db, "pt11_a", "pt11_b", "pt11")
    db.query("CREATE TABLE pt11 (id INT PRIMARY KEY) PARTITION BY RANGE (id)")
    db.query("CREATE TABLE pt11_a PARTITION OF pt11 FOR VALUES FROM (0) TO (100)")
    cols, rows, err, tag = simple_query(
        db._sock,
        "CREATE TABLE pt11_b PARTITION OF pt11 FOR VALUES FROM (50) TO (200)"
    )
    assert err is not None, "overlapping range must be rejected"
    assert "overlap" in err.lower(), err


def test_negative_bounds(db):
    """Negative FROM bound + negative INSERT value route correctly — and
    the numeric-detection in cat_find_partition_by_value no longer
    mis-classifies strings containing '-' (review issue #3)."""
    _drop(db, "pt12_neg", "pt12_pos", "pt12")
    db.query("CREATE TABLE pt12 (id INT PRIMARY KEY) PARTITION BY RANGE (id)")
    db.query("CREATE TABLE pt12_neg PARTITION OF pt12 FOR VALUES FROM (-100) TO (0)")
    db.query("CREATE TABLE pt12_pos PARTITION OF pt12 FOR VALUES FROM (0) TO (100)")
    db.query("INSERT INTO pt12 VALUES (-42)")
    db.query("INSERT INTO pt12 VALUES (42)")

    assert [int(r[0]) for r in db.query("SELECT id FROM pt12_neg")] == [-42]
    assert [int(r[0]) for r in db.query("SELECT id FROM pt12_pos")] == [42]


def test_pk_uniqueness_documented_gap(db):
    """v1 limitation: each partition has its own PK tree, so the same
    primary-key value can exist in two children simultaneously. This
    test asserts the current (buggy-by-PG-standards) behavior so a
    future enforcement is flagged by a test failure rather than slipping
    in silently (review issue #7)."""
    _drop(db, "pt13_lo", "pt13_hi", "pt13")
    db.query("CREATE TABLE pt13 (id INT PRIMARY KEY, v INT) PARTITION BY RANGE (v)")
    db.query("CREATE TABLE pt13_lo PARTITION OF pt13 FOR VALUES FROM (0) TO (10)")
    db.query("CREATE TABLE pt13_hi PARTITION OF pt13 FOR VALUES FROM (10) TO (20)")
    db.query("INSERT INTO pt13 VALUES (1, 5)")      # routes to pt13_lo
    db.query("INSERT INTO pt13 VALUES (1, 15)")     # routes to pt13_hi, same PK 1

    lo = db.query("SELECT id, v FROM pt13_lo")
    hi = db.query("SELECT id, v FROM pt13_hi")
    assert [(int(r[0]), int(r[1])) for r in lo] == [(1, 5)]
    assert [(int(r[0]), int(r[1])) for r in hi] == [(1, 15)]


def test_drop_parent_cleans_up_children(db):
    """DROP TABLE on a partitioned parent should reclaim the shard
    metadata so child table names can be reused without stale
    conflicts. v1 does not cascade-drop children yet, but the parent
    drop must at least not error."""
    _drop(db, "pt14_p", "pt14")
    db.query("CREATE TABLE pt14 (id INT PRIMARY KEY) PARTITION BY RANGE (id)")
    db.query("CREATE TABLE pt14_p PARTITION OF pt14 FOR VALUES FROM (0) TO (100)")
    cols, rows, err, tag = simple_query(db._sock, "DROP TABLE pt14")
    assert err is None, err
