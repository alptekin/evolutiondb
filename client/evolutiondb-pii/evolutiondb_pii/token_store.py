"""
token_store — per-tenant, encrypted connector-token storage.

Connectors cache their OAuth token on the local machine (a JSON file or an env
var), shared across every tenant on that host. This instead stores each
connector's token blob in the EvolutionDB memory store, namespaced by
``MCP_USER_ID`` and AES-256-GCM encrypted with a key derived from
``EVOSQL_TENANT_SECRET`` — so a multi-tenant deployment gives every tenant its
OWN connector accounts, and a raw store read never leaks a token.

OPT-IN + FAIL-SOFT: ``TokenStore.maybe()`` returns None unless an encryption
secret is set AND the engine is reachable, so a connector that can't (or isn't
configured to) use it falls back to its existing local file / env var — single
user / dev is byte-for-byte unchanged.

Storage layout (memory store ``mcp_tokens``):
  namespace = MCP_USER_ID,  key = ``token:<connector>``,
  value     = ``{"enc": "<base64(nonce|ciphertext+tag)>", "updated": <epoch>}``.
The encryption key = ``HMAC-SHA256(secret, "<namespace>:<connector>")`` (32B),
secret = ``EVOSQL_TOKEN_KEY`` or ``EVOSQL_TENANT_SECRET``; never stored,
recomputed on demand (same pattern as tenancy.derive_db_password).
"""
from __future__ import annotations

import base64
import hashlib
import hmac
import json
import os
import time
from typing import Dict, Optional

DEFAULT_STORE = "mcp_tokens"


def _secret_from(env) -> str:
    env = env if env is not None else os.environ
    return env.get("EVOSQL_TOKEN_KEY") or env.get("EVOSQL_TENANT_SECRET") or ""


class TokenStore:
    def __init__(self, connector: str, *, namespace: Optional[str] = None,
                 store: str = DEFAULT_STORE, env=None, conn=None):
        self.connector = connector
        self.env = env if env is not None else os.environ
        self.namespace = namespace or self.env.get("MCP_USER_ID", "default_user")
        self.store = store
        self.key_name = f"token:{connector}"
        self._conn = conn

    # -- availability -----------------------------------------------------
    @classmethod
    def maybe(cls, connector: str, namespace: Optional[str] = None, *,
              env=None, conn=None) -> "Optional[TokenStore]":
        """Return a usable TokenStore, or None so the caller falls back to its
        local file / env var. None when no encryption secret is set, or (unless
        ``conn`` is injected) the engine can't be reached / cryptography is
        missing. Never raises."""
        if not _secret_from(env):
            return None
        try:
            ts = cls(connector, namespace=namespace, env=env, conn=conn)
            if conn is None:
                ts._connection()        # probe the engine; fail-soft to None
            return ts
        except Exception:
            return None

    def _connection(self):
        if self._conn is None:
            from .store_io import connect_from_env
            self._conn = connect_from_env(self.env)
        return self._conn

    # -- crypto -----------------------------------------------------------
    # NOTE: the secret (EVOSQL_TENANT_SECRET / EVOSQL_TOKEN_KEY) is used as the
    # HMAC key WITHOUT passphrase stretching, so it MUST be a high-entropy random
    # value (e.g. `openssl rand -hex 32`), not a human-chosen passphrase — the
    # same assumption tenancy.derive_db_password already makes.
    def _binding(self) -> bytes:
        # Injective encoding of (namespace, connector) — a JSON pair, so
        # ("a:b","c") and ("a","b:c") can never collide on a separator. Used BOTH
        # to derive the per-(tenant,connector) key AND as the AEAD associated
        # data, so a blob is cryptographically bound to its exact row.
        return json.dumps([self.namespace, self.connector]).encode("utf-8")

    def _key(self) -> bytes:
        sec = _secret_from(self.env)
        if not sec:
            raise RuntimeError("token store needs EVOSQL_TENANT_SECRET "
                               "or EVOSQL_TOKEN_KEY")
        return hmac.new(sec.encode("utf-8"), self._binding(),
                        hashlib.sha256).digest()           # 32 bytes -> AES-256

    def _seal(self, plaintext: str) -> str:
        from cryptography.hazmat.primitives.ciphers.aead import AESGCM
        nonce = os.urandom(12)
        ct = AESGCM(self._key()).encrypt(nonce, plaintext.encode("utf-8"),
                                         self._binding())
        return base64.b64encode(nonce + ct).decode("ascii")

    def _open(self, blob: str) -> str:
        from cryptography.hazmat.primitives.ciphers.aead import AESGCM
        raw = base64.b64decode(blob)
        nonce, ct = raw[:12], raw[12:]
        return AESGCM(self._key()).decrypt(nonce, ct,
                                           self._binding()).decode("utf-8")

    # -- api --------------------------------------------------------------
    def load(self) -> Dict:
        """Return the decrypted token dict, or {} if none stored."""
        from .store_io import fetch_row
        row = fetch_row(self._connection(), self.store, self.namespace, self.key_name)
        if not row or "enc" not in row:
            return {}
        return json.loads(self._open(row["enc"]))

    def save(self, data: Dict) -> None:
        from .store_io import write_row
        blob = self._seal(json.dumps(data, ensure_ascii=False))
        write_row(self._connection(), self.store, self.namespace, self.key_name,
                  {"enc": blob, "updated": int(time.time())})

    def delete(self) -> None:
        from .store_io import _e
        try:
            with self._connection().cursor() as cur:
                cur.execute(f"DELETE FROM __mem_{self.store} "
                            f"WHERE mem_namespace='{_e(self.namespace)}' "
                            f"AND mem_key='{_e(self.key_name)}'")
        except Exception as exc:
            if "relation does not exist" not in str(exc).lower():
                raise


def rotate_token_key(conn, old_secret: str, new_secret: str, *,
                     store: str = DEFAULT_STORE) -> int:
    """Re-encrypt every stored connector token under a NEW key secret, returning
    the number of rows rotated. Each row is decrypted with the OLD-secret-derived
    key and re-encrypted with the NEW one (per (namespace, connector), so every
    derived key changes). A row that doesn't decrypt under ``old_secret``
    (already rotated / foreign) is skipped, so re-running is safe.

    Rotate ``EVOSQL_TOKEN_KEY`` (the dedicated token-encryption key) with this —
    NOT ``EVOSQL_TENANT_SECRET``, which also derives every tenant's DB password.
    """
    from .store_io import _e
    try:
        with conn.cursor() as cur:
            cur.execute(f"SELECT mem_namespace, mem_key, mem_value "
                        f"FROM __mem_{store}")
            rows = cur.fetchall() or []
    except Exception as exc:
        if "relation does not exist" in str(exc).lower():
            return 0
        raise
    old_env = {"EVOSQL_TOKEN_KEY": old_secret}
    new_env = {"EVOSQL_TOKEN_KEY": new_secret}
    rotated = 0
    for ns, key, val in rows:
        key = str(key)
        if not key.startswith("token:"):
            continue
        connector = key.split("token:", 1)[1]
        try:
            rec = val if isinstance(val, dict) else json.loads(val)
            blob = rec.get("enc")
            if not blob:
                continue
            plain = TokenStore(connector, namespace=ns, store=store,
                               env=old_env, conn=conn)._open(blob)
        except Exception:
            continue                       # not openable under old key -> skip
        reblob = TokenStore(connector, namespace=ns, store=store,
                            env=new_env, conn=conn)._seal(plain)
        new_val = json.dumps({"enc": reblob, "updated": int(time.time())},
                             ensure_ascii=False)
        with conn.cursor() as cur:
            cur.execute(f"DELETE FROM __mem_{store} "
                        f"WHERE mem_namespace='{_e(str(ns))}' "
                        f"AND mem_key='{_e(key)}'")
            cur.execute(f"MEMORY PUT INTO {store} VALUES "
                        f"('{_e(str(ns))}','{_e(key)}','{_e(new_val)}')")
        rotated += 1
    return rotated
