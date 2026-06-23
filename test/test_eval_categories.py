"""
test_eval_categories — memory-competence eval metrics (roadmap step 5).

Unit-tests the knowledge_update / abstention scoring added to
eval_memory_quality.py. Pure functions, no server needed.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from eval_memory_quality import forbidden_hit, update_correct, abstain_correct


def main() -> int:
    # forbidden_hit: a stale key in the top-k is a hit
    assert forbidden_hit(["a", "b", "old"], ["old"], 5) is True
    assert forbidden_hit(["a", "b"], ["old"], 5) is False
    assert forbidden_hit(["old", "a"], ["old"], 1) is True
    assert forbidden_hit(["a", "old"], ["old"], 1) is False        # outside top-1
    print("  ok  forbidden_hit: stale key in/out of top-k")

    # knowledge_update: new recalled AND old absent
    assert update_correct(["new", "x"], ["new"], ["old"], 5) == 1.0
    assert update_correct(["old", "new"], ["new"], ["old"], 5) == 0.0   # old resurfaced
    assert update_correct(["x", "y"], ["new"], ["old"], 5) == 0.0       # new missed
    assert update_correct(["x"], [], ["old"], 5) == 1.0                 # no ideal, old absent
    print("  ok  update_correct: new-in + old-out")

    # abstention: correct when nothing (or nothing above threshold) returns
    assert abstain_correct([]) == 1.0
    assert abstain_correct([{"score": 0.9}]) == 0.0
    assert abstain_correct([{"score": 0.0}]) == 1.0                    # at threshold 0
    assert abstain_correct([{"score": 0.5}], threshold=0.6) == 1.0     # below threshold
    print("  ok  abstain_correct: empty / above / below threshold")

    print("OK — step 5 memory-competence eval metrics")
    return 0


if __name__ == "__main__":
    sys.exit(main())
