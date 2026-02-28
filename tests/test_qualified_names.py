"""
Tests for schema.table and db.schema.table qualified name notation (Adım 4)
"""

import socket, struct, sys, time

HOST = "127.0.0.1"
PORT = 5433

passed = 0
failed = 0

# ── Wire helpers ──────────────────────────────────────────────

def recv_messages(s):
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

def test_schema_dot_table_select():
    """SELECT * FROM schema.table notation"""
    print("\n=== test_schema_dot_table_select ===")
    s = connect()

    # Setup: create schema + table in it
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS sales")
    r = send_query(s, "SET SCHEMA sales")
    r = send_query(s, "CREATE TABLE orders (id INT, product VARCHAR(50))")
    check("CREATE TABLE in sales", has_command_complete(r, "CREATE TABLE"),
          f"err={get_error_message(r) if has_error(r) else 'none'}")
    r = send_query(s, "INSERT INTO orders VALUES (1, 'Laptop')")
    r = send_query(s, "INSERT INTO orders VALUES (2, 'Phone')")
    r = send_query(s, "SET SCHEMA default")

    # Now query using schema.table notation from default schema
    r = send_query(s, "SELECT * FROM sales.orders")
    rows = parse_rows(r)
    check("SELECT sales.orders returns 2 rows", len(rows) == 2,
          f"rows={rows}, err={get_error_message(r) if has_error(r) else 'none'}")

    # Verify we're still in default schema after qualified query
    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("Schema still 'default' after qualified query",
          len(rows) > 0 and rows[0][0] == "default", f"rows={rows}")

    # Cleanup
    r = send_query(s, "SET SCHEMA sales")
    r = send_query(s, "DROP TABLE orders")
    r = send_query(s, "SET SCHEMA default")
    s.close()

def test_schema_dot_table_insert():
    """INSERT INTO schema.table notation"""
    print("\n=== test_schema_dot_table_insert ===")
    s = connect()

    # Setup
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS warehouse")
    r = send_query(s, "SET SCHEMA warehouse")
    r = send_query(s, "CREATE TABLE inventory (id INT, item VARCHAR(50))")
    r = send_query(s, "SET SCHEMA default")

    # Insert using qualified name
    r = send_query(s, "INSERT INTO warehouse.inventory VALUES (1, 'Widget')")
    check("INSERT via schema.table", not has_error(r),
          f"err={get_error_message(r) if has_error(r) else 'none'}")

    # Verify data via qualified select
    r = send_query(s, "SELECT * FROM warehouse.inventory")
    rows = parse_rows(r)
    check("SELECT shows inserted row", len(rows) == 1 and rows[0][1] == "Widget",
          f"rows={rows}")

    # Cleanup
    r = send_query(s, "SET SCHEMA warehouse")
    r = send_query(s, "DROP TABLE inventory")
    r = send_query(s, "SET SCHEMA default")
    s.close()

def test_schema_dot_table_update():
    """UPDATE schema.table SET ... notation"""
    print("\n=== test_schema_dot_table_update ===")
    s = connect()

    # Setup
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS hr")
    r = send_query(s, "SET SCHEMA hr")
    r = send_query(s, "CREATE TABLE employees (id INT, name VARCHAR(50))")
    r = send_query(s, "INSERT INTO employees VALUES (1, 'Alice')")
    r = send_query(s, "SET SCHEMA default")

    # Update using qualified name
    r = send_query(s, "UPDATE hr.employees SET name = 'Bob' WHERE id = 1")
    check("UPDATE via schema.table", not has_error(r),
          f"err={get_error_message(r) if has_error(r) else 'none'}")

    # Verify
    r = send_query(s, "SELECT * FROM hr.employees")
    rows = parse_rows(r)
    check("Updated data correct", len(rows) == 1 and rows[0][1] == "Bob",
          f"rows={rows}")

    # Cleanup
    r = send_query(s, "SET SCHEMA hr")
    r = send_query(s, "DROP TABLE employees")
    r = send_query(s, "SET SCHEMA default")
    s.close()

def test_schema_dot_table_delete():
    """DELETE FROM schema.table notation"""
    print("\n=== test_schema_dot_table_delete ===")
    s = connect()

    # Setup
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS temp")
    r = send_query(s, "SET SCHEMA temp")
    r = send_query(s, "CREATE TABLE logs (id INT, msg VARCHAR(50))")
    r = send_query(s, "INSERT INTO logs VALUES (1, 'hello')")
    r = send_query(s, "INSERT INTO logs VALUES (2, 'world')")
    r = send_query(s, "SET SCHEMA default")

    # Delete using qualified name
    r = send_query(s, "DELETE FROM temp.logs WHERE id = 1")
    check("DELETE via schema.table", not has_error(r),
          f"err={get_error_message(r) if has_error(r) else 'none'}")

    # Verify
    r = send_query(s, "SELECT * FROM temp.logs")
    rows = parse_rows(r)
    check("Only 1 row remains", len(rows) == 1 and rows[0][0] == "2",
          f"rows={rows}")

    # Cleanup
    r = send_query(s, "SET SCHEMA temp")
    r = send_query(s, "DROP TABLE logs")
    r = send_query(s, "SET SCHEMA default")
    s.close()

def test_db_schema_table():
    """SELECT * FROM db.schema.table three-part notation"""
    print("\n=== test_db_schema_table ===")
    s = connect()

    # Setup: create a separate database with schema and table
    r = send_query(s, "CREATE DATABASE IF NOT EXISTS remotedb")
    r = send_query(s, "USE remotedb")
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS reporting")
    r = send_query(s, "SET SCHEMA reporting")
    r = send_query(s, "CREATE TABLE metrics (id INT, score VARCHAR(50))")
    r = send_query(s, "INSERT INTO metrics VALUES (1, '99.5')")
    r = send_query(s, "USE evosql")
    r = send_query(s, "SET SCHEMA default")

    # Query using three-part name from evosql.default
    r = send_query(s, "SELECT * FROM remotedb.reporting.metrics")
    rows = parse_rows(r)
    check("SELECT db.schema.table returns 1 row", len(rows) == 1,
          f"rows={rows}, err={get_error_message(r) if has_error(r) else 'none'}")
    if len(rows) == 1:
        check("Row data correct", rows[0][1] == "99.5", f"rows={rows}")

    # Verify we're still in evosql.default after qualified query
    r = send_query(s, "SELECT current_database()")
    rows = parse_rows(r)
    check("Database still evosql", len(rows) > 0 and rows[0][0] == "evosql",
          f"rows={rows}")

    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("Schema still default", len(rows) > 0 and rows[0][0] == "default",
          f"rows={rows}")

    # Cleanup
    r = send_query(s, "USE remotedb")
    r = send_query(s, "SET SCHEMA reporting")
    r = send_query(s, "DROP TABLE metrics")
    r = send_query(s, "USE evosql")
    s.close()

def test_context_preserved():
    """After schema.table query, current schema is preserved"""
    print("\n=== test_context_preserved ===")
    s = connect()

    # Set up a non-default schema as active
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS myctx")
    r = send_query(s, "CREATE SCHEMA IF NOT EXISTS other")
    r = send_query(s, "SET SCHEMA other")
    r = send_query(s, "CREATE TABLE ctxtest (id INT)")
    r = send_query(s, "INSERT INTO ctxtest VALUES (42)")
    r = send_query(s, "SET SCHEMA myctx")

    # Verify current schema is myctx
    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("Current schema is myctx", len(rows) > 0 and rows[0][0] == "myctx",
          f"rows={rows}")

    # Query other schema using qualified name
    r = send_query(s, "SELECT * FROM other.ctxtest")
    rows = parse_rows(r)
    check("Qualified query works", len(rows) == 1 and rows[0][0] == "42",
          f"rows={rows}, err={get_error_message(r) if has_error(r) else 'none'}")

    # Current schema should still be myctx
    r = send_query(s, "SELECT current_schema()")
    rows = parse_rows(r)
    check("Schema still myctx after qualified query",
          len(rows) > 0 and rows[0][0] == "myctx", f"rows={rows}")

    # Cleanup
    r = send_query(s, "SET SCHEMA other")
    r = send_query(s, "DROP TABLE ctxtest")
    r = send_query(s, "SET SCHEMA default")
    s.close()

# ── Run all ───────────────────────────────────────────────────

if __name__ == "__main__":
    time.sleep(1)
    test_schema_dot_table_select()
    test_schema_dot_table_insert()
    test_schema_dot_table_update()
    test_schema_dot_table_delete()
    test_db_schema_table()
    test_context_preserved()

    print(f"\n{'='*50}")
    print(f"Qualified Name Tests: {passed} passed, {failed} failed out of {passed+failed}")
    if failed == 0:
        print("ALL TESTS PASSED")
    else:
        print("SOME TESTS FAILED")
        sys.exit(1)
