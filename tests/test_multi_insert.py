#!/usr/bin/env python3
"""Tests for multi-row INSERT: INSERT INTO t VALUES (...), (...), ..."""
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

# ── setup ─────────────────────────────────────────────────────────────
print("=== Multi-Row INSERT Tests ===\n")

s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()

s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()

# ── Test 1: Two-row INSERT ───────────────────────────────────────────
print("Test 1: Two-row INSERT")
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO mi_test VALUES (1, 'Alice', 30), (2, 'Bob', 25)")
check("No error", err is None)
check("Command tag = INSERT 0 2", tag == "INSERT 0 2")
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM mi_test")
check("2 rows in table", len(rows) == 2)
s.close()

# ── Test 2: Five-row INSERT ──────────────────────────────────────────
print("\nTest 2: Five-row INSERT")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO mi_test VALUES (1,'A',10),(2,'B',20),(3,'C',30),(4,'D',40),(5,'E',50)")
check("No error", err is None)
check("Command tag = INSERT 0 5", tag == "INSERT 0 5")
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM mi_test")
check("5 rows in table", len(rows) == 5)
s.close()

# ── Test 3: Single-row INSERT still works ────────────────────────────
print("\nTest 3: Single-row INSERT still works")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO mi_test VALUES (1, 'Solo', 99)")
check("No error", err is None)
check("Command tag = INSERT 0 1", tag == "INSERT 0 1")
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM mi_test")
check("1 row in table", len(rows) == 1)
check("Values correct", rows[0][0] == '1' and rows[0][1] == 'Solo' and rows[0][2] == '99')
s.close()

# ── Test 4: Data integrity — all values correct ─────────────────────
print("\nTest 4: Data integrity for multi-row")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
pg_query(s, "INSERT INTO mi_test VALUES (10, 'Xena', 35), (20, 'Yuri', 28), (30, 'Zara', 42)")
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM mi_test")
rows_sorted = sorted(rows, key=lambda r: int(r[0]))
check("Row 1: 10,Xena,35", rows_sorted[0] == ['10', 'Xena', '35'])
check("Row 2: 20,Yuri,28", rows_sorted[1] == ['20', 'Yuri', '28'])
check("Row 3: 30,Zara,42", rows_sorted[2] == ['30', 'Zara', '42'])
s.close()

# ── Test 5: NULL values in multi-row ─────────────────────────────────
print("\nTest 5: NULL values in multi-row INSERT")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO mi_test VALUES (1, NULL, 20), (2, 'Bob', NULL)")
check("No error", err is None)
check("Command tag = INSERT 0 2", tag == "INSERT 0 2")
_, rows, _, _ = pg_query(s, "SELECT id, name, age FROM mi_test")
rows_sorted = sorted(rows, key=lambda r: int(r[0]))
check("Row 1 name is NULL", rows_sorted[0][1] is None or rows_sorted[0][1] == '')
check("Row 2 age is NULL", rows_sorted[1][2] is None or rows_sorted[1][2] == '')
s.close()

# ── Test 6: Duplicate PK in batch (abort semantics) ─────────────────
print("\nTest 6: Duplicate PK in batch (abort)")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
_, _, _, err = pg_query(s, "INSERT INTO mi_test VALUES (1, 'First', 10), (1, 'Dupe', 20)")
check("Error reported for duplicate PK", err is not None)
s.close()

# ── Test 7: Duplicate PK with existing row ───────────────────────────
print("\nTest 7: Duplicate PK with existing row")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
pg_query(s, "INSERT INTO mi_test VALUES (1, 'Existing', 10)")
_, _, _, err = pg_query(s, "INSERT INTO mi_test VALUES (2, 'New', 20), (1, 'Dupe', 30)")
check("Error reported for duplicate PK", err is not None)
s.close()

# ── Test 8: Type mismatch in 3rd row ────────────────────────────────
print("\nTest 8: Type mismatch in batch")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
_, _, _, err = pg_query(s, "INSERT INTO mi_test VALUES (1, 'A', 10), (2, 'B', 20), (3, 'C', 'notint')")
check("Error for type mismatch", err is not None)
s.close()

# ── Test 9: NOT NULL violation in batch ──────────────────────────────
print("\nTest 9: NOT NULL violation in batch")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test2")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test2 (id INT PRIMARY KEY, name VARCHAR(50) NOT NULL)")
s.close()
s = pg_connect()
_, _, _, err = pg_query(s, "INSERT INTO mi_test2 VALUES (1, 'OK'), (2, NULL)")
check("Error for NOT NULL violation", err is not None)
s.close()

# ── Test 10: Wrong column count in batch ─────────────────────────────
print("\nTest 10: Wrong column count in one row")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
_, _, _, err = pg_query(s, "INSERT INTO mi_test VALUES (1, 'A', 10), (2, 'B')")
check("Error for column count mismatch", err is not None)
s.close()

# ── Test 11: Many rows (20 rows) ────────────────────────────────────
print("\nTest 11: 20-row INSERT")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
values = ", ".join([f"({i}, 'Name{i}', {20+i})" for i in range(1, 21)])
_, _, tag, err = pg_query(s, f"INSERT INTO mi_test VALUES {values}")
check("No error", err is None)
check("Command tag = INSERT 0 20", tag == "INSERT 0 20")
_, rows, stag, _ = pg_query(s, "SELECT id FROM mi_test")
check("20 rows in table", stag == "SELECT 20")
s.close()

# ── Test 12: Mixed types (INT, VARCHAR, FLOAT-like) ──────────────────
print("\nTest 12: Mixed types in multi-row")
s = pg_connect()
pg_query(s, "DROP TABLE mi_mix")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_mix (id INT PRIMARY KEY, val VARCHAR(100))")
s.close()
s = pg_connect()
_, _, tag, err = pg_query(s, "INSERT INTO mi_mix VALUES (1, 'hello'), (2, 'world'), (3, 'test')")
check("No error", err is None)
check("Command tag = INSERT 0 3", tag == "INSERT 0 3")
s.close()

# ── Test 13: Verify SELECT after multi-row gives correct data ────────
print("\nTest 13: SELECT after multi-row INSERT")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
pg_query(s, "INSERT INTO mi_test VALUES (100, 'Alpha', 1), (200, 'Beta', 2), (300, 'Gamma', 3)")
_, rows, _, _ = pg_query(s, "SELECT name FROM mi_test WHERE id = 200")
check("Can find row by PK after multi-insert", len(rows) == 1 and rows[0][0] == 'Beta')
s.close()

# ── Test 14: Two separate multi-row INSERTs ──────────────────────────
print("\nTest 14: Two consecutive multi-row INSERTs")
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE mi_test (id INT PRIMARY KEY, name VARCHAR(50), age INT)")
s.close()
s = pg_connect()
pg_query(s, "INSERT INTO mi_test VALUES (1, 'A', 10), (2, 'B', 20)")
_, _, tag2, err2 = pg_query(s, "INSERT INTO mi_test VALUES (3, 'C', 30), (4, 'D', 40)")
check("Second insert no error", err2 is None)
check("Second insert tag = INSERT 0 2", tag2 == "INSERT 0 2")
_, rows, stag, _ = pg_query(s, "SELECT id FROM mi_test")
check("4 rows total after two multi-inserts", stag == "SELECT 4")
s.close()

# ── cleanup ──────────────────────────────────────────────────────────
s = pg_connect()
pg_query(s, "DROP TABLE mi_test")
pg_query(s, "DROP TABLE mi_test2")
pg_query(s, "DROP TABLE mi_mix")
s.close()

print(f"\n=== Results: {passed} passed, {failed} failed ===")
sys.exit(0 if failed == 0 else 1)
