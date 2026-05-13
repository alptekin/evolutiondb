"""Unit tests for mcp_server_evosql.setup.

These cover the path-resolution + JSON-merge logic without touching
any real host config files. Each test uses tmp_path + the env-var
override so it's safe to run in parallel with a real Claude Desktop /
ChatGPT Desktop / Gemini CLI install on the same machine.
"""
from __future__ import annotations

import json
import os
import sys
import unittest
from pathlib import Path
from tempfile import TemporaryDirectory

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from mcp_server_evosql import setup as s


CLAUDE = next(c for c in s.CLIENTS if c.name == "claude-desktop")
CHATGPT = next(c for c in s.CLIENTS if c.name == "chatgpt-desktop")
GEMINI = next(c for c in s.CLIENTS if c.name == "gemini-cli")


class ResolvePathTests(unittest.TestCase):
    def setUp(self):
        self._saved_env = {c.env_override: os.environ.get(c.env_override)
                           for c in s.CLIENTS}
        for k in self._saved_env:
            os.environ.pop(k, None)

    def tearDown(self):
        for k, v in self._saved_env.items():
            if v is None:
                os.environ.pop(k, None)
            else:
                os.environ[k] = v

    def test_env_override_wins(self):
        with TemporaryDirectory() as td:
            target = Path(td) / "custom.json"
            os.environ[CLAUDE.env_override] = str(target)
            self.assertEqual(s.resolve_path(CLAUDE), target)

    def test_env_override_expands_tilde(self):
        os.environ[GEMINI.env_override] = "~/some-fake-path.json"
        self.assertEqual(s.resolve_path(GEMINI),
                         Path(os.path.expanduser("~/some-fake-path.json")))

    def test_returns_none_when_no_candidates_exist(self):
        # Force a platform with at least one entry, but redirect HOME to
        # an empty temp dir so no candidate's parent exists.
        with TemporaryDirectory() as td:
            saved_home = os.environ.get("HOME")
            os.environ["HOME"] = td
            try:
                p = s.resolve_path(CLAUDE)
                # All candidates expand to ~/... — under an empty HOME
                # none of their parents exist.
                self.assertIsNone(p)
            finally:
                if saved_home is None:
                    os.environ.pop("HOME", None)
                else:
                    os.environ["HOME"] = saved_home


class BuildBlockTests(unittest.TestCase):
    def test_default_values(self):
        b = s.build_block("alice")
        self.assertEqual(b["command"], "uvx")
        self.assertEqual(b["args"], ["mcp-server-evolutiondb"])
        self.assertEqual(b["env"]["MCP_USER_ID"], "alice")
        self.assertEqual(b["env"]["EVOSQL_PORT"], "5433")
        self.assertEqual(b["env"]["MCP_STORE_PREFIX"], "mcp")

    def test_custom_port(self):
        b = s.build_block("alice", evosql_port=15433)
        self.assertEqual(b["env"]["EVOSQL_PORT"], "15433")


class MergeConfigTests(unittest.TestCase):
    def test_writes_fresh_file(self):
        with TemporaryDirectory() as td:
            path = Path(td) / "claude_desktop_config.json"
            block = s.build_block("alice")
            self.assertTrue(s.merge_config(path, block))
            data = json.loads(path.read_text())
            self.assertEqual(data["mcpServers"]["evolutiondb-memory"], block)

    def test_preserves_other_servers(self):
        with TemporaryDirectory() as td:
            path = Path(td) / "claude_desktop_config.json"
            path.write_text(json.dumps({
                "mcpServers": {
                    "filesystem": {"command": "uvx",
                                    "args": ["mcp-server-filesystem"]},
                },
            }))
            block = s.build_block("alice")
            s.merge_config(path, block)
            data = json.loads(path.read_text())
            self.assertIn("filesystem", data["mcpServers"])
            self.assertIn("evolutiondb-memory", data["mcpServers"])

    def test_second_call_is_noop(self):
        with TemporaryDirectory() as td:
            path = Path(td) / "claude_desktop_config.json"
            block = s.build_block("alice")
            self.assertTrue(s.merge_config(path, block))
            # Same block, same call → no rewrite.
            self.assertFalse(s.merge_config(path, block))

    def test_user_change_triggers_rewrite(self):
        with TemporaryDirectory() as td:
            path = Path(td) / "claude_desktop_config.json"
            s.merge_config(path, s.build_block("alice"))
            self.assertTrue(s.merge_config(path, s.build_block("bob")))
            data = json.loads(path.read_text())
            self.assertEqual(
                data["mcpServers"]["evolutiondb-memory"]["env"]["MCP_USER_ID"],
                "bob")

    def test_empty_file_is_treated_as_empty_object(self):
        with TemporaryDirectory() as td:
            path = Path(td) / "config.json"
            path.write_text("")
            self.assertTrue(s.merge_config(path, s.build_block("a")))

    def test_invalid_json_raises(self):
        with TemporaryDirectory() as td:
            path = Path(td) / "config.json"
            path.write_text("{not json}")
            with self.assertRaises(ValueError):
                s.merge_config(path, s.build_block("a"))

    def test_non_object_root_raises(self):
        with TemporaryDirectory() as td:
            path = Path(td) / "config.json"
            path.write_text("[]")
            with self.assertRaises(ValueError):
                s.merge_config(path, s.build_block("a"))


class ConfigureClientTests(unittest.TestCase):
    def setUp(self):
        self._saved = {c.env_override: os.environ.get(c.env_override)
                       for c in s.CLIENTS}
        for k in self._saved:
            os.environ.pop(k, None)

    def tearDown(self):
        for k, v in self._saved.items():
            if v is None:
                os.environ.pop(k, None)
            else:
                os.environ[k] = v

    def test_writes_via_env_override(self):
        with TemporaryDirectory() as td:
            target = Path(td) / "mcp.json"
            os.environ[CHATGPT.env_override] = str(target)
            r = s.configure_client(CHATGPT, user_id="alice")
            self.assertEqual(r["status"], "wrote")
            self.assertEqual(r["path"], str(target))
            self.assertTrue(target.exists())

    def test_second_call_is_unchanged(self):
        with TemporaryDirectory() as td:
            target = Path(td) / "mcp.json"
            os.environ[CHATGPT.env_override] = str(target)
            s.configure_client(CHATGPT, user_id="alice")
            r = s.configure_client(CHATGPT, user_id="alice")
            self.assertEqual(r["status"], "unchanged")

    def test_no_install_reports_unsupported(self):
        with TemporaryDirectory() as td:
            # Pristine HOME so none of the host's candidate dirs exist.
            saved_home = os.environ.get("HOME")
            os.environ["HOME"] = td
            try:
                r = s.configure_client(CLAUDE, user_id="alice")
                self.assertEqual(r["status"], "unsupported")
            finally:
                if saved_home is None:
                    os.environ.pop("HOME", None)
                else:
                    os.environ["HOME"] = saved_home


if __name__ == "__main__":
    unittest.main()
