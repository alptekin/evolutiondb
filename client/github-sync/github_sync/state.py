"""
Memory backend — writes GitHub records and per-issue watermarks into
EvolutionDB over the PG wire protocol. Same pattern as teams-sync;
copied rather than factored into a shared library so each connector
package stays a single `pip install` away from working.
"""
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


WATERMARK_PREFIX = "github_state_"


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
                "evolutiondb-github-sync requires psycopg. Install with "
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
                print(f"[github-sync] db connection lost "
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
    #  Watermarks — one row per repo:issue key                          #
    # ---------------------------------------------------------------- #
    def get_watermark(self, repo: str, number: int) -> Optional[str]:
        key = f"{WATERMARK_PREFIX}{repo}#{number}"

        def run(cur):
            cur.execute(
                f"SELECT mem_value FROM __mem_{self.store} "
                f"WHERE mem_namespace = '{_e(self.namespace)}' "
                f"AND mem_key = '{_e(key)}'"
            )
            rows = cur.fetchall()
            if not rows:
                return None
            return _parse_value(rows[0][0]).get("updated_at")

        return self._retry(run)

    def set_watermark(self, repo: str, number: int, updated_at: str) -> None:
        key = f"{WATERMARK_PREFIX}{repo}#{number}"
        value = json.dumps({"updated_at": updated_at,
                             "saved_at":   time.time()})
        self._retry(lambda cur: cur.execute(
            f"MEMORY PUT INTO {self.store} VALUES "
            f"('{_e(self.namespace)}','{_e(key)}','{_e(value)}')"
        ))

    # ---------------------------------------------------------------- #
    #  Records                                                          #
    # ---------------------------------------------------------------- #
    def put_record(self, key: str, record: Dict) -> None:
        value = json.dumps(record, ensure_ascii=False)
        self._retry(lambda cur: cur.execute(
            f"MEMORY PUT INTO {self.store} VALUES "
            f"('{_e(self.namespace)}','{_e(key)}','{_e(value)}')"
        ))
