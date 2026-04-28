"""
LlamaIndex adapter — KVStore + DocumentStore + ChatMemoryBuffer.

Three drop-in classes match LlamaIndex's interface contracts:

  - EvoKVStore         ↔ MEMORY STORE (no embedding required)
  - EvoDocumentStore   ↔ DOCUMENT STORE (Mongo-style filter DSL)
  - EvoChatMemoryBuffer ↔ MESSAGE LOG (ordered chat history)

Like the LangChain adapter, we don't import llama_index — duck-typed
objects slot into the framework because it checks for the methods.
"""
from __future__ import annotations

import json
from typing import Any, Dict, Iterable, List, Optional

from ..core import Connection, EvoNotFound


# --------------------------------------------------------------------
# 1) BaseKVStore → MEMORY STORE
# --------------------------------------------------------------------
class EvoKVStore:
    """LlamaIndex BaseKVStore backed by MEMORY STORE.

    Each (collection, key) maps to (namespace, key) on the EvoSQL side.
    """

    def __init__(self, conn: Connection, store_name: str = "li_kv",
                  auto_create: bool = True):
        self._conn = conn
        self._store = store_name
        if auto_create:
            self._conn.exec_(f"DROP MEMORY STORE IF EXISTS {store_name}")
            self._conn.exec_(f"CREATE MEMORY STORE {store_name}")

    def put(self, key: str, val: Dict[str, Any], collection: str = "default") -> None:
        self._conn.memory_put(self._store, collection, key, json.dumps(val))

    def get(self, key: str, collection: str = "default") -> Optional[Dict[str, Any]]:
        try:
            blob = self._conn.memory_get(self._store, collection, key)
        except EvoNotFound:
            return None
        return json.loads(blob) if blob else None

    def delete(self, key: str, collection: str = "default") -> bool:
        try:
            self._conn.memory_delete(self._store, collection, key)
            return True
        except Exception:
            return False

    def get_all(self, collection: str = "default") -> Dict[str, Dict[str, Any]]:
        sql = (f"SELECT mem_key, mem_value FROM __mem_{self._store} "
               f"WHERE mem_namespace = '{_e(collection)}'")
        rows = self._conn.query(sql)
        out: Dict[str, Dict[str, Any]] = {}
        for r in rows:
            try:
                out[r[0]] = json.loads(r[1]) if r[1] else None
            except Exception:
                out[r[0]] = r[1]
        return out


# --------------------------------------------------------------------
# 2) BaseDocumentStore → DOCUMENT STORE
# --------------------------------------------------------------------
class EvoDocumentStore:
    """LlamaIndex BaseDocumentStore backed by DOCUMENT STORE."""

    def __init__(self, conn: Connection, store_name: str = "li_docs",
                  auto_create: bool = True):
        self._conn = conn
        self._store = store_name
        if auto_create:
            self._conn.exec_(f"DROP DOCUMENT STORE IF EXISTS {store_name}")
            self._conn.exec_(f"CREATE DOCUMENT STORE {store_name}")

    def add_document(self, doc_id: str, content: str,
                      meta: Optional[Dict[str, Any]] = None,
                      embedding: Optional[List[float]] = None) -> None:
        meta_json = json.dumps(meta or {})
        if embedding:
            from ..core import format_vector
            vec = format_vector(embedding)
            sql = (f"DOCUMENT WRITE INTO {self._store} VALUES "
                   f"('{_e(doc_id)}', '{_e(content)}', "
                   f"'{_e(meta_json)}', '{vec}')")
        else:
            sql = (f"DOCUMENT WRITE INTO {self._store} VALUES "
                   f"('{_e(doc_id)}', '{_e(content)}', "
                   f"'{_e(meta_json)}')")
        self._conn.exec_(sql)

    def filter_documents(self, filter_dict: Dict[str, Any],
                          limit: int = 100) -> List[Dict[str, Any]]:
        """Mongo-style filter DSL (Task 223). Pass a dict like
        {'$and': [{'tag': 'demo'}, {'score': {'$gt': 0.5}}]}."""
        flt = json.dumps(filter_dict)
        sql = (f"DOCUMENT FILTER FROM {self._store} WHERE "
               f"'{_e(flt)}' LIMIT {int(limit)}")
        rows = self._conn.query(sql)
        return [_doc_row_to_dict(r) for r in rows]

    def delete_by_filter(self, filter_dict: Dict[str, Any]) -> None:
        flt = json.dumps(filter_dict)
        self._conn.exec_(
            f"DOCUMENT DELETE FROM {self._store} WHERE '{_e(flt)}'")

    def search_by_vector(self, query: List[float], k: int = 10,
                          filter_dict: Optional[Dict[str, Any]] = None) -> List[Dict[str, Any]]:
        from ..core import format_vector
        vec = format_vector(query)
        sql = f"DOCUMENT SEARCH {self._store} USING VECTOR '{vec}'"
        if filter_dict:
            flt = json.dumps(filter_dict)
            sql += f" WHERE '{_e(flt)}'"
        sql += f" LIMIT {int(k)}"
        rows = self._conn.query(sql)
        return [_doc_row_to_dict(r) for r in rows]


# --------------------------------------------------------------------
# 3) ChatMemoryBuffer → MESSAGE LOG
# --------------------------------------------------------------------
class EvoChatMemoryBuffer:
    """LlamaIndex ChatMemoryBuffer backed by MESSAGE LOG."""

    def __init__(self, conn: Connection, store_name: str,
                  session_id: str, auto_create: bool = True):
        self._conn = conn
        self._store = store_name
        self._session = session_id
        if auto_create:
            self._conn.exec_(f"DROP MESSAGE LOG IF EXISTS {store_name}")
            self._conn.exec_(f"CREATE MESSAGE LOG {store_name}")

    def put(self, role: str, content: str,
             meta: Optional[Dict[str, Any]] = None) -> None:
        meta_json = json.dumps(meta or {})
        sql = (f"MESSAGE APPEND INTO {self._store} VALUES "
               f"('{_e(self._session)}', '{_e(role)}', "
               f"'{_e(content)}', '{_e(meta_json)}')")
        self._conn.exec_(sql)

    def get_all(self) -> List[Dict[str, Any]]:
        rows = self._conn.query(
            f"MESSAGE READ FROM {self._store} WHERE SESSION = "
            f"'{_e(self._session)}'")
        out: List[Dict[str, Any]] = []
        for row in rows:
            out.append({
                "seq":     int(row[0]) if row[0] else 0,
                "role":    row[1],
                "content": row[2],
            })
        return out

    def reset(self) -> None:
        self._conn.exec_(
            f"MESSAGE TRUNCATE FROM {self._store} WHERE SESSION = "
            f"'{_e(self._session)}'")


# --------------------------------------------------------------------
# helpers
# --------------------------------------------------------------------
def _e(s: str) -> str:
    return s.replace("'", "''")


def _doc_row_to_dict(row: List[str]) -> Dict[str, Any]:
    # Doc projection: id, content, meta, [embedding,] created_at
    try:
        meta = json.loads(row[2]) if len(row) > 2 and row[2] else {}
    except Exception:
        meta = {}
    return {
        "id":      row[0] if row else "",
        "content": row[1] if len(row) > 1 else "",
        "meta":    meta,
    }
