"""
test_calibration — confidence calibration study + layer (roadmap step 40).

Unit: reliability_bins / ece / mce summarize a (pred, outcome) sample; the PAV
isotonic fit is monotone; apply_calibration interpolates + is identity when
un-fitted. Integration (skipped without a server): a corpus where observed-class
memories are predicted 0.7 but never used yields a high ECE and a calibrator
that remaps 0.7 -> ~0; with EVOSQL_CALIBRATE the abstain gate then abstains where
the raw prior would have answered, and is byte-for-byte unchanged when off.
"""
from __future__ import annotations

import json
import os
import sys
import time

from mcp_server_evosql.calibration import (
    reliability_bins, ece, mce, fit_calibrator, apply_calibration, _pav)

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_unit():
    pairs = [(0.7, 0.0)] * 6 + [(1.0, 1.0)] * 6
    bins = reliability_bins(pairs, n_bins=10)
    b7 = bins[7]
    assert b7["count"] == 6 and abs(b7["mean_pred"] - 0.7) < 1e-9 and b7["mean_obs"] == 0.0
    assert abs(ece(bins) - 0.35) < 1e-9, ece(bins)          # 0.5*0.7
    assert abs(mce(bins) - 0.7) < 1e-9, mce(bins)
    print("  ok  reliability_bins / ece / mce")

    # PAV enforces monotonicity by pooling adjacent violators
    assert _pav([0.0, 1.0], [1, 1]) == [0.0, 1.0]
    pooled = _pav([0.8, 0.2], [1, 1])                       # out of order -> pooled mean
    assert pooled == [0.5, 0.5], pooled
    print("  ok  PAV isotonic pooling")

    cal = fit_calibrator(pairs, n_bins=10)
    assert cal["points"] == [[0.7, 0.0], [1.0, 1.0]], cal["points"]
    assert abs(cal["ece"] - 0.35) < 1e-9
    # remap: 0.7 -> 0.0 (clamped at the low point), 1.0 -> 1.0, midpoint interpolates
    assert apply_calibration(cal, 0.7) == 0.0
    assert apply_calibration(cal, 1.0) == 1.0
    assert abs(apply_calibration(cal, 0.85) - 0.5) < 1e-9
    # below/above the fitted range clamp; an empty calibrator is the identity
    assert apply_calibration(cal, 0.1) == 0.0 and apply_calibration(cal, 2.0) == 1.0
    assert apply_calibration({}, 0.42) == 0.42 and apply_calibration(None, 0.42) == 0.42
    print("  ok  fit_calibrator + apply_calibration (remap, clamp, identity)")


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
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    os.environ.pop("EVOSQL_CALIBRATE", None)
    from mcp_server_evosql.server import _e
    from mcp_server_evosql.calibration import (job_calibration, load_calibrator,
                                               calibration_report)
    ns = f"cal_{int(time.time())}"
    b = _backend(f"mcp_cal{int(time.time())}")

    # observed-class memories (predicted 0.7) about a distinctive topic; asserted
    # memories (predicted 1.0) about an unrelated topic.
    obs = [b.save(ns, f"zylophone tuning note {i}", source_class="observed")
           for i in range(6)]
    ast = [b.save(ns, f"the quarterly budget figure {i}", source_class="asserted")
           for i in range(6)]

    # feedback corpus: observed rows returned but never used (outcome 0),
    # asserted rows returned AND used (outcome 1)
    now = time.time()
    for i, k in enumerate(obs):
        rec = {"returned_keys": [k], "used_keys": [], "feedback_ts": now}
        b._exec(f"MEMORY PUT INTO {b.feedback_store} VALUES "
                f"('{_e(ns)}','q_obs_{i}','{_e(json.dumps(rec))}')")
    for i, k in enumerate(ast):
        rec = {"returned_keys": [k], "used_keys": [k], "feedback_ts": now}
        b._exec(f"MEMORY PUT INTO {b.feedback_store} VALUES "
                f"('{_e(ns)}','q_ast_{i}','{_e(json.dumps(rec))}')")

    n = job_calibration(b, ns)
    assert n == 12, n
    rep = calibration_report(b, ns)
    assert abs(rep["ece"] - 0.35) < 0.05, rep["ece"]        # observed is way over-confident
    cal = load_calibrator(b, ns)
    assert cal and cal["points"][0] == [0.7, 0.0], cal
    print(f"  ok  study: {n} labelled pairs, ECE={rep['ece']}, 0.7 -> 0.0 calibrated")

    # the calibrator remaps source confidence
    assert b._calibrate_conf(ns, 0.7) == 0.0
    assert b._calibrate_conf(ns, 1.0) == 1.0
    print("  ok  _calibrate_conf remaps the over-confident prior")

    # abstain gate: raw prior (0.7) clears a 0.5 threshold -> answers;
    # calibrated (0.0) does not -> abstains. Default off = unchanged.
    b.abstain_conf = 0.5
    b.calibrate = False
    raw = b.search(ns, "zylophone", limit=5)
    assert any(r["key"] in obs for r in raw), raw
    b.calibrate = True
    b._calibrator_cache.clear()
    cald = b.search(ns, "zylophone", limit=5)
    assert cald == [], cald
    print("  ok  EVOSQL_CALIBRATE: gate abstains on the empirically-unreliable prior")
    return True


def main() -> int:
    test_unit()
    test_integration()
    print("OK — step 40 confidence calibration study")
    return 0


if __name__ == "__main__":
    sys.exit(main())
