"""
Session Isolation Test
======================
Verifies that per-connection SessionCtx works correctly:
- Two simultaneous connections have independent database/schema state
- USE DATABASE on one connection does NOT affect the other
- SET SCHEMA on one connection does NOT affect the other
"""
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
    time.sleep(0.15)
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

passed = 0
failed = 0

def check(label, actual, expected):
    global passed, failed
    if actual == expected:
        print(f"  PASS: {label}")
        passed += 1
    else:
        print(f"  FAIL: {label} — got '{actual}', expected '{expected}'")
        failed += 1

def get_current_database(conn):
    r = pg_query(conn, "SELECT current_database();")
    res = parse_response(r)
    if res['rows']:
        return res['rows'][0][0]
    return None

def get_current_schema(conn):
    r = pg_query(conn, "SELECT current_schema();")
    res = parse_response(r)
    if res['rows']:
        return res['rows'][0][0]
    return None

# ─── Open two independent connections ───────────────────────────────
print("Opening two connections...")
connA = pg_connect()
connB = pg_connect()

# ─── Setup: create test database and schema ─────────────────────────
print("\n--- Setup ---")
pg_query(connA, "CREATE DATABASE IF NOT EXISTS isoTestDB;")
pg_query(connA, "USE isoTestDB;")
pg_query(connA, "CREATE SCHEMA IF NOT EXISTS isoSchema;")
# Switch back to default for clean state
pg_query(connA, "USE evosql;")
pg_query(connA, "SET SCHEMA default;")

# ─── Test 1: Initial state — both connections have defaults ─────────
print("\n--- Test 1: Initial default state ---")
dbA = get_current_database(connA)
dbB = get_current_database(connB)
schA = get_current_schema(connA)
schB = get_current_schema(connB)

check("ConnA initial database = evosql", dbA, "evosql")
check("ConnB initial database = evosql", dbB, "evosql")
check("ConnA initial schema = default", schA, "default")
check("ConnB initial schema = default", schB, "default")

# ─── Test 2: USE DATABASE on connA does NOT affect connB ────────────
print("\n--- Test 2: USE DATABASE isolation ---")
pg_query(connA, "USE isoTestDB;")

dbA = get_current_database(connA)
dbB = get_current_database(connB)

check("ConnA database after USE = isoTestDB", dbA, "isoTestDB")
check("ConnB database still = evosql", dbB, "evosql")

# ─── Test 3: SET SCHEMA on connA does NOT affect connB ──────────────
print("\n--- Test 3: SET SCHEMA isolation ---")
pg_query(connA, "SET SCHEMA isoSchema;")

schA = get_current_schema(connA)
schB = get_current_schema(connB)

check("ConnA schema after SET = isoSchema", schA, "isoSchema")
check("ConnB schema still = default", schB, "default")

# ─── Test 4: ConnB changes independently ────────────────────────────
print("\n--- Test 4: ConnB independent change ---")
pg_query(connB, "USE isoTestDB;")

dbA = get_current_database(connA)
dbB = get_current_database(connB)
schA = get_current_schema(connA)
schB = get_current_schema(connB)

check("ConnA database still = isoTestDB", dbA, "isoTestDB")
check("ConnB database now = isoTestDB", dbB, "isoTestDB")
# ConnA's schema should still be isoSchema
check("ConnA schema still = isoSchema", schA, "isoSchema")
# ConnB's schema should still be default (USE doesn't change schema)
check("ConnB schema still = default", schB, "default")

# ─── Test 5: Table isolation via different schemas ──────────────────
print("\n--- Test 5: Data isolation via schemas ---")
# ConnA is in isoTestDB.isoSchema
pg_query(connA, "DROP TABLE isotbl;")
pg_query(connA, "CREATE TABLE isotbl (id INT, tag VARCHAR(20));")
pg_query(connA, "INSERT INTO isotbl VALUES (1, 'fromA');")

# ConnB is in isoTestDB.default — different schema
pg_query(connB, "DROP TABLE isotbl;")
pg_query(connB, "CREATE TABLE isotbl (id INT, tag VARCHAR(20));")
pg_query(connB, "INSERT INTO isotbl VALUES (2, 'fromB');")

# Verify each sees their own data
rA = pg_query(connA, "SELECT tag FROM isotbl;")
resA = parse_response(rA)
rB = pg_query(connB, "SELECT tag FROM isotbl;")
resB = parse_response(rB)

check("ConnA sees isoSchema.isotbl data", resA['rows'], [['fromA']])
check("ConnB sees default.isotbl data", resB['rows'], [['fromB']])

# ─── Test 6: After connB close, connA still has its state ──────────
print("\n--- Test 6: Connection close isolation ---")
connB.close()

dbA = get_current_database(connA)
schA = get_current_schema(connA)

check("ConnA database intact after connB close", dbA, "isoTestDB")
check("ConnA schema intact after connB close", schA, "isoSchema")

# ─── Cleanup ────────────────────────────────────────────────────────
print("\n--- Cleanup ---")
pg_query(connA, "DROP TABLE isotbl;")
pg_query(connA, "SET SCHEMA default;")
pg_query(connA, "DROP TABLE isotbl;")
connA.close()
print("  Cleanup done.")

# ─── Summary ────────────────────────────────────────────────────────
print(f"\n{'='*50}")
print(f"Session Isolation Tests: {passed} passed, {failed} failed out of {passed+failed}")
if failed == 0:
    print("ALL TESTS PASSED")
else:
    print("SOME TESTS FAILED")
