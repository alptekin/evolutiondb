"""
spend — a tiny daily token-spend ledger shared by the LLM call paths.

A hard daily cap is the cheapest guard against a runaway loop turning into a
runaway bill. It is opt-in: set ``EVOSQL_LLM_DAILY_TOKENS`` to a positive
integer to cap the *estimated* tokens spent per calendar day (UTC). Unset or
``<= 0`` means unlimited (the default, so existing deployments are unchanged).

The ledger is a small JSON file (default ``~/.evosql/llm_spend.json``, override
with ``EVOSQL_LLM_SPEND_FILE``) keyed by ISO date. Estimation is deliberately
rough (~4 chars/token) — this is a budget fuse, not a billing meter. Ledger I/O
errors never block a call; only an over-cap ``check()`` raises.
"""
from __future__ import annotations

import datetime
import json
import os

_KEEP_DAYS = 14   # bound the ledger file size


def cap() -> int:
    """Daily token cap, or 0 (unlimited) when unset/invalid/non-positive."""
    try:
        return max(0, int(os.environ.get("EVOSQL_LLM_DAILY_TOKENS", "0") or "0"))
    except ValueError:
        return 0


def _ledger_path() -> str:
    p = os.environ.get("EVOSQL_LLM_SPEND_FILE")
    return os.path.expanduser(p) if p else os.path.expanduser("~/.evosql/llm_spend.json")


def estimate_tokens(*texts: str) -> int:
    """Rough token estimate (~4 chars/token) across the given strings.
    Empty strings and non-strings contribute nothing."""
    return sum(max(1, len(t) // 4) for t in texts if isinstance(t, str) and t)


def _today() -> str:
    return datetime.datetime.now(datetime.timezone.utc).strftime("%Y-%m-%d")


def _load(path: str) -> dict:
    try:
        with open(path, encoding="utf-8") as f:
            d = json.load(f)
        return d if isinstance(d, dict) else {}
    except (OSError, ValueError):
        return {}


def spent_today() -> int:
    try:
        return int(_load(_ledger_path()).get(_today(), 0))
    except (TypeError, ValueError):
        return 0


def check(estimated: int = 0) -> None:
    """Raise RuntimeError if today's spend plus ``estimated`` exceeds the cap.

    A no-op when no cap is set (the default)."""
    c = cap()
    if c <= 0:
        return
    used = spent_today()
    if used + max(0, estimated) > c:
        raise RuntimeError(
            f"LLM daily token cap reached ({used}/{c} for {_today()} UTC). "
            "Raise EVOSQL_LLM_DAILY_TOKENS or wait until tomorrow."
        )


def record(tokens: int) -> None:
    """Add ``tokens`` to today's tally (best-effort; ledger errors never block).

    A no-op when no cap is set, so unlimited deployments touch no files."""
    if cap() <= 0 or tokens <= 0:
        return
    path = _ledger_path()
    try:
        d = _load(path)
        today = _today()
        d[today] = int(d.get(today, 0)) + int(tokens)
        if len(d) > _KEEP_DAYS:                       # prune oldest days
            for k in sorted(d)[:-_KEEP_DAYS]:
                d.pop(k, None)
        parent = os.path.dirname(path)
        if parent:
            os.makedirs(parent, exist_ok=True)
        tmp = path + ".tmp"
        with open(tmp, "w", encoding="utf-8") as f:
            json.dump(d, f)
        os.replace(tmp, path)
    except OSError:
        pass
