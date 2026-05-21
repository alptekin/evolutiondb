"""Memory backend for outlook-sync. Same template as the sibling
connector packages; watermark stored as ISO 8601 receivedDateTime
so we can plug it straight into Graph's `$filter`."""
from __future__ import annotations

import json
import sys
import time
from typing import Dict, Optional


def _e(s: str) -> str:
    if not isinstance(s, str):
        s = str(s)
    s = s.replace("\r", " ").replace("\n", " ").replace("\t", " ")
    return s.replace("'", "''")


WATERMARK_KEY = "outlook_state_latest"


def _parse_value(raw):
    if isinstance(raw, dict):
        return raw
    if not raw:
        return {}
    try:
        return json.loads(raw)
    except (TypeError, ValueError):
        return {}


class MemoryStore:
    _RECONNECT_ATTEMPTS    = 3
    _RECONNECT_BACKOFF_SEC = 0.5

    def __init__(self, host: str, port: int, user: str, password: str,
                 database: str, store: str, namespace: str):
        try:
            import psycopg
        except ImportError as exc:
            raise RuntimeError(
                "evolutiondb-outlook-sync requires psycopg. Install with "
                "`pip install psycopg[binary]>=3.1`."
            ) from exc

        self.psycopg = psycopg
        self._conn_kwargs = dict(
            host=host, port=port, user=user, password=password,
            dbname=database, autocommit=True,
        )
        self.store     = store
        self.namespace = namespace
        self.conn      = self._connect()

        try:
            with self.conn.cursor() as cur:
                cur.execute(f"CREATE MEMORY STORE {self.store}")
        except Exception:
            pass

    def _connect(self):
        return self.psycopg.connect(**self._conn_kwargs)

    def _is_dead(self, exc: BaseException) -> bool:
        return isinstance(exc, (self.psycopg.OperationalError,
                                  self.psycopg.InterfaceError))

    def _retry(self, fn):
        last = None
        for attempt in range(self._RECONNECT_ATTEMPTS):
            try:
                with self.conn.cursor() as cur:
                    return fn(cur)
            except Exception as exc:
                if not self._is_dead(exc):
                    raise
                last = exc
                print(f"[outlook-sync] db connection lost "
                      f"(attempt {attempt + 1}): {exc}",
                      file=sys.stderr, flush=True)
                try:
                    self.conn.close()
                except Exception:
                    pass
                if attempt + 1 < self._RECONNECT_ATTEMPTS:
                    time.sleep(self._RECONNECT_BACKOFF_SEC *
                                (attempt + 1))
                    try:
                        self.conn = self._connect()
                    except Exception as reconn:
                        last = reconn
                        continue
        raise last  # type: ignore[misc]

    # ---------------------------------------------------------------- #
    #  Watermark — single ISO 8601 receivedDateTime                     #
    # ---------------------------------------------------------------- #
    def get_watermark_iso(self) -> Optional[str]:
        def run(cur):
            cur.execute(
                f"SELECT mem_value FROM __mem_{self.store} "
                f"WHERE mem_namespace = '{_e(self.namespace)}' "
                f"AND mem_key = '{_e(WATERMARK_KEY)}'")
            rows = cur.fetchall()
            if not rows:
                return None
            v = _parse_value(rows[0][0]).get("received_at")
            return str(v) if v else None
        return self._retry(run)

    def set_watermark_iso(self, iso: str) -> None:
        value = json.dumps({"received_at": iso,
                              "saved_at":    time.time()})
        self._retry(lambda cur: cur.execute(
            f"MEMORY PUT INTO {self.store} VALUES "
            f"('{_e(self.namespace)}','{_e(WATERMARK_KEY)}','{_e(value)}')"))

    # ---------------------------------------------------------------- #
    #  Records                                                          #
    # ---------------------------------------------------------------- #
    def put_record(self, key: str, record: Dict) -> None:
        # Same defensive UPSERT pattern as notes-sync v0.1.1: clear
        # any existing row first so MEMORY PUT never lands on the
        # large-payload "duplicate key" path. The DELETE is a no-op
        # when nothing matches.
        value = json.dumps(record, ensure_ascii=False)
        def run(cur):
            cur.execute(
                f"DELETE FROM __mem_{self.store} "
                f"WHERE mem_namespace = '{_e(self.namespace)}' "
                f"AND mem_key = '{_e(key)}'")
            cur.execute(
                f"MEMORY PUT INTO {self.store} VALUES "
                f"('{_e(self.namespace)}','{_e(key)}','{_e(value)}')")
        self._retry(run)

    def has_message(self, msg_id: str) -> bool:
        key = f"outlook_msg_{msg_id}"

        def run(cur):
            cur.execute(
                f"SELECT mem_key FROM __mem_{self.store} "
                f"WHERE mem_namespace = '{_e(self.namespace)}' "
                f"AND mem_key = '{_e(key)}' LIMIT 1")
            return bool(cur.fetchall())
        return self._retry(run)
