"""
test_prefs — per-namespace language preference (prefs.py).

The brief leans on the (language, was_set) pair to nag a first-time user exactly
once: until set_language runs, get_language returns the english default with
was_set=False; after, the chosen language with was_set=True. All in-memory
(FakeBackend), no server needed.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import prefs


def test_default_unset():
    b = FakeBackend()
    lang, was_set = prefs.get_language(b, "alp_x")
    assert lang == "english", lang
    assert was_set is False


def test_set_then_get():
    b = FakeBackend()
    assert prefs.set_language(b, "alp_x", "Türkçe") == "türkçe"   # normalised
    lang, was_set = prefs.get_language(b, "alp_x")
    assert lang == "türkçe", lang
    assert was_set is True


def test_set_is_per_namespace():
    b = FakeBackend()
    prefs.set_language(b, "alp_x", "türkçe")
    assert prefs.get_language(b, "someone_else") == ("english", False)


def test_set_overwrites():
    b = FakeBackend()
    prefs.set_language(b, "alp_x", "türkçe")
    prefs.set_language(b, "alp_x", "english")
    assert prefs.get_language(b, "alp_x") == ("english", True)
    # one row, not two — set is an upsert on the fixed pref_language key
    assert len(b.rows(b.selfmodel_store, "alp_x")) == 1


def test_none_and_blank_default():
    b = FakeBackend()
    assert prefs.set_language(b, "alp_x", None) == "english"
    assert prefs.set_language(b, "alp_x", "   ") == ""   # blank stays blank


def main():
    for fn in (test_default_unset, test_set_then_get, test_set_is_per_namespace,
               test_set_overwrites, test_none_and_blank_default):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — prefs language preference")
    return 0


if __name__ == "__main__":
    sys.exit(main())
