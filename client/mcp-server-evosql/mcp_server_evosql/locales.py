"""
locales — runtime i18n layer so the algorithm code stays language-neutral.

All natural-language data lives in the JSON resources under `locales/` (one per
language), NOT in the Python source. Two axes are kept separate:

  * OUTPUT language — what the brief / CLI is rendered in. Selected per user from
    their language preference (prefs), defaulting to English. `ui(lang)`.
  * INPUT languages — what languages the connector messages might be in. The
    heuristics (question / promise / closure detection, automated-sender
    markers, person/org extraction) must understand the UNION of the enabled
    input locales, independent of the output language. Defaults to "en,tr",
    overridable with EVOSQL_LOCALES. `heuristics()`.

This keeps the .py code free of any hardcoded human-language literals while the
detected-language behavior comes entirely from this runtime data.
"""
from __future__ import annotations

import json
import os
import re
from functools import lru_cache
from typing import Any, Dict, List

DEFAULT_OUTPUT = "en"
_ALIASES = {
    "en": "en", "english": "en", "ingilizce": "en", "ing": "en",
    "tr": "tr", "turkish": "tr", "türkçe": "tr", "turkce": "tr", "tur": "tr",
}


def normalize_lang(name: str | None) -> str:
    """Map a user-facing language name to a locale code (default English)."""
    return _ALIASES.get((name or "").strip().lower(), DEFAULT_OUTPUT)


@lru_cache(maxsize=None)
def _raw(code: str) -> Dict[str, Any]:
    """Load and cache one locale's JSON resource ({} if it doesn't exist)."""
    try:
        from importlib.resources import files
        data = (files(__package__) / "locales" / f"{code}.json").read_text("utf-8")
    except Exception:
        # editable / dev fallback: read from the source tree next to this file
        path = os.path.join(os.path.dirname(__file__), "locales", f"{code}.json")
        try:
            with open(path, encoding="utf-8") as fh:
                data = fh.read()
        except OSError:
            return {}
    try:
        return json.loads(data)
    except ValueError:
        return {}


def available() -> List[str]:
    """Locale codes that have a JSON resource (always includes the default)."""
    out = []
    try:
        from importlib.resources import files
        for p in (files(__package__) / "locales").iterdir():
            if p.name.endswith(".json"):
                out.append(p.name[:-5])
    except Exception:
        d = os.path.join(os.path.dirname(__file__), "locales")
        if os.path.isdir(d):
            out = [f[:-5] for f in os.listdir(d) if f.endswith(".json")]
    return sorted(set(out) | {DEFAULT_OUTPUT})


def ui(lang: str | None = None) -> Dict[str, str]:
    """UI strings for `lang`, with English as the fallback for missing keys."""
    code = normalize_lang(lang)
    base = dict((_raw(DEFAULT_OUTPUT).get("ui") or {}))
    if code != DEFAULT_OUTPUT:
        base.update(_raw(code).get("ui") or {})
    return base


def t(key: str, loc: str | None = None, **kw) -> str:
    """One UI string by key, .format(**kw) applied. Falls back to the key.
    `loc` is the locale code/name; kw are the string's own {placeholders}
    (e.g. t('lang_set', loc, lang='Turkish'))."""
    s = ui(loc).get(key, key)
    return s.format(**kw) if kw else s


def input_locales() -> List[str]:
    """Locale codes whose heuristics are active for parsing INPUT messages.
    Default 'en,tr'; override with EVOSQL_LOCALES. Unknown codes are dropped."""
    raw = os.environ.get("EVOSQL_LOCALES", "en,tr")
    avail = set(available())
    codes = [c.strip() for c in raw.split(",") if c.strip() in avail]
    return codes or [DEFAULT_OUTPUT]


def _merge_lists(key: str, codes: List[str]) -> List[str]:
    out: List[str] = []
    for c in codes:
        for item in (_raw(c).get("heuristics") or {}).get(key, []) or []:
            if item not in out:
                out.append(item)
    return out


class Heuristics:
    """Compiled, language-neutral heuristics built from the union of the active
    input locales. Holds exactly what open_loops.py and entities.py need."""

    def __init__(self, codes: List[str]):
        self.codes = codes
        h = lambda k: _merge_lists(k, codes)            # noqa: E731

        def _alt(items, flags=re.I):
            return re.compile("|".join(items), flags) if items else _NEVER

        self.question = _alt(h("question"))
        self.promise = _alt(h("promise"))
        self.close = _alt(h("close"))
        self.auto_from = _alt(h("auto_from"))

        # content-word tokenization + filtering (profile / gist). \w is already
        # Unicode-aware, so no per-language letter class is needed; only the
        # stopword vocabulary varies by language.
        self.word_re = re.compile(r"\w+", re.UNICODE)
        self.stopwords = frozenset(w.lower() for w in h("stopwords"))
        # arousal/urgency vocabulary (salience), whole-word match
        arousal = h("arousal")
        self.arousal_re = (re.compile(
            r"\b(?:" + "|".join(re.escape(a) for a in arousal) + r")\b", re.I)
            if arousal else _NEVER)
        # predicate keyword lexicon (graph): {predicate: [surface stems...]},
        # merged across locales (predicate ORDER is owned by the caller)
        self.predicate_keywords: Dict[str, List[str]] = {}
        for c in codes:
            for pred, kws in ((_raw(c).get("heuristics") or {})
                              .get("predicate_keywords", {}) or {}).items():
                cur = self.predicate_keywords.setdefault(pred, [])
                for kw in kws:
                    if kw not in cur:
                        cur.append(kw)
        # snowball stemmer language names for the active locales (gist), if any
        self.stemmers = [name for name in
                         ((_raw(c).get("heuristics") or {}).get("stemmer")
                          for c in codes) if name]

        # entity extraction building blocks
        up = "A-Z" + "".join(
            (_raw(c).get("heuristics") or {}).get("title_upper_extra", "")
            for c in codes)
        lo = "a-z" + "".join(
            (_raw(c).get("heuristics") or {}).get("title_lower_extra", "")
            for c in codes)
        title = f"[{up}][{lo}]+"
        self.title_upper, self.title_lower, self.title = up, lo, title
        pre = h("honorific_pre")
        post = h("honorific_post")
        org = h("org_suffix")
        self.honorific_tokens = frozenset(t.lower() for t in h("honorific_tokens"))
        self.stop_title = set(h("stop_title"))

        hon_pre = "(?:" + "|".join(pre) + r")\.?" if pre else None
        self.re_person_pre = (re.compile(hon_pre + r"\s+(" + title +
                              r"(?:\s+" + title + r"){0,2})") if pre else _NEVER)
        self.re_person_post = (re.compile(r"\b(" + title + r"(?:\s+" + title +
                               r"){0,1})\s+(?:" + "|".join(post) + r")\b")
                               if post else _NEVER)
        self.re_person_full = re.compile(r"\b(" + title + r"(?:\s+" + title +
                                         r"){1,2})\b")
        self.re_person_initial = re.compile(r"\b(" + title + r"\s+[" + up +
                                            r"])\.(?!\w)")
        self.re_org = (re.compile(r"\b([" + up + r"][\w" + up + lo +
                       r"&]*(?:[ ][" + up + r"][\w" + up + lo + r"&]*){0,4}[ ]"
                       r"(?:" + "|".join(org) + r"))") if org else _NEVER)
        # structured-id detectors (IBAN / phone / national id …): each
        # (type, compiled, confidence), tried in declared order
        self.id_patterns = []
        for c in codes:
            for spec in (_raw(c).get("heuristics") or {}).get("id_patterns", []):
                flags = re.I if "i" in (spec.get("flags") or "") else 0
                try:
                    self.id_patterns.append((spec["type"],
                                             re.compile(spec["re"], flags),
                                             float(spec.get("conf", 0.9))))
                except (re.error, KeyError):
                    continue


# a regex that never matches, for empty locale categories
_NEVER = re.compile(r"(?!x)x")


@lru_cache(maxsize=None)
def heuristics() -> "Heuristics":
    return Heuristics(tuple(input_locales()))
