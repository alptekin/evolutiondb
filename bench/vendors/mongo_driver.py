"""MongoDB driver — emulates the langgraph-store-mongodb namespace
shape with a regular `pymongo` collection.

The official `langgraph-store-mongodb` library is a thin layer on
top of pymongo; for raw memory_put / memory_get latency the
collection-level operations are what matters, so we benchmark those
directly.

Skipped at runtime when:
  - pymongo is not installed, or
  - the configured Mongo URI doesn't accept connections.
"""
from __future__ import annotations

import os
from typing import Optional, Sequence

from ._base import VendorDriver, safe_import

pymongo = safe_import("pymongo")


class MongoDriver(VendorDriver):
    name = "MongoDB (langgraph-store-mongodb shape)"

    def __init__(self,
                  uri: str = None,
                  database: str = "vendor_bench",
                  collection: str = "memories"):
        self.uri = uri or os.environ.get(
            "MONGO_URI", "mongodb://127.0.0.1:27017/?serverSelectionTimeoutMS=2000")
        self.db_name  = database
        self.col_name = collection
        self.client = None
        self.col    = None

    def is_available(self) -> bool:
        if pymongo is None:
            return False
        try:
            client = pymongo.MongoClient(self.uri,
                                            serverSelectionTimeoutMS=2000)
            client.admin.command("ping")
            client.close()
            return True
        except Exception:
            return False

    def setup(self) -> None:
        self.client = pymongo.MongoClient(self.uri)
        db = self.client[self.db_name]
        # Drop + recreate the collection so each run starts empty.
        if self.col_name in db.list_collection_names():
            db.drop_collection(self.col_name)
        self.col = db[self.col_name]
        # Index on the (namespace, key) pair — same shape
        # langgraph-store-mongodb uses for BaseStore reads.
        self.col.create_index([("namespace", 1), ("key", 1)],
                                unique=True, background=False)

    def teardown(self) -> None:
        if self.client:
            try:
                self.client[self.db_name].drop_collection(self.col_name)
            except Exception:
                pass
            self.client.close()
            self.client = None
            self.col    = None

    def memory_put(self, ns: str, key: str, value: str,
                    embedding: Optional[Sequence[float]] = None) -> None:
        doc = {"namespace": ns, "key": key, "value": value}
        if embedding is not None:
            doc["embedding"] = list(embedding)
        self.col.replace_one({"namespace": ns, "key": key},
                                doc, upsert=True)

    def memory_get(self, ns: str, key: str) -> str:
        rec = self.col.find_one({"namespace": ns, "key": key})
        if not rec:
            return ""
        return rec.get("value", "")
