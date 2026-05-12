"""Pure-function tests for github_sync — no live API, no DB."""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from github_sync import api, sync


class ParseRepositoryUrlTests(unittest.TestCase):
    def test_standard(self):
        out = api.parse_repository_url(
            "https://api.github.com/repos/alptekin/evolutiondb")
        self.assertEqual(out, {"owner": "alptekin", "repo": "evolutiondb"})

    def test_with_extra_path(self):
        out = api.parse_repository_url(
            "https://api.github.com/repos/o/r/issues/1")
        self.assertEqual(out, {"owner": "o", "repo": "r"})

    def test_garbage(self):
        self.assertIsNone(api.parse_repository_url(""))
        self.assertIsNone(api.parse_repository_url("not a url"))
        self.assertIsNone(api.parse_repository_url(
            "https://api.github.com/users/alptekin"))


class ParseSinceTests(unittest.TestCase):
    def test_h(self):
        s = sync.parse_since("1h")
        self.assertTrue(s.endswith("Z"))
        # ISO-8601 sanity: 2026-... with T in the middle.
        self.assertEqual(len(s.split("T")), 2)

    def test_d(self):
        sync.parse_since("7d")

    def test_w(self):
        sync.parse_since("2w")

    def test_garbage(self):
        with self.assertRaises(ValueError):
            sync.parse_since("yesterday")


class IssueRecordTests(unittest.TestCase):
    def test_minimal_issue(self):
        rec = sync._build_issue_record(
            {"number": 42, "title": "broken thing",
             "user": {"login": "alice"},
             "body": "I noticed X.",
             "state": "open",
             "html_url": "https://github.com/o/r/issues/42",
             "labels": [{"name": "bug"}],
             "assignees": [{"login": "bob"}],
             "created_at": "2026-05-01T00:00:00Z",
             "updated_at": "2026-05-02T00:00:00Z"},
            "o", "r")
        self.assertEqual(rec["kind"], "issue")
        self.assertEqual(rec["repo"], "o/r")
        self.assertEqual(rec["author"], "alice")
        self.assertIn("alice opened issue o/r#42", rec["fact"])
        self.assertEqual(rec["labels"], ["bug"])
        self.assertEqual(rec["assignees"], ["bob"])

    def test_pr_is_distinguished(self):
        rec = sync._build_issue_record(
            {"number": 7, "title": "Feature",
             "user": {"login": "x"},
             "pull_request": {"url": "..."},
             "state": "open",
             "body": ""},
            "a", "b")
        self.assertEqual(rec["kind"], "pr")

    def test_body_clipped(self):
        long_body = "x" * 10_000
        rec = sync._build_issue_record(
            {"number": 1, "title": "t",
             "user": {"login": "u"},
             "body": long_body},
            "o", "r")
        self.assertLess(len(rec["body"]), 5000)
        self.assertTrue(rec["body"].endswith("[clipped]"))


class CommentRecordTests(unittest.TestCase):
    def test_pr_comment_adds_path(self):
        rec = sync._build_comment_record(
            {"id": 1, "user": {"login": "u"},
             "body": "nit", "path": "foo.py",
             "commit_id": "deadbeef",
             "html_url": "https://gh/1",
             "created_at": "2026-05-01T00:00:00Z"},
            repo="o/r", number=42, kind="pr_comment")
        self.assertEqual(rec["path"], "foo.py")
        self.assertEqual(rec["commit"], "deadbeef")
        self.assertEqual(rec["kind"], "pr_comment")

    def test_review_carries_state(self):
        rec = sync._build_comment_record(
            {"id": 5, "user": {"login": "u"},
             "body": "lgtm", "state": "APPROVED",
             "submitted_at": "2026-05-01T00:00:00Z",
             "html_url": "https://gh/5"},
            repo="o/r", number=1, kind="pr_review")
        self.assertEqual(rec["state"], "APPROVED")


if __name__ == "__main__":
    unittest.main()
