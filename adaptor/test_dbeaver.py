"""
Test client that simulates DBeaver/pgjdbc connection sequence.
Tests: GSSENCRequest, SSLRequest, StartupMessage, SET queries,
       Extended Query Protocol, pg_catalog queries.
"""
import socket
import struct
import sys
import traceback

def send_all(sock, data):
    sock.sendall(data)

def recv_exact(sock, n):
    buf = b''
    while len(buf) < n:
        chunk = sock.recv(n - len(buf))
        if not chunk:
            raise ConnectionError(f"Connection closed (expected {n} bytes, got {len(buf)})")
        buf += chunk
    return buf

def read_message(sock):
    """Read a backend message. Returns (type_char, data_bytes)."""
    type_byte = recv_exact(sock, 1)
    if type_byte[0] == 0:
        raise ValueError(f"Unexpected packet type: 0 (0x00) - THIS IS THE BUG!")
    length_bytes = recv_exact(sock, 4)
    length = struct.unpack("!I", length_bytes)[0]
    data = recv_exact(sock, length - 4) if length > 4 else b''
    return chr(type_byte[0]), data

def read_until_ready(sock, label=""):
    """Read messages until ReadyForQuery ('Z')."""
    messages = []
    while True:
        msg_type, data = read_message(sock)
        messages.append((msg_type, data))
        if msg_type == 'Z':
            break
    return messages

def send_query(sock, sql):
    """Send Simple Query ('Q')."""
    sql_bytes = sql.encode() + b'\x00'
    length = struct.pack("!I", len(sql_bytes) + 4)
    send_all(sock, b'Q' + length + sql_bytes)

def send_parse(sock, stmt_name, query, param_types=[]):
    """Send Parse message ('P')."""
    body = stmt_name.encode() + b'\x00'
    body += query.encode() + b'\x00'
    body += struct.pack("!H", len(param_types))
    for pt in param_types:
        body += struct.pack("!I", pt)
    length = struct.pack("!I", len(body) + 4)
    send_all(sock, b'P' + length + body)

def send_bind(sock, portal="", stmt_name="", param_formats=[], params=[], result_formats=[]):
    """Send Bind message ('B')."""
    body = portal.encode() + b'\x00'
    body += stmt_name.encode() + b'\x00'
    body += struct.pack("!H", len(param_formats))
    for pf in param_formats:
        body += struct.pack("!H", pf)
    body += struct.pack("!H", len(params))
    for p in params:
        if p is None:
            body += struct.pack("!i", -1)
        else:
            pb = p.encode()
            body += struct.pack("!I", len(pb)) + pb
    body += struct.pack("!H", len(result_formats))
    for rf in result_formats:
        body += struct.pack("!H", rf)
    length = struct.pack("!I", len(body) + 4)
    send_all(sock, b'B' + length + body)

def send_describe(sock, kind='S', name=""):
    """Send Describe message ('D'). kind='S' for Statement, 'P' for Portal."""
    body = kind.encode() + name.encode() + b'\x00'
    length = struct.pack("!I", len(body) + 4)
    send_all(sock, b'D' + length + body)

def send_execute(sock, portal="", max_rows=0):
    """Send Execute message ('E')."""
    body = portal.encode() + b'\x00' + struct.pack("!I", max_rows)
    length = struct.pack("!I", len(body) + 4)
    send_all(sock, b'E' + length + body)

def send_sync(sock):
    """Send Sync message ('S')."""
    send_all(sock, b'S' + struct.pack("!I", 4))

def send_close(sock, kind='S', name=""):
    """Send Close message ('C')."""
    body = kind.encode() + name.encode() + b'\x00'
    length = struct.pack("!I", len(body) + 4)
    send_all(sock, b'C' + length + body)

def send_flush(sock):
    """Send Flush message ('H')."""
    send_all(sock, b'H' + struct.pack("!I", 4))

def describe_messages(messages):
    """Format message list for display."""
    parts = []
    for mt, data in messages:
        if mt == 'R':
            auth = struct.unpack("!I", data[:4])[0] if len(data) >= 4 else -1
            parts.append(f"R(auth={auth})")
        elif mt == 'S':
            try:
                end1 = data.index(b'\x00')
                end2 = data.index(b'\x00', end1+1)
                parts.append(f"S({data[:end1].decode()})")
            except:
                parts.append(f"S(?)")
        elif mt == 'K':
            if len(data) >= 8:
                pid, secret = struct.unpack("!II", data[:8])
                parts.append(f"K(pid={pid})")
            else:
                parts.append(f"K(?)")
        elif mt == 'Z':
            status = chr(data[0]) if data else '?'
            parts.append(f"Z({status})")
        elif mt == 'T':
            ncols = struct.unpack("!H", data[:2])[0]
            parts.append(f"T({ncols}cols)")
        elif mt == 'D':
            parts.append("D(row)")
        elif mt == 'C':
            tag = data[:-1].decode() if data else ""
            parts.append(f"C({tag})")
        elif mt == 'E':
            # Error
            msg = ""
            offset = 0
            while offset < len(data) and data[offset] != 0:
                ft = chr(data[offset])
                offset += 1
                end = data.index(b'\x00', offset)
                val = data[offset:end].decode()
                if ft == 'M':
                    msg = val
                offset = end + 1
            parts.append(f"E({msg})")
        elif mt == '1':
            parts.append("1(ParseComplete)")
        elif mt == '2':
            parts.append("2(BindComplete)")
        elif mt == '3':
            parts.append("3(CloseComplete)")
        elif mt == 'n':
            parts.append("n(NoData)")
        elif mt == 'I':
            parts.append("I(EmptyQuery)")
        else:
            parts.append(f"{mt}({len(data)}b)")
    return " -> ".join(parts)

def main():
    host = "localhost"
    port = 5433
    if len(sys.argv) > 1:
        port = int(sys.argv[1])

    print(f"=== DBeaver JDBC Simulation Test ===")
    print(f"Connecting to {host}:{port}...")

    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.settimeout(10)
    sock.connect((host, port))

    # ==========================================
    # STEP 1: GSSENCRequest (pgjdbc 42.3+)
    # ==========================================
    print("\n[1] Sending GSSENCRequest (80877104)...")
    gss_msg = struct.pack("!II", 8, 80877104)  # length=8, protocol=80877104
    send_all(sock, gss_msg)
    resp = recv_exact(sock, 1)
    print(f"    Response: {chr(resp[0])!r} (expected 'N')")
    assert resp == b'N', f"Expected 'N', got {resp!r}"
    print("    OK: GSSENCRequest rejected correctly")

    # ==========================================
    # STEP 2: SSLRequest
    # ==========================================
    print("\n[2] Sending SSLRequest (80877103)...")
    ssl_msg = struct.pack("!II", 8, 80877103)
    send_all(sock, ssl_msg)
    resp = recv_exact(sock, 1)
    print(f"    Response: {chr(resp[0])!r} (expected 'N')")
    assert resp == b'N', f"Expected 'N', got {resp!r}"
    print("    OK: SSLRequest rejected correctly")

    # ==========================================
    # STEP 3: StartupMessage (like DBeaver)
    # ==========================================
    print("\n[3] Sending StartupMessage...")
    params = (
        b"user\x00evosql\x00"
        b"database\x00evosql\x00"
        b"application_name\x00DBeaver 23.3.0 - Main\x00"
        b"client_encoding\x00UTF8\x00"
        b"\x00"  # terminator
    )
    version = struct.pack("!I", 196608)  # v3.0
    body = version + params
    length = struct.pack("!I", len(body) + 4)
    send_all(sock, length + body)

    # Read startup response
    messages = read_until_ready(sock, "startup")
    print(f"    Received: {describe_messages(messages)}")

    # Verify: should have R(0), S(...), K(...), Z(I)
    types = [m[0] for m in messages]
    assert 'R' in types, "Missing AuthenticationOk"
    assert 'K' in types, "Missing BackendKeyData"
    assert 'Z' in types, "Missing ReadyForQuery"
    print("    OK: Startup handshake complete")

    # ==========================================
    # STEP 4: SET queries (Simple Query Protocol)
    # Like pgjdbc initial configuration
    # ==========================================
    print("\n[4] Sending initial SET queries (Simple Query)...")

    set_queries = [
        "SET extra_float_digits = 3",
        "SET application_name = 'DBeaver 23.3.0 - Main'",
    ]
    for sql in set_queries:
        print(f"    Q: {sql}")
        send_query(sock, sql)
        msgs = read_until_ready(sock)
        print(f"       {describe_messages(msgs)}")

    # ==========================================
    # STEP 5: Extended Query Protocol
    # Simulates pgjdbc prepared statement execution
    # ==========================================
    print("\n[5] Testing Extended Query Protocol...")

    # Parse + Bind + Describe + Execute + Sync for SET command
    print("    Extended: SET DateStyle = 'ISO'")
    send_parse(sock, "", "SET DateStyle = 'ISO'")
    send_bind(sock)
    send_describe(sock, 'P', "")
    send_execute(sock)
    send_sync(sock)
    msgs = read_until_ready(sock)
    print(f"       {describe_messages(msgs)}")

    # Parse + Bind + Execute + Sync for SELECT version()
    print("    Extended: SELECT version()")
    send_parse(sock, "", "SELECT version()")
    send_bind(sock)
    send_describe(sock, 'P', "")
    send_execute(sock)
    send_sync(sock)
    msgs = read_until_ready(sock)
    print(f"       {describe_messages(msgs)}")

    # ==========================================
    # STEP 6: pg_catalog queries (what DBeaver sends)
    # ==========================================
    print("\n[6] Testing pg_catalog/information_schema queries...")

    catalog_queries = [
        "SELECT current_schema(), current_user",
        "SHOW search_path",
        "SELECT nspname FROM pg_catalog.pg_namespace ORDER BY nspname",
        "SELECT * FROM pg_catalog.pg_database WHERE datname = 'evosql'",
        "SELECT oid, typname FROM pg_catalog.pg_type LIMIT 100",
        "SELECT table_name FROM information_schema.tables WHERE table_schema = 'public'",
        "SELECT column_name, data_type FROM information_schema.columns WHERE table_schema = 'public'",
    ]
    for sql in catalog_queries:
        print(f"    Q: {sql[:60]}{'...' if len(sql) > 60 else ''}")
        send_query(sock, sql)
        msgs = read_until_ready(sock)
        print(f"       {describe_messages(msgs)}")

    # ==========================================
    # STEP 7: Real SQL queries
    # ==========================================
    print("\n[7] Testing real SQL queries...")

    send_query(sock, "CREATE TABLE TestDBeaver(id INT, name VARCHAR(50))")
    msgs = read_until_ready(sock)
    print(f"    CREATE: {describe_messages(msgs)}")

    send_query(sock, "INSERT INTO TestDBeaver VALUES (1, 'Test')")
    msgs = read_until_ready(sock)
    print(f"    INSERT: {describe_messages(msgs)}")

    send_query(sock, "SELECT * FROM TestDBeaver")
    msgs = read_until_ready(sock)
    print(f"    SELECT: {describe_messages(msgs)}")

    send_query(sock, "DROP TABLE TestDBeaver")
    msgs = read_until_ready(sock)
    print(f"    DROP:   {describe_messages(msgs)}")

    # ==========================================
    # STEP 8: Close + Terminate
    # ==========================================
    print("\n[8] Sending Terminate...")
    send_all(sock, b'X' + struct.pack("!I", 4))
    sock.close()

    print("\n=== ALL TESTS PASSED ===")

if __name__ == "__main__":
    try:
        main()
    except Exception as e:
        print(f"\n!!! TEST FAILED !!!")
        print(f"Error: {e}")
        traceback.print_exc()
        sys.exit(1)
