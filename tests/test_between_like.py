#!/usr/bin/env python3
"""Test BETWEEN, NOT BETWEEN, LIKE, NOT LIKE operators via PostgreSQL wire protocol."""

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
                col_name = body[off:end].decode()
                columns.append(col_name)
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

print("=== BETWEEN ===")
tests = [
    ("5 BETWEEN 1 AND 10",        "SELECT 5 BETWEEN 1 AND 10",        "true"),
    ("15 BETWEEN 1 AND 10",       "SELECT 15 BETWEEN 1 AND 10",       "false"),
    ("1 BETWEEN 1 AND 10",        "SELECT 1 BETWEEN 1 AND 10",        "true"),   # inclusive
    ("10 BETWEEN 1 AND 10",       "SELECT 10 BETWEEN 1 AND 10",       "true"),   # inclusive
    ("0 BETWEEN 1 AND 10",        "SELECT 0 BETWEEN 1 AND 10",        "false"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print("\n=== NOT BETWEEN ===")
tests = [
    ("5 NOT BETWEEN 1 AND 10",    "SELECT 5 NOT BETWEEN 1 AND 10",    "false"),
    ("15 NOT BETWEEN 1 AND 10",   "SELECT 15 NOT BETWEEN 1 AND 10",   "true"),
    ("1 NOT BETWEEN 1 AND 10",    "SELECT 1 NOT BETWEEN 1 AND 10",    "false"),
    ("0 NOT BETWEEN 1 AND 10",    "SELECT 0 NOT BETWEEN 1 AND 10",    "true"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print("\n=== LIKE ===")
tests = [
    ("exact match",                "SELECT 'hello' LIKE 'hello'",             "true"),
    ("no match",                   "SELECT 'hello' LIKE 'world'",             "false"),
    ("% wildcard",                 "SELECT 'hello' LIKE 'h%'",                "true"),
    ("% wildcard end",             "SELECT 'hello' LIKE '%lo'",               "true"),
    ("% wildcard middle",          "SELECT 'hello' LIKE '%ell%'",             "true"),
    ("% wildcard no match",        "SELECT 'hello' LIKE '%xyz%'",             "false"),
    ("_ wildcard",                 "SELECT 'hello' LIKE 'hell_'",             "true"),
    ("_ wildcard no match",        "SELECT 'hello' LIKE 'hel_'",             "false"),
    ("combined _ and %",           "SELECT 'hello' LIKE '_ell%'",             "true"),
    ("just %",                     "SELECT 'anything' LIKE '%'",              "true"),
    ("empty pattern",              "SELECT '' LIKE ''",                        "true"),
]
for label, sql, exp in tests:
    total += 1
    if test(label, sql, exp): passed += 1

print("\n=== NOT LIKE ===")
tests = [
    ("exact match",                "SELECT 'hello' NOT LIKE 'hello'",         "false"),
    ("no match",                   "SELECT 'hello' NOT LIKE 'world'",         "true"),
    ("% wildcard",                 "SELECT 'hello' NOT LIKE 'h%'",            "false"),
    ("% wildcard no match",        "SELECT 'hello' NOT LIKE '%xyz%'",         "true"),
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
