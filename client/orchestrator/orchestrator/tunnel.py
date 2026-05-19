"""
Manage the MCP HTTP transport + an optional Cloudflare quick
tunnel so web hosts (chat.openai.com, gemini.google.com) can reach
the same evolutiondb-memory server the desktop clients use.

Two processes the hub can run on the user's behalf:

  evolutiondb-mcp-http — local listener (127.0.0.1:<port>/mcp).
                         Spawned with an auto-generated bearer
                         token if EVOSQL_MCP_AUTH_TOKEN is unset.

  cloudflared tunnel  — quick tunnel that publishes the local
                         port at `https://*.trycloudflare.com`.
                         Optional. Skipped if cloudflared is not
                         on PATH.

Both processes are tracked in `~/.evosql/orchestrator.json` under
`tunnel.{http_pid, cloudflared_pid, port, token, public_url}`.
"""
from __future__ import annotations

import os
import re
import secrets
import shutil
import signal
import subprocess
import sys
import time
from pathlib import Path
from typing import Dict, Optional

from . import state as state_mod
from . import supervisor as sup


DEFAULT_PORT       = 8970
DEFAULT_OAUTH_PORT = 8972
LOG_DIR = Path("~/.evosql/logs").expanduser()
_CFD_URL_RE = re.compile(r"https://[a-z0-9\-]+\.trycloudflare\.com")


# ---------------------------------------------------------------- #
#  Status                                                           #
# ---------------------------------------------------------------- #
def status() -> Dict[str, object]:
    state  = state_mod.load()
    tunnel = state.get("tunnel") or {}

    http_pid  = tunnel.get("http_pid") or 0
    cfd_pid   = tunnel.get("cloudflared_pid") or 0
    oauth_pid = tunnel.get("oauth_pid") or 0

    http_alive  = bool(http_pid)  and sup.pid_alive(http_pid)
    cfd_alive   = bool(cfd_pid)   and sup.pid_alive(cfd_pid)
    oauth_alive = bool(oauth_pid) and sup.pid_alive(oauth_pid)

    # If only one half is alive, surface that — the state file got
    # cleaned up unevenly between runs.
    return {
        "running":         http_alive,
        "http_pid":        http_pid if http_alive else None,
        "port":            tunnel.get("port") or DEFAULT_PORT,
        "token":           tunnel.get("token") if http_alive else None,
        "oauth":           oauth_alive,
        "oauth_pid":       oauth_pid if oauth_alive else None,
        "oauth_port":      tunnel.get("oauth_port") or DEFAULT_OAUTH_PORT,
        "cloudflared":     cfd_alive,
        "cloudflared_pid": cfd_pid if cfd_alive else None,
        "public_url":      tunnel.get("public_url") if cfd_alive else None,
        "log_http":        str(LOG_DIR / "mcp-http.log"),
        "log_oauth":       str(LOG_DIR / "mcp-oauth.log"),
        "log_cloudflared": str(LOG_DIR / "cloudflared.log"),
    }


# ---------------------------------------------------------------- #
#  Start                                                            #
# ---------------------------------------------------------------- #
def start(*, port: Optional[int] = None,
           token: Optional[str] = None,
           tunnel: bool = True) -> Dict[str, object]:
    cur = status()
    if cur["running"]:
        return {"ok": False, "error": (
            f"already running on port {cur['port']} "
            f"(pid {cur['http_pid']})")}

    binary = shutil.which("evolutiondb-mcp-http")
    if binary is None:
        return {"ok": False, "error": (
            "evolutiondb-mcp-http not on PATH. Install "
            "`pip install mcp-server-evolutiondb`.")}

    port  = port  or int(os.environ.get("EVOSQL_MCP_HTTP_PORT",
                                          str(DEFAULT_PORT)))
    token = (token
              or os.environ.get("EVOSQL_MCP_AUTH_TOKEN", "").strip()
              or secrets.token_hex(24))

    LOG_DIR.mkdir(parents=True, exist_ok=True)
    http_log = open(LOG_DIR / "mcp-http.log", "ab", buffering=0)
    env = os.environ.copy()
    env["EVOSQL_MCP_AUTH_TOKEN"] = token
    env["EVOSQL_MCP_HTTP_PORT"]  = str(port)

    proc = subprocess.Popen(
        [binary, "--host", "127.0.0.1", "--port", str(port)],
        stdout=http_log, stderr=http_log, stdin=subprocess.DEVNULL,
        start_new_session=True, close_fds=True, env=env,
    )
    time.sleep(0.3)
    if proc.poll() is not None:
        http_log.close()
        return {"ok": False, "error": (
            f"evolutiondb-mcp-http exited immediately "
            f"(rc={proc.returncode}). See {LOG_DIR / 'mcp-http.log'}")}

    state = state_mod.load()
    state.setdefault("tunnel", {}).update({
        "http_pid":         proc.pid,
        "port":             port,
        "token":            token,
        "started_at":       int(time.time()),
        "oauth_pid":        None,
        "oauth_port":       None,
        "cloudflared_pid":  None,
        "public_url":       None,
    })
    state_mod.save(state)

    result: Dict[str, object] = {
        "ok":        True,
        "http_pid":  proc.pid,
        "port":      port,
        "token":     token,
        "local_url": f"http://127.0.0.1:{port}/mcp",
    }

    # OAuth proxy in front of the bearer-only http_transport so that
    # ChatGPT-class clients (which require OAuth 2.1) can connect.
    oauth = _start_oauth_proxy(upstream_port=port, upstream_token=token)
    result["oauth_proxy"] = oauth
    if not oauth.get("ok"):
        # If the proxy failed, fall back to exposing http_transport
        # directly — same behaviour as before this feature landed.
        public_port = port
    else:
        public_port = int(oauth.get("port") or DEFAULT_OAUTH_PORT)

    if tunnel:
        cfd = _start_cloudflared(public_port)
        result["cloudflared"] = cfd

    return result


def _start_oauth_proxy(*, upstream_port: int,
                        upstream_token: str) -> Dict[str, object]:
    binary = shutil.which("evolutiondb-mcp-oauth")
    if binary is None:
        return {"ok": False, "error": (
            "evolutiondb-mcp-oauth not on PATH. Reinstall "
            "`pip install mcp-server-evolutiondb` to get the proxy.")}

    port = int(os.environ.get("EVOSQL_OAUTH_PROXY_PORT",
                                str(DEFAULT_OAUTH_PORT)))
    log_fh = open(LOG_DIR / "mcp-oauth.log", "ab", buffering=0)
    env = os.environ.copy()
    env["EVOSQL_MCP_UPSTREAM"]     = f"http://127.0.0.1:{upstream_port}/mcp"
    env["EVOSQL_MCP_AUTH_TOKEN"]   = upstream_token
    env["EVOSQL_OAUTH_PROXY_PORT"] = str(port)

    proc = subprocess.Popen(
        [binary, "--host", "127.0.0.1", "--port", str(port)],
        stdout=log_fh, stderr=log_fh, stdin=subprocess.DEVNULL,
        start_new_session=True, close_fds=True, env=env,
    )
    time.sleep(0.3)
    if proc.poll() is not None:
        return {"ok": False, "error": (
            f"evolutiondb-mcp-oauth exited immediately "
            f"(rc={proc.returncode}). See {LOG_DIR / 'mcp-oauth.log'}")}

    state = state_mod.load()
    state.setdefault("tunnel", {}).update({
        "oauth_pid":  proc.pid,
        "oauth_port": port,
    })
    state_mod.save(state)

    return {"ok": True, "pid": proc.pid, "port": port,
            "local_url": f"http://127.0.0.1:{port}/mcp"}


def _start_cloudflared(port: int) -> Dict[str, object]:
    binary = shutil.which("cloudflared")
    if binary is None:
        return {"ok": False, "error": (
            "cloudflared not on PATH. Skipping public tunnel. "
            "Install with `brew install cloudflared` or visit "
            "https://github.com/cloudflare/cloudflared/releases.")}

    log_path = LOG_DIR / "cloudflared.log"
    # Reset the log so the URL parser doesn't pick up an old run.
    log_path.write_text("", encoding="utf-8")
    log_fh = open(log_path, "ab", buffering=0)

    proc = subprocess.Popen(
        [binary, "tunnel", "--url", f"http://127.0.0.1:{port}",
         "--no-autoupdate"],
        stdout=log_fh, stderr=log_fh, stdin=subprocess.DEVNULL,
        start_new_session=True, close_fds=True,
    )

    public_url = _await_cloudflared_url(log_path, timeout_s=20.0)

    state = state_mod.load()
    state.setdefault("tunnel", {}).update({
        "cloudflared_pid": proc.pid,
        "public_url":      public_url,
    })
    state_mod.save(state)

    return {
        "ok":          True,
        "pid":         proc.pid,
        "public_url":  public_url,
        "log":         str(log_path),
        "note":        ("URL not parsed in 20s — cloudflared may still "
                         "be starting; check the log file."
                         if public_url is None else None),
    }


def _await_cloudflared_url(log_path: Path,
                            timeout_s: float = 20.0) -> Optional[str]:
    deadline = time.time() + timeout_s
    while time.time() < deadline:
        try:
            text = log_path.read_text(encoding="utf-8", errors="replace")
        except OSError:
            text = ""
        m = _CFD_URL_RE.search(text)
        if m:
            return m.group(0)
        time.sleep(0.4)
    return None


# ---------------------------------------------------------------- #
#  Stop                                                             #
# ---------------------------------------------------------------- #
def stop() -> Dict[str, object]:
    state  = state_mod.load()
    tunnel = state.get("tunnel") or {}
    killed = []
    for key in ("cloudflared_pid", "oauth_pid", "http_pid"):
        pid = tunnel.get(key) or 0
        if pid and sup.pid_alive(pid):
            try:
                os.kill(pid, signal.SIGTERM)
                killed.append({key: pid})
            except (OSError, ProcessLookupError):
                pass
    # Give them up to 2s to exit before SIGKILL.
    deadline = time.time() + 2.0
    while time.time() < deadline:
        if all(not sup.pid_alive(tunnel.get(k) or 0)
                for k in ("cloudflared_pid", "oauth_pid", "http_pid")):
            break
        time.sleep(0.1)
    for key in ("cloudflared_pid", "oauth_pid", "http_pid"):
        pid = tunnel.get(key) or 0
        if pid and sup.pid_alive(pid):
            try:
                os.kill(pid, signal.SIGKILL)
            except (OSError, ProcessLookupError):
                pass

    state["tunnel"] = {}
    state_mod.save(state)
    return {"ok": True, "killed": killed}
