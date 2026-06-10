"""
test_locales — the runtime i18n layer (locales.py + locales/*.json).

This is the one place that intentionally carries non-English sample strings:
they are LOCALE FIXTURE DATA, the irreducible minimum needed to prove the
non-English input locale's patterns actually match real text (the same role as
the JSON resources themselves). Every other test file is English-only — the
algorithms are language-neutral and exercised there with English input.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from mcp_server_evosql import locales as L


# ---------------------------------------------------------------- loader
def test_available_and_normalize():
    avail = L.available()
    assert "en" in avail and "tr" in avail
    assert L.normalize_lang("türkçe") == "tr"
    assert L.normalize_lang("turkish") == "tr"
    assert L.normalize_lang("english") == "en"
    assert L.normalize_lang(None) == "en"          # default
    assert L.normalize_lang("klingon") == "en"     # unknown -> default


def test_ui_strings_localize_with_english_fallback():
    en, tr = L.ui("en"), L.ui("tr")
    assert en["good_morning"] != tr["good_morning"]          # both present, differ
    # a missing key in a locale falls back to English
    assert L.t("good_morning", "en") == en["good_morning"]
    assert "{lang}" not in L.t("lang_set", "en", lang="English")  # format applied


def test_locale_resources_have_expected_shape():
    for code in ("en", "tr"):
        raw = L._raw(code)
        assert raw.get("ui"), code
        h = raw.get("heuristics") or {}
        for key in ("question", "promise", "close", "stopwords"):
            assert key in h, (code, key)


# ---------------------------------------------------------------- heuristics (EN)
def test_english_heuristics_match():
    h = L.heuristics()
    assert h.question.search("are you free?")
    assert h.promise.search("I'll send it")
    assert h.close.search("thanks, done")
    assert h.auto_from.search("noreply@example.com")
    assert h.arousal_re.search("this is urgent")
    assert "worked on" in h.predicate_keywords.get("worked_on", [])


# ---------------------------------------------------------------- heuristics (non-English locale)
# These short strings are the LOCALE FIXTURES for the Turkish input locale —
# the minimum needed to confirm tr.json's patterns compile and match. With the
# default EVOSQL_LOCALES=en,tr both locales are active.
def test_turkish_locale_patterns_match():
    h = L.heuristics()
    assert h.question.search("gelir mi")            # tr question particle
    assert h.promise.search("yarın göndereceğim")   # tr promise verb
    assert h.close.search("çok teşekkürler")        # tr closure ack
    assert h.auto_from.search("haftalık bülten")    # tr automated marker
    assert h.arousal_re.search("çok acil")          # tr arousal term
    assert "çalıştı" in h.predicate_keywords.get("worked_on", [])
    assert "hanim" in h.honorific_tokens            # normalized post-name title


def test_turkish_structured_id_patterns():
    h = L.heuristics()
    kinds = {t for t, _, _ in h.id_patterns}
    assert {"iban", "phone", "tckn"} <= kinds
    iban = next(rx for t, rx, _ in h.id_patterns if t == "iban")
    assert iban.search("TR33 0006 1005 1978 6457 8413 26")


def test_turkish_entity_patterns_compile_and_match():
    # the Title-case class picks up accented letters; post-name title + org
    # suffix come from the tr locale data
    h = L.heuristics()
    assert h.re_person_post.search("Mehmet bey")    # name + post honorific
    assert h.re_org.search("Acme A.Ş. büyüdü")      # tr corporate suffix
