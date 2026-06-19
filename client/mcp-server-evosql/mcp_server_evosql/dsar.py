"""
dsar — data-subject access & erasure over the wire.

A single user's data is namespaced by user across every {prefix}_* memory store
(memory, outbox, audit, episodes, entities, loops, …). These helpers sweep ALL
of a backend's stores for one namespace, so a self-hosted deployment can honor a
right-to-access (export) or right-to-erasure (delete) request for one person
without hardcoding the store list — it is discovered from the backend itself.

Host-independent: everything goes over the normal wire (_query/_exec), so it
works against a local, embedded, or remote engine alike. Erasure is exact-key
(the engine's only delete form), enumerate-then-delete, like the audit prune.
"""
from __future__ import annotations

from typing import Any, Dict, List


def stores(backend) -> List[str]:
    """Every memory-store name on the backend (self.memory + the *_store attrs),
    deduped and sorted — the authoritative set to sweep for one user."""
    found: Dict[str, bool] = {}
    for k, v in vars(backend).items():
        if isinstance(v, str) and (k == "memory" or k.endswith("_store")):
            found[v] = True
    return sorted(found)


def export_user(backend, user: str) -> Dict[str, Any]:
    """Right-to-access: every row the user owns, grouped by store. Read-only."""
    from .server import _e
    out: Dict[str, List[Dict[str, Any]]] = {}
    total = 0
    for store in stores(backend):
        try:
            rows = backend._query(
                f"SELECT mem_key, mem_value FROM __mem_{store} "
                f"WHERE mem_namespace = '{_e(user)}'") or []
        except Exception:
            continue
        recs = [{"key": str(r[0]), "value": r[1]} for r in rows]
        if recs:
            out[store] = recs
            total += len(recs)
    return {"user": user, "stores": out, "row_count": total}


def erase_user(backend, user: str) -> Dict[str, Any]:
    """Right-to-erasure: delete every row the user owns across all stores.
    IRREVERSIBLE. Engine deletes are exact-key, so enumerate then delete (the
    audit-prune idiom). Other users' rows are never touched. Returns per-store
    and total deletion counts."""
    from .server import _e, _valid_key
    deleted: Dict[str, int] = {}
    total = 0
    for store in stores(backend):
        try:
            rows = backend._query(
                f"SELECT mem_key FROM __mem_{store} "
                f"WHERE mem_namespace = '{_e(user)}' LIMIT 1000000") or []
        except Exception:
            continue
        n = 0
        for r in rows:
            key = str(r[0])
            if not _valid_key(key):
                continue
            try:
                backend._exec(
                    f"MEMORY DELETE FROM {store} "
                    f"WHERE NS = '{_e(user)}' AND KEY = '{_e(key)}'")
                n += 1
            except Exception:
                continue
        if n:
            deleted[store] = n
            total += n
    return {"user": user, "deleted": deleted, "row_count": total}
