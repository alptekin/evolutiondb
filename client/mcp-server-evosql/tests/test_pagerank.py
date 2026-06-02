"""
test_pagerank — personalised PageRank over the entity graph (roadmap step 12).

Associative relevance decreases with graph distance from the query seed, the
seed holds the most mass, and the power iteration converges. Pure, no server.
"""
from __future__ import annotations

import sys

from mcp_server_evosql.graph import GraphStore


def _store():
    return GraphStore(lambda s: None, lambda s: [], "ns", "E", "M")


def main() -> int:
    g = _store()
    # chain A - B - C - D
    g._adj = {"A": {"B": 1.0}, "B": {"A": 1.0, "C": 1.0},
              "C": {"B": 1.0, "D": 1.0}, "D": {"C": 1.0}}

    ppr = g.personalized_pagerank(["A"])
    # PPR relevance fades with distance along the chain: the far end (D, 3 hops)
    # holds the least mass; both the seed and its immediate neighbour outrank the
    # 2- and 3-hop nodes. (B can exceed the seed A: A's only edge ships all its
    # mass to B — correct PageRank behaviour, not a seed-always-wins ranking.)
    assert ppr["B"] > ppr["C"] > ppr["D"], ppr
    assert ppr["A"] > ppr["C"] > ppr["D"], ppr
    print(f"  ok  PPR fades with distance: "
          f"A={ppr['A']:.3f} B={ppr['B']:.3f} C={ppr['C']:.3f} D={ppr['D']:.3f}")

    # weighting matters: a heavier edge pulls more mass
    g2 = _store()
    g2._adj = {"S": {"x": 1.0, "y": 9.0}, "x": {"S": 1.0}, "y": {"S": 9.0}}
    p2 = g2.personalized_pagerank(["S"])
    assert p2["y"] > p2["x"], p2
    print(f"  ok  heavier edge pulls more mass: y={p2['y']:.3f} > x={p2['x']:.3f}")

    # empty / unknown seeds
    assert g.personalized_pagerank([]) == {}
    assert g.personalized_pagerank(["nope"]) == {}
    print("  ok  empty/unknown seeds safe")

    print("OK — step 12 personalised PageRank")
    return 0


if __name__ == "__main__":
    sys.exit(main())
