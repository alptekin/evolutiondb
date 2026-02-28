#!/usr/bin/env python3
"""
Tests for CREATE DATABASE / CREATE SCHEMA support.
"""

import socket, struct, sys, time

HOST = "127.0.0.1"
PORT = 5433

# ── helpers ──────────────────────────────────────────────────────────
def _send(sock, data):
    sock.sendall(data)

def _recv(sock, n):
    buf = b""
    while len(buf) < n:
        chunk = sock.recv(n - len(buf))
        if not chunk:
            break
        buf += chunk
    return buf

def pg_startup(sock):
    user = b"test\x00"
    db   = b"testdb\x00"
    payload = b"\x00\x03\x00\x00" + b"user\x00" + user + b"database\x00" + db + b"\x00"
    _send(sock, struct.pack("!I", 4 + len(payload)) + payload)
    while True:
        tag = _recv(sock, 1)
        length = struct.unpack("!I", _recv(sock, 4))[0]
        body = _recv(sock, length - 4)
        if tag == b"Z":
            break

def simple_query(sock, sql):
    msg = sql.encode("utf-8") + b"\x00"
    _send(sock, b"Q" + struct.pack("!I", 4 + len(msg)) + msg)
    columns = []
    rows    = []
    error   = None
    cmd_tag = None
    while True:
        tag = _recv(sock, 1)
        length = struct.unpack("!I", _recv(sock, 4))[0]
        body = _recv(sock, length - 4)
        if tag == b"T":
            ncols = struct.unpack("!H", body[:2])[0]
            off = 2
            columns = []
            for _ in range(ncols):
                end = body.index(b"\x00", off)
                columns.append(body[off:end].decode())
                off = end + 1 + 18
        elif tag == b"D":
            ncols = struct.unpack("!H", body[:2])[0]
            off = 2
            row = []
            for _ in range(ncols):
                vlen = struct.unpack("!i", body[off:off+4])[0]
                off += 4
                if vlen == -1:
                    row.append(None)
                else:
                    row.append(body[off:off+vlen].decode())
                    off += vlen
            rows.append(row)
        elif tag == b"E":
            error = body.decode(errors="replace")
        elif tag == b"C":
            cmd_tag = body.rstrip(b"\x00").decode()
        elif tag == b"Z":
            break
    return columns, rows, error, cmd_tag

def conn():
    s = socket.socket()
    s.connect((HOST, PORT))
    pg_startup(s)
    return s

# ── tests ────────────────────────────────────────────────────────────
passed = 0
failed = 0

def ok(cond, name):
    global passed, failed
    if cond:
        passed += 1
        print(f"  \033[32mPASS\033[0m {name}")
    else:
        failed += 1
        print(f"  \033[31mFAIL\033[0m {name}")

# ── setup: drop test tables ─────────────────────────────────────────
s = conn()
simple_query(s, "DROP TABLE probe_tbl")
s.close()

# ------------------------------------------------------------------
print("=== CREATE DATABASE ===")
# ------------------------------------------------------------------

s = conn()

# 1) basic CREATE DATABASE
_, _, err, tag = simple_query(s, "CREATE DATABASE mydb1")
ok(err is None and tag == "CREATE DATABASE", "CREATE DATABASE mydb1")

# 2) command tag is correct
ok(tag == "CREATE DATABASE", "command tag = CREATE DATABASE")

# 3) duplicate DATABASE → error
_, _, err, _ = simple_query(s, "CREATE DATABASE mydb1")
ok(err is not None and "already exists" in err, "duplicate DATABASE error")

# 4) second unique DATABASE
_, _, err, tag = simple_query(s, "CREATE DATABASE mydb2")
ok(err is None and tag == "CREATE DATABASE", "CREATE DATABASE mydb2")

# 5) IF NOT EXISTS – should succeed even if exists
_, _, err, tag = simple_query(s, "CREATE DATABASE IF NOT EXISTS mydb1")
ok(err is None, "CREATE DATABASE IF NOT EXISTS (existing)")

# 6) IF NOT EXISTS – new db
_, _, err, tag = simple_query(s, "CREATE DATABASE IF NOT EXISTS mydb3")
ok(err is None, "CREATE DATABASE IF NOT EXISTS (new)")

s.close()

# ------------------------------------------------------------------
print("=== CREATE SCHEMA ===")
# ------------------------------------------------------------------

s = conn()

# 7) basic CREATE SCHEMA
_, _, err, tag = simple_query(s, "CREATE SCHEMA mysch1")
ok(err is None and tag == "CREATE SCHEMA", "CREATE SCHEMA mysch1")

# 8) command tag is correct
ok(tag == "CREATE SCHEMA", "command tag = CREATE SCHEMA")

# 9) duplicate SCHEMA → error
_, _, err, _ = simple_query(s, "CREATE SCHEMA mysch1")
ok(err is not None and "already exists" in err, "duplicate SCHEMA error")

# 10) second unique SCHEMA
_, _, err, tag = simple_query(s, "CREATE SCHEMA mysch2")
ok(err is None and tag == "CREATE SCHEMA", "CREATE SCHEMA mysch2")

# 11) IF NOT EXISTS – should succeed even if exists
_, _, err, tag = simple_query(s, "CREATE SCHEMA IF NOT EXISTS mysch1")
ok(err is None, "CREATE SCHEMA IF NOT EXISTS (existing)")

# 12) IF NOT EXISTS – new schema
_, _, err, tag = simple_query(s, "CREATE SCHEMA IF NOT EXISTS mysch3")
ok(err is None, "CREATE SCHEMA IF NOT EXISTS (new)")

s.close()

# ------------------------------------------------------------------
print("=== Table files in correct directory ===")
# ------------------------------------------------------------------

s = conn()

# 13) CREATE TABLE → files in current database directory
_, _, err1, _ = simple_query(s, "CREATE TABLE dbtesttbl (id INT, val VARCHAR(50))")
ok(err1 is None, "CREATE TABLE dbtesttbl")

# 14) INSERT succeeds
_, _, err2, _ = simple_query(s, "INSERT INTO dbtesttbl VALUES (1, 'row1')")
ok(err2 is None, "INSERT INTO dbtesttbl")

# 15) SELECT returns data
cols, rows, err3, _ = simple_query(s, "SELECT id, val FROM dbtesttbl")
ok(err3 is None and rows == [["1", "row1"]], "SELECT from dbtesttbl")

# 16) DROP TABLE works
_, _, err4, tag4 = simple_query(s, "DROP TABLE dbtesttbl")
ok(err4 is None and tag4 == "DROP TABLE", "DROP TABLE dbtesttbl")

s.close()

# ------------------------------------------------------------------
print("=== CREATE TABLE remains functional ===")
# ------------------------------------------------------------------

s = conn()

# 17) Multi-column table
_, _, err, _ = simple_query(s, "CREATE TABLE mctbl (a INT, b VARCHAR(30), c INT)")
ok(err is None, "CREATE TABLE mctbl (multi-col)")

# 18) Insert and select back
_, _, err, _ = simple_query(s, "INSERT INTO mctbl VALUES (10, 'abc', 20)")
ok(err is None, "INSERT INTO mctbl")

cols, rows, err, _ = simple_query(s, "SELECT a, b, c FROM mctbl")
ok(err is None and rows == [["10", "abc", "20"]], "SELECT from mctbl")

# cleanup
simple_query(s, "DROP TABLE mctbl")
s.close()

# ------------------------------------------------------------------
print("=== Case-insensitive keywords ===")
# ------------------------------------------------------------------

s = conn()

# 20) lowercase create database
_, _, err, tag = simple_query(s, "create database lowerdb")
ok(err is None, "lowercase 'create database'")

s.close()

# ── summary ──────────────────────────────────────────────────────────
print(f"\n{'='*40}")
print(f"  PASSED: {passed}/{passed+failed}")
if failed:
    print(f"  FAILED: {failed}")
    sys.exit(1)
else:
    print("  ALL TESTS PASSED!")
    sys.exit(0)
