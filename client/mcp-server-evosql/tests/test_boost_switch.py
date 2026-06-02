"""
test_boost_switch — EVOSQL_MEMORY_BOOSTS master switch + per-boost kill-switch
(roadmap step 2).

Unit: _resolve_boost honours an explicit override, then the master, then 0.
Integration (skipped without a server): a MemoryBackend built with the master
on enables salience/graph/profile/decay at sensible levels; an explicit
EVOSQL_*_BOOST=0 forces that one off even with the master on; master off keeps
everything at 0 (byte-for-byte backward compatible).
"""
from __future__ import annotations

import os
import sys

from mcp_server_evosql.server import _resolve_boost, _boosts_master_on

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))
_KEYS = ["EVOSQL_MEMORY_BOOSTS", "EVOSQL_SALIENCE_BOOST", "EVOSQL_GRAPH_BOOST",
         "EVOSQL_PROFILE_BOOST", "EVOSQL_DECAY"]


def _set_env(**kw):
    for k in _KEYS:
        os.environ.pop(k, None)
    for k, v in kw.items():
        os.environ[k] = v


def test_resolve():
    _set_env()                                   # nothing set
    assert _resolve_boost("EVOSQL_GRAPH_BOOST", 0.30) == 0.0, "default off"
    _set_env(EVOSQL_MEMORY_BOOSTS="on")
    assert _boosts_master_on() is True
    assert _resolve_boost("EVOSQL_GRAPH_BOOST", 0.30) == 0.30, "master enables default"
    _set_env(EVOSQL_MEMORY_BOOSTS="on", EVOSQL_GRAPH_BOOST="0")
    assert _resolve_boost("EVOSQL_GRAPH_BOOST", 0.30) == 0.0, "override kill-switch wins"
    _set_env(EVOSQL_GRAPH_BOOST="0.5")           # explicit, master off
    assert _resolve_boost("EVOSQL_GRAPH_BOOST", 0.30) == 0.5, "explicit override wins"
    _set_env()
    print("  ok  _resolve_boost: default / master / kill-switch / override")


def _backend(prefix):
    from mcp_server_evosql.server import MemoryBackend
    return MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)


def test_integration() -> bool:
    try:
        import psycopg
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        _set_env()
        return True
    os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "none"
    os.environ["EVOSQL_EMBEDDING_MODEL_2"] = ""

    _set_env()                                   # master off, no overrides
    b = _backend("mcp_bs_off")
    assert b.salience_boost == 0 and b.graph_boost == 0 and b.profile_boost == 0
    assert b.decay_enabled is False, "default must be byte-for-byte (no boosts)"

    _set_env(EVOSQL_MEMORY_BOOSTS="on")
    b = _backend("mcp_bs_on")
    assert b.salience_boost == 0.25 and b.graph_boost == 0.30 \
        and b.profile_boost == 0.25 and b.decay_enabled is True, \
        f"master on: {b.salience_boost},{b.graph_boost},{b.profile_boost},{b.decay_enabled}"

    _set_env(EVOSQL_MEMORY_BOOSTS="on", EVOSQL_GRAPH_BOOST="0", EVOSQL_DECAY="0")
    b = _backend("mcp_bs_mix")
    assert b.graph_boost == 0 and b.decay_enabled is False, "kill-switch wins"
    assert b.salience_boost == 0.25, "other boosts still on"

    _set_env()
    print("  ok  integration: master on/off + per-boost kill-switch on a backend")
    return True


def main() -> int:
    test_resolve()
    test_integration()
    print("OK — step 2 boost master switch + kill-switch")
    return 0


if __name__ == "__main__":
    sys.exit(main())
