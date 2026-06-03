"""
gist — gist vs verbatim dual encoding (roadmap step 37; fuzzy-trace theory).

Besides the surface (verbatim) trace, each memory keeps a GIST trace: a
normalized meaning representation (content words, light-stemmed) so a
paraphrased / morphologically-varied query matches even when the exact surface
words differ. The gist is a 4th retrieval channel; it also decays slower than
verbatim, so an old row keeps its meaning long after the wording fades.

Dependency-free (a cheap extractive gist); an embedded gist is a future upgrade.
"""
from __future__ import annotations

import re
from typing import List, Set

_STOP = set((
    "the a an and or of to in on at for is are was were be been being this that "
    "these those it its as with by from into about my your our their his her "
    "i you he she we they me him them us not no do does did has have had will "
    "would can could should may might must very just so than then there here "
    "ve veya ile bir bu su o da de ki mi mu için gibi çok az").split())


_SUFFIXES = ("ization", "isation", "ingly", "edly", "ing", "ied", "ies",
             "ed", "es", "ly", "s")


def _stem(w: str) -> str:
    """Light recursive suffix stripping so morphological variants collapse to
    the same root (meeting/meetings -> meet, reschedule/rescheduled/
    rescheduling -> reschedul) regardless of how many suffixes are stacked."""
    changed = True
    while changed and len(w) > 4:
        changed = False
        for suf in _SUFFIXES:
            if len(w) > len(suf) + 2 and w.endswith(suf):
                w = w[:-len(suf)]
                changed = True
                break
    return w


def gist_tokens(text: str) -> Set[str]:
    """The set of stemmed content tokens — the meaning trace."""
    out: Set[str] = set()
    for w in re.findall(r"[a-zA-ZçğıöşüÇĞİÖŞÜ0-9]+", (text or "").lower()):
        if len(w) <= 2 or w in _STOP:
            continue
        out.add(_stem(w))
    return out


def gist_text(text: str) -> str:
    """A normalized, stemmed content-word gist string (sorted, deduped)."""
    return " ".join(sorted(gist_tokens(text)))


def gist_overlap(query: str, gist: str) -> float:
    """Jaccard-style overlap of the query's gist tokens against a stored gist —
    the gist channel's match score (paraphrase/morphology robust)."""
    q = gist_tokens(query)
    g = set((gist or "").split())
    if not q or not g:
        return 0.0
    return len(q & g) / len(q)
