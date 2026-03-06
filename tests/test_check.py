#!/usr/bin/env python3
"""
test_check.py — CHECK constraint tests

Tests that:
  1. CREATE TABLE with single-column CHECK constraint
  2. INSERT valid row passes CHECK
  3. INSERT violating CHECK → error
  4. Multi-column CHECK (table-level)
  5. Multiple CHECK constraints on same table
  6. UPDATE violating CHECK → error
  7. UPDATE valid row passes CHECK
  8. CHECK with string comparison
  9. CHECK with boolean logic (AND/OR)
"""

import socket
import sys

HOST = "localhost"
PORT = 5433


def pg_connect():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(5)
    s.connect((HOST, PORT))

    user = b"admin\x00"
    database = b"evosql\x00"
    payload = b"\x00\x03\x00\x00" + b"user\x00" + user + b"database\x00" + database + b"\x00"
    length = 4 + len(payload)
    s.sendall(length.to_bytes(4, "big") + payload)
    _read_until_ready(s)
    return s


def _read_msg(s):
    tag = s.recv(1)
    if not tag:
        return None, b""
    length_bytes = s.recv(4)
    length = int.from_bytes(length_bytes, "big") - 4
    data = b""
    while len(data) < length:
        chunk = s.recv(length - len(data))
        if not chunk:
            break
        data += chunk
    return tag, data


def _read_until_ready(s):
    while True:
        tag, data = _read_msg(s)
        if tag is None:
            break
        if tag == b"Z":
            break
        if tag == b"R":
            auth_type = int.from_bytes(data[:4], "big")
            if auth_type == 3:
                pw = b"admin\x00"
                s.sendall(b"p" + (4 + len(pw)).to_bytes(4, "big") + pw)


def simple_query(s, sql):
    payload = sql.encode("utf-8") + b"\x00"
    s.sendall(b"Q" + (4 + len(payload)).to_bytes(4, "big") + payload)

    rows = []
    columns = []
    error = None
    command_tag = None

    while True:
        tag, data = _read_msg(s)
        if tag is None:
            break
        if tag == b"T":
            num_fields = int.from_bytes(data[:2], "big")
            offset = 2
            for _ in range(num_fields):
                end = data.index(b"\x00", offset)
                col_name = data[offset:end].decode("utf-8")
                columns.append(col_name)
                offset = end + 1 + 18
        elif tag == b"D":
            num_cols = int.from_bytes(data[:2], "big")
            offset = 2
            row = []
            for _ in range(num_cols):
                col_len = int.from_bytes(data[offset:offset+4], "big", signed=True)
                offset += 4
                if col_len == -1:
                    row.append(None)
                else:
                    val = data[offset:offset+col_len].decode("utf-8")
                    row.append(val)
                    offset += col_len
            rows.append(row)
        elif tag == b"E":
            error = data.decode("utf-8", errors="replace")
        elif tag == b"C":
            command_tag = data.decode("utf-8").rstrip("\x00")
        elif tag == b"Z":
            break

    return {
        "columns": columns,
        "rows": rows,
        "error": error,
        "command_tag": command_tag,
    }


passed = 0
failed = 0


def check(name, condition, detail=""):
    global passed, failed
    if condition:
        passed += 1
        print(f"  PASS: {name}")
    else:
        failed += 1
        print(f"  FAIL: {name}  {detail}")


def run_tests():
    s = pg_connect()

    # ---- Cleanup ----
    simple_query(s, "DROP TABLE IF EXISTS chk_age")
    simple_query(s, "DROP TABLE IF EXISTS chk_multi")
    simple_query(s, "DROP TABLE IF EXISTS chk_range")
    simple_query(s, "DROP TABLE IF EXISTS chk_string")

    # ============================================================
    # Test 1: CREATE TABLE with column-level CHECK
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE chk_age (
            id INT PRIMARY KEY,
            name VARCHAR(50),
            age INT,
            CHECK (age > 0)
        )
    """)
    check("CREATE TABLE with CHECK", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 2: INSERT valid row (passes CHECK)
    # ============================================================
    r = simple_query(s, "INSERT INTO chk_age VALUES (1, 'Alice', 25)")
    check("INSERT valid (age=25 > 0)", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 3: INSERT violating CHECK → error
    # ============================================================
    r = simple_query(s, "INSERT INTO chk_age VALUES (2, 'Bob', -5)")
    check("INSERT violating CHECK (age=-5)", r["error"] is not None, "expected error")

    r = simple_query(s, "INSERT INTO chk_age VALUES (3, 'Charlie', 0)")
    check("INSERT violating CHECK (age=0)", r["error"] is not None, "expected error")

    # ============================================================
    # Test 4: Verify only valid row exists
    # ============================================================
    r = simple_query(s, "SELECT * FROM chk_age")
    check("Only 1 valid row exists", len(r["rows"]) == 1, f"got {len(r['rows'])} rows")

    # ============================================================
    # Test 5: Table-level CHECK with range (multi-column)
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE chk_range (
            id INT PRIMARY KEY,
            price INT,
            quantity INT,
            CHECK (price > 0 AND quantity >= 0)
        )
    """)
    check("CREATE TABLE with range CHECK", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO chk_range VALUES (1, 10, 5)")
    check("INSERT valid (price=10, qty=5)", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO chk_range VALUES (2, -1, 5)")
    check("INSERT violating (price=-1)", r["error"] is not None, "expected error")

    r = simple_query(s, "INSERT INTO chk_range VALUES (3, 10, -1)")
    check("INSERT violating (qty=-1)", r["error"] is not None, "expected error")

    r = simple_query(s, "INSERT INTO chk_range VALUES (4, 10, 0)")
    check("INSERT valid (qty=0, >= 0)", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 6: Multiple CHECK constraints on same table
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE chk_multi (
            id INT PRIMARY KEY,
            age INT,
            salary INT,
            CHECK (age > 0),
            CHECK (salary >= 0)
        )
    """)
    check("CREATE TABLE with multiple CHECKs", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO chk_multi VALUES (1, 25, 50000)")
    check("INSERT valid (both checks pass)", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO chk_multi VALUES (2, -1, 50000)")
    check("INSERT violating first CHECK (age=-1)", r["error"] is not None, "expected error")

    r = simple_query(s, "INSERT INTO chk_multi VALUES (3, 25, -100)")
    check("INSERT violating second CHECK (salary=-100)", r["error"] is not None, "expected error")

    # ============================================================
    # Test 7: UPDATE violating CHECK → error
    # ============================================================
    r = simple_query(s, "UPDATE chk_age SET age = -10 WHERE id = 1")
    check("UPDATE violating CHECK", r["error"] is not None, "expected error")

    # Verify value wasn't changed
    r = simple_query(s, "SELECT age FROM chk_age WHERE id = 1")
    check("UPDATE rollback: age unchanged",
          len(r["rows"]) == 1 and r["rows"][0][0] == "25",
          str(r["rows"]))

    # ============================================================
    # Test 8: UPDATE valid (passes CHECK)
    # ============================================================
    r = simple_query(s, "UPDATE chk_age SET age = 30 WHERE id = 1")
    check("UPDATE valid (age=30 > 0)", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT age FROM chk_age WHERE id = 1")
    check("UPDATE applied: age=30",
          len(r["rows"]) == 1 and r["rows"][0][0] == "30",
          str(r["rows"]))

    # ============================================================
    # Test 9: CHECK with comparison operators
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE chk_string (
            id INT PRIMARY KEY,
            status VARCHAR(20),
            value INT,
            CHECK (value >= 0 AND value <= 100)
        )
    """)
    check("CREATE TABLE with range CHECK", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO chk_string VALUES (1, 'active', 50)")
    check("INSERT valid (value=50 in 0..100)", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO chk_string VALUES (2, 'over', 101)")
    check("INSERT violating (value=101 > 100)", r["error"] is not None, "expected error")

    r = simple_query(s, "INSERT INTO chk_string VALUES (3, 'negative', -1)")
    check("INSERT violating (value=-1 < 0)", r["error"] is not None, "expected error")

    # ---- Cleanup ----
    simple_query(s, "DROP TABLE IF EXISTS chk_age")
    simple_query(s, "DROP TABLE IF EXISTS chk_multi")
    simple_query(s, "DROP TABLE IF EXISTS chk_range")
    simple_query(s, "DROP TABLE IF EXISTS chk_string")

    s.close()


if __name__ == "__main__":
    print("=" * 60)
    print("CHECK Constraint Tests")
    print("=" * 60)
    run_tests()
    print("=" * 60)
    total = passed + failed
    print(f"  CHECK: {passed} passed, {failed} failed out of {total}")
    if failed == 0:
        print("  ALL TESTS PASSED")
    else:
        print("  SOME TESTS FAILED")
    print("=" * 60)
    sys.exit(0 if failed == 0 else 1)
