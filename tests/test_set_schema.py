"""
Tests for SET SCHEMA <name> command (Adım 3)
"""

import socket, struct, sys, time

HOST = "127.0.0.1"
PORT = 5433

passed = 0
failed = 0

# ── Wire helpers ──────────────────────────────────────────────

def recv_messages(s):
    """Read complete PG messages until ReadyForQuery ('Z') is received."""
    data = b''
    while True:
        chunk = s.recv(4096)
        if not chunk:
            break
        data += chunk
        i = 0
        found_z = False
        while i < len(data):
            if i + 5 > len(data):
                break
            msg_len = struct.unpack('!I', data[i+1:i+5])[0]
            total = 1 + msg_len
            if i + total > len(data):
                break
            if data[i:i+1] == b'Z':
                found_z = True
            i += total
        if found_z:
            break
    return data

def send_startup(s, database="evosql", user="evo"):
    body = b'\x00\x03\x00\x00'
    body += b'user\x00' + user.encode() + b'\x00'
    body += b'database\x00' + database.encode() + b'\x00'
    body += b'client_encoding\x00UTF8\x00'
    body += b'\x00'
    s.sendall(struct.pack('!I', len(body) + 4) + body)
    return recv_messages(s)

def send_query(s, sql):
    body = sql.encode('utf-8') + b'\x00'
    s.sendall(b'Q' + struct.pack('!I', len(body) + 4) + body)
    return recv_messages(s)

def parse_rows(data):
    rows = []
    i = 0
    while i < len(data):
        msg_type = chr(data[i])
        if i + 5 > len(data):
            break
        msg_len = struct.unpack('!I', data[i+1:i+5])[0]
        msg_body = data[i+5:i+1+msg_len]
        if msg_type == 'D':
            ncols = struct.unpack('!H', msg_body[0:2])[0]
            off = 2
            row_fields = []
            for _ in range(ncols):
                flen = struct.unpack('!i', msg_body[off:off+4])[0]
                off += 4
                if flen == -1:
                    row_fields.append(None)
                else:
                    row_fields.append(msg_body[off:off+flen].decode('utf-8'))
                    off += flen
            rows.append(row_fields)
        i += 1 + msg_len
    return rows

def has_error(data):
    i = 0
    while i < len(data):
        if i + 5 > len(data):
            break
        msg_type = chr(data[i])
        msg_len = struct.unpack('!I', data[i+1:i+5])[0]
        if msg_type == 'E':
            return True
        i += 1 + msg_len
    return False

def get_error_message(data):
    i = 0
    while i < len(data):
        msg_type = chr(data[i])
        if i + 5 > len(data):
            break
        msg_len = struct.unpack('!I', data[i+1:i+5])[0]
        msg_body = data[i+5:i+1+msg_len]
        if msg_type == 'E':
            fields = {}
            j = 0
            while j < len(msg_body):
                code = chr(msg_body[j])
                if code == '\x00':
                    break
                j += 1
                end = msg_body.index(b'\x00', j)
                fields[code] = msg_body[j:end].decode('utf-8')
                j = end + 1
            return fields.get('M', '')
        i += 1 + msg_len
    return ''

def has_command_complete(data, tag):
    i = 0
    while i < len(data):
        msg_type = chr(data[i])
        if i + 5 > len(data):
            break
        msg_len = struct.unpack('!I', data[i+1:i+5])[0]
        msg_body = data[i+5:i+1+msg_len]
        if msg_type == 'C':
            cmd_tag = msg_body[:-1].decode('utf-8')
            if tag in cmd_tag:
                return True
        i += 1 + msg_len
    return False

def connect():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))
    send_startup(s)
    return s

def check(test_name, condition, detail=""):
    global passed, failed
    if condition:
        passed += 1
        print(f"  PASS: {test_name}")
    else:
        failed += 1
        print(f"  FAIL: {test_name} {detail}")

# ── Tests ─────────────────────────────────────────────────────

def test_set_schema_basic():
    """SET SCHEMA <name> switches to existing schema"""
    print("\n=== test_set_schema_basic ===")
    s = connect()

    # Verify initial schema is 'default'
    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("Initial schema is 'default'", len(rows) > 0 and rows[0][0] == "default",
          f"rows={rows}")

    # Create a new schema
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS sales")
    check("CREATE SCHEMA sales", has_command_complete(r, "CREATE SCHEMA"),
          f"error={has_error(r)}")

    # Switch to it
    r = send_query(s, "SET SCHEMA sales")
    check("SET SCHEMA sales succeeds", has_command_complete(r, "SET"),
          f"error={has_error(r)}")
    check("SET SCHEMA no error", not has_error(r))

    # Verify current_schema changed
    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("current_schema() = sales", len(rows) > 0 and rows[0][0] == "sales",
          f"rows={rows}")

    # Switch back to default
    r = send_query(s, "SET SCHEMA default")
    check("SET SCHEMA default succeeds", has_command_complete(r, "SET"))

    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("current_schema() = default", len(rows) > 0 and rows[0][0] == "default",
          f"rows={rows}")

    s.close()

def test_set_schema_nonexistent():
    """SET SCHEMA on non-existent schema returns error"""
    print("\n=== test_set_schema_nonexistent ===")
    s = connect()

    r = send_query(s, "SET SCHEMA no_such_schema_xyz")
    check("SET SCHEMA nonexistent gives error", has_error(r))
    err = get_error_message(r)
    check("Error mentions schema name", "no_such_schema_xyz" in err,
          f"err={err}")

    # Schema should remain unchanged
    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("current_schema() still default", len(rows) > 0 and rows[0][0] == "default",
          f"rows={rows}")

    s.close()

def test_set_schema_table_isolation():
    """Tables created in one schema are not visible in another"""
    print("\n=== test_set_schema_table_isolation ===")
    s = connect()

    # Create two schemas
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS schema_a")
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS schema_b")

    # Switch to schema_a, create table
    r = send_query(s, "SET SCHEMA schema_a")
    check("SET SCHEMA schema_a", has_command_complete(r, "SET"))

    r = send_query(s, "CREATE TABLE isolated_tbl (id INT, val VARCHAR(50))")
    check("CREATE TABLE in schema_a", has_command_complete(r, "CREATE TABLE"),
          f"error={get_error_message(r) if has_error(r) else 'none'}")

    r = send_query(s, "INSERT INTO isolated_tbl VALUES (1, 'alpha')")
    check("INSERT in schema_a", not has_error(r),
          f"error={get_error_message(r) if has_error(r) else 'none'}")

    r = send_query(s, "SELECT * FROM isolated_tbl")
    rows = parse_rows(r)
    check("SELECT from schema_a has 1 row", len(rows) == 1,
          f"rows={rows}")
    if len(rows) == 1:
        check("Row data correct", rows[0][0] == "1" and rows[0][1] == "alpha",
              f"rows={rows}")

    # Switch to schema_b — table should NOT exist
    r = send_query(s, "SET SCHEMA schema_b")
    check("SET SCHEMA schema_b", has_command_complete(r, "SET"))

    r = send_query(s, "SELECT * FROM isolated_tbl")
    check("isolated_tbl not visible in schema_b", has_error(r))

    # Switch back to schema_a — table should still exist
    r = send_query(s, "SET SCHEMA schema_a")
    r = send_query(s, "SELECT * FROM isolated_tbl")
    rows = parse_rows(r)
    check("isolated_tbl still in schema_a", len(rows) == 1,
          f"rows={rows}")

    # Cleanup
    r = send_query(s, "DROP TABLE isolated_tbl")
    r = send_query(s, "SET SCHEMA default")
    s.close()

def test_use_resets_schema_to_default():
    """USE <database> resets schema back to 'default'"""
    print("\n=== test_use_resets_schema_to_default ===")
    s = connect()

    # Create schema and switch to it
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS temp_schema")
    r = send_query(s, "SET SCHEMA temp_schema")
    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("Schema is temp_schema", len(rows) > 0 and rows[0][0] == "temp_schema",
          f"rows={rows}")

    # USE same database resets schema to 'default'
    r = send_query(s, "USE evosql")
    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("Schema reset to default after USE", len(rows) > 0 and rows[0][0] == "default",
          f"rows={rows}")

    s.close()

def test_set_schema_cross_database():
    """Schema is per-database — switching db changes available schemas"""
    print("\n=== test_set_schema_cross_database ===")
    s = connect()

    # Create a separate database with its own schema
    r = send_query(s, "CREATE DATABASE IF NOT EXISTS schematest_db")
    r = send_query(s, "USE schematest_db")
    check("USE schematest_db", has_command_complete(r, "USE"))

    # Create schema in schematest_db
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS myschema")
    check("CREATE SCHEMA myschema in schematest_db", has_command_complete(r, "CREATE SCHEMA"))

    # Switch to it
    r = send_query(s, "SET SCHEMA myschema")
    check("SET SCHEMA myschema", has_command_complete(r, "SET"))

    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("current_schema() = myschema", len(rows) > 0 and rows[0][0] == "myschema",
          f"rows={rows}")

    # Switch back to evosql — myschema should NOT exist there
    r = send_query(s, "USE evosql")
    r = send_query(s, "SET SCHEMA myschema")
    check("myschema not available in evosql", has_error(r))

    s.close()

# ── Run all ───────────────────────────────────────────────────

if __name__ == "__main__":
    time.sleep(1)
    test_set_schema_basic()
    test_set_schema_nonexistent()
    test_set_schema_table_isolation()
    test_use_resets_schema_to_default()
    test_set_schema_cross_database()

    print(f"\n{'='*50}")
    print(f"SET SCHEMA Tests: {passed} passed, {failed} failed out of {passed+failed}")
    if failed == 0:
        print("ALL TESTS PASSED")
    else:
        print("SOME TESTS FAILED")
        sys.exit(1)
