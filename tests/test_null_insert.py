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
    complete = None
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
                    vals.append(None)
                else:
                    vals.append(msg_body[pos:pos+col_len].decode())
                    pos += col_len
            rows.append(vals)
        elif msg_type == 'C':
            complete = msg_body[:-1].decode()
        elif msg_type == 'E':
            parts = msg_body.split(b'\x00')
            errors.append([p.decode() for p in parts if p])
        i += 1 + msg_len
    return {'columns': columns, 'rows': rows, 'errors': errors, 'complete': complete}

s = pg_connect()

# Setup
pg_query(s, 'drop table t1;')
pg_query(s, 'drop table t2;')

r = pg_query(s, 'create table t1 (id int, name varchar(50), score int);')
res = parse_response(r)
print(f"Setup t1: {res['complete'] or res['errors']}")

r = pg_query(s, 'create table t2 (id int, name varchar(50) not null);')
res = parse_response(r)
print(f"Setup t2: {res['complete'] or res['errors']}")

passed = 0
failed = 0

def test(sql, expected, desc):
    global passed, failed
    r = pg_query(s, sql)
    res = parse_response(r)
    if res['errors']:
        if expected == 'ERROR':
            err_msg = [p for p in res['errors'][0] if p.startswith('M')]
            print(f"  PASS [{desc}]: got expected error: {err_msg}")
            passed += 1
        else:
            err_msg = [p for p in res['errors'][0] if p.startswith('M')]
            print(f"  FAIL [{desc}]: unexpected error: {err_msg}")
            failed += 1
    elif expected == 'ERROR':
        print(f"  FAIL [{desc}]: expected error but got: rows={res['rows']} complete={res['complete']}")
        failed += 1
    elif isinstance(expected, list):
        actual = res['rows']
        if actual == expected:
            print(f"  PASS [{desc}]: {actual}")
            passed += 1
        else:
            print(f"  FAIL [{desc}]: got {actual}, expected {expected}")
            failed += 1
    elif expected == 'OK':
        if res['complete']:
            print(f"  PASS [{desc}]: {res['complete']}")
            passed += 1
        else:
            print(f"  FAIL [{desc}]: expected OK but got rows={res['rows']}")
            failed += 1
    else:
        print(f"  FAIL [{desc}]: unexpected response")
        failed += 1

print("\n--- INSERT with NULL ---")
test("insert into t1 values (1, null, 90);", 'OK', "INSERT NULL name, normal score")
test("insert into t1 values (2, 'Bob', null);", 'OK', "INSERT normal name, NULL score")
test("insert into t1 values (3, 'Alice', 70);", 'OK', "INSERT all normal values")

print("\n--- NOT NULL constraint ---")
test("insert into t2 values (1, null);", 'ERROR', "INSERT NULL into NOT NULL col should fail")
test("insert into t2 values (2, 'OK');", 'OK', "INSERT into NOT NULL col should succeed")

print("\n--- SELECT * with NULLs ---")
test("select * from t1;", 
     [['1', None, '90'], ['2', 'Bob', None], ['3', 'Alice', '70']],
     "SELECT * shows NULL correctly")

print("\n--- IS NULL ---")
test("select name is null from t1;",
     [['true'], ['false'], ['false']],
     "name IS NULL (row 1 has NULL name)")

test("select score is null from t1;",
     [['false'], ['true'], ['false']],
     "score IS NULL (row 2 has NULL score)")

print("\n--- IS NOT NULL ---")
test("select name is not null from t1;",
     [['false'], ['true'], ['true']],
     "name IS NOT NULL")

test("select score is not null from t1;",
     [['true'], ['false'], ['true']],
     "score IS NOT NULL")

print("\n--- SELECT NULL literal ---")
test("select null from t1;",
     [[None], [None], [None]],
     "SELECT NULL returns NULL for all rows")

print("\n--- Mixed expressions ---")
test("select id, name is null, score is null from t1;",
     [['1', 'true', 'false'], ['2', 'false', 'true'], ['3', 'false', 'false']],
     "SELECT id, name IS NULL, score IS NULL")

s.close()
print(f"\n{'='*40}")
print(f"Results: {passed}/{passed+failed}")
if failed == 0:
    print("ALL TESTS PASSED!")
