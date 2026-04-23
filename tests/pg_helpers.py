"""
pg_helpers.py — Shared PostgreSQL wire-protocol helpers for EvoSQL tests

Provides auth-aware connection functions that handle the new
CleartextPassword authentication flow.
"""

import socket
import struct

HOST = "127.0.0.1"
PORT = 5433

DEFAULT_USER = "admin"
DEFAULT_PASS = "admin"


def _send(sock, data):
    sock.sendall(data)


def _recv(sock, n):
    buf = b""
    while len(buf) < n:
        chunk = sock.recv(n - len(buf))
        if not chunk:
            break
        buf += chunk
    return buf


def pg_startup(sock, user=DEFAULT_USER, database="testdb", password=DEFAULT_PASS):
    """
    Send a PG StartupMessage and handle the authentication handshake.

    Handles:
      - AuthenticationCleartextPassword (R, int32=3)  → send PasswordMessage
      - AuthenticationOk (R, int32=0)                 → proceed
      - ErrorResponse (E)                             → raise

    Reads messages until ReadyForQuery (Z).
    Returns the list of ParameterStatus values as a dict.
    """
    user_b = user.encode("utf-8") + b"\x00"
    db_b = database.encode("utf-8") + b"\x00"
    payload = (b"\x00\x03\x00\x00"
               + b"user\x00" + user_b
               + b"database\x00" + db_b
               + b"\x00")
    _send(sock, struct.pack("!I", 4 + len(payload)) + payload)

    params = {}
    while True:
        tag = _recv(sock, 1)
        if not tag:
            raise ConnectionError("Connection closed during startup")
        length = struct.unpack("!I", _recv(sock, 4))[0]
        body = _recv(sock, length - 4)

        if tag == b"R":
            # Authentication message
            auth_type = struct.unpack("!I", body[:4])[0]
            if auth_type == 3:
                # CleartextPassword — send PasswordMessage
                pw_data = password.encode("utf-8") + b"\x00"
                _send(sock, b"p" + struct.pack("!I", 4 + len(pw_data)) + pw_data)
            elif auth_type == 0:
                # AuthenticationOk — continue reading startup messages
                pass
            else:
                raise RuntimeError(f"Unsupported auth type: {auth_type}")
        elif tag == b"E":
            # ErrorResponse during auth
            raise RuntimeError(f"Auth error: {body.decode(errors='replace')}")
        elif tag == b"S":
            # ParameterStatus
            parts = body.rstrip(b"\x00").split(b"\x00", 1)
            if len(parts) == 2:
                params[parts[0].decode()] = parts[1].decode()
        elif tag == b"K":
            # BackendKeyData — ignore
            pass
        elif tag == b"Z":
            # ReadyForQuery
            break
    return params


def simple_query(sock, sql):
    """Send a SimpleQuery and return (columns, rows, error, cmd_tag)."""
    msg = sql.encode("utf-8") + b"\x00"
    _send(sock, b"Q" + struct.pack("!I", 4 + len(msg)) + msg)
    columns = []
    rows = []
    error = None
    cmd_tag = None
    while True:
        tag = _recv(sock, 1)
        length = struct.unpack("!I", _recv(sock, 4))[0]
        body = _recv(sock, length - 4)
        if tag == b"T":
            ncols = struct.unpack("!H", body[:2])[0]
            off = 2
            columns = []
            for _ in range(ncols):
                end = body.index(b"\x00", off)
                columns.append(body[off:end].decode())
                off = end + 1 + 18
        elif tag == b"D":
            ncols = struct.unpack("!H", body[:2])[0]
            off = 2
            row = []
            for _ in range(ncols):
                vlen = struct.unpack("!i", body[off:off + 4])[0]
                off += 4
                if vlen == -1:
                    row.append(None)
                else:
                    row.append(body[off:off + vlen].decode())
                    off += vlen
            rows.append(row)
        elif tag == b"E":
            error = body.decode(errors="replace")
        elif tag == b"C":
            cmd_tag = body.rstrip(b"\x00").decode()
        elif tag == b"Z":
            break
    return columns, rows, error, cmd_tag


def conn(host=HOST, port=PORT, user=DEFAULT_USER, password=DEFAULT_PASS,
         database="testdb"):
    """Open a new PG connection with authentication. Returns the socket."""
    s = socket.socket()
    s.settimeout(30)
    s.connect((host, port))
    pg_startup(s, user=user, database=database, password=password)
    return s


def conn_replica(port=5434, host=HOST, user=DEFAULT_USER,
                 password=DEFAULT_PASS, database="testdb"):
    """Open a PG connection to a replica port (5434 = replica1, 5435 = replica2).
    Task 97 Commit 8: used by test_replication.py end-to-end cases."""
    return conn(host=host, port=port, user=user, password=password,
                database=database)


class PGConnection:
    """High-level PG connection wrapper with query() and close() methods."""

    def __init__(self, host=HOST, port=PORT, user=DEFAULT_USER,
                 password=DEFAULT_PASS, database="testdb"):
        self._sock = conn(host=host, port=port, user=user,
                          password=password, database=database)

    def query(self, sql):
        """Execute SQL and return result rows. Raises on error."""
        cols, rows, err, tag = simple_query(self._sock, sql)
        if err:
            raise RuntimeError(err)
        return rows

    def close(self):
        """Close the underlying socket."""
        if self._sock:
            self._sock.close()
            self._sock = None
