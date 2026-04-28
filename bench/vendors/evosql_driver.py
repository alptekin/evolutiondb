"""EvolutionDB driver — uses the in-tree Python SDK."""
from __future__ import annotations

import json
import os
import sys
from typing import Optional, Sequence

from ._base import VendorDriver

HERE = os.path.dirname(os.path.dirname(os.path.dirname(os.path.abspath(__file__))))
PY_SDK = os.path.join(HERE, "client", "python-evosql-memory")
if PY_SDK not in sys.path:
    sys.path.insert(0, PY_SDK)


class EvoSQLDriver(VendorDriver):
    name = "EvolutionDB"

    def __init__(self, host: str = "127.0.0.1", port: int = 9967,
                  user: str = "admin", password: str = "admin",
                  store: str = "vendor_bench"):
        self.host  = host
        self.port  = port
        self.user  = user
        self.pwd   = password
        self.store = store
        self.conn  = None

    def is_available(self) -> bool:
        try:
            from evosql_memory import connect       # noqa: F401
            return True
        except (ImportError, OSError):
            return False

    def setup(self) -> None:
        from evosql_memory import connect
        self.conn = connect(self.host, self.port, self.user, self.pwd)
        self.conn.exec_(f"DROP MEMORY STORE IF EXISTS {self.store}")
        self.conn.exec_(f"CREATE MEMORY STORE {self.store}")

    def teardown(self) -> None:
        if self.conn:
            try:
                self.conn.exec_(f"DROP MEMORY STORE {self.store}")
            except Exception:
                pass
            self.conn.close()
            self.conn = None

    def memory_put(self, ns: str, key: str, value: str,
                    embedding: Optional[Sequence[float]] = None) -> None:
        self.conn.memory_put(self.store, ns, key, value,
                              list(embedding) if embedding else None)

    def memory_get(self, ns: str, key: str) -> str:
        return self.conn.memory_get(self.store, ns, key)
