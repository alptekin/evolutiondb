import socket, struct

def pg_connect():
    s = socket.socket()
    s.connect(('localhost', 5433))
    s.send(b'\x00\x00\x00\x08\x00\x03\x00\x00')
    s.recv(4096)
    s.send(b'p\x00\x00\x00\x08\x00\x00\x00\x00')
    s.recv(4096)
    return s

def pg_query(s, sql):
    msg = b'Q' + struct.pack('!I', 4 + len(sql) + 1) + sql.encode() + b'\x00'
    s.send(msg)
    data = b''
    while True:
        chunk = s.recv(8192)
        data += chunk
        if len(data) >= 6 and data[-6] == ord('Z'):
            break
    return data

def parse_response(data):
    i = 0
    columns = []
    rows = []
    errors = []
    while i < len(data):
        msg_type = chr(data[i])
        if i + 5 > len(data): break
        msg_len = struct.unpack('!I', data[i+1:i+5])[0]
        msg_body = data[i+5:i+1+msg_len]
        if msg_type == 'T':
            num_fields = struct.unpack('!H', msg_body[:2])[0]
            pos = 2
            for f in range(num_fields):
                end = msg_body.index(b'\x00', pos)
                columns.append(msg_body[pos:end].decode())
                pos = end + 1 + 18
        elif msg_type == 'D':
            num_cols = struct.unpack('!H', msg_body[:2])[0]
            pos = 2
            vals = []
            for c in range(num_cols):
                col_len = struct.unpack('!i', msg_body[pos:pos+4])[0]
                pos += 4
                if col_len == -1:
                    vals.append('NULL')
                else:
                    vals.append(msg_body[pos:pos+col_len].decode())
                    pos += col_len
            rows.append(vals)
        elif msg_type == 'E':
            parts = msg_body.split(b'\x00')
            errors.append([p.decode() for p in parts if p])
        i += 1 + msg_len
    return {'columns': columns, 'rows': rows, 'errors': errors}

s = pg_connect()
print("Connected!\n")

r = pg_query(s, 'create table test1 (id int, name varchar(50));')
print(f"CREATE: OK")
r = pg_query(s, "insert into test1 values (1, 'hello');")
print(f"INSERT: OK\n")

import re
from datetime import datetime

# Test CURRENT_TIMESTAMP
r = pg_query(s, 'select current_timestamp from test1;')
res = parse_response(r)
if res['errors']:
    print(f"FAIL [CURRENT_TIMESTAMP]: {res['errors']}")
elif res['rows']:
    val = res['rows'][0][0]
    col = res['columns'][0] if res['columns'] else '?'
    # Check format: YYYY-MM-DD HH:MM:SS
    match = re.match(r'\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}', val)
    print(f"{'PASS' if match else 'FAIL'} [CURRENT_TIMESTAMP]: col={col}, val={val}")

# Test CURRENT_DATE
r = pg_query(s, 'select current_date from test1;')
res = parse_response(r)
if res['errors']:
    print(f"FAIL [CURRENT_DATE]: {res['errors']}")
elif res['rows']:
    val = res['rows'][0][0]
    col = res['columns'][0] if res['columns'] else '?'
    match = re.match(r'\d{4}-\d{2}-\d{2}$', val)
    print(f"{'PASS' if match else 'FAIL'} [CURRENT_DATE]: col={col}, val={val}")

# Test CURRENT_TIME
r = pg_query(s, 'select current_time from test1;')
res = parse_response(r)
if res['errors']:
    print(f"FAIL [CURRENT_TIME]: {res['errors']}")
elif res['rows']:
    val = res['rows'][0][0]
    col = res['columns'][0] if res['columns'] else '?'
    match = re.match(r'\d{2}:\d{2}:\d{2}$', val)
    print(f"{'PASS' if match else 'FAIL'} [CURRENT_TIME]: col={col}, val={val}")

# Test with alias
r = pg_query(s, 'select current_timestamp as now from test1;')
res = parse_response(r)
if res['rows']:
    col = res['columns'][0] if res['columns'] else '?'
    val = res['rows'][0][0]
    match = re.match(r'\d{4}-\d{2}-\d{2} \d{2}:\d{2}:\d{2}', val)
    print(f"{'PASS' if match else 'FAIL'} [CURRENT_TIMESTAMP AS now]: col={col}, val={val}")

s.close()
