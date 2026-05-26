"""High-level integration helper for sync clients. One call wraps
the full pipeline: resolve the engine (env-controlled + key-file-
gated), run detect → mask → encrypt over the named fields, then
hand back (masked_record, [(companion_key, companion_value), ...])
so the caller can issue one MEMORY PUT per record without knowing
anything about cipher token shapes.

Usage from a sync client:

    from evolutiondb_pii.integration import protect_record

    rec, companions = protect_record(rec, fields=_PII_FIELDS,
                                      key_prefix=f"outlook_pii_{msg_id}")
    store.put_record(main_key, rec)
    for ck, cv in companions:
        store.put_record(ck, cv)

The helper is a no-op when protection is off, returning
`(rec, [])` so callers don't need a feature-flag branch."""
from __future__ import annotations

import json
import os
import sys
from typing import Dict, List, Optional, Tuple


# Single MEMORY PUT carries one SQL statement, which EvolutionDB
# caps at 8 KB on the wire. Each PII token weighs roughly 600 bytes
# (RSA-OAEP-wrapped AES key dominates), so any oversize record
# with more than ~10 detected fragments would blow past the limit
# if we stored the token list inline. Split tokens into companion
# rows of ~5 KB each — primary row stays small (search_memory
# stays fast and never has to page in cipher bytes nobody needs at
# query time).
_PII_CHUNK_BYTES = 5500


# Per-process cache so the same engine init doesn't run on every
# call. The first protect_record call resolves the public key + the
# rule set; subsequent calls reuse them.
_state = {"checked": False, "engine": None}


def _resolve_engine(env_var: str = "EVOSQL_PII_MASK"):
    """Resolve the PII engine on first call and cache it.

    `env_var` controls activation: `on` (default) forces the engine
    and surfaces an error when the keystore is missing — sync
    clients route every record through here, so a silent passthrough
    would leak plaintext PII into the memory store; `auto` enables
    only when a key exists (legacy behavior, kept for callers that
    explicitly opt in); `off` skips the engine entirely.
    """
    if _state["checked"]:
        return _state["engine"]
    _state["checked"] = True

    mode = (os.environ.get(env_var, "on") or "on").lower()
    if mode == "off":
        return None

    try:
        from .crypto    import (DEFAULT_PUBLIC_KEY_PATH, encrypt_record,
                                 load_public_key)
        from .keystore  import read_public_key as _ks_read_public
        from .rules     import load_rules
    except Exception:                                # pragma: no cover
        return None

    # Honour the keystore selector first; only if it's `file` (or
    # absent + no DB row exists) do we fall back to the explicit
    # `EVOSQL_PII_PUBLIC_KEY` path. The keystore module already
    # implements the `auto` → DB-first-then-file walk.
    keystore_mode = os.environ.get("EVOSQL_PII_KEYSTORE")
    try:
        if keystore_mode:
            pubkey = _ks_read_public(mode=keystore_mode)
        else:
            key_path = os.environ.get("EVOSQL_PII_PUBLIC_KEY",
                                       DEFAULT_PUBLIC_KEY_PATH)
            pubkey = load_public_key(key_path)
    except FileNotFoundError as exc:
        if mode == "on":
            print(f"[evolutiondb-pii] {env_var}=on but no public "
                  f"key available: {exc}",
                  file=sys.stderr, flush=True)
        return None

    rules = load_rules()
    _state["engine"] = {
        "encrypt_record": encrypt_record,
        "public_key":     pubkey,
        "rules":          rules,
    }
    return _state["engine"]


def _chunk_tokens(tokens: List[Dict]) -> List[List[Dict]]:
    if not tokens:
        return []
    chunks: List[List[Dict]] = []
    current: List[Dict] = []
    size = 0
    for tok in tokens:
        t_size = len(json.dumps(tok, ensure_ascii=False))
        if current and size + t_size > _PII_CHUNK_BYTES:
            chunks.append(current)
            current, size = [], 0
        current.append(tok)
        size += t_size
    if current:
        chunks.append(current)
    return chunks


def protect_record(rec: Dict,
                   fields: List[str],
                   key_prefix: str,
                   *,
                   source: Optional[str] = None,
                   env_var: str = "EVOSQL_PII_MASK"
                   ) -> Tuple[Dict, List[Tuple[str, Dict]]]:
    """Mask the named fields in `rec` and split sensitive originals
    into companion rows.

    Returns
    -------
    (masked_rec, companions) where each companion is
    `(row_key, row_value)` and the row_key is
    f"{key_prefix}_{chunk_index}".

    `source` defaults to `rec.get("source")` and is stored in each
    companion value so a downstream consumer (e.g. an offline
    `evolutiondb-pii decrypt` tool) can tell at a glance which sync
    produced the token without parsing the key.
    """
    engine = _resolve_engine(env_var=env_var)
    if engine is None:
        return rec, []

    masked, tokens = engine["encrypt_record"](
        rec, fields=fields,
        public_key=engine["public_key"],
        rules=engine["rules"])
    if not tokens:
        return masked, []

    chunks = _chunk_tokens(tokens)
    if source is None:
        source = masked.get("source") or "unknown"

    companions: List[Tuple[str, Dict]] = []
    refs: List[str] = []
    for i, chunk in enumerate(chunks):
        ck = f"{key_prefix}_{i}"
        refs.append(ck)
        companions.append((ck, {
            "version": 1,
            "of":      source,
            "chunk":   i,
            "tokens":  chunk,
        }))
    masked["_pii_refs"] = refs
    return masked, companions


def reset_cache() -> None:
    """Forget the cached engine. Test-only — production code never
    needs this."""
    _state["checked"] = False
    _state["engine"]  = None
