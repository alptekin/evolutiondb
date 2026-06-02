"""
test_unified_activation — log-additive A_i (roadmap step 10).

The unified activation is monotonic in every channel (base, cos, spread,
salience), each entering in log/log-odds space; missing channels are skipped.
Pure functions, no server.
"""
from __future__ import annotations

import math
import sys

from mcp_server_evosql.activation import activation, logit, B_FLOOR


def main() -> int:
    # logit is monotonic and centred at 0.5
    assert logit(0.5) == 0.0
    assert logit(0.9) > logit(0.5) > logit(0.1)
    print("  ok  logit: monotonic, logit(0.5)=0")

    base = activation(base=0.0)
    # each channel raises A_i monotonically
    assert activation(base=1.0) > activation(base=0.0)
    assert activation(base=0.0, cos=0.9) > activation(base=0.0, cos=0.6)
    assert activation(base=0.0, spread=2.0) > activation(base=0.0, spread=0.0)
    assert activation(base=0.0, salience=0.9) > activation(base=0.0, salience=0.2)
    print("  ok  A_i monotonic in base / cos / spread / salience")

    # missing channels are skipped (no crash, contribute 0)
    assert activation(base=0.0, cos=None, salience=None) == 0.0
    assert activation(base=0.0, cos=0.0) == 0.0          # cos<=0 skipped
    print("  ok  missing/zero channels skipped")

    # weights scale a channel's contribution
    a1 = activation(base=0.0, cos=0.8, w_cos=1.0)
    a2 = activation(base=0.0, cos=0.8, w_cos=2.0)
    assert math.isclose(a2 - a1, logit(0.8), rel_tol=1e-9), (a1, a2)
    # log-additivity: salience enters as ln(salience)
    a3 = activation(base=0.0, salience=0.5)
    assert math.isclose(a3, math.log(0.5), rel_tol=1e-9)
    print("  ok  weights scale channels; salience enters as ln(salience)")

    print("OK — step 10 unified log-additive activation A_i")
    return 0


if __name__ == "__main__":
    sys.exit(main())
