"""
Pure-function tests — no live API, no DB. Record builders + the since parser.
Fictional fixtures only (acme-org / widgets / jane.dev).
"""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from azure_devops_sync import sync  # noqa: E402


def _pr(pr_id=42, *, status="active", draft=False, reviewers=None,
        author="jane.dev@example.com", closed=None):
    return {
        "pullRequestId": pr_id,
        "title": "Add retry/backoff",
        "description": "Backoff with jittered cap.",
        "status": status,
        "isDraft": draft,
        "mergeStatus": "succeeded",
        "creationDate": "2026-06-08T09:00:00Z",
        "closedDate": closed,
        "createdBy": {"uniqueName": author, "displayName": "Jane Dev"},
        "reviewers": reviewers or [],
        "sourceRefName": "refs/heads/topic/backoff",
        "targetRefName": "refs/heads/main",
        "repository": {
            "id": "repo-guid-1", "name": "widgets",
            "project": {"name": "widgets-project",
                        "url": "https://dev.azure.com/acme-org/_apis/projects/p1"},
        },
    }


class PrRecordTests(unittest.TestCase):
    def test_basic_shape(self):
        rec = sync.build_pr_record(_pr(), "widgets-project")
        self.assertEqual(rec["source"], "azure_devops")
        self.assertEqual(rec["kind"], "pr")
        self.assertEqual(rec["repo"], "widgets-project/widgets")
        self.assertEqual(rec["number"], 42)
        self.assertEqual(rec["author"], "jane.dev@example.com")
        self.assertEqual(rec["state"], "open")          # derived from active
        self.assertEqual(rec["status"], "active")
        self.assertIn("jane.dev@example.com opened pr", rec["fact"])
        self.assertEqual(rec["source_branch"], "topic/backoff")
        self.assertIn("widgets-project/widgets", rec["tags"])

    def test_reviewers_carry_votes_verbatim(self):
        rec = sync.build_pr_record(_pr(reviewers=[
            {"uniqueName": "sam.dev@example.com", "displayName": "Sam",
             "vote": -5, "isRequired": True},
            {"uniqueName": "ali.dev@example.com", "vote": 0},
        ]), "widgets-project")
        self.assertEqual(rec["reviewers"][0],
                         {"name": "sam.dev@example.com", "display": "Sam",
                          "vote": -5, "is_required": True})
        self.assertEqual(rec["reviewers"][1]["vote"], 0)
        self.assertFalse(rec["reviewers"][1]["is_required"])

    def test_completed_pr_is_closed_and_updated_at_uses_closed(self):
        rec = sync.build_pr_record(
            _pr(status="completed", closed="2026-06-09T10:00:00Z"),
            "widgets-project")
        self.assertEqual(rec["state"], "closed")
        self.assertEqual(rec["updated_at"], "2026-06-09T10:00:00Z")

    def test_open_pr_updated_at_falls_back_to_created(self):
        rec = sync.build_pr_record(_pr(), "widgets-project")
        self.assertEqual(rec["updated_at"], "2026-06-08T09:00:00Z")

    def test_body_clipping(self):
        rec = sync.build_pr_record(
            dict(_pr(), description="x" * 5000), "widgets-project")
        self.assertLess(len(rec["body"]), 4100)
        self.assertTrue(rec["body"].endswith("…[clipped]"))


class CommentRecordTests(unittest.TestCase):
    def test_comment_shape_and_path(self):
        thread = {"id": 7, "threadContext": {"filePath": "/src/app.py"}}
        c = {"id": 3, "content": "pin the seed", "commentType": "text",
             "author": {"uniqueName": "sam.dev@example.com"},
             "publishedDate": "2026-06-09T11:00:00Z"}
        rec = sync.build_comment_record(c, thread, "widgets-project/widgets", 42)
        self.assertEqual(rec["kind"], "pr_comment")
        self.assertEqual(rec["thread_id"], 7)
        self.assertEqual(rec["path"], "/src/app.py")
        self.assertIn("sam.dev@example.com commented", rec["fact"])

    def test_system_and_empty_comments_skipped(self):
        thread = {"id": 7}
        self.assertIsNone(sync.build_comment_record(
            {"id": 1, "content": "x", "commentType": "system"}, thread, "r", 1))
        self.assertIsNone(sync.build_comment_record(
            {"id": 2, "content": "", "commentType": "text"}, thread, "r", 1))


class BuildRecordTests(unittest.TestCase):
    def test_build_shape(self):
        rec = sync.build_build_record({
            "id": 9001, "buildNumber": "20260610.1",
            "status": "completed", "result": "succeeded",
            "sourceBranch": "refs/heads/main", "sourceVersion": "abc123",
            "queueTime": "2026-06-10T08:00:00Z",
            "finishTime": "2026-06-10T08:05:00Z",
            "definition": {"id": 12, "name": "ci"},
            "requestedFor": {"uniqueName": "jane.dev@example.com"},
            "repository": {"name": "widgets"},
        }, "widgets-project")
        self.assertEqual(rec["kind"], "pipeline_run")
        self.assertEqual(rec["pipeline"], "ci")
        self.assertEqual(rec["result"], "succeeded")
        self.assertEqual(rec["branch"], "main")
        self.assertEqual(rec["updated_at"], "2026-06-10T08:05:00Z")
        self.assertIn("succeeded", rec["fact"])


class SinceTests(unittest.TestCase):
    def test_parse_since(self):
        self.assertTrue(sync.parse_since("7d").endswith("Z"))
        with self.assertRaises(ValueError):
            sync.parse_since("next tuesday")


if __name__ == "__main__":
    unittest.main()
