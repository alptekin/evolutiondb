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


# ---------------------------------------------------------------- bundle + receipt
from mcp_server_evosql import audit                         # noqa: E402
from mcp_server_evosql.tenancy import Identity              # noqa: E402

OP = Identity("globex", "officer@globex", "t_globex", "u_globex", roles=("admin",))


def test_export_bundle_is_portable():
    b = FakeBackend(); _seed(b)
    bundle = dsar.export_bundle(b, A, tenant="globex")
    assert bundle["format"] == dsar.BUNDLE_FORMAT
    assert bundle["kind"] == "access-export"
    assert bundle["tenant"] == "globex" and bundle["user"] == A
    assert isinstance(bundle["generated_at"], int) and bundle["generated_at"] > 0
    assert bundle["row_count"] == 3
    assert set(bundle["stores"]) == {b.outbox_store, b.entity_store}


def test_export_and_record_files_access_receipt():
    b = FakeBackend(); _seed(b)
    dsar.export_and_record(b, OP, A, tenant="globex")
    receipts = audit.dsar_receipts(b)
    assert len(receipts) == 1
    r = receipts[0]
    assert r["kind"] == "dsar" and r["action"] == "dsar.export"
    assert r["subject"] == A and r["user"] == "officer@globex"   # subject vs operator
    # export must not have deleted anything
    assert dsar.export_user(b, A)["row_count"] == 3


def test_erase_receipt_survives_the_erasure():
    b = FakeBackend(); _seed(b)
    res = dsar.erase_and_record(b, OP, A)
    assert res["row_count"] == 3 and res["receipt"] == "filed"
    # alice's data (incl. her own audit ns) is gone; bob untouched
    assert dsar.export_user(b, A)["row_count"] == 0
    assert dsar.export_user(b, B)["row_count"] == 1
    assert b.rows(b.audit_store, A) == {}        # nothing left under the subject ns
    # but the proof lives under the compliance ns and SURVIVED
    receipts = audit.dsar_receipts(b)
    assert len(receipts) == 1
    assert receipts[0]["action"] == "dsar.erase" and receipts[0]["subject"] == A
    # the receipt is filed under DSAR_NS, not alice's namespace
    assert b.rows(b.audit_store, audit.DSAR_NS)


# ---------------------------------------------------------------- server tools (RBAC)
NS = "alp_test"


def _ident(roles=("admin",), user=NS):
    return Identity("acme", user, "t_acme", "u_acme", roles=roles)


def _srv_with(b):
    from mcp_server_evosql.server import MCPServer
    srv = MCPServer()
    srv._backend_for = lambda ident: b
    return srv


def test_tool_export_self_and_admin_other():
    b = FakeBackend()
    b.put(b.outbox_store, NS, "o1", {"body_len": 2})
    b.put(b.outbox_store, "other@acme", "o2", {"body_len": 3})
    srv = _srv_with(b)
    # a viewer may export THEIR OWN data (read-only, any role)
    out = srv._call_tool("export_my_data", {}, _ident(roles=("viewer",)))
    assert out["ok"] and out["user"] == NS and out["row_count"] == 1
    # but NOT someone else's unless admin
    deny = srv._call_tool("export_my_data", {"user": "other@acme"},
                          _ident(roles=("member",)))
    assert "permission denied" in deny.get("error", "")
    # an admin can
    ok = srv._call_tool("export_my_data", {"user": "other@acme"},
                        _ident(roles=("admin",)))
    assert ok["ok"] and ok["user"] == "other@acme" and ok["row_count"] == 1


def test_tool_erase_requires_confirm_and_role():
    b = FakeBackend()
    b.put(b.outbox_store, NS, "o1", {"body_len": 2})
    srv = _srv_with(b)
    # viewer denied (and the denial is audited)
    deny = srv._call_tool("erase_my_data", {"confirm": True},
                          _ident(roles=("viewer",)))
    assert "permission denied" in deny.get("error", "")
    assert b.rows(b.outbox_store, NS)                  # nothing erased
    # member without confirm -> refused
    noconf = srv._call_tool("erase_my_data", {}, _ident(roles=("member",)))
    assert "confirm=true" in noconf.get("error", "")
    assert b.rows(b.outbox_store, NS)
    # member with confirm -> erased + receipt filed. (row_count >= 1: the sweep
    # also clears the user's own audit ns — erasing the user erases their trail.)
    ok = srv._call_tool("erase_my_data", {"confirm": True},
                        _ident(roles=("member",)))
    assert ok["ok"] and ok["row_count"] >= 1
    assert b.rows(b.outbox_store, NS) == {}
    assert audit.dsar_receipts(b)[0]["action"] == "dsar.erase"


def main():
    tests = (test_stores_discovered_from_backend,
             test_export_returns_only_that_users_rows,
             test_erase_removes_only_that_user,
             test_export_empty_user_is_safe,
             test_export_bundle_is_portable,
             test_export_and_record_files_access_receipt,
             test_erase_receipt_survives_the_erasure,
             test_tool_export_self_and_admin_other,
             test_tool_erase_requires_confirm_and_role)
    for fn in tests:
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — dsar")
    return 0


if __name__ == "__main__":
    sys.exit(main())
