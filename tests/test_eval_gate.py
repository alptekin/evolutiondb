"""
test_eval_gate — regression gate over eval reports (roadmap step 8).

Unit-tests compare_reports (delta + pass/fail) and the --compare CLI exit code.
"No improvement claim ships without a delta from here."
"""
from __future__ import annotations

import json
import os
import subprocess
import sys
import tempfile

_HERE = os.path.dirname(os.path.abspath(__file__))
sys.path.insert(0, _HERE)

from eval_memory_quality import compare_reports


def test_compare():
    base = {"aggregate": {"recall_at_5": 0.5, "mrr": 0.40, "ndcg_at_10": 0.6}}
    better = {"aggregate": {"recall_at_5": 0.6, "mrr": 0.45, "ndcg_at_10": 0.6}}
    worse = {"aggregate": {"recall_at_5": 0.4, "mrr": 0.40, "ndcg_at_10": 0.6}}

    c1 = compare_reports(base, better)
    assert c1["gate_pass"] and "recall_at_5" in c1["improved"], c1
    assert c1["deltas"]["recall_at_5"] == 0.1

    c2 = compare_reports(base, worse)
    assert not c2["gate_pass"] and "recall_at_5" in c2["regressed"], c2

    c3 = compare_reports(base, worse, tol=0.2)        # within tolerance
    assert c3["gate_pass"], c3

    c4 = compare_reports(base, {"aggregate": {"recall_at_5": 0.5}})
    assert c4["deltas"]["mrr"] is None and c4["gate_pass"], c4
    print("  ok  compare_reports: improve / regress / tolerance / missing-metric")


def test_cli_exit_code():
    base = {"aggregate": {"recall_at_5": 0.5, "mrr": 0.4, "ndcg_at_10": 0.6}}
    worse = {"aggregate": {"recall_at_5": 0.3, "mrr": 0.4, "ndcg_at_10": 0.6}}
    with tempfile.TemporaryDirectory() as d:
        bp = os.path.join(d, "base.json")
        np_ = os.path.join(d, "new.json")
        open(bp, "w").write(json.dumps(base))
        open(np_, "w").write(json.dumps(worse))
        harness = os.path.join(_HERE, "eval_memory_quality.py")
        r = subprocess.run([sys.executable, harness, "--compare", bp, np_],
                           capture_output=True, text=True)
        assert r.returncode == 4, f"regression must exit 4, got {r.returncode}\n{r.stdout}{r.stderr}"
        assert "regression gate FAIL" in r.stdout, r.stdout
        # a non-regressing comparison exits 0
        r2 = subprocess.run([sys.executable, harness, "--compare", bp, bp],
                            capture_output=True, text=True)
        assert r2.returncode == 0, f"no-change must exit 0, got {r2.returncode}"
    print("  ok  --compare CLI: exit 4 on regression, 0 on no-change")


def main() -> int:
    test_compare()
    test_cli_exit_code()
    print("OK — step 8 regression gate")
    return 0


if __name__ == "__main__":
    sys.exit(main())
