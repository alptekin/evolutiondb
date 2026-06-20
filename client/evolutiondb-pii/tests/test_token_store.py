"""
test_token_store — per-tenant encrypted connector-token storage (no DB).

A dict-backed FakeConn stands in for the engine (parses the small MEMORY
PUT/SELECT/DELETE surface store_io emits), so the seal/open crypto, the
namespace isolation, and the store round-trip are all exercised without a live
EvolutionDB. cryptography is a hard dependency of this package.
"""
from __future__ import annotations

import json
import os
import re
import sys

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from evolutiondb_pii import token_store, token_cli                          # noqa: E402
from evolutiondb_pii.token_store import TokenStore                          # noqa: E402

SECRET = "test-token-store-secret"
passed = failed = 0


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


def _lits(sql):
    out, i, n = [], 0, len(sql)
    while i < n:
        if sql[i] == "'":
            i += 1; buf = []
            while i < n:
                if sql[i] == "'":
                    if i + 1 < n and sql[i + 1] == "'":
                        buf.append("'"); i += 2; continue
                    i += 1; break
                buf.append(sql[i]); i += 1
            out.append("".join(buf))
        else:
            i += 1
    return out


class FakeCursor:
    def __init__(self, db):
        self.db = db; self._res = []

    def __enter__(self):
        return self

    def __exit__(self, *a):
        return False

    def execute(self, sql):
        self._res = []
        up = sql.strip().upper()
        lits = _lits(sql)
        if up.startswith("CREATE MEMORY STORE"):
            return
        if up.startswith("MEMORY PUT"):
            store = re.search(r"INTO\s+(\w+)\s+VALUES", sql, re.I).group(1)
            self.db[(store, lits[0], lits[1])] = lits[2]
            return
        if up.startswith("DELETE FROM"):
            store = re.search(r"__mem_(\w+)", sql).group(1)
            self.db.pop((store, lits[0], lits[1]), None)
            return
        if "MEM_KEY, MEM_VALUE" in up:
            store = re.search(r"__mem_(\w+)", sql).group(1)
            ns = lits[0]; pfx = (lits[1][:-1] if len(lits) > 1 and lits[1].endswith("%")
                                 else (lits[1] if len(lits) > 1 else ""))
            self._res = [(k, v) for (st, n, k), v in self.db.items()
                         if st == store and n == ns and k.startswith(pfx)]
            return
        if up.startswith("SELECT MEM_VALUE"):
            store = re.search(r"__mem_(\w+)", sql).group(1)
            v = self.db.get((store, lits[0], lits[1]))
            self._res = [(v,)] if v is not None else []
            return

    def fetchone(self):
        return self._res[0] if self._res else None

    def fetchall(self):
        return list(self._res)


class FakeConn:
    def __init__(self):
        self.db = {}

    def cursor(self):
        return FakeCursor(self.db)


def _env(ns="t1", secret=SECRET):
    e = dict(os.environ)
    e.pop("EVOSQL_TOKEN_KEY", None)
    if secret:
        e["EVOSQL_TENANT_SECRET"] = secret
    else:
        e.pop("EVOSQL_TENANT_SECRET", None)
    e["MCP_USER_ID"] = ns
    return e


def test_seal_open_roundtrip():
    ts = TokenStore("gmail", env=_env(), conn=FakeConn())
    blob = ts._seal("hello-secret")
    assert ts._open(blob) == "hello-secret"
    assert "hello-secret" not in blob                     # ciphertext, not plain


def test_wrong_key_cannot_open():
    a = TokenStore("gmail", namespace="t1", env=_env("t1"), conn=FakeConn())
    b = TokenStore("gmail", namespace="t2", env=_env("t2"), conn=FakeConn())
    blob = a._seal("xoxp-token")
    raised = False
    try:
        b._open(blob)                                     # different ns -> different key
    except Exception:
        raised = True
    assert raised, "a different namespace's key should not decrypt the blob"


def test_save_load_roundtrip_and_value_is_encrypted():
    conn = FakeConn()
    ts = TokenStore("slack", env=_env("t1"), conn=conn)
    ts.save({"token": "xoxp-super-secret"})
    assert ts.load() == {"token": "xoxp-super-secret"}
    # the raw stored value must NOT contain the plaintext token
    raw = next(iter(conn.db.values()))
    assert "xoxp-super-secret" not in raw and "\"enc\"" in raw


def test_namespace_isolation():
    conn = FakeConn()                                     # one shared engine
    TokenStore("gmail", env=_env("alice"), conn=conn).save({"access_token": "A"})
    TokenStore("gmail", env=_env("bob"), conn=conn).save({"access_token": "B"})
    assert TokenStore("gmail", env=_env("alice"), conn=conn).load() == {"access_token": "A"}
    assert TokenStore("gmail", env=_env("bob"), conn=conn).load() == {"access_token": "B"}
    # carol has no token
    assert TokenStore("gmail", env=_env("carol"), conn=conn).load() == {}


def test_delete():
    conn = FakeConn()
    ts = TokenStore("github", env=_env("t1"), conn=conn)
    ts.save({"token": "ghp_x"})
    assert ts.load() == {"token": "ghp_x"}
    ts.delete()
    assert ts.load() == {}


def test_maybe_none_without_secret():
    assert TokenStore.maybe("gmail", env=_env(secret="")) is None
    # with a secret AND an injected conn (skips the engine probe) -> a store
    assert TokenStore.maybe("gmail", env=_env(), conn=FakeConn()) is not None


def test_cli_set_get_list_delete(monkeypatch):
    import contextlib
    import io
    conn = FakeConn()
    monkeypatch.setattr("evolutiondb_pii.store_io.connect_from_env",
                        lambda env=None: conn)
    monkeypatch.setenv("EVOSQL_TENANT_SECRET", SECRET)
    monkeypatch.delenv("EVOSQL_TOKEN_KEY", raising=False)

    def cli(args):
        buf = io.StringIO()
        with contextlib.redirect_stdout(buf):
            rc = token_cli.main(args)
        return rc, buf.getvalue()

    rc, _ = cli(["set", "slack", "--namespace", "t1", "--token", "xoxp-1"])
    assert rc == 0
    rc, out = cli(["get", "slack", "--namespace", "t1"])
    assert json.loads(out) == {"token": "xoxp-1"}
    rc, out = cli(["list", "--namespace", "t1"])
    assert "slack" in json.loads(out)["connectors"]
    rc, _ = cli(["delete", "slack", "--namespace", "t1"])
    assert rc == 0
    rc, out = cli(["get", "slack", "--namespace", "t1"])
    assert json.loads(out) == {}


if __name__ == "__main__":
    print("=== per-tenant connector token store ===")
    for fn in (test_seal_open_roundtrip, test_wrong_key_cannot_open,
               test_save_load_roundtrip_and_value_is_encrypted,
               test_namespace_isolation, test_delete, test_maybe_none_without_secret):
        run(fn.__name__, fn)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
