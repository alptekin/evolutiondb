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

    # -- routing ------------------------------------------------------------
    def coordinates(self, tenant_id: str) -> ConnCoords:
        """Resolve the tenant to its tier's connection coordinates, ensuring a
        dedicated engine is running when needed."""
        if self.tier(tenant_id) == DEDICATED:
            inst = self.supervisor.ensure(tenant_id)
            # The dedicated engine IS the tenant: connect to its default db as
            # its admin; the OS process is the boundary, so no USE.
            return ConnCoords(host="127.0.0.1", port=inst.pg_port, db="evosql",
                              user="admin", password=inst.password,
                              issue_use=False, tier=DEDICATED)
        # Shared pool: connect as the tenant's own DB user and USE its database;
        # the engine's per-DATABASE GRANT denies cross-tenant reads.
        return ConnCoords(host=self.shared_host, port=self.shared_port,
                          db=tenant_db_name(tenant_id),
                          user=tenant_db_user(tenant_id),
                          password=derive_db_password(tenant_id),
                          issue_use=True, tier=SHARED)
