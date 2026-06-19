"""
pii_egress — mask PII on the way OUT to an LLM provider (Phase 0 / Part A).

`pii_gate.py` masks what tool calls RETURN to the client; this is the other
direction — the prompt text we SEND to a model provider. Every server-side
enrichment call goes through `llm.chat()`; the standalone agent loop and
`self_model._llm()` call the SDK directly, so all three route their outbound
text through `scrub()` here.

Mode (EVOSQL_PII_EGRESS):
  off — default; nothing changes (existing deployments byte-for-byte identical).
  on  — mask every outbound prompt before it leaves the host.

FAIL-CLOSED: when on but evolutiondb-pii is not installed, `scrub()` ERRORS
rather than silently sending unmasked PII — a compliance feature that quietly
no-ops is worse than none. Same contract as `pii_gate.py`.
"""
from __future__ import annotations

import os

_MODES = ("off", "on")


def mode() -> str:
    m = (os.environ.get("EVOSQL_PII_EGRESS") or "off").strip().lower()
    return m if m in _MODES else "off"


def _masker():
    try:
        from evolutiondb_pii.mask import mask
    except ImportError as exc:
        raise RuntimeError(
            "EVOSQL_PII_EGRESS is enabled but evolutiondb-pii is not "
            "installed — refusing to send unmasked content to an LLM. "
            "`pip install evolutiondb-pii` or set EVOSQL_PII_EGRESS=off."
        ) from exc
    return mask


def scrub(text):
    """Mask PII in outbound text when egress masking is on; pass through when
    off (or when the input is not a non-empty string). Raises (fail-closed)
    when on but the masker is unavailable."""
    if mode() == "off" or not isinstance(text, str) or not text:
        return text
    return _masker()(text)
