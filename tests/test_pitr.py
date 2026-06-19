"""
test_pitr.py — point-in-time recovery roundtrip for `evosql-server --recover-to`.

Unlike the other tests this one does NOT use a shared/Docker server: PITR is an
offline operation, so the test owns the full lifecycle. It spawns the locally
built adaptor/evosql-server with a private temp data dir and EVOSQL_WAL_ARCHIVE
on, writes two batches of rows separated by a captured wall-clock timestamp,
stops the server cleanly (a clean shutdown archives the WAL), runs
`evosql-server --recover-to <T>` to rewind the database, restarts, and checks
what survived.

Scenarios:
  1. recover to a point BETWEEN the batches  -> only batch 1 survives
  2. recover to a point AFTER both batches    -> both batches survive
  3. recover to a point BEFORE DB creation     -> aborts, original left intact
  4. encrypted DB roundtrip                    -> rewinds + decrypts correctly
  5. torn archive tail                         -> aborts, original left intact

It also guards the WAL CRC-32 correctness fix (the archive integrity PITR
relies on): hard-crash recovery round-trips the corrected CRC, and a patched
version-1 WAL header is migrated to version 2 with data intact.

Run directly (no Docker):  python tests/test_pitr.py
Skips cleanly (exit 0) if the server binary has not been built.
"""

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

# Private ports so the test never clashes with a running dev/Docker server.
PG_PORT = int(os.environ.get("PITR_PG_PORT", "5466"))
EVO_PORT = int(os.environ.get("PITR_EVO_PORT", "9989"))
USER, PASS, DB = "admin", "admin", "evosql"  # "evosql" is the default bootstrap DB

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


# -- server lifecycle -------------------------------------------------------

def _wait_port(port, timeout=20):
    deadline = time.time() + timeout
    while time.time() < deadline:
        try:
            socket.create_connection(("127.0.0.1", port), timeout=0.5).close()
            return True
        except OSError:
            time.sleep(0.15)
    return False


def _server_env(data_dir, enc_key=None):
    env = dict(os.environ)
    env.update({
        "EVOSQL_USER_NAME": USER,
        "EVOSQL_PASSWORD": PASS,
        "EVOSQL_DATA_DIR": data_dir,
        "EVOSQL_WAL_ARCHIVE": "1",          # PITR needs the archive
        "EVOSQL_CHECKPOINT_INTERVAL_SEC": "0",  # no background checkpoint races
    })
    if enc_key:
        env["EVOSQL_ENCRYPTION_KEY"] = enc_key   # TDE: encrypt the data file + WAL
    else:
        env.pop("EVOSQL_ENCRYPTION_KEY", None)
    return env


def _start(data_dir, enc_key=None):
    p = subprocess.Popen(
        [SERVER, "--pg-port", str(PG_PORT), "--evo-port", str(EVO_PORT)],
        env=_server_env(data_dir, enc_key),
        stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    if not _wait_port(PG_PORT):
        try:
            _, err = p.communicate(timeout=5)
        except subprocess.TimeoutExpired:
            p.kill(); _, err = p.communicate()
        raise RuntimeError(f"server did not start: {err.decode(errors='replace')[:600]}")
    # Give the bootstrap (admin user + default DB) a beat to settle.
    time.sleep(0.4)
    return p


def _stop(p):
    """Clean shutdown (SIGTERM -> server_cleanup -> wal_shutdown archives WAL)."""
    p.send_signal(signal.SIGTERM)
    try:
        p.wait(timeout=20)
    except subprocess.TimeoutExpired:
        p.kill(); p.wait()


def _crash(p):
    """Hard crash (SIGKILL): no clean shutdown, so the live WAL keeps its
    committed-but-uncheckpointed tail for crash recovery to replay."""
    p.send_signal(signal.SIGKILL)
    p.wait(timeout=20)


def _recover_to(data_dir, target_us, enc_key=None):
    """Run the offline rewind and return the CompletedProcess."""
    return subprocess.run(
        [SERVER, "--recover-to", str(target_us)],
        env=_server_env(data_dir, enc_key), capture_output=True, timeout=30)


# -- query helpers (fresh connection each call; statements auto-commit) -----

def _connect(retries=10):
    last = None
    for _ in range(retries):
        try:
            return pg_conn(host="127.0.0.1", port=PG_PORT,
                           user=USER, password=PASS, database=DB)
        except Exception as e:        # auth/bootstrap may lag the open port
            last = e; time.sleep(0.25)
    raise RuntimeError(f"could not connect: {last}")


def _exec(sock, sql):
    _cols, _rows, err, _tag = simple_query(sock, sql)
    if err:
        raise RuntimeError(f"query error on {sql!r}: {err}")


def _count(sock):
    _cols, rows, err, _tag = simple_query(sock, "SELECT COUNT(*) FROM pitr_t")
    if err:
        raise RuntimeError(f"count error: {err}")
    return int(rows[0][0])


def _now_us():
    return int(time.time() * 1_000_000)


def _write_two_batches(data_dir, enc_key=None):
    """Start server, write batch1 (ids 1..5), capture t_mid, write batch2
    (ids 6..10), capture t_after, stop cleanly. Returns (t_mid, t_after)."""
    p = _start(data_dir, enc_key)
    try:
        c = _connect()
        _exec(c, "DROP TABLE IF EXISTS pitr_t")
        _exec(c, "CREATE TABLE pitr_t (id INT PRIMARY KEY, val VARCHAR(50))")
        for i in range(1, 6):
            _exec(c, f"INSERT INTO pitr_t VALUES ({i}, 'batch1_{i}')")
        c.close()

        time.sleep(0.3)
        t_mid = _now_us()          # strictly between the two batches' commits
        time.sleep(0.3)

        c = _connect()
        for i in range(6, 11):
            _exec(c, f"INSERT INTO pitr_t VALUES ({i}, 'batch2_{i}')")
        c.close()

        time.sleep(0.3)
        t_after = _now_us()        # after every commit, before shutdown
    finally:
        _stop(p)
    return t_mid, t_after


# -- scenarios --------------------------------------------------------------

def test_recover_between_batches_keeps_only_batch1():
    d = tempfile.mkdtemp(prefix="evopitr_")
    try:
        t_mid, _ = _write_two_batches(d)

        r = _recover_to(d, t_mid)
        assert r.returncode == 0, \
            f"recover-to should succeed, exit={r.returncode}\n{r.stderr.decode(errors='replace')}"

        p = _start(d)
        try:
            c = _connect()
            n = _count(c)
            assert n == 5, f"expected 5 rows (batch 1 only) after rewind, got {n}"
            # the batch-2 ids must be gone
            _cols, rows, err, _ = simple_query(c, "SELECT id FROM pitr_t ORDER BY id")
            ids = sorted(int(x[0]) for x in rows)
            assert ids == [1, 2, 3, 4, 5], f"expected ids 1..5, got {ids}"
            c.close()
        finally:
            _stop(p)
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_recover_after_both_keeps_all():
    d = tempfile.mkdtemp(prefix="evopitr_")
    try:
        _, t_after = _write_two_batches(d)

        r = _recover_to(d, t_after)
        assert r.returncode == 0, \
            f"recover-to should succeed, exit={r.returncode}\n{r.stderr.decode(errors='replace')}"

        p = _start(d)
        try:
            c = _connect()
            n = _count(c)
            assert n == 10, f"expected all 10 rows recovering past both batches, got {n}"
            c.close()
        finally:
            _stop(p)
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_recover_before_creation_aborts_and_keeps_original():
    d = tempfile.mkdtemp(prefix="evopitr_")
    try:
        t_mid, _ = _write_two_batches(d)

        # A target well before the archive window (epoch ~ 1us) has no data to
        # rebuild from: recovery must refuse and leave the data file intact.
        r = _recover_to(d, 1)
        assert r.returncode != 0, "recover-to before archive start must fail"

        p = _start(d)
        try:
            c = _connect()
            n = _count(c)
            assert n == 10, f"aborted recovery must leave original intact (10 rows), got {n}"
            c.close()
        finally:
            _stop(p)
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_recover_encrypted_db_keeps_only_batch1():
    """TDE roundtrip: with EVOSQL_ENCRYPTION_KEY set the data file + WAL are
    encrypted, so recovery must re-encrypt the replayed pages (page 0 stays
    plaintext). Exercises the pcrypt path in wal_restore_to_timestamp."""
    key = "pitr-tde-test-passphrase-1234567890"
    d = tempfile.mkdtemp(prefix="evopitr_enc_")
    try:
        t_mid, _ = _write_two_batches(d, enc_key=key)

        r = _recover_to(d, t_mid, enc_key=key)
        assert r.returncode == 0, \
            f"encrypted recover-to should succeed, exit={r.returncode}\n{r.stderr.decode(errors='replace')}"

        p = _start(d, enc_key=key)
        try:
            c = _connect()
            n = _count(c)
            assert n == 5, f"expected 5 rows (batch 1 only) after encrypted rewind, got {n}"
            # the recovered rows must decrypt correctly, not return garbage
            _cols, rows, err, _ = simple_query(
                c, "SELECT val FROM pitr_t WHERE id = 1")
            assert not err and rows and rows[0][0] == "batch1_1", \
                f"decrypted value mismatch after TDE rewind: {rows}"
            c.close()
        finally:
            _stop(p)
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_recover_torn_archive_aborts_and_keeps_original():
    """A torn archive tail (e.g. a short write during a checkpoint) must make
    recovery ABORT rather than silently swap in a half-rewound database. The
    original data file must survive intact."""
    d = tempfile.mkdtemp(prefix="evopitr_torn_")
    try:
        _, t_after = _write_two_batches(d)

        # Simulate a torn record at the tail: append a few stray bytes (fewer
        # than a whole record header), so the archive reader detects a torn
        # stream instead of a clean end-of-data.
        arch = os.path.join(d, "evosql.wal.archive")
        with open(arch, "ab") as f:
            f.write(b"\xff\xff\xff\xff\xff\xff\xff")

        # Target past everything so replay actually reaches the torn tail
        # (a target between batches would cleanly stop before it).
        r = _recover_to(d, t_after)
        assert r.returncode != 0, \
            "recovery must abort on a torn archive, not report success"

        p = _start(d)
        try:
            c = _connect()
            n = _count(c)
            assert n == 10, f"aborted recovery must leave original intact (10 rows), got {n}"
            c.close()
        finally:
            _stop(p)
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_crash_recovery_roundtrip_new_crc():
    """Hard-crash recovery exercises replay_one_record with the corrected
    (version-2) CRC: rows committed before a SIGKILL must replay back on
    restart. This is the regression guard that the WAL CRC change round-trips
    through the actual crash path, not just clean shutdown."""
    d = tempfile.mkdtemp(prefix="evopitr_crash_")
    try:
        p = _start(d)
        c = _connect()
        _exec(c, "DROP TABLE IF EXISTS pitr_t")
        _exec(c, "CREATE TABLE pitr_t (id INT PRIMARY KEY, val VARCHAR(50))")
        for i in range(1, 9):
            _exec(c, f"INSERT INTO pitr_t VALUES ({i}, 'crash_{i}')")
        c.close()
        time.sleep(0.4)          # let the commit fsync the WAL
        _crash(p)                # SIGKILL — no clean shutdown

        p = _start(d)            # restart -> crash recovery replays the WAL
        try:
            c = _connect()
            n = _count(c)
            assert n == 8, f"crash recovery must replay all 8 committed rows, got {n}"
            c.close()
        finally:
            _stop(p)
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_wal_v1_header_is_migrated():
    """A version-1 WAL (legacy-CRC era) with no pending records must be migrated
    to version 2 on startup, with data intact. Simulates upgrading from an old
    binary after a clean shutdown by patching the WAL header version 2 -> 1."""
    import struct
    d = tempfile.mkdtemp(prefix="evopitr_mig_")
    try:
        p = _start(d)
        c = _connect()
        _exec(c, "DROP TABLE IF EXISTS pitr_t")
        _exec(c, "CREATE TABLE pitr_t (id INT PRIMARY KEY, val VARCHAR(50))")
        for i in range(1, 6):
            _exec(c, f"INSERT INTO pitr_t VALUES ({i}, 'v1_{i}')")
        c.close()
        _stop(p)                 # clean stop -> WAL truncated to its header, version 2

        # Patch the WAL header version field (uint16 at byte offset 4: after the
        # 4-byte magic) from 2 back to 1, as an old binary would have left it.
        wal = os.path.join(d, "evosql.wal")
        with open(wal, "r+b") as f:
            f.seek(4); ver = struct.unpack("<H", f.read(2))[0]
            assert ver == 2, f"expected fresh WAL at version 2, got {ver}"
            f.seek(4); f.write(struct.pack("<H", 1))

        p = _start(d)            # startup must migrate v1 -> v2 and keep data
        try:
            c = _connect()
            n = _count(c)
            assert n == 5, f"data must survive v1->v2 migration, got {n} rows"
            c.close()
        finally:
            _stop(p)

        with open(wal, "rb") as f:
            f.seek(4); ver = struct.unpack("<H", f.read(2))[0]
        assert ver == 2, f"WAL header must be migrated back to version 2, got {ver}"
    finally:
        shutil.rmtree(d, ignore_errors=True)


if __name__ == "__main__":
    print("=== Point-In-Time Recovery (--recover-to) Tests ===")
    if not os.path.exists(SERVER):
        print(f"  SKIP: server binary not built at {SERVER} "
              f"(run: make adaptor TLS=1)")
        sys.exit(0)

    run_test("recover_between_batches_keeps_only_batch1",
             test_recover_between_batches_keeps_only_batch1)
    run_test("recover_after_both_keeps_all",
             test_recover_after_both_keeps_all)
    run_test("recover_before_creation_aborts_and_keeps_original",
             test_recover_before_creation_aborts_and_keeps_original)
    run_test("recover_encrypted_db_keeps_only_batch1",
             test_recover_encrypted_db_keeps_only_batch1)
    run_test("recover_torn_archive_aborts_and_keeps_original",
             test_recover_torn_archive_aborts_and_keeps_original)
    run_test("crash_recovery_roundtrip_new_crc",
             test_crash_recovery_roundtrip_new_crc)
    run_test("wal_v1_header_is_migrated",
             test_wal_v1_header_is_migrated)

    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
