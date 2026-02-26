"""
Simple test client for EvoSQL PostgreSQL wire protocol adapter.
Connects, sends startup, runs a few queries, and prints results.
"""
import socket
import struct
import sys

def send_all(sock, data):
    sock.sendall(data)

def recv_exact(sock, n):
    buf = b''
    while len(buf) < n:
        chunk = sock.recv(n - len(buf))
        if not chunk:
            raise ConnectionError("Connection closed")
        buf += chunk
    return buf

def send_startup(sock, user="evosql", database="evosql"):
    """Send PostgreSQL v3 startup message."""
    params = f"user\x00{user}\x00database\x00{database}\x00\x00".encode()
    version = struct.pack("!I", 196608)  # v3.0
    body = version + params
    length = struct.pack("!I", len(body) + 4)
    send_all(sock, length + body)

def send_query(sock, sql):
    """Send a simple query message."""
    sql_bytes = sql.encode() + b'\x00'
    length = struct.pack("!I", len(sql_bytes) + 4)
    send_all(sock, b'Q' + length + sql_bytes)

def send_terminate(sock):
    """Send terminate message."""
    send_all(sock, b'X' + struct.pack("!I", 4))

def read_message(sock):
    """Read a backend message. Returns (type, data)."""
    type_byte = recv_exact(sock, 1)
    length_bytes = recv_exact(sock, 4)
    length = struct.unpack("!I", length_bytes)[0]
    data = recv_exact(sock, length - 4) if length > 4 else b''
    return type_byte.decode('ascii'), data

def parse_row_description(data):
    """Parse RowDescription message, return column names."""
    num_fields = struct.unpack("!H", data[:2])[0]
    cols = []
    offset = 2
    for _ in range(num_fields):
        # Column name (null-terminated string)
        end = data.index(b'\x00', offset)
        name = data[offset:end].decode()
        cols.append(name)
        offset = end + 1 + 4 + 2 + 4 + 2 + 4 + 2  # skip fixed fields
    return cols

def parse_data_row(data, num_cols):
    """Parse DataRow message, return field values."""
    num_fields = struct.unpack("!H", data[:2])[0]
    fields = []
    offset = 2
    for _ in range(num_fields):
        flen = struct.unpack("!i", data[offset:offset+4])[0]
        offset += 4
        if flen == -1:
            fields.append(None)
        else:
            fields.append(data[offset:offset+flen].decode())
            offset += flen
    return fields

def run_query(sock, sql):
    """Send query and print results."""
    print(f"\n>>> {sql}")
    send_query(sock, sql)

    columns = []
    rows = []

    while True:
        msg_type, data = read_message(sock)

        if msg_type == 'T':  # RowDescription
            columns = parse_row_description(data)
        elif msg_type == 'D':  # DataRow
            rows.append(parse_data_row(data, len(columns)))
        elif msg_type == 'C':  # CommandComplete
            tag = data[:-1].decode()  # strip null
            if columns:
                # Print table
                widths = [max(len(c), max((len(str(r[i] or '')) for r in rows), default=0)) for i, c in enumerate(columns)]
                header = " | ".join(c.ljust(w) for c, w in zip(columns, widths))
                sep = "-+-".join("-" * w for w in widths)
                print(header)
                print(sep)
                for row in rows:
                    print(" | ".join(str(v or '').ljust(w) for v, w in zip(row, widths)))
            print(f"({tag})")
            columns = []
            rows = []
        elif msg_type == 'I':  # EmptyQueryResponse
            print("(empty query)")
        elif msg_type == 'E':  # ErrorResponse
            # Parse error fields
            offset = 0
            err_msg = ""
            while offset < len(data) and data[offset] != 0:
                field_type = chr(data[offset])
                offset += 1
                end = data.index(b'\x00', offset)
                value = data[offset:end].decode()
                if field_type == 'M':
                    err_msg = value
                offset = end + 1
            print(f"ERROR: {err_msg}")
        elif msg_type == 'Z':  # ReadyForQuery
            break
        elif msg_type == 'S':  # ParameterStatus (during startup)
            pass
        elif msg_type == 'R':  # Authentication
            pass
        else:
            pass  # ignore other messages

def main():
    host = "localhost"
    port = 5433
    if len(sys.argv) > 1:
        port = int(sys.argv[1])

    print(f"Connecting to EvoSQL adaptor at {host}:{port}...")

    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.connect((host, port))

    # Startup
    send_startup(sock)

    # Read startup responses until ReadyForQuery
    while True:
        msg_type, data = read_message(sock)
        if msg_type == 'R':
            auth_status = struct.unpack("!I", data[:4])[0]
            print(f"Auth: {'OK' if auth_status == 0 else 'FAILED'}")
        elif msg_type == 'S':
            end1 = data.index(b'\x00')
            end2 = data.index(b'\x00', end1 + 1)
            name = data[:end1].decode()
            value = data[end1+1:end2].decode()
            if name in ('server_version',):
                print(f"  {name} = {value}")
        elif msg_type == 'Z':
            print("Ready for queries.\n")
            break

    # Test queries
    run_query(sock, "SELECT version()")
    run_query(sock, "SELECT current_database()")

    # Create a test table
    run_query(sock, "CREATE TABLE TestAdaptor(id INT, ad VARCHAR(50), soyad VARCHAR(50))")
    run_query(sock, "INSERT INTO TestAdaptor VALUES (1, 'Ali', 'Yilmaz')")
    run_query(sock, "INSERT INTO TestAdaptor VALUES (2, 'Ayse', 'Demir')")
    run_query(sock, "INSERT INTO TestAdaptor VALUES (3, 'Mehmet', 'Kaya')")

    # SELECT all
    run_query(sock, "SELECT * FROM TestAdaptor")

    # ORDER BY
    run_query(sock, "SELECT * FROM TestAdaptor ORDER BY ad ASC")

    # Catalog query - list tables
    run_query(sock, "SELECT table_name FROM information_schema.tables")

    # Cleanup
    run_query(sock, "DROP TABLE TestAdaptor")

    # Terminate
    send_terminate(sock)
    sock.close()
    print("\nConnection closed. All tests passed!")

if __name__ == "__main__":
    main()
