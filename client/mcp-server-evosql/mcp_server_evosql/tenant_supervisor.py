"""
tenant_supervisor — Phase 2 #1: process-per-tenant fault isolation.

The multi-tenant platform's *data* boundary already exists: each tenant is an
EvolutionDB DATABASE + DB user + GRANT, and the engine denies cross-tenant
reads (42501). But all tenants share ONE engine process, so a genuine crash
(segfault / OOM / abort) in one tenant's work takes down every tenant until the
supervisor restarts. This module adds the *fault* boundary: each tenant gets its
OWN engine process — its own data dir, its own loopback port, and a per-tenant
admin password (HMAC-derived, never stored) — so one tenant crashing cannot
affect another, and a crashed tenant is restarted on its own.

It builds directly on the engine flags shipped this cycle: ``--data-dir``,
``--pg-port`` / ``--evo-port``, and ``--bind`` (default loopback). The same
supervisor abstraction later swaps its spawn backend from local subprocesses to
one pod/Helm-release per tenant on Kubernetes (container-per-tenant) without the
callers changing.

Single-host, single-supervisor model (the tenant->port map is in memory). A
persistent control plane + a wire router that demuxes by tenant are follow-ups;
this is the isolation primitive and its proof.
"""
from __future__ import annotations

import os
import shutil
import signal
import socket
import subprocess
import threading
import time
from dataclasses import dataclass
from typing import Dict, List, Optional

from .tenancy import tenant_db_name, derive_db_password


def _default_binary() -> str:
    """Locate the evosql-server binary: EVOSQL_SERVER_BIN, else the in-repo
    build (../../adaptor/evosql-server relative to this file), else PATH."""
    env = os.environ.get("EVOSQL_SERVER_BIN")
    if env:
        return env
    here = os.path.dirname(os.path.abspath(__file__))
    repo = os.path.abspath(os.path.join(here, "..", "..", ".."))
    cand = os.path.join(repo, "adaptor", "evosql-server")
    if os.path.exists(cand):
        return cand
    return shutil.which("evosql-server") or cand


@dataclass
class TenantInstance:
    """A running per-tenant engine. ``password`` is the engine admin password
    (HMAC-derived per tenant); a caller must know it to connect — a second
    isolation layer on top of the separate process + data dir."""
    tenant_id: str
    data_dir: str
    pg_port: int
    evo_port: int
    password: str
    proc: subprocess.Popen
    user: str = "admin"

    def alive(self) -> bool:
        return self.proc.poll() is None


class TenantSupervisor:
    def __init__(self, base_dir: str, *, binary: Optional[str] = None,
                 base_port: int = 6400, bind: str = "127.0.0.1",
                 auto_restart: bool = True, ready_timeout: float = 20.0,
                 mem_limit_mb: Optional[int] = None):
        self.base_dir = base_dir
        self.binary = binary or _default_binary()
        self.base_port = base_port
        self.bind = bind
        self.ready_timeout = ready_timeout
        # Per-tenant noisy-neighbour cap: each dedicated engine's buffer pool is
        # bounded to mem_limit_mb (via --buffer-pool-size), so one tenant cannot
        # starve the host of memory. None = engine default.
        self.mem_limit_mb = mem_limit_mb
        self._instances: Dict[str, TenantInstance] = {}
        self._ports: Dict[str, int] = {}     # stable port per tenant (survives restart)
        self._next_port = base_port
        self._lock = threading.RLock()
        os.makedirs(base_dir, exist_ok=True)
        self._stop_monitor = threading.Event()
        self._monitor: Optional[threading.Thread] = None
        if auto_restart:
            self._monitor = threading.Thread(target=self._monitor_loop, daemon=True)
            self._monitor.start()

    # -- public API ---------------------------------------------------------
    def ensure(self, tenant_id: str) -> TenantInstance:
        """Idempotently ensure the tenant's engine is running; return it. Stable
        ports + data dir across restarts, so reconnects keep working."""
        with self._lock:
            inst = self._instances.get(tenant_id)
            if inst is not None and inst.alive():
                return inst
            return self._spawn(tenant_id)

    def get(self, tenant_id: str) -> Optional[TenantInstance]:
        with self._lock:
            return self._instances.get(tenant_id)

    def instances(self) -> List[TenantInstance]:
        with self._lock:
            return list(self._instances.values())

    def stop(self, tenant_id: str) -> None:
        with self._lock:
            inst = self._instances.pop(tenant_id, None)
        if inst is not None:
            self._terminate(inst)

    def delete(self, tenant_id: str) -> None:
        """Offboard a tenant: stop its engine and remove its data dir + port
        reservation. Irreversible — the tenant's data is gone (back it up with
        backup() first if you may need it)."""
        self.stop(tenant_id)
        with self._lock:
            self._ports.pop(tenant_id, None)
        shutil.rmtree(self._tenant_dir(tenant_id), ignore_errors=True)

    def stop_all(self) -> None:
        self._stop_monitor.set()
        with self._lock:
            insts = list(self._instances.values())
            self._instances.clear()
        for inst in insts:
            self._terminate(inst)

    # -- per-tenant backup / restore (Phase 2 #2) ---------------------------
    def backup(self, tenant_id: str, dest_dir: str) -> str:
        """Crash-consistent ONLINE backup of one tenant's data dir into
        ``dest_dir``. Because each tenant is its own engine + data dir, a
        per-tenant backup is just a copy of that dir — but the order matters:
        copy ``evosql.db`` first and the WAL/archive last, so a restore replays
        the WAL to a consistent state (the same ordering evoagent backup uses).
        The tenant engine may keep running. Returns dest_dir."""
        src = self._tenant_dir(tenant_id)
        if not os.path.isdir(src):
            raise RuntimeError(f"no data dir for tenant {tenant_id!r}")
        os.makedirs(dest_dir, exist_ok=True)
        names = os.listdir(src)
        # data file first, then everything else, then WAL + archive last
        ordered = ([n for n in names if n == "evosql.db"]
                   + [n for n in names
                      if n not in ("evosql.db", "evosql.wal", "evosql.wal.archive")]
                   + [n for n in names if n in ("evosql.wal", "evosql.wal.archive")])
        for n in ordered:
            s = os.path.join(src, n)
            d = os.path.join(dest_dir, n)
            if os.path.isdir(s):
                shutil.copytree(s, d, dirs_exist_ok=True)
            else:
                shutil.copy2(s, d)
        return dest_dir

    def restore(self, tenant_id: str, src_dir: str) -> TenantInstance:
        """Restore a tenant from a backup dir: stop its engine, replace its data
        dir from ``src_dir``, and start it again on the same port. Offline for
        that ONE tenant only — every other tenant keeps serving."""
        if not os.path.isdir(src_dir):
            raise RuntimeError(f"backup source {src_dir!r} not found")
        # stop() pops the instance from _instances, so the monitor will NOT
        # respawn it underneath us during the swap.
        self.stop(tenant_id)
        data_dir = self._tenant_dir(tenant_id)
        shutil.rmtree(data_dir, ignore_errors=True)
        shutil.copytree(src_dir, data_dir)
        return self.ensure(tenant_id)

    def _tenant_dir(self, tenant_id: str) -> str:
        return os.path.join(self.base_dir, tenant_db_name(tenant_id))

    # -- internals ----------------------------------------------------------
    def _alloc_ports(self, tenant_id: str) -> int:
        """Stable pg port per tenant (evo port = pg+1). Remembered so a restart
        reuses the same port."""
        if tenant_id in self._ports:
            return self._ports[tenant_id]
        port = self._next_port
        self._next_port += 2
        self._ports[tenant_id] = port
        return port

    def _spawn(self, tenant_id: str) -> TenantInstance:
        data_dir = self._tenant_dir(tenant_id)
        os.makedirs(data_dir, exist_ok=True)
        pg_port = self._alloc_ports(tenant_id)
        evo_port = pg_port + 1
        password = derive_db_password(tenant_id)
        env = dict(os.environ)
        env.update({
            "EVOSQL_USER_NAME": "admin",
            "EVOSQL_PASSWORD": password,
            "EVOSQL_DATA_DIR": data_dir,
            # Each tenant engine is its own checkpoint/WAL domain; keep defaults.
        })
        # Drop any inherited multi-tenant secret so a per-tenant engine is a
        # plain single-database server (the supervisor IS the tenancy layer).
        env.pop("EVOSQL_TENANT_SECRET", None)
        cmd = [self.binary, "--pg-port", str(pg_port), "--evo-port", str(evo_port),
               "--bind", self.bind]
        if self.mem_limit_mb:
            cmd += ["--buffer-pool-size", f"{self.mem_limit_mb}M"]
        proc = subprocess.Popen(
            cmd, env=env, stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
        inst = TenantInstance(tenant_id=tenant_id, data_dir=data_dir,
                              pg_port=pg_port, evo_port=evo_port,
                              password=password, proc=proc)
        if not self._wait_ready(pg_port):
            self._terminate(inst)
            raise RuntimeError(
                f"tenant {tenant_id!r} engine did not become ready on :{pg_port}")
        self._instances[tenant_id] = inst
        return inst

    def _wait_ready(self, port: int) -> bool:
        deadline = time.time() + self.ready_timeout
        while time.time() < deadline:
            try:
                socket.create_connection((self.bind, port), 0.5).close()
                return True
            except OSError:
                time.sleep(0.1)
        return False

    def _terminate(self, inst: TenantInstance) -> None:
        if inst.proc.poll() is not None:
            return
        try:
            inst.proc.send_signal(signal.SIGTERM)
            inst.proc.wait(timeout=10)
        except (subprocess.TimeoutExpired, OSError):
            try:
                inst.proc.kill(); inst.proc.wait(timeout=5)
            except (subprocess.TimeoutExpired, OSError):
                pass

    def _monitor_loop(self) -> None:
        """Respawn any tenant engine that died — the fault-isolation guarantee:
        one tenant's crash never affects another, and the dead one comes back on
        its own (its data dir persists, so committed data survives)."""
        while not self._stop_monitor.wait(0.5):
            with self._lock:
                dead = [t for t, i in self._instances.items() if not i.alive()]
                for t in dead:
                    try:
                        self._spawn(t)   # reuses the same port + data dir
                    except Exception:
                        pass             # try again next tick
