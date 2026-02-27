import socket, struct, time

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
    time.sleep(0.1)
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

# Setup - drop first to avoid conflicts with previous runs
pg_query(s, 'drop table t1;')
pg_query(s, 'create table t1 (id int, name varchar(50), score int);')
pg_query(s, "insert into t1 values (1, 'Alice', 90);")

tests = [
    ("select name is not null from t1;", ["true"], "name IS NOT NULL (has value)"),
    ("select id is null from t1;", ["false"], "id IS NULL (has value=1)"),
    ("select 5 is null from t1;", ["false"], "literal 5 IS NULL (always false)"),
    ("select 5 is not null from t1;", ["true"], "literal 5 IS NOT NULL (always true)"),
    ("select name is null from t1;", ["false"], "name IS NULL (has value Alice)"),
]

passed = 0
failed = 0
for sql, expected, desc in tests:
    r = pg_query(s, sql)
    res = parse_response(r)
    if res['errors']:
        print(f"FAIL [{desc}]: {res['errors']}")
        failed += 1
    elif res['rows']:
        vals = [row[0] for row in res['rows']]
        if vals == expected:
            print(f"PASS [{desc}]: {vals}")
            passed += 1
        else:
            print(f"FAIL [{desc}]: got {vals}, expected {expected}")
            failed += 1
    else:
        print(f"FAIL [{desc}]: no rows")
        failed += 1

s.close()
print(f"\nResults: {passed}/{passed+failed}")
