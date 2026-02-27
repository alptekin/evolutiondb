#!/usr/bin/env python3
"""
DISTINCT + ORDER BY tests
"""
import socket, struct, time, sys

HOST, PORT = "127.0.0.1", 5433

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

def check(test_name, sql, expected_rows, col_idx=None):
    """
    col_idx=None  → compare full rows (list of lists)
    col_idx=int   → compare single column (list of scalars)
    """
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
    if col_idx is not None:
        actual = [r[col_idx] if col_idx < len(r) else None for r in rows]
    else:
        actual = rows
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
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))
    pg_startup(s)
    pg_query(s, "DROP TABLE ordtest")
    pg_query(s, "CREATE TABLE ordtest (id INT, name VARCHAR(50), city VARCHAR(50), score INT)")
    pg_query(s, "INSERT INTO ordtest VALUES (1, 'Alice', 'Istanbul', 90)")
    pg_query(s, "INSERT INTO ordtest VALUES (2, 'Bob', 'Ankara', 75)")
    pg_query(s, "INSERT INTO ordtest VALUES (3, 'Charlie', 'Istanbul', 85)")
    pg_query(s, "INSERT INTO ordtest VALUES (4, 'Diana', 'Izmir', 90)")
    pg_query(s, "INSERT INTO ordtest VALUES (5, 'Eve', 'Ankara', 60)")
    pg_query(s, "INSERT INTO ordtest VALUES (6, 'Frank', 'Istanbul', 75)")
    pg_query(s, "INSERT INTO ordtest VALUES (7, 'Grace', 'Izmir', 85)")
    s.close()

# ── Tests ──────────────────────────────────────────────────────────
print("=" * 60)
print("DISTINCT + ORDER BY TESTS")
print("=" * 60)
time.sleep(1)

setup_table()

# ── ORDER BY ──────────────────────────────────────────────────────
print("\n--- ORDER BY ---")
check("ORDER BY name ASC",
      "SELECT name FROM ordtest ORDER BY name",
      ["Alice", "Bob", "Charlie", "Diana", "Eve", "Frank", "Grace"],
      col_idx=0)

check("ORDER BY name DESC",
      "SELECT name FROM ordtest ORDER BY name DESC",
      ["Grace", "Frank", "Eve", "Diana", "Charlie", "Bob", "Alice"],
      col_idx=0)

check("ORDER BY score ASC",
      "SELECT name, score FROM ordtest ORDER BY score",
      [["Eve", "60"], ["Bob", "75"], ["Frank", "75"], ["Charlie", "85"],
       ["Grace", "85"], ["Alice", "90"], ["Diana", "90"]])

check("ORDER BY score DESC",
      "SELECT name, score FROM ordtest ORDER BY score DESC",
      [["Alice", "90"], ["Diana", "90"], ["Charlie", "85"],
       ["Grace", "85"], ["Bob", "75"], ["Frank", "75"], ["Eve", "60"]])

check("ORDER BY + WHERE",
      "SELECT name FROM ordtest WHERE score >= 85 ORDER BY name",
      ["Alice", "Charlie", "Diana", "Grace"],
      col_idx=0)

check("ORDER BY + LIMIT",
      "SELECT name FROM ordtest ORDER BY score DESC LIMIT 3",
      ["Alice", "Diana", "Charlie"],
      col_idx=0)

check("ORDER BY + LIMIT + OFFSET",
      "SELECT name FROM ordtest ORDER BY name LIMIT 3 OFFSET 2",
      ["Charlie", "Diana", "Eve"],
      col_idx=0)

# ── DISTINCT ──────────────────────────────────────────────────────
print("\n--- DISTINCT ---")
# DISTINCT city — check count and values (order may vary)
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((HOST, PORT))
pg_startup(s)
cols, rows, err = pg_query(s, "SELECT DISTINCT city FROM ordtest")
s.close()
distinct_cities = sorted([r[0] for r in rows])
if distinct_cities == ["Ankara", "Istanbul", "Izmir"]:
    print(f"  OK   DISTINCT city (3 unique cities)")
    passed += 1
else:
    print(f"  FAIL DISTINCT city")
    print(f"       expected: ['Ankara', 'Istanbul', 'Izmir']")
    print(f"       actual:   {distinct_cities}")
    failed += 1
    fail_details.append("DISTINCT city")

check("DISTINCT score",
      "SELECT DISTINCT score FROM ordtest ORDER BY score",
      ["60", "75", "85", "90"],
      col_idx=0)

# DISTINCT multi-col: all 7 (city, score) combos are unique
s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect((HOST, PORT))
pg_startup(s)
cols, rows, err = pg_query(s, "SELECT DISTINCT city, score FROM ordtest ORDER BY city")
s.close()
actual_sorted = sorted([tuple(r) for r in rows])
expected_sorted = sorted([("Ankara", "60"), ("Ankara", "75"), ("Istanbul", "75"),
                           ("Istanbul", "85"), ("Istanbul", "90"), ("Izmir", "85"), ("Izmir", "90")])
if actual_sorted == expected_sorted:
    print(f"  OK   DISTINCT multi-col (7 unique combos)")
    passed += 1
else:
    print(f"  FAIL DISTINCT multi-col")
    print(f"       expected: {expected_sorted}")
    print(f"       actual:   {actual_sorted}")
    failed += 1
    fail_details.append("DISTINCT multi-col")

# ── DISTINCT + ORDER BY combo ─────────────────────────────────────
print("\n--- DISTINCT + ORDER BY ---")
check("DISTINCT + ORDER BY ASC",
      "SELECT DISTINCT score FROM ordtest ORDER BY score",
      ["60", "75", "85", "90"],
      col_idx=0)

check("DISTINCT + ORDER BY DESC",
      "SELECT DISTINCT score FROM ordtest ORDER BY score DESC",
      ["90", "85", "75", "60"],
      col_idx=0)

check("DISTINCT + ORDER BY + LIMIT",
      "SELECT DISTINCT score FROM ordtest ORDER BY score DESC LIMIT 2",
      ["90", "85"],
      col_idx=0)

check("DISTINCT + ORDER BY city",
      "SELECT DISTINCT city FROM ordtest ORDER BY city",
      ["Ankara", "Istanbul", "Izmir"],
      col_idx=0)

check("DISTINCT + WHERE + ORDER BY",
      "SELECT DISTINCT city FROM ordtest WHERE score >= 85 ORDER BY city",
      ["Istanbul", "Izmir"],
      col_idx=0)

# ── ORDER BY with expressions ─────────────────────────────────────
print("\n--- ORDER BY with expressions ---")
check("ORDER BY with WHERE complex",
      "SELECT name, score FROM ordtest WHERE city = 'Istanbul' ORDER BY score DESC",
      [["Alice", "90"], ["Charlie", "85"], ["Frank", "75"]])

# ── GROUP BY + ORDER BY ───────────────────────────────────────────
print("\n--- GROUP BY + ORDER BY ---")
check("GROUP BY + ORDER BY",
      "SELECT city, COUNT(*) FROM ordtest GROUP BY city ORDER BY city",
      [["Ankara", "2"], ["Istanbul", "3"], ["Izmir", "2"]])

check("GROUP BY + ORDER BY + SUM",
      "SELECT city, SUM(score) FROM ordtest GROUP BY city ORDER BY city",
      [["Ankara", "135"], ["Istanbul", "250"], ["Izmir", "175"]])

# ── Summary ────────────────────────────────────────────────────────
print("\n" + "=" * 60)
print(f"RESULTS: {passed} passed, {failed} failed, {passed + failed} total")
if fail_details:
    print(f"FAILED: {', '.join(fail_details)}")
print("=" * 60)
sys.exit(0 if failed == 0 else 1)
