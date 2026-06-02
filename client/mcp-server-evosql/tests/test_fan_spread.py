"""
test_fan_spread — fan-normalised spreading activation (roadmap step 11).

The ACT-R fan effect: a hub cue (many associations) passes LESS strength to each
of its neighbours than a narrow cue passes to its sole neighbour. Pure (manual
adjacency), no server.
"""
from __future__ import annotations

import sys

from mcp_server_evosql.graph import GraphStore


def _store():
    return GraphStore(lambda s: None, lambda s: [], "ns", "E", "M")


def main() -> int:
    g = _store()
    # hub: 10 neighbours (high fan). narrow: 1 neighbour (low fan).
    adj = {"hub": {f"h{i}": 1.0 for i in range(10)},
           "narrow": {"t": 1.0}, "t": {"narrow": 1.0}}
    for i in range(10):
        adj[f"h{i}"] = {"hub": 1.0}
    g._adj = adj

    sp_hub = g.spreading_activation_fan(["hub"], depth=1)
    sp_nar = g.spreading_activation_fan(["narrow"], depth=1)

    # the fan effect: a narrow cue's single neighbour out-activates each of a
    # hub cue's many neighbours
    assert sp_nar["t"] > sp_hub["h0"], (sp_nar["t"], sp_hub["h0"])
    # a hub spreads equally to its neighbours
    assert abs(sp_hub["h0"] - sp_hub["h5"]) < 1e-9
    # the seed itself is never in its own spread
    assert "hub" not in sp_hub and "narrow" not in sp_nar
    print(f"  ok  fan effect: narrow->t {sp_nar['t']:.3f} > hub->h0 {sp_hub['h0']:.3f}")

    # cycle-safe + depth bound (narrow<->t loop must terminate)
    sp_deep = g.spreading_activation_fan(["narrow"], depth=5)
    assert "t" in sp_deep
    # empty / unknown seeds -> empty
    assert g.spreading_activation_fan([], depth=2) == {}
    assert g.spreading_activation_fan(["nope"], depth=2) == {}
    print("  ok  cycle-safe, depth-bounded, empty-seed safe")

    print("OK — step 11 fan-normalised spreading activation")
    return 0


if __name__ == "__main__":
    sys.exit(main())
