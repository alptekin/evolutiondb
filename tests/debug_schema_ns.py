#!/usr/bin/env python3
"""Verify that pg_class returns tables only for the correct schema namespace."""
import socket, struct, time, sys

HOST, PORT = "localhost", 5433

def pg_connect():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))
    body = struct.pack("!HH", 3, 0) + b"user\x00admin\x00database\x00testdb\x00\x00"
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
        if not chunk: raise ConnectionError("closed")
        data += chunk
    return data

def pg_query(s, sql):
    msg = b'Q' + struct.pack("!I", len(sql) + 5) + sql.encode() + b'\x00'
    s.sendall(msg)
    time.sleep(0.2)
    columns, rows, tag = [], [], ""
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
        elif t == 'Z':
            break
        elif t == 'E':
            print("  ERR: " + body.decode(errors='replace'))
    return columns, rows, tag

# Setup
s = pg_connect(); pg_query(s, "DROP TABLE schema_test_tbl"); s.close()
s = pg_connect(); pg_query(s, "CREATE SCHEMA IF NOT EXISTS test_ns_schema"); s.close()
s = pg_connect(); pg_query(s, "CREATE TABLE schema_test_tbl (id INT, name VARCHAR(50))"); s.close()

# Query pg_namespace to see OIDs
s = pg_connect()
cols, rows, tag = pg_query(s, "SELECT oid, nspname FROM pg_catalog.pg_namespace")
print("=== Schemas (pg_namespace) ===")
schema_oids = {}
for r in rows:
    print("  OID=%s, name=%s" % (r[0], r[1]))
    schema_oids[r[1]] = r[0]
s.close()

default_oid = schema_oids.get("default", "2200")
test_oid = schema_oids.get("test_ns_schema", "9999")
print("\ndefault schema OID = %s" % default_oid)
print("test_ns_schema OID = %s" % test_oid)

# Query pg_class for default schema
s = pg_connect()
cols, rows, tag = pg_query(s, "SELECT relname, relnamespace FROM pg_class WHERE relnamespace='%s'" % default_oid)
print("\n=== Tables in default (OID %s) === [%s]" % (default_oid, tag))
# catalog returns all columns: oid(0), relname(1), relnamespace(2), ...
default_tables = [r[1] for r in rows]
for r in rows:
    print("  oid=%s, table=%s, ns=%s" % (r[0], r[1], r[2]))
s.close()

# Query pg_class for test_ns_schema
s = pg_connect()
cols, rows, tag = pg_query(s, "SELECT relname, relnamespace FROM pg_class WHERE relnamespace='%s'" % test_oid)
print("\n=== Tables in test_ns_schema (OID %s) === [%s]" % (test_oid, tag))
test_tables = [r[1] for r in rows]
for r in rows:
    print("  oid=%s, table=%s, ns=%s" % (r[0], r[1], r[2]))
s.close()

# Query pg_class for pg_catalog (should be empty)
s = pg_connect()
cols, rows, tag = pg_query(s, "SELECT relname FROM pg_class WHERE relnamespace='11'")
print("\n=== Tables in pg_catalog (OID 11) === [%s]" % tag)
for r in rows:
    print("  table=%s" % r[0])
s.close()

# Verify
ok = True
if "schema_test_tbl" in default_tables:
    print("\nOK: schema_test_tbl found in default schema")
else:
    print("\nFAIL: schema_test_tbl NOT found in default schema")
    ok = False

if "schema_test_tbl" not in test_tables:
    print("OK: schema_test_tbl NOT in test_ns_schema (correct)")
else:
    print("FAIL: schema_test_tbl found in test_ns_schema (wrong!)")
    ok = False

# Cleanup
s = pg_connect(); pg_query(s, "DROP TABLE schema_test_tbl"); s.close()

print("\n%s" % ("ALL CHECKS PASSED" if ok else "SOME CHECKS FAILED"))
sys.exit(0 if ok else 1)
