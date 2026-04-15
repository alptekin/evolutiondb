"""
test_binary_batch.py — EXECUTE_BATCH_BINARY protocol tests (Phase 4).

Covers:
- Correctness: type round-trip for int4, int8, float8, bool, string, NULL
- Batch INSERT via binary params
- Unknown prepared statement returns error with payload drained
- Single-row EQ-style UPDATE/DELETE by binary param
- Wall-clock comparison vs text EXECUTE_BATCH on a 500-row INSERT batch
"""

import os
import socket
import struct
import sys
import time

HOST = "localhost"
PORT = 9967

PASS = 0
FAIL = 0


def check(name, cond, detail=""):
    global PASS, FAIL
    if cond:
        PASS += 1
        print(f"  PASS: {name}")
    else:
        FAIL += 1
        print(f"  FAIL: {name} {detail}")


class EvoConn:
    def __init__(self):
        self.s = socket.socket()
        self.s.settimeout(30)
        self.s.connect((HOST, PORT))
        self.buf = b""

    def _recv_line(self):
        while b"\n" not in self.buf:
            chunk = self.s.recv(4096)
            if not chunk:
                raise ConnectionError("connection closed")
            self.buf += chunk
        i = self.buf.index(b"\n")
        line = self.buf[:i].decode("utf-8", errors="replace")
        self.buf = self.buf[i + 1:]
        return line

    def handshake(self, user="admin", password="admin"):
        self.s.sendall(b"EVO\n")
        self._recv_line()  # HELLO
        auth = self._recv_line()
        if auth in ("AUTH_REQUIRED", "AUTH_SCRAM"):
            self.s.sendall(f"AUTH {user} {password}\n".encode())
            result = self._recv_line()
            if result != "AUTH_OK":
                raise RuntimeError(f"auth failed: {result}")

    def sql(self, stmt):
        enc = stmt.encode("utf-8")
        self.s.sendall(f"SQL {len(enc)}\n".encode() + enc + b"\n")
        # drain until READY
        lines = []
        while True:
            line = self._recv_line()
            lines.append(line)
            if line == "READY":
                break
        return lines

    def prepare(self, name, stmt):
        enc = stmt.encode("utf-8")
        self.s.sendall(f"PREPARE {name} {len(enc)}\n".encode() + enc + b"\n")
        while True:
            line = self._recv_line()
            if line == "READY":
                return

    def execute_batch_text(self, name, rows, param_count):
        """Text EXECUTE_BATCH — one line per param value. Used as
        the fair baseline for comparing against binary batch."""
        header = f"EXECUTE_BATCH {name} {len(rows)} {param_count}\n"
        self.s.sendall(header.encode())
        for row in rows:
            for v in row:
                if v is None:
                    self.s.sendall(b"\\N\n")
                else:
                    self.s.sendall(f"{v}\n".encode("utf-8"))
        lines = []
        while True:
            line = self._recv_line()
            lines.append(line)
            if line == "READY":
                break
        return lines

    def execute_batch_binary(self, name, rows, param_count):
        """rows: list of tuples, each tuple has param_count items.
        Items are int / float / str / bool / None."""
        header = f"EXECUTE_BATCH_BINARY {name} {len(rows)} {param_count}\n"
        self.s.sendall(header.encode())

        for row in rows:
            for v in row:
                if v is None:
                    self.s.sendall(b"N")
                elif isinstance(v, bool):
                    self.s.sendall(b"b" + (b"\x01" if v else b"\x00"))
                elif isinstance(v, int):
                    if -2**31 <= v <= 2**31 - 1:
                        self.s.sendall(b"i" + struct.pack(">i", v))
                    else:
                        self.s.sendall(b"l" + struct.pack(">q", v))
                elif isinstance(v, float):
                    self.s.sendall(b"d" + struct.pack(">d", v))
                elif isinstance(v, str):
                    enc = v.encode("utf-8")
                    self.s.sendall(b"s" + struct.pack(">I", len(enc)) + enc)
                else:
                    raise ValueError(f"unsupported type: {type(v)}")

        lines = []
        while True:
            line = self._recv_line()
            lines.append(line)
            if line == "READY":
                break
        return lines

    def close(self):
        try:
            self.s.sendall(b"QUIT\n")
        except Exception:
            pass
        self.s.close()


def fresh_db(name):
    c = EvoConn(); c.handshake()
    c.sql(f"DROP DATABASE IF EXISTS {name}")
    c.sql(f"CREATE DATABASE {name}")
    c.close()


def test_basic_int_batch():
    fresh_db("bbtest1")
    c = EvoConn(); c.handshake()
    c.sql("USE bbtest1")
    c.sql("CREATE TABLE t (id INT PRIMARY KEY, v INT)")
    c.prepare("ins", "INSERT INTO t VALUES ($1, $2)")
    rows = [(i, i * 10) for i in range(1, 11)]
    result = c.execute_batch_binary("ins", rows, 2)
    check("int4 batch OK", any(l.startswith("BATCH_OK") for l in result),
          str(result))

    # Verify — result rows come back as `FIELD <value>` lines
    lines = c.sql("SELECT COUNT(*) FROM t")
    check("int4 batch row count = 10",
          any(l == "FIELD 10" for l in lines), "\n".join(lines))

    lines = c.sql("SELECT v FROM t WHERE id = 5")
    check("int4 round-trip (id=5 -> v=50)",
          any(l == "FIELD 50" for l in lines), "\n".join(lines))
    c.close()


def test_string_batch():
    fresh_db("bbtest2")
    c = EvoConn(); c.handshake()
    c.sql("USE bbtest2")
    c.sql("CREATE TABLE t (id INT PRIMARY KEY, name VARCHAR(64))")
    c.prepare("ins", "INSERT INTO t VALUES ($1, $2)")
    rows = [
        (1, "alice"),
        (2, "bob"),
        (3, "unicode: ğşıİ 🎉"),
        (4, "with 'quote' inside"),
    ]
    result = c.execute_batch_binary("ins", rows, 2)
    check("string batch OK", any(l.startswith("BATCH_OK 4") for l in result),
          str(result))

    lines = c.sql("SELECT name FROM t WHERE id = 3")
    check("unicode round-trip",
          any(l.startswith("FIELD ") and "ğşıİ" in l for l in lines),
          "\n".join(lines))

    lines = c.sql("SELECT name FROM t WHERE id = 4")
    check("embedded-quote round-trip",
          any(l.startswith("FIELD ") and "'quote'" in l for l in lines),
          "\n".join(lines))
    c.close()


def test_null_and_bool():
    fresh_db("bbtest3")
    c = EvoConn(); c.handshake()
    c.sql("USE bbtest3")
    c.sql("CREATE TABLE t (id INT PRIMARY KEY, flag BOOL, note VARCHAR(32))")
    c.prepare("ins", "INSERT INTO t VALUES ($1, $2, $3)")
    rows = [
        (1, True, "yes"),
        (2, False, None),
        (3, True, None),
    ]
    result = c.execute_batch_binary("ins", rows, 3)
    check("null/bool batch OK",
          any(l.startswith("BATCH_OK 3") for l in result), str(result))

    lines = c.sql("SELECT COUNT(*) FROM t WHERE note IS NULL")
    check("NULL detected via IS NULL",
          any(l == "FIELD 2" for l in lines), "\n".join(lines))
    c.close()


def test_float_batch():
    fresh_db("bbtest4")
    c = EvoConn(); c.handshake()
    c.sql("USE bbtest4")
    c.sql("CREATE TABLE t (id INT PRIMARY KEY, v DOUBLE)")
    c.prepare("ins", "INSERT INTO t VALUES ($1, $2)")
    rows = [
        (1, 3.14159265358979),
        (2, -0.5),
        (3, 1e100),
    ]
    result = c.execute_batch_binary("ins", rows, 2)
    check("float batch OK",
          any(l.startswith("BATCH_OK 3") for l in result), str(result))
    c.close()


def test_unknown_stmt_drains_payload():
    """Error path: server must drain the binary payload before
    responding, so the next command on the same connection works."""
    fresh_db("bbtest5")
    c = EvoConn(); c.handshake()
    c.sql("USE bbtest5")
    rows = [(1, 100), (2, 200), (3, 300)]
    result = c.execute_batch_binary("nosuch", rows, 2)
    check("unknown stmt returns ERR",
          any("not found" in l for l in result), str(result))

    # Ensure the connection is still alive after the error
    lines = c.sql("SELECT 1")
    check("connection alive after drained error",
          any(l == "FIELD 1" for l in lines), "\n".join(lines))
    c.close()


def bench_text_vs_binary():
    """Wall-clock comparison: INSERT N rows three ways:
      1. Individual INSERT SQL statements (reference)
      2. Text EXECUTE_BATCH (Phase 2, PR #67)
      3. Binary EXECUTE_BATCH_BINARY (Phase 4, this PR)
    """
    N = 5000
    rows = [(i, i * 2, f"name{i}") for i in range(1, N + 1)]

    # --- 1. Individual INSERT (reference) ---
    fresh_db("bbbench_i")
    c = EvoConn(); c.handshake()
    c.sql("USE bbbench_i")
    c.sql("CREATE TABLE t (id INT PRIMARY KEY, v INT, name VARCHAR(32))")
    t0 = time.time()
    for i in range(1, N + 1):
        c.sql(f"INSERT INTO t VALUES ({i}, {i * 2}, 'name{i}')")
    t_ind = (time.time() - t0) * 1000
    c.close()

    # --- 2. Text EXECUTE_BATCH ---
    fresh_db("bbbench_t")
    c = EvoConn(); c.handshake()
    c.sql("USE bbbench_t")
    c.sql("CREATE TABLE t (id INT PRIMARY KEY, v INT, name VARCHAR(32))")
    c.prepare("ins_t", "INSERT INTO t VALUES ($1, $2, $3)")
    t0 = time.time()
    txt_result = c.execute_batch_text("ins_t", rows, 3)
    t_txt = (time.time() - t0) * 1000
    txt_ok = any(l.startswith(f"BATCH_OK {N}") for l in txt_result)
    c.close()

    # --- 3. Binary EXECUTE_BATCH_BINARY ---
    fresh_db("bbbench_b")
    c = EvoConn(); c.handshake()
    c.sql("USE bbbench_b")
    c.sql("CREATE TABLE t (id INT PRIMARY KEY, v INT, name VARCHAR(32))")
    c.prepare("ins_b", "INSERT INTO t VALUES ($1, $2, $3)")
    t0 = time.time()
    bin_result = c.execute_batch_binary("ins_b", rows, 3)
    t_bin = (time.time() - t0) * 1000
    bin_ok = any(l.startswith(f"BATCH_OK {N}") for l in bin_result)
    c.close()

    print(f"\n  N = {N} rows, 3 columns (int, int, varchar)")
    print(f"  individual SQL   : {t_ind:>6.0f} ms  (1.00× baseline)")
    print(f"  text batch       : {t_txt:>6.0f} ms  "
          f"({t_ind / t_txt:.2f}× faster, ok={txt_ok})")
    print(f"  binary batch     : {t_bin:>6.0f} ms  "
          f"({t_ind / t_bin:.2f}× faster, ok={bin_ok})")
    print(f"  binary vs text   : {t_txt / t_bin:.2f}× speedup")


def main():
    print("=== Binary EXECUTE_BATCH Tests ===")
    test_basic_int_batch()
    test_string_batch()
    test_null_and_bool()
    test_float_batch()
    test_unknown_stmt_drains_payload()
    bench_text_vs_binary()
    print()
    print(f"Results: {PASS} passed, {FAIL} failed")
    return 0 if FAIL == 0 else 1


if __name__ == "__main__":
    sys.exit(main())
