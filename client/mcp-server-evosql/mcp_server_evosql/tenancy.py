"""
tenancy — request-scoped identity for the multi-tenant business platform.

The single-user assistant pinned one ``user_id`` on the server object. The
business platform serves many tenants from one process, so *who* a request
belongs to is no longer a server constant — it is a per-request value that
must be threaded from the transport (HTTP bearer / OAuth ``sub``) all the way
down to the database connection.

``Identity`` carries everything a tool call needs to act on behalf of a
tenant + user:

  * ``tenant_id`` / ``user_id`` — the logical tenant and the user within it.
    ``user_id`` is the ``mem_namespace`` partition (second isolation layer,
    application-level).
  * ``db_name`` / ``db_user`` / ``db_password`` — the EvolutionDB database and
    DB credentials. **Hard isolation is enforced by the engine** at DATABASE
    scope: each tenant gets its own ``CREATE DATABASE`` + ``CREATE USER`` +
    ``GRANT ALL ON DATABASE``. A spike (2026-06-10, see the program plan)
    proved a tenant user reading another tenant's database is denied 42501.
  * ``prefix`` — the memory-store name prefix *within* the tenant's database.
  * ``roles`` — application-level RBAC inside the tenant (admin/member/viewer);
    the cross-tenant boundary is the engine's job, this only scopes what a
    user may do *inside* its own tenant.
  * ``issue_use`` — whether the backend must run ``USE <db_name>`` right after
    connecting. The PG-wire startup ``database`` parameter is IGNORED by the
    engine (every connection lands in the default ``evosql`` database), so the
    *only* way to select a tenant's database is the runtime ``USE`` statement.
    The legacy single-tenant (stdio / env) identity keeps this False so its
    behaviour is byte-for-byte unchanged.

This module deliberately has no dependency on ``server`` so it can be imported
from the transport layer and the (future) provisioning path without cycles.
"""
from __future__ import annotations

import hashlib
import hmac
import json
import os
import re
import sys
from dataclasses import dataclass, field, replace
from datetime import datetime, timezone
from typing import Dict, List, Optional, Tuple

# DB identifiers (database / user names) we are willing to put into a SQL
# statement (``USE <db>``, ``CREATE DATABASE <db>`` …). Provisioning controls
# these, but we still validate — defence in depth against any path that lets a
# tenant influence its own db/user name. Mirrors a conservative SQL identifier.
_IDENT_RE = re.compile(r"^[A-Za-z_][A-Za-z0-9_]{0,62}$")

VALID_ROLES = ("admin", "member", "viewer")


def is_valid_identifier(name: str) -> bool:
    """True if ``name`` is safe to interpolate as a bare SQL identifier."""
    return bool(name) and bool(_IDENT_RE.match(name))


def _slug(tenant_id: str) -> str:
    """A human-readable, identifier-safe fragment of the tenant id. LOSSY by
    design (punctuation -> '_', edges stripped) — never used alone to derive an
    isolation coordinate; always paired with _hash_suffix for injectivity."""
    s = re.sub(r"[^A-Za-z0-9_]", "_", tenant_id or "")
    return s.strip("_") or "tenant"


def _hash_suffix(tenant_id: str, n: int = 16) -> str:
    """A collision-free fingerprint of the FULL raw tenant id (hex, n chars).

    The engine identifiers below MUST be an injective function of tenant_id:
    the lossy ``_slug`` alone maps 'acme.com'/'acme_com'/'acme-com'/'acme com'
    (and any pair differing only past the length cap) to the SAME slug, which
    would collapse distinct tenants onto one database+user+store-prefix and
    defeat the engine's per-DATABASE isolation. Appending this suffix makes the
    full identifier unique per raw tenant id while keeping a readable slug.
    """
    return hashlib.sha256((tenant_id or "").encode("utf-8")).hexdigest()[:n]


def _ident(prefix: str, tenant_id: str, maxlen: int) -> str:
    """Build ``<prefix>_<slug>_<hash>`` bounded to ``maxlen``. Injective in
    tenant_id (the hash suffix), readable (the slug), valid (charset + first
    char is a letter)."""
    h = _hash_suffix(tenant_id)
    keep = maxlen - len(prefix) - 2 - len(h)   # for the two '_' and the hash
    slug = _slug(tenant_id)[:max(1, keep)]
    return f"{prefix}_{slug}_{h}"


def tenant_db_name(tenant_id: str) -> str:
    """Deterministic, collision-free per-tenant database name (``t_<slug>_<h>``)."""
    return _ident("t", tenant_id, 63)


def tenant_db_user(tenant_id: str) -> str:
    """Deterministic, collision-free per-tenant database user (``u_<slug>_<h>``)."""
    return _ident("u", tenant_id, 63)


def tenant_store_prefix(tenant_id: str) -> str:
    """Deterministic, collision-free per-tenant memory-store prefix
    (``s_<slug>_<h>``).

    MUST be globally unique per tenant: EvolutionDB's memory-store catalog
    (CAT_SYS_MEMORY_STORES) is keyed by store NAME ALONE, with no database or
    schema qualifier (catalog_internal.c:3926). So two databases cannot host a
    store with the same name — a constant prefix like ``mcp`` would make every
    tenant's ``mcp_mem`` collide with the control-plane (evosql) ``mcp_mem``,
    and the colliding CREATE is silently swallowed, leaving PUT/SELECT pointed
    at the wrong database's backing table. The hash suffix also guarantees two
    tenants never share a store prefix. The DB-level GRANT is the hard data
    boundary; this just prevents catalog-name aliasing.
    """
    return _ident("s", tenant_id, 48)


def tenant_k8s_name(tenant_id: str) -> str:
    """Deterministic, collision-free Kubernetes object name for a dedicated
    tenant's workload (``t-<slug>-<h>``).

    Kubernetes names are RFC 1123 labels: lowercase ``[a-z0-9-]``, start/end
    alphanumeric, <= 63 chars — but the db name uses ``_`` and may be mixed
    case. This derives a DNS-safe name from the SAME injective construction
    (slug + full-id hash), so the StatefulSet/Service/Secret/PVC names stay
    unique per raw tenant id. Capped at 50 so the StatefulSet's ``-0`` pod
    ordinal and any headless-Service suffix stay within 63."""
    name = _ident("t", tenant_id, 50).replace("_", "-").lower()
    return name.strip("-") or "t-tenant"


@dataclass(frozen=True)
class Identity:
    """Immutable, request-scoped principal. Hashable so it can key a registry."""

    tenant_id: str
    user_id: str
    db_name: str
    db_user: str
    db_password: str = field(repr=False, default="")
    prefix: str = "mcp"
    roles: Tuple[str, ...] = ("admin",)
    issue_use: bool = False

    @property
    def backend_key(self) -> Tuple[str, str, str, str]:
        """Identifies a distinct DB connection/backend.

        Two identities of the SAME tenant sharing (db_user, db_name, prefix)
        share one backend (same connection, same USE target, same stores).
        ``tenant_id`` is included FIRST so that even if two tenants' derived
        identifiers ever collided, a cached backend can never be reused across
        tenants (defence in depth on top of the injective identifiers).
        """
        return (self.tenant_id, self.db_user, self.db_name, self.prefix)

    def has_role(self, *roles: str) -> bool:
        return any(r in self.roles for r in roles)

    def with_user(self, user_id: str) -> "Identity":
        """Same tenant/connection, different in-tenant user (mem_namespace)."""
        return replace(self, user_id=user_id)


def env_identity() -> Identity:
    """Build the legacy single-tenant identity from environment variables.

    This is the identity used by the stdio transport and by any request that
    arrives without a resolved tenant (backward compatibility). It connects
    exactly as the pre-multi-tenant server did: as ``EVOSQL_USER`` to the
    default database, and ``issue_use=False`` so no ``USE`` is run (preserving
    the historical "startup dbname is ignored, everything lands in evosql"
    behaviour bit-for-bit).
    """
    return Identity(
        tenant_id=os.environ.get("MCP_TENANT_ID", "default"),
        user_id=os.environ.get("MCP_USER_ID", "default_user"),
        db_name=os.environ.get("EVOSQL_DATABASE", "evosql"),
        db_user=os.environ.get("EVOSQL_USER", "admin"),
        db_password=os.environ.get("EVOSQL_PASSWORD", "admin"),
        prefix=os.environ.get("MCP_STORE_PREFIX", "mcp"),
        roles=("admin",),
        issue_use=False,
    )


# ====================================================================== #
#  Provisioning + control-plane registry + token->tenant resolver        #
# ====================================================================== #
#
# Mechanism (spike-verified 2026-06-10): each tenant is one EvolutionDB
# DATABASE + DB user + ``GRANT ALL ON DATABASE``; the engine enforces the
# cross-tenant boundary (a tenant user reading another tenant's DB is denied
# 42501). DB passwords are NOT stored anywhere — they are derived on demand via
# HMAC(EVOSQL_TENANT_SECRET, tenant_id), so the secret never leaves the
# environment and provisioning + resolution recompute the same value.
#
# The control plane (which tenants exist, each tenant's user roles, and the
# token->tenant bindings) lives in ONE memory store ``mcp_control`` on the
# ADMIN backend (the default ``evosql`` database). It MUST be cross-tenant
# readable to resolve a bearer -> tenant *before* we know which tenant DB to
# USE, so it cannot live inside a per-tenant database.

CONTROL_STORE = "mcp_control"  # control-plane registry store (admin/evosql DB)
DEFAULT_TOKEN_TTL_DAYS = 90

# registry record types (the mem_namespace discriminator in CONTROL_STORE)
_NS_TENANT = "tenant"          # key t_<slug>  -> tenant metadata
_NS_ROLE = "role"              # key t_<slug>  -> {"users": {user_id: [roles]}}
_NS_SUBJECT = "subject"        # key sha256(token) -> {tenant_id, user_id, ...}

# SQLSTATEs the engine emits that we treat as benign during (de)provisioning.
_SQLSTATE_DUP_OBJECT = "42710"     # CREATE USER / CREATE MEMORY STORE already exists
_SQLSTATE_UNDEF_OBJECT = "42704"   # DROP USER / missing memory store
_SQLSTATE_UNDEF_CATALOG = "3D000"  # DROP DATABASE missing (when not IF EXISTS)


def _now() -> float:
    return datetime.now(timezone.utc).timestamp()


def _now_iso() -> str:
    return datetime.now(timezone.utc).isoformat()


def _tenant_secret() -> str:
    return os.environ.get("EVOSQL_TENANT_SECRET", "")


def multitenant_enabled() -> bool:
    """Multi-tenant resolution/provisioning is active only when a server-side
    secret is configured. Without it, the server stays single-tenant and the
    legacy env identity is the only principal (full backward compatibility)."""
    return bool(_tenant_secret())


def derive_db_password(tenant_id: str) -> str:
    """Deterministic per-tenant DB password = HMAC(secret, tenant_id).

    Never stored: provisioning sets the DB user's password to this value and
    the resolver recomputes it. The result is ``p`` + 31 hex chars — only
    ``[a-f0-9]``, so it is always safe to inline in ``CREATE USER … PASSWORD``.
    """
    secret = _tenant_secret()
    if not secret:
        raise RuntimeError(
            "EVOSQL_TENANT_SECRET must be set to provision or resolve tenants")
    mac = hmac.new(secret.encode("utf-8"), (tenant_id or "").encode("utf-8"),
                   hashlib.sha256).hexdigest()
    return "p" + mac[:31]


def token_hash(token: str) -> str:
    """sha256 hex of a bearer token. Only the hash is ever persisted — the raw
    token never touches the registry, so a registry read cannot leak a token."""
    return hashlib.sha256((token or "").encode("utf-8")).hexdigest()


def for_tenant(tenant_id: str, user_id: str,
               roles: Tuple[str, ...] = ("member",),
               *, prefix: Optional[str] = None) -> Identity:
    """Build a request-scoped Identity for a tenant+user with engine-isolation
    coordinates (own DB, own DB user, derived password, unique store prefix,
    issue_use=True)."""
    return Identity(
        tenant_id=tenant_id,
        user_id=user_id,
        db_name=tenant_db_name(tenant_id),
        db_user=tenant_db_user(tenant_id),
        db_password=derive_db_password(tenant_id),
        prefix=prefix or tenant_store_prefix(tenant_id),
        roles=tuple(roles) or ("member",),
        issue_use=True,
    )


# A minimal principal for the audit layer's identity-field reader
# (tenant/user/roles getattrs only). Used at auth/privilege call sites where no
# full request-scoped ``Identity`` exists yet (e.g. a token denial, a role
# grant). Deliberately NOT a full Identity — it carries no DB credentials, so
# an audit row can never accidentally surface a connection secret.
@dataclass(frozen=True)
class _RoleAudit:
    tenant_id: str
    user_id: str
    roles: Tuple[str, ...] = ()


# ---------------------------------------------------------------- registry
class Registry:
    """Thin key-value control-plane over the admin backend's ``mcp_control``
    memory store. Values are always ``json.dumps``'d then ``_e``'d (the engine
    escape only doubles quotes — JSON-first neutralises backslashes), and keys
    are validated with the engine's ``_valid_key`` guard before inlining.

    Never selects ``created_at``/``ttl_at`` (the engine's timestamp format is
    unparseable by psycopg); timestamps live inside the JSON value instead.
    """

    def __init__(self, backend):
        self.backend = backend  # an admin-scoped MemoryBackend (db evosql)

    # -- low-level helpers --
    def ensure_store(self) -> None:
        """Idempotently create the control store. MEMORY PUT does NOT
        auto-create, so this must run before the first write."""
        try:
            self.backend._exec(f"CREATE MEMORY STORE IF NOT EXISTS {CONTROL_STORE}")
        except Exception as exc:  # noqa: BLE001 — tolerate "already exists"
            if getattr(exc, "sqlstate", None) != _SQLSTATE_DUP_OBJECT:
                raise

    def _put(self, namespace: str, key: str, value: dict) -> None:
        from .server import _e, _valid_key
        if not _valid_key(key):
            raise ValueError(f"unsafe registry key: {key!r}")
        payload = _e(json.dumps(value, ensure_ascii=False))
        self.backend._exec(
            f"MEMORY PUT INTO {CONTROL_STORE} VALUES "
            f"('{_e(namespace)}','{_e(key)}','{payload}')")

    def _get(self, namespace: str, key: str) -> Optional[dict]:
        from .server import _e, _valid_key
        if not _valid_key(key):
            return None
        try:
            rows = self.backend._query(
                f"SELECT mem_value FROM __mem_{CONTROL_STORE} "
                f"WHERE mem_namespace = '{_e(namespace)}' "
                f"AND mem_key = '{_e(key)}'") or []
        except Exception as exc:  # noqa: BLE001
            # store not provisioned yet -> no records
            if getattr(exc, "sqlstate", None) == _SQLSTATE_UNDEF_OBJECT:
                return None
            raise
        for row in rows:
            try:
                return json.loads(row[0])
            except (ValueError, TypeError):
                return None
        return None

    def _list(self, namespace: str) -> List[dict]:
        from .server import _e
        try:
            rows = self.backend._query(
                f"SELECT mem_value FROM __mem_{CONTROL_STORE} "
                f"WHERE mem_namespace = '{_e(namespace)}'") or []
        except Exception as exc:  # noqa: BLE001
            if getattr(exc, "sqlstate", None) == _SQLSTATE_UNDEF_OBJECT:
                return []
            raise
        out = []
        for row in rows:
            try:
                out.append(json.loads(row[0]))
            except (ValueError, TypeError):
                continue
        return out

    def _delete(self, namespace: str, key: str) -> None:
        from .server import _e, _valid_key
        if not _valid_key(key):
            return
        try:
            # Engine grammar is `MEMORY DELETE FROM <s> WHERE NS = '..' AND
            # KEY = '..'` (literal NS/KEY tokens, not the mem_namespace/mem_key
            # column names used in SELECT). See evoparser.y:2350.
            self.backend._exec(
                f"MEMORY DELETE FROM {CONTROL_STORE} "
                f"WHERE NS = '{_e(namespace)}' AND KEY = '{_e(key)}'")
        except Exception as exc:  # noqa: BLE001
            if getattr(exc, "sqlstate", None) == _SQLSTATE_UNDEF_OBJECT:
                return
            raise

    # -- tenant metadata --
    def put_tenant(self, meta: dict) -> None:
        self._put(_NS_TENANT, tenant_db_name(meta["tenant_id"]), meta)

    def get_tenant(self, tenant_id: str) -> Optional[dict]:
        return self._get(_NS_TENANT, tenant_db_name(tenant_id))

    def list_tenants(self) -> List[dict]:
        return self._list(_NS_TENANT)

    # -- per-tenant user roles (one record per tenant; users keyed inside) --
    def set_role(self, tenant_id: str, user_id: str,
                 roles: Tuple[str, ...]) -> None:
        key = tenant_db_name(tenant_id)
        rec = self._get(_NS_ROLE, key) or {"tenant_id": tenant_id, "users": {}}
        rec.setdefault("users", {})[user_id] = list(roles)
        rec["updated_at"] = _now_iso()
        self._put(_NS_ROLE, key, rec)
        # Faz 0 gap-closure: a role grant/record never passes through the
        # _call_tool audit hook, so without this it leaves no audit trace.
        # Best-effort + identifiers only (target = the granted user_id, the
        # new roles as the audited identity's roles); never blocks the write.
        try:
            from . import audit
            grantee = _RoleAudit(tenant_id, user_id, tuple(roles))
            audit.record_privilege(self.backend, grantee, "privilege.grant",
                                   user_id)
        except Exception:
            pass

    def get_roles(self, tenant_id: str, user_id: str) -> Optional[Tuple[str, ...]]:
        rec = self._get(_NS_ROLE, tenant_db_name(tenant_id))
        if not rec:
            return None
        roles = (rec.get("users") or {}).get(user_id)
        return tuple(roles) if roles else None

    # -- token -> tenant bindings (keyed by the token HASH) --
    def bind_subject(self, token: str, tenant_id: str, user_id: str,
                     *, ttl_days: int = DEFAULT_TOKEN_TTL_DAYS) -> None:
        rec = {"tenant_id": tenant_id, "user_id": user_id,
               "issued_at": _now_iso(),
               "expires": _now() + ttl_days * 86400.0}
        self._put(_NS_SUBJECT, token_hash(token), rec)

    def resolve_subject(self, token: str) -> Optional[dict]:
        rec = self._get(_NS_SUBJECT, token_hash(token))
        if not rec:
            return None
        exp = rec.get("expires")
        if exp is not None and _now() > float(exp):
            return None
        return rec

    def revoke_subject(self, token: str) -> None:
        self._delete(_NS_SUBJECT, token_hash(token))


# ---------------------------------------------------------------- provisioning
def _exec_ignore(backend, sql: str, ignore=()):
    """Run a DDL statement, swallowing the given benign SQLSTATEs."""
    try:
        backend._exec(sql)
    except Exception as exc:  # noqa: BLE001
        if getattr(exc, "sqlstate", None) in ignore:
            return
        raise


def provision_tenant(admin_backend, tenant_id: str, *,
                     users: Optional[List[Tuple[str, Tuple[str, ...]]]] = None,
                     name: Optional[str] = None,
                     prefix: Optional[str] = None) -> dict:
    """Idempotently provision a tenant: its database, DB user (derived
    password), GRANT, and control-plane registry records.

    ``users`` is a list of ``(user_id, roles)``; defaults to a single admin
    user whose id == ``tenant_id``. Re-running is safe (CREATE DATABASE IF NOT
    EXISTS; CREATE USER swallows 42710; GRANT is idempotent). Returns the
    tenant metadata dict.
    """
    if not multitenant_enabled():
        raise RuntimeError("EVOSQL_TENANT_SECRET must be set to provision tenants")
    db_name = tenant_db_name(tenant_id)
    db_user = tenant_db_user(tenant_id)
    prefix = prefix or tenant_store_prefix(tenant_id)
    if not (is_valid_identifier(db_name) and is_valid_identifier(db_user)):
        raise ValueError(f"tenant id {tenant_id!r} yields unsafe identifiers")
    pw = derive_db_password(tenant_id)   # p + hex -> safe to inline

    # 1) database  (natively idempotent)
    admin_backend._exec(f"CREATE DATABASE IF NOT EXISTS {db_name}")
    # 2) user  (no idempotent form: swallow "already exists")
    _exec_ignore(admin_backend,
                 f"CREATE USER {db_user} PASSWORD '{pw}'",
                 ignore=(_SQLSTATE_DUP_OBJECT,))
    # 3) grant  (idempotent; GRANT does not validate the grantee, so user first)
    admin_backend._exec(f"GRANT ALL ON DATABASE {db_name} TO {db_user}")

    # 4) registry
    reg = Registry(admin_backend)
    reg.ensure_store()
    meta = {"tenant_id": tenant_id, "name": name or tenant_id,
            "db_name": db_name, "db_user": db_user, "prefix": prefix,
            "status": "active", "created": _now_iso()}
    reg.put_tenant(meta)
    for user_id, roles in (users or [(tenant_id, ("admin",))]):
        reg.set_role(tenant_id, user_id, tuple(roles))
    return meta


def deprovision_tenant(admin_backend, tenant_id: str) -> None:
    """Tear a tenant down (for tests / lifecycle). Reverse dependency order,
    swallowing benign "missing" errors so it is idempotent and order-safe."""
    db_name = tenant_db_name(tenant_id)
    db_user = tenant_db_user(tenant_id)
    reg = Registry(admin_backend)
    reg._delete(_NS_TENANT, db_name)
    reg._delete(_NS_ROLE, db_name)
    # DROP DATABASE IF EXISTS cascades tables; the wire tag is misleadingly
    # 'DROP TABLE' so we never assert on it.
    _exec_ignore(admin_backend, f"DROP DATABASE IF EXISTS {db_name}",
                 ignore=(_SQLSTATE_UNDEF_CATALOG,))
    # DROP USER has no IF EXISTS -> swallow "does not exist".
    _exec_ignore(admin_backend, f"DROP USER {db_user}",
                 ignore=(_SQLSTATE_UNDEF_OBJECT,))


def issue_token(admin_backend, tenant_id: str, user_id: str, *,
                ttl_days: int = DEFAULT_TOKEN_TTL_DAYS,
                roles: Optional[Tuple[str, ...]] = None) -> str:
    """Mint an opaque bearer token bound to (tenant, user) in the registry and
    return the RAW token (shown once; only its hash is stored). If ``roles`` is
    given the user's roles are (re)set first."""
    import secrets
    reg = Registry(admin_backend)
    reg.ensure_store()
    if roles is not None:
        reg.set_role(tenant_id, user_id, tuple(roles))
    token = secrets.token_urlsafe(32)
    reg.bind_subject(token, tenant_id, user_id, ttl_days=ttl_days)
    return token


def identity_for_token(token: str, admin_backend) -> Optional[Identity]:
    """Resolve a bearer token to a tenant Identity via the registry, or None if
    the token is unknown/expired/unauthorized. Fail-closed:

      * the token binding must exist and be unexpired (``resolve_subject``);
      * the tenant must still exist and be ``active`` (``get_tenant``) — so a
        deprovisioned tenant's still-live tokens become inert even though
        teardown does not enumerate-and-revoke them;
      * the (tenant, user) must have an explicit role record — a MISSING role
        record means "not authorized", NOT a silent ``member`` default (which
        would re-grant access to a stale token after a same-id re-provision
        that didn't re-add the user).
    """
    if not token or not multitenant_enabled():
        return None
    reg = Registry(admin_backend)
    sub = reg.resolve_subject(token)
    if not sub:
        return None
    tenant_id = sub.get("tenant_id")
    user_id = sub.get("user_id")
    if not tenant_id or not user_id:
        return None
    # token PREFIX-hash: a non-reversible, non-sensitive reference for the
    # audit row that does NOT carry the raw bearer token (token_hash already
    # one-way hashes; we keep only its first 12 chars as a correlation handle).
    ref = token_hash(token)[:12]
    meta = reg.get_tenant(tenant_id)
    if not meta or meta.get("status") != "active":
        # Tenant gone/suspended: identity is known, so record the denial. The
        # tenant DB may not be addressable any more, so this writes to the
        # control-plane audit store (best-effort; skipped silently on failure).
        _audit_auth_denied(reg.backend, tenant_id, user_id, (), ref)
        return None
    roles = reg.get_roles(tenant_id, user_id)
    if not roles:
        # Tenant active but the (tenant,user) has no role record -> not
        # authorized. Identity is known; record the denial best-effort.
        _audit_auth_denied(reg.backend, tenant_id, user_id, (), ref)
        return None
    return for_tenant(tenant_id, user_id, roles)


def registry_tier_lookup(admin_backend):
    """A ``tier_lookup(tenant_id) -> 'shared'|'dedicated'|None`` backed by the
    control-plane registry, so the tier an operator sets (control_plane.set_tier
    persists it in the tenant meta) actually drives TenantRouter routing. Pass it
    as ``TenantRouter(..., tier_lookup=registry_tier_lookup(admin_backend))``.
    Best-effort: a missing tenant / store / unknown value returns None (the
    router then defaults to the shared tier)."""
    reg = Registry(admin_backend)

    def _lookup(tenant_id: str):
        try:
            meta = reg.get_tenant(tenant_id) or {}
        except Exception:
            return None
        t = meta.get("tier")
        return t if t in ("shared", "dedicated") else None

    return _lookup


def _audit_auth_denied(backend, tenant_id: str, user_id: str,
                       roles: Tuple[str, ...], ref: Optional[str]) -> None:
    """Best-effort auth-denial audit at a token-resolution dead end where the
    tenant/user is known. Faz 0: if the backend exposes no addressable audit
    store, skip silently (a fully unresolvable token leaves no row — noted as a
    follow-up). Never alters the fail-closed control flow."""
    try:
        if not getattr(backend, "audit_store", None):
            return
        from . import audit
        ident = _RoleAudit(tenant_id, user_id, tuple(roles))
        audit.record_auth(backend, ident, "auth.denied", "denied", ref=ref)
    except Exception:
        pass


# ---------------------------------------------------------------- ops CLI
def _admin_backend():
    """Build an admin-scoped backend (env creds, default evosql DB) for ops."""
    from .server import MCPServer
    srv = MCPServer()
    return srv._backend_for(srv.default_identity)


def main(argv: Optional[List[str]] = None) -> int:
    """`python -m mcp_server_evosql.tenancy <cmd>` — provision/manage tenants.

    Requires EVOSQL_TENANT_SECRET (the password-derivation secret) and the
    usual EVOSQL_* admin connection env. Examples:
        provision acme --name "Acme Corp" --user alice@acme:admin --user bob@acme:member
        issue-token acme alice@acme --role admin
        list
        deprovision acme
    """
    import argparse
    p = argparse.ArgumentParser(prog="python -m mcp_server_evosql.tenancy")
    sub = p.add_subparsers(dest="cmd", required=True)

    pp = sub.add_parser("provision", help="create a tenant DB+user+GRANT+registry")
    pp.add_argument("tenant_id")
    pp.add_argument("--name", default=None)
    pp.add_argument("--user", action="append", default=[],
                    metavar="USER_ID[:role[,role]]",
                    help="a tenant user and its roles (repeatable)")

    it = sub.add_parser("issue-token", help="mint a bearer token for a user")
    it.add_argument("tenant_id")
    it.add_argument("user_id")
    it.add_argument("--role", action="append", default=None)
    it.add_argument("--ttl-days", type=int, default=DEFAULT_TOKEN_TTL_DAYS)

    sub.add_parser("list", help="list provisioned tenants")

    dp = sub.add_parser("deprovision", help="drop a tenant DB+user+registry")
    dp.add_argument("tenant_id")

    args = p.parse_args(argv)

    if not multitenant_enabled():
        print("EVOSQL_TENANT_SECRET is not set — refusing to manage tenants.",
              file=sys.stderr)
        return 2

    backend = _admin_backend()

    if args.cmd == "provision":
        users = []
        for spec in args.user:
            uid, _sep, roles = spec.partition(":")
            users.append((uid, tuple((roles or "member").split(","))))
        meta = provision_tenant(backend, args.tenant_id,
                                users=users or None, name=args.name)
        print(json.dumps(meta, indent=2))
        return 0

    if args.cmd == "issue-token":
        roles = tuple(args.role) if args.role else None
        token = issue_token(backend, args.tenant_id, args.user_id,
                            ttl_days=args.ttl_days, roles=roles)
        print(token)
        return 0

    if args.cmd == "list":
        for t in Registry(backend).list_tenants():
            print(json.dumps(t))
        return 0

    if args.cmd == "deprovision":
        deprovision_tenant(backend, args.tenant_id)
        print(f"deprovisioned {args.tenant_id}")
        return 0

    return 1


if __name__ == "__main__":
    raise SystemExit(main())
