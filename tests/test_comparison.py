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
r = pg_query(s, 'create table t1 (id int, name varchar(50), score int);')
res = parse_response(r)
print(f"Setup: {res['complete'] or res['errors']}")

pg_query(s, "insert into t1 values (1, 'Alice', 90);")
pg_query(s, "insert into t1 values (2, 'Bob', 70);")
pg_query(s, "insert into t1 values (3, 'Charlie', 90);")
pg_query(s, "insert into t1 values (4, 'Dave', 50);")

passed = 0
failed = 0

def test(sql, expected, desc):
    global passed, failed
    r = pg_query(s, sql)
    res = parse_response(r)
    if res['errors']:
        if expected == 'ERROR':
            print(f"  PASS [{desc}]: got expected error")
            passed += 1
        else:
            err_msg = [p for p in res['errors'][0] if p.startswith('M')]
            print(f"  FAIL [{desc}]: unexpected error: {err_msg}")
            failed += 1
    elif isinstance(expected, list):
        actual = res['rows']
        if actual == expected:
            print(f"  PASS [{desc}]: {actual}")
            passed += 1
        else:
            print(f"  FAIL [{desc}]: got {actual}, expected {expected}")
            failed += 1
    else:
        print(f"  FAIL [{desc}]: unexpected response")
        failed += 1

print("\n--- Equality (=) ---")
test("select score = 90 from t1;",
     [['true'], ['false'], ['true'], ['false']],
     "score = 90")

test("select name = 'Bob' from t1;",
     [['false'], ['true'], ['false'], ['false']],
     "name = 'Bob'")

print("\n--- Not equal (<>) ---")
test("select score <> 90 from t1;",
     [['false'], ['true'], ['false'], ['true']],
     "score <> 90")

print("\n--- Less than (<) ---")
test("select score < 90 from t1;",
     [['false'], ['true'], ['false'], ['true']],
     "score < 90")

print("\n--- Greater than (>) ---")
test("select score > 70 from t1;",
     [['true'], ['false'], ['true'], ['false']],
     "score > 70")

print("\n--- Less or equal (<=) ---")
test("select score <= 70 from t1;",
     [['false'], ['true'], ['false'], ['true']],
     "score <= 70")

print("\n--- Greater or equal (>=) ---")
test("select score >= 90 from t1;",
     [['true'], ['false'], ['true'], ['false']],
     "score >= 90")

print("\n--- Literal comparisons ---")
test("select 5 = 5 from t1;",
     [['true'], ['true'], ['true'], ['true']],
     "5 = 5 (always true)")

test("select 3 > 5 from t1;",
     [['false'], ['false'], ['false'], ['false']],
     "3 > 5 (always false)")

print("\n--- String comparison ---")
test("select name = 'Alice' from t1;",
     [['true'], ['false'], ['false'], ['false']],
     "name = 'Alice'")

print("\n--- Mixed with arithmetic ---")
test("select score + 10 > 95 from t1;",
     [['true'], ['false'], ['true'], ['false']],
     "score + 10 > 95")

print("\n--- Column comparison ---")
test("select id, score = 90, score > 70, score <> 50 from t1;",
     [['1', 'true', 'true', 'true'], ['2', 'false', 'false', 'true'], ['3', 'true', 'true', 'true'], ['4', 'false', 'false', 'false']],
     "multi-column comparison")

s.close()
print(f"\n{'='*40}")
print(f"Results: {passed}/{passed+failed}")
if failed == 0:
    print("ALL TESTS PASSED!")
