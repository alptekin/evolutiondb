"""
Mem0-compatible client.

Drop-in replacement for the public-facing Memory class that Mem0
ships. Mem0 organises memories under (user_id, agent_id, run_id)
triples; we map that triple to the EvoSQL namespace and use the
mem0-style operation names so existing apps can swap

    from mem0 import Memory
to
    from evosql_memory.adapters.mem0_compat import Memory

with no other source changes.

The class supports:
  - add(messages, user_id=..., agent_id=..., run_id=...)
  - search(query, user_id=..., k=..., agent_id=..., run_id=...)
  - get(memory_id)
  - update(memory_id, data=...)
  - delete(memory_id)
  - history(user_id=..., k=...)
"""
from __future__ import annotations

import json
import time
import uuid
from typing import Any, Dict, Iterable, List, Optional, Sequence

from ..core import Connection, EvoNotFound, connect as _connect


class Memory:
    """Mem0-compatible Memory class."""

    def __init__(self,
                  *,
                  conn: Optional[Connection] = None,
                  host: str = "127.0.0.1", port: int = 9967,
                  user: str = "admin",   password: str = "admin",
                  store_name: str = "mem0_default",
                  embedding_dim: int = 0,
                  auto_create: bool = True):
        self._owns_conn = conn is None
        self._conn = conn or _connect(host, port, user, password)
        self._store = store_name
        self._dim = embedding_dim
        if auto_create:
            self._conn.exec_(f"DROP MEMORY STORE IF EXISTS {store_name}")
            opts = ""
            if embedding_dim > 0:
                opts = f" WITH (embedding_dim={int(embedding_dim)})"
            self._conn.exec_(f"CREATE MEMORY STORE {store_name}{opts}")

    # ------------------------------------------------------------------
    # mem0 public surface
    # ------------------------------------------------------------------
    def add(self, messages: Any,
              *,
              user_id: Optional[str] = None,
              agent_id: Optional[str] = None,
              run_id: Optional[str] = None,
              metadata: Optional[Dict[str, Any]] = None,
              embedding: Optional[Sequence[float]] = None,
              memory_id: Optional[str] = None) -> Dict[str, Any]:
        ns = self._ns(user_id, agent_id, run_id)
        mid = memory_id or str(uuid.uuid4())
        record = {
            "id":        mid,
            "messages":  messages,
            "metadata":  metadata or {},
            "user_id":   user_id,
            "agent_id":  agent_id,
            "run_id":    run_id,
            "created_at": int(time.time()),
        }
        self._conn.memory_put(self._store, ns, mid, json.dumps(record),
                                embedding if embedding else None)
        return record

    def search(self, query: Any,
                *,
                user_id: Optional[str] = None,
                agent_id: Optional[str] = None,
                run_id: Optional[str] = None,
                k: int = 5,
                embedding: Optional[Sequence[float]] = None) -> List[Dict[str, Any]]:
        ns = self._ns(user_id, agent_id, run_id)
        if embedding and self._dim:
            from ..core import format_vector
            vec = format_vector(embedding)
            sql = (f"MEMORY SEARCH {self._store} USING VECTOR {vec} "
                   f"LIMIT {int(k)}")
        else:
            # Substring fallback when no embedding is supplied: scan
            # the namespace, keep records whose messages text contains
            # the query string (best-effort lexical match).
            sql = (f"SELECT mem_namespace, mem_key, mem_value FROM "
                   f"__mem_{self._store} "
                   f"WHERE mem_namespace = '{_e(ns)}' "
                   f"LIMIT 256")
        rows = self._conn.query(sql)
        results = [self._row_to_record(r) for r in rows]
        if not (embedding and self._dim):
            q = str(query).lower()
            results = [r for r in results
                       if q in json.dumps(r.get("messages", "")).lower()]
        return results[:k]

    def get(self, memory_id: str,
              *,
              user_id: Optional[str] = None,
              agent_id: Optional[str] = None,
              run_id: Optional[str] = None) -> Optional[Dict[str, Any]]:
        ns = self._ns(user_id, agent_id, run_id)
        try:
            blob = self._conn.memory_get(self._store, ns, memory_id)
        except EvoNotFound:
            return None
        return json.loads(blob) if blob else None

    def update(self, memory_id: str, data: Dict[str, Any],
                *,
                user_id: Optional[str] = None,
                agent_id: Optional[str] = None,
                run_id: Optional[str] = None,
                embedding: Optional[Sequence[float]] = None) -> Optional[Dict[str, Any]]:
        existing = self.get(memory_id, user_id=user_id,
                              agent_id=agent_id, run_id=run_id) or {}
        existing.update(data)
        ns = self._ns(user_id, agent_id, run_id)
        self._conn.memory_put(self._store, ns, memory_id,
                                json.dumps(existing),
                                embedding if embedding else None)
        return existing

    def delete(self, memory_id: str,
                *,
                user_id: Optional[str] = None,
                agent_id: Optional[str] = None,
                run_id: Optional[str] = None) -> bool:
        ns = self._ns(user_id, agent_id, run_id)
        try:
            self._conn.memory_delete(self._store, ns, memory_id)
            return True
        except Exception:
            return False

    def history(self, *,
                  user_id: Optional[str] = None,
                  agent_id: Optional[str] = None,
                  run_id: Optional[str] = None,
                  k: int = 50) -> List[Dict[str, Any]]:
        ns = self._ns(user_id, agent_id, run_id)
        sql = (f"SELECT mem_namespace, mem_key, mem_value FROM "
               f"__mem_{self._store} "
               f"WHERE mem_namespace = '{_e(ns)}' "
               f"LIMIT {int(k)}")
        rows = self._conn.query(sql)
        return [self._row_to_record(r) for r in rows]

    def close(self) -> None:
        if self._owns_conn:
            self._conn.close()

    def __enter__(self) -> "Memory":
        return self

    def __exit__(self, *exc) -> None:
        self.close()

    # ------------------------------------------------------------------
    # internals
    # ------------------------------------------------------------------
    @staticmethod
    def _ns(user_id: Optional[str], agent_id: Optional[str],
             run_id: Optional[str]) -> str:
        return ":".join([
            user_id  or "_",
            agent_id or "_",
            run_id   or "_",
        ])

    @staticmethod
    def _row_to_record(row: List[str]) -> Dict[str, Any]:
        try:
            return json.loads(row[2]) if row and len(row) > 2 and row[2] else {}
        except Exception:
            return {"raw": row[2] if row and len(row) > 2 else ""}


def _e(s: str) -> str:
    return s.replace("'", "''")
