"""
Tests for Column Aliases (AS keyword) in EvolutionDB.
Covers: column aliases, expression aliases, aggregate aliases,
        string function aliases, tableless SELECT aliases.
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
    current_row = None
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

def run_test(s, name, sql, expected_cols=None, expected_rows=None, check_col_only=False):
    global PASS, FAIL
    cols, rows, err = query(s, sql)
    ok = True
    if err:
        print(f"  FAIL {name}: error={err}")
        FAIL += 1
        return
    if expected_cols is not None:
        if cols != expected_cols:
            print(f"  FAIL {name}: expected cols={expected_cols}, got cols={cols}")
            ok = False
    if not check_col_only and expected_rows is not None:
        if rows != expected_rows:
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

    # Setup
    query(s, "DROP TABLE students")
    query(s, "CREATE TABLE students (id INT, name VARCHAR(50), score INT, grade VARCHAR(5))")
    query(s, "INSERT INTO students VALUES (1, 'Alice', 90, 'A')")
    query(s, "INSERT INTO students VALUES (2, 'Bob', 85, 'B')")
    query(s, "INSERT INTO students VALUES (3, 'Charlie', 90, 'A')")
    query(s, "INSERT INTO students VALUES (4, 'Diana', 75, 'C')")

    print("=== Column Alias Tests ===")

    # 1. Simple column alias with AS
    run_test(s, "column AS alias",
        "SELECT name AS student_name FROM students WHERE id = 1",
        expected_cols=["student_name"], expected_rows=[["Alice"]])

    # 2. Multiple column aliases
    run_test(s, "multiple column aliases",
        "SELECT name AS student_name, score AS points FROM students WHERE id = 1",
        expected_cols=["student_name", "points"], expected_rows=[["Alice", "90"]])

    # 3. Mix of aliased and non-aliased columns
    run_test(s, "mixed alias and plain",
        "SELECT id, name AS student_name FROM students WHERE id = 1",
        expected_cols=["id", "student_name"], expected_rows=[["1", "Alice"]])

    # 4. All columns aliased
    run_test(s, "all columns aliased",
        "SELECT id AS student_id, name AS student_name, score AS points, grade AS letter FROM students WHERE id = 1",
        expected_cols=["student_id", "student_name", "points", "letter"],
        expected_rows=[["1", "Alice", "90", "A"]])

    print("\n=== Expression Alias Tests ===")

    # 5. Arithmetic expression alias (tableless)
    run_test(s, "arithmetic expr alias",
        "SELECT 1+2 AS result",
        expected_cols=["result"], expected_rows=[["3"]])

    # 6. Integer literal alias
    run_test(s, "literal alias",
        "SELECT 1 AS one",
        expected_cols=["one"], expected_rows=[["1"]])

    # 7. String literal alias
    run_test(s, "string literal alias",
        "SELECT 'hello' AS greeting",
        expected_cols=["greeting"], expected_rows=[["hello"]])

    # 8. Complex expression alias
    run_test(s, "complex expr alias",
        "SELECT 10 * 5 + 2 AS calc",
        expected_cols=["calc"], expected_rows=[["52"]])

    print("\n=== Aggregate Alias Tests ===")

    # 9. COUNT(*) alias
    run_test(s, "COUNT(*) alias",
        "SELECT COUNT(*) AS total FROM students",
        expected_cols=["total"], expected_rows=[["4"]])

    # 10. SUM alias
    run_test(s, "SUM alias",
        "SELECT SUM(score) AS total_score FROM students",
        expected_cols=["total_score"], expected_rows=[["340"]])

    # 11. AVG alias
    run_test(s, "AVG alias",
        "SELECT AVG(score) AS average FROM students",
        expected_cols=["average"], expected_rows=[["85"]])

    # 12. MIN/MAX alias
    run_test(s, "MIN alias",
        "SELECT MIN(score) AS lowest FROM students",
        expected_cols=["lowest"], expected_rows=[["75"]])

    run_test(s, "MAX alias",
        "SELECT MAX(score) AS highest FROM students",
        expected_cols=["highest"], expected_rows=[["90"]])

    print("\n=== String Function Alias Tests ===")

    # 14. UPPER alias
    run_test(s, "UPPER alias",
        "SELECT UPPER(name) AS upper_name FROM students WHERE id = 1",
        expected_cols=["upper_name"], expected_rows=[["ALICE"]])

    # 15. LOWER alias
    run_test(s, "LOWER alias",
        "SELECT LOWER(name) AS lower_name FROM students WHERE id = 1",
        expected_cols=["lower_name"], expected_rows=[["alice"]])

    # 16. LENGTH alias
    run_test(s, "LENGTH alias",
        "SELECT LENGTH(name) AS name_len FROM students WHERE id = 1",
        expected_cols=["name_len"], expected_rows=[["5"]])

    print("\n=== GROUP BY + Alias Tests ===")

    # 17. GROUP BY with aggregate alias
    run_test(s, "GROUP BY + COUNT alias",
        "SELECT grade AS letter, COUNT(*) AS cnt FROM students GROUP BY grade ORDER BY cnt DESC",
        expected_cols=["letter", "cnt"], check_col_only=True)

    print("\n=== CASE + Alias Tests ===")

    # 18. CASE expression with alias
    run_test(s, "CASE alias",
        "SELECT CASE WHEN score >= 90 THEN 'high' ELSE 'low' END AS level FROM students WHERE id = 1",
        expected_cols=["level"], expected_rows=[["high"]])

    print("\n=== Alias with WHERE/ORDER BY ===")

    # 19. Alias doesn't affect WHERE (WHERE uses original column name)
    run_test(s, "alias + WHERE on original name",
        "SELECT name AS student_name, score AS points FROM students WHERE score > 80 ORDER BY score",
        expected_cols=["student_name", "points"])

    # 20. Multiple rows with alias
    run_test(s, "alias with multiple rows",
        "SELECT name AS student, grade AS letter FROM students ORDER BY name",
        expected_cols=["student", "letter"])

    # Cleanup
    query(s, "DROP TABLE students")
    s.close()

    print(f"\n{'='*40}")
    print(f"Results: {PASS} passed, {FAIL} failed out of {PASS+FAIL}")
    if FAIL > 0:
        sys.exit(1)

if __name__ == "__main__":
    main()
