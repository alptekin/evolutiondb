"""Tests for orchestrator.state — pure JSON file operations."""
from __future__ import annotations

import json
import os
import sys
import unittest
from pathlib import Path
from tempfile import TemporaryDirectory

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))


class StateTests(unittest.TestCase):
    def setUp(self):
        self._td = TemporaryDirectory()
        self.addCleanup(self._td.cleanup)
        self._saved = os.environ.get("EVOSQL_HUB_STATE")
        os.environ["EVOSQL_HUB_STATE"] = (
            str(Path(self._td.name) / "state.json"))
        # Re-import so the env var is picked up.
        import importlib
        from orchestrator import state
        importlib.reload(state)
        self.state = state

    def tearDown(self):
        if self._saved is None:
            os.environ.pop("EVOSQL_HUB_STATE", None)
        else:
            os.environ["EVOSQL_HUB_STATE"] = self._saved

    def test_load_empty(self):
        s = self.state.load()
        self.assertEqual(s["sources"], {})
        self.assertEqual(s["tunnel"], {})

    def test_save_round_trip(self):
        s = self.state.load()
        self.state.set_source(s, "teams", agent_owner="claude",
                              interval=600, pid=12345)
        self.state.save(s)
        s2 = self.state.load()
        self.assertEqual(s2["sources"]["teams"]["agent_owner"], "claude")
        self.assertEqual(s2["sources"]["teams"]["pid"], 12345)

    def test_remove_pid(self):
        s = self.state.load()
        self.state.set_source(s, "teams", pid=12345, started_at=1)
        self.state.remove_source_pid(s, "teams")
        self.assertNotIn("pid", s["sources"]["teams"])
        self.assertNotIn("started_at", s["sources"]["teams"])

    def test_corrupt_file_falls_back(self):
        p = Path(os.environ["EVOSQL_HUB_STATE"])
        p.parent.mkdir(parents=True, exist_ok=True)
        p.write_text("{not json", encoding="utf-8")
        s = self.state.load()
        self.assertEqual(s["sources"], {})


if __name__ == "__main__":
    unittest.main()
