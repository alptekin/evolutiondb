"""
Test ReadyForQuery transaction status byte (I/T/E).

PG wire protocol ReadyForQuery message: type='Z', length=5, status=1 byte
  'I' = idle (no transaction)
  'T' = in transaction block
  'E' = failed transaction (error occurred, awaiting ROLLBACK)
"""
import socket
import struct
import sys

HOST = "127.0.0.1"
PORT = 5433
USER = "admin"
PASS = "admin"
DB   = "testdb"

passed = 0
failed = 0

def send_startup(sock):
    params = f"user\x00{USER}\x00database\x00{DB}\x00\x00"
    length = 4 + 4 + len(params)
    sock.sendall(struct.pack("!II", length, 196608) + params.encode())

def read_messages_until_ready(sock):
    """Read messages until ReadyForQuery ('Z'). Return the status byte."""
    while True:
        hdr = b""
        while len(hdr) < 5:
            hdr += sock.recv(5 - len(hdr))
        msg_type = chr(hdr[0])
        msg_len = struct.unpack("!I", hdr[1:5])[0]
        body = b""
        remaining = msg_len - 4
        while len(body) < remaining:
            body += sock.recv(remaining - len(body))

        if msg_type == 'R':  # Auth request
            auth_type = struct.unpack("!I", body[:4])[0]
            if auth_type == 3:  # CleartextPassword
                pw = PASS.encode() + b'\x00'
                sock.sendall(b'p' + struct.pack("!I", 4 + len(pw)) + pw)
        elif msg_type == 'Z':  # ReadyForQuery
            return chr(body[0])

def send_query(sock, sql):
    """Send Simple Query and return (messages, ready_status)."""
    payload = sql.encode() + b'\x00'
    sock.sendall(b'Q' + struct.pack("!I", 4 + len(payload)) + payload)
    return read_messages_until_ready(sock)

def connect():
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.connect((HOST, PORT))
    send_startup(sock)
    status = read_messages_until_ready(sock)
    return sock, status

def test(name, actual, expected):
    global passed, failed
    if actual == expected:
        print(f"  PASS: {name} (got '{actual}')")
        passed += 1
    else:
        print(f"  FAIL: {name} (expected '{expected}', got '{actual}')")
        failed += 1

# ---------------------------------------------------------------
print("Test 1: Initial connection → 'I' (idle)")
sock, status = connect()
test("initial ReadyForQuery", status, 'I')

# ---------------------------------------------------------------
print("Test 2: Simple SELECT → 'I' (idle)")
status = send_query(sock, "SELECT 1")
test("SELECT outside transaction", status, 'I')

# ---------------------------------------------------------------
print("Test 3: BEGIN → 'T' (in transaction)")
status = send_query(sock, "BEGIN")
test("after BEGIN", status, 'T')

# ---------------------------------------------------------------
print("Test 4: SELECT inside transaction → 'T'")
status = send_query(sock, "SELECT 1")
test("SELECT inside transaction", status, 'T')

# ---------------------------------------------------------------
print("Test 5: COMMIT → 'I' (idle)")
status = send_query(sock, "COMMIT")
test("after COMMIT", status, 'I')

# ---------------------------------------------------------------
print("Test 6: BEGIN + ROLLBACK → 'I' (idle)")
send_query(sock, "BEGIN")
status = send_query(sock, "ROLLBACK")
test("after ROLLBACK", status, 'I')

# ---------------------------------------------------------------
print("Test 7: BEGIN + error → 'E' (failed transaction)")
send_query(sock, "BEGIN")
status = send_query(sock, "SELECT * FROM nonexistent_table_xyz_12345")
test("after error in transaction", status, 'E')

# ---------------------------------------------------------------
print("Test 8: ROLLBACK after error → 'I' (idle)")
status = send_query(sock, "ROLLBACK")
test("ROLLBACK after error", status, 'I')

# ---------------------------------------------------------------
print("Test 9: Auto-commit DML → 'I' (idle)")
send_query(sock, "CREATE TABLE test_tx_status_tmp (id INT PRIMARY KEY, val TEXT)")
status = send_query(sock, "INSERT INTO test_tx_status_tmp (id, val) VALUES (1, 'hello')")
test("auto-commit INSERT", status, 'I')
send_query(sock, "DROP TABLE test_tx_status_tmp")

# ---------------------------------------------------------------
print("Test 10: BEGIN + SAVEPOINT + ROLLBACK TO → 'T' (still in transaction)")
send_query(sock, "BEGIN")
send_query(sock, "SAVEPOINT sp1")
status = send_query(sock, "ROLLBACK TO sp1")
test("ROLLBACK TO SAVEPOINT", status, 'T')
send_query(sock, "COMMIT")

sock.close()

# ---------------------------------------------------------------
print()
print(f"Results: {passed} passed, {failed} failed, {passed + failed} total")
if failed > 0:
    sys.exit(1)
