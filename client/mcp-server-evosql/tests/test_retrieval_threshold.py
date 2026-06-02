"""
test_retrieval_threshold — activation threshold + retrieval noise (step 13).

The gate keeps only candidates whose (activation + noise) clears tau, so the
memory can return NOTHING when nothing is activated enough; tau=None is the
backward-compatible no-op. Pure, no server.
"""
from __future__ import annotations

import random
import sys

from mcp_server_evosql.activation import logistic_noise, threshold_filter


def main() -> int:
    scored = [("a", 1.0), ("b", 0.4), ("c", -0.2)]

    # tau=None keeps everything, sorted desc
    keep = threshold_filter(scored, None)
    assert [k for k, _ in keep] == ["a", "b", "c"], keep

    # a threshold drops the weak rows
    keep = threshold_filter(scored, 0.5)
    assert [k for k, _ in keep] == ["a"], keep

    # abstention: when NOTHING clears tau, return nothing
    assert threshold_filter(scored, 5.0) == []
    assert threshold_filter([], 0.0) == []
    print("  ok  threshold gates weak rows; empty when nothing clears tau")

    # noise: zero scale is deterministic 0; a seeded rng is reproducible
    assert logistic_noise(0.0) == 0.0
    r1 = random.Random(42)
    r2 = random.Random(42)
    assert logistic_noise(1.0, r1) == logistic_noise(1.0, r2)
    # mean of logistic noise ~ 0 over many samples
    rr = random.Random(7)
    samples = [logistic_noise(1.0, rr) for _ in range(5000)]
    assert abs(sum(samples) / len(samples)) < 0.15, "noise mean should be ~0"
    print("  ok  logistic noise: 0 at scale 0, reproducible, zero-mean")

    print("OK — step 13 retrieval threshold + noise")
    return 0


if __name__ == "__main__":
    sys.exit(main())
