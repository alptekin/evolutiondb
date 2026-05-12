"""Unit tests for mcp_server_evosql.embeddings.

The embedding *providers* require live API keys / heavy models so
they're exercised end-to-end manually. What we lock down here is the
math + env-variable wiring — the parts that the rest of the server
depends on.
"""
from __future__ import annotations

import os
import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from mcp_server_evosql import embeddings as emb


class CosineTests(unittest.TestCase):
    def test_identical_vectors(self):
        self.assertAlmostEqual(emb.cosine([1, 2, 3], [1, 2, 3]), 1.0)

    def test_opposite_vectors(self):
        self.assertAlmostEqual(emb.cosine([1, 2, 3], [-1, -2, -3]), -1.0)

    def test_orthogonal(self):
        self.assertAlmostEqual(emb.cosine([1, 0], [0, 1]), 0.0)

    def test_length_mismatch_returns_zero(self):
        self.assertEqual(emb.cosine([1, 2], [1, 2, 3]), 0.0)

    def test_empty(self):
        self.assertEqual(emb.cosine([], []), 0.0)
        self.assertEqual(emb.cosine([1], []), 0.0)

    def test_zero_vector(self):
        # The norm guard turns 0 into 1.0 so we never divide by zero;
        # the dot product of any vector with [0,0] is still 0.
        self.assertEqual(emb.cosine([0, 0, 0], [1, 2, 3]), 0.0)


class ProviderFromEnvTests(unittest.TestCase):
    """`provider_from_env` is the only knob the server pulls."""

    def setUp(self):
        self._saved = {k: os.environ.get(k) for k in
                       ("EVOSQL_EMBEDDING_PROVIDER",
                        "EVOSQL_EMBEDDING_MODEL",
                        "OPENAI_API_KEY")}
        for k in self._saved:
            os.environ.pop(k, None)

    def tearDown(self):
        for k, v in self._saved.items():
            if v is None:
                os.environ.pop(k, None)
            else:
                os.environ[k] = v

    def test_default_is_noop(self):
        p = emb.provider_from_env()
        self.assertEqual(p.kind, "none")
        self.assertIsNone(p.embed("anything"))

    def test_openai_without_key_falls_back(self):
        os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "openai"
        p = emb.provider_from_env()
        self.assertEqual(p.kind, "none")

    def test_openai_with_key(self):
        os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "openai"
        os.environ["OPENAI_API_KEY"] = "sk-test-placeholder"
        p = emb.provider_from_env()
        self.assertEqual(p.kind, "openai")
        self.assertEqual(p.model, "text-embedding-3-small")

    def test_openai_model_override(self):
        os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "openai"
        os.environ["OPENAI_API_KEY"] = "sk-test"
        os.environ["EVOSQL_EMBEDDING_MODEL"] = "text-embedding-3-large"
        p = emb.provider_from_env()
        self.assertEqual(p.model, "text-embedding-3-large")

    def test_local_provider_selected(self):
        # We don't import sentence-transformers here — the constructor
        # is lazy, so just check the kind tag.
        os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "local"
        p = emb.provider_from_env()
        self.assertEqual(p.kind, "local")

    def test_unknown_provider_is_noop(self):
        os.environ["EVOSQL_EMBEDDING_PROVIDER"] = "fasttext"
        p = emb.provider_from_env()
        self.assertEqual(p.kind, "none")


if __name__ == "__main__":
    unittest.main()
