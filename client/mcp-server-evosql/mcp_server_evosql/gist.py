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

import os
import re
from typing import List, Optional, Set

_STOP = set((
    "the a an and or of to in on at for is are was were be been being this that "
    "these those it its as with by from into about my your our their his her "
    "i you he she we they me him them us not no do does did has have had will "
    "would can could should may might must very just so than then there here "
    "ve veya ile bir bu su o da de ki mi mu için gibi çok az").split())


_SUFFIXES = ("ization", "isation", "ingly", "edly", "ing", "ied", "ies",
             "ed", "es", "ly", "s")

# Optional morphological stemmer for the active non-English input locale. The
# dependency-free light stemmer below only knows English suffixes, so other
# languages' inflections never collapse on their own. When the active locale
# declares a snowball stemmer (locale "stemmer" field) and the library is
# installed, it is chained AFTER the English-light pass — each language strips
# its own suffixes, so English keeps working (meeting -> meet) and the other
# language's inflections finally collapse too. Controlled by EVOSQL_GIST_STEMMER:
#   auto (default) — use the locale stemmer if the library is importable
#   en             — force the dependency-free English-light stemmer only
_TR_CACHE: dict = {}


def _locale_stemmer():
    """A stem(word) callable for the active locale's snowball stemmer when
    enabled + available, else None. Lazily resolved once and cached. The
    stemmer language comes from the locale data, not a literal here."""
    mode = os.environ.get("EVOSQL_GIST_STEMMER", "auto").lower()
    if mode in ("en", "english", "off", "0", "none"):
        return None
    if "fn" not in _TR_CACHE:
        fn = None
        from . import locales
        names = locales.heuristics().stemmers
        if names:
            try:
                import snowballstemmer
                fn = snowballstemmer.stemmer(names[0]).stemWord
            except Exception:
                fn = None
        _TR_CACHE["fn"] = fn
    return _TR_CACHE["fn"]


def _light_stem(w: str) -> str:
    """Light recursive ENGLISH suffix stripping so morphological variants
    collapse to the same root (meeting/meetings -> meet, reschedule/rescheduled/
    rescheduling -> reschedul) regardless of how many suffixes are stacked."""
    changed = True
    while changed and len(w) > 4:
        changed = False
        for suf in _SUFFIXES:
            if not w.endswith(suf):
                continue
            if suf == "s" and w.endswith("ss"):
                continue                       # process/address/class, not a plural
            if len(w) - len(suf) < 4:
                continue                       # keep a real stem (caring !-> car)
            w = w[:-len(suf)]
            changed = True
            break
    return w


def _stem(w: str) -> str:
    """Collapse a word to its root. English suffixes are stripped first by the
    dependency-free light stemmer; if the active locale's stemmer is enabled +
    installed it then strips that language's suffixes off the result, so both
    collapse (meeting -> meet). Pure English-light when no locale stemmer is
    available, so the default behavior is unchanged."""
    base = _light_stem(w)
    extra = _locale_stemmer()
    if extra is not None:
        try:
            return extra(base)
        except Exception:
            return base
    return base


def gist_tokens(text: str) -> Set[str]:
    """The set of stemmed content tokens — the meaning trace."""
    out: Set[str] = set()
    for w in re.findall(r"\w+", (text or "").lower()):   # \w is Unicode-aware
        if len(w) <= 2 or w in _STOP:
            continue
        out.add(_stem(w))
    return out


def gist_text(text: str) -> str:
    """A normalized, stemmed content-word gist string (sorted, deduped)."""
    return " ".join(sorted(gist_tokens(text)))


def gist_overlap(query: str, gist: str) -> float:
    """Symmetric overlap of the query's gist tokens against a stored gist — the
    gist channel's match score (paraphrase/morphology robust).

    Length-aware so a single coincidentally-shared common stem can't flood the
    channel: a multi-token query must share at least two content words, and the
    score is min(inter/|q|, inter/|g|) so a long stored gist is not "carried" by
    one query word the way a one-sided inter/|q| ratio would allow."""
    q = gist_tokens(query)
    g = set((gist or "").split())
    if not q or not g:
        return 0.0
    inter = len(q & g)
    if inter == 0:
        return 0.0
    if len(q) >= 2 and inter < 2:
        return 0.0
    return min(inter / len(q), inter / len(g))
