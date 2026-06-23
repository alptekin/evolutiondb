#!/usr/bin/env python3
"""Tests for INSERT with column list mapping:
   INSERT INTO t (col2, col1) VALUES ('b', 'a')
   Also tests integration with multi-row INSERT."""
import socket, struct, time, sys

HOST, PORT = "localhost", 5433
passed = 0
failed = 0

# ── wire helpers ──────────────────────────────────────────────────────
def pg_connect(user="admin", database="testdb"):
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))
    body = struct.pack("!HH", 3, 0) + f"user\x00{user}\x00database\x00{database}\x00\x00".encode()
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
                s.sendall(b'p' + struct.pack('!I', 4 + len(b'admin\x00')) + b'admin\x00')
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
    msg = b'Q' + struct.pack("!I", len(sql) + 5) + sql.encode() + b'\x00'
    s.sendall(msg)
    time.sleep(0.15)
    columns, rows, tag, error = [], [], "", None
    while True:
        hdr = _recvall(s, 5)
        t = chr(hdr[0])
        length = struct.unpack("!I", hdr[1:5])[0]
        body = _recvall(s, length - 4) if length > 4 else b""
        if t == 'T':
            num = struct.unpack("!H", body[:2])[0]
            off = 2
            for _ in range(num):
                end = body.index(b'\x00', off)
                columns.append(body[off:end].decode())
                off = end + 1 + 18
        elif t == 'D':
            num = struct.unpack("!H", body[:2])[0]
            off = 2
            r = []
            for _ in range(num):
                cl = struct.unpack("!i", body[off:off+4])[0]
                off += 4
                if cl == -1:
                    r.append(None)
                else:
                    r.append(body[off:off+cl].decode())
                    off += cl
            rows.append(r)
        elif t == 'C':
            tag = body.rstrip(b'\x00').decode()
        elif t == 'E':
            error = body.decode(errors='replace')
        elif t == 'Z':
            break
    return columns, rows, tag, error

def check(test_name, condition):
    global passed, failed
    if condition:
        print(f"  PASS: {test_name}")
        passed += 1
    else:
        print(f"  FAIL: {test_name}")
        failed += 1

def setup_table(name="cm_test", cols="id INT PRIMARY KEY, name VARCHAR(50), age INT"):
    s = pg_connect()
    pg_query(s, f"DROP TABLE {name}")
    s.close()
    s = pg_connect()
    pg_query(s, f"CREATE TABLE {name} ({cols})")
    s.close()

# ── setup ─────────────────────────────────────────────────────────────
print("=== INSERT with Column List Mapping Tests ===\n")

# ── Test 1: Reordered columns ────────────────────────────────────────
print("Test 1: Reordered columns (name, id, age)")
setup_table()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO cm_test (name, id, age) VALUES ('Alice', 1, 30)")
check("No error", err is None)
check("Command tag = INSERT 0 1", tag == "INSERT 0 1")
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM cm_test WHERE id = 1")
check("Row exists", len(rows) == 1)
check("id=1, name=Alice, age=30", rows[0] == ['1', 'Alice', '30'])
s.close()

# ── Test 2: Reversed column order ────────────────────────────────────
print("\nTest 2: Fully reversed (age, name, id)")
setup_table()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO cm_test (age, name, id) VALUES (25, 'Bob', 2)")
check("No error", err is None)
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM cm_test WHERE id = 2")
check("Row exists", len(rows) == 1)
check("id=2, name=Bob, age=25", rows[0] == ['2', 'Bob', '25'])
s.close()

# ── Test 3: Partial columns (missing nullable) ──────────────────────
print("\nTest 3: Partial columns — omit nullable 'age'")
setup_table()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO cm_test (id, name) VALUES (3, 'Charlie')")
check("No error", err is None)
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM cm_test WHERE id = 3")
check("Row exists", len(rows) == 1)
check("id=3, name=Charlie", rows[0][0] == '3' and rows[0][1] == 'Charlie')
check("age is NULL", rows[0][2] is None or rows[0][2] == '')
s.close()

# ── Test 4: Only PK column ──────────────────────────────────────────
print("\nTest 4: Only PK column specified")
setup_table()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO cm_test (id) VALUES (4)")
check("No error", err is None)
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM cm_test WHERE id = 4")
check("Row exists", len(rows) == 1)
check("id=4", rows[0][0] == '4')
s.close()

# ── Test 5: Multi-row with column mapping ────────────────────────────
print("\nTest 5: Multi-row INSERT with column list")
setup_table()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO cm_test (name, id, age) VALUES ('X', 10, 1), ('Y', 20, 2), ('Z', 30, 3)")
check("No error", err is None)
check("Command tag = INSERT 0 3", tag == "INSERT 0 3")
_, rows, stag, _ = pg_query(s, "SELECT id, name, age FROM cm_test")
check("3 rows in table", stag == "SELECT 3")
rows_sorted = sorted(rows, key=lambda r: int(r[0]))
check("Row 1: 10,X,1", rows_sorted[0] == ['10', 'X', '1'])
check("Row 2: 20,Y,2", rows_sorted[1] == ['20', 'Y', '2'])
check("Row 3: 30,Z,3", rows_sorted[2] == ['30', 'Z', '3'])
s.close()

# ── Test 6: Multi-row with partial columns ───────────────────────────
print("\nTest 6: Multi-row with partial columns")
setup_table()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO cm_test (id, name) VALUES (1, 'A'), (2, 'B'), (3, 'C')")
check("No error", err is None)
check("Command tag = INSERT 0 3", tag == "INSERT 0 3")
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM cm_test")
rows_sorted = sorted(rows, key=lambda r: int(r[0]))
check("Row 1: id=1, name=A", rows_sorted[0][0] == '1' and rows_sorted[0][1] == 'A')
check("Row 2: id=2, name=B", rows_sorted[1][0] == '2' and rows_sorted[1][1] == 'B')
check("All ages are NULL", all(r[2] is None or r[2] == '' for r in rows_sorted))
s.close()

# ── Test 7: Without column list (backward compat) ───────────────────
print("\nTest 7: Normal INSERT without column list still works")
setup_table()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO cm_test VALUES (5, 'Eve', 50)")
check("No error", err is None)
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM cm_test WHERE id = 5")
check("id=5, name=Eve, age=50", rows[0] == ['5', 'Eve', '50'])
s.close()

# ── Test 8: Unknown column name → error ──────────────────────────────
print("\nTest 8: Unknown column name")
setup_table()
s = pg_connect()
_, _, _, err = pg_query(s, "INSERT INTO cm_test (id, name, nonexistent) VALUES (1, 'A', 'x')")
check("Error for unknown column", err is not None)
s.close()

# ── Test 9: Too many values for column list ──────────────────────────
print("\nTest 9: Too many values for column list")
setup_table()
s = pg_connect()
_, _, _, err = pg_query(s, "INSERT INTO cm_test (id, name) VALUES (1, 'A', 30)")
check("Error: too many values", err is not None)
s.close()

# ── Test 10: Too few values for column list ──────────────────────────
print("\nTest 10: Too few values for column list")
setup_table()
s = pg_connect()
_, _, _, err = pg_query(s, "INSERT INTO cm_test (id, name, age) VALUES (1, 'A')")
check("Error: too few values", err is not None)
s.close()

# ── Test 11: NOT NULL column missing from column list → error ────────
print("\nTest 11: NOT NULL column omitted from column list")
setup_table("cm_nn", "id INT PRIMARY KEY, name VARCHAR(50) NOT NULL, age INT")
s = pg_connect()
_, _, _, err = pg_query(s, "INSERT INTO cm_nn (id, age) VALUES (1, 30)")
check("Error for missing NOT NULL column", err is not None)
s.close()

# ── Test 12: Case insensitive column names ───────────────────────────
print("\nTest 12: Case insensitive column names")
setup_table()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO cm_test (NAME, ID, AGE) VALUES ('Upper', 99, 11)")
check("No error", err is None)
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM cm_test WHERE id = 99")
check("Row found with correct values", len(rows) == 1 and rows[0] == ['99', 'Upper', '11'])
s.close()

# ── Test 13: Two separate INSERTs — column mapping then normal ───────
print("\nTest 13: Column-mapped INSERT followed by normal INSERT")
setup_table()
s = pg_connect()
pg_query(s, "INSERT INTO cm_test (name, id) VALUES ('First', 1)")
_, _, tag, err = pg_query(s, "INSERT INTO cm_test VALUES (2, 'Second', 22)")
check("No error on normal insert after mapped", err is None)
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM cm_test")
rows_sorted = sorted(rows, key=lambda r: int(r[0]))
check("2 rows total", len(rows_sorted) == 2)
check("Row 1 from mapped insert", rows_sorted[0][0] == '1' and rows_sorted[0][1] == 'First')
check("Row 2 from normal insert", rows_sorted[1] == ['2', 'Second', '22'])
s.close()

# ── cleanup ──────────────────────────────────────────────────────────
s = pg_connect()
pg_query(s, "DROP TABLE cm_test")
pg_query(s, "DROP TABLE cm_nn")
s.close()

print(f"\n=== Results: {passed} passed, {failed} failed ===")
sys.exit(0 if failed == 0 else 1)
