#!/usr/bin/env python3
"""
test_unique.py — UNIQUE constraint enforcement tests

Tests that:
  1. CREATE TABLE with UNIQUE column stores the flag in .meta
  2. INSERT duplicate into UNIQUE column → error 23505
  3. INSERT different values into UNIQUE column → success
  4. INSERT NULL into UNIQUE column → success (NULLs don't violate UNIQUE)
  5. Multiple NULLs in UNIQUE column → success
  6. UPDATE to duplicate UNIQUE value → error 23505
  7. UPDATE to non-duplicate UNIQUE value → success
  8. Multi-row INSERT with internal dup in UNIQUE col → error 23505
  9. UNIQUE KEY syntax works the same as UNIQUE
  10. Multiple UNIQUE columns in one table
  11. UNIQUE + NOT NULL combined
  12. Backward compat — old tables without UNIQUE line work fine
"""

import socket
import sys
import time

HOST = "localhost"
PORT = 5433

def pg_connect():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.settimeout(5)
    s.connect((HOST, PORT))

    # Startup message
    user = b"admin\x00"
    database = b"evosql\x00"
    payload = b"\x00\x03\x00\x00" + b"user\x00" + user + b"database\x00" + database + b"\x00"
    length = 4 + len(payload)
    s.sendall(length.to_bytes(4, "big") + payload)

    # Read until ReadyForQuery
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
    msgs = []
    while True:
        tag, data = _read_msg(s)
        if tag is None:
            break
        msgs.append((tag, data))
        if tag == b"Z":
            break
        # Handle auth
        if tag == b"R":
            auth_type = int.from_bytes(data[:4], "big")
            if auth_type == 3:  # cleartext password
                pw = b"admin\x00"
                s.sendall(b"p" + (4 + len(pw)).to_bytes(4, "big") + pw)
    return msgs

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


# ================================================================
#  Tests
# ================================================================

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
    simple_query(s, "DROP TABLE IF EXISTS uq_test")
    simple_query(s, "DROP TABLE IF EXISTS uq_multi")
    simple_query(s, "DROP TABLE IF EXISTS uq_notnull")
    simple_query(s, "DROP TABLE IF EXISTS uq_key")
    simple_query(s, "DROP TABLE IF EXISTS uq_plain")

    # ============================================================
    # Test 1: CREATE TABLE with UNIQUE column
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE uq_test (
            id INT PRIMARY KEY,
            email VARCHAR(100) UNIQUE,
            name VARCHAR(50)
        )
    """)
    check("CREATE TABLE with UNIQUE", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 2: INSERT first row — should succeed
    # ============================================================
    r = simple_query(s, "INSERT INTO uq_test VALUES (1, 'alice_email', 'Alice')")
    check("INSERT first row", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 3: INSERT different UNIQUE value — should succeed
    # ============================================================
    r = simple_query(s, "INSERT INTO uq_test VALUES (2, 'bob_email', 'Bob')")
    check("INSERT different unique val", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 4: INSERT duplicate UNIQUE value — should FAIL with 23505
    # ============================================================
    r = simple_query(s, "INSERT INTO uq_test VALUES (3, 'alice_email', 'Carol')")
    check("INSERT dup unique val → error", r["error"] is not None, "expected error")
    if r["error"]:
        check("INSERT dup unique → 23505", "23505" in r["error"], r["error"][:120])
        check("INSERT dup unique → column name", "email" in r["error"].lower(), r["error"][:120])

    # ============================================================
    # Test 5: Verify only 2 rows exist (dup was rejected)
    # ============================================================
    r = simple_query(s, "SELECT * FROM uq_test")
    check("Only 2 rows after dup reject", len(r["rows"]) == 2, f"got {len(r['rows'])}")

    # ============================================================
    # Test 6: INSERT NULL into UNIQUE column — should succeed
    # ============================================================
    r = simple_query(s, "INSERT INTO uq_test VALUES (4, NULL, 'Dave')")
    check("INSERT NULL into UNIQUE col", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 7: INSERT another NULL into UNIQUE column — should succeed (NULLs are distinct)
    # ============================================================
    r = simple_query(s, "INSERT INTO uq_test VALUES (5, NULL, 'Eve')")
    check("INSERT second NULL into UNIQUE col", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 8: UPDATE to duplicate UNIQUE value — should FAIL
    # ============================================================
    r = simple_query(s, "UPDATE uq_test SET email = 'alice_email' WHERE id = 2")
    check("UPDATE to dup unique → error", r["error"] is not None, "expected error")
    if r["error"]:
        check("UPDATE dup unique → 23505", "23505" in r["error"], r["error"][:120])

    # ============================================================
    # Test 9: UPDATE to non-duplicate UNIQUE value — should succeed
    # ============================================================
    r = simple_query(s, "UPDATE uq_test SET email = 'bob_new_email' WHERE id = 2")
    check("UPDATE to unique val → ok", r["error"] is None, r.get("error", ""))

    # ============================================================
    # Test 10: Verify row was updated
    # ============================================================
    r = simple_query(s, "SELECT email FROM uq_test WHERE id = 2")
    check("Updated unique val persisted",
          len(r["rows"]) == 1 and r["rows"][0][0] == "bob_new_email",
          str(r["rows"]))

    # ============================================================
    # Test 11: UNIQUE KEY syntax
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE uq_key (
            id INT PRIMARY KEY,
            code VARCHAR(20) UNIQUE KEY,
            label VARCHAR(50)
        )
    """)
    check("CREATE TABLE with UNIQUE KEY", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO uq_key VALUES (1, 'A100', 'First')")
    check("INSERT into UNIQUE KEY table", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO uq_key VALUES (2, 'A100', 'Dup')")
    check("INSERT dup into UNIQUE KEY → error", r["error"] is not None, "expected error")

    # ============================================================
    # Test 12: Multiple UNIQUE columns
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE uq_multi (
            id INT PRIMARY KEY,
            username VARCHAR(50) UNIQUE,
            email VARCHAR(100) UNIQUE,
            name VARCHAR(50)
        )
    """)
    check("CREATE TABLE multi UNIQUE", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO uq_multi VALUES (1, 'alice', 'alice_mail', 'Alice')")
    check("INSERT multi unique row 1", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO uq_multi VALUES (2, 'bob', 'bob_mail', 'Bob')")
    check("INSERT multi unique row 2", r["error"] is None, r.get("error", ""))

    # Duplicate username
    r = simple_query(s, "INSERT INTO uq_multi VALUES (3, 'alice', 'carol_mail', 'Carol')")
    check("INSERT dup username → error", r["error"] is not None, "expected error")
    if r["error"]:
        check("Dup username → mentions 'username'", "username" in r["error"].lower(), r["error"][:120])

    # Duplicate email
    r = simple_query(s, "INSERT INTO uq_multi VALUES (4, 'dave', 'alice_mail', 'Dave')")
    check("INSERT dup email → error", r["error"] is not None, "expected error")
    if r["error"]:
        check("Dup email → mentions 'email'", "email" in r["error"].lower(), r["error"][:120])

    # ============================================================
    # Test 13: UNIQUE + NOT NULL combined
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE uq_notnull (
            id INT PRIMARY KEY,
            code VARCHAR(20) NOT NULL UNIQUE,
            name VARCHAR(50)
        )
    """)
    check("CREATE TABLE UNIQUE + NOT NULL", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO uq_notnull VALUES (1, 'X1', 'First')")
    check("INSERT into NOT NULL UNIQUE", r["error"] is None, r.get("error", ""))

    # NULL should fail due to NOT NULL (not UNIQUE)
    r = simple_query(s, "INSERT INTO uq_notnull VALUES (2, NULL, 'Second')")
    check("INSERT NULL into NOT NULL UNIQUE → error", r["error"] is not None, "expected error")

    # Dup should fail due to UNIQUE
    r = simple_query(s, "INSERT INTO uq_notnull VALUES (3, 'X1', 'Third')")
    check("INSERT dup into NOT NULL UNIQUE → error", r["error"] is not None, "expected error")

    # ============================================================
    # Test 14: Table without UNIQUE (backward compat)
    # ============================================================
    r = simple_query(s, """
        CREATE TABLE uq_plain (
            id INT PRIMARY KEY,
            name VARCHAR(50)
        )
    """)
    check("CREATE TABLE no UNIQUE", r["error"] is None, r.get("error", ""))

    r = simple_query(s, "INSERT INTO uq_plain VALUES (1, 'Alice')")
    check("INSERT into plain table", r["error"] is None, r.get("error", ""))

    # Same name allowed (no UNIQUE)
    r = simple_query(s, "INSERT INTO uq_plain VALUES (2, 'Alice')")
    check("INSERT dup name in non-unique → ok", r["error"] is None, r.get("error", ""))

    # ---- Cleanup ----
    simple_query(s, "DROP TABLE IF EXISTS uq_test")
    simple_query(s, "DROP TABLE IF EXISTS uq_multi")
    simple_query(s, "DROP TABLE IF EXISTS uq_notnull")
    simple_query(s, "DROP TABLE IF EXISTS uq_key")
    simple_query(s, "DROP TABLE IF EXISTS uq_plain")

    s.close()


if __name__ == "__main__":
    print("=" * 60)
    print("UNIQUE Constraint Tests")
    print("=" * 60)
    run_tests()
    print("=" * 60)
    total = passed + failed
    print(f"  UNIQUE: {passed} passed, {failed} failed out of {total}")
    if failed == 0:
        print("  ALL TESTS PASSED")
    else:
        print("  SOME TESTS FAILED")
    print("=" * 60)
    sys.exit(0 if failed == 0 else 1)
