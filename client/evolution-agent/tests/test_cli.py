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


def main():
    for fn in (test_dispatch_routes_each_subcommand,
               test_unsupported_provider_errors,
               test_doctor_returns_nonzero_when_unconfigured):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — evoagent cli")
    return 0


if __name__ == "__main__":
    sys.exit(main())
