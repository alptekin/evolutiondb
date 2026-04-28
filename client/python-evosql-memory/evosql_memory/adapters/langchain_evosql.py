"""
LangChain classic adapter — chat history, vector memory, entity memory.

Three drop-in classes match LangChain's interface contracts:

  - EvoChatMessageHistory        ↔ MESSAGE LOG (Task 222)
  - EvoVectorStoreRetrieverMemory ↔ MEMORY STORE with embedding
  - EvoConversationEntityMemory  ↔ ENTITY STORE (Task 225)

Duck-typed: the file does not import langchain. As long as the
runtime treats these objects as the framework's BaseChatMessageHistory
/ BaseMemory descendants (LangChain checks for the methods, not the
class), they slot in.
"""
from __future__ import annotations

import json
from typing import Any, Dict, Iterable, List, Optional

from ..core import Connection, EvoNotFound


# --------------------------------------------------------------------
# 1) Chat history → MESSAGE LOG
# --------------------------------------------------------------------
class EvoChatMessageHistory:
    """LangChain BaseChatMessageHistory backed by MESSAGE LOG.

        history = EvoChatMessageHistory(conn, "chats", session_id="user_42")
        history.add_message({"role": "user", "content": "hi"})
        for m in history.messages:
            ...
    """

    def __init__(self, conn: Connection, store_name: str,
                  session_id: str, auto_create: bool = True):
        self._conn = conn
        self._store = store_name
        self._session = session_id
        if auto_create:
            self._conn.exec_(f"DROP MESSAGE LOG IF EXISTS {store_name}")
            self._conn.exec_(f"CREATE MESSAGE LOG {store_name}")

    @property
    def messages(self) -> List[Dict[str, Any]]:
        rows = self._conn.query(
            f"MESSAGE READ FROM {self._store} WHERE SESSION = '{self._session}'")
        out: List[Dict[str, Any]] = []
        for row in rows:
            # Backing-table projection is (seq, role, content, meta,
            # created_at) — session_id is the WHERE filter, not a
            # selected column.
            try:
                content = json.loads(row[2]) if row[2] else None
            except Exception:
                content = row[2]
            try:
                meta = json.loads(row[3]) if row[3] else {}
            except Exception:
                meta = {}
            out.append({
                "session":    self._session,
                "seq":        int(row[0]) if row[0] else 0,
                "role":       row[1],
                "content":    content,
                "meta":       meta,
                "created_at": row[4] if len(row) > 4 else "",
            })
        return out

    def add_message(self, message: Dict[str, Any]) -> None:
        role    = message.get("role", "user")
        content = message.get("content", "")
        meta    = message.get("meta") or message.get("metadata") or {}
        if not isinstance(content, str):
            content = json.dumps(content)
        else:
            content = json.dumps(content)
        sql = (f"MESSAGE APPEND INTO {self._store} VALUES "
               f"('{self._session}', '{role}', '{_escape(content)}', "
               f"'{_escape(json.dumps(meta))}')")
        self._conn.exec_(sql)

    def clear(self) -> None:
        self._conn.exec_(
            f"MESSAGE TRUNCATE FROM {self._store} WHERE SESSION = '{self._session}'")


# --------------------------------------------------------------------
# 2) Vector retriever memory → MEMORY STORE
# --------------------------------------------------------------------
class EvoVectorStoreRetrieverMemory:
    """LangChain VectorStoreRetrieverMemory backed by MEMORY STORE.

    Stores arbitrary input/output dicts under autoincrement keys and
    retrieves the top-k most similar entries when given a query
    embedding.
    """

    def __init__(self, conn: Connection, store_name: str,
                  embedding_dim: int, namespace: str = "lc",
                  auto_create: bool = True):
        self._conn = conn
        self._store = store_name
        self._ns = namespace
        self._dim = embedding_dim
        self._counter = 0
        if auto_create:
            self._conn.exec_(f"DROP MEMORY STORE IF EXISTS {store_name}")
            self._conn.exec_(
                f"CREATE MEMORY STORE {store_name} "
                f"WITH (embedding_dim={int(embedding_dim)})")

    def save_context(self, inputs: Dict[str, Any], outputs: Dict[str, Any],
                      *, embedding: Optional[List[float]] = None) -> None:
        self._counter += 1
        key = f"ctx_{self._counter}"
        record = {"inputs": inputs, "outputs": outputs}
        self._conn.memory_put(self._store, self._ns, key,
                                json.dumps(record), embedding)

    def load_memory_variables(self, query_embedding: List[float],
                                k: int = 4) -> Dict[str, Any]:
        from ..core import format_vector
        vec = format_vector(query_embedding)
        sql = (f"MEMORY SEARCH {self._store} USING VECTOR {vec} "
               f"LIMIT {int(k)}")
        rows = self._conn.query(sql)
        return {"history": [self._row_to_record(r) for r in rows]}

    def clear(self) -> None:
        self._conn.exec_(f"DROP MEMORY STORE {self._store}")
        self._conn.exec_(
            f"CREATE MEMORY STORE {self._store} "
            f"WITH (embedding_dim={int(self._dim)})")

    @staticmethod
    def _row_to_record(row: List[str]) -> Dict[str, Any]:
        # mem_namespace, mem_key, mem_value, [embedding,] [score,] created_at
        try:
            value = json.loads(row[2]) if row[2] else None
        except Exception:
            value = row[2]
        return {"namespace": row[0], "key": row[1], "value": value}


# --------------------------------------------------------------------
# 3) Conversation entity memory → ENTITY STORE
# --------------------------------------------------------------------
class EvoConversationEntityMemory:
    """LangChain ConversationEntityMemory backed by ENTITY STORE."""

    def __init__(self, conn: Connection, store_name: str = "lc_entities",
                  auto_create: bool = True):
        self._conn = conn
        self._store = store_name
        if auto_create:
            self._conn.exec_(f"DROP ENTITY STORE IF EXISTS {store_name}")
            self._conn.exec_(f"CREATE ENTITY STORE {store_name}")

    def remember(self, entity_key: str, summary: str,
                  facts: Optional[Dict[str, Any]] = None) -> None:
        if facts is None:
            sql = (f"ENTITY PUT INTO {self._store} VALUES "
                   f"('{_escape(entity_key)}', '{_escape(summary)}')")
        else:
            sql = (f"ENTITY PUT INTO {self._store} VALUES "
                   f"('{_escape(entity_key)}', '{_escape(summary)}', "
                   f"'{_escape(json.dumps(facts))}')")
        self._conn.exec_(sql)

    def get(self, entity_key: str) -> Optional[Dict[str, Any]]:
        rows = self._conn.query(
            f"ENTITY GET FROM {self._store} WHERE KEY = '{_escape(entity_key)}'")
        if not rows:
            return None
        row = rows[0]
        # entity_key, summary, facts, mention_count, last_seen
        try:
            facts = json.loads(row[2]) if row[2] else None
        except Exception:
            facts = row[2]
        return {
            "key":           row[0],
            "summary":       row[1],
            "facts":         facts,
            "mention_count": int(row[3]) if row[3] else 0,
            "last_seen":     row[4] if len(row) > 4 else "",
        }

    def top(self, limit: int = 5) -> List[Dict[str, Any]]:
        rows = self._conn.query(
            f"ENTITY RANK FROM {self._store} LIMIT {int(limit)}")
        return [{
            "key":           r[0],
            "summary":       r[1],
            "mention_count": int(r[3]) if r[3] else 0,
        } for r in rows]


# --------------------------------------------------------------------
# helpers
# --------------------------------------------------------------------
def _escape(s: str) -> str:
    return s.replace("'", "''")
