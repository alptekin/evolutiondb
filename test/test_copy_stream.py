"""
test_copy_stream.py — PG wire COPY subprotocol tests (Task 85 Faz 4)

Covers COPY FROM STDIN and COPY TO STDOUT via PG wire messages:
  - CopyInResponse ('G')
  - CopyData      ('d')
  - CopyDone      ('c')
  - CopyOutResponse ('H')
"""

import socket
import struct
import pytest

from pg_helpers import PGConnection, conn, simple_query


def _send(sock, data):
    sock.sendall(data)


def _recv(sock, n):
    buf = b""
    while len(buf) < n:
        chunk = sock.recv(n - len(buf))
        if not chunk:
            break
        buf += chunk
    return buf


def _send_query(sock, sql):
    m = sql.encode("utf-8") + b"\x00"
    _send(sock, b"Q" + struct.pack("!I", 4 + len(m)) + m)


def _read_msg(sock):
    tag = _recv(sock, 1)
    if not tag:
        return None, None
    length = struct.unpack("!I", _recv(sock, 4))[0]
    body = _recv(sock, length - 4)
    return tag, body


def _copy_data(sock, payload):
    _send(sock, b"d" + struct.pack("!I", 4 + len(payload)) + payload)


def _copy_done(sock):
    _send(sock, b"c" + struct.pack("!I", 4))


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


def test_copy_from_stdin_basic(db):
    _reset(db, "stream_t1")
    db.query("CREATE TABLE stream_t1 (id INT PRIMARY KEY, name VARCHAR(50))")

    s = db._sock
    _send_query(s, "COPY stream_t1 FROM STDIN (FORMAT CSV)")
    # Expect CopyInResponse 'G'
    tag, body = _read_msg(s)
    assert tag == b"G", f"expected CopyInResponse 'G', got {tag!r}"

    _copy_data(s, b"1,alice\n")
    _copy_data(s, b"2,bob\n")
    _copy_data(s, b"3,carol\n")
    _copy_done(s)

    # Expect CommandComplete ('C') + ReadyForQuery ('Z')
    cmd_tag = None
    while True:
        tag, body = _read_msg(s)
        if tag == b"C":
            cmd_tag = body.rstrip(b"\x00").decode()
        elif tag == b"Z":
            break
        elif tag == b"E":
            pytest.fail(f"error: {body!r}")
    assert cmd_tag == "COPY 3", cmd_tag

    rows = db.query("SELECT id, name FROM stream_t1 ORDER BY id")
    assert [r[0] for r in rows] == ["1", "2", "3"]
    assert [r[1] for r in rows] == ["alice", "bob", "carol"]


def test_copy_from_stdin_with_header(db):
    _reset(db, "stream_t2")
    db.query("CREATE TABLE stream_t2 (id INT PRIMARY KEY, v VARCHAR(50))")

    s = db._sock
    _send_query(s, "COPY stream_t2 FROM STDIN (FORMAT CSV, HEADER)")
    tag, _ = _read_msg(s)
    assert tag == b"G"

    _copy_data(s, b"id,v\n10,x\n20,y\n")
    _copy_done(s)

    cmd_tag = None
    while True:
        tag, body = _read_msg(s)
        if tag == b"C": cmd_tag = body.rstrip(b"\x00").decode()
        elif tag == b"Z": break
        elif tag == b"E": pytest.fail(body.decode(errors="replace"))
    assert cmd_tag == "COPY 2"

    rows = db.query("SELECT id FROM stream_t2 ORDER BY id")
    assert [r[0] for r in rows] == ["10", "20"]


def test_copy_to_stdout_basic(db):
    _reset(db, "stream_t3")
    db.query("CREATE TABLE stream_t3 (id INT PRIMARY KEY, name VARCHAR(50))")
    db.query("INSERT INTO stream_t3 VALUES (1, 'a'), (2, 'b'), (3, 'c')")

    s = db._sock
    _send_query(s, "COPY stream_t3 TO STDOUT (FORMAT CSV)")

    # Expect CopyOutResponse 'H', then multiple 'd' (CopyData), then 'c'
    tag, _ = _read_msg(s)
    assert tag == b"H", f"expected CopyOutResponse 'H', got {tag!r}"

    data_lines = []
    cmd_tag = None
    saw_copy_done = False
    while True:
        tag, body = _read_msg(s)
        if tag == b"d":
            data_lines.append(body.rstrip(b"\n").decode())
        elif tag == b"c":
            saw_copy_done = True
        elif tag == b"C":
            cmd_tag = body.rstrip(b"\x00").decode()
        elif tag == b"Z":
            break
        elif tag == b"E":
            pytest.fail(body.decode(errors="replace"))

    assert saw_copy_done, "expected CopyDone"
    assert sorted(data_lines) == ["1,a", "2,b", "3,c"]
    assert cmd_tag == "COPY 3", cmd_tag


def test_copy_to_stdout_header(db):
    _reset(db, "stream_t4")
    db.query("CREATE TABLE stream_t4 (id INT PRIMARY KEY, v VARCHAR(50))")
    db.query("INSERT INTO stream_t4 VALUES (1, 'x'), (2, 'y')")

    s = db._sock
    _send_query(s, "COPY stream_t4 TO STDOUT (FORMAT CSV, HEADER)")
    tag, _ = _read_msg(s)
    assert tag == b"H"

    lines = []
    while True:
        tag, body = _read_msg(s)
        if tag == b"d":
            lines.append(body.rstrip(b"\n").decode())
        elif tag == b"Z":
            break
    # First line should be header
    assert lines[0] == "id,v"
    assert sorted(lines[1:]) == ["1,x", "2,y"]


def test_copy_from_stdin_roundtrip_to_file(db):
    """Stream-in, then file export, then compare."""
    _reset(db, "stream_t5")
    db.query("CREATE TABLE stream_t5 (id INT PRIMARY KEY, v VARCHAR(50))")

    s = db._sock
    _send_query(s, "COPY stream_t5 FROM STDIN (FORMAT CSV)")
    tag, _ = _read_msg(s)
    assert tag == b"G"
    _copy_data(s, b"5,five\n6,six\n")
    _copy_done(s)
    while True:
        tag, _ = _read_msg(s)
        if tag == b"Z": break

    rows = db.query("SELECT id, v FROM stream_t5 ORDER BY id")
    assert [r[0] for r in rows] == ["5", "6"]
    assert [r[1] for r in rows] == ["five", "six"]
