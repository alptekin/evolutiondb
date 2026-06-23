"""
test_semantic_eval — semantic-tier contribution metric (roadmap step 18).

semantic_hit detects a semantic generalization in the results; it is a tracked
gate metric so a regression in semantic contribution is caught. Pure, no server.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from eval_memory_quality import semantic_hit, GATE_METRICS, compare_reports


def main() -> int:
    assert semantic_hit([{"tier": "semantic"}, {"key": "x"}]) == 1.0
    assert semantic_hit([{"key": "x"}, {"tier": "episode"}]) == 0.0
    assert semantic_hit([]) == 0.0
    print("  ok  semantic_hit detects a tier='semantic' row in results")

    # semantic_hit_rate is intentionally NOT a gate metric: it depends on the
    # opt-in LLM job, so a base-vs-new comparison across differing
    # EVOSQL_SEMANTIC_LLM state would false-regress. It must NOT drop the gate.
    assert "semantic_hit_rate" not in GATE_METRICS
    c = compare_reports({"aggregate": {"semantic_hit_rate": 0.4}},
                        {"aggregate": {"semantic_hit_rate": 0.2}})
    assert c["gate_pass"], "semantic_hit_rate must not gate (opt-in/env-dependent)"
    assert "semantic_hit_rate" not in c["deltas"], c
    print("  ok  semantic_hit_rate is informational, not a false-regression gate")

    print("OK — step 18 semantic-tier eval metric")
    return 0


if __name__ == "__main__":
    sys.exit(main())
