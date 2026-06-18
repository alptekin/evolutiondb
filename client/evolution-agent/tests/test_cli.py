"""
test_cli — the evoagent front door (cli.py).

Verifies argparse wiring (each subcommand, and the bare-prompt default, routes
to the right callable) and that `doctor` fails when the install is not ready —
all without touching the real backends (the cmd_* functions are stubbed).
"""
from __future__ import annotations

import argparse
import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from evolution_agent import cli


def _route(argv):
    """Run cli.main(argv) with every cmd_* stubbed to a recorder; return the
    name of the command function that was dispatched."""
    called = {}
    saved = {n: getattr(cli, n) for n in dir(cli) if n.startswith("cmd_")}
    try:
        for n in saved:
            def mk(nn):
                def rec(_a):
                    called["fn"] = nn
                    return 0
                return rec
            setattr(cli, n, mk(n))
        rc = cli.main(argv)
        return rc, called.get("fn")
    finally:
        for n, f in saved.items():
            setattr(cli, n, f)


def test_dispatch_routes_each_subcommand():
    cases = {
        "bare prompt -> run": (["what is pending"], "cmd_run"),
        "run":                (["run", "hi"], "cmd_run"),
        "chat":               (["chat"], "cmd_chat"),
        "brief":              (["brief"], "cmd_brief"),
        "approve":            (["approve"], "cmd_approve"),
        "status":             (["status"], "cmd_status"),
        "connect":            (["connect", "gmail"], "cmd_connect"),
        "accounts":           (["accounts"], "cmd_accounts"),
        "sync":               (["sync", "gmail"], "cmd_sync"),
        "config":             (["config", "path"], "cmd_config"),
        "doctor":             (["doctor"], "cmd_doctor"),
        "backup":             (["backup", "/tmp/_evo_dest"], "cmd_backup"),
        "restore":            (["restore", "/tmp/_evo_src"], "cmd_restore"),
        "export-data":        (["export-data"], "cmd_export_data"),
        "erase-data":         (["erase-data"], "cmd_erase_data"),
    }
    for label, (argv, expect) in cases.items():
        rc, fn = _route(argv)
        assert rc == 0 and fn == expect, (label, rc, fn, "expected", expect)


def test_unsupported_provider_errors():
    raised = False
    try:
        cli._check_provider("gemini")
    except NotImplementedError:
        raised = True
    assert raised
    assert cli._check_provider("anthropic") == "anthropic"


def test_doctor_returns_nonzero_when_unconfigured():
    saved_key = os.environ.pop("ANTHROPIC_API_KEY", None)
    saved_bn = cli._backend_ns

    def _no_db():
        raise RuntimeError("no db")
    cli._backend_ns = _no_db
    try:
        rc = cli.cmd_doctor(argparse.Namespace(provider=None))
        assert rc != 0          # missing key + unreachable DB -> not ready
    finally:
        cli._backend_ns = saved_bn
        if saved_key is not None:
            os.environ["ANTHROPIC_API_KEY"] = saved_key


def test_backup_copies_data_dir():
    import tempfile, shutil
    d = tempfile.mkdtemp()
    try:
        src = os.path.join(d, "data"); os.makedirs(src)
        open(os.path.join(src, "evosql.db"), "wb").write(b"DBDATA")
        open(os.path.join(src, "evosql.wal"), "wb").write(b"WALDATA")
        dest = os.path.join(d, "backups")
        rc = cli.cmd_backup(argparse.Namespace(data_dir=src, dest=dest))
        assert rc == 0
        folders = os.listdir(dest)
        assert len(folders) == 1                       # one timestamped folder
        bk = os.path.join(dest, folders[0])
        assert open(os.path.join(bk, "evosql.db"), "rb").read() == b"DBDATA"
        assert open(os.path.join(bk, "evosql.wal"), "rb").read() == b"WALDATA"
    finally:
        shutil.rmtree(d, ignore_errors=True)


def test_restore_refuses_when_engine_running():
    import tempfile, shutil
    d = tempfile.mkdtemp(); saved = cli._engine_reachable
    try:
        src = os.path.join(d, "bk"); os.makedirs(src)
        open(os.path.join(src, "evosql.db"), "wb").write(b"X")
        dest = os.path.join(d, "data")
        cli._engine_reachable = lambda *a, **k: True   # pretend the engine is up
        rc = cli.cmd_restore(argparse.Namespace(src=src, data_dir=dest, force=False))
        assert rc != 0                                  # refused
        assert not os.path.exists(dest) or not os.listdir(dest)
    finally:
        cli._engine_reachable = saved
        shutil.rmtree(d, ignore_errors=True)


def test_restore_respects_force():
    import tempfile, shutil
    d = tempfile.mkdtemp(); saved = cli._engine_reachable
    try:
        src = os.path.join(d, "bk"); os.makedirs(src)
        open(os.path.join(src, "evosql.db"), "wb").write(b"NEW")
        dest = os.path.join(d, "data"); os.makedirs(dest)
        open(os.path.join(dest, "evosql.db"), "wb").write(b"OLD")
        cli._engine_reachable = lambda *a, **k: False
        # non-empty target without --force -> refused, original untouched
        assert cli.cmd_restore(argparse.Namespace(src=src, data_dir=dest, force=False)) != 0
        assert open(os.path.join(dest, "evosql.db"), "rb").read() == b"OLD"
        # with --force -> overwritten
        assert cli.cmd_restore(argparse.Namespace(src=src, data_dir=dest, force=True)) == 0
        assert open(os.path.join(dest, "evosql.db"), "rb").read() == b"NEW"
    finally:
        cli._engine_reachable = saved
        shutil.rmtree(d, ignore_errors=True)


def test_erase_data_requires_yes_for_real_delete():
    import mcp_server_evosql.dsar as dsar
    saved_bn = cli._backend_ns
    saved_erase, saved_export = dsar.erase_user, dsar.export_user
    calls = {"erase": 0, "export": 0}
    cli._backend_ns = lambda: (object(), "alice@globex")
    dsar.erase_user = lambda b, u: (calls.__setitem__("erase", calls["erase"] + 1)
                                    or {"row_count": 0, "deleted": {}})
    dsar.export_user = lambda b, u: (calls.__setitem__("export", calls["export"] + 1)
                                     or {"row_count": 0, "stores": {}})
    try:
        # no --yes: a dry run (preview via export), real erase NOT called
        assert cli.cmd_erase_data(argparse.Namespace(yes=False)) == 0
        assert calls["erase"] == 0 and calls["export"] == 1
        # --yes: real erase happens
        assert cli.cmd_erase_data(argparse.Namespace(yes=True)) == 0
        assert calls["erase"] == 1
    finally:
        cli._backend_ns = saved_bn
        dsar.erase_user, dsar.export_user = saved_erase, saved_export


def test_global_user_tenant_sets_identity_env():
    saved = {k: os.environ.get(k) for k in ("MCP_USER_ID", "MCP_TENANT_ID")}
    try:
        rest = cli._pop_global_identity(["--user", "alice@globex",
                                         "--tenant=acme", "status", "--json"])
        assert rest == ["status", "--json"]            # flags removed, rest intact
        assert os.environ["MCP_USER_ID"] == "alice@globex"
        assert os.environ["MCP_TENANT_ID"] == "acme"
    finally:
        for k, v in saved.items():
            if v is None:
                os.environ.pop(k, None)
            else:
                os.environ[k] = v


def main():
    for fn in (test_dispatch_routes_each_subcommand,
               test_unsupported_provider_errors,
               test_doctor_returns_nonzero_when_unconfigured,
               test_backup_copies_data_dir,
               test_restore_refuses_when_engine_running,
               test_restore_respects_force,
               test_erase_data_requires_yes_for_real_delete,
               test_global_user_tenant_sets_identity_env):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — evoagent cli")
    return 0


if __name__ == "__main__":
    sys.exit(main())
