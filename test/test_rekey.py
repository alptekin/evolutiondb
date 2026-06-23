"""
test_rekey.py — at-rest key rotation (evosql-server --rekey and --rotate-key).

Drives the locally built binary (no Docker).

Passphrase rotation (`--rekey`, header-only re-wrap of the same DEK):
  1. after A->B the data is intact and decrypts under the NEW passphrase,
  2. the OLD passphrase no longer opens the database,
  3. `--rekey` refuses on a plaintext (unencrypted) database,
  4. `--rekey` refuses when EVOSQL_ENCRYPTION_KEY_NEW is not set.

Data-key rotation (`--rotate-key`, new DEK + full re-encryption, same passphrase):
  5. the wrapped DEK and on-disk ciphertext change, yet the data still reads
     back under the same passphrase,
  6. `--rotate-key` refuses on a plaintext database.

Run directly:  python tests/test_rekey.py
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

PG_PORT = int(os.environ.get("REKEY_PG_PORT", "5467"))
EVO_PORT = int(os.environ.get("REKEY_EVO_PORT", "9990"))
USER, PASS, DB = "admin", "admin", "evosql"

KEY_A = "rekey-old-passphrase-aaaaaaaa"
KEY_B = "rekey-new-passphrase-bbbbbbbb"

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
    deadline = time.time() + timeout
    while time.time() < deadline:
        try:
            socket.create_connection(("127.0.0.1", port), timeout=0.5).close()
            return True
        except OSError:
            time.sleep(0.15)
    return False


def _env(data_dir, enc_key=None, enc_key_new=None):
    env = dict(os.environ)
    env.update({
        "EVOSQL_USER_NAME": USER, "EVOSQL_PASSWORD": PASS,
        "EVOSQL_DATA_DIR": data_dir,
        "EVOSQL_CHECKPOINT_INTERVAL_SEC": "0",
    })
    for k, v in (("EVOSQL_ENCRYPTION_KEY", enc_key),
                 ("EVOSQL_ENCRYPTION_KEY_NEW", enc_key_new)):
        if v:
            env[k] = v
        else:
            env.pop(k, None)
    return env


def _start(data_dir, enc_key=None):
    p = subprocess.Popen(
        [SERVER, "--pg-port", str(PG_PORT), "--evo-port", str(EVO_PORT)],
        env=_env(data_dir, enc_key),
        stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    ok = _wait_port(PG_PORT)
    if ok:
        time.sleep(0.4)
    return p, ok


def _stop(p):
    p.send_signal(signal.SIGTERM)
    try:
        p.wait(timeout=20)
    except subprocess.TimeoutExpired:
        p.kill(); p.wait()


def _rekey(data_dir, enc_key, enc_key_new):
    return subprocess.run(
        [SERVER, "--rekey"],
        env=_env(data_dir, enc_key, enc_key_new),
        capture_output=True, timeout=30)


def _connect(retries=10):
    last = None
    for _ in range(retries):
        try:
            return pg_conn(host="127.0.0.1", port=PG_PORT,
                           user=USER, password=PASS, database=DB)
        except Exception as e:
            last = e; time.sleep(0.25)
    raise RuntimeError(f"could not connect: {last}")


def _exec(sock, sql):
    _c, _r, err, _t = simple_query(sock, sql)
    if err:
        raise RuntimeError(f"query error on {sql!r}: {err}")


def _seed_encrypted_db(data_dir):
    p, ok = _start(data_dir, enc_key=KEY_A)
    assert ok, "encrypted server failed to start with KEY_A"
    try:
        c = _connect()
        _exec(c, "DROP TABLE IF EXISTS rk_t")
        _exec(c, "CREATE TABLE rk_t (id INT PRIMARY KEY, val VARCHAR(50))")
        for i in range(1, 6):
            _exec(c, f"INSERT INTO rk_t VALUES ({i}, 'secret_{i}')")
        c.close()
    finally:
        _stop(p)


def _rotate_key(data_dir, enc_key):
    return subprocess.run(
        [SERVER, "--rotate-key"],
        env=_env(data_dir, enc_key),
        capture_output=True, timeout=60)


def _header_wrapped_dek(data_dir):
    """Read the 48-byte wrapped DEK from the FileHeader (offset 161)."""
    with open(os.path.join(data_dir, "evosql.db"), "rb") as f:
        f.seek(161)
        return f.read(48)


def _ciphertext_after_page0(data_dir):
    """Raw bytes of the data region (everything past the plaintext page 0)."""
    with open(os.path.join(data_dir, "evosql.db"), "rb") as f:
        f.seek(4096)
        return f.read()


def _read_rows(enc_key, data_dir):
    """Start with enc_key and return the rk_t rows, or raise if unreadable."""
    p, ok = _start(data_dir, enc_key=enc_key)
    if not ok:
        # server refused to start (e.g. wrong key path) — surface to caller
        try:
            _, errb = p.communicate(timeout=5)
        except subprocess.TimeoutExpired:
            p.kill(); _, errb = p.communicate()
        raise RuntimeError(f"server did not start: {errb.decode(errors='replace')[:300]}")
    try:
        c = _connect()
        _c, rows, err, _t = simple_query(c, "SELECT id, val FROM rk_t ORDER BY id")
        c.close()
        if err:
            raise RuntimeError(f"query error: {err}")
        return rows
    finally:
        _stop(p)


def test_rotate_then_new_key_reads_data():
    d = tempfile.mkdtemp(prefix="evorekey_")
    try:
        _seed_encrypted_db(d)

        r = _rekey(d, enc_key=KEY_A, enc_key_new=KEY_B)
        assert r.returncode == 0, \
            f"rekey A->B should succeed, exit={r.returncode}\n{r.stderr.decode(errors='replace')}"

        rows = _read_rows(KEY_B, d)
        ids = sorted(int(x[0]) for x in rows)
        assert ids == [1, 2, 3, 4, 5], f"expected ids 1..5 under new key, got {ids}"
        # values must decrypt correctly, not return ciphertext garbage
        vals = {int(x[0]): x[1] for x in rows}
        assert vals[1] == "secret_1", f"decrypted value mismatch under new key: {vals.get(1)!r}"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_old_key_no_longer_opens_db():
    d = tempfile.mkdtemp(prefix="evorekey_old_")
    try:
        _seed_encrypted_db(d)
        r = _rekey(d, enc_key=KEY_A, enc_key_new=KEY_B)
        assert r.returncode == 0, "rekey should succeed"

        # The OLD passphrase must not yield the original plaintext rows. Either
        # the server refuses to start, or it cannot return the seeded data.
        leaked = False
        try:
            rows = _read_rows(KEY_A, d)
            vals = {int(x[0]): x[1] for x in rows if x and x[0] is not None}
            leaked = (vals.get(1) == "secret_1")
        except Exception:
            leaked = False        # refused to start / query failed = good
        assert not leaked, "old passphrase still decrypted the data after rotation"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_rekey_refuses_plaintext_db():
    d = tempfile.mkdtemp(prefix="evorekey_plain_")
    try:
        # Seed an UNENCRYPTED database (no EVOSQL_ENCRYPTION_KEY).
        p, ok = _start(d, enc_key=None)
        assert ok, "plaintext server failed to start"
        try:
            c = _connect()
            _exec(c, "CREATE TABLE rk_t (id INT PRIMARY KEY)")
            c.close()
        finally:
            _stop(p)

        r = _rekey(d, enc_key=None, enc_key_new=KEY_B)
        assert r.returncode != 0, "rekey must refuse on a plaintext database"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_rekey_refuses_without_new_key():
    d = tempfile.mkdtemp(prefix="evorekey_nonew_")
    try:
        _seed_encrypted_db(d)
        r = _rekey(d, enc_key=KEY_A, enc_key_new=None)  # no EVOSQL_ENCRYPTION_KEY_NEW
        assert r.returncode != 0, "rekey must refuse without EVOSQL_ENCRYPTION_KEY_NEW"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_rotate_key_reencrypts_and_data_survives():
    """Full DEK rotation: a new data key re-encrypts every page; the wrapped
    DEK and the on-disk ciphertext must change, and the data must still read
    back under the SAME passphrase (the new DEK is wrapped under it)."""
    d = tempfile.mkdtemp(prefix="evorotate_")
    try:
        _seed_encrypted_db(d)
        wrapped_before = _header_wrapped_dek(d)
        cipher_before = _ciphertext_after_page0(d)

        r = _rotate_key(d, enc_key=KEY_A)
        assert r.returncode == 0, \
            f"--rotate-key should succeed, exit={r.returncode}\n{r.stderr.decode(errors='replace')}"

        wrapped_after = _header_wrapped_dek(d)
        cipher_after = _ciphertext_after_page0(d)
        assert wrapped_after != wrapped_before, "wrapped DEK must change after rotation"
        assert len(cipher_after) == len(cipher_before), "file size must be unchanged"
        assert cipher_after != cipher_before, "page ciphertext must change after re-encryption"

        # Same passphrase still opens the DB (new DEK wrapped under it) and the
        # data decrypts correctly.
        rows = _read_rows(KEY_A, d)
        ids = sorted(int(x[0]) for x in rows)
        assert ids == [1, 2, 3, 4, 5], f"expected ids 1..5 after DEK rotation, got {ids}"
        vals = {int(x[0]): x[1] for x in rows}
        assert vals[3] == "secret_3", f"decrypted value mismatch after rotation: {vals.get(3)!r}"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_rotate_key_refuses_plaintext_db():
    d = tempfile.mkdtemp(prefix="evorotate_plain_")
    try:
        p, ok = _start(d, enc_key=None)
        assert ok, "plaintext server failed to start"
        try:
            c = _connect()
            _exec(c, "CREATE TABLE rk_t (id INT PRIMARY KEY)")
            c.close()
        finally:
            _stop(p)

        r = _rotate_key(d, enc_key=None)
        assert r.returncode != 0, "--rotate-key must refuse on a plaintext database"
    finally:
        shutil.rmtree(d, ignore_errors=True)


if __name__ == "__main__":
    print("=== Encryption Passphrase Rotation (--rekey) Tests ===")
    if not os.path.exists(SERVER):
        print(f"  SKIP: server binary not built at {SERVER} (run: make adaptor TLS=1)")
        sys.exit(0)

    run_test("rotate_then_new_key_reads_data", test_rotate_then_new_key_reads_data)
    run_test("old_key_no_longer_opens_db", test_old_key_no_longer_opens_db)
    run_test("rekey_refuses_plaintext_db", test_rekey_refuses_plaintext_db)
    run_test("rekey_refuses_without_new_key", test_rekey_refuses_without_new_key)
    run_test("rotate_key_reencrypts_and_data_survives",
             test_rotate_key_reencrypts_and_data_survives)
    run_test("rotate_key_refuses_plaintext_db", test_rotate_key_refuses_plaintext_db)

    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
