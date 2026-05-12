"""Pure-function tests for gmail_sync."""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from gmail_sync import api, sync


class HeadersToDictTests(unittest.TestCase):
    def test_filters_to_whitelist(self):
        out = api.headers_to_dict([
            {"name": "Subject", "value": "Hi"},
            {"name": "From",    "value": "a@b"},
            {"name": "X-Spam",  "value": "no"},   # dropped
        ])
        self.assertEqual(out, {"Subject": "Hi", "From": "a@b"})

    def test_joins_repeats(self):
        out = api.headers_to_dict([
            {"name": "Cc", "value": "a@b"},
            {"name": "Cc", "value": "c@d"},
        ])
        self.assertEqual(out, {"Cc": "a@b, c@d"})

    def test_empty(self):
        self.assertEqual(api.headers_to_dict([]), {})
        self.assertEqual(api.headers_to_dict(None), {})


class ParseSinceTests(unittest.TestCase):
    def test_units(self):
        for s in ("30s", "5m", "1h", "3d", "2w"):
            v = sync.parse_since(s)
            self.assertIsInstance(v, int)
            self.assertGreater(v, 0)

    def test_garbage(self):
        with self.assertRaises(ValueError):
            sync.parse_since("yesterday")


class BuildRecordTests(unittest.TestCase):
    def _meta(self, headers=None, snippet="hi", msg_id="MID",
              thread_id="TID", internal=1715000000000,
              label_ids=None):
        return {
            "id":        msg_id,
            "threadId":  thread_id,
            "snippet":   snippet,
            "internalDate": str(internal),
            "labelIds":  label_ids or ["INBOX"],
            "payload":   {"headers": headers or []},
        }

    def test_happy_path(self):
        rec = sync._build_record(
            self._meta(headers=[
                {"name": "Subject", "value": "Quarterly review"},
                {"name": "From",    "value": "boss@example.com"},
                {"name": "To",      "value": "me@example.com"},
                {"name": "Date",    "value": "Tue, 7 May 2026 09:00:00 +0000"},
            ]),
            label_lookup={"INBOX": "Inbox"})
        self.assertEqual(rec["subject"], "Quarterly review")
        self.assertEqual(rec["from"], "boss@example.com")
        self.assertEqual(rec["labels"], ["Inbox"])
        self.assertIn("Quarterly review", rec["fact"])
        self.assertTrue(rec["sent_at"].endswith("Z"))

    def test_no_headers_returns_none(self):
        self.assertIsNone(sync._build_record(self._meta(headers=[]),
                                              label_lookup={}))

    def test_snippet_clipped(self):
        rec = sync._build_record(
            self._meta(headers=[{"name": "From", "value": "x"}],
                       snippet="z" * 5000),
            label_lookup={})
        self.assertLess(len(rec["snippet"]), 2000)
        self.assertTrue(rec["snippet"].endswith("[clipped]"))


if __name__ == "__main__":
    unittest.main()
