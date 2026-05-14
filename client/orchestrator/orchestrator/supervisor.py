"""
Process supervisor — starts and stops sync connectors as detached
subprocesses, tracks pid files, reports status.

Each connector is just a console script (`evolutiondb-gmail-sync`,
`evolutiondb-slack-sync`, etc.) shipped by its own PyPI package.
The hub spawns them with `--interval N`, then leaves them running
in the background. `stop()` SIGTERMs the pid and waits up to 5s
before sending SIGKILL.

External supervisors (launchd, systemd) running the same connector
are detected by looking for the entry binary in `ps`; the hub
reports them as "externally managed" and refuses to start a second
copy.
"""
from __future__ import annotations

import os
import shutil
import signal
import subprocess
import sys
import time
from pathlib import Path
from typing import Dict, Optional, Tuple

from . import config as cfg_mod
from . import state as state_mod


def _log_dir() -> Path:
    p = Path("~/.evosql/logs").expanduser()
    p.mkdir(parents=True, exist_ok=True)
    return p


# ---------------------------------------------------------------- #
#  Process probing                                                  #
# ---------------------------------------------------------------- #
def pid_alive(pid: int) -> bool:
    if pid <= 0:
        return False
    try:
        os.kill(pid, 0)
        return True
    except (OSError, ProcessLookupError):
        return False


def find_external_pid(*needles: str) -> Optional[int]:
    """Scan running processes for any matching connector binary or
    Python module. Pass both the console-script name and the module
    name (`evosql-teams-sync` + `teams_sync`) so launchd / systemd
    runs that invoke `python -m teams_sync.sync` are still caught."""
    try:
        out = subprocess.run(["ps", "-Ao", "pid,command"],
                              capture_output=True, text=True, check=False)
    except FileNotFoundError:
        return None
    if out.returncode != 0:
        return None
    me = os.getpid()
    needles = tuple(n for n in needles if n)
    if not needles:
        return None
    for line in out.stdout.splitlines()[1:]:
        line = line.strip()
        if not line:
            continue
        parts = line.split(None, 1)
        if len(parts) < 2:
            continue
        try:
            pid = int(parts[0])
        except ValueError:
            continue
        cmd = parts[1]
        if pid == me:
            continue
        if "ps -Ao" in cmd:
            continue
        if any(n in cmd for n in needles):
            return pid
    return None


# ---------------------------------------------------------------- #
#  Status                                                            #
# ---------------------------------------------------------------- #
def status(name: str) -> Dict[str, object]:
    spec = cfg_mod.get(name)
    if spec is None:
        return {"name": name, "state": "unknown",
                "error": "no such connector"}

    state = state_mod.load()
    entry = state_mod.get_source(state, name)
    pid = entry.get("pid") or 0

    if pid and pid_alive(pid):
        return {
            "name":          name,
            "label":         spec.label,
            "state":         "running",
            "managed_by":    "hub",
            "pid":           pid,
            "started_at":    entry.get("started_at"),
            "interval":      entry.get("interval", spec.poll_default),
            "agent_owner":   entry.get("agent_owner"),
            "binary":        shutil.which(spec.cli_entry),
        }

    # Stale pid in the state file — clear it.
    if pid:
        state_mod.remove_source_pid(state, name)
        state_mod.save(state)

    external_pid = find_external_pid(spec.cli_entry, spec.module_name)
    if external_pid:
        return {
            "name":          name,
            "label":         spec.label,
            "state":         "running",
            "managed_by":    "external",
            "pid":           external_pid,
            "agent_owner":   entry.get("agent_owner"),
            "binary":        shutil.which(spec.cli_entry),
        }

    return {
        "name":          name,
        "label":         spec.label,
        "state":         "stopped",
        "managed_by":    None,
        "pid":           None,
        "agent_owner":   entry.get("agent_owner"),
        "binary":        shutil.which(spec.cli_entry),
    }


def status_all() -> Dict[str, Dict[str, object]]:
    return {c.name: status(c.name) for c in cfg_mod.CONNECTORS}


# ---------------------------------------------------------------- #
#  Start / stop                                                     #
# ---------------------------------------------------------------- #
def start(name: str, *, interval: Optional[int] = None) -> Dict[str, object]:
    spec = cfg_mod.get(name)
    if spec is None:
        return {"ok": False, "error": f"no such connector {name!r}"}

    binary = shutil.which(spec.cli_entry)
    if binary is None:
        return {"ok": False, "error": (
            f"{spec.cli_entry} not on PATH. Install with "
            f"`pip install {spec.pip_package}`.")}

    cur = status(name)
    if cur["state"] == "running":
        return {"ok": False,
                "error": f"already running (pid {cur['pid']}, "
                          f"managed by {cur['managed_by']})"}

    interval = interval or spec.poll_default
    log = _log_dir() / f"{name}.log"
    fh  = open(log, "ab", buffering=0)

    proc = subprocess.Popen(
        [binary, "--interval", str(interval)],
        stdout=fh, stderr=fh, stdin=subprocess.DEVNULL,
        start_new_session=True, close_fds=True,
    )

    # Give it a moment to crash on a misconfigured env so we report
    # the failure cleanly instead of leaving a dead pid in state.
    time.sleep(0.3)
    if proc.poll() is not None:
        rc = proc.returncode
        fh.close()
        tail = ""
        try:
            with open(log, "r", encoding="utf-8", errors="replace") as r:
                tail = "".join(r.readlines()[-5:])
        except OSError:
            pass
        return {"ok": False,
                "error": f"{spec.cli_entry} exited immediately (rc={rc}). "
                          f"Last lines:\n{tail}"}

    state = state_mod.load()
    state_mod.set_source(state, name,
                          pid=proc.pid,
                          interval=interval,
                          started_at=int(time.time()))
    state_mod.save(state)
    return {"ok": True, "pid": proc.pid, "log": str(log),
             "interval": interval}


def stop(name: str, *, timeout_s: float = 5.0) -> Dict[str, object]:
    spec = cfg_mod.get(name)
    if spec is None:
        return {"ok": False, "error": f"no such connector {name!r}"}

    cur = status(name)
    if cur["state"] != "running":
        return {"ok": False, "error": "not running"}

    if cur["managed_by"] != "hub":
        return {"ok": False, "error": (
            f"managed externally (pid {cur['pid']}); stop via "
            f"launchctl/systemctl, the hub will not touch it.")}

    pid = cur["pid"]
    try:
        os.kill(pid, signal.SIGTERM)
    except (OSError, ProcessLookupError):
        pass

    deadline = time.time() + timeout_s
    while time.time() < deadline and pid_alive(pid):
        time.sleep(0.1)
    if pid_alive(pid):
        try:
            os.kill(pid, signal.SIGKILL)
        except (OSError, ProcessLookupError):
            pass

    state = state_mod.load()
    state_mod.remove_source_pid(state, name)
    state_mod.save(state)
    return {"ok": True, "pid": pid}


# ---------------------------------------------------------------- #
#  Agent ownership label                                            #
# ---------------------------------------------------------------- #
def set_agent_owner(name: str, agent: Optional[str]) -> Dict[str, object]:
    if cfg_mod.get(name) is None:
        return {"ok": False, "error": f"no such connector {name!r}"}
    state = state_mod.load()
    state_mod.set_source(state, name, agent_owner=agent or None)
    state_mod.save(state)
    return {"ok": True, "agent_owner": agent or None}
