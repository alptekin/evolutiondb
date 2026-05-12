"""Pure-function tests for slack_sync."""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from slack_sync import sync


class ParseSinceTests(unittest.TestCase):
    def test_units(self):
        for s in ("30s", "5m", "1h", "3d", "2w"):
            v = sync.parse_since(s)
            self.assertIsInstance(v, float)
            self.assertGreater(v, 0)

    def test_garbage(self):
        with self.assertRaises(ValueError):
            sync.parse_since("yesterday")


class TsToIsoTests(unittest.TestCase):
    def test_round_trip(self):
        # Slack ts == unix seconds with microseconds: "1715594000.000200"
        s = sync._ts_to_iso("1715594000.000200")
        self.assertTrue(s.endswith("Z"))
        self.assertIn("T", s)

    def test_garbage(self):
        self.assertIsNone(sync._ts_to_iso(None))
        self.assertIsNone(sync._ts_to_iso("not-a-number"))


class BuildRecordTests(unittest.TestCase):
    def _conv(self, **kw):
        d = {"id": "C123", "name": "general", "is_channel": True}
        d.update(kw)
        return d

    def test_top_level_message(self):
        rec = sync._build_record(
            {"text": "hi all", "user": "U1", "ts": "1715594000.000200"},
            conv=self._conv(),
            conv_name="#general",
            sender_name="Alice")
        self.assertEqual(rec["kind"], "message")
        self.assertEqual(rec["channel_name"], "#general")
        self.assertEqual(rec["channel_type"], "public_channel")
        self.assertEqual(rec["sender"], "Alice")
        self.assertEqual(rec["ts"], "1715594000.000200")
        self.assertIn("Alice in #general", rec["fact"])

    def test_thread_reply_carries_parent(self):
        rec = sync._build_record(
            {"text": "+1", "user": "U2",
             "ts": "1715594100.000300",
             "thread_ts": "1715594000.000200"},
            conv=self._conv(),
            conv_name="#general",
            sender_name="Bob",
            parent_ts="1715594000.000200")
        self.assertEqual(rec["kind"], "thread_reply")
        self.assertEqual(rec["thread_ts"], "1715594000.000200")
        self.assertIn("thread", rec["tags"])

    def test_long_text_clipped(self):
        long = "x" * 9000
        rec = sync._build_record(
            {"text": long, "user": "U", "ts": "1.000000"},
            conv=self._conv(),
            conv_name="#g",
            sender_name="x")
        self.assertLess(len(rec["text"]), 5000)
        self.assertTrue(rec["text"].endswith("[clipped]"))

    def test_im_kind(self):
        rec = sync._build_record(
            {"text": "hi", "user": "U", "ts": "1.000000"},
            conv={"id": "D1", "is_im": True},
            conv_name="Ahmet",
            sender_name="Ahmet")
        self.assertEqual(rec["channel_type"], "im")


if __name__ == "__main__":
    unittest.main()
