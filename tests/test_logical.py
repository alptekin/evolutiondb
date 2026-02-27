#!/usr/bin/env python3
"""Test AND / OR / NOT / XOR logical operators via PostgreSQL wire protocol."""

import socket, struct, time, sys

HOST, PORT = "localhost", 5433

def pg_connect():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))
    # Startup message: version 3.0
    body = struct.pack("!HH", 3, 0) + b"user\x00test\x00database\x00testdb\x00\x00"
    s.sendall(struct.pack("!I", len(body) + 4) + body)
    # Read until ReadyForQuery
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
    """Send a simple query and return (columns, rows)."""
    msg = b'Q' + struct.pack("!I", len(sql) + 5) + sql.encode() + b'\x00'
    s.sendall(msg)
    time.sleep(0.1)

    columns = []
    rows = []
    current_row = []

    while True:
        hdr = _recvall(s, 5)
        tag = chr(hdr[0])
        length = struct.unpack("!I", hdr[1:5])[0]
        body = _recvall(s, length - 4) if length > 4 else b""

        if tag == 'T':  # RowDescription
            num_fields = struct.unpack("!H", body[:2])[0]
            off = 2
            for _ in range(num_fields):
                end = body.index(b'\x00', off)
                col_name = body[off:end].decode()
                columns.append(col_name)
                off = end + 1 + 18  # skip field metadata
        elif tag == 'D':  # DataRow
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
        elif tag == 'Z':  # ReadyForQuery
            break
        elif tag == 'E':  # ErrorResponse
            print(f"  ERROR: {body.decode(errors='replace')}")
            # still wait for Z
        # ignore C, N, etc.

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

print("=== AND Operator ===")
tests = [
    ("TRUE AND TRUE",   "SELECT 1=1 AND 2=2",   "true"),
    ("TRUE AND FALSE",  "SELECT 1=1 AND 1=2",   "false"),
    ("FALSE AND TRUE",  "SELECT 1=2 AND 1=1",   "false"),
    ("FALSE AND FALSE", "SELECT 1=2 AND 2=3",   "false"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print("\n=== OR Operator ===")
tests = [
    ("TRUE OR TRUE",   "SELECT 1=1 OR 2=2",   "true"),
    ("TRUE OR FALSE",  "SELECT 1=1 OR 1=2",   "true"),
    ("FALSE OR TRUE",  "SELECT 1=2 OR 1=1",   "true"),
    ("FALSE OR FALSE", "SELECT 1=2 OR 2=3",   "false"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print("\n=== NOT Operator ===")
tests = [
    ("NOT TRUE",   "SELECT NOT 1=1",   "false"),
    ("NOT FALSE",  "SELECT NOT 1=2",   "true"),
    ("! TRUE",     "SELECT !(1=1)",    "false"),
    ("! FALSE",    "SELECT !(1=2)",    "true"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print("\n=== XOR Operator ===")
tests = [
    ("TRUE XOR TRUE",   "SELECT 1=1 XOR 2=2",   "false"),
    ("TRUE XOR FALSE",  "SELECT 1=1 XOR 1=2",   "true"),
    ("FALSE XOR TRUE",  "SELECT 1=2 XOR 1=1",   "true"),
    ("FALSE XOR FALSE", "SELECT 1=2 XOR 2=3",   "false"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print("\n=== Combined / Nested ===")
tests = [
    ("AND + OR",         "SELECT 1=1 AND (1=2 OR 2=2)",  "true"),
    ("NOT + AND",        "SELECT NOT (1=1 AND 1=2)",     "true"),
    ("OR + NOT",         "SELECT 1=2 OR NOT 1=2",        "true"),
    ("Complex",          "SELECT (1=1 AND 2=2) OR (3=4 AND 5=5)", "true"),
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
