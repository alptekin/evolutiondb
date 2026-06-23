"""
test_information_schema_keys — the introspection views a migration tool needs:
information_schema.key_column_usage (PK + UNIQUE constraint columns) and
pg_indexes (secondary indexes + their CREATE INDEX defs).

Drives the locally built engine over the PG wire. These synthetic catalog views
ignore the SELECT projection (return all of the view's columns) and don't filter
by WHERE, so the test indexes by column position and filters by table in Python.

Run:  python tests/test_information_schema_keys.py   (skips if no binary)
"""
from __future__ import annotations

import os
import sys
import time
import socket
import signal
import shutil
import tempfile
import subprocess

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from pg_helpers import conn, simple_query                                   # noqa: E402

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SERVER = os.path.join(ROOT, "adaptor", "evosql-server")
PG_PORT = int(os.environ.get("ISK_PG_PORT", "5493"))
EVO_PORT = int(os.environ.get("ISK_EVO_PORT", "9993"))
passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def _wait(port, t=20):
    end = time.time() + t
    while time.time() < end:
        try:
            socket.create_connection(("127.0.0.1", port), 0.5).close(); return True
        except OSError:
            time.sleep(0.12)
    return False


def _x(c, sql):
    _cols, rows, err, _t = simple_query(c, sql)
    if err:
        raise RuntimeError(f"{sql!r} -> {err}")
    return rows


def test_views():
    d = tempfile.mkdtemp(prefix="evo_isk_")
    p = subprocess.Popen(
        [SERVER, "--pg-port", str(PG_PORT), "--evo-port", str(EVO_PORT)],
        env=dict(os.environ, EVOSQL_USER_NAME="admin", EVOSQL_PASSWORD="admin",
                 EVOSQL_DATA_DIR=d, EVOSQL_CHECKPOINT_INTERVAL_SEC="0"),
        stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    try:
        assert _wait(PG_PORT), "engine did not start"
        time.sleep(0.3)
        c = conn(host="127.0.0.1", port=PG_PORT, user="admin", password="admin",
                 database="evosql")
        _x(c, "CREATE TABLE t (id INT PRIMARY KEY, v VARCHAR(20), w VARCHAR(20))")
        _x(c, "CREATE INDEX i_v ON t (v)")
        _x(c, "CREATE UNIQUE INDEX i_uw ON t (w)")    # unique, different column
        _x(c, "CREATE TABLE c2 (a INT, b INT, PRIMARY KEY (a, b))")

        # key_column_usage: PK columns with ordinal (view cols:
        # constraint_name, table_name, column_name, ordinal_position)
        kcu = _x(c, "SELECT * FROM information_schema.key_column_usage")
        t_pk = sorted((str(r[3]), str(r[2])) for r in kcu
                      if str(r[1]) == "t" and str(r[0]).endswith("_pkey"))
        assert t_pk == [("1", "id")], f"t pk wrong: {t_pk}"
        c2_pk = sorted((str(r[3]), str(r[2])) for r in kcu
                       if str(r[1]) == "c2" and str(r[0]).endswith("_pkey"))
        assert c2_pk == [("1", "a"), ("2", "b")], f"c2 composite pk wrong: {c2_pk}"

        # pg_indexes: secondary indexes with their CREATE INDEX def (PK absent)
        idx = _x(c, "SELECT * FROM pg_indexes")
        defs = {str(r[2]): str(r[4]) for r in idx if str(r[1]) == "t"}
        assert "i_v" in defs and "CREATE INDEX i_v ON t (v)" == defs["i_v"], defs
        assert "i_uw" in defs and "UNIQUE" in defs["i_uw"], defs
        # the PK is NOT listed as an index
        assert not any("pkey" in n.lower() for n in defs), f"pk leaked into pg_indexes: {defs}"
        c.close()
    finally:
        if p.poll() is None:
            p.send_signal(signal.SIGTERM)
            try:
                p.wait(timeout=10)
            except subprocess.TimeoutExpired:
                p.kill(); p.wait()
        shutil.rmtree(d, ignore_errors=True)


if __name__ == "__main__":
    print("=== information_schema.key_column_usage + pg_indexes ===")
    if not os.path.exists(SERVER):
        print(f"  SKIP: engine binary not built at {SERVER}")
        sys.exit(0)
    run("views", test_views)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
