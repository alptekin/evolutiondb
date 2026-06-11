"""
Pure-function tests — no DB. Transcript parsing + text extraction + noise
filtering. Fictional fixtures (a tiny hand-built JSONL).
"""
from __future__ import annotations

import json
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from claude_session_sync import sync  # noqa: E402

SID = "sess-abc-123"


def _line(t, **kw):
    return json.dumps({"type": t, "sessionId": SID, **kw})


def _write(lines):
    d = Path(tempfile.mkdtemp()) / "myproject"
    d.mkdir()
    f = d / f"{SID}.jsonl"
    f.write_text("\n".join(lines), encoding="utf-8")
    return f


def _user(content, ts="2026-06-08T10:00:00Z", **kw):
    return _line("user", timestamp=ts, cwd="/home/dev/proj", gitBranch="main",
                 message={"role": "user", "content": content}, **kw)


def _asst(blocks, ts="2026-06-08T10:00:05Z"):
    return _line("assistant", timestamp=ts,
                 message={"role": "assistant", "content": blocks})


class ExtractionTests(unittest.TestCase):
    def test_user_text_only_genuine_prompts(self):
        self.assertEqual(
            sync._user_text(json.loads(_user("fix the bug"))), "fix the bug")
        # a list content == tool_result -> not a prompt
        self.assertIsNone(sync._user_text(json.loads(
            _user([{"type": "tool_result", "content": "ok"}]))))
        # wrappers / noise filtered
        for noise in ("<command-name>/model</command-name>",
                      "<local-command-stdout>x</local-command-stdout>",
                      "Caveat: the messages below ...",
                      "[Request interrupted by user]"):
            self.assertIsNone(sync._user_text(json.loads(_user(noise))), noise)
        # sidechain (subagent) excluded
        self.assertIsNone(sync._user_text(
            json.loads(_user("hi", isSidechain=True))))

    def test_assistant_text_skips_tools_and_thinking(self):
        blocks = [{"type": "thinking", "thinking": "secret reasoning"},
                  {"type": "text", "text": "Here is the answer."},
                  {"type": "tool_use", "name": "Bash", "input": {}},
                  {"type": "text", "text": "Done."}]
        self.assertEqual(sync._assistant_text(json.loads(_asst(blocks))),
                         "Here is the answer.\nDone.")
        self.assertIsNone(sync._assistant_text(json.loads(_asst(
            [{"type": "tool_use", "name": "x", "input": {}}]))))


class ParseSessionTests(unittest.TestCase):
    def test_builds_session_record(self):
        f = _write([
            _line("ai-title", aiTitle="Fixing the webhook retry"),
            _user("the webhook drops events under load"),
            _asst([{"type": "text", "text": "Let's add backoff."}]),
            _user([{"type": "tool_result", "content": "noise"}]),  # skipped
            _user("ship it", ts="2026-06-08T10:10:00Z"),
        ])
        rec = sync.parse_session(f)
        assert rec is not None
        self.assertEqual(rec["source"], "claude_session")
        self.assertEqual(rec["kind"], "session")
        self.assertEqual(rec["session_id"], SID)
        self.assertEqual(rec["title"], "Fixing the webhook retry")
        self.assertEqual(rec["turns"], 3)               # 2 user + 1 assistant
        self.assertEqual(rec["project"], "myproject")
        self.assertEqual(rec["started_at"], "2026-06-08T10:00:00Z")
        self.assertEqual(rec["ended_at"], "2026-06-08T10:10:00Z")
        self.assertIn("webhook drops events", rec["text"])
        self.assertIn("Let's add backoff", rec["text"])
        self.assertIn("ship it", rec["text"])
        self.assertIn("Fixing the webhook retry", rec["fact"])

    def test_empty_or_toolonly_session_is_none(self):
        f = _write([_user([{"type": "tool_result", "content": "x"}])])
        self.assertIsNone(sync.parse_session(f))

    def test_digest_is_capped(self):
        big = "x" * 9000
        f = _write([_user(big)])
        rec = sync.parse_session(f)
        self.assertLess(len(rec["text"]), sync._DIGEST_CAP + 50)
        self.assertTrue(rec["text"].endswith("…[clipped]"))


if __name__ == "__main__":
    unittest.main()
