"""
control_plane — an authenticated OPERATOR web UI + JSON API to manage tenants.

Until now the only way to run the multi-tenant control plane was the
``python -m mcp_server_evosql.tenancy`` CLI. This is the browser front door: a
small stdlib HTTP server (same pattern as the agent web UI — no framework, a
single embedded HTML page) that WRAPS the existing control-plane functions
(provision / suspend / resume / delete / issue-token / set-tier / DSAR). No new
business logic; it exposes what already exists, gated to OPERATORS only
(operator_auth — OIDC + static token, never a tenant token).

    EVOSQL_TENANT_SECRET=... EVOSQL_CONTROL_TOKEN=... evosql-control-plane
    # http://127.0.0.1:8900

Runs separately from the tenant-facing agent UI so the superuser surface never
co-mingles with a tenant's surface.
"""
from __future__ import annotations

import json
import os
import sys
import tempfile
import threading
import time
import urllib.parse
from datetime import datetime, timezone
from http.server import BaseHTTPRequestHandler, ThreadingHTTPServer
from pathlib import Path
from typing import Optional

from . import operator_auth, tenancy

_STATIC = Path(__file__).resolve().parent.parent / "web" / "control.html"
_RATE_LOCK = threading.Lock()
_RATE: dict = {}


# ====================================================================== logic
class ControlPlane:
    """Control-plane operations over the admin backend + per-tenant backends.
    Holds an MCPServer purely as the backend factory; injectable for tests."""

    def __init__(self, mcp=None):
        self._mcp = mcp
        self._lock = threading.Lock()

    def _server(self):
        with self._lock:
            if self._mcp is None:
                from .server import MCPServer
                self._mcp = MCPServer()
            return self._mcp

    def admin_backend(self):
        m = self._server()
        return m._backend_for(m.default_identity)

    def tenant_backend(self, tenant_id: str, user_id: str, roles=("admin",)):
        m = self._server()
        return m._backend_for(tenancy.for_tenant(tenant_id, user_id, tuple(roles)))

    def registry(self) -> "tenancy.Registry":
        return tenancy.Registry(self.admin_backend())

    def _audit(self, operator, action: str, outcome: str, ref: Optional[str] = None):
        try:
            from . import audit
            audit.record(self.admin_backend(), operator, f"control.{action}",
                         outcome, ref=ref)
        except Exception:
            pass

    # -- operations (each returns a JSON-able dict) -----------------------
    def list_tenants(self) -> dict:
        out = []
        for meta in self.registry().list_tenants():
            out.append({
                "tenant_id": meta.get("tenant_id"),
                "name": meta.get("name"),
                "tier": meta.get("tier", "shared"),
                "status": meta.get("status", "active"),
                "created": meta.get("created"),
            })
        out.sort(key=lambda t: (t.get("created") or "", t.get("tenant_id") or ""))
        return {"tenants": out}

    def provision(self, operator, tenant_id: str, name: str = "",
                  admin_user: str = "") -> dict:
        tenant_id = (tenant_id or "").strip()
        if not tenant_id:
            raise ValueError("tenant_id is required")
        users = [((admin_user.strip() or tenant_id), ("admin",))]
        meta = tenancy.provision_tenant(self.admin_backend(), tenant_id,
                                        name=name.strip() or None, users=users)
        self._audit(operator, "provision", "ok", ref=tenant_id)
        return {"tenant": meta}

    def _set_status(self, operator, tenant_id: str, status: str) -> dict:
        reg = self.registry()
        meta = reg.get_tenant(tenant_id)
        if not meta:
            raise KeyError(tenant_id)
        meta["status"] = status
        reg.put_tenant(meta)
        self._audit(operator, "suspend" if status != "active" else "resume",
                    "ok", ref=tenant_id)
        return {"tenant_id": tenant_id, "status": status}

    def suspend(self, operator, tenant_id: str) -> dict:
        return self._set_status(operator, tenant_id, "suspended")

    def resume(self, operator, tenant_id: str) -> dict:
        return self._set_status(operator, tenant_id, "active")

    def set_tier(self, operator, tenant_id: str, tier: str) -> dict:
        if tier not in ("shared", "dedicated"):
            raise ValueError(f"tier must be 'shared' or 'dedicated', got {tier!r}")
        reg = self.registry()
        meta = reg.get_tenant(tenant_id)
        if not meta:
            raise KeyError(tenant_id)
        meta["tier"] = tier
        reg.put_tenant(meta)
        self._audit(operator, "set_tier", "ok", ref=f"{tenant_id}:{tier}")
        return {"tenant_id": tenant_id, "tier": tier}

    def delete(self, operator, tenant_id: str) -> dict:
        if not self.registry().get_tenant(tenant_id):
            raise KeyError(tenant_id)
        tenancy.deprovision_tenant(self.admin_backend(), tenant_id)
        self._audit(operator, "delete", "ok", ref=tenant_id)
        return {"tenant_id": tenant_id, "deleted": True}

    def _dedicated_backend(self):
        """Construct the Kubernetes spawn backend for dedicated-tenant at-rest
        maintenance (key rotation), from env. Encryption is ON so a key exists to
        rotate. Overridable in tests. Raises if it is not configured.

        K8s maintenance is kubectl-based (stateless w.r.t. the backend object),
        so the control plane can drive it on the cluster's named objects without
        sharing the serving process's router/supervisor instance."""
        from .tenant_k8s import KubernetesTenantBackend
        image = os.environ.get("EVOSQL_TENANT_IMAGE", "").strip()
        if not image:
            raise RuntimeError(
                "dedicated-tenant maintenance is not configured on this control "
                "plane (set EVOSQL_TENANT_IMAGE and the EVOSQL_TENANT_* env)")
        return KubernetesTenantBackend(
            namespace=os.environ.get("EVOSQL_TENANT_NAMESPACE", "default"),
            image=image,
            kubectl=os.environ.get("EVOSQL_TENANT_KUBECTL", "kubectl"),
            encrypt=True)

    def rotate_key(self, operator, tenant_id: str,
                   rotate_dek: bool = True) -> dict:
        """Rotate a DEDICATED tenant's at-rest encryption key (the KMS button).
        Shared-pool tenants share one engine + one key, so per-tenant rotation
        applies only to dedicated tenants. Offline for that ONE tenant only;
        every other tenant keeps serving. Returns the backend's rotate_key result
        ({ok, passphrase_rotated, dek_rotated, needs_reconcile, detail})."""
        meta = self.registry().get_tenant(tenant_id)
        if not meta:
            raise KeyError(tenant_id)
        if meta.get("tier") != "dedicated":
            raise ValueError("key rotation applies only to dedicated tenants "
                             "(the shared pool uses one engine key for all)")
        result = self._dedicated_backend().rotate_key(
            tenant_id, rotate_dek=bool(rotate_dek))
        self._audit(operator, "rotate_key",
                    "ok" if result.get("ok") else "partial",
                    ref=f"{tenant_id}:dek={bool(rotate_dek)}")
        return result

    def _backup_root(self, name: str) -> str:
        """The control plane's backups area for one tenant's K8s name. Persisted
        on EVOSQL_BACKUP_DIR (mount a volume there to survive pod restarts);
        falls back to a temp dir for dev/tests."""
        base = (os.environ.get("EVOSQL_BACKUP_DIR", "").strip()
                or os.path.join(tempfile.gettempdir(), "evosql-backups"))
        return os.path.join(base, name)

    def backup(self, operator, tenant_id: str) -> dict:
        """Back up a DEDICATED tenant's data dir to the control plane's backups
        area (EVOSQL_BACKUP_DIR/<tenant>/<timestamp>). Online — the tenant keeps
        serving. Returns the backup id. Shared-pool tenants share one engine, so
        per-tenant backup applies only to dedicated tenants."""
        meta = self.registry().get_tenant(tenant_id)
        if not meta:
            raise KeyError(tenant_id)
        if meta.get("tier") != "dedicated":
            raise ValueError("backup applies only to dedicated tenants")
        name = tenancy.tenant_k8s_name(tenant_id)
        backup_id = datetime.now(timezone.utc).strftime("%Y%m%dT%H%M%S_%fZ")
        dest = os.path.join(self._backup_root(name), backup_id)
        self._dedicated_backend().backup(tenant_id, dest)
        self._prune_backups(name)   # opt-in retention (EVOSQL_BACKUP_KEEP)
        self._audit(operator, "backup", "ok", ref=f"{tenant_id}:{backup_id}")
        return {"tenant_id": tenant_id, "backup": backup_id}

    def _prune_backups(self, name: str) -> None:
        """Keep only the EVOSQL_BACKUP_KEEP newest backups for a tenant (0 =
        keep all, the default). Backup ids are timestamps, so a reverse sort is
        newest-first. Best-effort; never blocks a successful backup."""
        try:
            keep = int(os.environ.get("EVOSQL_BACKUP_KEEP", "0") or "0")
        except ValueError:
            keep = 0
        if keep <= 0:
            return
        root = self._backup_root(name)
        try:
            dirs = sorted((e for e in os.listdir(root)
                           if os.path.isdir(os.path.join(root, e))), reverse=True)
        except OSError:
            return
        import shutil
        for old in dirs[keep:]:
            shutil.rmtree(os.path.join(root, old), ignore_errors=True)

    def list_backups(self, tenant_id: str) -> dict:
        """A dedicated tenant's available backups (newest first)."""
        if not self.registry().get_tenant(tenant_id):
            raise KeyError(tenant_id)
        root = self._backup_root(tenancy.tenant_k8s_name(tenant_id))
        out = []
        try:
            entries = os.listdir(root)
        except OSError:
            entries = []
        for e in entries:
            p = os.path.join(root, e)
            if not os.path.isdir(p):
                continue
            try:
                created = datetime.fromtimestamp(
                    os.path.getmtime(p), timezone.utc).isoformat()
            except OSError:
                created = ""
            out.append({"id": e, "created": created})
        out.sort(key=lambda b: b["id"], reverse=True)
        return {"tenant_id": tenant_id, "backups": out}

    def restore(self, operator, tenant_id: str, backup_id: str) -> dict:
        """Restore a DEDICATED tenant from one of its backups (the data dir is
        replaced from the backup). Offline for that ONE tenant only; IRREVERSIBLE
        — the HTTP layer requires confirm. ``backup_id`` must be a single safe
        path component that resolves to an existing backup under the tenant's
        backups root (no traversal)."""
        meta = self.registry().get_tenant(tenant_id)
        if not meta:
            raise KeyError(tenant_id)
        if meta.get("tier") != "dedicated":
            raise ValueError("restore applies only to dedicated tenants")
        if (not backup_id or "/" in backup_id or "\\" in backup_id
                or backup_id in (".", "..")):
            raise ValueError("invalid backup id")
        root = self._backup_root(tenancy.tenant_k8s_name(tenant_id))
        src = os.path.join(root, backup_id)
        rp_root, rp_src = os.path.realpath(root), os.path.realpath(src)
        if not (rp_src == rp_root or rp_src.startswith(rp_root + os.sep)) \
                or not os.path.isdir(rp_src):
            raise ValueError(f"unknown backup {backup_id!r}")
        self._dedicated_backend().restore(tenant_id, src)
        self._audit(operator, "restore", "ok", ref=f"{tenant_id}:{backup_id}")
        return {"tenant_id": tenant_id, "restored": backup_id}

    def issue_token(self, operator, tenant_id: str, user_id: str,
                    roles=("admin",), ttl_days: int = 90) -> dict:
        if not self.registry().get_tenant(tenant_id):
            raise KeyError(tenant_id)
        user_id = (user_id or "").strip() or tenant_id
        token = tenancy.issue_token(self.admin_backend(), tenant_id, user_id,
                                    ttl_days=int(ttl_days), roles=tuple(roles))
        self._audit(operator, "issue_token", "ok", ref=f"{tenant_id}:{user_id}")
        # The raw token is returned ONCE (only its hash is stored).
        return {"tenant_id": tenant_id, "user_id": user_id, "token": token,
                "ttl_days": int(ttl_days)}

    def dsar_export(self, operator, tenant_id: str, subject: str) -> dict:
        if not self.registry().get_tenant(tenant_id):
            raise KeyError(tenant_id)
        from . import dsar
        backend = self.tenant_backend(tenant_id, subject)
        bundle = dsar.export_and_record(backend, operator, subject, tenant=tenant_id)
        return {"bundle": bundle}

    def dsar_erase(self, operator, tenant_id: str, subject: str) -> dict:
        if not self.registry().get_tenant(tenant_id):
            raise KeyError(tenant_id)
        from . import dsar
        backend = self.tenant_backend(tenant_id, subject)
        result = dsar.erase_and_record(backend, operator, subject)
        return {"result": result}

    # -- connected accounts (connector tokens) + OAuth consents -----------
    def list_accounts(self, tenant_id: str, user: str = "") -> dict:
        """The connector accounts a tenant/user has connected — the per-tenant
        token-store rows (token:<connector>). Values stay encrypted; we only
        surface the connector name + last-updated, never the token."""
        if not self.registry().get_tenant(tenant_id):
            raise KeyError(tenant_id)
        from .server import _e
        ns = (user or "").strip() or tenant_id
        backend = self.tenant_backend(tenant_id, ns)
        rows = []
        try:
            rows = backend._query(
                "SELECT mem_key, mem_value FROM __mem_mcp_tokens "
                f"WHERE mem_namespace = '{_e(ns)}' "
                "AND mem_key LIKE 'token:%'") or []
        except Exception:
            rows = []
        out = []
        for key, val in rows:
            connector = str(key).split("token:", 1)[-1]
            updated = None
            try:
                updated = json.loads(val).get("updated")
            except Exception:
                pass
            out.append({"connector": connector, "updated": updated})
        out.sort(key=lambda a: a["connector"])
        return {"tenant_id": tenant_id, "user": ns, "accounts": out}

    def revoke_account(self, operator, tenant_id: str, connector: str,
                       user: str = "") -> dict:
        """Delete a tenant's stored connector token — they must re-authorize."""
        if not self.registry().get_tenant(tenant_id):
            raise KeyError(tenant_id)
        from .server import _e, _valid_key
        ns = (user or "").strip() or tenant_id
        key = f"token:{connector}"
        if not _valid_key(key):
            raise ValueError(f"invalid connector name: {connector!r}")
        backend = self.tenant_backend(tenant_id, ns)
        try:
            backend._exec(f"MEMORY DELETE FROM mcp_tokens "
                          f"WHERE NS = '{_e(ns)}' AND KEY = '{_e(key)}'")
        except Exception:
            pass
        self._audit(operator, "revoke_account", "ok", ref=f"{tenant_id}:{ns}:{connector}")
        return {"tenant_id": tenant_id, "user": ns, "connector": connector,
                "revoked": True}

    def list_consents(self) -> dict:
        """OAuth client approvals remembered by the proxy (consent:<client_id>
        in the mcp_oauth store, the proxy's MCP_USER_ID namespace)."""
        from .server import _e
        ns = os.environ.get("MCP_USER_ID", "default_user")
        backend = self.admin_backend()
        rows = []
        try:
            rows = backend._query(
                "SELECT mem_key, mem_value FROM __mem_mcp_oauth "
                f"WHERE mem_namespace = '{_e(ns)}' "
                "AND mem_key LIKE 'consent:%'") or []
        except Exception:
            rows = []
        out = []
        for key, val in rows:
            cid = str(key).split("consent:", 1)[-1]
            rec = {}
            try:
                rec = json.loads(val)
            except Exception:
                pass
            out.append({"client_id": cid, "scope": rec.get("scope"),
                        "approved_by": rec.get("approved_by"),
                        "expires": rec.get("expires")})
        out.sort(key=lambda a: a["client_id"])
        return {"namespace": ns, "consents": out}

    def revoke_consent(self, operator, client_id: str) -> dict:
        """Forget a remembered OAuth approval — the client's next /authorize
        shows the consent screen again."""
        from .server import _e, _valid_key
        key = f"consent:{client_id}"
        if not _valid_key(key):
            raise ValueError(f"invalid client_id: {client_id!r}")
        ns = os.environ.get("MCP_USER_ID", "default_user")
        backend = self.admin_backend()
        try:
            backend._exec(f"MEMORY DELETE FROM mcp_oauth "
                          f"WHERE NS = '{_e(ns)}' AND KEY = '{_e(key)}'")
        except Exception:
            pass
        self._audit(operator, "revoke_consent", "ok", ref=client_id)
        return {"client_id": client_id, "revoked": True}


# ====================================================================== http
def _rate_per_min() -> int:
    try:
        return max(0, int(os.environ.get("EVOSQL_CONTROL_RATE_PER_MIN", "120")))
    except ValueError:
        return 120


class Handler(BaseHTTPRequestHandler):
    server_version = "evosql-control-plane"

    def log_message(self, *a):
        pass

    @property
    def cp(self) -> ControlPlane:
        return self.server.control_plane          # set on the server instance

    # -- io helpers -------------------------------------------------------
    def _json(self, code: int, obj) -> None:
        body = json.dumps(obj, ensure_ascii=False, default=str).encode()
        self.send_response(code)
        self.send_header("Content-Type", "application/json; charset=utf-8")
        self.send_header("Content-Length", str(len(body)))
        self.end_headers()
        self.wfile.write(body)

    def _body(self) -> dict:
        n = int(self.headers.get("Content-Length") or 0)
        if not n:
            return {}
        try:
            return json.loads(self.rfile.read(n) or "{}")
        except (ValueError, TypeError):
            return {}

    def _bearer(self) -> str:
        hdr = self.headers.get("Authorization", "")
        if hdr.startswith("Bearer "):
            return hdr[7:]
        q = urllib.parse.parse_qs(urllib.parse.urlparse(self.path).query)
        return q.get("token", [""])[0]

    # -- access control ---------------------------------------------------
    def _rate_ok(self) -> bool:
        limit = _rate_per_min()
        if limit <= 0:
            return True
        ip = self.client_address[0] if self.client_address else "?"
        now = time.monotonic()
        with _RATE_LOCK:
            bucket = [t for t in _RATE.get(ip, []) if now - t < 60.0]
            if len(bucket) >= limit:
                _RATE[ip] = bucket
                return False
            bucket.append(now)
            _RATE[ip] = bucket
        return True

    def _guard(self) -> Optional[operator_auth.OperatorPrincipal]:
        """Rate-limit + operator-auth. Sends 429/401 and returns None when
        blocked, else the authenticated OperatorPrincipal."""
        if not self._rate_ok():
            self._json(429, {"error": "rate limit exceeded — slow down"})
            return None
        host = self.server.server_address[0] if self.server.server_address else ""
        loopback = host in ("127.0.0.1", "localhost", "::1")
        op = operator_auth.authorize_operator(self._bearer(), loopback=loopback)
        if op is None:
            self._json(401, {"error": "unauthorized — operator credential "
                             "required (Authorization: Bearer <EVOSQL_CONTROL_TOKEN "
                             "or operator OIDC token>)"})
            return None
        return op

    # -- routes -----------------------------------------------------------
    def do_GET(self):
        path = urllib.parse.urlparse(self.path).path
        if path in ("/", "/index.html", "/control.html"):
            return self._serve_index()
        if not path.startswith("/api/"):
            return self._json(404, {"error": "not found"})
        op = self._guard()
        if op is None:
            return
        if path == "/api/tenants":
            return self._safe(lambda: self.cp.list_tenants())
        if path == "/api/consents":
            return self._safe(lambda: self.cp.list_consents())
        parts = [p for p in path.split("/") if p]
        if (len(parts) == 4 and parts[0] == "api" and parts[1] == "tenants"
                and parts[3] == "accounts"):
            q = urllib.parse.parse_qs(urllib.parse.urlparse(self.path).query)
            user = q.get("user", [""])[0]
            tid = urllib.parse.unquote(parts[2])
            return self._safe(lambda: self.cp.list_accounts(tid, user))
        if (len(parts) == 4 and parts[0] == "api" and parts[1] == "tenants"
                and parts[3] == "backups"):
            tid = urllib.parse.unquote(parts[2])
            return self._safe(lambda: self.cp.list_backups(tid))
        return self._json(404, {"error": "not found"})

    def do_POST(self):
        path = urllib.parse.urlparse(self.path).path
        if not path.startswith("/api/"):
            return self._json(404, {"error": "not found"})
        op = self._guard()
        if op is None:
            return
        body = self._body()
        # /api/tenants  (provision)
        if path == "/api/tenants":
            return self._safe(lambda: self.cp.provision(
                op, body.get("tenant_id", ""), body.get("name", ""),
                body.get("admin_user", "")))
        # /api/tenants/<id>/<action>
        parts = [p for p in path.split("/") if p]      # ["api","tenants",id,action...]
        if len(parts) >= 4 and parts[0] == "api" and parts[1] == "tenants":
            tid = urllib.parse.unquote(parts[2])
            action = parts[3]
            sub = parts[4] if len(parts) >= 5 else ""
            if action == "suspend":
                return self._safe(lambda: self.cp.suspend(op, tid))
            if action == "resume":
                return self._safe(lambda: self.cp.resume(op, tid))
            if action == "tier":
                return self._safe(lambda: self.cp.set_tier(op, tid, body.get("tier", "")))
            if action == "rotate-key":
                return self._safe(lambda: self.cp.rotate_key(
                    op, tid, body.get("rotate_dek", True)))
            if action == "backup":
                return self._safe(lambda: self.cp.backup(op, tid))
            if action == "restore":
                if not body.get("confirm"):
                    return self._json(400, {"error": "confirm=true required "
                                            "(replaces the tenant's data)"})
                return self._safe(lambda: self.cp.restore(
                    op, tid, body.get("backup", "")))
            if action == "token":
                roles = body.get("roles") or ["admin"]
                return self._safe(lambda: self.cp.issue_token(
                    op, tid, body.get("user_id", ""), tuple(roles),
                    body.get("ttl_days", 90)))
            if action == "dsar" and sub == "export":
                return self._safe(lambda: self.cp.dsar_export(
                    op, tid, body.get("user", "")))
            if action == "dsar" and sub == "erase":
                if not body.get("confirm"):
                    return self._json(400, {"error": "confirm=true required (irreversible)"})
                return self._safe(lambda: self.cp.dsar_erase(
                    op, tid, body.get("user", "")))
            # /api/tenants/<id>/accounts/<connector>/revoke
            if action == "accounts" and len(parts) >= 6 and parts[5] == "revoke":
                connector = urllib.parse.unquote(parts[4])
                return self._safe(lambda: self.cp.revoke_account(
                    op, tid, connector, body.get("user", "")))
        # /api/consents/<client_id>/revoke
        if (len(parts) == 4 and parts[0] == "api" and parts[1] == "consents"
                and parts[3] == "revoke"):
            return self._safe(lambda: self.cp.revoke_consent(
                op, urllib.parse.unquote(parts[2])))
        return self._json(404, {"error": "not found"})

    def do_DELETE(self):
        path = urllib.parse.urlparse(self.path).path
        op = self._guard()
        if op is None:
            return
        parts = [p for p in path.split("/") if p]
        if len(parts) == 3 and parts[0] == "api" and parts[1] == "tenants":
            q = urllib.parse.parse_qs(urllib.parse.urlparse(self.path).query)
            if q.get("confirm", [""])[0] not in ("1", "true", "yes"):
                return self._json(400, {"error": "confirm=1 required (irreversible)"})
            tid = urllib.parse.unquote(parts[2])
            return self._safe(lambda: self.cp.delete(op, tid))
        return self._json(404, {"error": "not found"})

    def _safe(self, fn):
        try:
            return self._json(200, fn())
        except KeyError as e:
            return self._json(404, {"error": f"unknown tenant: {e.args[0]!r}"})
        except (ValueError, RuntimeError) as e:
            return self._json(400, {"error": str(e)})
        except Exception as e:  # pragma: no cover
            return self._json(500, {"error": f"internal error: {e}"})

    def _serve_index(self):
        try:
            html = _STATIC.read_bytes()
        except OSError:
            html = b"<h1>evosql control plane</h1><p>UI file missing.</p>"
        self.send_response(200)
        self.send_header("Content-Type", "text/html; charset=utf-8")
        self.send_header("Content-Length", str(len(html)))
        self.end_headers()
        self.wfile.write(html)


def make_server(host: str, port: int, cp: Optional[ControlPlane] = None
                ) -> ThreadingHTTPServer:
    httpd = ThreadingHTTPServer((host, port), Handler)
    httpd.control_plane = cp or ControlPlane()
    return httpd


def main() -> int:
    host = os.environ.get("EVOSQL_CONTROL_HOST", "127.0.0.1")
    port = int(os.environ.get("EVOSQL_CONTROL_PORT", "8900"))
    if not tenancy.multitenant_enabled():
        print("WARNING: EVOSQL_TENANT_SECRET is not set — tenant provisioning "
              "will fail. Set it before managing tenants.", file=sys.stderr, flush=True)
    httpd = make_server(host, port)
    print(f"evosql control plane on http://{host}:{port}  ·  auth: "
          f"{operator_auth.auth_summary()}", file=sys.stderr, flush=True)
    if operator_auth.auth_summary().startswith("OPEN") and \
            host not in ("127.0.0.1", "localhost", "::1"):
        print(f"WARNING: bound to {host} with NO operator auth — the control "
              "plane is OPEN to the network. Set EVOSQL_CONTROL_TOKEN or "
              "EVOSQL_OIDC_ISSUER before exposing it.", file=sys.stderr, flush=True)
    try:
        httpd.serve_forever()
    except KeyboardInterrupt:
        pass
    return 0


if __name__ == "__main__":
    raise SystemExit(main())
