"""
CrewAI adapter — short-term + long-term + entity memory.

CrewAI splits memory across three primitives:

  - ShortTermMemory: per-task scratchpad cleared on task end.
  - LongTermMemory:  cross-task summary by task signature.
  - EntityMemory:    canonical entities seen during the run.

EvoSQL covers all three from existing primitives:

  STM ↔ MEMORY STORE         (with a session-scoped namespace)
  LTM ↔ CHECKPOINT STORE     (thread_id = task signature)
  EM  ↔ ENTITY STORE         (Task 225)
"""
from __future__ import annotations

import json
from typing import Any, Dict, List, Optional

from ..core import Connection, EvoNotFound


class EvoCrewMemory:
    """Single facade exposing all three CrewAI memory layers."""

    def __init__(self, conn: Connection,
                  prefix: str = "crew",
                  auto_create: bool = True):
        self._conn = conn
        self._stm  = f"{prefix}_stm"
        self._ltm  = f"{prefix}_ltm"
        self._ent  = f"{prefix}_entities"
        if auto_create:
            self._conn.exec_(f"DROP MEMORY STORE IF EXISTS {self._stm}")
            self._conn.exec_(f"DROP CHECKPOINT STORE IF EXISTS {self._ltm}")
            self._conn.exec_(f"DROP ENTITY STORE IF EXISTS {self._ent}")
            self._conn.exec_(f"CREATE MEMORY STORE {self._stm}")
            self._conn.exec_(f"CREATE CHECKPOINT STORE {self._ltm}")
            self._conn.exec_(f"CREATE ENTITY STORE {self._ent}")

    # ----- Short-term ----------------------------------------------
    def stm_save(self, task_id: str, key: str,
                  value: Dict[str, Any]) -> None:
        self._conn.memory_put(self._stm, task_id, key, json.dumps(value))

    def stm_load(self, task_id: str, key: str) -> Optional[Dict[str, Any]]:
        try:
            return json.loads(self._conn.memory_get(self._stm, task_id, key))
        except EvoNotFound:
            return None

    def stm_clear(self, task_id: str, key: str) -> None:
        try:
            self._conn.memory_delete(self._stm, task_id, key)
        except Exception:
            pass

    # ----- Long-term -----------------------------------------------
    def ltm_save(self, task_signature: str, summary: Dict[str, Any]) -> None:
        # Use task_signature as both thread_id and checkpoint_id so the
        # latest summary per task is trivially queryable.
        self._conn.checkpoint_put(self._ltm, task_signature, "",
                                    task_signature,
                                    json.dumps(summary), "{}")

    def ltm_recall(self, task_signature: str) -> Optional[Dict[str, Any]]:
        try:
            blob = self._conn.checkpoint_get_latest(self._ltm,
                                                     task_signature)
        except EvoNotFound:
            return None
        return json.loads(blob) if blob else None

    # ----- Entities -------------------------------------------------
    def remember_entity(self, key: str, summary: str,
                         facts: Optional[Dict[str, Any]] = None) -> None:
        if facts is None:
            sql = (f"ENTITY PUT INTO {self._ent} VALUES "
                   f"('{_e(key)}', '{_e(summary)}')")
        else:
            sql = (f"ENTITY PUT INTO {self._ent} VALUES "
                   f"('{_e(key)}', '{_e(summary)}', "
                   f"'{_e(json.dumps(facts))}')")
        self._conn.exec_(sql)

    def get_entity(self, key: str) -> Optional[Dict[str, Any]]:
        rows = self._conn.query(
            f"ENTITY GET FROM {self._ent} WHERE KEY = '{_e(key)}'")
        if not rows:
            return None
        r = rows[0]
        try:
            facts = json.loads(r[2]) if r[2] else None
        except Exception:
            facts = r[2]
        return {"key": r[0], "summary": r[1], "facts": facts,
                 "mention_count": int(r[3]) if r[3] else 0}

    def top_entities(self, limit: int = 5) -> List[Dict[str, Any]]:
        rows = self._conn.query(
            f"ENTITY RANK FROM {self._ent} LIMIT {int(limit)}")
        return [{"key": r[0], "summary": r[1],
                  "mention_count": int(r[3]) if r[3] else 0} for r in rows]


def _e(s: str) -> str:
    return s.replace("'", "''")
