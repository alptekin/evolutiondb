"""
test_dsar — per-user export / erase sweep across all memory stores.
Server-free via FakeBackend; fictional fixtures.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import dsar

A = "alice@globex"
B = "bob@globex"


def _seed(b):
    # alice: 2 rows in outbox, 1 in entities;  bob: 1 row in outbox.
    b.put(b.outbox_store, A, "o1", {"body_len": 3})
    b.put(b.outbox_store, A, "o2", {"body_len": 5})
    b.put(b.entity_store, A, "e1", {"name_len": 4})
    b.put(b.outbox_store, B, "o9", {"body_len": 1})


def test_stores_discovered_from_backend():
    b = FakeBackend()
    names = dsar.stores(b)
    assert b.outbox_store in names and b.entity_store in names and b.audit_store in names
    assert names == sorted(set(names))            # deduped + sorted


def test_export_returns_only_that_users_rows():
    b = FakeBackend(); _seed(b)
    ex = dsar.export_user(b, A)
    assert ex["row_count"] == 3
    assert set(ex["stores"]) == {b.outbox_store, b.entity_store}
    assert len(ex["stores"][b.outbox_store]) == 2
    # bob sees only his own
    assert dsar.export_user(b, B)["row_count"] == 1


def test_erase_removes_only_that_user():
    b = FakeBackend(); _seed(b)
    res = dsar.erase_user(b, A)
    assert res["row_count"] == 3
    assert res["deleted"][b.outbox_store] == 2
    # alice gone, bob intact
    assert dsar.export_user(b, A)["row_count"] == 0
    assert dsar.export_user(b, B)["row_count"] == 1
    assert b.rows(b.outbox_store, B)                # bob's row still present


def test_export_empty_user_is_safe():
    b = FakeBackend()
    ex = dsar.export_user(b, "nobody@globex")
    assert ex["row_count"] == 0 and ex["stores"] == {}


def main():
    for fn in (test_stores_discovered_from_backend,
               test_export_returns_only_that_users_rows,
               test_erase_removes_only_that_user,
               test_export_empty_user_is_safe):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — dsar")
    return 0


if __name__ == "__main__":
    sys.exit(main())
