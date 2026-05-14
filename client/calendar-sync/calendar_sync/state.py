"""Memory backend for calendar-sync. Same template as the sibling
connector packages; the only difference is that the watermark is
Google's native syncToken (one per calendar), not a wall-clock
timestamp."""
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


WATERMARK_PREFIX = "gcal_state_"


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
    _RECONNECT_ATTEMPTS = 3
    _RECONNECT_BACKOFF_SEC = 0.5

    def __init__(self, host: str, port: int, user: str, password: str,
                 database: str, store: str, namespace: str):
        try:
            import psycopg
        except ImportError as exc:
            raise RuntimeError(
                "evolutiondb-calendar-sync requires psycopg. "
                "Install with `pip install psycopg[binary]>=3.1`."
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
                print(f"[calendar-sync] db connection lost "
                      f"(attempt {attempt + 1}): {exc}",
                      file=sys.stderr, flush=True)
                try:
                    self.conn.close()
                except Exception:
                    pass
                if attempt + 1 < self._RECONNECT_ATTEMPTS:
                    time.sleep(self._RECONNECT_BACKOFF_SEC * (attempt + 1))
                    try:
                        self.conn = self._connect()
                    except Exception as reconn:
                        last = reconn
                        continue
        raise last  # type: ignore[misc]

    # ---------------------------------------------------------------- #
    #  Per-calendar sync token                                          #
    # ---------------------------------------------------------------- #
    def get_sync_token(self, calendar_id: str) -> Optional[str]:
        key = f"{WATERMARK_PREFIX}{calendar_id}"

        def run(cur):
            cur.execute(
                f"SELECT mem_value FROM __mem_{self.store} "
                f"WHERE mem_namespace = '{_e(self.namespace)}' "
                f"AND mem_key = '{_e(key)}'"
            )
            rows = cur.fetchall()
            if not rows:
                return None
            return _parse_value(rows[0][0]).get("sync_token")

        return self._retry(run)

    def set_sync_token(self, calendar_id: str, token: str) -> None:
        key = f"{WATERMARK_PREFIX}{calendar_id}"
        value = json.dumps({"sync_token": token,
                             "saved_at":   time.time()})
        self._retry(lambda cur: cur.execute(
            f"MEMORY PUT INTO {self.store} VALUES "
            f"('{_e(self.namespace)}','{_e(key)}','{_e(value)}')"
        ))

    def clear_sync_token(self, calendar_id: str) -> None:
        """Called when Google returns 410 Gone on the token (older
        than 30 days)."""
        key = f"{WATERMARK_PREFIX}{calendar_id}"
        try:
            self._retry(lambda cur: cur.execute(
                f"MEMORY DELETE FROM {self.store} "
                f"WHERE NS='{_e(self.namespace)}' "
                f"AND KEY='{_e(key)}'"
            ))
        except Exception:
            pass

    # ---------------------------------------------------------------- #
    #  Records                                                          #
    # ---------------------------------------------------------------- #
    def put_record(self, key: str, record: Dict) -> None:
        value = json.dumps(record, ensure_ascii=False)
        self._retry(lambda cur: cur.execute(
            f"MEMORY PUT INTO {self.store} VALUES "
            f"('{_e(self.namespace)}','{_e(key)}','{_e(value)}')"
        ))

    def delete_record(self, key: str) -> None:
        """Used when Google reports an event as deleted in the
        incremental sync."""
        try:
            self._retry(lambda cur: cur.execute(
                f"MEMORY DELETE FROM {self.store} "
                f"WHERE NS='{_e(self.namespace)}' "
                f"AND KEY='{_e(key)}'"
            ))
        except Exception:
            pass
