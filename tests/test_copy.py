"""
test_copy.py — Tests for COPY command (Task 85, Feature #61)

Covers server-side file mode:
  - COPY FROM '/path' CSV / TEXT
  - COPY TO '/path' CSV / TEXT
  - HEADER, DELIMITER, NULL, QUOTE options
  - Path traversal rejection

Stream mode (STDIN/STDOUT) is out-of-scope until Faz 4/5.
"""

import os
import tempfile
import pytest

from pg_helpers import PGConnection, simple_query, conn

# Server runs in Docker; /tmp on host is bind-mounted at /host-tmp inside the
# container. Tests write files under /tmp on the host and tell the server to
# use the /host-tmp/... path.
HOST_TMP = "/tmp"
CONTAINER_TMP = "/host-tmp"


def _tmp(prefix):
    """Return (host_path, container_path) for a new CSV fixture file."""
    fd, host_path = tempfile.mkstemp(prefix=prefix, suffix=".csv", dir=HOST_TMP)
    os.close(fd)
    os.unlink(host_path)
    base = os.path.basename(host_path)
    return host_path, f"{CONTAINER_TMP}/{base}"


@pytest.fixture
def db():
    c = PGConnection()
    yield c
    c.close()


def _reset(db, tbl):
    try:
        db.query(f"DROP TABLE {tbl}")
    except Exception:
        pass


def test_copy_from_csv_basic(db):
    _reset(db, "copy_t1")
    db.query("CREATE TABLE copy_t1 (id INT PRIMARY KEY, name VARCHAR(50))")
    host_path, path = _tmp("copy_t1_")
    with open(host_path, "w") as f:
        f.write("1,alice\n2,bob\n3,carol\n")
    try:
        cols, rows, err, tag = simple_query(
            db._sock, f"COPY copy_t1 FROM '{path}' (FORMAT CSV)"
        )
        assert err is None, f"COPY FROM failed: {err}"
        assert tag == "COPY 3", f"expected 'COPY 3' got {tag!r}"

        result = db.query("SELECT id, name FROM copy_t1 ORDER BY id")
        assert [r[0] for r in result] == ["1", "2", "3"]
        assert [r[1] for r in result] == ["alice", "bob", "carol"]
    finally:
        os.unlink(host_path)


def test_copy_to_csv_basic(db):
    _reset(db, "copy_t2")
    db.query("CREATE TABLE copy_t2 (id INT PRIMARY KEY, name VARCHAR(50))")
    db.query("INSERT INTO copy_t2 VALUES (1, 'alice'), (2, 'bob')")
    host_path, path = _tmp("copy_t2_")
    try:
        cols, rows, err, tag = simple_query(
            db._sock, f"COPY copy_t2 TO '{path}' (FORMAT CSV)"
        )
        assert err is None, f"COPY TO failed: {err}"
        assert tag == "COPY 2", f"expected 'COPY 2' got {tag!r}"

        with open(host_path) as f:
            content = f.read().strip().splitlines()
        content.sort()
        assert content == ["1,alice", "2,bob"]
    finally:
        os.unlink(host_path)


def test_copy_from_with_header(db):
    _reset(db, "copy_t3")
    db.query("CREATE TABLE copy_t3 (id INT PRIMARY KEY, name VARCHAR(50))")
    host_path, path = _tmp("copy_t3_")
    with open(host_path, "w") as f:
        f.write("id,name\n10,x\n20,y\n")
    try:
        cols, rows, err, tag = simple_query(
            db._sock, f"COPY copy_t3 FROM '{path}' (FORMAT CSV, HEADER)"
        )
        assert err is None, err
        assert tag == "COPY 2"
        result = db.query("SELECT id FROM copy_t3 ORDER BY id")
        assert [r[0] for r in result] == ["10", "20"]
    finally:
        os.unlink(host_path)


def test_copy_to_with_header(db):
    _reset(db, "copy_t4")
    db.query("CREATE TABLE copy_t4 (id INT PRIMARY KEY, name VARCHAR(50))")
    db.query("INSERT INTO copy_t4 VALUES (1, 'a'), (2, 'b')")
    host_path, path = _tmp("copy_t4_")
    try:
        cols, rows, err, tag = simple_query(
            db._sock, f"COPY copy_t4 TO '{path}' (FORMAT CSV, HEADER)"
        )
        assert err is None, err
        with open(host_path) as f:
            lines = f.read().strip().splitlines()
        assert lines[0] == "id,name", f"header: {lines[0]!r}"
        assert sorted(lines[1:]) == ["1,a", "2,b"]
    finally:
        os.unlink(host_path)


def test_copy_delimiter_pipe(db):
    _reset(db, "copy_t5")
    db.query("CREATE TABLE copy_t5 (id INT PRIMARY KEY, name VARCHAR(50))")
    host_path, path = _tmp("copy_t5_")
    with open(host_path, "w") as f:
        f.write("1|alpha\n2|beta\n")
    try:
        cols, rows, err, tag = simple_query(
            db._sock, f"COPY copy_t5 FROM '{path}' (FORMAT CSV, DELIMITER '|')"
        )
        assert err is None, err
        assert tag == "COPY 2"
        result = db.query("SELECT name FROM copy_t5 ORDER BY id")
        assert [r[0] for r in result] == ["alpha", "beta"]
    finally:
        os.unlink(host_path)


def test_copy_quoted_field_with_comma(db):
    _reset(db, "copy_t6")
    db.query("CREATE TABLE copy_t6 (id INT PRIMARY KEY, note VARCHAR(100))")
    host_path, path = _tmp("copy_t6_")
    with open(host_path, "w") as f:
        f.write('1,"hello, world"\n2,"she said ""hi"""\n')
    try:
        cols, rows, err, tag = simple_query(
            db._sock, f"COPY copy_t6 FROM '{path}' (FORMAT CSV)"
        )
        assert err is None, err
        assert tag == "COPY 2"
        result = db.query("SELECT note FROM copy_t6 ORDER BY id")
        assert result[0][0] == "hello, world"
        assert result[1][0] == 'she said "hi"'
    finally:
        os.unlink(host_path)


def test_copy_roundtrip(db):
    """COPY TO then COPY FROM — exported data must re-import identically."""
    _reset(db, "copy_t7a")
    _reset(db, "copy_t7b")
    db.query("CREATE TABLE copy_t7a (id INT PRIMARY KEY, s VARCHAR(100))")
    db.query("CREATE TABLE copy_t7b (id INT PRIMARY KEY, s VARCHAR(100))")
    db.query("INSERT INTO copy_t7a VALUES (1, 'foo'), (2, 'bar'), (3, 'baz')")
    host_path, path = _tmp("copy_t7_")
    try:
        cols, rows, err, tag = simple_query(
            db._sock, f"COPY copy_t7a TO '{path}' (FORMAT CSV)"
        )
        assert err is None and tag == "COPY 3"
        cols, rows, err, tag = simple_query(
            db._sock, f"COPY copy_t7b FROM '{path}' (FORMAT CSV)"
        )
        assert err is None and tag == "COPY 3"
        original = sorted(db.query("SELECT id, s FROM copy_t7a"))
        roundtripped = sorted(db.query("SELECT id, s FROM copy_t7b"))
        assert original == roundtripped
    finally:
        os.unlink(host_path)


def test_copy_path_traversal_rejected(db):
    _reset(db, "copy_t8")
    db.query("CREATE TABLE copy_t8 (id INT PRIMARY KEY)")
    cols, rows, err, tag = simple_query(
        db._sock, "COPY copy_t8 FROM '/tmp/../etc/passwd' (FORMAT CSV)"
    )
    assert err is not None, "path traversal must be rejected"
    assert "'..'" in err or "absolute" in err.lower()


def test_copy_relative_path_rejected(db):
    _reset(db, "copy_t9")
    db.query("CREATE TABLE copy_t9 (id INT PRIMARY KEY)")
    cols, rows, err, tag = simple_query(
        db._sock, "COPY copy_t9 FROM 'relative.csv' (FORMAT CSV)"
    )
    assert err is not None, "relative path must be rejected"


def test_copy_large_file(db):
    _reset(db, "copy_t10")
    db.query("CREATE TABLE copy_t10 (id INT PRIMARY KEY, v VARCHAR(50))")
    host_path, path = _tmp("copy_t10_")
    n = 500
    with open(host_path, "w") as f:
        for i in range(n):
            f.write(f"{i},v_{i}\n")
    try:
        cols, rows, err, tag = simple_query(
            db._sock, f"COPY copy_t10 FROM '{path}' (FORMAT CSV)"
        )
        assert err is None, err
        assert tag == f"COPY {n}"
        result = db.query("SELECT COUNT(*) FROM copy_t10")
        assert int(result[0][0]) == n
    finally:
        os.unlink(host_path)


def test_copy_from_rolls_back_whole_stream_on_error(db):
    """PG/MySQL semantics: a COPY FROM that errors mid-stream must leave
    the table unchanged — no partial rows survive the failed statement.

    Triggered here by a PRIMARY KEY collision on the 3rd row; the first two
    rows succeed under the same auto-committed xid, then InsertProcess
    aborts. The abort path must clog_set_aborted the xid so MVCC hides all
    of that xid's inserts."""
    _reset(db, "copy_rb")
    db.query("CREATE TABLE copy_rb (id INT PRIMARY KEY, v VARCHAR(50))")
    host_path, path = _tmp("copy_rb_")
    with open(host_path, "w") as f:
        f.write("1,a\n2,b\n1,duplicate\n3,c\n")   # row 3 collides with row 1
    try:
        cols, rows, err, tag = simple_query(
            db._sock, f"COPY copy_rb FROM '{path}' (FORMAT CSV)"
        )
        assert err is not None, "expected PK conflict error"
        result = db.query("SELECT COUNT(*) FROM copy_rb")
        assert int(result[0][0]) == 0, (
            f"COPY must roll back partial inserts, found {result[0][0]} rows"
        )
    finally:
        os.unlink(host_path)
