"""Unit tests for mcp_server_evosql.tagger.

The OpenAI provider needs a live API key so it is exercised manually.
What this module locks down is the prompt-response parser and the
env-variable wiring — the parts the rest of the server depends on.
"""
from __future__ import annotations

import os
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from mcp_server_evosql import tagger as tag_mod


class ParseTagsTests(unittest.TestCase):
    def test_comma_separated_clean(self):
        out = tag_mod.parse_tags("release-management, billing, infrastructure")
        self.assertEqual(out,
            ["release-management", "billing", "infrastructure"])

    def test_strips_tags_prefix(self):
        out = tag_mod.parse_tags("Tags: deploy, ci-cd, release")
        self.assertEqual(out, ["deploy", "ci-cd", "release"])

    def test_strips_quotes_and_bullets(self):
        out = tag_mod.parse_tags('* "deploy" - * "release" - "ci-cd"')
        self.assertIn("deploy",  out)
        self.assertIn("release", out)
        self.assertIn("ci-cd",   out)

    def test_handles_newlines(self):
        out = tag_mod.parse_tags("deploy\nrelease\nci-cd")
        self.assertEqual(out, ["deploy", "release", "ci-cd"])

    def test_lowercases_and_kebabs_spaces(self):
        out = tag_mod.parse_tags("Release Management, Billing Issues")
        self.assertIn("release-management", out)
        self.assertIn("billing-issues",     out)

    def test_strips_special_characters(self):
        out = tag_mod.parse_tags("[deploy], (release/!), <ci-cd>")
        self.assertIn("deploy",  out)
        self.assertIn("release", out)
        self.assertIn("ci-cd",   out)

    def test_dedupes(self):
        out = tag_mod.parse_tags("deploy, Deploy, deploy")
        self.assertEqual(out, ["deploy"])

    def test_caps_at_five(self):
        out = tag_mod.parse_tags("a, b, c, d, e, f, g, h")
        self.assertEqual(len(out), 5)

    def test_drops_overly_long(self):
        long_tag = "x" * 60
        out = tag_mod.parse_tags(f"deploy, {long_tag}")
        self.assertEqual(out, ["deploy"])

    def test_empty_returns_empty(self):
        self.assertEqual(tag_mod.parse_tags(""), [])
        self.assertEqual(tag_mod.parse_tags("   "), [])


class ProviderFromEnvTests(unittest.TestCase):
    KEYS = ("EVOSQL_TOPIC_PROVIDER",
            "EVOSQL_TOPIC_MODEL",
            "OPENAI_API_KEY")

    def setUp(self):
        self._saved = {k: os.environ.get(k) for k in self.KEYS}
        for k in self._saved:
            os.environ.pop(k, None)

    def tearDown(self):
        for k, v in self._saved.items():
            if v is None:
                os.environ.pop(k, None)
            else:
                os.environ[k] = v

    def test_default_is_noop(self):
        p = tag_mod.provider_from_env()
        self.assertEqual(p.kind, "none")
        self.assertEqual(p.tag("anything"), [])

    def test_openai_without_key_falls_back(self):
        os.environ["EVOSQL_TOPIC_PROVIDER"] = "openai"
        p = tag_mod.provider_from_env()
        self.assertEqual(p.kind, "none")

    def test_openai_with_key(self):
        os.environ["EVOSQL_TOPIC_PROVIDER"] = "openai"
        os.environ["OPENAI_API_KEY"] = "sk-test"
        p = tag_mod.provider_from_env()
        self.assertEqual(p.kind, "openai")
        self.assertEqual(p.model, "gpt-4o-mini")

    def test_openai_model_override(self):
        os.environ["EVOSQL_TOPIC_PROVIDER"] = "openai"
        os.environ["OPENAI_API_KEY"]        = "sk-test"
        os.environ["EVOSQL_TOPIC_MODEL"]    = "gpt-5-mini"
        p = tag_mod.provider_from_env()
        self.assertEqual(p.model, "gpt-5-mini")

    def test_unknown_provider_is_noop(self):
        os.environ["EVOSQL_TOPIC_PROVIDER"] = "claude"
        p = tag_mod.provider_from_env()
        self.assertEqual(p.kind, "none")


if __name__ == "__main__":
    unittest.main()
