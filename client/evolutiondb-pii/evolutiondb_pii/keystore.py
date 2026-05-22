"""Keystore abstraction. Hides the difference between a filesystem
PEM pair and a passphrase-wrapped row in the `__pii_keystore`
memory store, so the rest of the library never has to branch on
where the keypair lives.

Layout when the keystore lives in the DB:

    Store:     __pii_keystore
    Namespace: MCP_USER_ID
    Key:       "default"
    Value:     {
                 "version":     1,
                 "key_id":      "<uuid4>",
                 "public_pem":  "-----BEGIN PUBLIC KEY-----...",
                 "kdf":         {"name":"pbkdf2-sha256","iters":100000,"salt":"<b64>"},
                 "wrapped_private": {"alg":"aes-256-gcm",
                                     "iv":"<b64>",
                                     "ciphertext":"<b64>"},
                 "created_at":  "<iso>"
               }

The DB itself has TDE if the operator opted in, so the wrapped
ciphertext is encrypted twice at rest. Decryption still needs the
passphrase the user types into the CLI; nothing else on the host
can produce the unwrapped private key."""
from __future__ import annotations

import datetime as _dt
import os
import secrets
import uuid
from pathlib import Path
from typing import Optional

from .crypto import (
    DEFAULT_PRIVATE_KEY_PATH, DEFAULT_PUBLIC_KEY_PATH,
    PBKDF2_ITERATIONS,
    generate_keypair as _fs_generate, load_public_key as _fs_public,
    load_private_key as _fs_private,
    public_key_from_pem, public_key_pem,
    unwrap_private_key, wrap_private_key,
)


KEYSTORE_NAME      = "pii_keystore"
KEYSTORE_KEY       = "default"
DEFAULT_NAMESPACE  = "default_user"


# ---------------------------------------------------------------- #
def _resolve_mode(explicit: Optional[str]) -> str:
    """Pick the active keystore mode. The explicit `--store=` flag
    on the CLI always wins; otherwise we honour `EVOSQL_PII_KEYSTORE`;
    if neither is set, we fall back to `auto`."""
    if explicit:
        return explicit
    mode = (os.environ.get("EVOSQL_PII_KEYSTORE") or "auto").lower()
    if mode not in ("auto", "file", "db"):
        return "auto"
    return mode


def _resolve_namespace(explicit: Optional[str]) -> str:
    if explicit:
        return explicit
    return os.environ.get("MCP_USER_ID") or DEFAULT_NAMESPACE


# ---------------------------------------------------------------- #
#  Filesystem branch
# ---------------------------------------------------------------- #
def _fs_keystore_exists(public_path: str = DEFAULT_PUBLIC_KEY_PATH) -> bool:
    return Path(public_path).expanduser().is_file()


# ---------------------------------------------------------------- #
#  DB branch — single-row CRUD
# ---------------------------------------------------------------- #
def _db_fetch(conn, store: str, namespace: str):
    from .store_io import fetch_row
    return fetch_row(conn, store, namespace, KEYSTORE_KEY)


def _db_write(conn, store: str, namespace: str, payload: dict) -> None:
    from .store_io import write_row
    write_row(conn, store, namespace, KEYSTORE_KEY, payload)


def db_keystore_exists(conn, namespace: Optional[str] = None,
                       store: str = KEYSTORE_NAME) -> bool:
    """Cheap probe — returns True iff the row already lives in the
    keystore. Used by the `auto` mode to prefer DB when available."""
    return _db_fetch(conn, store, _resolve_namespace(namespace)) is not None


# ---------------------------------------------------------------- #
#  Public API
# ---------------------------------------------------------------- #
def write_keypair_to_db(conn, private_key, public_key,
                        passphrase: bytes,
                        namespace: Optional[str] = None,
                        store: str = KEYSTORE_NAME,
                        key_id: Optional[str] = None) -> dict:
    """Wrap the private key with the passphrase and persist the
    keypair as a single row. Returns the payload that was written
    so callers can echo back the key_id."""
    if not passphrase:
        raise ValueError("write_keypair_to_db needs a passphrase — "
                         "the private key is useless to ship unless "
                         "it's wrapped")
    wrapped = wrap_private_key(private_key, passphrase)
    payload = {
        "version":         1,
        "key_id":          key_id or str(uuid.uuid4()),
        "public_pem":      public_key_pem(public_key).decode("utf-8"),
        "kdf":             wrapped["kdf"],
        "wrapped_private": wrapped["wrapped"],
        "created_at":      _dt.datetime.now(_dt.timezone.utc)
                              .isoformat(timespec="seconds")
                              .replace("+00:00", "Z"),
    }
    _db_write(conn, store, _resolve_namespace(namespace), payload)
    return payload


def read_public_key(*,
                    mode:        Optional[str] = None,
                    namespace:   Optional[str] = None,
                    conn=None,
                    public_path: str = DEFAULT_PUBLIC_KEY_PATH,
                    store:       str = KEYSTORE_NAME):
    """Resolve the active public key.

    `mode` is `auto` / `file` / `db`. In `auto` (default), we
    try the DB first — only when a row exists at
    `__pii_keystore.<namespace>.default` — and fall back to the
    filesystem PEM. `conn` is optional in `file` mode; in `db` /
    `auto`-with-fallback-needed it's opened lazily through
    `store_io.connect_from_env`.
    """
    resolved = _resolve_mode(mode)
    if resolved in ("db", "auto"):
        local_conn = conn
        if local_conn is None:
            try:
                from .store_io import connect_from_env
                local_conn = connect_from_env()
            except Exception:
                local_conn = None
        if local_conn is not None:
            row = _db_fetch(local_conn, store, _resolve_namespace(namespace))
            if row and row.get("public_pem"):
                return public_key_from_pem(
                    row["public_pem"].encode("utf-8"))
            if resolved == "db":
                raise FileNotFoundError(
                    "EVOSQL_PII_KEYSTORE=db but no keystore row at "
                    f"{store}/{_resolve_namespace(namespace)}/"
                    f"{KEYSTORE_KEY}; run "
                    "`evolutiondb-pii keygen --store=db --passphrase`")
    # File fallback
    return _fs_public(public_path)


def read_private_key(*,
                     mode:         Optional[str] = None,
                     namespace:    Optional[str] = None,
                     passphrase:   Optional[bytes] = None,
                     conn=None,
                     private_path: str = DEFAULT_PRIVATE_KEY_PATH,
                     store:        str = KEYSTORE_NAME):
    """Symmetric to `read_public_key`. `passphrase` is mandatory
    when the active mode resolves to the DB."""
    resolved = _resolve_mode(mode)
    if resolved in ("db", "auto"):
        local_conn = conn
        if local_conn is None:
            try:
                from .store_io import connect_from_env
                local_conn = connect_from_env()
            except Exception:
                local_conn = None
        if local_conn is not None:
            row = _db_fetch(local_conn, store,
                              _resolve_namespace(namespace))
            if row and row.get("wrapped_private"):
                if not passphrase:
                    raise ValueError(
                        "private key lives in the DB; supply the "
                        "passphrase you typed at `keygen --store=db` "
                        "time")
                wrapped = {"kdf":     row["kdf"],
                            "wrapped": row["wrapped_private"]}
                return unwrap_private_key(wrapped, passphrase)
            if resolved == "db":
                raise FileNotFoundError(
                    "EVOSQL_PII_KEYSTORE=db but no keystore row at "
                    f"{store}/{_resolve_namespace(namespace)}/"
                    f"{KEYSTORE_KEY}")
    return _fs_private(private_path, passphrase=passphrase)


def generate_keypair_in_db(conn, passphrase: bytes,
                           namespace: Optional[str] = None,
                           bits: int = 2048,
                           store: str = KEYSTORE_NAME) -> dict:
    """Generate a fresh RSA keypair and write it to the DB-backed
    keystore as a wrapped row. Returns the row payload so the
    caller can echo back the key_id."""
    from cryptography.hazmat.primitives.asymmetric import rsa
    if bits < 2048:
        raise ValueError("RSA key must be at least 2048 bits")
    priv = rsa.generate_private_key(public_exponent=65537,
                                      key_size=bits)
    pub  = priv.public_key()
    return write_keypair_to_db(conn, priv, pub, passphrase,
                                 namespace=namespace, store=store)


def export_db_to_files(conn, passphrase: bytes,
                       namespace: Optional[str] = None,
                       public_path: str = DEFAULT_PUBLIC_KEY_PATH,
                       private_path: str = DEFAULT_PRIVATE_KEY_PATH,
                       store: str = KEYSTORE_NAME) -> dict:
    """Pull the keypair out of the DB and write it back as PEM
    files. Convenience escape hatch for an operator who decides to
    move away from the DB-backed keystore."""
    row = _db_fetch(conn, store, _resolve_namespace(namespace))
    if not row:
        raise FileNotFoundError("no DB keystore row to export")
    wrapped = {"kdf": row["kdf"], "wrapped": row["wrapped_private"]}
    priv    = unwrap_private_key(wrapped, passphrase)
    from cryptography.hazmat.primitives import serialization
    pub_pem = row["public_pem"].encode("utf-8")
    priv_pem = priv.private_bytes(
        encoding=serialization.Encoding.PEM,
        format=serialization.PrivateFormat.PKCS8,
        encryption_algorithm=serialization.NoEncryption())
    pubp  = Path(public_path).expanduser()
    privp = Path(private_path).expanduser()
    pubp.parent.mkdir(parents=True, exist_ok=True)
    privp.parent.mkdir(parents=True, exist_ok=True)
    pubp.write_bytes(pub_pem)
    privp.write_bytes(priv_pem)
    try:
        os.chmod(privp, 0o600)
    except OSError:
        pass
    return {"public": str(pubp), "private": str(privp),
            "key_id": row.get("key_id")}


def import_files_to_db(conn, passphrase: bytes,
                       public_path: str = DEFAULT_PUBLIC_KEY_PATH,
                       private_path: str = DEFAULT_PRIVATE_KEY_PATH,
                       namespace: Optional[str] = None,
                       store: str = KEYSTORE_NAME) -> dict:
    """Lift an existing filesystem keypair into the DB-backed
    keystore. Useful when migrating from v0.2.0 (file-only) to
    v0.3.0 (DB-backed) without rotating the key — every existing
    cipher token stays decryptable."""
    pub  = _fs_public(public_path)
    priv = _fs_private(private_path)
    return write_keypair_to_db(conn, priv, pub, passphrase,
                                 namespace=namespace, store=store)