"""
Manage the `evolutiondb-inspector` web UI as a hub-owned process so
the memory browser can be opened from the hub panel without the
user juggling separate terminals.

Same shape as tunnel.py: start spawns the binary detached, stop
SIGTERMs the pid, status reports liveness based on the state file
plus a `pid_alive()` check.
"""
from __future__ import annotations

import os
import shutil
import signal
import subprocess
import sys
import time
from pathlib import Path
from typing import Dict, Optional

from . import state as state_mod
from . import supervisor as sup


DEFAULT_PORT = 8765
LOG_DIR = Path("~/.evosql/logs").expanduser()


def status() -> Dict[str, object]:
    state    = state_mod.load()
    inspect  = state.get("inspector") or {}
    pid      = inspect.get("pid") or 0
    alive    = bool(pid) and sup.pid_alive(pid)
    return {
        "running": alive,
        "pid":     pid if alive else None,
        "port":    inspect.get("port") or DEFAULT_PORT,
        "url":     (f"http://127.0.0.1:"
                    f"{inspect.get('port') or DEFAULT_PORT}/")
                    if alive else None,
        "log":     str(LOG_DIR / "inspector.log"),
    }


def start(*, port: Optional[int] = None) -> Dict[str, object]:
    cur = status()
    if cur["running"]:
        return {"ok": False, "error": (
            f"already running on port {cur['port']} "
            f"(pid {cur['pid']})")}

    binary = shutil.which("evolutiondb-inspector")
    if binary is None:
        return {"ok": False, "error": (
            "evolutiondb-inspector not on PATH. Install with "
            "`pip install mcp-server-evolutiondb`.")}

    port = port or int(os.environ.get("EVOSQL_INSPECTOR_PORT",
                                        str(DEFAULT_PORT)))
    LOG_DIR.mkdir(parents=True, exist_ok=True)
    log_fh = open(LOG_DIR / "inspector.log", "ab", buffering=0)

    proc = subprocess.Popen(
        [binary, "--host", "127.0.0.1", "--port", str(port)],
        stdout=log_fh, stderr=log_fh, stdin=subprocess.DEVNULL,
        start_new_session=True, close_fds=True,
    )
    time.sleep(0.3)
    if proc.poll() is not None:
        return {"ok": False, "error": (
            f"evolutiondb-inspector exited immediately "
            f"(rc={proc.returncode}). See "
            f"{LOG_DIR / 'inspector.log'}")}

    state = state_mod.load()
    state.setdefault("inspector", {}).update({
        "pid":         proc.pid,
        "port":        port,
        "started_at":  int(time.time()),
    })
    state_mod.save(state)
    return {"ok": True, "pid": proc.pid, "port": port,
             "url": f"http://127.0.0.1:{port}/"}


def stop() -> Dict[str, object]:
    state   = state_mod.load()
    inspect = state.get("inspector") or {}
    pid     = inspect.get("pid") or 0
    if pid and sup.pid_alive(pid):
        try:
            os.kill(pid, signal.SIGTERM)
        except (OSError, ProcessLookupError):
            pass
        deadline = time.time() + 2.0
        while time.time() < deadline and sup.pid_alive(pid):
            time.sleep(0.1)
        if sup.pid_alive(pid):
            try:
                os.kill(pid, signal.SIGKILL)
            except (OSError, ProcessLookupError):
                pass
    state["inspector"] = {}
    state_mod.save(state)
    return {"ok": True, "killed_pid": pid or None}
