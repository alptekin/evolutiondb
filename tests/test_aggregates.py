#!/usr/bin/env python3
"""
SUM / AVG / MIN / MAX aggregate function tests for EvolutionDB.
"""

import socket, struct, time, sys

PG_HOST = "127.0.0.1"
PG_PORT = 5433

# ── wire helpers ──────────────────────────────────────────────────
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

        if tag == b"T":                          # RowDescription
            ncol = struct.unpack("!H", body[:2])[0]
            off = 2
            for _ in range(ncol):
                end = body.index(b"\x00", off)
                columns.append(body[off:end].decode())
                off = end + 1 + 18               # skip 18 bytes of field metadata
        elif tag == b"D":                        # DataRow
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
        elif tag == b"C":                        # CommandComplete
            status = body[:-1].decode()
        elif tag == b"Z":                        # ReadyForQuery
            break
        elif tag == b"E":                        # ErrorResponse
            parts = body.split(b"\x00")
            for p in parts:
                if p.startswith(b"M"):
                    print(f"  SERVER ERROR: {p[1:].decode()}")
            break
    return {"columns": columns, "rows": rows, "status": status}

# ── test infra ────────────────────────────────────────────────────
passed = failed = 0

def check(test_name, result, expected_rows, col_check=None):
    global passed, failed
    actual = result["rows"]
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
        print(f"  ✅ {test_name}")
    else:
        failed += 1
        print(f"  ❌ {test_name}")
        print(f"     expected: {expected_rows}")
        print(f"     actual  : {actual}")
        if col_check:
            print(f"     exp_cols: {col_check}")
            print(f"     act_cols: {result['columns']}")

# ── main ──────────────────────────────────────────────────────────
def main():
    global passed, failed
    sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
    sock.connect((PG_HOST, PG_PORT))
    pg_startup(sock)

    # Setup: create and populate a test table
    pg_query(sock, "DROP TABLE agg_test")
    pg_query(sock, "DROP TABLE empty_agg")
    pg_query(sock, "CREATE TABLE agg_test (id INT, name VARCHAR(50), score INT, grade FLOAT)")
    pg_query(sock, "INSERT INTO agg_test VALUES (1, 'Alice', 90, 3.8)")
    pg_query(sock, "INSERT INTO agg_test VALUES (2, 'Bob', 75, 3.2)")
    pg_query(sock, "INSERT INTO agg_test VALUES (3, 'Charlie', 88, 3.6)")
    pg_query(sock, "INSERT INTO agg_test VALUES (4, 'Diana', 95, 3.9)")
    pg_query(sock, "INSERT INTO agg_test VALUES (5, 'Eve', 60, 2.8)")

    print("\n=== SUM Tests ===")

    r = pg_query(sock, "SELECT SUM(score) FROM agg_test")
    check("SUM(score) basic", r, [["408"]])

    r = pg_query(sock, "SELECT SUM(id) FROM agg_test")
    check("SUM(id)", r, [["15"]])

    r = pg_query(sock, "SELECT SUM(score) FROM agg_test WHERE score >= 80")
    check("SUM with WHERE", r, [["273"]])

    print("\n=== AVG Tests ===")

    r = pg_query(sock, "SELECT AVG(score) FROM agg_test")
    check("AVG(score) basic", r, [["81.6000"]])   # 408/5 = 81.6

    r = pg_query(sock, "SELECT AVG(id) FROM agg_test")
    check("AVG(id)", r, [["3"]])  # 15/5 = 3

    r = pg_query(sock, "SELECT AVG(score) FROM agg_test WHERE score >= 80")
    check("AVG with WHERE", r, [["91"]])  # 273/3 = 91

    print("\n=== MIN Tests ===")

    r = pg_query(sock, "SELECT MIN(score) FROM agg_test")
    check("MIN(score) basic", r, [["60"]])

    r = pg_query(sock, "SELECT MIN(name) FROM agg_test")
    check("MIN(name) string", r, [["Alice"]])

    r = pg_query(sock, "SELECT MIN(score) FROM agg_test WHERE id > 2")
    check("MIN with WHERE", r, [["60"]])

    print("\n=== MAX Tests ===")

    r = pg_query(sock, "SELECT MAX(score) FROM agg_test")
    check("MAX(score) basic", r, [["95"]])

    r = pg_query(sock, "SELECT MAX(name) FROM agg_test")
    check("MAX(name) string", r, [["Eve"]])

    r = pg_query(sock, "SELECT MAX(score) FROM agg_test WHERE id <= 3")
    check("MAX with WHERE", r, [["90"]])

    print("\n=== Combined Aggregate Tests ===")

    r = pg_query(sock, "SELECT COUNT(*), SUM(score), AVG(score), MIN(score), MAX(score) FROM agg_test")
    check("All aggregates together", r, [["5", "408", "81.6000", "60", "95"]])

    r = pg_query(sock, "SELECT MIN(score), MAX(score) FROM agg_test WHERE score BETWEEN 70 AND 90")
    check("MIN/MAX with BETWEEN", r, [["75", "90"]])

    r = pg_query(sock, "SELECT COUNT(*), SUM(score) FROM agg_test WHERE name LIKE '%e%'")
    check("COUNT+SUM with LIKE", r, [["3", "238"]])  # Alice=90, Charlie=88, Eve=60

    print("\n=== Edge Cases ===")

    # Empty table
    pg_query(sock, "CREATE TABLE empty_agg (val INT)")
    r = pg_query(sock, "SELECT SUM(val) FROM empty_agg")
    check("SUM on empty table", r, [[None]])

    r = pg_query(sock, "SELECT AVG(val) FROM empty_agg")
    check("AVG on empty table", r, [[None]])

    r = pg_query(sock, "SELECT MIN(val) FROM empty_agg")
    check("MIN on empty table", r, [[None]])

    r = pg_query(sock, "SELECT MAX(val) FROM empty_agg")
    check("MAX on empty table", r, [[None]])

    r = pg_query(sock, "SELECT COUNT(*), SUM(val), MIN(val), MAX(val) FROM empty_agg")
    check("All aggs on empty table", r, [["0", None, None, None]])

    # Cleanup
    pg_query(sock, "DROP TABLE agg_test")
    pg_query(sock, "DROP TABLE empty_agg")

    print(f"\n{'='*50}")
    print(f"Results: {passed} passed, {failed} failed out of {passed+failed}")
    print(f"{'='*50}")

    sock.close()
    sys.exit(0 if failed == 0 else 1)

if __name__ == "__main__":
    main()
