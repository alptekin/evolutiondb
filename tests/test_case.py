#!/usr/bin/env python3
"""Test CASE/WHEN expressions via PostgreSQL wire protocol."""

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

def test(label, sql, expected_rows):
    global passed, total
    total += 1
    s = pg_connect()
    cols, rows, err = pg_query(s, sql)
    s.close()
    if err:
        print(f"  ❌ {label}")
        print(f"       ERROR: {err}")
        return
    if rows == expected_rows:
        print(f"  ✅ {label}")
        passed += 1
    else:
        print(f"  ❌ {label}")
        print(f"       got:      {rows}")
        print(f"       expected: {expected_rows}")

# Setup table
s = pg_connect()
pg_query(s, "DROP TABLE t_case")
s.close()
s = pg_connect()
pg_query(s, "CREATE TABLE t_case (id INT, name VARCHAR(50), score INT)")
s.close()
for i, (name, score) in enumerate([('Alice', '95'), ('Bob', '72'), ('Charlie', '85'),
                                     ('Diana', '60'), ('Eve', '88')], 1):
    s = pg_connect()
    pg_query(s, f"INSERT INTO t_case VALUES ({i}, '{name}', {score})")
    s.close()

print("\n=== Searched CASE (CASE WHEN ... THEN ... END) ===")

test("Searched CASE with ELSE — tableless",
     "SELECT CASE WHEN 1=1 THEN 'yes' ELSE 'no' END",
     [['yes']])

test("Searched CASE false condition",
     "SELECT CASE WHEN 1=2 THEN 'yes' ELSE 'no' END",
     [['no']])

test("Searched CASE no ELSE (NULL)",
     "SELECT CASE WHEN 1=2 THEN 'yes' END",
     [[None]])

test("Searched CASE multiple WHENs — first match",
     "SELECT CASE WHEN 1=1 THEN 'first' WHEN 2=2 THEN 'second' ELSE 'other' END",
     [['first']])

test("Searched CASE multiple WHENs — second match",
     "SELECT CASE WHEN 1=2 THEN 'first' WHEN 2=2 THEN 'second' ELSE 'other' END",
     [['second']])

test("Searched CASE multiple WHENs — else",
     "SELECT CASE WHEN 1=2 THEN 'first' WHEN 3=4 THEN 'second' ELSE 'other' END",
     [['other']])

print("\n=== Simple CASE (CASE expr WHEN val THEN ...) ===")

test("Simple CASE — match first",
     "SELECT CASE 1 WHEN 1 THEN 'one' WHEN 2 THEN 'two' ELSE 'other' END",
     [['one']])

test("Simple CASE — match second",
     "SELECT CASE 2 WHEN 1 THEN 'one' WHEN 2 THEN 'two' ELSE 'other' END",
     [['two']])

test("Simple CASE — else",
     "SELECT CASE 3 WHEN 1 THEN 'one' WHEN 2 THEN 'two' ELSE 'other' END",
     [['other']])

print("\n=== CASE with table data ===")

test("CASE on column — grade classification",
     "SELECT name, CASE WHEN score >= 90 THEN 'A' WHEN score >= 80 THEN 'B' WHEN score >= 70 THEN 'C' ELSE 'D' END FROM t_case",
     [['Alice', 'A'], ['Bob', 'C'], ['Charlie', 'B'], ['Diana', 'D'], ['Eve', 'B']])

test("Simple CASE on column value",
     "SELECT name, CASE name WHEN 'Alice' THEN 'VIP' WHEN 'Bob' THEN 'Regular' ELSE 'Unknown' END FROM t_case",
     [['Alice', 'VIP'], ['Bob', 'Regular'], ['Charlie', 'Unknown'], ['Diana', 'Unknown'], ['Eve', 'Unknown']])

test("CASE in WHERE clause",
     "SELECT name FROM t_case WHERE CASE WHEN score >= 85 THEN 1 ELSE 0 END = 1",
     [['Alice'], ['Charlie'], ['Eve']])

print("\n=== CASE with arithmetic ===")

test("CASE returning numbers",
     "SELECT name, CASE WHEN score >= 90 THEN score + 10 ELSE score - 5 END FROM t_case LIMIT 3",
     [['Alice', '105'], ['Bob', '67'], ['Charlie', '80']])

# Cleanup
s = pg_connect()
pg_query(s, "DROP TABLE t_case")
s.close()

print(f"\n{'='*40}")
print(f"Results: {passed}/{total} passed")
if passed == total:
    print("🎉 All tests passed!")
else:
    print("⚠️  Some tests failed!")
    sys.exit(1)
