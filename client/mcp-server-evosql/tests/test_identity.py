"""Unit tests for mcp_server_evosql.identity.

The pure helpers (slugify, find_identity_by_alias, resolve_aliases,
plan_merge) are exercised here with plain Python dicts — no database
needed. The psycopg-backed IdentityStore is covered by the integration
test suite that requires a running EvolutionDB.
"""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from mcp_server_evosql import identity as ident


class SlugifyTests(unittest.TestCase):
    def test_basic(self):
        self.assertEqual(ident.slugify("Orhan Özdoğan"), "orhan_ozdogan")

    def test_punctuation(self):
        self.assertEqual(ident.slugify("Onur Çobanoğlu | Wechip"),
                         "onur_cobanoglu_wechip")

    def test_only_emoji_falls_back_to_random(self):
        s = ident.slugify("🚀✨")
        self.assertTrue(len(s) >= 4)
        self.assertNotIn("🚀", s)


class FindByAliasTests(unittest.TestCase):
    records = [
        {"_key": "identity_orhan_ozdogan",
         "canonical_name": "Orhan Özdoğan",
         "aliases": ["Orhan Özdoğan", "Orhan Özdoğan | Wechip"]},
        {"_key": "identity_bugra_can_orhan",
         "canonical_name": "Buğra Can Orhan",
         "aliases": ["Buğra Can Orhan | Wechip"]},
    ]

    def test_exact_match(self):
        out = ident.find_identity_by_alias(self.records,
                                           "Orhan Özdoğan | Wechip")
        self.assertEqual(out["_key"], "identity_orhan_ozdogan")

    def test_whitespace_tolerant(self):
        out = ident.find_identity_by_alias(self.records,
                                           "  Orhan   Özdoğan  ")
        self.assertEqual(out["_key"], "identity_orhan_ozdogan")

    def test_case_insensitive(self):
        out = ident.find_identity_by_alias(self.records, "orhan özdoğan")
        self.assertEqual(out["_key"], "identity_orhan_ozdogan")

    def test_substring_does_not_match(self):
        # "Orhan" alone is a substring of two different people — it
        # must not collide with either via exact-alias matching.
        out = ident.find_identity_by_alias(self.records, "Orhan")
        self.assertIsNone(out)

    def test_no_records(self):
        self.assertIsNone(ident.find_identity_by_alias([], "anyone"))

    def test_empty_query(self):
        self.assertIsNone(ident.find_identity_by_alias(self.records, ""))


class ResolveAliasesTests(unittest.TestCase):
    records = [
        {"_key": "identity_orhan_ozdogan",
         "canonical_name": "Orhan Özdoğan",
         "aliases": ["Orhan Özdoğan", "Orhan Özdoğan | Wechip"]},
        {"_key": "identity_bugra_can_orhan",
         "canonical_name": "Buğra Can Orhan",
         "aliases": ["Buğra Can Orhan | Wechip"]},
    ]

    def test_full_name_returns_single_identity(self):
        out = ident.resolve_aliases(self.records, "Orhan Özdoğan")
        self.assertEqual(set(out),
                         {"Orhan Özdoğan", "Orhan Özdoğan | Wechip"})

    def test_substring_returns_both_when_ambiguous(self):
        # "orhan" matches both records — caller has to disambiguate.
        # The function still returns aliases so the result is auditable.
        out = ident.resolve_aliases(self.records, "orhan")
        self.assertIn("Orhan Özdoğan", out)
        self.assertIn("Buğra Can Orhan | Wechip", out)

    def test_no_match(self):
        self.assertEqual(ident.resolve_aliases(self.records, "Alptekin"),
                         [])

    def test_empty_query(self):
        self.assertEqual(ident.resolve_aliases(self.records, ""), [])

    def test_deterministic_order(self):
        # Identical inputs must always return identical lists so the
        # caller can fingerprint the expansion set in logs or tests.
        a = ident.resolve_aliases(self.records, "wechip")
        b = ident.resolve_aliases(self.records, "wechip")
        self.assertEqual(a, b)
        self.assertEqual(a, sorted(a))


class PlanMergeTests(unittest.TestCase):
    def test_create_new_when_nothing_matches(self):
        plan = ident.plan_merge([],
                                 ["Orhan Özdoğan", "Orhan Özdoğan | Wechip"])
        self.assertEqual(plan["action"], "create")
        self.assertIsNone(plan["absorbed_key"])
        self.assertEqual(plan["record"]["canonical_name"], "Orhan Özdoğan")
        self.assertEqual(set(plan["record"]["aliases"]),
                         {"Orhan Özdoğan", "Orhan Özdoğan | Wechip"})

    def test_extend_existing_when_one_alias_overlaps(self):
        existing = [{
            "_key": "identity_orhan_ozdogan",
            "canonical_name": "Orhan Özdoğan",
            "aliases": ["Orhan Özdoğan"],
            "sources": {"teams": ["abc-123"]},
            "tags": ["wechip"],
        }]
        plan = ident.plan_merge(existing,
                                 ["Orhan Özdoğan",
                                  "Orhan Özdoğan | Wechip"])
        self.assertEqual(plan["action"], "extend")
        self.assertEqual(plan["absorbed_key"], "identity_orhan_ozdogan")
        # Original sources and tags survive.
        self.assertEqual(plan["record"]["sources"], {"teams": ["abc-123"]})
        self.assertIn("wechip", plan["record"]["tags"])
        # New alias added.
        self.assertIn("Orhan Özdoğan | Wechip", plan["record"]["aliases"])

    def test_explicit_canonical_overrides(self):
        existing = [{
            "_key": "identity_old",
            "canonical_name": "Old Name",
            "aliases": ["Old Name"],
        }]
        plan = ident.plan_merge(existing, ["Old Name"],
                                 canonical_name="New Name")
        self.assertEqual(plan["record"]["canonical_name"], "New Name")

    def test_rejects_empty_aliases(self):
        with self.assertRaises(ValueError):
            ident.plan_merge([], ["", "   "])

    def test_merging_two_existing_identities_folds_both(self):
        # Regression: aliases spanning TWO existing identities must fold both
        # into one (union aliases/sources/tags) and report both absorbed keys —
        # previously only the first was extended and the second was orphaned,
        # leaving overlapping aliases that resolved ambiguously.
        existing = [
            {"_key": "identity_ali_work", "canonical_name": "Ali (work)",
             "aliases": ["ali@work.com"], "sources": {"outlook": ["m1"]},
             "tags": ["colleague"]},
            {"_key": "identity_ali_home", "canonical_name": "Ali (home)",
             "aliases": ["ali@home.com"], "sources": {"gmail": ["m2"]},
             "tags": ["friend"]},
        ]
        plan = ident.plan_merge(existing, ["ali@work.com", "ali@home.com"],
                                canonical_name="Ali")
        self.assertEqual(plan["action"], "extend")
        self.assertEqual(set(plan["absorbed_keys"]),
                         {"identity_ali_work", "identity_ali_home"})
        self.assertEqual(set(plan["record"]["aliases"]),
                         {"ali@work.com", "ali@home.com"})
        self.assertEqual(plan["record"]["sources"],
                         {"outlook": ["m1"], "gmail": ["m2"]})
        self.assertEqual(set(plan["record"]["tags"]),
                         {"colleague", "friend"})


if __name__ == "__main__":
    unittest.main()
