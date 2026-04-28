"""Mem0 driver.

Tries the real `mem0` package first; if unavailable, falls back to
the bundled mem0-compatible adapter so the runner can still produce
a "Mem0-shaped API on EvolutionDB" baseline number even on a clean
machine.

A real Mem0 SaaS or self-host benchmark requires the `mem0` package
plus the OPENAI_API_KEY for embedding/distillation, which we don't
ship by default. Set MEM0_API_KEY in the environment to switch on
the upstream backend.
"""
from __future__ import annotations

import os
from typing import Optional, Sequence

from ._base import VendorDriver, safe_import

mem0 = safe_import("mem0")


class Mem0Driver(VendorDriver):
    """Public mem0 client (when installed)."""
    name = "Mem0 (upstream)"

    def __init__(self):
        self.client = None

    def is_available(self) -> bool:
        if mem0 is None:
            return False
        # Memory.from_config expects a config dict; without an LLM
        # backend the upstream client errors at first call. Treat
        # MEM0_API_KEY as the toggle.
        return bool(os.environ.get("MEM0_API_KEY"))

    def setup(self) -> None:
        from mem0 import Memory
        self.client = Memory()

    def teardown(self) -> None:
        # No public lifecycle hook on the upstream client.
        self.client = None

    def memory_put(self, ns: str, key: str, value: str,
                    embedding: Optional[Sequence[float]] = None) -> None:
        self.client.add(value, user_id=ns, metadata={"key": key})

    def memory_get(self, ns: str, key: str) -> str:
        results = self.client.search(query=key, user_id=ns, limit=1)
        if not results:
            return ""
        return str(results[0].get("memory", ""))


class Mem0CompatDriver(VendorDriver):
    """Bundled mem0-compatible adapter, executed against EvolutionDB.

    Useful as a "Mem0 API shape on the EvoSQL backend" reference row
    so users can see the latency cost of the API translation alone."""
    name = "Mem0-compat (on EvolutionDB)"

    def __init__(self, store: str = "mem0_compat_bench"):
        self.store = store
        self.mem   = None

    def is_available(self) -> bool:
        try:
            from evosql_memory.adapters.mem0_compat import Memory  # noqa: F401
            return True
        except ImportError:
            return False

    def setup(self) -> None:
        from evosql_memory.adapters.mem0_compat import Memory
        self.mem = Memory(host="127.0.0.1", port=9967,
                            user="admin", password="admin",
                            store_name=self.store)

    def teardown(self) -> None:
        if self.mem:
            self.mem.close()
            self.mem = None

    def memory_put(self, ns: str, key: str, value: str,
                    embedding: Optional[Sequence[float]] = None) -> None:
        self.mem.add({"key": key, "value": value}, user_id=ns,
                      memory_id=key)

    def memory_get(self, ns: str, key: str) -> str:
        rec = self.mem.get(key, user_id=ns)
        return rec.get("messages", {}).get("value", "") if rec else ""
