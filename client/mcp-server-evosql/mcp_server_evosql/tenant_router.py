"""
tenant_router — Phase 2: tier-aware routing (shared pool vs dedicated engine).

The industry pattern (Postgres, SQL Server/Azure Elastic Pools, Oracle PDBs,
MongoDB) is the same: most tenants share ONE engine process (cheap, dense),
isolated by GRANT; a few enterprise/regulated/high-SLA tenants get their OWN
instance for hard crash/fault isolation. Nobody picks one — they ship BOTH as
tiers and make graduating a tenant a provisioning step, not a rewrite.

This is the single point that turns a tenant id into the connection coordinates
for *its* tier:

  * ``shared``    -> the shared engine, as the tenant's DB user, then ``USE
                     <tenant_db>`` (the existing model; GRANT is the boundary).
  * ``dedicated`` -> the tenant's own engine via the TenantSupervisor (its own
                     process/data dir/port/password; the whole engine is the
                     tenant, so no ``USE`` and the boundary is the OS process).

Graduating shared->dedicated is therefore a metadata flip (set_tier) plus a data
migration (a follow-up); the routing itself is config, not code — which is the
Phase-2 north star ("a button, not a migration project").
"""
from __future__ import annotations

import os
from dataclasses import dataclass
from typing import Dict, Optional

from .tenancy import tenant_db_name, tenant_db_user, derive_db_password
from .tenant_supervisor import TenantSupervisor

SHARED = "shared"
DEDICATED = "dedicated"

ACTIVE = "active"
SUSPENDED = "suspended"


class TenantSuspended(Exception):
    """Raised when routing a suspended tenant. The server turns this into a
    denial — a suspended tenant (non-payment, abuse, offboarding) is refused."""
    def __init__(self, tenant_id: str):
        super().__init__(f"tenant {tenant_id!r} is suspended")
        self.tenant_id = tenant_id


@dataclass(frozen=True)
class ConnCoords:
    """Everything a backend needs to reach a tenant's data, for either tier."""
    host: str
    port: int
    db: str
    user: str
    password: str
    issue_use: bool   # run ``USE <db>`` after connect (shared pool only)
    tier: str

    @property
    def backend_key(self):
        return (self.tier, self.host, self.port, self.db, self.user)


class TenantRouter:
    def __init__(self, supervisor: TenantSupervisor, *,
                 shared_host: Optional[str] = None,
                 shared_port: Optional[int] = None,
                 shared_admin_user: str = "admin",
                 tiers: Optional[Dict[str, str]] = None,
                 tier_lookup=None):
        """``supervisor`` provisions dedicated engines. The shared pool is the
        existing single engine (EVOSQL_HOST/PORT by default). A tenant's tier
        comes from the in-memory ``tiers`` map and/or an optional
        ``tier_lookup(tenant_id) -> 'shared'|'dedicated'|None`` (e.g. the
        control-plane registry); default is ``shared``."""
        self.supervisor = supervisor
        self.shared_host = shared_host or os.environ.get("EVOSQL_HOST", "127.0.0.1")
        self.shared_port = int(shared_port or os.environ.get("EVOSQL_PORT", "5433"))
        self.shared_admin_user = shared_admin_user
        self._tiers: Dict[str, str] = dict(tiers or {})
        self._tier_lookup = tier_lookup
        self._status: Dict[str, str] = {}   # tenant_id -> active|suspended

    # -- tier metadata ------------------------------------------------------
    def tier(self, tenant_id: str) -> str:
        t = self._tiers.get(tenant_id)
        if t is None and self._tier_lookup is not None:
            t = self._tier_lookup(tenant_id)
        return t if t in (SHARED, DEDICATED) else SHARED

    def set_tier(self, tenant_id: str, tier: str) -> None:
        if tier not in (SHARED, DEDICATED):
            raise ValueError(f"unknown tier {tier!r}")
        self._tiers[tenant_id] = tier

    # -- lifecycle ----------------------------------------------------------
    def status(self, tenant_id: str) -> str:
        return self._status.get(tenant_id, ACTIVE)

    def suspend(self, tenant_id: str) -> None:
        """Suspend a tenant: future requests are refused, and its dedicated
        engine (if any) is stopped to free resources. Reversible via resume()."""
        self._status[tenant_id] = SUSPENDED
        self.supervisor.stop(tenant_id)

    def resume(self, tenant_id: str) -> None:
        """Reactivate a suspended tenant; its engine restarts on the next
        request (ensure())."""
        self._status[tenant_id] = ACTIVE

    # -- routing ------------------------------------------------------------
    def coordinates(self, tenant_id: str) -> ConnCoords:
        """Resolve the tenant to its tier's connection coordinates, ensuring a
        dedicated engine is running when needed. Refuses a suspended tenant."""
        if self.status(tenant_id) == SUSPENDED:
            raise TenantSuspended(tenant_id)
        if self.tier(tenant_id) == DEDICATED:
            inst = self.supervisor.ensure(tenant_id)
            # The dedicated engine IS the tenant: connect to its default db as
            # its admin; the boundary is the OS process (local) or the pod (K8s),
            # so no USE. host is loopback for the local supervisor and the
            # per-tenant Service DNS for the Kubernetes backend.
            return ConnCoords(host=getattr(inst, "host", "127.0.0.1"),
                              port=inst.pg_port, db="evosql",
                              user="admin", password=inst.password,
                              issue_use=False, tier=DEDICATED)
        # Shared pool: connect as the tenant's own DB user and USE its database;
        # the engine's per-DATABASE GRANT denies cross-tenant reads.
        return ConnCoords(host=self.shared_host, port=self.shared_port,
                          db=tenant_db_name(tenant_id),
                          user=tenant_db_user(tenant_id),
                          password=derive_db_password(tenant_id),
                          issue_use=True, tier=SHARED)

    def target_for_identity(self, identity) -> dict:
        """Map a resolved Identity to the backend connection target for its
        tier. Used by the MCP server's backend factory so a request lands on
        the tenant's tier (shared pool vs its own engine). Keeps the identity's
        store ``prefix`` (the store names are tier-independent, so a graduated
        tenant's stores keep their names). The cache key includes the tier +
        host/port so a tenant's shared and dedicated backends cache apart."""
        c = self.coordinates(identity.tenant_id)
        return {
            "host": c.host, "port": c.port, "user": c.user,
            "password": c.password, "database": c.db,
            "use_database": c.db if c.issue_use else None,
            "prefix": identity.prefix,
            "cache_key": (identity.tenant_id, c.tier, c.host, c.port,
                          c.db, c.user, identity.prefix),
        }
