#!/usr/bin/env python3
"""Test WHERE clause with expression filtering via PostgreSQL wire protocol."""

import socket, struct, time, sys

HOST, PORT = "localhost", 5433

def pg_connect():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))
    body = struct.pack("!HH", 3, 0) + b"user\x00test\x00database\x00testdb\x00\x00"
    s.sendall(struct.pack("!I", len(body) + 4) + body)
    _read_until_ready(s)
    return s

def _read_until_ready(s):
    while True:
        hdr = _recvall(s, 5)
        tag = chr(hdr[0])
        length = struct.unpack("!I", hdr[1:5])[0]
        body = _recvall(s, length - 4) if length > 4 else b""
        if tag == 'Z':
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
    columns = []
    rows = []
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
        elif tag == 'Z':
            break
        elif tag == 'E':
            print(f"  ERROR: {body.decode(errors='replace')}")
    return columns, rows

passed = 0
total = 0

def test(label, sql, expected_rows):
    global passed, total
    total += 1
    s = pg_connect()
    cols, rows = pg_query(s, sql)
    s.close()
    if rows == expected_rows:
        print(f"  ✅ {label}")
        passed += 1
    else:
        print(f"  ❌ {label}")
        print(f"       got:      {rows}")
        print(f"       expected: {expected_rows}")

# Setup: create table and insert data
s = pg_connect()
pg_query(s, "DROP TABLE t_where")
s.close()

s = pg_connect()
pg_query(s, "CREATE TABLE t_where (id INT, name VARCHAR(50), score INT, city VARCHAR(50))")
s.close()

data = [
    (1, 'Alice',   90, 'Istanbul'),
    (2, 'Bob',     60, 'Ankara'),
    (3, 'Charlie', 85, 'Istanbul'),
    (4, 'Diana',   70, 'Izmir'),
    (5, 'Eve',     95, 'Ankara'),
]
for id, name, score, city in data:
    s = pg_connect()
    pg_query(s, f"INSERT INTO t_where VALUES ({id}, '{name}', {score}, '{city}')")
    s.close()

print("\n=== WHERE with comparison ===")
test("score > 80",
     "SELECT * FROM t_where WHERE score > 80",
     [['1','Alice','90','Istanbul'], ['3','Charlie','85','Istanbul'], ['5','Eve','95','Ankara']])

test("score = 70",
     "SELECT * FROM t_where WHERE score = 70",
     [['4','Diana','70','Izmir']])

test("id <= 2",
     "SELECT * FROM t_where WHERE id <= 2",
     [['1','Alice','90','Istanbul'], ['2','Bob','60','Ankara']])

print("\n=== WHERE with AND / OR ===")
test("score > 80 AND city = 'Istanbul'",
     "SELECT * FROM t_where WHERE score > 80 AND city = 'Istanbul'",
     [['1','Alice','90','Istanbul'], ['3','Charlie','85','Istanbul']])

test("city = 'Ankara' OR city = 'Izmir'",
     "SELECT * FROM t_where WHERE city = 'Ankara' OR city = 'Izmir'",
     [['2','Bob','60','Ankara'], ['4','Diana','70','Izmir'], ['5','Eve','95','Ankara']])

print("\n=== WHERE with BETWEEN ===")
test("score BETWEEN 70 AND 90",
     "SELECT * FROM t_where WHERE score BETWEEN 70 AND 90",
     [['1','Alice','90','Istanbul'], ['3','Charlie','85','Istanbul'], ['4','Diana','70','Izmir']])

print("\n=== WHERE with IN ===")
test("city IN ('Istanbul', 'Izmir')",
     "SELECT * FROM t_where WHERE city IN ('Istanbul', 'Izmir')",
     [['1','Alice','90','Istanbul'], ['3','Charlie','85','Istanbul'], ['4','Diana','70','Izmir']])

test("id NOT IN (1, 3, 5)",
     "SELECT * FROM t_where WHERE id NOT IN (1, 3, 5)",
     [['2','Bob','60','Ankara'], ['4','Diana','70','Izmir']])

print("\n=== WHERE with LIKE ===")
test("name LIKE 'A%'",
     "SELECT * FROM t_where WHERE name LIKE 'A%'",
     [['1','Alice','90','Istanbul']])

test("name LIKE '%e'",
     "SELECT * FROM t_where WHERE name LIKE '%e'",
     [['1','Alice','90','Istanbul'], ['3','Charlie','85','Istanbul'], ['5','Eve','95','Ankara']])

print("\n=== WHERE with NOT ===")
test("NOT score > 80",
     "SELECT * FROM t_where WHERE NOT score > 80",
     [['2','Bob','60','Ankara'], ['4','Diana','70','Izmir']])

print("\n=== WHERE with column selection ===")
test("SELECT name, score WHERE score >= 90",
     "SELECT name, score FROM t_where WHERE score >= 90",
     [['Alice','90'], ['Eve','95']])

print("\n=== WHERE with expression in SELECT ===")
test("SELECT name, score+10 WHERE score > 85",
     "SELECT name, score+10 FROM t_where WHERE score > 85",
     [['Alice','100'], ['Eve','105']])

# Cleanup
s = pg_connect()
pg_query(s, "DROP TABLE t_where")
s.close()

print(f"\n{'='*40}")
print(f"Results: {passed}/{total} passed")
if passed == total:
    print("🎉 All tests passed!")
else:
    print("⚠️  Some tests failed!")
    sys.exit(1)
