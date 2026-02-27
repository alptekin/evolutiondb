#!/usr/bin/env python3
"""Test LIMIT and LIMIT offset,count via PostgreSQL wire protocol."""

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

# Setup
s = pg_connect()
pg_query(s, "DROP TABLE t_limit")
s.close()

s = pg_connect()
pg_query(s, "CREATE TABLE t_limit (id INT, name VARCHAR(50))")
s.close()

for i, name in enumerate(['Alice','Bob','Charlie','Diana','Eve'], 1):
    s = pg_connect()
    pg_query(s, f"INSERT INTO t_limit VALUES ({i}, '{name}')")
    s.close()

print("\n=== LIMIT ===")
test("LIMIT 3",
     "SELECT * FROM t_limit LIMIT 3",
     [['1','Alice'], ['2','Bob'], ['3','Charlie']])

test("LIMIT 1",
     "SELECT * FROM t_limit LIMIT 1",
     [['1','Alice']])

test("LIMIT 0",
     "SELECT * FROM t_limit LIMIT 0",
     [])

test("LIMIT 100 (more than rows)",
     "SELECT * FROM t_limit LIMIT 100",
     [['1','Alice'], ['2','Bob'], ['3','Charlie'], ['4','Diana'], ['5','Eve']])

print("\n=== LIMIT with OFFSET (offset, count syntax) ===")
test("LIMIT 2,2 (skip 2, take 2)",
     "SELECT * FROM t_limit LIMIT 2,2",
     [['3','Charlie'], ['4','Diana']])

test("LIMIT 0,3 (skip 0, take 3)",
     "SELECT * FROM t_limit LIMIT 0,3",
     [['1','Alice'], ['2','Bob'], ['3','Charlie']])

test("LIMIT 4,10 (skip 4, take rest)",
     "SELECT * FROM t_limit LIMIT 4,10",
     [['5','Eve']])

print("\n=== LIMIT + WHERE ===")
test("WHERE + LIMIT",
     "SELECT * FROM t_limit WHERE id > 2 LIMIT 2",
     [['3','Charlie'], ['4','Diana']])

test("WHERE + LIMIT 1",
     "SELECT * FROM t_limit WHERE name LIKE '%e' LIMIT 1",
     [['1','Alice']])

print("\n=== LIMIT with column selection ===")
test("SELECT name LIMIT 2",
     "SELECT name FROM t_limit LIMIT 2",
     [['Alice'], ['Bob']])

# Cleanup
s = pg_connect()
pg_query(s, "DROP TABLE t_limit")
s.close()

print(f"\n{'='*40}")
print(f"Results: {passed}/{total} passed")
if passed == total:
    print("🎉 All tests passed!")
else:
    print("⚠️  Some tests failed!")
    sys.exit(1)
