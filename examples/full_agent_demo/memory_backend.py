"""
memory_backend.py — agent's view of EvolutionDB.

Wraps the four catalog objects this demo uses behind a small,
test-friendly facade:

  - MEMORY STORE   ↔ long-term agent memory (semantic + lexical)
  - MESSAGE LOG    ↔ per-session conversation history
  - CHECKPOINT     ↔ per-step state snapshot for replay
  - ENTITY STORE   ↔ canonical people / places mentioned

The agent code only ever touches this class — the underlying SQL is
generated here, so the test suite can mock the same surface without
needing a live EvolutionDB.
"""
from __future__ import annotations

import json
import os
import sys
import time
import uuid
from typing import Any, Dict, List, Optional

# Allow `python3 agent.py` to find the ctypes binding without a pip
# install — handy when running from the repo or inside the demo
# Docker image where the SDK is mounted at a known relative path.
_HERE = os.path.dirname(os.path.abspath(__file__))
_PY_SDK = os.environ.get(
    "EVOSQL_PYTHON_SDK",
    os.path.normpath(os.path.join(_HERE, "..", "..",
                                    "client", "python-evosql-memory")))
if os.path.isdir(_PY_SDK) and _PY_SDK not in sys.path:
    sys.path.insert(0, _PY_SDK)


def _e(s: str) -> str:
    return s.replace("'", "''")


class MemoryBackend:
    """All EvolutionDB I/O the agent uses, in one place."""

    def __init__(self,
                  host: str = "127.0.0.1", port: int = 9967,
                  user: str = "admin", password: str = "admin",
                  store_prefix: str = "agent",
                  reset: bool = True):
        from evosql_memory import connect

        self.conn = connect(host, port, user, password)
        self.memory   = f"{store_prefix}_mem"
        self.messages = f"{store_prefix}_msgs"
        self.entities = f"{store_prefix}_ents"
        self.checkpoints = f"{store_prefix}_ck"

        if reset:
            for kind, name in [
                ("MEMORY STORE",     self.memory),
                ("MESSAGE LOG",      self.messages),
                ("ENTITY STORE",     self.entities),
                ("CHECKPOINT STORE", self.checkpoints),
            ]:
                self.conn.exec_(f"DROP {kind} IF EXISTS {name}")
            self.conn.exec_(f"CREATE MEMORY STORE     {self.memory}")
            self.conn.exec_(f"CREATE MESSAGE LOG      {self.messages}")
            self.conn.exec_(f"CREATE ENTITY STORE     {self.entities}")
            self.conn.exec_(f"CREATE CHECKPOINT STORE {self.checkpoints}")

    # ------------------------------------------------------------------
    # Long-term memory (the agent's tool surface)
    # ------------------------------------------------------------------
    def save_memory(self, user_id: str, fact: str,
                     tags: Optional[List[str]] = None) -> str:
        key   = f"mem_{int(time.time()*1000)}_{uuid.uuid4().hex[:6]}"
        value = json.dumps({
            "fact":      fact,
            "tags":      tags or [],
            "created":   int(time.time()),
        })
        self.conn.memory_put(self.memory, user_id, key, value)
        return key

    def search_memory(self, user_id: str, query: str,
                        k: int = 5) -> List[Dict[str, Any]]:
        """Substring scan within the user's namespace. Cheap, no
        embedding model required — sufficient for the demo. Production
        agents would swap in MEMORY SEARCH USING VECTOR …"""
        sql = (f"SELECT mem_namespace, mem_key, mem_value FROM "
               f"__mem_{self.memory} WHERE mem_namespace = "
               f"'{_e(user_id)}' LIMIT 256")
        rows = self.conn.query(sql, max_rows=256, max_cols=8,
                                  col_buf_size=4096)
        q = query.lower()
        out: List[Dict[str, Any]] = []
        for row in rows:
            if not row[2]:
                continue
            try:
                rec = json.loads(row[2])
            except Exception:
                rec = {"fact": row[2]}
            text = (rec.get("fact") or "").lower() + " " + \
                    " ".join(rec.get("tags") or []).lower()
            score = sum(1 for w in q.split() if len(w) > 2 and w in text)
            if score:
                out.append({"key": row[1], "score": score, **rec})
        out.sort(key=lambda r: -r["score"])
        return out[:k]

    # ------------------------------------------------------------------
    # Conversation history
    # ------------------------------------------------------------------
    def append_message(self, session_id: str, role: str, content: str,
                         meta: Optional[Dict[str, Any]] = None) -> None:
        self.conn.exec_(
            f"MESSAGE APPEND INTO {self.messages} VALUES "
            f"('{_e(session_id)}', '{_e(role)}', '{_e(content)}', "
            f"'{_e(json.dumps(meta or {}))}')")

    def read_messages(self, session_id: str,
                        last_n: int = 12) -> List[Dict[str, Any]]:
        sql = (f"MESSAGE READ FROM {self.messages} WHERE SESSION = "
               f"'{_e(session_id)}'")
        rows = self.conn.query(sql, max_rows=512, max_cols=8,
                                  col_buf_size=8192)
        msgs: List[Dict[str, Any]] = []
        for row in rows:
            try:
                msgs.append({
                    "seq":     int(row[0]) if row[0] else 0,
                    "role":    row[1],
                    "content": row[2],
                })
            except Exception:
                continue
        msgs.sort(key=lambda m: m["seq"])
        return msgs[-last_n:]

    # ------------------------------------------------------------------
    # Entity store
    # ------------------------------------------------------------------
    def remember_entity(self, key: str, summary: str,
                         facts: Optional[Dict[str, Any]] = None) -> None:
        if facts:
            self.conn.exec_(
                f"ENTITY PUT INTO {self.entities} VALUES "
                f"('{_e(key)}', '{_e(summary)}', "
                f"'{_e(json.dumps(facts))}')")
        else:
            self.conn.exec_(
                f"ENTITY PUT INTO {self.entities} VALUES "
                f"('{_e(key)}', '{_e(summary)}')")

    def top_entities(self, n: int = 5) -> List[Dict[str, Any]]:
        rows = self.conn.query(
            f"ENTITY RANK FROM {self.entities} LIMIT {int(n)}")
        out: List[Dict[str, Any]] = []
        for row in rows:
            try:
                out.append({
                    "key":           row[0],
                    "summary":       row[1],
                    "mention_count": int(row[3]) if row[3] else 0,
                })
            except Exception:
                continue
        return out

    # ------------------------------------------------------------------
    # Checkpoint per turn — useful for debugging / replay
    # ------------------------------------------------------------------
    def checkpoint(self, thread_id: str, step: int,
                     state: Dict[str, Any]) -> None:
        self.conn.checkpoint_put(
            self.checkpoints, thread_id, "",
            f"step-{step}", json.dumps(state), "{}")

    def latest_checkpoint(self, thread_id: str) -> Optional[Dict[str, Any]]:
        from evosql_memory import EvoNotFound
        try:
            blob = self.conn.checkpoint_get_latest(self.checkpoints,
                                                       thread_id)
        except EvoNotFound:
            return None
        return json.loads(blob)

    def close(self) -> None:
        if self.conn:
            self.conn.close()
            self.conn = None

    def __enter__(self): return self
    def __exit__(self, *a): self.close()
