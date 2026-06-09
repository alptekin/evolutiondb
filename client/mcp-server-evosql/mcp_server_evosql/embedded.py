"""
embedded — zero-Docker mode: the MCP server spawns its own EvolutionDB.

With EVOSQL_EMBEDDED=1, on first connect the server checks EVOSQL_HOST:PORT; if
nothing is listening it starts a local EvolutionDB against a per-user data dir and
connects to it (the process lives until the MCP server exits). If something IS
already listening, it leaves it alone — an external/shared instance still wins.
See ADR-003 (Track 1).

Binary resolution order: EVOSQL_SERVER_BINARY → a binary bundled in the package
(the `[embedded]` wheel vendors one per platform) → `evosql-server` on PATH → the
repo's `adaptor/evosql-server` (dev checkout). The binary uses its working
directory for storage (no --data-dir flag), so we run it inside the data dir.
"""
from __future__ import annotations

import hashlib
import os
import platform
import shutil
import socket
import subprocess
import sys
import time
import urllib.request
from pathlib import Path
from typing import Optional

# Default prebuilt-binary release. The server-v* releases attach raw
# evosql-server-<os>-<arch> assets (+ .sha256); see server-build.yml.
SERVER_VERSION = os.environ.get("EVOSQL_SERVER_VERSION", "3.0.0")
RELEASE_BASE = os.environ.get(
    "EVOSQL_SERVER_RELEASE_BASE",
    "https://github.com/alptekin/evolutiondb/releases/download")


def _truthy(v) -> bool:
    return str(v or "").strip().lower() in ("1", "true", "yes", "on")


def default_data_dir() -> Path:
    """Per-user, OS-appropriate data directory for the embedded instance."""
    override = os.environ.get("EVOSQL_EMBEDDED_DATA_DIR")
    if override:
        return Path(os.path.expanduser(override))
    if sys.platform == "darwin":
        base = Path.home() / "Library" / "Application Support" / "EvolutionDB"
    elif sys.platform.startswith("win"):
        base = Path(os.environ.get("APPDATA", Path.home())) / "EvolutionDB"
    else:
        base = Path(os.environ.get("XDG_DATA_HOME",
                                   Path.home() / ".local" / "share")) / "evolutiondb"
    return base / "data"


def _exe(name="evosql-server"):
    return name + ".exe" if sys.platform.startswith("win") else name


def fetched_binary_path() -> Path:
    """Where an auto-fetched binary is cached (next to the data dir)."""
    return default_data_dir().parent / "bin" / _exe()


def asset_name() -> str:
    """The release asset for this OS/arch. Raises if no prebuilt is published."""
    m = platform.machine().lower()
    if sys.platform == "darwin":
        if m in ("arm64", "aarch64"):
            return "evosql-server-macos-arm64"
        raise RuntimeError(f"no prebuilt evosql-server for macOS {m} — build it "
                           "and set EVOSQL_SERVER_BINARY")
    if sys.platform.startswith("win"):
        return "evosql-server-windows-x86_64.exe"
    if m in ("x86_64", "amd64"):
        return "evosql-server-linux-x86_64"
    if m in ("aarch64", "arm64"):
        return "evosql-server-linux-arm64"
    raise RuntimeError(f"no prebuilt evosql-server for {sys.platform}/{m}")


def resolve_binary() -> Optional[str]:
    """Find the evosql-server binary, in precedence order. None if not found."""
    env = os.environ.get("EVOSQL_SERVER_BINARY")
    if env and os.path.exists(env):
        return env
    # bundled in the package (the [embedded] wheel ships one under bin/)
    bundled = Path(__file__).resolve().parent / "bin" / _exe()
    if bundled.exists():
        return str(bundled)
    on_path = shutil.which("evosql-server")
    if on_path:
        return on_path
    # previously auto-fetched into the per-user cache
    fetched = fetched_binary_path()
    if fetched.exists():
        return str(fetched)
    # dev checkout: client/mcp-server-evosql/mcp_server_evosql/ -> repo/adaptor
    repo = Path(__file__).resolve().parents[3]
    dev = repo / "adaptor" / _exe()
    return str(dev) if dev.exists() else None


def fetch_binary(*, version=None, dest=None, base=None, _open=None) -> str:
    """Download the prebuilt evosql-server for this platform into `dest` (default
    the per-user cache), verifying the published .sha256. Returns the path.
    `_open` is injectable for tests (defaults to urllib)."""
    version = version or SERVER_VERSION
    base = base or RELEASE_BASE
    opener = _open or (lambda url: urllib.request.urlopen(url, timeout=180))
    asset = asset_name()
    url = f"{base}/server-v{version}/{asset}"
    dest = Path(dest) if dest else fetched_binary_path()
    dest.parent.mkdir(parents=True, exist_ok=True)

    with opener(url) as r:
        data = r.read()
    with opener(url + ".sha256") as r:               # integrity is mandatory
        expected = r.read().decode().split()[0].strip()
    got = hashlib.sha256(data).hexdigest()
    if expected != got:
        raise RuntimeError(f"checksum mismatch for {asset}: got {got}, "
                           f"expected {expected}")
    tmp = dest.with_name(dest.name + ".part")
    tmp.write_bytes(data)
    os.chmod(tmp, 0o755)
    tmp.replace(dest)
    return str(dest)


def _port_in_use(host: str, port: int, timeout=0.5) -> bool:
    try:
        with socket.create_connection((host, port), timeout=timeout):
            return True
    except OSError:
        return False


class EmbeddedEvolutionDB:
    """Lifecycle for a locally-spawned EvolutionDB. Idempotent: ensure_running()
    is a no-op when something already serves the port."""

    def __init__(self, *, host="127.0.0.1", port=5433, data_dir=None,
                 binary=None, evo_port=None,
                 user="admin", password="admin"):
        self.host = host
        self.port = port
        self.evo_port = evo_port or port + 4534      # 9967 - 5433
        self.data_dir = Path(data_dir) if data_dir else default_data_dir()
        self.binary = binary or resolve_binary()
        self.user = user
        self.password = password
        self.proc: Optional[subprocess.Popen] = None
        self.spawned = False

    def ensure_running(self, *, timeout=20) -> bool:
        """Start the binary if the port is free. Returns True if we spawned it,
        False if an existing instance is already serving. Raises on failure."""
        if _port_in_use(self.host, self.port):
            return False                              # external instance serves
        if not self.binary or not os.path.exists(self.binary):
            # auto-fetch the prebuilt binary once (on by default under embedded;
            # disable with EVOSQL_EMBEDDED_AUTOFETCH=0)
            if _truthy(os.environ.get("EVOSQL_EMBEDDED_AUTOFETCH", "1")):
                self.binary = fetch_binary()
            else:
                raise RuntimeError(
                    "embedded mode is on but no evosql-server binary was found — "
                    "set EVOSQL_SERVER_BINARY, put evosql-server on PATH, or allow "
                    "auto-fetch (EVOSQL_EMBEDDED_AUTOFETCH=1)")
        self.data_dir.mkdir(parents=True, exist_ok=True)
        env = dict(os.environ, EVOSQL_USER_NAME=self.user,
                   EVOSQL_PASSWORD=self.password)
        self.proc = subprocess.Popen(
            [self.binary, "--pg-port", str(self.port),
             "--evo-port", str(self.evo_port)],
            cwd=str(self.data_dir), env=env,
            stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        self.spawned = True
        self._wait_for_port(timeout)
        return True

    def _wait_for_port(self, timeout) -> None:
        deadline = time.time() + timeout
        while time.time() < deadline:
            if self.proc and self.proc.poll() is not None:
                raise RuntimeError(
                    f"embedded EvolutionDB exited early (code {self.proc.returncode})")
            if _port_in_use(self.host, self.port):
                return
            time.sleep(0.25)
        self.close()
        raise RuntimeError(f"embedded EvolutionDB did not open port {self.port} "
                           f"within {timeout}s")

    def close(self) -> None:
        if self.proc and self.proc.poll() is None:
            self.proc.terminate()
            try:
                self.proc.wait(timeout=5)
            except subprocess.TimeoutExpired:
                self.proc.kill()
        self.proc = None


def maybe_start(host: str, port: int) -> Optional[EmbeddedEvolutionDB]:
    """If EVOSQL_EMBEDDED is set, ensure a local instance is running and return
    its handle (so the caller can close it on shutdown). No-op otherwise."""
    if not _truthy(os.environ.get("EVOSQL_EMBEDDED")):
        return None
    import atexit
    emb = EmbeddedEvolutionDB(host=host, port=port)
    if emb.ensure_running():
        atexit.register(emb.close)   # reap the spawned instance on exit
    return emb


def main(argv=None) -> int:
    """`evolutiondb-embedded-fetch` — download the prebuilt evosql-server for this
    platform into the per-user cache (the binary embedded mode would auto-fetch)."""
    import argparse
    ap = argparse.ArgumentParser(
        prog="evolutiondb-embedded-fetch",
        description="Fetch the prebuilt evosql-server binary for embedded mode.")
    ap.add_argument("--version", default=SERVER_VERSION,
                    help=f"server release version (default {SERVER_VERSION})")
    args = ap.parse_args(argv)
    try:
        print(f"Fetching {asset_name()} (server-v{args.version}) …")
        path = fetch_binary(version=args.version)
        print(f"✓ {path}")
        return 0
    except Exception as exc:
        print(f"✗ {exc}", file=sys.stderr)
        return 1


if __name__ == "__main__":
    raise SystemExit(main())
