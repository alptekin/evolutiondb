#!/usr/bin/env python3
"""Test UPDATE with expression-based WHERE clause via PostgreSQL wire protocol."""

import socket, struct, time, sys

HOST, PORT = "localhost", 5433

def pg_connect():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))
    body = struct.pack("!HH", 3, 0) + b"user\x00admin\x00database\x00testdb\x00\x00"
    s.sendall(struct.pack("!I", len(body) + 4) + body)
    _read_until_ready(s)
    return s

def _read_until_ready(s):
    while True:
        hdr = _recvall(s, 5)
        tag = chr(hdr[0])
        length = struct.unpack("!I", hdr[1:5])[0]
        body = _recvall(s, length - 4) if length > 4 else b""
        if tag == 'R' and len(body) >= 4:
            auth_type = struct.unpack('!I', body[:4])[0]
            if auth_type == 3:
                pw = b'admin\x00'
                s.sendall(b'p' + struct.pack('!I', 4 + len(pw)) + pw)
        elif tag == 'Z':
            return

def _recvall(s, n):
    data = b""
    while len(data) < n:
        chunk = s.recv(n - len(data))
        if not chunk:
            raise ConnectionError("connection closed")
        data += chunk
    return data

def pg_query(s, sql):
    """Execute a query and return (columns, rows, command_tag)."""
    msg = b'Q' + struct.pack("!I", len(sql) + 5) + sql.encode() + b'\x00'
    s.sendall(msg)
    time.sleep(0.15)
    columns = []
    rows = []
    command_tag = ""
    while True:
        hdr = _recvall(s, 5)
        tag = chr(hdr[0])
        length = struct.unpack("!I", hdr[1:5])[0]
        body = _recvall(s, length - 4) if length > 4 else b""
        if tag == 'T':
            num_fields = struct.unpack("!H", body[:2])[0]
            off = 2
            for _ in range(num_fields):
                end = body.index(b'\x00', off)
                columns.append(body[off:end].decode())
                off = end + 1 + 18
        elif tag == 'D':
            num_cols = struct.unpack("!H", body[:2])[0]
            off = 2
            current_row = []
            for _ in range(num_cols):
                col_len = struct.unpack("!i", body[off:off+4])[0]
                off += 4
                if col_len == -1:
                    current_row.append(None)
                else:
                    current_row.append(body[off:off+col_len].decode())
                    off += col_len
            rows.append(current_row)
        elif tag == 'C':
            command_tag = body.rstrip(b'\x00').decode()
        elif tag == 'Z':
            break
        elif tag == 'E':
            err_msg = body.decode(errors='replace')
            print(f"  ERROR: {err_msg}")
    return columns, rows, command_tag

passed = 0
total = 0

def test(label, fn):
    global passed, total
    total += 1
    try:
        fn()
        print(f"  \u2705 {label}")
        passed += 1
    except AssertionError as e:
        print(f"  \u274c {label}")
        print(f"       {e}")

def select_all(s, table):
    cols, rows, _ = pg_query(s, f"SELECT * FROM {table}")
    return rows

def select_where(s, table, where):
    cols, rows, _ = pg_query(s, f"SELECT * FROM {table} WHERE {where}")
    return rows

# ─── Setup / teardown ───────────────────────────────────────────────

TABLE = "t_updwhere"
DATA = [
    (1, 'Alice',   30, 'Istanbul'),
    (2, 'Bob',     25, 'Ankara'),
    (3, 'Charlie', 35, 'Istanbul'),
    (4, 'Diana',   28, 'Izmir'),
    (5, 'Eve',     22, 'Ankara'),
]

def setup():
    """Create test table and insert sample data."""
    s = pg_connect()
    pg_query(s, f"DROP TABLE {TABLE}")
    s.close()

    s = pg_connect()
    pg_query(s, f"CREATE TABLE {TABLE} (id INT, name VARCHAR(50), age INT, city VARCHAR(50))")
    s.close()

    for id_, name, age, city in DATA:
        s = pg_connect()
        pg_query(s, f"INSERT INTO {TABLE} VALUES ({id_}, '{name}', {age}, '{city}')")
        s.close()

def teardown():
    s = pg_connect()
    pg_query(s, f"DROP TABLE {TABLE}")
    s.close()

def reset_data():
    """Drop and recreate the table with fresh data."""
    teardown()
    s = pg_connect()
    pg_query(s, f"CREATE TABLE {TABLE} (id INT, name VARCHAR(50), age INT, city VARCHAR(50))")
    s.close()
    for id_, name, age, city in DATA:
        s = pg_connect()
        pg_query(s, f"INSERT INTO {TABLE} VALUES ({id_}, '{name}', {age}, '{city}')")
        s.close()

# ─── Tests ───────────────────────────────────────────────────────────

def test_update_single_match():
    """UPDATE single row by name equality."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET age = 31 WHERE name = 'Alice'")
    assert tag == "UPDATE 1", f"expected 'UPDATE 1', got '{tag}'"
    rows = select_where(s, TABLE, "id = 1")
    assert len(rows) == 1
    assert rows[0][2] == '31', f"expected age=31, got {rows[0][2]}"
    s.close()

def test_update_multiple_matches():
    """UPDATE multiple rows matching city equality."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET city = 'Bursa' WHERE city = 'Ankara'")
    assert tag == "UPDATE 2", f"expected 'UPDATE 2', got '{tag}'"
    rows = select_where(s, TABLE, "id = 2")
    assert rows[0][3] == 'Bursa', f"expected city=Bursa, got {rows[0][3]}"
    rows = select_where(s, TABLE, "id = 5")
    assert rows[0][3] == 'Bursa', f"expected city=Bursa, got {rows[0][3]}"
    s.close()

def test_update_no_match():
    """UPDATE with no matching rows returns UPDATE 0."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET age = 99 WHERE name = 'Nobody'")
    assert tag == "UPDATE 0", f"expected 'UPDATE 0', got '{tag}'"
    s.close()

def test_update_by_id():
    """UPDATE by id equality."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET name = 'Bobby' WHERE id = 2")
    assert tag == "UPDATE 1", f"expected 'UPDATE 1', got '{tag}'"
    rows = select_where(s, TABLE, "id = 2")
    assert rows[0][1] == 'Bobby', f"expected name=Bobby, got {rows[0][1]}"
    s.close()

def test_update_greater_than():
    """UPDATE with > comparison."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET city = 'Senior' WHERE age > 27")
    # Alice(30), Charlie(35), Diana(28) => 3
    assert tag == "UPDATE 3", f"expected 'UPDATE 3', got '{tag}'"
    s.close()

def test_update_less_than():
    """UPDATE with < comparison."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET city = 'Young' WHERE age < 26")
    # Bob(25), Eve(22) => 2
    assert tag == "UPDATE 2", f"expected 'UPDATE 2', got '{tag}'"
    rows = select_where(s, TABLE, "id = 5")
    assert rows[0][3] == 'Young', f"expected city=Young, got {rows[0][3]}"
    s.close()

def test_update_not_equal():
    """UPDATE with != comparison."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET city = 'Other' WHERE city != 'Istanbul'")
    # Bob(Ankara), Diana(Izmir), Eve(Ankara) => 3
    assert tag == "UPDATE 3", f"expected 'UPDATE 3', got '{tag}'"
    s.close()

def test_update_and():
    """UPDATE with AND logical operator."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET name = 'Updated' WHERE city = 'Istanbul' AND age > 31")
    # Only Charlie(35, Istanbul) => 1
    assert tag == "UPDATE 1", f"expected 'UPDATE 1', got '{tag}'"
    rows = select_where(s, TABLE, "id = 3")
    assert rows[0][1] == 'Updated', f"expected name=Updated, got {rows[0][1]}"
    # Alice should be untouched
    rows = select_where(s, TABLE, "id = 1")
    assert rows[0][1] == 'Alice', f"Alice should be untouched, got {rows[0][1]}"
    s.close()

def test_update_or():
    """UPDATE with OR logical operator."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET age = 50 WHERE name = 'Alice' OR name = 'Eve'")
    assert tag == "UPDATE 2", f"expected 'UPDATE 2', got '{tag}'"
    rows = select_where(s, TABLE, "id = 1")
    assert rows[0][2] == '50', f"expected age=50, got {rows[0][2]}"
    rows = select_where(s, TABLE, "id = 5")
    assert rows[0][2] == '50', f"expected age=50, got {rows[0][2]}"
    s.close()

def test_update_two_columns():
    """UPDATE setting two columns at once."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET name = 'Alicia', age = 31 WHERE id = 1")
    assert tag == "UPDATE 1", f"expected 'UPDATE 1', got '{tag}'"
    rows = select_where(s, TABLE, "id = 1")
    assert rows[0][1] == 'Alicia', f"expected name=Alicia, got {rows[0][1]}"
    assert rows[0][2] == '31', f"expected age=31, got {rows[0][2]}"
    s.close()

def test_update_three_columns_multi_match():
    """UPDATE three columns on multiple matching rows."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET name = 'X', age = 99, city = 'Z' WHERE city = 'Ankara'")
    assert tag == "UPDATE 2", f"expected 'UPDATE 2', got '{tag}'"
    rows = select_where(s, TABLE, "id = 2")
    assert rows[0][1] == 'X' and rows[0][2] == '99' and rows[0][3] == 'Z', f"row2: {rows[0]}"
    rows = select_where(s, TABLE, "id = 5")
    assert rows[0][1] == 'X' and rows[0][2] == '99' and rows[0][3] == 'Z', f"row5: {rows[0]}"
    s.close()

def test_other_rows_intact():
    """Rows not matching WHERE remain untouched."""
    reset_data()
    s = pg_connect()
    pg_query(s, f"UPDATE {TABLE} SET age = 100 WHERE id = 1")
    rows = select_where(s, TABLE, "id = 2")
    assert rows[0][2] == '25', f"row2 age should be 25, got {rows[0][2]}"
    rows = select_where(s, TABLE, "id = 3")
    assert rows[0][2] == '35', f"row3 age should be 35, got {rows[0][2]}"
    rows = select_where(s, TABLE, "id = 4")
    assert rows[0][2] == '28', f"row4 age should be 28, got {rows[0][2]}"
    rows = select_where(s, TABLE, "id = 5")
    assert rows[0][2] == '22', f"row5 age should be 22, got {rows[0][2]}"
    s.close()

def test_count_zero():
    """UPDATE 0 for no matching rows."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET age = 1 WHERE age = 999")
    assert tag == "UPDATE 0", f"expected 'UPDATE 0', got '{tag}'"
    s.close()

def test_count_all():
    """UPDATE all rows when WHERE matches everything."""
    reset_data()
    s = pg_connect()
    _, _, tag = pg_query(s, f"UPDATE {TABLE} SET city = 'Everywhere' WHERE age > 0")
    assert tag == "UPDATE 5", f"expected 'UPDATE 5', got '{tag}'"
    s.close()

# ─── Runner ──────────────────────────────────────────────────────────

if __name__ == "__main__":
    print(f"\n{'='*60}")
    print("  UPDATE WHERE Expression Tests")
    print(f"{'='*60}\n")

    try:
        setup()
    except Exception as e:
        print(f"Setup failed: {e}")
        sys.exit(1)

    test("UPDATE single match",               test_update_single_match)
    test("UPDATE multiple matches",           test_update_multiple_matches)
    test("UPDATE no match",                   test_update_no_match)
    test("UPDATE by id",                      test_update_by_id)
    test("UPDATE greater than",               test_update_greater_than)
    test("UPDATE less than",                  test_update_less_than)
    test("UPDATE not equal",                  test_update_not_equal)
    test("UPDATE AND",                        test_update_and)
    test("UPDATE OR",                         test_update_or)
    test("UPDATE two columns",               test_update_two_columns)
    test("UPDATE three columns multi match",  test_update_three_columns_multi_match)
    test("UPDATE other rows intact",          test_other_rows_intact)
    test("UPDATE count zero",                 test_count_zero)
    test("UPDATE count all",                  test_count_all)

    print(f"\n  Results: {passed}/{total} passed\n")

    try:
        teardown()
    except Exception:
        pass

    sys.exit(0 if passed == total else 1)
