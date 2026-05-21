"""Masking. Takes a string + the matches produced by `detect` and
returns the public-safe rendering: each match is replaced according
to its rule's `mask` spec. The mask DSL knows several rendering
kinds, picked by the `kind` field on each rule's mask block:

    positional   keep_first N chars + keep_last M chars + stars in between.
                 With preserve_sep=True, spaces and dashes stay visible
                 so a credit card like '5218 0711 3038 5683' becomes
                 '5218 0711 **** 5683'.

    keep_after   keep everything after `separator`, replace the head
                 with N stars. Email-style.

    keep_before  mirror — keep up to `separator`, star out the tail.

    name_smart   if len >= short_threshold: first 2 + last 2 visible.
                 Else: first + last visible. Middle stars.
                 Length-preserving.

    full_star    replace the entire match with stars of the same length.

    template     write a user-supplied template; placeholders depend
                 on the `extract` strategy (currently `url_userinfo`
                 and `literal`).
"""
from __future__ import annotations

import re
from typing import Dict, List, Optional

from .detect import Match
from .rules import MaskSpec, Rule, load_rules


# ---------------------------------------------------------------- #
def _stars(n: int) -> str:
    return "*" * max(0, n)


def _mask_positional(value: str, m: MaskSpec) -> str:
    """Keep the first / last fixed-length head + tail; replace the
    middle with stars. With preserve_sep, separator characters
    (spaces and dashes) stay visible — useful for cards / IBANs /
    plates where the grouping is part of the readable shape.
    """
    if not value:
        return value

    if m.preserve_sep:
        # Walk the chars once; stars replace only "value" digits/letters,
        # separators pass through.
        chars = list(value)
        is_payload = [c not in " -" for c in chars]
        n_payload = sum(is_payload)
        first = max(0, m.keep_first)
        last  = max(0, m.keep_last)
        # When the payload is too short to honour both limits, fall back
        # to a fully starred middle of length max(1, payload - first - last).
        if first + last > n_payload:
            first = min(first, n_payload // 2)
            last  = max(0, n_payload - first)
        seen_payload = 0
        for i, c in enumerate(chars):
            if not is_payload[i]:
                continue
            if seen_payload < first:
                pass
            elif seen_payload >= n_payload - last:
                pass
            else:
                chars[i] = "*"
            seen_payload += 1
        return "".join(chars)

    n = len(value)
    first = min(max(0, m.keep_first), n)
    last  = min(max(0, m.keep_last),  n - first)
    middle = n - first - last
    return value[:first] + _stars(middle) + (value[-last:] if last else "")


def _mask_keep_after(value: str, m: MaskSpec) -> str:
    sep = m.separator or "@"
    idx = value.rfind(sep)
    if idx < 0:
        return _stars(len(value))
    head = _stars(m.head_stars) if m.head_stars >= 0 else _stars(idx)
    return head + value[idx:]


def _mask_keep_before(value: str, m: MaskSpec) -> str:
    sep = m.separator
    if not sep:
        return _stars(len(value))
    idx = value.find(sep)
    if idx < 0:
        return _stars(len(value))
    tail_len = len(value) - idx - len(sep)
    return value[:idx + len(sep)] + _stars(tail_len)


def _mask_name_smart(value: str, m: MaskSpec) -> str:
    """User's rule, lightly generalised. Works per whitespace-
    separated token so 'Mehmet Ali Yıldız' renders as
    'Me**et Al* Yı***z' instead of one continuous starred blob.
    """
    parts = re.split(r"(\s+)", value)
    out: List[str] = []
    for part in parts:
        if not part.strip():
            out.append(part)
            continue
        n = len(part)
        if n <= 2:
            out.append(part)
            continue
        if n >= max(2, m.short_threshold):
            out.append(part[:2] + _stars(n - 4) + part[-2:])
        else:
            out.append(part[0] + _stars(n - 2) + part[-1])
    return "".join(out)


def _mask_full_star(value: str, _m: MaskSpec) -> str:
    return _stars(len(value))


_URL_USERINFO_RE = re.compile(
    r"^(?P<scheme>[a-zA-Z][a-zA-Z0-9+.\-]*)://"
    r"(?:[^@/:]+):(?:[^@/]+)@"
    r"(?P<host_path>.+)$")


def _mask_template(value: str, m: MaskSpec) -> str:
    """Templates with named placeholders. `extract` picks the
    extractor that supplies the placeholder dict."""
    tpl = m.template or "***"
    extract = m.extract or "literal"
    if extract == "literal":
        # Template stands alone — placeholders ignored.
        return tpl
    if extract == "url_userinfo":
        mm = _URL_USERINFO_RE.match(value)
        if not mm:
            return _stars(len(value))
        return tpl.format(**mm.groupdict())
    return _stars(len(value))


_DISPATCH = {
    "positional":  _mask_positional,
    "keep_after":  _mask_keep_after,
    "keep_before": _mask_keep_before,
    "name_smart":  _mask_name_smart,
    "full_star":   _mask_full_star,
    "template":    _mask_template,
}


def apply_mask(value: str, mask_spec: MaskSpec) -> str:
    fn = _DISPATCH.get(mask_spec.kind)
    if fn is None:
        # Unknown kind: safest is a full-star fallback so we never
        # leak data when a rule typo lands in production config.
        return _stars(len(value))
    return fn(value, mask_spec)


# ---------------------------------------------------------------- #
def mask(text: str,
         matches: Optional[List[Match]] = None,
         rules:   Optional[List[Rule]]  = None) -> str:
    """Render `text` with every detected PII match replaced by its
    rule's masked form. Call without `matches` to run detection
    inline; pass pre-detected matches to share work with callers
    that also need the raw match list (e.g. the encrypt pipeline).
    """
    if not text:
        return text

    rule_list = rules if rules is not None else load_rules()
    by_name: Dict[str, Rule] = {r.name: r for r in rule_list}

    if matches is None:
        # Avoid circular import at module load by importing late.
        from .detect import detect
        matches = detect(text, rule_list)

    if not matches:
        return text

    out_parts: List[str] = []
    cursor = 0
    for m in matches:
        if m.start < cursor:
            # Overlap-resolved already by detect(); guard against
            # bad caller-supplied input by simply skipping.
            continue
        out_parts.append(text[cursor:m.start])
        rule = by_name.get(m.rule)
        if rule is None:
            out_parts.append(_stars(len(m.text)))
        else:
            out_parts.append(apply_mask(m.text, rule.mask))
        cursor = m.end
    out_parts.append(text[cursor:])
    return "".join(out_parts)
