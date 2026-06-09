"""
test_send_setup — the send onboarding command (send_setup.py).

Pure functions, no server, no network: env-derived current config, the
recommended env block per channel (with the safe-default guards), unknown-channel
rejection, and that status/plan render the key facts.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from mcp_server_evosql import send_setup as ss


def test_current_config_defaults_off():
    cfg = ss.current_config(env={})
    assert cfg == {"enabled": False, "channels": [], "undo": 0, "rate": 0,
                   "dedup": 0}


def test_current_config_reads_env():
    cfg = ss.current_config(env={
        "EVOSQL_SEND_ENABLED": "1", "EVOSQL_SEND_CHANNELS": "gmail, teams",
        "EVOSQL_SEND_UNDO_SECONDS": "30", "EVOSQL_SEND_RATE_PER_HOUR": "20",
        "EVOSQL_SEND_DEDUP_SECONDS": "86400"})
    assert cfg["enabled"] is True
    assert cfg["channels"] == ["gmail", "teams"]          # comma + space tolerant
    assert cfg["undo"] == 30 and cfg["rate"] == 20 and cfg["dedup"] == 86400


def test_recommended_env_single_channel():
    block = ss.recommended_env(["gmail"], undo=30, rate=20, dedup=86400)
    assert block["EVOSQL_SEND_ENABLED"] == "1"
    assert block["EVOSQL_SEND_CHANNELS"] == "gmail"
    assert block["EVOSQL_GMAIL_SEND"] == "1"
    assert block["EVOSQL_SEND_UNDO_SECONDS"] == "30"
    assert block["EVOSQL_SEND_RATE_PER_HOUR"] == "20"
    assert block["EVOSQL_SEND_DEDUP_SECONDS"] == "86400"


def test_recommended_env_multi_channel_scope_flags():
    block = ss.recommended_env(["gmail", "outlook", "teams"])
    assert block["EVOSQL_SEND_CHANNELS"] == "gmail,outlook,teams"
    assert block["EVOSQL_GMAIL_SEND"] == "1"
    assert block["EVOSQL_OUTLOOK_SEND"] == "1"
    assert block["EVOSQL_TEAMS_SEND"] == "1"


def test_recommended_env_channels_without_scope_flag():
    # slack/imessage carry no per-channel SEND flag (token / local)
    block = ss.recommended_env(["slack", "imessage"])
    assert block["EVOSQL_SEND_CHANNELS"] == "slack,imessage"
    assert not any(k.endswith("_SEND") for k in block)    # no EVOSQL_SLACK_SEND etc.


def test_recommended_env_rejects_unknown_channel():
    try:
        ss.recommended_env(["whatsapp"])
        assert False, "expected ValueError"
    except ValueError as exc:
        assert "whatsapp" in str(exc)


def test_render_status_shows_state():
    out = ss.render_status(ss.current_config(env={}))
    assert "disabled (safe default)" in out
    for c in ("gmail", "outlook", "teams", "slack", "imessage"):
        assert c in out


def test_render_plan_has_warning_and_block():
    out = ss.render_plan(["gmail"], undo=30, rate=20, dedup=86400)
    assert "irreversible" in out                          # the safety warning
    assert "EVOSQL_SEND_ENABLED=1" in out
    assert "EVOSQL_GMAIL_SEND=1" in out
    assert "gmail.send" in out                            # the per-channel scope


def test_main_status_and_plan(capsys=None):
    assert ss.main([]) == 0                                # status
    assert ss.main(["--channel", "gmail"]) == 0            # plan


def main():
    for fn in (test_current_config_defaults_off, test_current_config_reads_env,
               test_recommended_env_single_channel,
               test_recommended_env_multi_channel_scope_flags,
               test_recommended_env_channels_without_scope_flag,
               test_recommended_env_rejects_unknown_channel,
               test_render_status_shows_state,
               test_render_plan_has_warning_and_block, test_main_status_and_plan):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — send_setup onboarding")
    return 0


if __name__ == "__main__":
    sys.exit(main())
