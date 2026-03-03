#!/usr/bin/env python3
"""Test DELETE with expression-based WHERE clause via PostgreSQL wire protocol."""

import socket, struct, time, sys

HOST, PORT = "localhost", 5433

def pg_connect():
    s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    s.connect((HOST, PORT))
    body = struct.pack("!HH", 3, 0) + b"user\x00admin\x00database\x00testdb\x00\x00"
    s.sendall(struct.pack("!I", len(body) + 4) + body)
    _read_until_ready(s)
    return s

def _read_until_ready(s):
    while True:
        hdr = _recvall(s, 5)
        tag = chr(hdr[0])
        length = struct.unpack("!I", hdr[1:5])[0]
        body = _recvall(s, length - 4) if length > 4 else b""
        if tag == 'R' and len(body) >= 4:
            auth_type = struct.unpack('!I', body[:4])[0]
            if auth_type == 3:
                pw = b'admin\x00'
                s.sendall(b'p' + struct.pack('!I', 4 + len(pw)) + pw)
        elif tag == 'Z':
            return

def _recvall(s, n):
    data = b""
    while len(data) < n:
        chunk = s.recv(n - len(data))
        if not chunk:
            raise ConnectionError("connection closed")
        data += chunk
    return data

def pg_query(s, sql):
    """Execute a query and return (columns, rows, command_tag)."""
    msg = b'Q' + struct.pack("!I", len(sql) + 5) + sql.encode() + b'\x00'
    s.sendall(msg)
    time.sleep(0.15)
    columns = []
    rows = []
    command_tag = ""
    while True:
        hdr = _recvall(s, 5)
        tag = chr(hdr[0])
        length = struct.unpack("!I", hdr[1:5])[0]
        body = _recvall(s, length - 4) if length > 4 else b""
        if tag == 'T':
            num_fields = struct.unpack("!H", body[:2])[0]
            off = 2
            for _ in range(num_fields):
                end = body.index(b'\x00', off)
                columns.append(body[off:end].decode())
                off = end + 1 + 18
        elif tag == 'D':
            num_cols = struct.unpack("!H", body[:2])[0]
            off = 2
            current_row = []
            for _ in range(num_cols):
                col_len = struct.unpack("!i", body[off:off+4])[0]
                off += 4
                if col_len == -1:
                    current_row.append(None)
                else:
                    current_row.append(body[off:off+col_len].decode())
                    off += col_len
            rows.append(current_row)
        elif tag == 'C':
            # CommandComplete
            command_tag = body.rstrip(b'\x00').decode()
        elif tag == 'Z':
            break
        elif tag == 'E':
            err_msg = body.decode(errors='replace')
            print(f"  ERROR: {err_msg}")
    return columns, rows, command_tag

passed = 0
total = 0

def test(label, fn):
    global passed, total
    total += 1
    try:
        fn()
        print(f"  ✅ {label}")
        passed += 1
    except AssertionError as e:
        print(f"  ❌ {label}")
        print(f"       {e}")

def select_all(s, table):
    """Helper: SELECT * and return rows."""
    cols, rows, _ = pg_query(s, f"SELECT * FROM {table}")
    return rows

def setup():
    """Create test table and insert sample data."""
    s = pg_connect()
    pg_query(s, "DROP TABLE t_delwhere")
    s.close()

    s = pg_connect()
    pg_query(s, "CREATE TABLE t_delwhere (id INT, name VARCHAR(50), score INT, city VARCHAR(50))")
    s.close()

    data = [
        (1, 'Alice',   90, 'Istanbul'),
        (2, 'Bob',     60, 'Ankara'),
        (3, 'Charlie', 85, 'Istanbul'),
        (4, 'Diana',   70, 'Izmir'),
        (5, 'Eve',     95, 'Ankara'),
        (6, 'Frank',   50, 'Bursa'),
    ]
    for id_, name, score, city in data:
        s = pg_connect()
        pg_query(s, f"INSERT INTO t_delwhere VALUES ({id_}, '{name}', {score}, '{city}')")
        s.close()

def reset_table():
    """Drop and recreate the test table with sample data."""
    setup()

def cleanup():
    s = pg_connect()
    pg_query(s, "DROP TABLE t_delwhere")
    s.close()


# ============================================================
# Tests
# ============================================================

print("\n=== DELETE WHERE with equality ===")
reset_table()

def test_delete_eq():
    s = pg_connect()
    _, _, tag = pg_query(s, "DELETE FROM t_delwhere WHERE id = 3")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    ids = [r[0] for r in rows]
    assert '3' not in ids, f"id=3 should be deleted, got ids={ids}"
    assert len(rows) == 5, f"Expected 5 rows after deleting 1, got {len(rows)}"
    assert "DELETE" in tag, f"Expected DELETE in command_tag, got '{tag}'"

test("DELETE WHERE id = 3", test_delete_eq)


print("\n=== DELETE WHERE with > comparison ===")
reset_table()

def test_delete_gt():
    s = pg_connect()
    _, _, tag = pg_query(s, "DELETE FROM t_delwhere WHERE score > 80")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # Should delete Alice(90), Charlie(85), Eve(95) → 3 deleted, 3 remaining
    assert len(rows) == 3, f"Expected 3 rows remaining, got {len(rows)}"
    names = [r[1] for r in rows]
    assert 'Alice' not in names, f"Alice should be deleted"
    assert 'Charlie' not in names, f"Charlie should be deleted"
    assert 'Eve' not in names, f"Eve should be deleted"
    assert 'Bob' in names, f"Bob should remain"

test("DELETE WHERE score > 80", test_delete_gt)


print("\n=== DELETE WHERE with < comparison ===")
reset_table()

def test_delete_lt():
    s = pg_connect()
    pg_query(s, "DELETE FROM t_delwhere WHERE score < 65")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # Should delete Bob(60), Frank(50) → 4 remaining
    assert len(rows) == 4, f"Expected 4 rows remaining, got {len(rows)}"
    names = [r[1] for r in rows]
    assert 'Bob' not in names, f"Bob should be deleted"
    assert 'Frank' not in names, f"Frank should be deleted"

test("DELETE WHERE score < 65", test_delete_lt)


print("\n=== DELETE WHERE with AND ===")
reset_table()

def test_delete_and():
    s = pg_connect()
    pg_query(s, "DELETE FROM t_delwhere WHERE score > 80 AND city = 'Istanbul'")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # Should delete Alice(90,Istanbul), Charlie(85,Istanbul) → 4 remaining
    assert len(rows) == 4, f"Expected 4 rows remaining, got {len(rows)}"
    names = [r[1] for r in rows]
    assert 'Alice' not in names, f"Alice should be deleted"
    assert 'Charlie' not in names, f"Charlie should be deleted"
    assert 'Eve' in names, f"Eve (Ankara) should remain"

test("DELETE WHERE score > 80 AND city = 'Istanbul'", test_delete_and)


print("\n=== DELETE WHERE with OR ===")
reset_table()

def test_delete_or():
    s = pg_connect()
    pg_query(s, "DELETE FROM t_delwhere WHERE city = 'Ankara' OR city = 'Bursa'")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # Should delete Bob(Ankara), Eve(Ankara), Frank(Bursa) → 3 remaining
    assert len(rows) == 3, f"Expected 3 rows remaining, got {len(rows)}"
    cities = [r[3] for r in rows]
    assert 'Ankara' not in cities, f"Ankara should be gone"
    assert 'Bursa' not in cities, f"Bursa should be gone"

test("DELETE WHERE city = 'Ankara' OR city = 'Bursa'", test_delete_or)


print("\n=== DELETE WHERE with LIKE ===")
reset_table()

def test_delete_like():
    s = pg_connect()
    pg_query(s, "DELETE FROM t_delwhere WHERE name LIKE 'A%'")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # Should delete Alice → 5 remaining
    assert len(rows) == 5, f"Expected 5 rows remaining, got {len(rows)}"
    names = [r[1] for r in rows]
    assert 'Alice' not in names, f"Alice should be deleted"

test("DELETE WHERE name LIKE 'A%'", test_delete_like)


print("\n=== DELETE WHERE with BETWEEN ===")
reset_table()

def test_delete_between():
    s = pg_connect()
    pg_query(s, "DELETE FROM t_delwhere WHERE score BETWEEN 60 AND 70")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # Should delete Bob(60), Diana(70) → 4 remaining
    assert len(rows) == 4, f"Expected 4 rows remaining, got {len(rows)}"
    names = [r[1] for r in rows]
    assert 'Bob' not in names, f"Bob should be deleted"
    assert 'Diana' not in names, f"Diana should be deleted"

test("DELETE WHERE score BETWEEN 60 AND 70", test_delete_between)


print("\n=== DELETE WHERE with IN ===")
reset_table()

def test_delete_in():
    s = pg_connect()
    pg_query(s, "DELETE FROM t_delwhere WHERE id IN (1, 3, 5)")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # Should delete Alice, Charlie, Eve → 3 remaining
    assert len(rows) == 3, f"Expected 3 rows remaining, got {len(rows)}"
    ids = sorted([r[0] for r in rows])
    assert ids == ['2', '4', '6'], f"Expected ids [2,4,6], got {ids}"

test("DELETE WHERE id IN (1, 3, 5)", test_delete_in)


print("\n=== DELETE WHERE with IS NULL ===")

def test_delete_isnull():
    # Create a special table with nullable column
    s = pg_connect()
    pg_query(s, "DROP TABLE t_delnull")
    s.close()
    s = pg_connect()
    pg_query(s, "CREATE TABLE t_delnull (id INT, note VARCHAR(50))")
    s.close()

    s = pg_connect()
    pg_query(s, "INSERT INTO t_delnull VALUES (1, 'hello')")
    s.close()
    s = pg_connect()
    pg_query(s, "INSERT INTO t_delnull VALUES (2, NULL)")
    s.close()
    s = pg_connect()
    pg_query(s, "INSERT INTO t_delnull VALUES (3, 'world')")
    s.close()
    s = pg_connect()
    pg_query(s, "INSERT INTO t_delnull VALUES (4, NULL)")
    s.close()

    s = pg_connect()
    pg_query(s, "DELETE FROM t_delnull WHERE note IS NULL")
    s.close()

    s = pg_connect()
    rows = select_all(s, "t_delnull")
    s.close()
    # Should delete id=2 and id=4 → 2 remaining
    assert len(rows) == 2, f"Expected 2 rows remaining, got {len(rows)}"
    ids = sorted([r[0] for r in rows])
    assert ids == ['1', '3'], f"Expected ids [1,3], got {ids}"

    # Cleanup
    s = pg_connect()
    pg_query(s, "DROP TABLE t_delnull")
    s.close()

test("DELETE WHERE note IS NULL", test_delete_isnull)


print("\n=== DELETE WHERE with no matches ===")
reset_table()

def test_delete_no_match():
    s = pg_connect()
    _, _, tag = pg_query(s, "DELETE FROM t_delwhere WHERE score > 999")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # No rows should be deleted
    assert len(rows) == 6, f"Expected 6 rows (no delete), got {len(rows)}"
    assert "DELETE 0" in tag, f"Expected 'DELETE 0' in command_tag, got '{tag}'"

test("DELETE WHERE no matches → 0 rows", test_delete_no_match)


print("\n=== DELETE all rows (WHERE true) ===")
reset_table()

def test_delete_all():
    s = pg_connect()
    _, _, tag = pg_query(s, "DELETE FROM t_delwhere WHERE 1 = 1")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    assert len(rows) == 0, f"Expected 0 rows after DELETE all, got {len(rows)}"
    assert "DELETE 6" in tag, f"Expected 'DELETE 6' in command_tag, got '{tag}'"

test("DELETE WHERE 1=1 → delete all rows", test_delete_all)


print("\n=== DELETE WHERE with NOT ===")
reset_table()

def test_delete_not():
    s = pg_connect()
    pg_query(s, "DELETE FROM t_delwhere WHERE NOT city = 'Istanbul'")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # Should keep only Istanbul rows: Alice, Charlie → 2 remaining
    assert len(rows) == 2, f"Expected 2 rows remaining, got {len(rows)}"
    cities = [r[3] for r in rows]
    assert all(c == 'Istanbul' for c in cities), f"All should be Istanbul, got {cities}"

test("DELETE WHERE NOT city = 'Istanbul'", test_delete_not)


print("\n=== DELETE command_tag with correct count ===")
reset_table()

def test_delete_count_tag():
    s = pg_connect()
    _, _, tag = pg_query(s, "DELETE FROM t_delwhere WHERE score >= 85")
    s.close()
    # Should delete Alice(90), Charlie(85), Eve(95) → 3 deleted
    assert tag == "DELETE 3", f"Expected 'DELETE 3', got '{tag}'"

test("command_tag reports correct deleted count", test_delete_count_tag)


print("\n=== DELETE WHERE with >= and <= ===")
reset_table()

def test_delete_ge_le():
    s = pg_connect()
    pg_query(s, "DELETE FROM t_delwhere WHERE score >= 70 AND score <= 90")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # Delete Diana(70), Charlie(85), Alice(90) → 3 remaining: Bob(60), Eve(95), Frank(50)
    assert len(rows) == 3, f"Expected 3 rows remaining, got {len(rows)}"
    names = sorted([r[1] for r in rows])
    assert names == ['Bob', 'Eve', 'Frank'], f"Expected [Bob, Eve, Frank], got {names}"

test("DELETE WHERE score >= 70 AND score <= 90", test_delete_ge_le)


print("\n=== DELETE WHERE with != ===")
reset_table()

def test_delete_neq():
    s = pg_connect()
    pg_query(s, "DELETE FROM t_delwhere WHERE city != 'Istanbul'")
    s.close()
    s = pg_connect()
    rows = select_all(s, "t_delwhere")
    s.close()
    # Should keep Alice(Istanbul), Charlie(Istanbul) → 2 remaining
    assert len(rows) == 2, f"Expected 2 rows remaining, got {len(rows)}"

test("DELETE WHERE city != 'Istanbul'", test_delete_neq)


# Cleanup
cleanup()

print(f"\n{'='*50}")
print(f"Results: {passed}/{total} passed")
if passed == total:
    print("🎉 All DELETE WHERE tests passed!")
else:
    print("⚠️  Some tests failed!")
    sys.exit(1)
