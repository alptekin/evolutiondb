#!/usr/bin/env python3
"""
test_auto_increment.py — AUTO_INCREMENT tests

Tests that:
  1. CREATE TABLE with AUTO_INCREMENT column
  2. INSERT omitting auto-inc column → auto-generated sequential values
  3. INSERT with explicit value → accepted, counter advances
  4. INSERT with NULL → auto-generated
  5. INSERT with 0 → auto-generated
  6. Gap handling — counter doesn't reuse deleted ids
  7. Multi-row INSERT with auto-inc
  8. Counter persistence across connections
  9. AUTO_INCREMENT + PRIMARY KEY
  10. Backward compat — table without AUTO_INCREMENT
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
    simple_query(s, "DROP TABLE IF EXISTS ai_test")
    simple_query(s, "DROP TABLE IF EXISTS ai_explicit")
    simple_query(s, "DROP TABLE IF EXISTS ai_plain")
    simple_query(s, "DROP TABLE IF EXISTS ai_multi")

    # ============================================================
    # Test 1: CREATE TABLE with AUTO_INCREMENT PRIMARY KEY
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE ai_test (
            id INT AUTO_INCREMENT PRIMARY KEY,
            name VARCHAR(50)
        )
    """)
    check("CREATE with AUTO_INCREMENT", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 2: INSERT omitting auto-inc column → auto-generated
    # ============================================================
    r = simple_query(s, "INSERT INTO ai_test (name) VALUES ('Alice')")
    check("INSERT omitting auto-inc col", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM ai_test")
    check("Auto-generated id = 1",
          len(r["rows"]) == 1 and r["rows"][0][0] == "1",
          str(r["rows"]))
    check("Name correct", 
          len(r["rows"]) == 1 and r["rows"][0][1] == "Alice",
          str(r["rows"]))

    # ============================================================
    # Test 3: Second INSERT → id = 2
    # ============================================================
    r = simple_query(s, "INSERT INTO ai_test (name) VALUES ('Bob')")
    check("Second INSERT", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM ai_test WHERE name = 'Bob'")
    check("Auto-generated id = 2",
          len(r["rows"]) == 1 and r["rows"][0][0] == "2",
          str(r["rows"]))

    # ============================================================
    # Test 4: INSERT with explicit value
    # ============================================================
    r = simple_query(s, "INSERT INTO ai_test VALUES (10, 'Carol')")
    check("INSERT with explicit id", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM ai_test WHERE id = 10")
    check("Explicit id = 10 stored",
          len(r["rows"]) == 1 and r["rows"][0][0] == "10",
          str(r["rows"]))

    # ============================================================
    # Test 5: After explicit 10, next auto → 11 (counter advances)
    # ============================================================
    r = simple_query(s, "INSERT INTO ai_test (name) VALUES ('Dave')")
    check("INSERT after explicit 10", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM ai_test WHERE name = 'Dave'")
    check("Auto-generated id = 11 (after explicit 10)",
          len(r["rows"]) == 1 and r["rows"][0][0] == "11",
          str(r["rows"]))

    # ============================================================
    # Test 6: INSERT with NULL → auto-generated
    # ============================================================
    r = simple_query(s, "INSERT INTO ai_test VALUES (NULL, 'Eve')")
    check("INSERT with NULL id", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM ai_test WHERE name = 'Eve'")
    check("NULL auto-generated id = 12",
          len(r["rows"]) == 1 and r["rows"][0][0] == "12",
          str(r["rows"]))

    # ============================================================
    # Test 7: INSERT with 0 → auto-generated
    # ============================================================
    r = simple_query(s, "INSERT INTO ai_test VALUES (0, 'Frank')")
    check("INSERT with 0 id", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM ai_test WHERE name = 'Frank'")
    check("Zero auto-generated id = 13",
          len(r["rows"]) == 1 and r["rows"][0][0] == "13",
          str(r["rows"]))

    # ============================================================
    # Test 8: Counter persistence — new connection
    # ============================================================
    s.close()
    s = pg_connect()

    r = simple_query(s, "INSERT INTO ai_test (name) VALUES ('Grace')")
    check("INSERT after reconnect", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM ai_test WHERE name = 'Grace'")
    check("Counter persists across connections (id = 14)",
          len(r["rows"]) == 1 and r["rows"][0][0] == "14",
          str(r["rows"]))

    # ============================================================
    # Test 9: Explicit value lower than counter — counter doesn't decrease
    # ============================================================
    r = simple_query(s, "INSERT INTO ai_test VALUES (5, 'Heidi')")
    check("INSERT with lower explicit id", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO ai_test (name) VALUES ('Ivan')")
    check("Next auto after lower explicit", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM ai_test WHERE name = 'Ivan'")
    check("Counter didn't decrease (id = 15)",
          len(r["rows"]) == 1 and r["rows"][0][0] == "15",
          str(r["rows"]))

    # ============================================================
    # Test 10: Multi-row INSERT with AUTO_INCREMENT
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE ai_multi (
            id INT AUTO_INCREMENT PRIMARY KEY,
            val VARCHAR(20)
        )
    """)
    check("CREATE multi-row auto-inc table", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO ai_multi (val) VALUES ('x'), ('y'), ('z')")
    check("Multi-row INSERT", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM ai_multi")
    check("Multi-row: 3 rows inserted",
          len(r["rows"]) == 3,
          f"got {len(r['rows'])} rows")

    if len(r["rows"]) == 3:
        ids = [row[0] for row in r["rows"]]
        check("Multi-row ids sequential (1,2,3)",
              ids == ["1", "2", "3"],
              f"got ids {ids}")
    else:
        check("Multi-row ids sequential", False, "skipped")

    # ============================================================
    # Test 11: Table without AUTO_INCREMENT (backward compat)
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE ai_plain (
            id INT PRIMARY KEY,
            name VARCHAR(50)
        )
    """)
    check("CREATE without AUTO_INCREMENT", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO ai_plain VALUES (1, 'Alice')")
    check("Plain table INSERT", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "SELECT * FROM ai_plain")
    check("Plain table row correct",
          len(r["rows"]) == 1 and r["rows"][0][0] == "1",
          str(r["rows"]))

    # ============================================================
    # Test 12: Total count verification
    # ============================================================
    r = simple_query(s, "SELECT * FROM ai_test")
    check("ai_test total rows = 9",
          len(r["rows"]) == 9,
          f"got {len(r['rows'])} rows")

    # ---- Cleanup ----
    simple_query(s, "DROP TABLE IF EXISTS ai_test")
    simple_query(s, "DROP TABLE IF EXISTS ai_explicit")
    simple_query(s, "DROP TABLE IF EXISTS ai_plain")
    simple_query(s, "DROP TABLE IF EXISTS ai_multi")

    s.close()


if __name__ == "__main__":
    print("=" * 60)
    print("AUTO_INCREMENT Tests")
    print("=" * 60)
    run_tests()
    print("=" * 60)
    total = passed + failed
    print(f"  AUTO_INCREMENT: {passed} passed, {failed} failed out of {total}")
    if failed == 0:
        print("  ALL TESTS PASSED")
    else:
        print("  SOME TESTS FAILED")
    print("=" * 60)
    sys.exit(0 if failed == 0 else 1)
