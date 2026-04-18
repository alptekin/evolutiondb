"""
test_evo_copy.py — COPY via EVO native text protocol (Task 85 Faz 5)

Handshake sequence:
  C -> "EVO\\n"
  S -> "HELLO EvoSQL 1.0\\n"
  S -> "STARTTLS\\n"       (when TLS configured)
  C -> "NO\\n"              (decline TLS for this test)
  S -> "AUTH_SCRAM\\n"
  C -> "AUTH admin admin\\n"  (legacy cleartext path, still supported)

Query:
  C -> "SQL <len>\\n<sql>\\n"
  S -> result frames terminated by "READY\\n"

COPY FROM STDIN:
  S -> "COPY_READY\\n"
  C -> one CSV line per row, \\n-terminated
  C -> "\\\\.\\n"
  S -> "OK\\nTAG COPY <n>\\nREADY\\n"

COPY TO STDOUT:
  S -> "COPY_READY\\n"
  S -> "D:<line>\\n" per row
  S -> "\\\\.\\n"
  S -> "OK\\nTAG COPY <n>\\nREADY\\n"
"""

import socket
import pytest

HOST = "127.0.0.1"
PORT = 9967


class EvoClient:
    def __init__(self, host=HOST, port=PORT):
        self.sock = socket.socket()
        self.sock.settimeout(10)
        self.sock.connect((host, port))
        self.rbuf = b""
        self._handshake()

    def _recv_line(self):
        while b"\n" not in self.rbuf:
            chunk = self.sock.recv(4096)
            if not chunk:
                raise RuntimeError("connection closed")
            self.rbuf += chunk
        line, _, rest = self.rbuf.partition(b"\n")
        self.rbuf = rest
        return line.decode()

    def _send(self, s):
        self.sock.sendall(s.encode() if isinstance(s, str) else s)

    def _handshake(self):
        self._send("EVO\n")
        hello = self._recv_line()
        assert hello.startswith("HELLO"), hello
        # STARTTLS (if TLS enabled) or AUTH_SCRAM directly
        next_line = self._recv_line()
        if next_line == "STARTTLS":
            # Decline TLS to keep the test simple
            self._send("NO\n")
            auth_line = self._recv_line()
        else:
            auth_line = next_line
        assert auth_line == "AUTH_SCRAM", f"unexpected: {auth_line!r}"
        # Legacy cleartext path
        self._send("AUTH admin admin\n")

    def query(self, sql):
        payload = f"SQL {len(sql)}\n{sql}\n"
        self._send(payload)
        lines = []
        while True:
            line = self._recv_line()
            if line == "READY":
                return lines
            lines.append(line)

    def query_copy_from(self, sql, rows):
        """Send a COPY FROM STDIN query, then stream rows. Returns tag."""
        payload = f"SQL {len(sql)}\n{sql}\n"
        self._send(payload)
        line = self._recv_line()
        assert line == "COPY_READY", line
        for r in rows:
            self._send(r + "\n")
        self._send("\\.\n")
        ok = self._recv_line()
        assert ok == "OK", ok
        tag = self._recv_line()
        ready = self._recv_line()
        assert ready == "READY", ready
        return tag

    def query_copy_to(self, sql):
        payload = f"SQL {len(sql)}\n{sql}\n"
        self._send(payload)
        first = self._recv_line()
        assert first == "COPY_READY", first
        rows = []
        while True:
            line = self._recv_line()
            if line == "\\.": break
            if line.startswith("D:"): rows.append(line[2:])
            if line.startswith("ERR"): raise AssertionError(line)
        ok = self._recv_line()
        tag = self._recv_line()
        ready = self._recv_line()
        assert ok == "OK"
        assert ready == "READY"
        return tag, rows

    def close(self):
        try: self._send("QUIT\n")
        except Exception: pass
        self.sock.close()


@pytest.fixture
def c():
    cl = EvoClient()
    yield cl
    cl.close()


def _reset(c, tbl):
    try: c.query(f"SQL {len('DROP TABLE ' + tbl)}")
    except Exception: pass


def test_evo_copy_from_stdin(c):
    c.query(f"DROP TABLE evo_ct1")
    c.query("CREATE TABLE evo_ct1 (id INT PRIMARY KEY, n VARCHAR(50))")
    tag = c.query_copy_from(
        "COPY evo_ct1 FROM STDIN (FORMAT CSV)",
        ["1,alpha", "2,beta", "3,gamma"],
    )
    assert tag == "TAG COPY 3", tag

    # Verify via SELECT
    resp = c.query("SELECT id, n FROM evo_ct1 ORDER BY id")
    text = "\n".join(resp)
    assert "alpha" in text and "beta" in text and "gamma" in text


def test_evo_copy_to_stdout(c):
    c.query("DROP TABLE evo_ct2")
    c.query("CREATE TABLE evo_ct2 (id INT PRIMARY KEY, s VARCHAR(50))")
    c.query("INSERT INTO evo_ct2 VALUES (1, 'a'), (2, 'b')")

    tag, rows = c.query_copy_to("COPY evo_ct2 TO STDOUT (FORMAT CSV)")
    assert tag == "TAG COPY 2", tag
    assert sorted(rows) == ["1,a", "2,b"]


def test_evo_copy_roundtrip(c):
    c.query("DROP TABLE evo_ct3a")
    c.query("DROP TABLE evo_ct3b")
    c.query("CREATE TABLE evo_ct3a (id INT PRIMARY KEY, v VARCHAR(50))")
    c.query("CREATE TABLE evo_ct3b (id INT PRIMARY KEY, v VARCHAR(50))")
    c.query("INSERT INTO evo_ct3a VALUES (10, 'x'), (20, 'y')")

    tag, rows = c.query_copy_to("COPY evo_ct3a TO STDOUT (FORMAT CSV)")
    assert tag == "TAG COPY 2"
    tag2 = c.query_copy_from(
        "COPY evo_ct3b FROM STDIN (FORMAT CSV)",
        rows,
    )
    assert tag2 == "TAG COPY 2"

    out = c.query("SELECT id, v FROM evo_ct3b ORDER BY id")
    joined = "\n".join(out)
    assert "10" in joined and "20" in joined
