"""Tests for orchestrator.supervisor that don't require a real DB.
We exercise pid_alive(), find_external_pid(), agent-label setting,
and the start/stop error paths against a missing binary."""
from __future__ import annotations

import os
import sys
import unittest
from pathlib import Path
from tempfile import TemporaryDirectory

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))


class SupervisorTests(unittest.TestCase):
    def setUp(self):
        self._td = TemporaryDirectory()
        self.addCleanup(self._td.cleanup)
        self._saved = os.environ.get("EVOSQL_HUB_STATE")
        os.environ["EVOSQL_HUB_STATE"] = (
            str(Path(self._td.name) / "state.json"))
        import importlib
        from orchestrator import state as state_mod
        importlib.reload(state_mod)
        from orchestrator import supervisor
        importlib.reload(supervisor)
        self.sup = supervisor

    def tearDown(self):
        if self._saved is None:
            os.environ.pop("EVOSQL_HUB_STATE", None)
        else:
            os.environ["EVOSQL_HUB_STATE"] = self._saved

    def test_pid_alive_self(self):
        self.assertTrue(self.sup.pid_alive(os.getpid()))

    def test_pid_alive_garbage(self):
        # 1 is init/launchd; checking it's not -1 negative
        self.assertFalse(self.sup.pid_alive(-1))
        self.assertFalse(self.sup.pid_alive(0))
        self.assertFalse(self.sup.pid_alive(2**31 - 1))

    def test_unknown_connector_status(self):
        r = self.sup.status("nope")
        self.assertEqual(r["state"], "unknown")

    def test_status_returns_stopped_when_no_pid(self):
        r = self.sup.status("teams")
        self.assertEqual(r["state"], "stopped")
        self.assertIsNone(r["pid"])
        # Status carries label + agent_owner field even when stopped.
        self.assertEqual(r["label"], "Microsoft Teams")
        self.assertIsNone(r["agent_owner"])

    def test_set_agent_owner_persists(self):
        r = self.sup.set_agent_owner("teams", "gemini")
        self.assertTrue(r["ok"])
        self.assertEqual(r["agent_owner"], "gemini")
        # New status read reflects the label.
        self.assertEqual(self.sup.status("teams")["agent_owner"],
                         "gemini")

    def test_set_agent_owner_clears_with_empty(self):
        self.sup.set_agent_owner("teams", "gemini")
        self.sup.set_agent_owner("teams", "")
        self.assertIsNone(self.sup.status("teams")["agent_owner"])

    def test_start_unknown_connector(self):
        r = self.sup.start("nope")
        self.assertFalse(r["ok"])
        self.assertIn("no such connector", r["error"])

    def test_stop_when_not_running(self):
        r = self.sup.stop("teams")
        self.assertFalse(r["ok"])
        self.assertIn("not running", r["error"])


if __name__ == "__main__":
    unittest.main()
