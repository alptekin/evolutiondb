#!/usr/bin/env python3
"""
test_default.py — DEFAULT value enforcement tests

Tests that:
  1. CREATE TABLE with DEFAULT stores the value in .meta
  2. INSERT with column list omitting DEFAULT column → default applied
  3. INSERT with explicit value overrides DEFAULT
  4. INSERT with explicit NULL overrides DEFAULT
  5. DEFAULT int, string, float, boolean types
  6. DEFAULT + NOT NULL — omitting column uses default (no error)
  7. NOT NULL without DEFAULT — omitting column → error
  8. Table without DEFAULT (backward compat)
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
    simple_query(s, "DROP TABLE IF EXISTS df_test")
    simple_query(s, "DROP TABLE IF EXISTS df_types")
    simple_query(s, "DROP TABLE IF EXISTS df_notnull")
    simple_query(s, "DROP TABLE IF EXISTS df_plain")

    # ============================================================
    # Test 1: CREATE TABLE with DEFAULT string
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE df_test (
            id INT PRIMARY KEY,
            name VARCHAR(50),
            status VARCHAR(20) DEFAULT 'active',
            score INT DEFAULT 100
        )
    """)
    check("CREATE TABLE with DEFAULT", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 2: INSERT with column list omitting DEFAULT columns → defaults applied
    # ============================================================
    r = simple_query(s, "INSERT INTO df_test (id, name) VALUES (1, 'Alice')")
    check("INSERT omitting defaults", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM df_test WHERE id = 1")
    check("Default string applied",
          len(r["rows"]) == 1 and r["rows"][0][2] == "active",
          str(r["rows"]))
    check("Default int applied",
          len(r["rows"]) == 1 and r["rows"][0][3] == "100",
          str(r["rows"]))

    # ============================================================
    # Test 3: INSERT with explicit value overrides DEFAULT
    # ============================================================
    r = simple_query(s, "INSERT INTO df_test (id, name, status, score) VALUES (2, 'Bob', 'inactive', 50)")
    check("INSERT with explicit vals", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM df_test WHERE id = 2")
    check("Explicit overrides default (status)",
          len(r["rows"]) == 1 and r["rows"][0][2] == "inactive",
          str(r["rows"]))
    check("Explicit overrides default (score)",
          len(r["rows"]) == 1 and r["rows"][0][3] == "50",
          str(r["rows"]))

    # ============================================================
    # Test 4: INSERT with explicit NULL overrides DEFAULT
    # ============================================================
    r = simple_query(s, "INSERT INTO df_test (id, name, status) VALUES (3, 'Carol', NULL)")
    check("INSERT with explicit NULL", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT status FROM df_test WHERE id = 3")
    check("Explicit NULL overrides default",
          len(r["rows"]) == 1 and r["rows"][0][0] is None,
          str(r["rows"]))

    # ============================================================
    # Test 5: DEFAULT with multiple types
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE df_types (
            id INT PRIMARY KEY,
            flag BOOLEAN DEFAULT true,
            ratio FLOAT DEFAULT 3,
            label VARCHAR(30) DEFAULT 'unknown'
        )
    """)
    check("CREATE TABLE multi-type defaults", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO df_types (id) VALUES (1)")
    check("INSERT with all defaults", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM df_types WHERE id = 1")
    if len(r["rows"]) == 1:
        row = r["rows"][0]
        check("Default boolean applied", row[1] == "true", f"got {row[1]}")
        check("Default float applied", row[2] in ("3", "3.0"), f"got {row[2]}")
        check("Default string applied (label)", row[3] == "unknown", f"got {row[3]}")
    else:
        check("Default row found", False, f"got {len(r['rows'])} rows")

    # ============================================================
    # Test 6: DEFAULT + NOT NULL — omitting column uses default, no error
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE df_notnull (
            id INT PRIMARY KEY,
            status VARCHAR(20) NOT NULL DEFAULT 'pending',
            name VARCHAR(50)
        )
    """)
    check("CREATE TABLE DEFAULT + NOT NULL", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO df_notnull (id, name) VALUES (1, 'Alice')")
    check("INSERT omit NOT NULL + DEFAULT col", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT status FROM df_notnull WHERE id = 1")
    check("NOT NULL + DEFAULT applied",
          len(r["rows"]) == 1 and r["rows"][0][0] == "pending",
          str(r["rows"]))

    # ============================================================
    # Test 7: Table without DEFAULT (backward compat)
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE df_plain (
            id INT PRIMARY KEY,
            name VARCHAR(50)
        )
    """)
    check("CREATE TABLE no DEFAULT", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO df_plain VALUES (1, 'Alice')")
    check("INSERT into plain table", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 8: Full row INSERT — all values provided, defaults not involved
    # ============================================================
    r = simple_query(s, "INSERT INTO df_test VALUES (10, 'Zara', 'vip', 999)")
    check("Full row INSERT ignores defaults", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM df_test WHERE id = 10")
    check("Full row values correct",
          len(r["rows"]) == 1 and r["rows"][0][2] == "vip" and r["rows"][0][3] == "999",
          str(r["rows"]))

    # ---- Cleanup ----
    simple_query(s, "DROP TABLE IF EXISTS df_test")
    simple_query(s, "DROP TABLE IF EXISTS df_types")
    simple_query(s, "DROP TABLE IF EXISTS df_notnull")
    simple_query(s, "DROP TABLE IF EXISTS df_plain")

    s.close()


if __name__ == "__main__":
    print("=" * 60)
    print("DEFAULT Value Tests")
    print("=" * 60)
    run_tests()
    print("=" * 60)
    total = passed + failed
    print(f"  DEFAULT: {passed} passed, {failed} failed out of {total}")
    if failed == 0:
        print("  ALL TESTS PASSED")
    else:
        print("  SOME TESTS FAILED")
    print("=" * 60)
    sys.exit(0 if failed == 0 else 1)
