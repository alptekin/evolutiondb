"""
AutoGen / AG2 adapter.

AutoGen's Memory protocol exposes three methods on a memory object:

  - add(MemoryContent)
  - query(query, k=...) -> List[MemoryContent]
  - clear()

MemoryContent wraps (content, mime_type, metadata). We persist the
whole record as JSON in MEMORY STORE so any MIME type (text, image-uri,
binary-as-base64) round-trips. When an embedding is supplied alongside,
top-k semantic search is delegated to MEMORY SEARCH.
"""
from __future__ import annotations

import json
import uuid
from typing import Any, Dict, Iterable, List, Optional, Sequence

from ..core import Connection, EvoNotFound


class EvoAutoGenMemory:
    """AutoGen Memory protocol shim."""

    def __init__(self, conn: Connection,
                  store_name: str = "ag_memory",
                  embedding_dim: int = 0,
                  namespace: str = "default",
                  auto_create: bool = True):
        self._conn = conn
        self._store = store_name
        self._ns = namespace
        self._dim = embedding_dim
        if auto_create:
            self._conn.exec_(f"DROP MEMORY STORE IF EXISTS {store_name}")
            opts = ""
            if embedding_dim > 0:
                opts = f" WITH (embedding_dim={int(embedding_dim)})"
            self._conn.exec_(f"CREATE MEMORY STORE {store_name}{opts}")

    def add(self, content: Any, mime_type: str = "text/plain",
             metadata: Optional[Dict[str, Any]] = None,
             embedding: Optional[Sequence[float]] = None,
             key: Optional[str] = None) -> str:
        record = {
            "content": content,
            "mime":    mime_type,
            "meta":    metadata or {},
        }
        rec_key = key or str(uuid.uuid4())
        self._conn.memory_put(self._store, self._ns, rec_key,
                                json.dumps(record),
                                embedding if embedding else None)
        return rec_key

    def query(self, query_embedding: Optional[Sequence[float]] = None,
                k: int = 5,
                key: Optional[str] = None) -> List[Dict[str, Any]]:
        if key:
            try:
                blob = self._conn.memory_get(self._store, self._ns, key)
                return [json.loads(blob)]
            except EvoNotFound:
                return []

        if query_embedding and self._dim:
            from ..core import format_vector
            vec = format_vector(query_embedding)
            sql = (f"MEMORY SEARCH {self._store} USING VECTOR {vec} "
                   f"LIMIT {int(k)}")
        else:
            # Most-recent-N within this namespace.
            sql = (f"SELECT mem_namespace, mem_key, mem_value FROM "
                   f"__mem_{self._store} "
                   f"WHERE mem_namespace = '{_e(self._ns)}' "
                   f"LIMIT {int(k)}")
        rows = self._conn.query(sql)
        out: List[Dict[str, Any]] = []
        for r in rows:
            try:
                rec = json.loads(r[2]) if r[2] else None
            except Exception:
                rec = r[2]
            if isinstance(rec, dict):
                rec = dict(rec)
                rec["__key__"] = r[1]
            out.append(rec)
        return out

    def remove(self, key: str) -> None:
        try:
            self._conn.memory_delete(self._store, self._ns, key)
        except Exception:
            pass

    def clear(self) -> None:
        # MEMORY STORE has no truncate; drop+recreate is the cheapest
        # equivalent and matches AutoGen's Memory.clear() contract.
        self._conn.exec_(f"DROP MEMORY STORE {self._store}")
        opts = ""
        if self._dim > 0:
            opts = f" WITH (embedding_dim={int(self._dim)})"
        self._conn.exec_(f"CREATE MEMORY STORE {self._store}{opts}")


def _e(s: str) -> str:
    return s.replace("'", "''")
