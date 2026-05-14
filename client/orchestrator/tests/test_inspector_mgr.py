"""Tests for orchestrator.inspector_mgr — status fallback paths.

Spawning the real inspector binary is exercised manually in the
on-machine smoke test."""
from __future__ import annotations

import os
import sys
import unittest
from pathlib import Path
from tempfile import TemporaryDirectory

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))


class StatusTests(unittest.TestCase):
    def setUp(self):
        self._td = TemporaryDirectory()
        self.addCleanup(self._td.cleanup)
        self._saved = os.environ.get("EVOSQL_HUB_STATE")
        os.environ["EVOSQL_HUB_STATE"] = (
            str(Path(self._td.name) / "state.json"))
        import importlib
        from orchestrator import state, inspector_mgr
        importlib.reload(state)
        importlib.reload(inspector_mgr)
        self.mod = inspector_mgr

    def tearDown(self):
        if self._saved is None:
            os.environ.pop("EVOSQL_HUB_STATE", None)
        else:
            os.environ["EVOSQL_HUB_STATE"] = self._saved

    def test_empty_state_reports_stopped(self):
        s = self.mod.status()
        self.assertFalse(s["running"])
        self.assertIsNone(s["pid"])
        self.assertIsNone(s["url"])
        self.assertEqual(s["port"], 8765)

    def test_stale_pid_treated_as_stopped(self):
        from orchestrator import state as state_mod
        st = state_mod.load()
        st["inspector"] = {"pid": 2**31 - 1, "port": 8765}
        state_mod.save(st)
        s = self.mod.status()
        self.assertFalse(s["running"])

    def test_start_missing_binary(self):
        import shutil
        from unittest import mock
        with mock.patch.object(shutil, "which", return_value=None):
            r = self.mod.start()
        self.assertFalse(r["ok"])
        self.assertIn("not on PATH", r["error"])


if __name__ == "__main__":
    unittest.main()
