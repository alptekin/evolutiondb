#!/usr/bin/env python3
"""
String functions tests: SUBSTRING, TRIM, UPPER, LOWER, LENGTH, CONCAT, REPLACE, COALESCE
"""
import socket, struct, time, sys

HOST, PORT = "127.0.0.1", 5433

NULL_MARKER = "\x01NULL\x01"

# ── PostgreSQL v3 helpers ──────────────────────────────────────────
def pg_startup(s):
    user = b"testuser\x00"
    db   = b"testdb\x00"
    payload = b"\x00\x03\x00\x00" + b"user\x00" + user + b"database\x00" + db + b"\x00"
    s.sendall(struct.pack("!I", 4 + len(payload)) + payload)
    while True:
        tag = s.recv(1)
        if not tag:
            raise ConnectionError("connection lost during startup")
        length = struct.unpack("!I", s.recv(4))[0]
        body = s.recv(length - 4) if length > 4 else b""
        if tag == b"Z":
            break

def pg_query(s, sql):
    msg = sql.encode("utf-8") + b"\x00"
    s.sendall(b"Q" + struct.pack("!I", 4 + len(msg)) + msg)
    columns, rows = [], []
    while True:
        tag = s.recv(1)
        if not tag:
            break
        length = struct.unpack("!I", s.recv(4))[0]
        body = b""
        rem = length - 4
        while rem > 0:
            chunk = s.recv(rem)
            if not chunk:
                break
            body += chunk
            rem -= len(chunk)
        if tag == b"T":
            ncols = struct.unpack("!H", body[:2])[0]
            off = 2
            for _ in range(ncols):
                end = body.index(b"\x00", off)
                columns.append(body[off:end].decode())
                off = end + 1 + 18
        elif tag == b"D":
            ncols = struct.unpack("!H", body[:2])[0]
            off = 2
            row = []
            for _ in range(ncols):
                flen = struct.unpack("!i", body[off:off+4])[0]
                off += 4
                if flen == -1:
                    row.append(None)
                else:
                    row.append(body[off:off+flen].decode())
                    off += flen
            rows.append(row)
        elif tag == b"Z":
            break
        elif tag == b"E":
            err_msg = body.decode("utf-8", errors="replace")
            return columns, rows, err_msg
    return columns, rows, None

# ── Test infra ─────────────────────────────────────────────────────
passed = failed = 0
fail_details = []

def check(test_name, sql, expected_rows, col_idx=0):
    global passed, failed
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))
    pg_startup(s)
    cols, rows, err = pg_query(s, sql)
    s.close()
    if err:
        print(f"  FAIL {test_name}: SQL error: {err}")
        failed += 1
        fail_details.append(test_name)
        return
    actual = []
    for r in rows:
        val = r[col_idx] if col_idx < len(r) else None
        actual.append(val)
    if actual == expected_rows:
        print(f"  OK   {test_name}")
        passed += 1
    else:
        print(f"  FAIL {test_name}")
        print(f"       expected: {expected_rows}")
        print(f"       actual:   {actual}")
        failed += 1
        fail_details.append(test_name)

def setup_table():
    """Create a test table with data for string function tests"""
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))
    pg_startup(s)
    pg_query(s, "DROP TABLE strtest")
    pg_query(s, "CREATE TABLE strtest (id INT, name VARCHAR(50), city VARCHAR(50), note VARCHAR(100))")
    pg_query(s, "INSERT INTO strtest VALUES (1, 'Alice', 'Istanbul', 'hello world')")
    pg_query(s, "INSERT INTO strtest VALUES (2, 'Bob', 'Ankara', NULL)")
    pg_query(s, "INSERT INTO strtest VALUES (3, 'Charlie', 'Izmir', '  spaces  ')")
    s.close()

# ── Tests ──────────────────────────────────────────────────────────
print("=" * 60)
print("STRING FUNCTIONS TESTS")
print("=" * 60)
time.sleep(1)

setup_table()

# ── UPPER ──────────────────────────────────────────────────────────
print("\n--- UPPER ---")
check("UPPER literal", "SELECT UPPER('hello')", ["HELLO"])
check("UPPER column", "SELECT UPPER(name) FROM strtest WHERE id = 1", ["ALICE"])
check("UPPER mixed", "SELECT UPPER('heLLo WoRLd')", ["HELLO WORLD"])

# ── LOWER ──────────────────────────────────────────────────────────
print("\n--- LOWER ---")
check("LOWER literal", "SELECT LOWER('HELLO')", ["hello"])
check("LOWER column", "SELECT LOWER(name) FROM strtest WHERE id = 3", ["charlie"])
check("LOWER mixed", "SELECT LOWER('HeLLo WoRLd')", ["hello world"])

# ── LENGTH ─────────────────────────────────────────────────────────
print("\n--- LENGTH ---")
check("LENGTH literal", "SELECT LENGTH('hello')", ["5"])
check("LENGTH column", "SELECT LENGTH(name) FROM strtest WHERE id = 1", ["5"])
check("LENGTH empty", "SELECT LENGTH('')", ["0"])
check("LENGTH column2", "SELECT LENGTH(city) FROM strtest WHERE id = 1", ["8"])

# ── CONCAT ─────────────────────────────────────────────────────────
print("\n--- CONCAT ---")
check("CONCAT literals", "SELECT CONCAT('hello', ' world')", ["hello world"])
check("CONCAT columns", "SELECT CONCAT(name, city) FROM strtest WHERE id = 1", ["AliceIstanbul"])
check("CONCAT with space", "SELECT CONCAT(name, ' from ') FROM strtest WHERE id = 2", ["Bob from "])

# ── SUBSTRING ─────────────────────────────────────────────────────
print("\n--- SUBSTRING ---")
check("SUBSTRING basic", "SELECT SUBSTRING('Hello World', 1, 5)", ["Hello"])
check("SUBSTRING mid", "SELECT SUBSTRING('Hello World', 7, 5)", ["World"])
check("SUBSTRING col", "SELECT SUBSTRING(city, 1, 3) FROM strtest WHERE id = 1", ["Ist"])
check("SUBSTRING from 2", "SELECT SUBSTRING('abcdef', 2, 3)", ["bcd"])
check("SUBSTRING no len", "SELECT SUBSTRING('Hello World', 7)", ["World"])

# ── TRIM ───────────────────────────────────────────────────────────
print("\n--- TRIM ---")
check("TRIM both default", "SELECT TRIM('  hello  ')", ["hello"])
check("TRIM leading", "SELECT TRIM(LEADING ' ' FROM '  hello  ')", ["hello  "])
check("TRIM trailing", "SELECT TRIM(TRAILING ' ' FROM '  hello  ')", ["  hello"])
check("TRIM both explicit", "SELECT TRIM(BOTH ' ' FROM '  hello  ')", ["hello"])
check("TRIM column", "SELECT TRIM(note) FROM strtest WHERE id = 3", ["spaces"])
check("TRIM custom char", "SELECT TRIM(BOTH 'x' FROM 'xxxhelloxxx')", ["hello"])

# ── REPLACE (function) ────────────────────────────────────────────
print("\n--- REPLACE (function) ---")
check("REPLACE basic", "SELECT REPLACE('hello world', 'world', 'earth')", ["hello earth"])
check("REPLACE multiple", "SELECT REPLACE('aabbcc', 'b', 'X')", ["aaXXcc"])
check("REPLACE column", "SELECT REPLACE(note, 'world', 'planet') FROM strtest WHERE id = 1", ["hello planet"])
check("REPLACE no match", "SELECT REPLACE('hello', 'xyz', 'abc')", ["hello"])

# ── COALESCE ───────────────────────────────────────────────────────
print("\n--- COALESCE ---")
check("COALESCE first non-null", "SELECT COALESCE('hello', 'world')", ["hello"])
check("COALESCE null first", "SELECT COALESCE(NULL, 'fallback')", ["fallback"])
check("COALESCE column null", "SELECT COALESCE(note, 'N/A') FROM strtest WHERE id = 2", ["N/A"])
check("COALESCE column non-null", "SELECT COALESCE(note, 'N/A') FROM strtest WHERE id = 1", ["hello world"])
check("COALESCE both null", "SELECT COALESCE(NULL, NULL)", [None])

# ── Nesting / combo ───────────────────────────────────────────────
print("\n--- Nesting / Combos ---")
check("UPPER+CONCAT", "SELECT UPPER(CONCAT('hello', ' world'))", ["HELLO WORLD"])
check("LENGTH+UPPER", "SELECT LENGTH(UPPER('hello'))", ["5"])
check("SUBSTRING+UPPER", "SELECT UPPER(SUBSTRING('hello world', 1, 5))", ["HELLO"])
check("COALESCE+UPPER", "SELECT UPPER(COALESCE(NULL, 'hello'))", ["HELLO"])
check("REPLACE+LOWER", "SELECT LOWER(REPLACE('Hello World', 'World', 'Earth'))", ["hello earth"])
check("TRIM+LENGTH", "SELECT LENGTH(TRIM('  hi  '))", ["2"])

# ── Summary ────────────────────────────────────────────────────────
print("\n" + "=" * 60)
print(f"RESULTS: {passed} passed, {failed} failed, {passed + failed} total")
if fail_details:
    print(f"FAILED: {', '.join(fail_details)}")
print("=" * 60)
sys.exit(0 if failed == 0 else 1)
