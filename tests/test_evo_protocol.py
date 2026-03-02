"""
test_evo_protocol.py — EvoSQL native text-based protocol tests

Tests the EVO wire protocol on port 9967.
Protocol:
  - Client sends: EVO\n  →  Server replies: HELLO EvoSQL 1.0\n
  - SQL <len>\n<sql>\n   →  RESULT/OK/ERR + READY
  - QUIT\n               →  BYE\n
"""

import socket
import sys
import time

HOST = "localhost"
PORT = 9967
PASS = 0
FAIL = 0
ERRORS = []

# ── helpers ──────────────────────────────────────────────────────────

class EvoConnection:
    """Minimal EVO protocol client."""

    def __init__(self, host=HOST, port=PORT):
        self.sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
        self.sock.settimeout(5)
        self.sock.connect((host, port))
        self.buf = b""

    def _recv_line(self):
        """Read one \\n-terminated line, return as str (without \\n)."""
        while b"\n" not in self.buf:
            chunk = self.sock.recv(4096)
            if not chunk:
                raise ConnectionError("connection closed")
            self.buf += chunk
        idx = self.buf.index(b"\n")
        line = self.buf[:idx].decode("utf-8", errors="replace")
        self.buf = self.buf[idx+1:]
        return line

    def handshake(self):
        """Send EVO greeting, expect HELLO."""
        self.sock.sendall(b"EVO\n")
        hello = self._recv_line()
        assert hello.startswith("HELLO"), f"Expected HELLO, got: {hello}"
        return hello

    def execute(self, sql):
        """Send a SQL command, return (kind, payload).
        kind = 'OK' | 'ERR' | 'RESULT'
        For RESULT, payload = {'cols': [...], 'rows': [[...]], 'tag': str}
        For OK,     payload = {'tag': str}
        For ERR,    payload = {'sqlstate': str, 'message': str}
        """
        encoded = sql.encode("utf-8")
        header = f"SQL {len(encoded)}\n".encode("utf-8")
        self.sock.sendall(header + encoded + b"\n")

        first = self._recv_line()

        if first.startswith("ERR"):
            # ERR <sqlstate> <message>
            parts = first.split(" ", 2)
            sqlstate = parts[1] if len(parts) > 1 else "?????"
            message  = parts[2] if len(parts) > 2 else ""
            # read READY
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "ERR", {"sqlstate": sqlstate, "message": message}

        if first == "OK":
            # TAG <tag>
            tag_line = self._recv_line()
            tag = tag_line[4:] if tag_line.startswith("TAG ") else tag_line
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "OK", {"tag": tag}

        if first == "RESULT":
            # COLS <n>
            cols_line = self._recv_line()
            num_cols = int(cols_line.split()[1])
            col_names = []
            for _ in range(num_cols):
                col_line = self._recv_line()
                col_names.append(col_line[4:])  # strip "COL "

            rows = []
            while True:
                line = self._recv_line()
                if line == "END":
                    break
                if line == "ROW":
                    row = []
                    for _ in range(num_cols):
                        field_line = self._recv_line()
                        val = field_line[6:]  # strip "FIELD "
                        row.append(None if val == "NULL" else val)
                    rows.append(row)

            tag_line = self._recv_line()
            tag = tag_line[4:] if tag_line.startswith("TAG ") else tag_line
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "RESULT", {"cols": col_names, "rows": rows, "tag": tag}

        raise ValueError(f"Unexpected response: {first}")

    def quit(self):
        self.sock.sendall(b"QUIT\n")
        try:
            bye = self._recv_line()
        except Exception:
            bye = ""
        self.sock.close()
        return bye

    def close(self):
        try:
            self.sock.close()
        except Exception:
            pass


def run_test(name, fn):
    global PASS, FAIL
    try:
        fn()
        PASS += 1
        print(f"  ✓ {name}")
    except Exception as e:
        FAIL += 1
        ERRORS.append((name, str(e)))
        print(f"  ✗ {name}: {e}")


# ── test cases ───────────────────────────────────────────────────────

def test_handshake():
    c = EvoConnection()
    hello = c.handshake()
    assert "EvoSQL" in hello, f"Expected EvoSQL in greeting: {hello}"
    c.quit()

def test_bad_greeting():
    c = EvoConnection()
    c.sock.sendall(b"GARBAGE\n")
    line = c._recv_line()
    assert line.startswith("ERR"), f"Expected ERR, got: {line}"
    c.close()

def test_quit():
    c = EvoConnection()
    c.handshake()
    bye = c.quit()
    assert bye == "BYE", f"Expected BYE, got: {bye}"

def test_create_table():
    c = EvoConnection()
    c.handshake()
    c.execute("DROP TABLE evo_test_tbl")
    kind, payload = c.execute("CREATE TABLE evo_test_tbl (id INT, name VARCHAR(50))")
    assert kind == "OK", f"Expected OK, got {kind}: {payload}"
    c.quit()

def test_insert():
    c = EvoConnection()
    c.handshake()
    c.execute("DROP TABLE evo_test_tbl")
    c.execute("CREATE TABLE evo_test_tbl (id INT, name VARCHAR(50))")
    kind, payload = c.execute("INSERT INTO evo_test_tbl VALUES (1, 'Alice')")
    assert kind == "OK", f"Expected OK, got {kind}: {payload}"
    assert "INSERT" in payload["tag"], f"Expected INSERT tag: {payload}"
    c.quit()

def test_select():
    c = EvoConnection()
    c.handshake()
    c.execute("DROP TABLE evo_test_tbl")
    c.execute("CREATE TABLE evo_test_tbl (id INT, name VARCHAR(50))")
    c.execute("INSERT INTO evo_test_tbl VALUES (1, 'Alice')")
    c.execute("INSERT INTO evo_test_tbl VALUES (2, 'Bob')")
    kind, payload = c.execute("SELECT * FROM evo_test_tbl")
    assert kind == "RESULT", f"Expected RESULT, got {kind}: {payload}"
    assert len(payload["cols"]) == 2, f"Expected 2 cols: {payload['cols']}"
    assert len(payload["rows"]) == 2, f"Expected 2 rows: {payload['rows']}"
    # Check column names
    col_lower = [c.lower() for c in payload["cols"]]
    assert "id" in col_lower, f"Expected 'id' column: {payload['cols']}"
    assert "name" in col_lower, f"Expected 'name' column: {payload['cols']}"
    c.quit()

def test_select_where():
    c = EvoConnection()
    c.handshake()
    c.execute("DROP TABLE evo_test_tbl")
    c.execute("CREATE TABLE evo_test_tbl (id INT, name VARCHAR(50))")
    c.execute("INSERT INTO evo_test_tbl VALUES (1, 'Alice')")
    c.execute("INSERT INTO evo_test_tbl VALUES (2, 'Bob')")
    kind, payload = c.execute("SELECT name FROM evo_test_tbl WHERE id = 1")
    assert kind == "RESULT", f"Expected RESULT, got {kind}: {payload}"
    assert len(payload["rows"]) == 1, f"Expected 1 row: {payload['rows']}"
    assert payload["rows"][0][0] == "Alice", f"Expected Alice: {payload['rows']}"
    c.quit()

def test_update():
    c = EvoConnection()
    c.handshake()
    c.execute("DROP TABLE evo_test_tbl")
    c.execute("CREATE TABLE evo_test_tbl (id INT, name VARCHAR(50))")
    c.execute("INSERT INTO evo_test_tbl VALUES (1, 'Alice')")
    kind, payload = c.execute("UPDATE evo_test_tbl SET name = 'Alicia' WHERE id = 1")
    assert kind == "OK", f"Expected OK, got {kind}: {payload}"
    kind, payload = c.execute("SELECT name FROM evo_test_tbl WHERE id = 1")
    assert payload["rows"][0][0] == "Alicia", f"Expected Alicia: {payload}"
    c.quit()

def test_delete():
    c = EvoConnection()
    c.handshake()
    c.execute("DROP TABLE evo_test_tbl")
    c.execute("CREATE TABLE evo_test_tbl (id INT, name VARCHAR(50))")
    c.execute("INSERT INTO evo_test_tbl VALUES (1, 'Alice')")
    c.execute("INSERT INTO evo_test_tbl VALUES (2, 'Bob')")
    kind, payload = c.execute("DELETE FROM evo_test_tbl WHERE id = 2")
    assert kind == "OK", f"Expected OK, got {kind}: {payload}"
    kind, payload = c.execute("SELECT * FROM evo_test_tbl")
    assert len(payload["rows"]) == 1, f"Expected 1 row after delete: {payload}"
    c.quit()

def test_drop_table():
    c = EvoConnection()
    c.handshake()
    c.execute("DROP TABLE evo_test_tbl")
    c.execute("CREATE TABLE evo_test_tbl (id INT, name VARCHAR(50))")
    kind, payload = c.execute("DROP TABLE evo_test_tbl")
    assert kind == "OK", f"Expected OK: {kind}, {payload}"
    c.quit()

def test_error_handling():
    c = EvoConnection()
    c.handshake()
    kind, payload = c.execute("SELECT * FROM nonexistent_table_xyz")
    assert kind == "ERR", f"Expected ERR, got {kind}: {payload}"
    c.quit()

def test_multiple_queries_same_connection():
    c = EvoConnection()
    c.handshake()
    c.execute("DROP TABLE evo_test_tbl")
    c.execute("CREATE TABLE evo_test_tbl (id INT, val VARCHAR(50))")
    for i in range(5):
        kind, _ = c.execute(f"INSERT INTO evo_test_tbl VALUES ({i}, 'val{i}')")
        assert kind == "OK", f"Insert {i} failed"
    kind, payload = c.execute("SELECT * FROM evo_test_tbl")
    assert kind == "RESULT"
    assert len(payload["rows"]) == 5, f"Expected 5 rows: {len(payload['rows'])}"
    c.execute("DROP TABLE evo_test_tbl")
    c.quit()

def test_null_values():
    c = EvoConnection()
    c.handshake()
    c.execute("DROP TABLE evo_test_null_tbl")
    c.execute("CREATE TABLE evo_test_null_tbl (id INT, name VARCHAR(50))")
    c.execute("INSERT INTO evo_test_null_tbl VALUES (1, NULL)")
    kind, payload = c.execute("SELECT * FROM evo_test_null_tbl")
    assert kind == "RESULT"
    # name should be NULL
    row = payload["rows"][0]
    name_idx = [col.lower() for col in payload["cols"]].index("name")
    assert row[name_idx] is None, f"Expected NULL for name: {row}"
    c.execute("DROP TABLE evo_test_null_tbl")
    c.quit()

def test_unknown_command():
    c = EvoConnection()
    c.handshake()
    c.sock.sendall(b"FOOBAR\n")
    line = c._recv_line()
    assert line.startswith("ERR"), f"Expected ERR for unknown command: {line}"
    ready = c._recv_line()
    assert ready == "READY", f"Expected READY: {ready}"
    c.quit()

def test_multiple_connections():
    """Open two connections simultaneously."""
    c1 = EvoConnection()
    c2 = EvoConnection()
    c1.handshake()
    c2.handshake()

    c1.execute("DROP TABLE evo_test_tbl")
    c1.execute("CREATE TABLE evo_test_tbl (id INT, name VARCHAR(50))")
    c1.execute("INSERT INTO evo_test_tbl VALUES (1, 'Alice')")

    # c2 should see the data
    kind, payload = c2.execute("SELECT * FROM evo_test_tbl")
    assert kind == "RESULT"
    assert len(payload["rows"]) == 1

    c1.execute("DROP TABLE evo_test_tbl")
    c1.quit()
    c2.quit()

def test_show_max_connections():
    c = EvoConnection()
    c.handshake()
    kind, payload = c.execute("SHOW max_connections")
    assert kind == "RESULT", f"Expected RESULT: {kind}, {payload}"
    assert len(payload["rows"]) >= 1
    c.quit()

def test_tag_content():
    """Verify command tags contain expected prefixes."""
    c = EvoConnection()
    c.handshake()
    c.execute("DROP TABLE evo_test_tbl")

    kind, payload = c.execute("CREATE TABLE evo_test_tbl (id INT)")
    assert kind == "OK"
    assert "CREATE" in payload["tag"].upper(), f"Tag: {payload['tag']}"

    kind, payload = c.execute("INSERT INTO evo_test_tbl VALUES (1)")
    assert kind == "OK"
    assert "INSERT" in payload["tag"].upper(), f"Tag: {payload['tag']}"

    kind, payload = c.execute("SELECT * FROM evo_test_tbl")
    assert kind == "RESULT"
    assert "SELECT" in payload["tag"].upper(), f"Tag: {payload['tag']}"

    c.execute("DROP TABLE evo_test_tbl")
    c.quit()


# ── main ─────────────────────────────────────────────────────────────

if __name__ == "__main__":
    print(f"\n{'='*60}")
    print(f"  EVO Protocol Tests  (port {PORT})")
    print(f"{'='*60}")

    tests = [
        ("Handshake", test_handshake),
        ("Bad greeting", test_bad_greeting),
        ("Quit", test_quit),
        ("CREATE TABLE", test_create_table),
        ("INSERT", test_insert),
        ("SELECT", test_select),
        ("SELECT … WHERE", test_select_where),
        ("UPDATE", test_update),
        ("DELETE", test_delete),
        ("DROP TABLE", test_drop_table),
        ("Error handling", test_error_handling),
        ("Multiple queries", test_multiple_queries_same_connection),
        ("NULL values", test_null_values),
        ("Unknown command", test_unknown_command),
        ("Multiple connections", test_multiple_connections),
        ("SHOW max_connections", test_show_max_connections),
        ("Command tags", test_tag_content),
    ]

    for name, fn in tests:
        run_test(name, fn)

    print(f"\n{'─'*60}")
    print(f"  Results: {PASS} passed, {FAIL} failed  (total {PASS+FAIL})")
    if ERRORS:
        print(f"\n  Failures:")
        for name, err in ERRORS:
            print(f"    • {name}: {err}")
    print(f"{'─'*60}\n")

    sys.exit(1 if FAIL > 0 else 0)
