"""
test_key_rotation — automated, KMS-provider-agnostic at-rest key rotation.

Unit (always run): FileKeyProvider two-phase semantics (current/rotate/commit/
rollback) and CommandKeyProvider via a stub runner.

Integration (drives the real ENCRYPTED engine binary; skips if not built):
  - rotate_engine_key rekeys the passphrase: data reads under the NEW key, the
    OLD key no longer opens the DB, and the provider's current advanced;
  - rotate_dek=True also rotates the data key (on-disk ciphertext changes) yet
    the data still reads back;
  - a failed rekey (plaintext DB) ROLLS BACK the provider (current unchanged);
  - TenantSupervisor.rotate_key end-to-end: an encrypted tenant serves, gets
    rotated, and still serves with its data intact under the rotated key.
"""
from __future__ import annotations

import os
import sys
import time
import json
import socket
import signal
import shutil
import tempfile
import subprocess

_TESTS = os.path.dirname(os.path.abspath(__file__))
_PKG_PARENT = os.path.dirname(_TESTS)
_REPO = os.path.dirname(os.path.dirname(_PKG_PARENT))
sys.path.insert(0, _PKG_PARENT)
sys.path.insert(0, _TESTS)
sys.path.insert(0, os.path.join(_REPO, "tests"))   # repo-root pg_helpers

os.environ.setdefault("EVOSQL_TENANT_SECRET", "test-tenant-secret")

from mcp_server_evosql import key_rotation                                 # noqa: E402
from mcp_server_evosql.key_rotation import (                               # noqa: E402
    FileKeyProvider, CommandKeyProvider, rotate_engine_key)
from pg_helpers import conn as pg_conn, simple_query                       # noqa: E402

SERVER = os.path.join(_REPO, "adaptor", "evosql-server")
PG_PORT = int(os.environ.get("KR_PG_PORT", "5479"))
EVO_PORT = int(os.environ.get("KR_EVO_PORT", "9994"))
USER, PASS, DB = "admin", "admin", "evosql"

passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


# ----------------------------------------------------------------- unit: providers
def test_file_provider_two_phase():
    d = tempfile.mkdtemp(prefix="kr_fp_")
    try:
        p = FileKeyProvider(os.path.join(d, "keys.json"))
        k0 = p.current()
        assert k0 and p.current() == k0                 # stable
        new = p.rotate()
        assert new != k0
        assert p.current() == k0                         # pending: current unchanged
        p.commit()
        assert p.current() == new                        # promoted
        # rollback discards a pending rotate
        pend = p.rotate()
        assert p.current() == new and pend != new
        p.rollback()
        assert p.current() == new
        # key file is not world-readable
        mode = os.stat(os.path.join(d, "keys.json")).st_mode & 0o077
        assert mode == 0, f"key file is group/other-accessible (mode bits {oct(mode)})"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_command_provider_via_stub():
    calls = []
    seq = {"current": "k-old", "next": "k-new"}

    def runner(cmd):
        calls.append(cmd[0])
        if cmd[0] == "get":
            return seq["current"]
        if cmd[0] == "mint":
            return seq["next"]
        return ""

    p = CommandKeyProvider(["get"], ["mint"], commit_cmd=["promote"],
                           runner=runner)
    assert p.current() == "k-old"
    assert p.rotate() == "k-new"
    p.commit()
    assert "promote" in calls


def test_command_provider_empty_output_errors():
    p = CommandKeyProvider(["get"], ["mint"], runner=lambda c: "")
    raised = False
    try:
        p.current()
    except key_rotation.KeyProviderError:
        raised = True
    assert raised


def test_double_rotate_refused():
    d = tempfile.mkdtemp(prefix="kr_dbl_")
    try:
        p = FileKeyProvider(os.path.join(d, "keys.json"))
        p.current(); p.rotate()
        raised = False
        try:
            p.rotate()                                   # second pending -> refuse
        except key_rotation.KeyProviderError:
            raised = True
        assert raised, "a second rotation over an uncommitted one must be refused"
        assert p.pending_key() is not None
    finally:
        shutil.rmtree(d, ignore_errors=True)


# -- orchestrator safety, exercised with a FAKE engine (no real binary needed) --
def _fake_binary(tmpdir):
    """A stand-in 'engine' whose --rekey / --rotate-key exit codes are driven by
    env FAKE_REKEY_RC / FAKE_ROTATE_RC, so we can drive every orchestrator branch
    (success / clean failure / commit failure) deterministically."""
    path = os.path.join(tmpdir, "fake-engine")
    with open(path, "w") as f:
        f.write("#!/usr/bin/env python3\n"
                "import sys, os\n"
                "m = sys.argv[1] if len(sys.argv) > 1 else ''\n"
                "if m == '--rekey': sys.exit(int(os.environ.get('FAKE_REKEY_RC','0')))\n"
                "if m == '--rotate-key': sys.exit(int(os.environ.get('FAKE_ROTATE_RC','0')))\n"
                "sys.exit(0)\n")
    os.chmod(path, 0o755)
    return path


def test_orchestrator_success_commits():
    d = tempfile.mkdtemp(prefix="kr_ok_")
    try:
        binp = _fake_binary(d)
        prov = FileKeyProvider(os.path.join(d, "keys.json"))
        old = prov.current()
        env = dict(os.environ, FAKE_REKEY_RC="0", FAKE_ROTATE_RC="0")
        res = rotate_engine_key(binp, d, prov, rotate_dek=True, env=env)
        assert res["ok"] and res["passphrase_rotated"] and res["dek_rotated"]
        assert not res["needs_reconcile"]
        assert prov.current() != old                     # committed to new
        assert prov.pending_key() is None
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_orchestrator_clean_failure_rolls_back():
    d = tempfile.mkdtemp(prefix="kr_fail_")
    try:
        binp = _fake_binary(d)
        prov = FileKeyProvider(os.path.join(d, "keys.json"))
        old = prov.current()
        env = dict(os.environ, FAKE_REKEY_RC="1")        # rekey exits non-zero
        res = rotate_engine_key(binp, d, prov, rotate_dek=True, env=env)
        assert res["ok"] is False and res["needs_reconcile"] is False
        assert prov.current() == old                     # rolled back
        assert prov.pending_key() is None
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_orchestrator_commit_failure_keeps_pending():
    d = tempfile.mkdtemp(prefix="kr_cf_")
    try:
        binp = _fake_binary(d)

        class BadCommit(FileKeyProvider):
            def commit(self):
                raise RuntimeError("kms commit unavailable")

        prov = BadCommit(os.path.join(d, "keys.json"))
        old = prov.current()
        env = dict(os.environ, FAKE_REKEY_RC="0")        # rekey succeeds
        res = rotate_engine_key(binp, d, prov, rotate_dek=False, env=env)
        # rekey succeeded on disk; commit failed -> flagged, NOT rolled back
        assert res["ok"] and res["passphrase_rotated"] and res["needs_reconcile"]
        assert prov.current() == old                     # commit didn't take
        assert prov.pending_key() is not None            # new key still recoverable
    finally:
        shutil.rmtree(d, ignore_errors=True)


# ----------------------------------------------------------------- engine helpers
def _env(data_dir, enc_key=None):
    env = dict(os.environ)
    env.update({"EVOSQL_USER_NAME": USER, "EVOSQL_PASSWORD": PASS,
                "EVOSQL_DATA_DIR": data_dir,
                "EVOSQL_CHECKPOINT_INTERVAL_SEC": "0"})
    if enc_key:
        env["EVOSQL_ENCRYPTION_KEY"] = enc_key
    else:
        env.pop("EVOSQL_ENCRYPTION_KEY", None)
    return env


def _wait_port(port, timeout=20):
    deadline = time.time() + timeout
    while time.time() < deadline:
        try:
            socket.create_connection(("127.0.0.1", port), 0.5).close()
            return True
        except OSError:
            time.sleep(0.15)
    return False


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


def _connect(retries=12):
    last = None
    for _ in range(retries):
        try:
            return pg_conn(host="127.0.0.1", port=PG_PORT, user=USER,
                           password=PASS, database=DB)
        except Exception as e:
            last = e; time.sleep(0.25)
    raise RuntimeError(f"connect failed: {last}")


def _seed(data_dir, enc_key):
    p, ok = _start(data_dir, enc_key)
    assert ok, "encrypted server failed to start"
    try:
        c = _connect()
        simple_query(c, "DROP TABLE IF EXISTS kr_t")
        simple_query(c, "CREATE TABLE kr_t (id INT PRIMARY KEY, v VARCHAR(40))")
        for i in range(1, 6):
            simple_query(c, f"INSERT INTO kr_t VALUES ({i}, 'sec_{i}')")
        c.close()
    finally:
        _stop(p)


def _read_count(data_dir, enc_key):
    p, ok = _start(data_dir, enc_key)
    if not ok:
        try:
            _, errb = p.communicate(timeout=5)
        except subprocess.TimeoutExpired:
            p.kill(); _, errb = p.communicate()
        raise RuntimeError(f"server did not start: {errb.decode(errors='replace')[:200]}")
    try:
        c = _connect()
        _c, rows, err, _t = simple_query(c, "SELECT COUNT(*) FROM kr_t")
        c.close()
        if err:
            raise RuntimeError(err)
        return int(rows[0][0])
    finally:
        _stop(p)


def _ciphertext(data_dir):
    with open(os.path.join(data_dir, "evosql.db"), "rb") as f:
        f.seek(4096)
        return f.read()


# ----------------------------------------------------------------- integration
def test_rekey_rotates_passphrase():
    d = tempfile.mkdtemp(prefix="kr_rk_")
    try:
        prov = FileKeyProvider(os.path.join(d, "keys.json"))
        old = prov.current()
        _seed(d, old)
        res = rotate_engine_key(SERVER, d, prov, rotate_dek=False)
        assert res["ok"] and res["passphrase_rotated"], res
        new = prov.current()
        assert new != old                                  # committed to new
        assert _read_count(d, new) == 5                    # reads under new key
        # old key must no longer open the DB
        bad = False
        try:
            _read_count(d, old)
        except Exception:
            bad = True
        assert bad, "the OLD passphrase still opened the database after rekey"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_rotate_dek_reencrypts_and_reads():
    d = tempfile.mkdtemp(prefix="kr_dek_")
    try:
        prov = FileKeyProvider(os.path.join(d, "keys.json"))
        _seed(d, prov.current())
        before = _ciphertext(d)
        res = rotate_engine_key(SERVER, d, prov, rotate_dek=True)
        assert res["ok"] and res["dek_rotated"], res
        after = _ciphertext(d)
        assert before != after, "data-key rotation did not change the ciphertext"
        assert _read_count(d, prov.current()) == 5
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_failed_rekey_rolls_back_provider():
    d = tempfile.mkdtemp(prefix="kr_plain_")
    try:
        # a PLAINTEXT db (no enc key seeded) -> --rekey must refuse
        _seed(d, None)
        prov = FileKeyProvider(os.path.join(d, "keys.json"))
        cur = prov.current()
        res = rotate_engine_key(SERVER, d, prov, rotate_dek=False)
        assert res["ok"] is False, "rekey unexpectedly succeeded on a plaintext DB"
        assert prov.current() == cur, "provider did not roll back the pending key"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_supervisor_rotate_key_end_to_end():
    from mcp_server_evosql.tenant_supervisor import TenantSupervisor
    base = tempfile.mkdtemp(prefix="kr_sup_")

    def provider_for(tid):
        from mcp_server_evosql.tenancy import tenant_db_name
        kdir = os.path.join(base, tenant_db_name(tid))
        os.makedirs(kdir, exist_ok=True)
        return FileKeyProvider(os.path.join(kdir, ".keys.json"))

    sup = TenantSupervisor(base, binary=SERVER, base_port=6580,
                           key_provider_for=provider_for)
    try:
        inst = sup.ensure("acme")
        c = pg_conn(host="127.0.0.1", port=inst.pg_port, user="admin",
                    password=inst.password, database="evosql")
        simple_query(c, "CREATE TABLE s_t (id INT PRIMARY KEY)")
        simple_query(c, "INSERT INTO s_t VALUES (1)")
        simple_query(c, "INSERT INTO s_t VALUES (2)")
        c.close()
        key_before = provider_for("acme").current()

        res = sup.rotate_key("acme", rotate_dek=True)
        assert res["ok"], res
        assert provider_for("acme").current() != key_before   # key advanced

        # the tenant still serves, data intact, under the rotated key
        inst2 = sup.get("acme")
        assert inst2 is not None
        rows = None
        for _ in range(20):
            try:
                c2 = pg_conn(host="127.0.0.1", port=inst2.pg_port, user="admin",
                             password=inst2.password, database="evosql")
                _c, rows, err, _t = simple_query(c2, "SELECT COUNT(*) FROM s_t")
                c2.close()
                if not err:
                    break
            except Exception:
                time.sleep(0.25)
        assert rows and rows[0][0] == "2", f"data not intact after rotation: {rows}"
    finally:
        sup.stop_all()
        shutil.rmtree(base, ignore_errors=True)


def test_supervisor_recovers_from_crash_between_rekey_and_commit():
    """The hardest window (encryption review #1): the engine --rekey'd the data
    to the NEW key on disk, but the process died before the key source committed.
    The supervisor's _spawn must try current (old, fails to open) then the pending
    key (new, opens) and reconcile by committing it."""
    from mcp_server_evosql.tenant_supervisor import TenantSupervisor
    from mcp_server_evosql.tenancy import tenant_db_name
    base = tempfile.mkdtemp(prefix="kr_rec_")

    def provider_for(tid):
        kdir = os.path.join(base, tenant_db_name(tid))
        os.makedirs(kdir, exist_ok=True)
        return FileKeyProvider(os.path.join(kdir, ".keys.json"))

    sup = TenantSupervisor(base, binary=SERVER, base_port=6620,
                           ready_timeout=10, key_provider_for=provider_for)
    try:
        inst = sup.ensure("acme")
        c = pg_conn(host="127.0.0.1", port=inst.pg_port, user="admin",
                    password=inst.password, database="evosql")
        simple_query(c, "CREATE TABLE r_t (id INT PRIMARY KEY)")
        simple_query(c, "INSERT INTO r_t VALUES (7)")
        c.close()
        pw = inst.password
        sup.stop("acme")

        # Simulate the crash window: mint a pending key + --rekey the data to it
        # on disk, but do NOT commit the provider.
        prov = provider_for("acme")
        old = prov.current()
        new = prov.rotate()                          # pending = new; current = old
        data_dir = os.path.join(base, tenant_db_name("acme"))
        rk = subprocess.run(
            [SERVER, "--rekey"],
            env={**os.environ, "EVOSQL_DATA_DIR": data_dir,
                 "EVOSQL_USER_NAME": "admin", "EVOSQL_PASSWORD": pw,
                 "EVOSQL_ENCRYPTION_KEY": old, "EVOSQL_ENCRYPTION_KEY_NEW": new,
                 "EVOSQL_CHECKPOINT_INTERVAL_SEC": "0"},
            capture_output=True, text=True, timeout=60)
        assert rk.returncode == 0, f"out-of-band rekey failed: {rk.stderr[:200]}"
        assert provider_for("acme").current() == old   # NOT committed yet

        # ensure() must recover: old fails to open, pending(new) opens + commits.
        inst2 = sup.ensure("acme")
        rows = None
        for _ in range(20):
            try:
                c2 = pg_conn(host="127.0.0.1", port=inst2.pg_port, user="admin",
                             password=pw, database="evosql")
                _c, rows, err, _t = simple_query(c2, "SELECT COUNT(*) FROM r_t")
                c2.close()
                if not err:
                    break
            except Exception:
                time.sleep(0.25)
        assert rows and rows[0][0] == "1", f"data not recovered: {rows}"
        assert provider_for("acme").current() == new   # reconciled on recovery
    finally:
        sup.stop_all(); shutil.rmtree(base, ignore_errors=True)


if __name__ == "__main__":
    print("=== Phase 2 governance: automated KMS key rotation ===")
    run("file_provider_two_phase", test_file_provider_two_phase)
    run("command_provider_via_stub", test_command_provider_via_stub)
    run("command_provider_empty_output_errors", test_command_provider_empty_output_errors)
    run("double_rotate_refused", test_double_rotate_refused)
    run("orchestrator_success_commits", test_orchestrator_success_commits)
    run("orchestrator_clean_failure_rolls_back", test_orchestrator_clean_failure_rolls_back)
    run("orchestrator_commit_failure_keeps_pending", test_orchestrator_commit_failure_keeps_pending)
    if not os.path.exists(SERVER):
        print(f"  SKIP: engine binary not built at {SERVER} (unit tests only)")
        print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
        sys.exit(1 if failed else 0)
    run("rekey_rotates_passphrase", test_rekey_rotates_passphrase)
    run("rotate_dek_reencrypts_and_reads", test_rotate_dek_reencrypts_and_reads)
    run("failed_rekey_rolls_back_provider", test_failed_rekey_rolls_back_provider)
    run("supervisor_rotate_key_end_to_end", test_supervisor_rotate_key_end_to_end)
    run("supervisor_recovers_from_crash_between_rekey_and_commit",
        test_supervisor_recovers_from_crash_between_rekey_and_commit)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
