"""Weaviate driver.

Skipped unless `weaviate-client` is installed AND a Weaviate instance
is reachable on `WEAVIATE_URL` (default http://127.0.0.1:8080).
Stores `(namespace, key, value)` triples on a `BenchMemory` class.
"""
from __future__ import annotations

import os
from typing import Optional, Sequence

from ._base import VendorDriver, safe_import

weaviate = safe_import("weaviate")


class WeaviateDriver(VendorDriver):
    name = "Weaviate"

    CLASS_NAME = "BenchMemory"

    def __init__(self):
        self.client = None
        self.url    = os.environ.get("WEAVIATE_URL", "http://127.0.0.1:8080")

    def is_available(self) -> bool:
        if weaviate is None:
            return False
        try:
            import requests
            requests.get(self.url + "/v1/.well-known/ready", timeout=2)
            return True
        except Exception:
            return False

    def setup(self) -> None:
        import weaviate as w

        self.client = w.connect_to_local(host=self.url.split("//")[-1].split(":")[0])

        if self.client.collections.exists(self.CLASS_NAME):
            self.client.collections.delete(self.CLASS_NAME)
        self.client.collections.create(
            name=self.CLASS_NAME,
            properties=[
                {"name": "namespace", "dataType": ["text"]},
                {"name": "memkey",    "dataType": ["text"]},
                {"name": "value",     "dataType": ["text"]},
            ],
        )
        self.col = self.client.collections.get(self.CLASS_NAME)

    def teardown(self) -> None:
        if self.client:
            try:
                self.client.collections.delete(self.CLASS_NAME)
                self.client.close()
            except Exception:
                pass
            self.client = None

    def memory_put(self, ns: str, key: str, value: str,
                    embedding: Optional[Sequence[float]] = None) -> None:
        self.col.data.insert({
            "namespace": ns,
            "memkey":    key,
            "value":     value,
        })

    def memory_get(self, ns: str, key: str) -> str:
        from weaviate.classes.query import Filter
        result = self.col.query.fetch_objects(
            filters=Filter.by_property("namespace").equal(ns) &
                     Filter.by_property("memkey").equal(key),
            limit=1,
        )
        if not result.objects:
            return ""
        return str(result.objects[0].properties.get("value", ""))
