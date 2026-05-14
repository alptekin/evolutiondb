"""
Connector lifecycle helpers — install the PyPI package, run the
optional --auth subcommand, surface the .env path for connectors
that authenticate by pasted token.

Two operations the hub spawns on the user's behalf:

  install(name) — runs `<pip> install <pip-package>` in the same
                  Python environment the hub itself is running in.
                  Streams stdout / stderr to ~/.evosql/logs/install-
                  <name>.log and returns the last lines on success.

  authenticate(name) — runs `<entry> --auth` detached. The auth
                  flow itself opens a browser (Google OAuth, Teams
                  MSAL device-code) so the hub does not need to
                  proxy any user interaction. Returns the log path
                  so the UI can tail it.

Connectors without a --auth step (slack, github) get an
`auth_kind="env"` result with the path of the .env file the user
needs to edit by hand.
"""
from __future__ import annotations

import os
import shutil
import subprocess
import sys
from pathlib import Path
from typing import Dict, List, Optional

from . import config as cfg_mod


def _logs_dir() -> Path:
    p = Path("~/.evosql/logs").expanduser()
    p.mkdir(parents=True, exist_ok=True)
    return p


def _pip_binary() -> Optional[str]:
    """Use the same Python the hub is running in so the installed
    console script lands on its PATH. Fall back to PATH lookup if
    the embedded pip is missing."""
    return shutil.which("pip") or sys.executable


# ---------------------------------------------------------------- #
#  install                                                          #
# ---------------------------------------------------------------- #
def install(name: str) -> Dict[str, object]:
    spec = cfg_mod.get(name)
    if spec is None:
        return {"ok": False, "error": f"no such connector {name!r}"}
    if not spec.pip_package:
        return {"ok": False, "error": (
            f"{name} has no pip package configured")}

    log_path = _logs_dir() / f"install-{name}.log"
    args = [sys.executable, "-m", "pip", "install",
            "--upgrade", spec.pip_package]

    with open(log_path, "wb") as fh:
        fh.write(f"$ {' '.join(args)}\n".encode())
        try:
            r = subprocess.run(args, stdout=fh, stderr=subprocess.STDOUT,
                                check=False, timeout=180)
        except subprocess.TimeoutExpired:
            return {"ok": False, "error": "pip install timed out after 3 min",
                    "log": str(log_path)}

    # Read the tail of the log so the UI can show what happened.
    try:
        tail = log_path.read_text(encoding="utf-8",
                                    errors="replace").splitlines()[-20:]
    except OSError:
        tail = []

    if r.returncode != 0:
        return {"ok": False, "rc": r.returncode,
                 "log": str(log_path),
                 "tail": tail,
                 "error": f"pip install failed (rc={r.returncode})"}

    binary = shutil.which(spec.cli_entry)
    return {"ok": True, "binary": binary,
             "log": str(log_path),
             "tail": tail}


# ---------------------------------------------------------------- #
#  authenticate                                                     #
# ---------------------------------------------------------------- #
def authenticate(name: str) -> Dict[str, object]:
    spec = cfg_mod.get(name)
    if spec is None:
        return {"ok": False, "error": f"no such connector {name!r}"}

    binary = shutil.which(spec.cli_entry)
    if binary is None:
        return {"ok": False, "error": (
            f"{spec.cli_entry} not installed. Run install first.")}

    if spec.auth_subcommand is None:
        # Slack + GitHub — token lives in .env. The hub cannot run
        # an interactive auth flow for these; report the .env path
        # so the UI can show editing instructions.
        return {"ok":        True,
                "auth_kind": "env",
                "env_path":  _connector_env_path(name),
                "hint":      spec.auth_hint}

    log_path = _logs_dir() / f"auth-{name}.log"
    log_fh = open(log_path, "wb")

    proc = subprocess.Popen(
        [binary, spec.auth_subcommand],
        stdout=log_fh, stderr=log_fh, stdin=subprocess.DEVNULL,
        start_new_session=True, close_fds=True,
    )
    return {"ok":        True,
            "auth_kind": "interactive",
            "pid":       proc.pid,
            "log":       str(log_path),
            "hint":      spec.auth_hint}


def _connector_env_path(name: str) -> str:
    """Best-effort guess of where the connector's .env lives. We
    return a path string even if the file does not exist yet so the
    UI can show 'touch this file then paste the token'."""
    candidates = [
        Path(f"~/.evosql/{name}.env").expanduser(),
        Path(f"./client/{name}-sync/.env").resolve(),
    ]
    for p in candidates:
        if p.exists():
            return str(p)
    return str(candidates[0])
