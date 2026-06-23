"""
test_replication_local.py — two-process WAL streaming replication, NO Docker.

The existing test_replication.py's multi-node cases need docker-compose and are
skipped otherwise. This drives the locally built binary as TWO processes
(primary + replica) on private ports, so the streaming TRANSPORT layer is
regression-tested without Docker.

What it asserts (the reliable transport layer):
  - a replica connects and registers as an ACTIVE slot on the primary,
  - WAL streams: confirmed_lsn advances and catches up to the last written LSN
    after the primary commits (proves stream + receiver-apply + ACK round-trip),
  - a replica is read-only (rejects DDL/DML).

What it deliberately does NOT assert: that the replica can QUERY the streamed
rows. Restart-consistent, MVCC-visible hot-standby reads are v2 scope (ADR-001):
v1 streams + applies page images at the transport level, but the replica's
MVCC/catalog visibility of replayed rows is not yet coherent. See the probe in
this file's history for the diagnosis (live + post-restart row counts lag).

Run directly:  python tests/test_replication_local.py
Skips cleanly (exit 0) if the server binary has not been built.
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

sys.path.insert(0, os.path.dirname(__file__))
from pg_helpers import conn as pg_conn, simple_query

ROOT = os.path.dirname(os.path.dirname(os.path.abspath(__file__)))
SERVER = os.path.join(ROOT, "adaptor", "evosql-server")

P_PG, P_EVO, REPL_PORT = 5472, 9972, 9968
R_PG, R_EVO = 5473, 9973
USER, PASS, DB = "admin", "admin", "evosql"

passed = 0
failed = 0


def run_test(name, fn):
    global passed, failed
    try:
        fn()
        print(f"  PASS: {name}")
        passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}")
        failed += 1


def _wait_port(port, timeout=20):
    end = time.time() + timeout
    while time.time() < end:
        try:
            socket.create_connection(("127.0.0.1", port), 0.5).close()
            return True
        except OSError:
            time.sleep(0.15)
    return False


def _env(data_dir):
    e = dict(os.environ)
    e.update({"EVOSQL_USER_NAME": USER, "EVOSQL_PASSWORD": PASS,
              "EVOSQL_DATA_DIR": data_dir, "EVOSQL_CHECKPOINT_INTERVAL_SEC": "0"})
    return e


def _start(data_dir, pg, evo, extra):
    p = subprocess.Popen(
        [SERVER, "--pg-port", str(pg), "--evo-port", str(evo)] + extra,
        env=_env(data_dir), stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if not _wait_port(pg):
        try:
            _, err = p.communicate(timeout=5)
        except subprocess.TimeoutExpired:
            p.kill(); _, err = p.communicate()
        raise RuntimeError(f"server :{pg} did not start: {err.decode(errors='replace')[:400]}")
    time.sleep(0.4)
    return p


def _stop(p):
    if p and p.poll() is None:
        p.send_signal(signal.SIGTERM)
        try:
            p.wait(timeout=15)
        except subprocess.TimeoutExpired:
            p.kill(); p.wait()


def _q(port, sql):
    c = pg_conn(host="127.0.0.1", port=port, user=USER, password=PASS, database=DB)
    cols, rows, err, tag = simple_query(c, sql)
    c.close()
    return cols, rows, err


def _status(port):
    """Return the primary's active replica slots from SHOW REPLICATION STATUS:
    list of (replica_id, my_lsn, confirmed_lsn)."""
    _c, rows, err = _q(port, "SHOW REPLICATION STATUS")
    if err:
        raise RuntimeError(f"SHOW REPLICATION STATUS error: {err}")
    return [(r[1], int(r[2]), int(r[3])) for r in rows if r[5] == "t" and r[1]]


def _bootstrap_primary_and_replica():
    """Seed a primary, base-backup it into a replica dir, restart the primary,
    start the replica pointing at it. Returns (prim, repl, dir_P, dir_R)."""
    P = tempfile.mkdtemp(prefix="evorepl_P_")
    R = tempfile.mkdtemp(prefix="evorepl_R_")
    prim = _start(P, P_PG, P_EVO, ["--replication-port", str(REPL_PORT), "--role", "primary"])
    _q(P_PG, "DROP TABLE IF EXISTS rep_t")
    _q(P_PG, "CREATE TABLE rep_t (id INT PRIMARY KEY, v VARCHAR(30))")
    for i in range(1, 6):
        _q(P_PG, f"INSERT INTO rep_t VALUES ({i}, 'seed_{i}')")
    _stop(prim)  # clean stop so the base-backup is consistent

    bb = subprocess.run([SERVER, "--base-backup", R], env=_env(P),
                        capture_output=True, timeout=30)
    if bb.returncode != 0:
        raise RuntimeError(f"base-backup failed: {bb.stderr.decode(errors='replace')[:300]}")

    prim = _start(P, P_PG, P_EVO, ["--replication-port", str(REPL_PORT), "--role", "primary"])
    repl = _start(R, R_PG, R_EVO, ["--role", "replica", "--replica", f"127.0.0.1:{REPL_PORT}"])
    time.sleep(1.0)  # let the handshake register the slot
    return prim, repl, P, R


def test_replica_connects_and_streams():
    prim = repl = P = R = None
    try:
        prim, repl, P, R = _bootstrap_primary_and_replica()

        # 1. the replica must register as an active slot on the primary
        slots = []
        for _ in range(40):
            slots = _status(P_PG)
            if slots:
                break
            time.sleep(0.25)
        assert slots, "replica never registered as an active slot on the primary"

        # 2. write on the primary; the slot's confirmed_lsn must advance and
        #    catch up to the last written LSN (my_lsn is next_lsn = last+1)
        for i in range(6, 16):
            _q(P_PG, f"INSERT INTO rep_t VALUES ({i}, 'live_{i}')")
        caught = False
        last = None
        for _ in range(80):
            slots = _status(P_PG)
            if slots and all(conf >= my - 1 for (_rid, my, conf) in slots):
                caught = True
                break
            last = slots
            time.sleep(0.25)
        assert caught, f"replica did not catch up to the primary's LSN: {last}"
    finally:
        _stop(repl); _stop(prim)
        shutil.rmtree(P or "", ignore_errors=True)
        shutil.rmtree(R or "", ignore_errors=True)


def test_replica_is_read_only():
    prim = repl = P = R = None
    try:
        prim, repl, P, R = _bootstrap_primary_and_replica()
        # a replica must reject writes (PostgreSQL SQLSTATE 25006 read-only TX)
        _c, _rows, err = _q(R_PG, "CREATE TABLE should_fail (id INT)")
        assert err is not None, "replica accepted a CREATE TABLE (should be read-only)"
        assert "25006" in err or "replica" in err.lower() or "read" in err.lower(), \
            f"unexpected error (wanted read-only rejection): {err}"
    finally:
        _stop(repl); _stop(prim)
        shutil.rmtree(P or "", ignore_errors=True)
        shutil.rmtree(R or "", ignore_errors=True)


if __name__ == "__main__":
    print("=== Two-process WAL streaming replication (no Docker) ===")
    if not os.path.exists(SERVER):
        print(f"  SKIP: server binary not built at {SERVER} (run: make adaptor TLS=1)")
        sys.exit(0)

    run_test("replica_connects_and_streams", test_replica_connects_and_streams)
    run_test("replica_is_read_only", test_replica_is_read_only)

    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
