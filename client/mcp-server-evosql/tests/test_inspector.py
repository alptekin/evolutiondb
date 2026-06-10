"""Unit tests for mcp_server_evosql.inspector.

Covers the pure helpers `is_state_row` and `filter_records`. The
HTTP handler is exercised manually in a browser; an end-to-end test
would need a running EvolutionDB.
"""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from mcp_server_evosql import inspector as ins


class IsStateRowTests(unittest.TestCase):
    def test_teams_watermark(self):
        self.assertTrue(ins.is_state_row("teams_state_19:abc@thread.v2"))

    def test_gmail_watermark(self):
        self.assertTrue(ins.is_state_row("gmail_state_latest"))

    def test_message_row_is_kept(self):
        self.assertFalse(ins.is_state_row("teams_chat_19:abc_message_42"))
        self.assertFalse(ins.is_state_row("gmail_msg_abc123"))
        self.assertFalse(ins.is_state_row("mem_1715594000_abc123"))


class FilterRecordsTests(unittest.TestCase):
    rows = [
        {"_key": "k1", "source": "teams",
         "sender": "John Doe | Acme",
         "text": "invoice arrived", "modified_at": "2026-05-13T11:22:14Z"},
        {"_key": "k2", "source": "slack",
         "sender": "Jane Roe | Acme",
         "text": "release tomorrow", "modified_at": "2026-05-13T15:00:00Z"},
        {"_key": "k3", "source": "github",
         "sender": "alexkim",
         "text": "merged PR #142", "modified_at": "2026-05-12T09:00:00Z"},
        {"_key": "k4", "source": "manual",
         "fact":   "user prefers morning meetings",
         "created_at": "2026-05-10T08:00:00Z"},
    ]

    def test_no_filters_returns_all_sorted_newest_first(self):
        out = ins.filter_records(self.rows)
        self.assertEqual([r["_key"] for r in out],
                         ["k2", "k1", "k3", "k4"])

    def test_source_filter(self):
        out = ins.filter_records(self.rows, source="teams")
        self.assertEqual([r["_key"] for r in out], ["k1"])

    def test_sender_substring_match(self):
        out = ins.filter_records(self.rows, sender="jane")
        self.assertEqual([r["_key"] for r in out], ["k2"])

    def test_query_searches_text_and_fact(self):
        out = ins.filter_records(self.rows, q="invoice")
        self.assertEqual([r["_key"] for r in out], ["k1"])

        out = ins.filter_records(self.rows, q="morning")
        self.assertEqual([r["_key"] for r in out], ["k4"])

    def test_combined_filters(self):
        out = ins.filter_records(self.rows, source="slack", q="release")
        self.assertEqual([r["_key"] for r in out], ["k2"])

    def test_empty_query_is_noop(self):
        out_all   = ins.filter_records(self.rows)
        out_blank = ins.filter_records(self.rows, q="   ")
        self.assertEqual([r["_key"] for r in out_all],
                         [r["_key"] for r in out_blank])

    def test_case_insensitive(self):
        out = ins.filter_records(self.rows, source="TEAMS",
                                   sender="JOHN", q="INVOICE")
        self.assertEqual([r["_key"] for r in out], ["k1"])

    def test_unmatched_returns_empty(self):
        self.assertEqual(ins.filter_records(self.rows, q="zzz_nope"), [])


if __name__ == "__main__":
    unittest.main()
