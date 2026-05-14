"""Tests for orchestrator.schedule.

The pure renderers (`render_plist`, `render_systemd_units`) are
exercised directly with sample inputs. The full schedule()/
unschedule() flows are exercised manually since they call launchctl
and systemctl — see the README for the on-machine smoke test."""
from __future__ import annotations

import sys
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from orchestrator import schedule as sched


class RenderPlistTests(unittest.TestCase):
    def test_basic_shape(self):
        out = sched.render_plist(
            label="com.evolutiondb.gmail-sync",
            binary="/usr/local/bin/evolutiondb-gmail-sync",
            interval=900,
            user_id="alptekin_topal",
            log_dir="/Users/me/.evosql/logs")
        self.assertIn("<key>Label</key>", out)
        self.assertIn("com.evolutiondb.gmail-sync", out)
        self.assertIn("/usr/local/bin/evolutiondb-gmail-sync", out)
        self.assertIn("<integer>900</integer>", out)
        self.assertIn("<key>MCP_USER_ID</key>", out)
        self.assertIn("<string>alptekin_topal</string>", out)
        self.assertIn("<key>RunAtLoad</key>", out)

    def test_escapes_xml_entities(self):
        out = sched.render_plist(
            label="<bad&label>",
            binary="/x",
            interval=60,
            user_id="me",
            log_dir="/tmp")
        self.assertNotIn("<bad&label>", out)
        self.assertIn("&lt;bad&amp;label&gt;", out)

    def test_extra_env_vars(self):
        out = sched.render_plist(
            label="x", binary="/x", interval=60,
            user_id="me", log_dir="/tmp",
            env={"EVOSQL_PORT": "5433",
                  "GITHUB_USERNAME": "alptekin"})
        self.assertIn("<key>EVOSQL_PORT</key><string>5433</string>", out)
        self.assertIn("<key>GITHUB_USERNAME</key>"
                       "<string>alptekin</string>", out)


class RenderSystemdTests(unittest.TestCase):
    def test_service_unit(self):
        out = sched.render_systemd_units(
            service_name="evolutiondb-gmail-sync",
            binary="/usr/local/bin/evolutiondb-gmail-sync",
            interval=900, user_id="me")
        self.assertIn("ExecStart=/usr/local/bin/evolutiondb-gmail-sync --once",
                      out["service"])
        self.assertIn('Environment="MCP_USER_ID=me"', out["service"])

    def test_timer_unit(self):
        out = sched.render_systemd_units(
            service_name="evolutiondb-gmail-sync",
            binary="/x", interval=900, user_id="me")
        self.assertIn("OnUnitActiveSec=900s", out["timer"])
        self.assertIn("[Install]", out["timer"])
        self.assertIn("WantedBy=timers.target", out["timer"])


class PathHelperTests(unittest.TestCase):
    def test_label(self):
        self.assertEqual(sched._label("gmail"),
                         "com.evolutiondb.gmail-sync")

    def test_service_name(self):
        self.assertEqual(sched._service_name("github"),
                         "evolutiondb-github-sync")


if __name__ == "__main__":
    unittest.main()
