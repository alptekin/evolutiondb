#!/usr/bin/env python3
"""Test IN / NOT IN operators via PostgreSQL wire protocol."""

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
    time.sleep(0.1)
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

def test(label, sql, expected):
    s = pg_connect()
    cols, rows = pg_query(s, sql)
    s.close()
    if rows:
        got = rows[0][0]
    else:
        got = "<no rows>"
    status = "✅" if got == expected else "❌"
    print(f"  {status} {label}: got={got!r}, expected={expected!r}")
    return got == expected

passed = 0
total = 0

print("=== IN (numbers) ===")
tests = [
    ("5 IN (1,2,3,4,5)",      "SELECT 5 IN (1,2,3,4,5)",      "true"),
    ("6 IN (1,2,3,4,5)",      "SELECT 6 IN (1,2,3,4,5)",      "false"),
    ("1 IN (1)",               "SELECT 1 IN (1)",               "true"),
    ("2 IN (1)",               "SELECT 2 IN (1)",               "false"),
    ("3 IN (1,3,5)",           "SELECT 3 IN (1,3,5)",           "true"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print("\n=== IN (strings) ===")
tests = [
    ("'a' IN ('a','b','c')",  "SELECT 'a' IN ('a','b','c')",   "true"),
    ("'d' IN ('a','b','c')",  "SELECT 'd' IN ('a','b','c')",   "false"),
    ("'hello' IN ('hi','hello')", "SELECT 'hello' IN ('hi','hello')", "true"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print("\n=== NOT IN ===")
tests = [
    ("5 NOT IN (1,2,3)",       "SELECT 5 NOT IN (1,2,3)",       "true"),
    ("2 NOT IN (1,2,3)",       "SELECT 2 NOT IN (1,2,3)",       "false"),
    ("'x' NOT IN ('a','b')",   "SELECT 'x' NOT IN ('a','b')",   "true"),
    ("'a' NOT IN ('a','b')",   "SELECT 'a' NOT IN ('a','b')",   "false"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print("\n=== Combined with AND/OR ===")
tests = [
    ("IN + AND",   "SELECT 5 IN (1,2,3,4,5) AND 10 > 5",    "true"),
    ("IN + OR",    "SELECT 5 IN (1,2,3) OR 10 > 5",          "true"),
    ("NOT IN + AND", "SELECT 5 NOT IN (1,2,3) AND 10 > 5",   "true"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print(f"\n{'='*40}")
print(f"Results: {passed}/{total} passed")
if passed == total:
    print("🎉 All tests passed!")
else:
    print("⚠️  Some tests failed!")
    sys.exit(1)
