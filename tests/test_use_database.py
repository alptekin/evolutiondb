"""
Tests for USE DATABASE command
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
        # Parse messages to find ReadyForQuery properly
        i = 0
        found_z = False
        while i < len(data):
            if i + 5 > len(data):
                break  # need more data
            msg_type = data[i:i+1]
            msg_len = struct.unpack('!I', data[i+1:i+5])[0]
            total = 1 + msg_len
            if i + total > len(data):
                break  # need more data
            if msg_type == b'Z':
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
    # Read ALL startup messages (AuthOk, ParameterStatus, BackendKeyData, ReadyForQuery)
    return recv_messages(s)

def send_query(s, sql):
    body = sql.encode('utf-8') + b'\x00'
    s.sendall(b'Q' + struct.pack('!I', len(body) + 4) + body)
    return recv_messages(s)

def recv_full(s):
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
    return b'E' in data and b'ERROR' in data

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

def check(test_name, condition):
    global passed, failed
    if condition:
        passed += 1
        print(f"  PASS: {test_name}")
    else:
        failed += 1
        print(f"  FAIL: {test_name}")

# ── Tests ─────────────────────────────────────────────────────

def test_use_basic():
    """USE <database> switches to existing database"""
    print("\n=== test_use_basic ===")
    s = connect()

    # Create a test database
    r = send_query(s, "CREATE DATABASE IF NOT EXISTS testuse1")
    check("CREATE DATABASE testuse1", has_command_complete(r, "CREATE DATABASE"))

    # USE the database
    r = send_query(s, "USE testuse1")
    check("USE testuse1 succeeds", has_command_complete(r, "USE"))
    check("USE testuse1 no error", not has_error(r))

    # Verify current database changed
    r = send_query(s, "SELECT current_database()")
    rows = parse_rows(r)
    check("current_database() = testuse1", len(rows) > 0 and rows[0][0] == "testuse1")

    # Switch back to default
    r = send_query(s, "USE evosql")
    check("USE evosql succeeds", has_command_complete(r, "USE"))

    r = send_query(s, "SELECT current_database()")
    rows = parse_rows(r)
    check("current_database() = evosql", len(rows) > 0 and rows[0][0] == "evosql")

    s.close()

def test_use_database_keyword():
    """USE DATABASE <name> syntax"""
    print("\n=== test_use_database_keyword ===")
    s = connect()

    # Create test database
    r = send_query(s, "CREATE DATABASE IF NOT EXISTS testuse2")
    check("CREATE DATABASE testuse2", has_command_complete(r, "CREATE DATABASE"))

    # USE DATABASE syntax
    r = send_query(s, "USE DATABASE testuse2")
    check("USE DATABASE testuse2 succeeds", has_command_complete(r, "USE"))
    check("USE DATABASE no error", not has_error(r))

    r = send_query(s, "SELECT current_database()")
    rows = parse_rows(r)
    check("current_database() = testuse2", len(rows) > 0 and rows[0][0] == "testuse2")

    # Switch back
    r = send_query(s, "USE evosql")
    s.close()

def test_use_nonexistent():
    """USE on a non-existent database returns error"""
    print("\n=== test_use_nonexistent ===")
    s = connect()

    r = send_query(s, "USE no_such_database_xyz")
    check("USE nonexistent database gives error", has_error(r))
    err = get_error_message(r)
    check("Error message mentions database name", "no_such_database_xyz" in err)

    # Verify current database unchanged
    r = send_query(s, "SELECT current_database()")
    rows = parse_rows(r)
    check("current_database() still evosql", len(rows) > 0 and rows[0][0] == "evosql")

    s.close()

def test_use_resets_schema():
    """USE resets current schema to 'default'"""
    print("\n=== test_use_resets_schema ===")
    s = connect()

    # Create a test db and schema
    r = send_query(s, "CREATE DATABASE IF NOT EXISTS testuse3")

    # Switch to it
    r = send_query(s, "USE testuse3")
    check("USE testuse3", has_command_complete(r, "USE"))

    # Verify schema is 'default'
    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("Schema is 'default' after USE", len(rows) > 0 and rows[0][0] == "default")

    # Switch back
    r = send_query(s, "USE evosql")
    s.close()

def test_use_cross_database_tables():
    """Tables created in one database are isolated from another"""
    print("\n=== test_use_cross_database_tables ===")
    s = connect()

    # Create databases
    r = send_query(s, "CREATE DATABASE IF NOT EXISTS dbA")
    r = send_query(s, "CREATE DATABASE IF NOT EXISTS dbB")

    # Switch to dbA and create a table
    r = send_query(s, "USE dbA")
    check("USE dbA", has_command_complete(r, "USE"))

    r = send_query(s, "CREATE TABLE cross_test (id INT, name VARCHAR(50))")
    check("CREATE TABLE in dbA", has_command_complete(r, "CREATE TABLE"))

    r = send_query(s, "INSERT INTO cross_test VALUES (1, 'hello')")
    check("INSERT in dbA", has_command_complete(r, "INSERT"))

    r = send_query(s, "SELECT * FROM cross_test")
    rows = parse_rows(r)
    check("SELECT from dbA has 1 row", len(rows) == 1)
    check("Row data correct", rows[0][0] == "1" and rows[0][1] == "hello")

    # Switch to dbB - table should NOT exist
    r = send_query(s, "USE dbB")
    check("USE dbB", has_command_complete(r, "USE"))

    r = send_query(s, "SELECT * FROM cross_test")
    check("cross_test not visible in dbB", has_error(r))

    # Switch back to dbA - table should still exist
    r = send_query(s, "USE dbA")
    r = send_query(s, "SELECT * FROM cross_test")
    rows = parse_rows(r)
    check("cross_test still in dbA", len(rows) == 1)

    # Cleanup
    r = send_query(s, "DROP TABLE cross_test")
    r = send_query(s, "USE evosql")
    s.close()

# ── Run all ───────────────────────────────────────────────────

if __name__ == "__main__":
    time.sleep(1)
    test_use_basic()
    test_use_database_keyword()
    test_use_nonexistent()
    test_use_resets_schema()
    test_use_cross_database_tables()

    print(f"\n{'='*50}")
    print(f"USE DATABASE Tests: {passed} passed, {failed} failed out of {passed+failed}")
    if failed == 0:
        print("ALL TESTS PASSED")
    else:
        print("SOME TESTS FAILED")
        sys.exit(1)
