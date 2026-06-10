"""
pii_gate — role-based PII masking at RETRIEVAL time (Phase 3 extra).

The connectors can already mask PII at REST (evolutiondb-pii companion rows);
this gate covers the other half: what a tool call RETURNS. When enabled, the
text fields of memory records flowing out of the read tools are run through
evolutiondb-pii's detector/masker before they reach the client.

Modes (EVOSQL_PII_RETRIEVAL):
  off     — default; nothing changes.
  viewer  — mask for read-only identities (no admin/member role): a viewer
            can search the tenant's memory but sees ****-masked identifiers.
  all     — mask for every identity.

FAIL-CLOSED by design: if the operator enabled the gate but evolutiondb-pii is
not installed, the gated read ERRORS instead of silently serving unmasked
PII — a compliance feature that quietly no-ops is worse than none.
"""
from __future__ import annotations

import os
from typing import Any, Dict, List

# Top-level record fields that carry free text worth masking. Keys, scores,
# tags, and timestamps pass through untouched.
TEXT_FIELDS = ("fact", "text", "body", "title", "summary", "snippet",
               "subject", "what", "description")

_MODES = ("off", "viewer", "all")


def mode() -> str:
    m = (os.environ.get("EVOSQL_PII_RETRIEVAL") or "off").strip().lower()
    return m if m in _MODES else "off"


def applies(ident) -> bool:
    """Should this identity's reads be masked under the current mode?"""
    m = mode()
    if m == "off":
        return False
    if m == "all":
        return True
    # viewer mode: anyone without a write role is read-only -> masked
    return not ident.has_role("admin", "member")


def _masker():
    try:
        from evolutiondb_pii.mask import mask
    except ImportError as exc:
        raise RuntimeError(
            "EVOSQL_PII_RETRIEVAL is enabled but evolutiondb-pii is not "
            "installed — refusing to serve unmasked content. "
            "`pip install evolutiondb-pii` or set EVOSQL_PII_RETRIEVAL=off."
        ) from exc
    return mask


def mask_records(records: List[Dict[str, Any]]) -> List[Dict[str, Any]]:
    """Masked copies of memory records (originals untouched). Raises
    RuntimeError when the gate is on but the masker is unavailable."""
    mask = _masker()
    out = []
    for rec in records or []:
        if not isinstance(rec, dict):
            out.append(rec)
            continue
        masked = dict(rec)
        for f in TEXT_FIELDS:
            v = masked.get(f)
            if isinstance(v, str) and v:
                masked[f] = mask(v)
        out.append(masked)
    return out


def gate(ident, records: List[Dict[str, Any]]) -> List[Dict[str, Any]]:
    """The one-call form the dispatch uses: mask when the mode + identity say
    so, pass through otherwise."""
    if not applies(ident):
        return records
    return mask_records(records)
