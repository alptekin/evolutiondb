"""Pinecone driver.

Pinecone is vector-only: there's no concept of `value` separate
from the vector itself, so the benchmark stores a 16-dim hash of
the value as the vector and the value as metadata. Skipped unless
PINECONE_API_KEY is set and the `pinecone-client` SDK is installed.
"""
from __future__ import annotations

import hashlib
import os
import struct
from typing import Optional, Sequence

from ._base import VendorDriver, safe_import

pinecone = safe_import("pinecone")


class PineconeDriver(VendorDriver):
    name = "Pinecone"

    def __init__(self,
                  index_name: str = "vendor-bench",
                  dim: int = 16):
        self.index_name = index_name
        self.dim        = dim
        self.index      = None

    def is_available(self) -> bool:
        if pinecone is None:
            return False
        return bool(os.environ.get("PINECONE_API_KEY"))

    def setup(self) -> None:
        from pinecone import Pinecone, ServerlessSpec
        pc = Pinecone(api_key=os.environ["PINECONE_API_KEY"])
        existing = [i.name for i in pc.list_indexes()]
        if self.index_name in existing:
            pc.delete_index(self.index_name)
        pc.create_index(
            name=self.index_name,
            dimension=self.dim,
            metric="cosine",
            spec=ServerlessSpec(
                cloud=os.environ.get("PINECONE_CLOUD", "aws"),
                region=os.environ.get("PINECONE_REGION", "us-east-1"),
            ),
        )
        self.index = pc.Index(self.index_name)

    def teardown(self) -> None:
        if self.index is not None:
            try:
                from pinecone import Pinecone
                pc = Pinecone(api_key=os.environ["PINECONE_API_KEY"])
                pc.delete_index(self.index_name)
            except Exception:
                pass
            self.index = None

    def _hash_to_vector(self, text: str) -> list:
        """Deterministic 16-float vector derived from sha256(text)."""
        h = hashlib.sha256(text.encode("utf-8")).digest()
        floats: list = []
        for i in range(self.dim):
            chunk = h[(i * 2) % 32 : (i * 2) % 32 + 2] or h[:2]
            n = struct.unpack(">H", chunk)[0]
            floats.append((n / 65535.0) * 2.0 - 1.0)
        return floats

    def memory_put(self, ns: str, key: str, value: str,
                    embedding: Optional[Sequence[float]] = None) -> None:
        vec = list(embedding) if embedding else self._hash_to_vector(value)
        self.index.upsert(
            vectors=[{
                "id":       f"{ns}::{key}",
                "values":   vec,
                "metadata": {"namespace": ns, "key": key, "value": value},
            }]
        )

    def memory_get(self, ns: str, key: str) -> str:
        res = self.index.fetch(ids=[f"{ns}::{key}"])
        v   = res.vectors.get(f"{ns}::{key}") if hasattr(res, "vectors") else None
        if not v:
            return ""
        return str(v.metadata.get("value", "")) if v.metadata else ""
