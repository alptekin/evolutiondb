"""
activation — ACT-R base-level activation (roadmap step 9).

A memory's base-level activation reflects how often AND how recently it has been
used:

    B_i = ln( sum_j (t_j)^(-d) )          d = decay (0.5)

where t_j is the time (seconds) since the j-th retrieval. This captures the two
things a single-exponential decay can't: a row retrieved 50 times and one
retrieved once should not decay identically. The access history lives in the
unified access side store (`uses` epoch array, capped) plus a total
`retrieval_count`; when the true count exceeds the kept history we use Petrov's
(2006) hybrid — exact sum over the kept recent accesses plus a closed-form
approximation of the older tail spread over the row's lifetime.

Pure functions, unit-tested without a server. server.py reads the access store +
row creation times and feeds them here to build the +B_i term of the unified
activation A_i (step 10).
"""
from __future__ import annotations

import math
from typing import List, Optional, Sequence

DEFAULT_DECAY = 0.5          # ACT-R d
_AGE_FLOOR = 1.0             # seconds; sub-second ages aren't meaningful here
B_FLOOR = -10.0             # activation of a never-used row (ln of ~0)


def base_level(uses: Sequence[float], total_count: int, now: float, *,
               d: float = DEFAULT_DECAY,
               lifetime_start: Optional[float] = None) -> float:
    """Base-level activation from a row's access history.

    uses           recent retrieval epochs (seconds), newest-last, capped.
    total_count    total retrievals ever (>= len(uses)).
    now            current epoch.
    lifetime_start epoch of the first access/creation; enables Petrov's tail
                   approximation for the (total_count - len(uses)) older
                   accesses not kept in `uses`. Omit to use only the exact sum.
    """
    ages: List[float] = []
    for t in uses or ():
        try:
            age = now - float(t)
        except (TypeError, ValueError):
            continue
        ages.append(age if age > _AGE_FLOOR else _AGE_FLOOR)
    if not ages:
        return B_FLOOR

    exact = sum(age ** (-d) for age in ages)

    k = len(ages)
    n = max(int(total_count or 0), k)
    if n > k and lifetime_start is not None and 0.0 < d < 1.0:
        L = now - float(lifetime_start)
        t_k = max(ages)                       # oldest kept access
        if L > t_k > 0.0:
            # Petrov hybrid: (n-k) older accesses approximated as uniform over
            # [t_k, L]; closed-form mean of age^(-d) over that interval.
            tail = (n - k) * (L ** (1.0 - d) - t_k ** (1.0 - d)) \
                / ((1.0 - d) * (L - t_k))
            if tail > 0:
                exact += tail

    return math.log(exact) if exact > 0 else B_FLOOR


# ---------------------------------------------------------------- #
#  Unified activation A_i (roadmap step 10)                         #
# ---------------------------------------------------------------- #
def logit(p: float, eps: float = 1e-6) -> float:
    """Map a probability/similarity in [0,1] to log-odds, so it can be added to
    the other log-space activation terms."""
    p = min(1.0 - eps, max(eps, float(p)))
    return math.log(p / (1.0 - p))


def activation(*, base: float = B_FLOOR, cos: Optional[float] = None,
               spread: float = 0.0, salience: Optional[float] = None,
               w_cos: float = 1.0, w_spread: float = 1.0, w_sal: float = 1.0,
               noise: float = 0.0) -> float:
    """Unified ACT-R-style activation, combined LOG-ADDITIVELY:

        A_i = base + w_cos*logit(cos) + w_spread*spread + w_sal*ln(salience) + noise

    Every evidence channel enters in log / log-odds space, so summation is
    principled rather than a hand-tuned linear blend of incommensurable scales.
    A missing channel contributes nothing: `cos=None` (no embedding) and
    `salience=None` are skipped; `spread` defaults to 0 (no graph reach).
    """
    a = float(base)
    if cos is not None and cos > 0.0:
        a += w_cos * logit(cos)
    a += w_spread * float(spread)
    if salience is not None and salience > 0.0:
        a += w_sal * math.log(float(salience))
    a += float(noise)
    return a
