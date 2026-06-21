"""
test_enrichment_routing — the enrichment modules route their LLM call through the
single llm.chat chokepoint (so the residency/PII/spend guards live in ONE place).

The existing per-module suites exercise the LLM-OFF / heuristic path; these tests
cover the LLM-ON path by replacing llm.chat with a spy that records its kwargs and
returns a canned reply, then asserting each module passes the right
(provider, model, max_tokens[, system, temperature]) AND still applies its own
post-processing (json.loads / .upper() keyword / .strip()[:N] / parse_tags).
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

import mcp_server_evosql.llm as llm_mod                                     # noqa: E402
from mcp_server_evosql import reconcile, entities, semanticize, profile     # noqa: E402

passed = failed = 0

# Each test swaps llm.chat for a spy; restore it after every test so the real
# llm.chat doesn't stay replaced for other test files in the same pytest session.
try:
    import pytest

    @pytest.fixture(autouse=True)
    def _restore_llm_chat():
        orig = llm_mod.chat
        try:
            yield
        finally:
            llm_mod.chat = orig
except ImportError:
    pass


def run(name, fn):
    global passed, failed
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1


class _Spy:
    """Replacement for llm.chat: records the last call and returns a fixed reply."""
    def __init__(self, reply):
        self.reply = reply
        self.calls = []

    def __call__(self, prompt, *, provider, model, max_tokens, system=None,
                 temperature=None):
        self.calls.append(dict(prompt=prompt, provider=provider, model=model,
                               max_tokens=max_tokens, system=system,
                               temperature=temperature))
        return self.reply

    @property
    def last(self):
        return self.calls[-1]


def _spy(reply):
    s = _Spy(reply)
    llm_mod.chat = s          # modules do `from . import llm; llm.chat(...)`
    return s


def test_reconcile_anthropic_routing():
    s = _spy("UPDATE")
    out = reconcile.llm_adjudicate("new fact", "old fact", "anthropic")
    assert out == "UPDATE"                                  # .upper() keyword match
    assert s.last["provider"] == "anthropic"
    assert s.last["model"] == "claude-sonnet-4-6"
    assert s.last["max_tokens"] == 8


def test_reconcile_ollama_default_model():
    s = _spy("delete")                                      # lowercase -> .upper()
    out = reconcile.llm_adjudicate("a", "b", "ollama")
    assert out == "DELETE"
    assert s.last["provider"] == "ollama" and s.last["model"] == "llama3.1"


def test_entities_json_postprocessing():
    _spy('[{"surface":"Acme","type":"ORG","start":0,"end":4}]')
    out = entities._llm_extract("Acme ships.", "anthropic")
    assert isinstance(out, list) and out[0]["surface"] == "Acme"


def test_entities_dict_with_entities_key():
    _spy('{"entities":[{"surface":"X","type":"PER","start":0,"end":1}]}')
    out = entities._llm_extract("X", "anthropic")
    assert isinstance(out, list) and out[0]["surface"] == "X"


def test_semanticize_strip():
    s = _spy("  a general fact.  ")
    out = semanticize._llm_generalize(["note a", "note b"], "anthropic")
    assert out == "a general fact." and s.last["max_tokens"] == 120


def test_profile_label_truncated():
    s = _spy("X" * 100)
    out = profile._llm_label([{"text": "some note"}], "ollama")
    assert out == "X" * 60                                  # .strip()[:60]
    assert s.last["provider"] == "ollama" and s.last["model"] == "llama3.1"


def test_tagger_system_and_temperature():
    from mcp_server_evosql.tagger import _OpenAITagger
    s = _spy("alpha, beta, gamma")
    t = _OpenAITagger(api_key="k", model="gpt-4o-mini")
    tags = t.tag("a short note about alpha")
    assert tags == ["alpha", "beta", "gamma"]
    assert s.last["provider"] == "openai" and s.last["model"] == "gpt-4o-mini"
    assert s.last["max_tokens"] == 60
    assert s.last["system"] and s.last["temperature"] == 0.0


def test_unknown_backend_raises():
    _spy("x")
    raised = False
    try:
        reconcile.llm_adjudicate("a", "b", "bogus-provider")
    except RuntimeError:
        raised = True
    assert raised, "an unknown backend should still raise (not silently route)"


if __name__ == "__main__":
    print("=== enrichment modules route through llm.chat ===")
    _orig = llm_mod.chat
    try:
        for fn in (test_reconcile_anthropic_routing, test_reconcile_ollama_default_model,
                   test_entities_json_postprocessing, test_entities_dict_with_entities_key,
                   test_semanticize_strip, test_profile_label_truncated,
                   test_tagger_system_and_temperature, test_unknown_backend_raises):
            run(fn.__name__, fn)
    finally:
        llm_mod.chat = _orig
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
