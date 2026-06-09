"""
test_embedded — zero-Docker embedded mode (embedded.py).

Unit tests (no binary) cover binary resolution, the per-user data dir, the
port-in-use probe, and the EVOSQL_EMBEDDED gate. An integration test spawns the
real evosql-server when one is resolvable (skips otherwise): spawn on a free port
-> connect -> SELECT 1 -> idempotent second ensure_running -> close.
"""
from __future__ import annotations

import os
import socket
import sys
import tempfile

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from mcp_server_evosql import embedded


def _free_port():
    s = socket.socket()
    s.bind(("127.0.0.1", 0))
    p = s.getsockname()[1]
    s.close()
    return p


# ---------------------------------------------------------------- unit
def test_truthy_gate():
    assert embedded._truthy("1") and embedded._truthy("true") and embedded._truthy("YES")
    assert not embedded._truthy("") and not embedded._truthy("0") and not embedded._truthy(None)


def test_maybe_start_disabled_by_default():
    os.environ.pop("EVOSQL_EMBEDDED", None)
    assert embedded.maybe_start("127.0.0.1", _free_port()) is None


def test_resolve_binary_env_override(tmp=None):
    f = tempfile.NamedTemporaryFile(prefix="fake-evosql-", delete=False)
    f.close()
    old = os.environ.get("EVOSQL_SERVER_BINARY")
    os.environ["EVOSQL_SERVER_BINARY"] = f.name
    try:
        assert embedded.resolve_binary() == f.name
    finally:
        os.environ.pop("EVOSQL_SERVER_BINARY", None)
        if old:
            os.environ["EVOSQL_SERVER_BINARY"] = old
        os.unlink(f.name)


def test_default_data_dir_is_per_user():
    os.environ.pop("EVOSQL_EMBEDDED_DATA_DIR", None)
    d = embedded.default_data_dir()
    assert d.name == "data"
    assert str(d.parent).lower().find("evolutiondb") >= 0   # under an EvolutionDB dir


def test_data_dir_override():
    os.environ["EVOSQL_EMBEDDED_DATA_DIR"] = "/tmp/evo-custom"
    try:
        assert str(embedded.default_data_dir()) == "/tmp/evo-custom"
    finally:
        os.environ.pop("EVOSQL_EMBEDDED_DATA_DIR", None)


def test_port_in_use_false_on_free_port():
    assert embedded._port_in_use("127.0.0.1", _free_port()) is False


# ---------------------------------------------------------------- integration
def test_embedded_spawn_connect_close():
    if not embedded.resolve_binary():
        print("  SKIP (no evosql-server binary resolvable)")
        return
    port = _free_port()
    data = tempfile.mkdtemp(prefix="emb-test-")
    emb = embedded.EmbeddedEvolutionDB(port=port, data_dir=data)
    try:
        assert emb.ensure_running(timeout=20) is True          # we spawned it
        assert emb.proc and emb.proc.poll() is None
        from mcp_server_evosql.server import MemoryBackend
        b = MemoryBackend("127.0.0.1", port, "admin", "admin", "evosql", "embt")
        assert b._query("SELECT 1") == [["1"]]
        # idempotent: a second handle sees the port in use and does NOT spawn
        assert embedded.EmbeddedEvolutionDB(port=port, data_dir=data
                                            ).ensure_running() is False
    finally:
        emb.close()
    assert emb.proc is None
    print("  ok  embedded: spawn -> connect -> SELECT 1 -> idempotent -> close")


def main():
    units = [test_truthy_gate, test_maybe_start_disabled_by_default,
             test_resolve_binary_env_override, test_default_data_dir_is_per_user,
             test_data_dir_override, test_port_in_use_false_on_free_port]
    for fn in units:
        fn()
        print(f"  ok  {fn.__name__}")
    test_embedded_spawn_connect_close()
    print("OK — embedded mode")
    return 0


if __name__ == "__main__":
    sys.exit(main())
