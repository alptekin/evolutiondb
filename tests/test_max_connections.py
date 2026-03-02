"""
Max Connections Test
====================
Tests SET/SHOW max_connections and connection limit enforcement.
"""
import socket, struct, time, threading

def pg_connect():
    s = socket.socket()
    s.settimeout(5)
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

# ─── Main connection ───────────────────────────────────────────────
conn = pg_connect()

# ─── Test 1: SHOW max_connections (default = 100) ──────────────────
print("\n--- Test 1: SHOW max_connections ---")
r = pg_query(conn, "SHOW max_connections;")
res = parse_response(r)
check("default max_connections = 100", res['rows'][0][0], "100")

# ─── Test 2: SET max_connections = 50 ──────────────────────────────
print("\n--- Test 2: SET max_connections ---")
r = pg_query(conn, "SET max_connections = 50;")
res = parse_response(r)
check("SET returns SET tag", res['complete'], "SET")

r = pg_query(conn, "SHOW max_connections;")
res = parse_response(r)
check("max_connections now = 50", res['rows'][0][0], "50")

# ─── Test 3: SHOW active_connections ───────────────────────────────
print("\n--- Test 3: SHOW active_connections ---")
r = pg_query(conn, "SHOW active_connections;")
res = parse_response(r)
active = int(res['rows'][0][0])
check("active_connections >= 1", active >= 1, True)
print(f"  (active_connections = {active})")

# ─── Test 4: Connection limit enforcement ──────────────────────────
print("\n--- Test 4: Connection limit enforcement ---")
# Set limit to current active + 2 so we can open 2 more, but 3rd fails
limit = active + 2
pg_query(conn, f"SET max_connections = {limit};")

# Open 2 more connections (should succeed)
extra_conns = []
for i in range(2):
    try:
        c = pg_connect()
        extra_conns.append(c)
        print(f"  PASS: Extra connection {i+1} accepted")
        passed += 1
    except Exception as e:
        print(f"  FAIL: Extra connection {i+1} rejected: {e}")
        failed += 1

# 3rd connection should be rejected (limit reached)
try:
    c = socket.socket()
    c.settimeout(3)
    c.connect(('localhost', 5433))
    c.send(b'\x00\x00\x00\x08\x00\x03\x00\x00')
    data = c.recv(4096)
    # Server should send ErrorResponse or close immediately
    if data and data[0:1] == b'E':
        print(f"  PASS: Connection rejected with ErrorResponse (limit={limit})")
        passed += 1
    else:
        # Still got auth request — try finishing handshake
        c.send(b'p\x00\x00\x00\x08\x00\x00\x00\x00')
        data2 = c.recv(4096)
        print(f"  FAIL: Connection accepted despite limit={limit}")
        failed += 1
        extra_conns.append(c)
    c.close()
except (ConnectionRefusedError, ConnectionResetError, OSError) as e:
    print(f"  PASS: Connection refused at limit (OS level): {e}")
    passed += 1
except Exception as e:
    print(f"  FAIL: Unexpected error: {e}")
    failed += 1

# Close extra connections
for c in extra_conns:
    try:
        c.close()
    except:
        pass

time.sleep(0.5)  # Let server process disconnections

# ─── Test 5: Restore default and verify ────────────────────────────
print("\n--- Test 5: Restore default ---")
pg_query(conn, "SET max_connections = 100;")
r = pg_query(conn, "SHOW max_connections;")
res = parse_response(r)
check("max_connections restored to 100", res['rows'][0][0], "100")

conn.close()

# ─── Summary ───────────────────────────────────────────────────────
print(f"\n{'='*50}")
print(f"Max Connections Tests: {passed} passed, {failed} failed out of {passed+failed}")
if failed == 0:
    print("ALL TESTS PASSED")
else:
    print("SOME TESTS FAILED")
