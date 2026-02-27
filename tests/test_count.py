#!/usr/bin/env python3
"""Test COUNT(*) and COUNT(expr) via PostgreSQL wire protocol."""

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
    error = None
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
        elif tag == 'E':
            error = body.decode(errors='replace')
        elif tag == 'Z':
            break
    return columns, rows, error

passed = 0
total = 0

def test(label, sql, expected_cols, expected_rows):
    global passed, total
    total += 1
    s = pg_connect()
    cols, rows, err = pg_query(s, sql)
    s.close()
    if err:
        print(f"  ❌ {label}")
        print(f"       ERROR: {err}")
        return
    ok = True
    if expected_cols is not None and cols != expected_cols:
        ok = False
    if rows != expected_rows:
        ok = False
    if ok:
        print(f"  ✅ {label}")
        passed += 1
    else:
        print(f"  ❌ {label}")
        if expected_cols is not None and cols != expected_cols:
            print(f"       cols got:      {cols}")
            print(f"       cols expected: {expected_cols}")
        print(f"       rows got:      {rows}")
        print(f"       rows expected: {expected_rows}")

# Setup
s = pg_connect()
pg_query(s, "DROP TABLE t_count")
s.close()

s = pg_connect()
pg_query(s, "CREATE TABLE t_count (id INT, name VARCHAR(50), score INT)")
s.close()

for i, (name, score) in enumerate([('Alice', '90'), ('Bob', '85'), ('Charlie', '95'),
                                     ('Diana', '80'), ('Eve', '92')], 1):
    s = pg_connect()
    pg_query(s, f"INSERT INTO t_count VALUES ({i}, '{name}', {score})")
    s.close()

print("\n=== COUNT(*) ===")
test("COUNT(*) all rows",
     "SELECT COUNT(*) FROM t_count",
     ["COUNT(*)"], [['5']])

test("COUNT(*) with WHERE",
     "SELECT COUNT(*) FROM t_count WHERE score > 85",
     ["COUNT(*)"], [['3']])

test("COUNT(*) with WHERE no match",
     "SELECT COUNT(*) FROM t_count WHERE score > 100",
     ["COUNT(*)"], [['0']])

print("\n=== COUNT(column) ===")
test("COUNT(name)",
     "SELECT COUNT(name) FROM t_count",
     ["COUNT(name)"], [['5']])

test("COUNT(id)",
     "SELECT COUNT(id) FROM t_count",
     ["COUNT(id)"], [['5']])

print("\n=== COUNT with other columns ===")
test("COUNT(*) with literal",
     "SELECT COUNT(*), 42 FROM t_count",
     None, [['5', '42']])

print("\n=== COUNT(*) with LIMIT (aggregate before limit) ===")
test("COUNT(*) WHERE + result is always 1 row",
     "SELECT COUNT(*) FROM t_count WHERE score >= 90",
     ["COUNT(*)"], [['3']])

print("\n=== COUNT(*) on empty result ===")
s = pg_connect()
pg_query(s, "DROP TABLE t_empty")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE t_empty (id INT)")
s.close()

test("COUNT(*) empty table",
     "SELECT COUNT(*) FROM t_empty",
     ["COUNT(*)"], [['0']])

# Cleanup
s = pg_connect()
pg_query(s, "DROP TABLE t_count")
s.close()
s = pg_connect()
pg_query(s, "DROP TABLE t_empty")
s.close()

print(f"\n{'='*40}")
print(f"Results: {passed}/{total} passed")
if passed == total:
    print("🎉 All tests passed!")
else:
    print("⚠️  Some tests failed!")
    sys.exit(1)
