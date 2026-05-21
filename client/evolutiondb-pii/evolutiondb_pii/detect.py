"""PII detection. Walks each loaded rule against the input text,
keeps the validator-approved matches, and resolves overlaps by
priority (higher wins, ties broken by earliest start). The result
is a list of `Match` records describing exactly which spans the
masker should rewrite."""
from __future__ import annotations

from dataclasses import dataclass
from typing import List, Optional

from . import validators as _val
from .rules import Rule, load_limits, load_rules


@dataclass
class Match:
    """One detected PII fragment.

    Attributes
    ----------
    start, end : the span inside the original string (half-open)
    text       : the substring covered
    rule       : name of the rule that matched
    tag        : semantic category (`email`, `credit_card`, …)
    """
    start: int
    end:   int
    text:  str
    rule:  str
    tag:   str


# ---------------------------------------------------------------- #
def detect(text: str,
           rules: Optional[List[Rule]] = None) -> List[Match]:
    """Scan `text` and return non-overlapping matches in start
    order. `rules` defaults to the merged default + user rule set."""
    if not text:
        return []
    rules = rules if rules is not None else load_rules()
    if not rules:
        return []

    limits = load_limits()
    chunk = text[: limits["max_field_chars_scanned"]]

    # Each rule's findall pass is cheap; overlap resolution comes
    # after we've collected every candidate.
    candidates: List[tuple[int, int, str, Match]] = []   # (-priority, start, ruleid, Match)
    for rule in rules:
        for m in rule.compiled.finditer(chunk):
            span = m.group(0)
            if rule.validate and not _val.run(rule.validate, span):
                continue
            cm = Match(start=m.start(), end=m.end(),
                        text=span, rule=rule.name, tag=rule.tag)
            # Sort key:
            #   1) descending priority   (-rule.priority)
            #   2) ascending start
            #   3) descending length     (longest match wins on tie)
            candidates.append(
                (-rule.priority, m.start(), -(m.end() - m.start()), cm))

    candidates.sort(key=lambda x: (x[0], x[1], x[2]))

    accepted: List[Match] = []
    cap = limits["max_matches_per_field"]
    for _, _, _, m in candidates:
        if len(accepted) >= cap:
            break
        # Reject if it overlaps any already-accepted match.
        if any(not (m.end <= a.start or m.start >= a.end) for a in accepted):
            continue
        accepted.append(m)

    accepted.sort(key=lambda m: m.start)
    return accepted
