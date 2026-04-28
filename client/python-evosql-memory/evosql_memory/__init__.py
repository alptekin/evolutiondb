"""
evosql_memory — Python ctypes binding over libevosql-memory.

Discover the shared library on the host (DYLD_/LD_LIBRARY_PATH or the
local build/ directory of the SDK in the source tree), expose a
Connection and Subscription class, and re-export framework adapters.

Quick start:

    from evosql_memory import connect

    with connect("127.0.0.1", 9967, "admin", "admin") as conn:
        conn.exec_("DROP MEMORY STORE IF EXISTS demo")
        conn.exec_("CREATE MEMORY STORE demo")
        conn.memory_put("demo", "users", "alice", '{"role":"pm"}')
        print(conn.memory_get("demo", "users", "alice"))
"""
from .core import (
    EvoError,
    EvoNotFound,
    EvoSqlError,
    Connection,
    Subscription,
    cdc_subscribe,
    connect,
    format_vector,
)

__all__ = [
    "EvoError",
    "EvoNotFound",
    "EvoSqlError",
    "Connection",
    "Subscription",
    "cdc_subscribe",
    "connect",
    "format_vector",
]

__version__ = "1.0.0"
