"""
Memory backend: writes Teams messages and per-chat watermarks into
EvolutionDB over the PostgreSQL wire protocol (port 5433).

Why PG wire and not the native EVO protocol: psycopg ships pre-built
binary wheels for every platform, no compiled .dylib path-juggling.
EvolutionDB's PG adaptor parses the same MEMORY DDL/DML the EVO
protocol does, so the surface is identical.

Reconnect: long-running daemon mode outlives short DB outages
(`docker compose restart`). The cursor wrapper retries on connection
errors with bounded backoff, mirroring the pattern in
client/mcp-server-evosql/server.py.
"""
from __future__ import annotations

import json
import sys
import time
from typing import Dict, List, Optional


def _e(s: str) -> str:
    """Escape for inline SQL — MEMORY DML doesn't bind parameters."""
    if not isinstance(s, str):
        s = str(s)
    s = s.replace("\r", " ").replace("\n", " ").replace("\t", " ")
    return s.replace("'", "''")


# Watermark keys live in the same memory store as messages, prefixed
# so they sort separately and never collide with a real message_id.
WATERMARK_PREFIX = "teams_state_"


def _parse_value(raw):
    """EvolutionDB's PG wire decodes mem_value into either a dict
    (when the JSON adapter recognized the column type) or a string
    (when it didn't). Return a dict regardless, or {} if the row is
    not parseable JSON."""
    if isinstance(raw, dict):
        return raw
    if not raw:
        return {}
    try:
        return json.loads(raw)
    except (TypeError, ValueError):
        return {}


class MemoryStore:
    _RECONNECT_ATTEMPTS = 3
    _RECONNECT_BACKOFF_SEC = 0.5

    def __init__(self, host: str, port: int, user: str, password: str,
                 database: str, store: str, namespace: str):
        try:
            import psycopg
        except ImportError as exc:
            raise RuntimeError(
                "evolutiondb-teams-sync requires psycopg. Install with "
                "`pip install psycopg[binary]>=3.1`."
            ) from exc

        self.psycopg = psycopg
        self._conn_kwargs = dict(
            host=host, port=port, user=user, password=password,
            dbname=database, autocommit=True,
        )
        self.store = store
        self.namespace = namespace
        self.conn = self._connect()

        # Idempotent CREATE — running on a fresh DB or one already
        # populated by the MCP server both work.
        try:
            with self.conn.cursor() as cur:
                cur.execute(f"CREATE MEMORY STORE {self.store}")
        except Exception:
            pass

    # -- connection lifecycle ---------------------------------------
    def _connect(self):
        return self.psycopg.connect(**self._conn_kwargs)

    def _is_dead(self, exc: BaseException) -> bool:
        if not isinstance(exc, (self.psycopg.OperationalError,
                                self.psycopg.InterfaceError)):
            return False
        # Some application-level errors (oversized query, syntax)
        # surface through OperationalError because EvolutionDB's PG
        # adaptor closes the wire after raising them. Reconnecting and
        # replaying the same statement just loops — bail out so the
        # caller sees the real error.
        msg = str(exc).lower()
        non_transient = ("too long", "syntax", "must be", "invalid",
                         "permission", "not exist")
        return not any(tok in msg for tok in non_transient)

    def _with_retry(self, fn):
        last = None
        for attempt in range(self._RECONNECT_ATTEMPTS):
            try:
                with self.conn.cursor() as cur:
                    return fn(cur)
            except Exception as exc:
                if not self._is_dead(exc):
                    raise
                last = exc
                print(f"[teams-sync] db connection lost "
                      f"(attempt {attempt+1}/{self._RECONNECT_ATTEMPTS}): {exc}",
                      file=sys.stderr)
                try:
                    self.conn.close()
                except Exception:
                    pass
                if attempt + 1 < self._RECONNECT_ATTEMPTS:
                    time.sleep(self._RECONNECT_BACKOFF_SEC * (attempt + 1))
                    try:
                        self.conn = self._connect()
                    except Exception as reconnect_exc:
                        last = reconnect_exc
        raise last  # type: ignore[misc]

    # -- message / watermark API ------------------------------------
    # EvolutionDB's PG wire docs cap a single statement at 8 KB but
    # the MEMORY PUT path misbehaves well before that — payloads above
    # ~3 KB return a spurious unique-constraint violation that has
    # nothing to do with the row's actual key. Empirically anything
    # under ~2.5 KB encodes cleanly, so we keep our value budget tight
    # and let the truncation pipeline below clip the rest. Anything
    # truncated is marked so callers can tell content was longer.
    _MAX_VALUE_BYTES = 2500

    def put_message(self, key: str, value: Dict) -> None:
        payload = self._encode_payload(value)
        sql = (f"MEMORY PUT INTO {self.store} VALUES "
               f"('{_e(self.namespace)}','{_e(key)}','{_e(payload)}')")
        self._with_retry(lambda cur: cur.execute(sql))

    @classmethod
    def _encode_payload(cls, value: Dict) -> str:
        payload = json.dumps(value, ensure_ascii=False)
        if len(payload.encode("utf-8")) <= cls._MAX_VALUE_BYTES:
            return payload
        # Drop the redundant html mirror first — the plain `text` field
        # carries the same words.
        trimmed = dict(value)
        trimmed.pop("html", None)
        payload = json.dumps(trimmed, ensure_ascii=False)
        if len(payload.encode("utf-8")) <= cls._MAX_VALUE_BYTES:
            return payload
        # Still too big — clip the long-form text and the search-anchor
        # `fact` field, keeping enough head + tail to remain useful.
        budget = cls._MAX_VALUE_BYTES - 600  # JSON wrapper budget
        for field in ("text", "fact"):
            raw = trimmed.get(field) or ""
            if not isinstance(raw, str) or len(raw) <= budget // 2:
                continue
            head = raw[: budget // 2]
            tail = raw[-200:] if len(raw) > budget // 2 + 200 else ""
            trimmed[field] = (f"{head}…[truncated {len(raw) - len(head) - len(tail)}"
                              f" chars]…{tail}")
            payload = json.dumps(trimmed, ensure_ascii=False)
            if len(payload.encode("utf-8")) <= cls._MAX_VALUE_BYTES:
                trimmed["truncated"] = True
                return json.dumps(trimmed, ensure_ascii=False)
        # Last resort — message is still too big; persist a stub so
        # the caller knows the message existed without filling the row.
        return json.dumps({
            "fact":         f"[oversized message in {trimmed.get('chat_name') or trimmed.get('chat_id')}]",
            "source":       "teams",
            "kind":         "chat",
            "chat_id":      trimmed.get("chat_id"),
            "chat_name":    trimmed.get("chat_name"),
            "message_id":   trimmed.get("message_id"),
            "sender":       trimmed.get("sender"),
            "created_at":   trimmed.get("created_at"),
            "modified_at":  trimmed.get("modified_at"),
            "tags":         trimmed.get("tags"),
            "truncated":    True,
            "original_size": len(payload.encode("utf-8")),
        }, ensure_ascii=False)

    def get_watermark(self, chat_id: str) -> Optional[str]:
        key = WATERMARK_PREFIX + chat_id
        # EvolutionDB's MEMORY tables don't support filtering by
        # mem_key through the PG wire — pull every row in this
        # namespace and pick the watermark client-side. The same
        # pattern lives in mcp-server-evosql's MemoryBackend.search.
        sql = (f"SELECT mem_key, mem_value FROM __mem_{self.store} "
               f"WHERE mem_namespace='{_e(self.namespace)}' LIMIT 4096")
        def run(cur):
            cur.execute(sql)
            try:
                rows = cur.fetchall()
            except self.psycopg.ProgrammingError:
                return None
            for row in rows:
                if row[0] != key:
                    continue
                rec = _parse_value(row[1])
                return rec.get("watermark") if rec else None
            return None
        return self._with_retry(run)

    def set_watermark(self, chat_id: str, watermark_iso: str) -> None:
        key = WATERMARK_PREFIX + chat_id
        payload = json.dumps({
            "kind": "watermark",
            "chat_id": chat_id,
            "watermark": watermark_iso,
            "updated_at": time.time(),
        })
        sql = (f"MEMORY PUT INTO {self.store} VALUES "
               f"('{_e(self.namespace)}','{_e(key)}','{_e(payload)}')")
        self._with_retry(lambda cur: cur.execute(sql))

    def count_messages(self) -> int:
        """Total memory rows (messages + watermarks) for this user.
        Used by smoke tests to confirm writes land."""
        sql = (f"SELECT mem_key FROM __mem_{self.store} "
               f"WHERE mem_namespace='{_e(self.namespace)}'")
        def run(cur):
            cur.execute(sql)
            try:
                return len(cur.fetchall())
            except self.psycopg.ProgrammingError:
                return 0
        return self._with_retry(run)
