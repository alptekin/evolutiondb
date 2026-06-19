"""
test_kms.py — at-rest passphrase from an external key command (KMS hook).

The TDE passphrase can come from EVOSQL_ENCRYPTION_KEY_CMD — a command whose
stdout is the passphrase — instead of the plaintext EVOSQL_ENCRYPTION_KEY env
var. That is the integration point for an external secret store / KMS. This
test drives the local binary (no Docker) and verifies:

  Key-command (script):
    1. a DB created with EVOSQL_ENCRYPTION_KEY_CMD opens again with the same
       command and the data decrypts,
    2. a command yielding the WRONG passphrase cannot open it,
    3. the plaintext env var with the SAME passphrase opens it too (the command
       just supplies the passphrase bytes — same envelope underneath).

  Real Vault (skipped if the `vault` binary is absent):
    4. a DB whose passphrase is fetched via `vault kv get` from a local
       `vault server -dev` opens and decrypts.

Run directly:  python tests/test_kms.py
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
PG_PORT, EVO_PORT = 5474, 9974
USER, PASS, DB = "admin", "admin", "evosql"
SECRET = "vault-managed-passphrase-9f8e7d"

passed = 0
failed = 0


def run_test(name, fn):
    global passed, failed
    try:
        fn()
        print(f"  PASS: {name}")
        passed += 1
    except _Skip as s:
        print(f"  SKIP: {name} -- {s}")
    except Exception as e:
        print(f"  FAIL: {name} -- {e}")
        failed += 1


class _Skip(Exception):
    pass


def _wait_port(port, timeout=20):
    end = time.time() + timeout
    while time.time() < end:
        try:
            socket.create_connection(("127.0.0.1", port), 0.5).close()
            return True
        except OSError:
            time.sleep(0.15)
    return False


def _env(data_dir, crypto=None):
    e = dict(os.environ)
    e.update({"EVOSQL_USER_NAME": USER, "EVOSQL_PASSWORD": PASS,
              "EVOSQL_DATA_DIR": data_dir, "EVOSQL_CHECKPOINT_INTERVAL_SEC": "0"})
    # start clean — only what `crypto` specifies drives encryption
    for k in ("EVOSQL_ENCRYPTION_KEY", "EVOSQL_ENCRYPTION_KEY_CMD"):
        e.pop(k, None)
    if crypto:
        e.update(crypto)
    return e


def _start(data_dir, crypto=None):
    p = subprocess.Popen(
        [SERVER, "--pg-port", str(PG_PORT), "--evo-port", str(EVO_PORT)],
        env=_env(data_dir, crypto), stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    ok = _wait_port(PG_PORT)
    if ok:
        time.sleep(0.4)
    return p, ok


def _stop(p):
    if p and p.poll() is None:
        p.send_signal(signal.SIGTERM)
        try:
            p.wait(timeout=15)
        except subprocess.TimeoutExpired:
            p.kill(); p.wait()


def _connect(retries=10):
    last = None
    for _ in range(retries):
        try:
            return pg_conn(host="127.0.0.1", port=PG_PORT, user=USER,
                           password=PASS, database=DB)
        except Exception as e:
            last = e; time.sleep(0.25)
    raise RuntimeError(f"could not connect: {last}")


def _exec(sock, sql):
    _c, _r, err, _t = simple_query(sock, sql)
    if err:
        raise RuntimeError(f"query error on {sql!r}: {err}")


def _seed(data_dir, crypto):
    p, ok = _start(data_dir, crypto)
    assert ok, "server failed to start while seeding (key command resolved?)"
    try:
        c = _connect()
        _exec(c, "DROP TABLE IF EXISTS kms_t")
        _exec(c, "CREATE TABLE kms_t (id INT PRIMARY KEY, v VARCHAR(40))")
        for i in range(1, 6):
            _exec(c, f"INSERT INTO kms_t VALUES ({i}, 'kms_{i}')")
        c.close()
    finally:
        _stop(p)


def _read_first(data_dir, crypto):
    """Start with `crypto` config; return the value of row id=1, or raise if the
    server can't start (e.g. wrong/missing key)."""
    p, ok = _start(data_dir, crypto)
    if not ok:
        try:
            _, errb = p.communicate(timeout=5)
        except subprocess.TimeoutExpired:
            p.kill(); _, errb = p.communicate()
        raise RuntimeError(f"server did not start: {errb.decode(errors='replace')[:300]}")
    try:
        c = _connect()
        _c, rows, err, _t = simple_query(c, "SELECT v FROM kms_t WHERE id = 1")
        c.close()
        if err:
            raise RuntimeError(f"query error: {err}")
        return rows[0][0] if rows else None
    finally:
        _stop(p)


# A key command that prints the passphrase with no trailing processing issues.
def _cmd(secret):
    return f'printf %s {secret!r}'


def test_keycmd_script_roundtrip():
    d = tempfile.mkdtemp(prefix="evokms_")
    try:
        cmd_env = {"EVOSQL_ENCRYPTION_KEY_CMD": _cmd(SECRET)}
        _seed(d, cmd_env)
        # 1. reopen with the same command -> data decrypts
        assert _read_first(d, cmd_env) == "kms_1", "key-command DB did not reopen/decrypt"
        # 3. plaintext env var with the SAME passphrase also opens it
        assert _read_first(d, {"EVOSQL_ENCRYPTION_KEY": SECRET}) == "kms_1", \
            "same passphrase via env var did not open the key-command DB"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_keycmd_wrong_passphrase_fails():
    d = tempfile.mkdtemp(prefix="evokms_wrong_")
    try:
        _seed(d, {"EVOSQL_ENCRYPTION_KEY_CMD": _cmd(SECRET)})
        bad = False
        try:
            _read_first(d, {"EVOSQL_ENCRYPTION_KEY_CMD": _cmd("the-wrong-passphrase")})
        except Exception:
            bad = True
        assert bad, "a wrong-passphrase key command must not open the database"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def _vault_available():
    return shutil.which("vault") is not None


def test_keycmd_real_vault_roundtrip():
    if not _vault_available():
        raise _Skip("vault binary not installed")
    vault_addr = "http://127.0.0.1:8210"
    token = "root-test-token"
    vp = subprocess.Popen(
        ["vault", "server", "-dev",
         f"-dev-root-token-id={token}",
         "-dev-listen-address=127.0.0.1:8210"],
        stdout=subprocess.PIPE, stderr=subprocess.PIPE)
    venv = dict(os.environ, VAULT_ADDR=vault_addr, VAULT_TOKEN=token)
    d = tempfile.mkdtemp(prefix="evokms_vault_")
    try:
        if not _wait_port(8210, timeout=20):
            raise _Skip("vault dev server did not come up")
        time.sleep(1.0)
        # store the passphrase in Vault's KV store
        r = subprocess.run(["vault", "kv", "put", "secret/evosql",
                            f"passphrase={SECRET}"], env=venv,
                           capture_output=True, timeout=20)
        assert r.returncode == 0, f"vault kv put failed: {r.stderr.decode()[:200]}"

        # the server fetches the passphrase via the vault CLI (inherits VAULT_* env)
        crypto = {
            "EVOSQL_ENCRYPTION_KEY_CMD":
                "vault kv get -field=passphrase secret/evosql",
            "VAULT_ADDR": vault_addr, "VAULT_TOKEN": token,
        }
        _seed(d, crypto)
        assert _read_first(d, crypto) == "kms_1", \
            "DB keyed from Vault did not reopen/decrypt"
    finally:
        shutil.rmtree(d, ignore_errors=True)
        if vp.poll() is None:
            vp.send_signal(signal.SIGTERM)
            try:
                vp.wait(timeout=10)
            except subprocess.TimeoutExpired:
                vp.kill(); vp.wait()


if __name__ == "__main__":
    print("=== External key-command / KMS passphrase Tests ===")
    if not os.path.exists(SERVER):
        print(f"  SKIP: server binary not built at {SERVER}")
        sys.exit(0)

    run_test("keycmd_script_roundtrip", test_keycmd_script_roundtrip)
    run_test("keycmd_wrong_passphrase_fails", test_keycmd_wrong_passphrase_fails)
    run_test("keycmd_real_vault_roundtrip", test_keycmd_real_vault_roundtrip)

    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
