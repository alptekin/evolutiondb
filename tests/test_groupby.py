#!/usr/bin/env python3
"""
GROUP BY + HAVING tests for EvolutionDB.
"""

import socket, struct, time, sys

PG_HOST = "127.0.0.1"
PG_PORT = 5433

# -- wire helpers --
def pg_startup(sock):
    user = b"test\x00"
    db   = b"testdb\x00"
    payload = b"\x00\x03\x00\x00" + b"user\x00" + user + b"database\x00" + db + b"\x00"
    length  = 4 + len(payload)
    sock.sendall(struct.pack("!I", length) + payload)
    while True:
        tag = sock.recv(1)
        if not tag:
            raise ConnectionError("connection closed during startup")
        ln = struct.unpack("!I", sock.recv(4))[0] - 4
        body = sock.recv(ln) if ln > 0 else b""
        if tag == b"Z":
            break

def pg_query(sock, sql):
    time.sleep(0.15)
    msg = sql.encode() + b"\x00"
    sock.sendall(b"Q" + struct.pack("!I", 4 + len(msg)) + msg)

    columns, rows, status = [], [], None
    while True:
        tag = sock.recv(1)
        if not tag:
            break
        ln  = struct.unpack("!I", sock.recv(4))[0] - 4
        body = b""
        while len(body) < ln:
            body += sock.recv(ln - len(body))

        if tag == b"T":
            ncol = struct.unpack("!H", body[:2])[0]
            off = 2
            for _ in range(ncol):
                end = body.index(b"\x00", off)
                columns.append(body[off:end].decode())
                off = end + 1 + 18
        elif tag == b"D":
            ncol = struct.unpack("!H", body[:2])[0]
            off, row = 2, []
            for _ in range(ncol):
                flen = struct.unpack("!i", body[off:off+4])[0]
                off += 4
                if flen < 0:
                    row.append(None)
                else:
                    row.append(body[off:off+flen].decode())
                    off += flen
            rows.append(row)
        elif tag == b"C":
            status = body[:-1].decode()
        elif tag == b"Z":
            break
        elif tag == b"E":
            parts = body.split(b"\x00")
            for p in parts:
                if p.startswith(b"M"):
                    print(f"  SERVER ERROR: {p[1:].decode()}")
            break
    return {"columns": columns, "rows": rows, "status": status}

# -- test infra --
passed = failed = 0

def check(test_name, result, expected_rows, col_check=None, sort_rows=False):
    global passed, failed
    actual = result["rows"]

    if sort_rows:
        actual = sorted(actual, key=lambda r: str(r))
        expected_rows = sorted(expected_rows, key=lambda r: str(r))

    ok = True
    if len(actual) != len(expected_rows):
        ok = False
    else:
        for a, e in zip(actual, expected_rows):
            if len(a) != len(e):
                ok = False; break
            for av, ev in zip(a, e):
                if ev is None:
                    if av is not None:
                        ok = False; break
                else:
                    if av != str(ev):
                        ok = False; break
            if not ok:
                break

    if col_check and result["columns"] != col_check:
        ok = False

    if ok:
        passed += 1
        print(f"  PASS {test_name}")
    else:
        failed += 1
        print(f"  FAIL {test_name}")
        print(f"     expected: {expected_rows}")
        print(f"     actual  : {actual}")
        if col_check:
            print(f"     exp_cols: {col_check}")
            print(f"     act_cols: {result['columns']}")

# -- main --
def main():
    global passed, failed
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.connect((PG_HOST, PG_PORT))
    pg_startup(sock)

    # Setup
    pg_query(sock, "DROP TABLE orders")
    pg_query(sock, "DROP TABLE employees")
    pg_query(sock, "CREATE TABLE orders (id INT, customer VARCHAR(50), product VARCHAR(50), amount INT, city VARCHAR(50))")
    pg_query(sock, "INSERT INTO orders VALUES (1, 'Alice', 'Laptop', 1200, 'Istanbul')")
    pg_query(sock, "INSERT INTO orders VALUES (2, 'Bob', 'Phone', 800, 'Ankara')")
    pg_query(sock, "INSERT INTO orders VALUES (3, 'Alice', 'Tablet', 500, 'Istanbul')")
    pg_query(sock, "INSERT INTO orders VALUES (4, 'Charlie', 'Laptop', 1300, 'Izmir')")
    pg_query(sock, "INSERT INTO orders VALUES (5, 'Bob', 'Laptop', 1100, 'Ankara')")
    pg_query(sock, "INSERT INTO orders VALUES (6, 'Alice', 'Phone', 900, 'Istanbul')")
    pg_query(sock, "INSERT INTO orders VALUES (7, 'Diana', 'Phone', 750, 'Ankara')")
    pg_query(sock, "INSERT INTO orders VALUES (8, 'Charlie', 'Tablet', 450, 'Izmir')")

    print("\n=== GROUP BY Basic Tests ===")

    r = pg_query(sock, "SELECT city, COUNT(*) FROM orders GROUP BY city")
    check("GROUP BY single column COUNT", r,
          [["Istanbul", "3"], ["Ankara", "3"], ["Izmir", "2"]], sort_rows=True)

    r = pg_query(sock, "SELECT customer, SUM(amount) FROM orders GROUP BY customer")
    check("GROUP BY with SUM", r,
          [["Alice", "2600"], ["Bob", "1900"], ["Charlie", "1750"], ["Diana", "750"]],
          sort_rows=True)

    r = pg_query(sock, "SELECT customer, AVG(amount) FROM orders GROUP BY customer")
    check("GROUP BY with AVG", r,
          [["Alice", "866.6667"], ["Bob", "950"], ["Charlie", "875"], ["Diana", "750"]],
          sort_rows=True)

    r = pg_query(sock, "SELECT customer, MIN(amount), MAX(amount) FROM orders GROUP BY customer")
    check("GROUP BY with MIN/MAX", r,
          [["Alice", "500", "1200"], ["Bob", "800", "1100"],
           ["Charlie", "450", "1300"], ["Diana", "750", "750"]],
          sort_rows=True)

    r = pg_query(sock, "SELECT product, COUNT(*), SUM(amount) FROM orders GROUP BY product")
    check("GROUP BY product", r,
          [["Laptop", "3", "3600"], ["Phone", "3", "2450"], ["Tablet", "2", "950"]],
          sort_rows=True)

    print("\n=== GROUP BY with WHERE ===")

    r = pg_query(sock, "SELECT customer, COUNT(*) FROM orders WHERE amount > 700 GROUP BY customer")
    check("GROUP BY with WHERE filter", r,
          [["Alice", "2"], ["Bob", "2"], ["Charlie", "1"], ["Diana", "1"]],
          sort_rows=True)

    r = pg_query(sock, "SELECT city, SUM(amount) FROM orders WHERE product = 'Laptop' GROUP BY city")
    check("GROUP BY with WHERE eq", r,
          [["Istanbul", "1200"], ["Ankara", "1100"], ["Izmir", "1300"]],
          sort_rows=True)

    print("\n=== HAVING Tests ===")

    r = pg_query(sock, "SELECT customer, COUNT(*) FROM orders GROUP BY customer HAVING COUNT(*) > 1")
    check("HAVING COUNT(*) > 1", r,
          [["Alice", "3"], ["Bob", "2"], ["Charlie", "2"]],
          sort_rows=True)

    r = pg_query(sock, "SELECT customer, SUM(amount) FROM orders GROUP BY customer HAVING SUM(amount) > 1800")
    check("HAVING SUM > threshold", r,
          [["Alice", "2600"], ["Bob", "1900"]],
          sort_rows=True)

    r = pg_query(sock, "SELECT city, COUNT(*) FROM orders GROUP BY city HAVING COUNT(*) >= 3")
    check("HAVING COUNT(*) >= 3", r,
          [["Istanbul", "3"], ["Ankara", "3"]],
          sort_rows=True)

    r = pg_query(sock, "SELECT product, AVG(amount) FROM orders GROUP BY product HAVING AVG(amount) > 800")
    check("HAVING AVG > value", r,
          [["Laptop", "1200"], ["Phone", "816.6667"]],
          sort_rows=True)

    print("\n=== GROUP BY with WHERE + HAVING ===")

    r = pg_query(sock, "SELECT customer, COUNT(*), SUM(amount) FROM orders WHERE amount >= 500 GROUP BY customer HAVING COUNT(*) >= 2")
    check("WHERE + GROUP BY + HAVING", r,
          [["Alice", "3", "2600"], ["Bob", "2", "1900"]],
          sort_rows=True)

    print("\n=== GROUP BY Multiple Columns ===")

    r = pg_query(sock, "SELECT city, product, COUNT(*) FROM orders GROUP BY city, product")
    check("GROUP BY two columns", r,
          [["Ankara", "Laptop", "1"], ["Ankara", "Phone", "2"],
           ["Istanbul", "Laptop", "1"], ["Istanbul", "Phone", "1"],
           ["Istanbul", "Tablet", "1"], ["Izmir", "Laptop", "1"],
           ["Izmir", "Tablet", "1"]],
          sort_rows=True)

    print("\n=== GROUP BY with LIMIT ===")

    r = pg_query(sock, "SELECT customer, COUNT(*) FROM orders GROUP BY customer LIMIT 2")
    # Should return first 2 groups (order may vary, just check count)
    if len(r["rows"]) == 2:
        passed += 1
        print("  PASS GROUP BY with LIMIT")
    else:
        failed += 1
        print(f"  FAIL GROUP BY with LIMIT: expected 2 rows, got {len(r['rows'])}")

    print("\n=== Aggregate without GROUP BY (regression) ===")

    r = pg_query(sock, "SELECT COUNT(*) FROM orders")
    check("COUNT(*) without GROUP BY", r, [["8"]])

    r = pg_query(sock, "SELECT SUM(amount) FROM orders")
    check("SUM without GROUP BY", r, [["7000"]])

    r = pg_query(sock, "SELECT COUNT(*), SUM(amount), MIN(amount), MAX(amount) FROM orders")
    check("All aggregates without GROUP BY", r, [["8", "7000", "450", "1300"]])

    # HAVING with aggregate NOT in SELECT
    r = pg_query(sock, "SELECT customer FROM orders GROUP BY customer HAVING COUNT(*) > 2")
    check("HAVING aggregate not in SELECT", r, [["Alice"]])

    # Cleanup
    pg_query(sock, "DROP TABLE orders")

    print(f"\n{'='*50}")
    print(f"Results: {passed}/{passed+failed} passed")
    if failed == 0:
        print("All tests passed!")
    print(f"{'='*50}")

    sock.close()
    sys.exit(0 if failed == 0 else 1)

if __name__ == "__main__":
    main()
