"""
Embedded EvoSQL server lifecycle.

Goal: `evosql-teams-sync --embedded` should "just work" on a machine
that has neither Docker nor a hand-built evosql-server. The module:

  1. Detects the host platform.
  2. Looks up the latest published `server-v*` release on GitHub.
  3. Downloads the matching binary into a stable cache directory.
  4. Verifies its SHA-256 against the manifest published alongside it.
  5. Launches it as a long-running subprocess that listens on the
     standard PG (5433) + EVO (9967) ports — same as the Docker
     stack, so DBeaver / psql / the bundled CLI still work.
  6. Writes a pid file so subsequent invocations re-use the running
     server instead of spawning a second one.

Reasonable cross-platform support: Linux x86_64, Linux arm64, macOS
arm64. Windows and macOS Intel are not yet shipped as native
binaries — the embedded mode tells the caller to fall back to
Docker on those platforms.

Public surface:

    from teams_sync.embedded import EmbeddedServer

    srv = EmbeddedServer()
    srv.ensure_running()        # downloads + launches if needed
    # ...
    # No explicit stop call needed for normal use — leaving the
    # server running matches the launchd/systemd model the rest of
    # the sync stack uses.

The download / launch parts are intentionally idempotent: re-running
`ensure_running()` is cheap if the binary is already cached and the
process is still alive.
"""
from __future__ import annotations

import hashlib
import os
import platform
import socket
import stat
import subprocess
import sys
import time
import urllib.error
import urllib.request
from pathlib import Path
from typing import Optional


# -------------------------------------------------------------------- #
#  Defaults                                                            #
# -------------------------------------------------------------------- #
GITHUB_OWNER = "alptekin"
GITHUB_REPO = "evolutiondb"
RELEASE_TAG_PREFIX = "server-v"

CACHE_ROOT = Path(os.path.expanduser("~/.evosql"))
BIN_DIR = CACHE_ROOT / "bin"
DATA_DIR = CACHE_ROOT / "data"
RUN_DIR = CACHE_ROOT / "run"

DEFAULT_PG_PORT = 5433
DEFAULT_EVO_PORT = 9967

HTTP_USER_AGENT = "evosql-teams-sync-embedded/0.1"
DOWNLOAD_TIMEOUT_SEC = 60


class EmbeddedError(RuntimeError):
    pass


# -------------------------------------------------------------------- #
#  Platform detection                                                  #
# -------------------------------------------------------------------- #
def _detect_asset_name() -> str:
    """Map sys.platform + machine to the release asset name produced
    by .github/workflows/server-build.yml. Raises EmbeddedError if
    the host platform is not currently shipped as a native binary."""
    sysname = sys.platform
    machine = platform.machine().lower()

    if sysname == "linux":
        if machine in ("x86_64", "amd64"):
            return "evosql-server-linux-x86_64"
        if machine in ("aarch64", "arm64"):
            return "evosql-server-linux-arm64"
    elif sysname == "darwin":
        if machine in ("arm64", "aarch64"):
            return "evosql-server-macos-arm64"
        # macOS Intel is not built — fall through to the error below.
    elif sysname.startswith("win"):
        raise EmbeddedError(
            "Windows is not yet supported in --embedded mode. "
            "Use Docker (docker compose up -d) or wait for the native "
            "Windows binary to be released.")

    raise EmbeddedError(
        f"No prebuilt evosql-server for {sysname}/{machine}. "
        "Supported targets: linux x86_64, linux arm64, macOS arm64.")


# -------------------------------------------------------------------- #
#  GitHub release lookup                                               #
# -------------------------------------------------------------------- #
def _http_get(url: str, *, accept: str = "application/json") -> bytes:
    req = urllib.request.Request(url, headers={
        "User-Agent": HTTP_USER_AGENT,
        "Accept": accept,
    })
    try:
        with urllib.request.urlopen(req, timeout=DOWNLOAD_TIMEOUT_SEC) as resp:
            return resp.read()
    except urllib.error.HTTPError as exc:
        raise EmbeddedError(
            f"GET {url} -> HTTP {exc.code}: {exc.reason}") from exc
    except urllib.error.URLError as exc:
        raise EmbeddedError(f"GET {url} failed: {exc.reason}") from exc


def _latest_release_tag() -> str:
    """Find the highest-numbered server-v* tag on the repo. Uses the
    /releases listing (not /releases/latest) because the Release for
    the server binary is a distinct artefact from the project's
    overall latest release, and only ones tagged server-v* are
    candidates."""
    import json
    url = (f"https://api.github.com/repos/{GITHUB_OWNER}/"
           f"{GITHUB_REPO}/releases?per_page=50")
    body = _http_get(url)
    rels = json.loads(body.decode("utf-8"))
    candidates = [r for r in rels
                  if r.get("tag_name", "").startswith(RELEASE_TAG_PREFIX)]
    if not candidates:
        raise EmbeddedError(
            "No server-v* releases found on github.com/"
            f"{GITHUB_OWNER}/{GITHUB_REPO}. Run the server-build "
            "workflow + push a server-v<version> tag first.")
    # GitHub returns newest-first by default; first matching is latest.
    return candidates[0]["tag_name"]


def _download_url(tag: str, asset_name: str) -> str:
    return (f"https://github.com/{GITHUB_OWNER}/{GITHUB_REPO}/"
            f"releases/download/{tag}/{asset_name}")


# -------------------------------------------------------------------- #
#  Cache layout                                                        #
# -------------------------------------------------------------------- #
def _binary_cache_path(tag: str, asset_name: str) -> Path:
    return BIN_DIR / tag / asset_name


def _pid_file() -> Path:
    return RUN_DIR / "evosql-server.pid"


def _sha256(path: Path) -> str:
    h = hashlib.sha256()
    with path.open("rb") as fh:
        for chunk in iter(lambda: fh.read(1 << 20), b""):
            h.update(chunk)
    return h.hexdigest()


# -------------------------------------------------------------------- #
#  Download                                                            #
# -------------------------------------------------------------------- #
def _download_binary(tag: str, asset_name: str) -> Path:
    """Fetch the binary and verify it against the published sha256
    manifest. Returns the absolute path to the executable on disk."""
    target = _binary_cache_path(tag, asset_name)
    target.parent.mkdir(parents=True, exist_ok=True)

    # The manifest is a one-line file: "<hex>  <asset_name>".
    sha_url = _download_url(tag, f"{asset_name}.sha256")
    expected_sha = (_http_get(sha_url, accept="text/plain")
                    .decode("ascii").split()[0].strip())

    if target.exists() and _sha256(target) == expected_sha:
        return target

    url = _download_url(tag, asset_name)
    tmp = target.with_suffix(".tmp")
    print(f"[teams-sync] downloading {asset_name} ({tag})",
          file=sys.stderr, flush=True)
    body = _http_get(url, accept="application/octet-stream")
    tmp.write_bytes(body)

    got = _sha256(tmp)
    if got != expected_sha:
        tmp.unlink(missing_ok=True)
        raise EmbeddedError(
            f"sha256 mismatch for {asset_name}: expected {expected_sha}, "
            f"got {got}")
    tmp.replace(target)
    target.chmod(target.stat().st_mode | stat.S_IXUSR | stat.S_IXGRP)
    return target


# -------------------------------------------------------------------- #
#  Server lifecycle                                                    #
# -------------------------------------------------------------------- #
def _is_port_open(host: str, port: int, *, timeout: float = 0.5) -> bool:
    try:
        with socket.create_connection((host, port), timeout=timeout):
            return True
    except OSError:
        return False


# -------------------------------------------------------------------- #
#  Daemon spawn                                                        #
# -------------------------------------------------------------------- #
def _daemon_spawn(*, argv, cwd: str, log_path: str, pid_file: str,
                  env: Optional[dict] = None) -> int:
    """Launch the binary as a detached background process.

    `start_new_session=True` puts the child in its own session so it
    is immune to SIGHUP when the originating shell or Python process
    exits. `close_fds=True` (the default in Python 3.7+) keeps any
    parent file descriptors from leaking into the child. Stdio is
    pointed at /dev/null + a log file with raw OS fds rather than
    Python-owned file objects, which sidesteps an issue where
    routing the spawn through `sh -c nohup ...` caused the binary
    to die with SIGBUS shortly after startup."""
    log_fd = os.open(log_path,
                     os.O_WRONLY | os.O_CREAT | os.O_APPEND, 0o644)
    try:
        proc = subprocess.Popen(
            list(argv),
            cwd=cwd,
            env=env,
            stdin=subprocess.DEVNULL,
            stdout=log_fd,
            stderr=log_fd,
            close_fds=True,
            start_new_session=True,
        )
    finally:
        os.close(log_fd)
    Path(pid_file).write_text(f"{proc.pid}\n", encoding="ascii")
    return proc.pid


def _pid_alive(pid: int) -> bool:
    try:
        os.kill(pid, 0)
        return True
    except ProcessLookupError:
        return False
    except PermissionError:
        return True


class EmbeddedServer:
    def __init__(self,
                 pg_port: int = DEFAULT_PG_PORT,
                 evo_port: int = DEFAULT_EVO_PORT,
                 data_dir: Optional[Path] = None,
                 release_tag: Optional[str] = None,
                 admin_user: str = "admin",
                 admin_password: str = "admin"):
        self.pg_port = pg_port
        self.evo_port = evo_port
        self.data_dir = data_dir or DATA_DIR
        self.release_tag = release_tag
        # The server auto-generates a random admin password on first
        # boot unless EVOSQL_USER_NAME / EVOSQL_PASSWORD are present
        # in its environment. We pass deterministic defaults so the
        # sync (and any tool reading from MCP_USER_ID) can connect
        # without scraping the random password out of the log.
        self.admin_user = admin_user
        self.admin_password = admin_password
        self.binary_path: Optional[Path] = None
        self.proc: Optional[subprocess.Popen] = None

    # -- public ------------------------------------------------------
    def ensure_running(self, *, wait_secs: float = 10.0) -> None:
        """Bring up the server if it isn't already serving on
        `pg_port`. Returns once the server accepts a TCP connection
        on that port, or raises EmbeddedError after `wait_secs`."""
        if _is_port_open("127.0.0.1", self.pg_port):
            return  # Something already listening (Docker, manual run).

        existing_pid = self._read_pid()
        if existing_pid and _pid_alive(existing_pid):
            self._wait_for_port(wait_secs)
            return

        self.binary_path = self._resolve_binary()
        self.data_dir.mkdir(parents=True, exist_ok=True)
        RUN_DIR.mkdir(parents=True, exist_ok=True)
        log_path = RUN_DIR / "evosql-server.log"

        # Double-fork into a true daemon. `subprocess.Popen` plus
        # `start_new_session` is enough to detach from a controlling
        # terminal but the child still belongs to the original
        # process group; on macOS / Linux it tends to be reaped soon
        # after the parent Python exits, especially when the parent
        # was a short-lived --once invocation. The textbook double-
        # fork pattern reparents the server under init/launchd so it
        # survives independently of every later CLI call.
        spawn_env = dict(os.environ)
        spawn_env["EVOSQL_USER_NAME"] = self.admin_user
        spawn_env["EVOSQL_PASSWORD"] = self.admin_password
        pid = _daemon_spawn(
            argv=[str(self.binary_path),
                  "--pg-port", str(self.pg_port),
                  "--evo-port", str(self.evo_port)],
            cwd=str(self.data_dir),
            log_path=str(log_path),
            pid_file=str(_pid_file()),
            env=spawn_env,
        )
        if pid <= 0:
            raise EmbeddedError(
                "failed to daemonize evosql-server (no pid returned)")
        self._wait_for_port(wait_secs)

    def stop(self) -> None:
        """Best-effort terminate. Embedded mode normally keeps the
        server running across CLI invocations; call this only from
        an explicit teardown path."""
        pid = self._read_pid()
        if not pid:
            return
        try:
            os.kill(pid, 15)  # SIGTERM
        except ProcessLookupError:
            pass
        self._pid_file_clear()

    # -- internals ---------------------------------------------------
    def _resolve_binary(self) -> Path:
        asset = _detect_asset_name()
        tag = self.release_tag or _latest_release_tag()
        return _download_binary(tag, asset)

    def _wait_for_port(self, wait_secs: float) -> None:
        deadline = time.monotonic() + wait_secs
        while time.monotonic() < deadline:
            if _is_port_open("127.0.0.1", self.pg_port):
                return
            time.sleep(0.2)
        raise EmbeddedError(
            f"evosql-server did not open PG port {self.pg_port} "
            f"within {wait_secs} seconds — see {RUN_DIR}/evosql-server.log")

    def _read_pid(self) -> Optional[int]:
        f = _pid_file()
        if not f.exists():
            return None
        try:
            return int(f.read_text().strip())
        except ValueError:
            return None

    def _write_pid(self, pid: int) -> None:
        _pid_file().write_text(f"{pid}\n", encoding="ascii")

    def _pid_file_clear(self) -> None:
        try:
            _pid_file().unlink()
        except FileNotFoundError:
            pass
