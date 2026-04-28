"""Zep driver.

Skipped unless the `zep-python` SDK is installed AND `ZEP_API_KEY`
or a self-host URL is provided. Zep's session memory model is
session_id + role-tagged messages; we map our (namespace, key)
shape onto (session_id=ns, key as message metadata) so the
benchmark stays apples-to-apples.
"""
from __future__ import annotations

import os
from typing import Optional, Sequence

from ._base import VendorDriver, safe_import

zep_python = safe_import("zep_python")


class ZepDriver(VendorDriver):
    name = "Zep"

    def __init__(self):
        self.client = None

    def is_available(self) -> bool:
        if zep_python is None:
            return False
        # Need either an API key (cloud) or a self-host base URL.
        return bool(os.environ.get("ZEP_API_KEY") or
                    os.environ.get("ZEP_BASE_URL"))

    def setup(self) -> None:
        from zep_python import ZepClient
        api_key  = os.environ.get("ZEP_API_KEY")
        base_url = os.environ.get("ZEP_BASE_URL", "http://127.0.0.1:8000")
        self.client = ZepClient(base_url=base_url, api_key=api_key)

    def teardown(self) -> None:
        if self.client:
            try:
                self.client.close()
            except Exception:
                pass
            self.client = None

    def memory_put(self, ns: str, key: str, value: str,
                    embedding: Optional[Sequence[float]] = None) -> None:
        # Zep stores messages by session_id; tag the key in metadata.
        self.client.memory.add_memory(
            session_id=ns,
            messages=[{
                "role":     "user",
                "content":  value,
                "metadata": {"key": key},
            }],
        )

    def memory_get(self, ns: str, key: str) -> str:
        memory = self.client.memory.get_memory(session_id=ns)
        if not memory or not memory.messages:
            return ""
        for msg in reversed(memory.messages):
            if msg.metadata and msg.metadata.get("key") == key:
                return msg.content or ""
        return ""
