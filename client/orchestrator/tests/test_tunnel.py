"""Tests for orchestrator.tunnel.

The subprocess parts (spawning evolutiondb-mcp-http + cloudflared)
are exercised manually since they need both binaries installed.
Here we lock down the URL parser and the status fallback paths."""
from __future__ import annotations

import os
import sys
import unittest
from pathlib import Path
from tempfile import TemporaryDirectory

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))


class CloudflaredUrlParserTests(unittest.TestCase):
    def setUp(self):
        # Re-import the module so the LOG_DIR module-level path is
        # fresh under a temp HOME.
        from orchestrator import tunnel
        self.tunnel = tunnel

    def test_url_found(self):
        with TemporaryDirectory() as td:
            log = Path(td) / "cloudflared.log"
            log.write_text(
                "INF some startup\n"
                "INF https://random-words.trycloudflare.com\n"
                "INF more lines\n", encoding="utf-8")
            url = self.tunnel._await_cloudflared_url(log,
                                                       timeout_s=0.5)
            self.assertEqual(url,
                "https://random-words.trycloudflare.com")

    def test_no_url(self):
        with TemporaryDirectory() as td:
            log = Path(td) / "cloudflared.log"
            log.write_text("INF something else\n", encoding="utf-8")
            url = self.tunnel._await_cloudflared_url(log,
                                                       timeout_s=0.5)
            self.assertIsNone(url)

    def test_missing_file(self):
        url = self.tunnel._await_cloudflared_url(
            Path("/tmp/does-not-exist-xyz"), timeout_s=0.3)
        self.assertIsNone(url)


class StatusTests(unittest.TestCase):
    def setUp(self):
        self._td = TemporaryDirectory()
        self.addCleanup(self._td.cleanup)
        self._saved = os.environ.get("EVOSQL_HUB_STATE")
        os.environ["EVOSQL_HUB_STATE"] = (
            str(Path(self._td.name) / "state.json"))
        import importlib
        from orchestrator import state, tunnel
        importlib.reload(state)
        importlib.reload(tunnel)
        self.tunnel = tunnel

    def tearDown(self):
        if self._saved is None:
            os.environ.pop("EVOSQL_HUB_STATE", None)
        else:
            os.environ["EVOSQL_HUB_STATE"] = self._saved

    def test_empty_state_reports_stopped(self):
        s = self.tunnel.status()
        self.assertFalse(s["running"])
        self.assertFalse(s["cloudflared"])
        self.assertIsNone(s["http_pid"])
        self.assertIsNone(s["public_url"])

    def test_stale_pid_treated_as_stopped(self):
        from orchestrator import state as state_mod
        st = state_mod.load()
        # 2**31 - 1 is guaranteed-dead on a 32-bit pid system.
        st["tunnel"] = {"http_pid": 2**31 - 1,
                         "cloudflared_pid": 2**31 - 2,
                         "port": 8970}
        state_mod.save(st)
        s = self.tunnel.status()
        self.assertFalse(s["running"])
        self.assertFalse(s["cloudflared"])


if __name__ == "__main__":
    unittest.main()
