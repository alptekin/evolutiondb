"""
test_prepared_stmt.py — EVO protocol prepared statement tests

Tests PREPARE / EXECUTE / DEALLOCATE commands on port 9967.
Protocol:
  PREPARE <name> <byte_length>\n<sql>\n  ->  OK\nTAG PREPARE\nREADY\n
  EXECUTE <name> <param_count>\n<p1>\n...  ->  RESULT/OK/ERR + READY\n
  DEALLOCATE <name>\n                     ->  OK\nTAG DEALLOCATE\nREADY\n
"""

import socket
import sys

HOST = "localhost"
PORT = 9967
PASS = 0
FAIL = 0
ERRORS = []


# -- helpers ---------------------------------------------------------------

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
        self.buf = self.buf[idx + 1:]
        return line

    def handshake(self, user="admin", password="admin"):
        """Send EVO greeting, handle STARTTLS, handle AUTH, expect HELLO."""
        self.sock.sendall(b"EVO\n")
        hello = self._recv_line()
        assert hello.startswith("HELLO"), f"Expected HELLO, got: {hello}"

        line = self._recv_line()
        if line == "STARTTLS":
            self.sock.sendall(b"NOTLS\n")
            line = self._recv_line()

        if line in ("AUTH_REQUIRED", "AUTH_SCRAM"):
            self.sock.sendall(f"AUTH {user} {password}\n".encode("utf-8"))
            auth_result = self._recv_line()
            if auth_result != "AUTH_OK":
                raise RuntimeError(f"Authentication failed: {auth_result}")

        return hello

    def execute(self, sql):
        """Send a SQL command, return (kind, payload)."""
        encoded = sql.encode("utf-8")
        header = f"SQL {len(encoded)}\n".encode("utf-8")
        self.sock.sendall(header + encoded + b"\n")

        first = self._recv_line()

        if first.startswith("ERR"):
            parts = first.split(" ", 2)
            sqlstate = parts[1] if len(parts) > 1 else "?????"
            message = parts[2] if len(parts) > 2 else ""
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "ERR", {"sqlstate": sqlstate, "message": message}

        if first == "OK":
            tag_line = self._recv_line()
            tag = tag_line[4:] if tag_line.startswith("TAG ") else tag_line
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "OK", {"tag": tag}

        if first == "RESULT":
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

    def prepare(self, name, sql):
        """PREPARE <name> <byte_length>\\n<sql>\\n -> (kind, payload)"""
        encoded = sql.encode("utf-8")
        header = f"PREPARE {name} {len(encoded)}\n".encode("utf-8")
        self.sock.sendall(header + encoded + b"\n")

        first = self._recv_line()

        if first.startswith("ERR"):
            parts = first.split(" ", 2)
            sqlstate = parts[1] if len(parts) > 1 else "?????"
            message = parts[2] if len(parts) > 2 else ""
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "ERR", {"sqlstate": sqlstate, "message": message}

        if first == "OK":
            tag_line = self._recv_line()
            tag = tag_line[4:] if tag_line.startswith("TAG ") else tag_line
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "OK", {"tag": tag}

        raise ValueError(f"Unexpected PREPARE response: {first}")

    def execute_prepared(self, name, params=None):
        """EXECUTE <name> <param_count>\\n<p1>\\n... -> (kind, payload)"""
        if params is None:
            params = []
        header = f"EXECUTE {name} {len(params)}\n".encode("utf-8")
        self.sock.sendall(header)
        for p in params:
            if p is None:
                self.sock.sendall(b"\\N\n")
            else:
                self.sock.sendall(f"{p}\n".encode("utf-8"))

        first = self._recv_line()

        if first.startswith("ERR"):
            parts = first.split(" ", 2)
            sqlstate = parts[1] if len(parts) > 1 else "?????"
            message = parts[2] if len(parts) > 2 else ""
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "ERR", {"sqlstate": sqlstate, "message": message}

        if first == "OK":
            tag_line = self._recv_line()
            tag = tag_line[4:] if tag_line.startswith("TAG ") else tag_line
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "OK", {"tag": tag}

        if first == "RESULT":
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

        raise ValueError(f"Unexpected EXECUTE response: {first}")

    def deallocate(self, name):
        """DEALLOCATE <name>\\n -> (kind, payload)"""
        self.sock.sendall(f"DEALLOCATE {name}\n".encode("utf-8"))

        first = self._recv_line()

        if first.startswith("ERR"):
            parts = first.split(" ", 2)
            sqlstate = parts[1] if len(parts) > 1 else "?????"
            message = parts[2] if len(parts) > 2 else ""
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "ERR", {"sqlstate": sqlstate, "message": message}

        if first == "OK":
            tag_line = self._recv_line()
            tag = tag_line[4:] if tag_line.startswith("TAG ") else tag_line
            ready = self._recv_line()
            assert ready == "READY", f"Expected READY, got: {ready}"
            return "OK", {"tag": tag}

        raise ValueError(f"Unexpected DEALLOCATE response: {first}")

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
        print(f"  PASS {name}")
    except Exception as e:
        FAIL += 1
        ERRORS.append((name, str(e)))
        print(f"  FAIL {name}: {e}")


# -- setup / teardown helpers ---------------------------------------------

TABLE = "evo_prep_test"


def _fresh_table(c):
    """Drop and recreate the test table."""
    c.execute(f"DROP TABLE {TABLE}")
    c.execute(f"CREATE TABLE {TABLE} (id INT, name VARCHAR(100), val INT)")


def _insert_rows(c, rows):
    """Insert rows as (id, name, val) tuples using plain SQL."""
    for row in rows:
        id_, name, val = row
        name_lit = f"'{name}'" if name is not None else "NULL"
        val_lit = str(val) if val is not None else "NULL"
        c.execute(f"INSERT INTO {TABLE} VALUES ({id_}, {name_lit}, {val_lit})")


# -- test cases ------------------------------------------------------------

def test_prepare_execute_basic_select():
    """PREPARE + EXECUTE a simple SELECT with no parameters."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)
    _insert_rows(c, [(1, "Alice", 10), (2, "Bob", 20)])

    kind, payload = c.prepare("q1", f"SELECT * FROM {TABLE}")
    assert kind == "OK", f"PREPARE failed: {kind} {payload}"
    assert payload["tag"] == "PREPARE", f"Expected PREPARE tag: {payload['tag']}"

    kind, payload = c.execute_prepared("q1")
    assert kind == "RESULT", f"EXECUTE failed: {kind} {payload}"
    assert len(payload["rows"]) == 2, f"Expected 2 rows, got {len(payload['rows'])}"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


def test_prepare_execute_insert_with_params():
    """PREPARE + EXECUTE an INSERT with $1, $2, $3 parameters."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)

    kind, _ = c.prepare("ins1", f"INSERT INTO {TABLE} VALUES ($1, $2, $3)")
    assert kind == "OK", f"PREPARE failed: {kind}"

    kind, payload = c.execute_prepared("ins1", ["10", "Charlie", "30"])
    assert kind == "OK", f"EXECUTE INSERT failed: {kind} {payload}"
    assert "INSERT" in payload["tag"].upper(), f"Expected INSERT tag: {payload['tag']}"

    # Verify the row was inserted
    kind, payload = c.execute(f"SELECT * FROM {TABLE} WHERE id = 10")
    assert kind == "RESULT"
    assert len(payload["rows"]) == 1, f"Expected 1 row, got {len(payload['rows'])}"
    row = payload["rows"][0]
    name_idx = [col.lower().split()[0] for col in payload["cols"]].index("name")
    assert row[name_idx] == "Charlie", f"Expected Charlie, got {row[name_idx]}"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


def test_execute_multiple_times_different_params():
    """PREPARE once, EXECUTE multiple times with different parameter sets."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)

    kind, _ = c.prepare("ins_multi", f"INSERT INTO {TABLE} VALUES ($1, $2, $3)")
    assert kind == "OK"

    for i in range(5):
        kind, payload = c.execute_prepared("ins_multi", [str(i), f"user_{i}", str(i * 10)])
        assert kind == "OK", f"EXECUTE {i} failed: {kind} {payload}"

    kind, payload = c.execute(f"SELECT * FROM {TABLE}")
    assert kind == "RESULT"
    assert len(payload["rows"]) == 5, f"Expected 5 rows, got {len(payload['rows'])}"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


def test_deallocate():
    """DEALLOCATE removes a prepared statement."""
    c = EvoConnection()
    c.handshake()

    kind, _ = c.prepare("dealloc_test", f"SELECT 1")
    assert kind == "OK"

    kind, payload = c.deallocate("dealloc_test")
    assert kind == "OK", f"DEALLOCATE failed: {kind} {payload}"
    assert payload["tag"] == "DEALLOCATE", f"Expected DEALLOCATE tag: {payload['tag']}"

    # Executing after deallocate should fail
    kind, payload = c.execute_prepared("dealloc_test")
    assert kind == "ERR", f"Expected ERR after deallocate, got: {kind}"
    assert "26000" in payload.get("sqlstate", ""), f"Expected SQLSTATE 26000: {payload}"

    c.quit()


def test_execute_nonexistent_statement():
    """EXECUTE a statement that was never prepared -> error."""
    c = EvoConnection()
    c.handshake()

    kind, payload = c.execute_prepared("no_such_stmt")
    assert kind == "ERR", f"Expected ERR, got: {kind} {payload}"
    assert "26000" in payload.get("sqlstate", ""), f"Expected SQLSTATE 26000: {payload}"

    c.quit()


def test_prepare_same_name_overwrites():
    """PREPARE with the same name overwrites the previous statement."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)
    _insert_rows(c, [(1, "Alice", 10), (2, "Bob", 20)])

    # First prepare: SELECT with WHERE id = $1
    kind, _ = c.prepare("overwrite_test", f"SELECT name FROM {TABLE} WHERE id = $1")
    assert kind == "OK"

    kind, payload = c.execute_prepared("overwrite_test", ["1"])
    assert kind == "RESULT"
    assert len(payload["rows"]) == 1
    name_idx = 0  # single column
    assert payload["rows"][0][name_idx] == "Alice"

    # Overwrite with a different query: SELECT val instead of name
    kind, _ = c.prepare("overwrite_test", f"SELECT val FROM {TABLE} WHERE id = $1")
    assert kind == "OK"

    kind, payload = c.execute_prepared("overwrite_test", ["2"])
    assert kind == "RESULT"
    assert len(payload["rows"]) == 1
    assert payload["rows"][0][0] == "20", f"Expected 20, got {payload['rows'][0][0]}"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


def test_null_parameter():
    """EXECUTE with \\N parameter inserts NULL."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)

    kind, _ = c.prepare("null_test", f"INSERT INTO {TABLE} VALUES ($1, $2, $3)")
    assert kind == "OK"

    kind, payload = c.execute_prepared("null_test", ["99", None, "42"])
    assert kind == "OK", f"EXECUTE with NULL param failed: {kind} {payload}"

    kind, payload = c.execute(f"SELECT * FROM {TABLE} WHERE id = 99")
    assert kind == "RESULT"
    assert len(payload["rows"]) == 1
    row = payload["rows"][0]
    col_lower = [col.lower().split()[0] for col in payload["cols"]]
    name_idx = col_lower.index("name")
    assert row[name_idx] is None, f"Expected NULL for name, got: {row[name_idx]}"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


def test_prepare_execute_where_params():
    """PREPARE a SELECT with WHERE clause using $1 parameter."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)
    _insert_rows(c, [(1, "Alice", 10), (2, "Bob", 20), (3, "Carol", 30)])

    kind, _ = c.prepare("sel_where", f"SELECT name FROM {TABLE} WHERE id = $1")
    assert kind == "OK"

    # Execute with different parameter values
    kind, payload = c.execute_prepared("sel_where", ["1"])
    assert kind == "RESULT"
    assert len(payload["rows"]) == 1
    assert payload["rows"][0][0] == "Alice"

    kind, payload = c.execute_prepared("sel_where", ["3"])
    assert kind == "RESULT"
    assert len(payload["rows"]) == 1
    assert payload["rows"][0][0] == "Carol"

    # Non-existent id returns 0 rows
    kind, payload = c.execute_prepared("sel_where", ["999"])
    assert kind == "RESULT"
    assert len(payload["rows"]) == 0, f"Expected 0 rows, got {len(payload['rows'])}"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


def test_deallocate_nonexistent():
    """DEALLOCATE a statement that does not exist -> error."""
    c = EvoConnection()
    c.handshake()

    kind, payload = c.deallocate("ghost_stmt")
    assert kind == "ERR", f"Expected ERR, got: {kind} {payload}"
    assert "26000" in payload.get("sqlstate", ""), f"Expected SQLSTATE 26000: {payload}"

    c.quit()


def test_prepare_execute_update_with_params():
    """PREPARE + EXECUTE an UPDATE with parameters."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)
    _insert_rows(c, [(1, "Alice", 10)])

    kind, _ = c.prepare("upd1", f"UPDATE {TABLE} SET name = $1 WHERE id = $2")
    assert kind == "OK"

    kind, payload = c.execute_prepared("upd1", ["Alicia", "1"])
    assert kind == "OK", f"EXECUTE UPDATE failed: {kind} {payload}"

    kind, payload = c.execute(f"SELECT name FROM {TABLE} WHERE id = 1")
    assert kind == "RESULT"
    assert payload["rows"][0][0] == "Alicia"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


def test_prepare_execute_delete_with_params():
    """PREPARE + EXECUTE a DELETE with parameters."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)
    _insert_rows(c, [(1, "Alice", 10), (2, "Bob", 20), (3, "Carol", 30)])

    kind, _ = c.prepare("del1", f"DELETE FROM {TABLE} WHERE id = $1")
    assert kind == "OK"

    kind, payload = c.execute_prepared("del1", ["2"])
    assert kind == "OK", f"EXECUTE DELETE failed: {kind} {payload}"

    kind, payload = c.execute(f"SELECT * FROM {TABLE}")
    assert kind == "RESULT"
    assert len(payload["rows"]) == 2, f"Expected 2 rows after delete, got {len(payload['rows'])}"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


def test_multiple_prepared_stmts_coexist():
    """Multiple prepared statements can exist simultaneously."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)
    _insert_rows(c, [(1, "Alice", 10), (2, "Bob", 20)])

    kind, _ = c.prepare("stmt_a", f"SELECT name FROM {TABLE} WHERE id = $1")
    assert kind == "OK"
    kind, _ = c.prepare("stmt_b", f"SELECT val FROM {TABLE} WHERE id = $1")
    assert kind == "OK"

    kind, payload = c.execute_prepared("stmt_a", ["1"])
    assert kind == "RESULT"
    assert payload["rows"][0][0] == "Alice"

    kind, payload = c.execute_prepared("stmt_b", ["2"])
    assert kind == "RESULT"
    assert payload["rows"][0][0] == "20"

    # Both still work after interleaved usage
    kind, payload = c.execute_prepared("stmt_a", ["2"])
    assert kind == "RESULT"
    assert payload["rows"][0][0] == "Bob"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


def test_prepare_execute_with_string_containing_quotes():
    """Parameters with single quotes are properly escaped."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)

    kind, _ = c.prepare("quote_test", f"INSERT INTO {TABLE} VALUES ($1, $2, $3)")
    assert kind == "OK"

    kind, payload = c.execute_prepared("quote_test", ["50", "O'Brien", "99"])
    assert kind == "OK", f"EXECUTE with quotes failed: {kind} {payload}"

    kind, payload = c.execute(f"SELECT name FROM {TABLE} WHERE id = 50")
    assert kind == "RESULT"
    assert len(payload["rows"]) == 1
    assert payload["rows"][0][0] == "O'Brien", f"Expected O'Brien, got {payload['rows'][0][0]}"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


def test_execute_zero_params_on_parameterized_stmt():
    """EXECUTE a parameterized statement with 0 params -> substitution leaves $N as-is."""
    c = EvoConnection()
    c.handshake()
    _fresh_table(c)
    _insert_rows(c, [(1, "Alice", 10)])

    kind, _ = c.prepare("param_skip", f"SELECT * FROM {TABLE} WHERE id = $1")
    assert kind == "OK"

    # Execute with 0 params; the $1 won't be substituted, likely an error or empty result
    kind, payload = c.execute_prepared("param_skip", [])
    # We expect either ERR (SQL parse error) or RESULT with 0 rows
    assert kind in ("ERR", "RESULT"), f"Unexpected kind: {kind} {payload}"

    c.execute(f"DROP TABLE {TABLE}")
    c.quit()


# -- main ------------------------------------------------------------------

if __name__ == "__main__":
    print(f"\n{'=' * 60}")
    print(f"  EVO Protocol — Prepared Statement Tests  (port {PORT})")
    print(f"{'=' * 60}")

    tests = [
        ("PREPARE + EXECUTE basic SELECT",           test_prepare_execute_basic_select),
        ("PREPARE + EXECUTE INSERT with params",      test_prepare_execute_insert_with_params),
        ("EXECUTE multiple times different params",   test_execute_multiple_times_different_params),
        ("DEALLOCATE",                                test_deallocate),
        ("EXECUTE non-existent statement",            test_execute_nonexistent_statement),
        ("PREPARE same name overwrites",              test_prepare_same_name_overwrites),
        ("NULL parameter (\\N)",                      test_null_parameter),
        ("PREPARE + EXECUTE with WHERE params",       test_prepare_execute_where_params),
        ("DEALLOCATE non-existent",                   test_deallocate_nonexistent),
        ("PREPARE + EXECUTE UPDATE with params",      test_prepare_execute_update_with_params),
        ("PREPARE + EXECUTE DELETE with params",      test_prepare_execute_delete_with_params),
        ("Multiple prepared stmts coexist",           test_multiple_prepared_stmts_coexist),
        ("String param with single quotes",           test_prepare_execute_with_string_containing_quotes),
        ("EXECUTE zero params on parameterized stmt", test_execute_zero_params_on_parameterized_stmt),
    ]

    for name, fn in tests:
        run_test(name, fn)

    print(f"\n{'-' * 60}")
    print(f"  Results: {PASS} passed, {FAIL} failed  (total {PASS + FAIL})")
    if ERRORS:
        print(f"\n  Failures:")
        for name, err in ERRORS:
            print(f"    - {name}: {err}")
    print(f"{'-' * 60}\n")

    sys.exit(1 if FAIL > 0 else 0)
