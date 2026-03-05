#!/usr/bin/env python3
import socket
HOST = 'localhost'
PORT = 5433

def pg_connect():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(5)
    s.connect((HOST, PORT))
    user = b'admin\x00'
    database = b'evosql\x00'
    payload = b'\x00\x03\x00\x00' + b'user\x00' + user + b'database\x00' + database + b'\x00'
    length = 4 + len(payload)
    s.sendall(length.to_bytes(4, 'big') + payload)
    _read_until_ready(s)
    return s

def _read_msg(s):
    tag = s.recv(1)
    if not tag: return None, b''
    lb = s.recv(4)
    l = int.from_bytes(lb, 'big') - 4
    d = b''
    while len(d) < l:
        c = s.recv(l - len(d))
        if not c: break
        d += c
    return tag, d

def _read_until_ready(s):
    while True:
        tag, data = _read_msg(s)
        if tag is None: break
        if tag == b'Z': break
        if tag == b'R':
            at = int.from_bytes(data[:4], 'big')
            if at == 3:
                pw = b'admin\x00'
                s.sendall(b'p' + (4 + len(pw)).to_bytes(4, 'big') + pw)

def simple_query(s, sql):
    payload = sql.encode('utf-8') + b'\x00'
    s.sendall(b'Q' + (4 + len(payload)).to_bytes(4, 'big') + payload)
    rows = []; error = None; cmd = None
    while True:
        tag, data = _read_msg(s)
        if tag is None: break
        if tag == b'D':
            nc = int.from_bytes(data[:2], 'big'); off = 2; row = []
            for _ in range(nc):
                cl = int.from_bytes(data[off:off+4], 'big', signed=True); off += 4
                if cl == -1: row.append(None)
                else: row.append(data[off:off+cl].decode()); off += cl
            rows.append(row)
        elif tag == b'E': error = data.decode('utf-8', errors='replace')
        elif tag == b'C': cmd = data.decode('utf-8').rstrip('\x00')
        elif tag == b'Z': break
    return {'rows': rows, 'error': error, 'command_tag': cmd}

s = pg_connect()
simple_query(s, "DROP TABLE IF EXISTS cpk_debug")
simple_query(s, "DROP TABLE IF EXISTS spk_debug")

# Test single PK delete
r = simple_query(s, "CREATE TABLE spk_debug (id INT PRIMARY KEY, val VARCHAR(20))")
print("Single PK CREATE:", r["error"])
simple_query(s, "INSERT INTO spk_debug VALUES (1, 'alpha')")
simple_query(s, "INSERT INTO spk_debug VALUES (2, 'beta')")
simple_query(s, "INSERT INTO spk_debug VALUES (3, 'gamma')")
r = simple_query(s, "SELECT * FROM spk_debug")
print("Single PK before DELETE:", r["rows"])
r = simple_query(s, "DELETE FROM spk_debug WHERE id = 2")
print("Single PK DELETE:", r["command_tag"])
r = simple_query(s, "SELECT * FROM spk_debug")
print("Single PK after DELETE:", r["rows"])

# Test composite PK delete
r = simple_query(s, "CREATE TABLE cpk_debug (a VARCHAR(10), b INT, c VARCHAR(20), PRIMARY KEY (a, b))")
print("\nComposite PK CREATE:", r["error"])
simple_query(s, "INSERT INTO cpk_debug VALUES ('x', 1, 'alpha')")
simple_query(s, "INSERT INTO cpk_debug VALUES ('y', 1, 'beta')")
simple_query(s, "INSERT INTO cpk_debug VALUES ('x', 2, 'gamma')")
r = simple_query(s, "SELECT * FROM cpk_debug")
print("Composite PK before DELETE:", r["rows"])
r = simple_query(s, "DELETE FROM cpk_debug WHERE a = 'y' AND b = 1")
print("Composite PK DELETE:", r["command_tag"])
r = simple_query(s, "SELECT * FROM cpk_debug")
print("Composite PK after DELETE:", r["rows"])

simple_query(s, "DROP TABLE IF EXISTS cpk_debug")
simple_query(s, "DROP TABLE IF EXISTS spk_debug")
s.close()
