"""Tests for orchestrator.install.

The pip install + auth subprocess paths shell out, so we only
exercise the input validation + auth_kind routing. The full
end-to-end is covered by manual smoke against a real machine."""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from orchestrator import install as inst


class GuardTests(unittest.TestCase):
    def test_install_unknown_connector(self):
        r = inst.install("nope")
        self.assertFalse(r["ok"])
        self.assertIn("no such connector", r["error"])

    def test_authenticate_unknown_connector(self):
        r = inst.authenticate("nope")
        self.assertFalse(r["ok"])
        self.assertIn("no such connector", r["error"])


class AuthRoutingTests(unittest.TestCase):
    """authenticate() picks a path based on the connector's spec —
    Google/Microsoft flows have an `--auth` subcommand; Slack/GitHub
    expect a manually-edited .env. The routing decision is what we
    lock down here."""

    def test_slack_returns_env_kind(self):
        # The slack spec has auth_subcommand=None. We can't actually
        # spawn the binary so we just check the routing branch when
        # the binary IS present.
        import shutil
        from unittest import mock
        with mock.patch.object(shutil, "which",
                                return_value="/fake/evolutiondb-slack-sync"):
            r = inst.authenticate("slack")
        self.assertTrue(r["ok"])
        self.assertEqual(r["auth_kind"], "env")
        self.assertIn(".env", r["env_path"])

    def test_github_returns_env_kind(self):
        import shutil
        from unittest import mock
        with mock.patch.object(shutil, "which",
                                return_value="/fake/evolutiondb-github-sync"):
            r = inst.authenticate("github")
        self.assertTrue(r["ok"])
        self.assertEqual(r["auth_kind"], "env")

    def test_authenticate_missing_binary(self):
        # Real shutil.which against a name unlikely to be on PATH.
        import shutil
        from unittest import mock
        with mock.patch.object(shutil, "which", return_value=None):
            r = inst.authenticate("teams")
        self.assertFalse(r["ok"])
        self.assertIn("not installed", r["error"])


if __name__ == "__main__":
    unittest.main()
