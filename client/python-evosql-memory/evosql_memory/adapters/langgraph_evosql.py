"""
LangGraph adapter — EvoCheckpointSaver + EvoBaseStore.

LangGraph's checkpointing protocol exposes two abstractions:

  - BaseCheckpointSaver: per-thread DAG of (checkpoint_id, parent_id,
    values, metadata) entries the runtime walks to resume / replay.
  - BaseStore: a namespaced KV with vector-aware search for long-term
    memory across threads.

Both map cleanly onto the EvoSQL primitives:

  - CHECKPOINT STORE   ↔ BaseCheckpointSaver
  - MEMORY STORE       ↔ BaseStore (with optional embedding_dim)

The adapter is duck-typed — it doesn't import langgraph so the SDK
package stays light. The methods match the names LangGraph calls.
"""
from __future__ import annotations

import json
import threading
import uuid
from typing import Any, Dict, Iterable, Iterator, List, Optional, Tuple

from ..core import Connection, EvoNotFound


# --------------------------------------------------------------------
# EvoCheckpointSaver — BaseCheckpointSaver shim
# --------------------------------------------------------------------
class EvoCheckpointSaver:
    """Backs LangGraph's BaseCheckpointSaver onto a CHECKPOINT STORE.

        saver = EvoCheckpointSaver(conn, store_name="lg_checkpoints")
        graph = workflow.compile(checkpointer=saver)
    """

    def __init__(self, conn: Connection, store_name: str = "lg_checkpoints",
                  auto_create: bool = True):
        self._conn = conn
        self._store = store_name
        self._lock = threading.Lock()
        if auto_create:
            self._conn.exec_(f"DROP CHECKPOINT STORE IF EXISTS {store_name}")
            self._conn.exec_(f"CREATE CHECKPOINT STORE {store_name}")

    # ----- LangGraph protocol surface ---------------------------------
    def put(self, config: Dict[str, Any], checkpoint: Dict[str, Any],
             metadata: Optional[Dict[str, Any]] = None,
             new_versions: Optional[Dict[str, Any]] = None) -> Dict[str, Any]:
        """Persist a checkpoint and return the updated config dict."""
        thread_id = config["configurable"]["thread_id"]
        ns        = config["configurable"].get("checkpoint_ns", "")
        ckpt_id   = checkpoint.get("id") or str(uuid.uuid4())
        with self._lock:
            self._conn.checkpoint_put(
                self._store, thread_id, ns, ckpt_id,
                json.dumps(checkpoint),
                json.dumps(metadata or {}))
        return {"configurable": {**config["configurable"],
                                  "checkpoint_id": ckpt_id}}

    def get(self, config: Dict[str, Any]) -> Optional[Dict[str, Any]]:
        """Return the latest checkpoint for the thread, or None."""
        thread_id = config["configurable"]["thread_id"]
        try:
            blob = self._conn.checkpoint_get_latest(self._store, thread_id)
        except EvoNotFound:
            return None
        return json.loads(blob) if blob else None

    def list(self, config: Dict[str, Any], *,
              limit: Optional[int] = None,
              filter: Optional[Dict[str, Any]] = None) -> Iterator[Dict[str, Any]]:
        """Yield checkpoints newest-first. v1 leverages the server's
        ORDER BY created_at DESC ordering."""
        thread_id = config["configurable"]["thread_id"]
        sql = f"CHECKPOINT LIST FROM {self._store} THREAD '{thread_id}'"
        if limit:
            sql += f" LIMIT {int(limit)}"
        rows = self._conn.query(sql)
        for row in rows:
            # Backing-table layout: thread_id, ns, id, parent_id,
            # ck_values, metadata, parent_config, created_at
            yield {
                "thread_id":     row[0],
                "checkpoint_ns": row[1],
                "id":            row[2],
                "parent_id":     row[3],
                "values":        json.loads(row[4]) if row[4] else None,
                "metadata":      json.loads(row[5]) if row[5] else {},
                "created_at":    row[7] if len(row) > 7 else "",
            }

    # Convenience -------------------------------------------------------
    @property
    def store_name(self) -> str:
        return self._store


# --------------------------------------------------------------------
# EvoBaseStore — BaseStore shim
# --------------------------------------------------------------------
class EvoBaseStore:
    """Backs LangGraph's BaseStore onto a MEMORY STORE.

        store = EvoBaseStore(conn, "lg_memories", embedding_dim=384)
    """

    def __init__(self, conn: Connection, store_name: str = "lg_memories",
                  embedding_dim: int = 0, auto_create: bool = True):
        self._conn = conn
        self._store = store_name
        self._embedding_dim = embedding_dim
        if auto_create:
            self._conn.exec_(f"DROP MEMORY STORE IF EXISTS {store_name}")
            opts = ""
            if embedding_dim > 0:
                opts = f" WITH (embedding_dim={int(embedding_dim)})"
            self._conn.exec_(f"CREATE MEMORY STORE {store_name}{opts}")

    @staticmethod
    def _ns_to_str(ns: Iterable[str]) -> str:
        """LangGraph passes namespace as a tuple (str, ...). EvoSQL stores
        a single string; we join with ":" which is unique-enough for
        the BaseStore contract (clients don't depend on the inverse)."""
        return ":".join(str(p) for p in ns)

    # ----- BaseStore.put / get / delete -------------------------------
    def put(self, namespace: Iterable[str], key: str, value: Dict[str, Any],
             *, embedding: Optional[List[float]] = None) -> None:
        ns = self._ns_to_str(namespace)
        self._conn.memory_put(self._store, ns, key,
                                json.dumps(value),
                                embedding if embedding is not None else None)

    def get(self, namespace: Iterable[str], key: str) -> Optional[Dict[str, Any]]:
        ns = self._ns_to_str(namespace)
        try:
            blob = self._conn.memory_get(self._store, ns, key)
        except EvoNotFound:
            return None
        return json.loads(blob) if blob else None

    def delete(self, namespace: Iterable[str], key: str) -> None:
        ns = self._ns_to_str(namespace)
        self._conn.memory_delete(self._store, ns, key)

    # ----- BaseStore.search (vector + filter) -------------------------
    def search(self, namespace: Iterable[str], *,
                query: Optional[List[float]] = None,
                limit: int = 10) -> List[Dict[str, Any]]:
        """Top-k by vector similarity (when query provided), else
        most-recent-N within the namespace."""
        ns = self._ns_to_str(namespace)
        if query and self._embedding_dim:
            from ..core import format_vector
            vec = format_vector(query)
            sql = (f"MEMORY SEARCH {self._store} USING VECTOR {vec} "
                   f"LIMIT {int(limit)}")
        else:
            # Fall back to a plain SELECT-by-namespace.
            sql = (f"SELECT mem_namespace, mem_key, mem_value FROM "
                   f"__mem_{self._store} WHERE mem_namespace = '{ns}' "
                   f"LIMIT {int(limit)}")
        rows = self._conn.query(sql)
        out: List[Dict[str, Any]] = []
        for row in rows:
            try:
                value = json.loads(row[2]) if row[2] else None
            except Exception:
                value = row[2]
            out.append({"namespace": row[0], "key": row[1], "value": value})
        return out
