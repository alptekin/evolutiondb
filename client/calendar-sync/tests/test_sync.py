"""Pure-function tests for calendar_sync."""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from calendar_sync import sync


class ParseSinceTests(unittest.TestCase):
    def test_units(self):
        for s in ("30s", "5m", "1h", "3d", "2w"):
            v = sync.parse_since(s)
            self.assertTrue(v.endswith("Z"))
            self.assertIn("T", v)

    def test_garbage(self):
        with self.assertRaises(ValueError):
            sync.parse_since("forever")


class EventWhenTests(unittest.TestCase):
    def test_timed(self):
        self.assertEqual(
            sync._event_when({"start": {"dateTime": "2026-05-15T10:00:00Z"}}),
            "2026-05-15 10:00")

    def test_all_day(self):
        self.assertEqual(
            sync._event_when({"start": {"date": "2026-05-15"}}),
            "2026-05-15")

    def test_missing(self):
        self.assertIsNone(sync._event_when({"start": {}}))
        self.assertIsNone(sync._event_when({}))


class BuildEventRecordTests(unittest.TestCase):
    def _cal(self, **kw):
        d = {"id": "primary", "summary": "Work"}
        d.update(kw)
        return d

    def test_typical(self):
        rec = sync._build_event_record(
            {"id": "abc", "summary": "Quarterly review",
             "description": "Q2 numbers + roadmap",
             "location": "Conference Room A",
             "organizer": {"email": "boss@example.com"},
             "attendees": [{"displayName": "Me"},
                            {"email": "x@y"}],
             "start": {"dateTime": "2026-05-15T10:00:00Z"},
             "end":   {"dateTime": "2026-05-15T11:00:00Z"},
             "status": "confirmed",
             "htmlLink": "https://calendar.google.com/foo",
             "created": "2026-05-01T00:00:00Z",
             "updated": "2026-05-10T00:00:00Z"},
            self._cal())
        self.assertEqual(rec["kind"], "event")
        self.assertEqual(rec["summary"], "Quarterly review")
        self.assertEqual(rec["organizer"], "boss@example.com")
        self.assertIn("Quarterly review", rec["fact"])
        self.assertIn("Me", rec["attendees"])
        self.assertFalse(rec["all_day"])
        self.assertEqual(rec["calendar_name"], "Work")

    def test_all_day_event_flag(self):
        rec = sync._build_event_record(
            {"id": "x", "summary": "Vacation",
             "start": {"date": "2026-06-01"},
             "end":   {"date": "2026-06-08"},
             "status": "confirmed"},
            self._cal())
        self.assertTrue(rec["all_day"])

    def test_cancelled_returns_none(self):
        rec = sync._build_event_record(
            {"id": "x", "status": "cancelled"},
            self._cal())
        self.assertIsNone(rec)

    def test_long_description_clipped(self):
        rec = sync._build_event_record(
            {"id": "x", "summary": "s",
             "description": "z" * 5000,
             "start": {"date": "2026-05-15"},
             "status": "confirmed"},
            self._cal())
        self.assertLess(len(rec["description"]), 2000)
        self.assertTrue(rec["description"].endswith("[clipped]"))


if __name__ == "__main__":
    unittest.main()
