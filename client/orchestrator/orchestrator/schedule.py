"""
OS-level scheduling — register a connector with launchd (macOS) or
systemd user (Linux) so it survives a reboot and runs at a regular
interval without the hub being open.

Surface is platform-independent: schedule(name, interval),
unschedule(name), is_scheduled(name). Internals dispatch on
sys.platform.

What gets installed (macOS):
  ~/Library/LaunchAgents/com.evolutiondb.<name>-sync.plist
  loaded via `launchctl bootstrap gui/$UID <path>`

What gets installed (Linux):
  ~/.config/systemd/user/evolutiondb-<name>-sync.service
  ~/.config/systemd/user/evolutiondb-<name>-sync.timer
  enabled via `systemctl --user enable --now <timer>`

Windows scheduling is not implemented in this revision — schedule()
returns an error there.
"""
from __future__ import annotations

import os
import shutil
import subprocess
import sys
from pathlib import Path
from textwrap import dedent
from typing import Dict, Optional

from . import config as cfg_mod


def _label(name: str) -> str:
    return f"com.evolutiondb.{name}-sync"


def _service_name(name: str) -> str:
    return f"evolutiondb-{name}-sync"


def _logs_dir() -> Path:
    p = Path("~/.evosql/logs").expanduser()
    p.mkdir(parents=True, exist_ok=True)
    return p


# ---------------------------------------------------------------- #
#  Path helpers                                                     #
# ---------------------------------------------------------------- #
def _plist_path(name: str) -> Path:
    return Path("~/Library/LaunchAgents").expanduser() \
            / f"{_label(name)}.plist"


def _systemd_dir() -> Path:
    return Path("~/.config/systemd/user").expanduser()


def _service_path(name: str) -> Path:
    return _systemd_dir() / f"{_service_name(name)}.service"


def _timer_path(name: str) -> Path:
    return _systemd_dir() / f"{_service_name(name)}.timer"


# ---------------------------------------------------------------- #
#  Rendering — pure, easy to test                                   #
# ---------------------------------------------------------------- #
def render_plist(*, label: str, binary: str, interval: int,
                  user_id: str, log_dir: str,
                  env: Optional[Dict[str, str]] = None) -> str:
    """macOS launchd plist for a connector that runs once per
    StartInterval and exits. We use --once so the process model
    matches the existing teams-sync launchd setup the user is
    already familiar with."""
    env_xml = ""
    full_env = {"MCP_USER_ID": user_id}
    if env:
        full_env.update(env)
    if full_env:
        items = "".join(
            f"        <key>{_xml_escape(k)}</key>"
            f"<string>{_xml_escape(v)}</string>\n"
            for k, v in full_env.items())
        env_xml = (
            "    <key>EnvironmentVariables</key>\n"
            "    <dict>\n"
            f"{items}"
            "    </dict>\n")

    return dedent(f"""\
        <?xml version="1.0" encoding="UTF-8"?>
        <!DOCTYPE plist PUBLIC "-//Apple//DTD PLIST 1.0//EN"
            "http://www.apple.com/DTDs/PropertyList-1.0.dtd">
        <plist version="1.0">
        <dict>
            <key>Label</key><string>{_xml_escape(label)}</string>
            <key>ProgramArguments</key>
            <array>
                <string>{_xml_escape(binary)}</string>
                <string>--once</string>
            </array>
            <key>StartInterval</key><integer>{int(interval)}</integer>
            <key>RunAtLoad</key><true/>
            <key>StandardOutPath</key><string>{_xml_escape(log_dir)}/{_xml_escape(label)}.out.log</string>
            <key>StandardErrorPath</key><string>{_xml_escape(log_dir)}/{_xml_escape(label)}.err.log</string>
        {env_xml}</dict>
        </plist>
        """)


def render_systemd_units(*, service_name: str, binary: str,
                          interval: int, user_id: str,
                          env: Optional[Dict[str, str]] = None
                          ) -> Dict[str, str]:
    """Return {service: …, timer: …} for systemd --user."""
    full_env = {"MCP_USER_ID": user_id}
    if env:
        full_env.update(env)
    env_lines = "\n".join(f'Environment="{k}={v}"'
                           for k, v in full_env.items())

    service = dedent(f"""\
        [Unit]
        Description=EvolutionDB connector {service_name}

        [Service]
        Type=oneshot
        ExecStart={binary} --once
        {env_lines}
        """)
    timer = dedent(f"""\
        [Unit]
        Description=Run EvolutionDB connector {service_name} every {interval}s

        [Timer]
        OnBootSec={interval}s
        OnUnitActiveSec={interval}s
        Persistent=true

        [Install]
        WantedBy=timers.target
        """)
    return {"service": service, "timer": timer}


def _xml_escape(s: str) -> str:
    return (s.replace("&",  "&amp;")
              .replace("<",  "&lt;")
              .replace(">",  "&gt;")
              .replace('"',  "&quot;"))


# ---------------------------------------------------------------- #
#  Platform-agnostic public API                                     #
# ---------------------------------------------------------------- #
def is_scheduled(name: str) -> bool:
    if sys.platform == "darwin":
        return _plist_path(name).exists()
    if sys.platform.startswith("linux"):
        return _timer_path(name).exists()
    return False


def schedule(name: str, *, interval: Optional[int] = None,
             user_id: Optional[str] = None) -> Dict[str, object]:
    spec = cfg_mod.get(name)
    if spec is None:
        return {"ok": False, "error": f"no such connector {name!r}"}

    binary = shutil.which(spec.cli_entry)
    if binary is None:
        return {"ok": False, "error": (
            f"{spec.cli_entry} not on PATH. Install "
            f"`{spec.pip_package}` first.")}

    interval = interval or spec.poll_default
    user_id  = user_id or os.environ.get("MCP_USER_ID", "default_user")

    if sys.platform == "darwin":
        return _macos_schedule(name, binary=binary,
                                interval=interval, user_id=user_id)
    if sys.platform.startswith("linux"):
        return _linux_schedule(name, binary=binary,
                                interval=interval, user_id=user_id)
    return {"ok": False, "error": (
        f"scheduling is not implemented on {sys.platform}")}


def unschedule(name: str) -> Dict[str, object]:
    if sys.platform == "darwin":
        return _macos_unschedule(name)
    if sys.platform.startswith("linux"):
        return _linux_unschedule(name)
    return {"ok": False, "error": (
        f"scheduling is not implemented on {sys.platform}")}


# ---------------------------------------------------------------- #
#  macOS                                                            #
# ---------------------------------------------------------------- #
def _launchctl(*args: str) -> subprocess.CompletedProcess:
    return subprocess.run(["launchctl", *args],
                            capture_output=True, text=True,
                            check=False)


def _macos_schedule(name: str, *, binary: str, interval: int,
                     user_id: str) -> Dict[str, object]:
    label = _label(name)
    path  = _plist_path(name)
    path.parent.mkdir(parents=True, exist_ok=True)
    body  = render_plist(label=label, binary=binary,
                          interval=interval, user_id=user_id,
                          log_dir=str(_logs_dir()))
    path.write_text(body, encoding="utf-8")

    uid = os.getuid()
    domain = f"gui/{uid}"
    # Idempotent: unload any prior instance, then load.
    _launchctl("bootout", f"{domain}/{label}")
    out = _launchctl("bootstrap", domain, str(path))
    if out.returncode != 0:
        return {"ok": False, "plist": str(path),
                 "error": (out.stderr or out.stdout).strip()}
    return {"ok": True, "plist": str(path),
             "interval": interval, "label": label}


def _macos_unschedule(name: str) -> Dict[str, object]:
    label = _label(name)
    path  = _plist_path(name)
    uid   = os.getuid()
    _launchctl("bootout", f"gui/{uid}/{label}")
    if path.exists():
        try:
            path.unlink()
        except OSError as exc:
            return {"ok": False, "error": str(exc)}
    return {"ok": True, "removed": str(path)}


# ---------------------------------------------------------------- #
#  Linux                                                            #
# ---------------------------------------------------------------- #
def _systemctl_user(*args: str) -> subprocess.CompletedProcess:
    return subprocess.run(["systemctl", "--user", *args],
                            capture_output=True, text=True,
                            check=False)


def _linux_schedule(name: str, *, binary: str, interval: int,
                     user_id: str) -> Dict[str, object]:
    svc = _service_name(name)
    units = render_systemd_units(service_name=svc, binary=binary,
                                   interval=interval, user_id=user_id)
    _systemd_dir().mkdir(parents=True, exist_ok=True)
    _service_path(name).write_text(units["service"], encoding="utf-8")
    _timer_path(name).write_text(units["timer"], encoding="utf-8")

    _systemctl_user("daemon-reload")
    out = _systemctl_user("enable", "--now", f"{svc}.timer")
    if out.returncode != 0:
        return {"ok": False, "service": svc,
                 "error": (out.stderr or out.stdout).strip()}
    return {"ok": True, "service": svc, "interval": interval}


def _linux_unschedule(name: str) -> Dict[str, object]:
    svc = _service_name(name)
    _systemctl_user("disable", "--now", f"{svc}.timer")
    for p in (_service_path(name), _timer_path(name)):
        try:
            if p.exists():
                p.unlink()
        except OSError as exc:
            return {"ok": False, "error": str(exc)}
    _systemctl_user("daemon-reload")
    return {"ok": True, "service": svc}
