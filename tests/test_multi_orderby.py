"""
Tests for Multi-column ORDER BY in EvolutionDB.
Covers: multi-column sort, mixed ASC/DESC, tie-breaking.
"""
import socket, struct, sys

HOST, PORT = "localhost", 5433
PASS, FAIL = 0, 0

def pg_connect():
    s = socket.socket()
    s.connect((HOST, PORT))
    startup = b'\x00\x03\x00\x00user\x00postgres\x00database\x00evo\x00\x00'
    s.sendall(struct.pack('!I', len(startup)+4) + startup)
    while True:
        tag = s.recv(1)
        if not tag: break
        length = struct.unpack('!I', s.recv(4))[0]
        s.recv(length - 4)
        if tag == b'Z': break
    return s

def query(s, sql):
    msg = b'Q' + struct.pack('!I', len(sql)+5) + sql.encode('utf-8') + b'\x00'
    s.sendall(msg)
    columns, rows, error = [], [], None
    while True:
        tag = s.recv(1)
        if not tag: break
        length = struct.unpack('!I', s.recv(4))[0]
        body = b''
        while len(body) < length - 4:
            body += s.recv(length - 4 - len(body))
        if tag == b'T':
            num_fields = struct.unpack('!H', body[:2])[0]
            off = 2
            columns = []
            for _ in range(num_fields):
                end = body.index(b'\x00', off)
                columns.append(body[off:end].decode('utf-8'))
                off = end + 1 + 18
        elif tag == b'D':
            num_fields = struct.unpack('!H', body[:2])[0]
            off = 2
            row = []
            for _ in range(num_fields):
                flen = struct.unpack('!i', body[off:off+4])[0]
                off += 4
                if flen == -1:
                    row.append(None)
                else:
                    row.append(body[off:off+flen].decode('utf-8'))
                    off += flen
            rows.append(row)
        elif tag == b'E':
            error = body.decode('utf-8', errors='replace')
        elif tag == b'Z':
            break
    return columns, rows, error

def run_test(name, s, sql, expected_rows=None, expected_names=None):
    global PASS, FAIL
    cols, rows, err = query(s, sql)
    ok = True
    if err:
        print(f"  FAIL {name}: error={err[:100]}")
        FAIL += 1
        return
    if expected_names is not None and [r[0] for r in rows] != expected_names:
        print(f"  FAIL {name}: expected names={expected_names}, got names={[r[0] for r in rows]}")
        ok = False
    if expected_rows is not None and rows != expected_rows:
        print(f"  FAIL {name}: expected rows={expected_rows}, got rows={rows}")
        ok = False
    if ok:
        print(f"  PASS {name}")
        PASS += 1
    else:
        FAIL += 1

def main():
    global PASS, FAIL
    s = pg_connect()

    # Setup: students with duplicate scores for tie-breaking tests
    query(s, "DROP TABLE students")
    query(s, "CREATE TABLE students (id INT, name VARCHAR(50), score INT, grade VARCHAR(5))")
    query(s, "INSERT INTO students VALUES (1, 'Alice', 90, 'A')")
    query(s, "INSERT INTO students VALUES (2, 'Bob', 90, 'A')")
    query(s, "INSERT INTO students VALUES (3, 'Charlie', 85, 'B')")
    query(s, "INSERT INTO students VALUES (4, 'Diana', 85, 'B')")
    query(s, "INSERT INTO students VALUES (5, 'Eve', 95, 'A')")
    query(s, "INSERT INTO students VALUES (6, 'Frank', 85, 'C')")

    print("=== Multi-column ORDER BY Tests ===")

    # 1. ORDER BY two columns, both ASC (default)
    run_test("two cols ASC ASC", s,
        "SELECT name, score FROM students ORDER BY score, name",
        expected_names=["Charlie", "Diana", "Frank", "Alice", "Bob", "Eve"])

    # 2. ORDER BY score DESC, name ASC
    run_test("score DESC, name ASC", s,
        "SELECT name, score FROM students ORDER BY score DESC, name ASC",
        expected_names=["Eve", "Alice", "Bob", "Charlie", "Diana", "Frank"])

    # 3. ORDER BY score ASC, name DESC
    run_test("score ASC, name DESC", s,
        "SELECT name, score FROM students ORDER BY score ASC, name DESC",
        expected_names=["Frank", "Diana", "Charlie", "Bob", "Alice", "Eve"])

    # 4. ORDER BY score DESC, name DESC
    run_test("both DESC", s,
        "SELECT name, score FROM students ORDER BY score DESC, name DESC",
        expected_names=["Eve", "Bob", "Alice", "Frank", "Diana", "Charlie"])

    # 5. ORDER BY grade, score, name
    run_test("three columns", s,
        "SELECT name, grade, score FROM students ORDER BY grade, score, name",
        expected_names=["Alice", "Bob", "Eve", "Charlie", "Diana", "Frank"])

    # 6. ORDER BY grade DESC, score ASC, name ASC
    run_test("three cols mixed directions", s,
        "SELECT name, grade, score FROM students ORDER BY grade DESC, score ASC, name ASC",
        expected_names=["Frank", "Charlie", "Diana", "Alice", "Bob", "Eve"])

    # 7. Single column ORDER BY still works
    run_test("single column still works", s,
        "SELECT name, score FROM students ORDER BY name",
        expected_names=["Alice", "Bob", "Charlie", "Diana", "Eve", "Frank"])

    # 8. ORDER BY with LIMIT
    run_test("multi ORDER BY + LIMIT", s,
        "SELECT name, score FROM students ORDER BY score DESC, name ASC LIMIT 3",
        expected_names=["Eve", "Alice", "Bob"])

    # 9. ORDER BY with WHERE
    run_test("multi ORDER BY + WHERE", s,
        "SELECT name, score FROM students WHERE score >= 90 ORDER BY score DESC, name ASC",
        expected_names=["Eve", "Alice", "Bob"])

    # 10. ORDER BY with DISTINCT
    run_test("multi ORDER BY + DISTINCT", s,
        "SELECT DISTINCT grade FROM students ORDER BY grade",
        expected_rows=[["A"], ["B"], ["C"]])

    # Cleanup
    query(s, "DROP TABLE students")
    s.close()

    print(f"\n{'='*40}")
    print(f"Results: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    if FAIL > 0:
        sys.exit(1)

if __name__ == "__main__":
    main()
