"""
test_security — regressions for the 1.12.2 security hardening.

Server-free unit tests for the guards added after the security review:
  * SQL-injection key/id allowlist (_valid_key)
  * email-regex ReDoS (linear-time + still matches valid addresses)
  * embedded auto-fetch source pinning (https + github host + version format)
  * OAuth proxy _self_origin no longer reflecting an untrusted Host header
"""
from __future__ import annotations

import os
import time

import pytest


# ---------------------------------------------------------------- #
#  SQL-injection: key/id allowlist                                  #
# ---------------------------------------------------------------- #
def test_valid_key_accepts_real_server_keys():
    from mcp_server_evosql.server import _valid_key
    for k in ("mem_1717000000123_a1b2c3", "ep_1717000000123_0",
              "ent_person_3_99939", "intent_2026-06-10_abc123",
              "sem_123_deadbe", "skill_1_aa00bb",
              "mem_1_aa|ent_person_1_2|5",                 # composite mention key
              "0a1b2c3d4e5f6a7b8c9d0e1f2a3b4c5d"):         # uuid hex query_id
        assert _valid_key(k), k


def test_valid_key_rejects_injection_payloads():
    from mcp_server_evosql.server import _valid_key
    # the backslash-then-key breakout, quotes, comments, spaces, traversal
    for k in ("a\\", "x\\", "k\\','INJECT", "x' OR '1'='1", "a'--",
              "a; DROP TABLE", "key with space", "../etc/passwd",
              'a"b', "", "a" * 257):
        assert not _valid_key(k), k


# ---------------------------------------------------------------- #
#  ReDoS: email regexes are linear and still correct                #
# ---------------------------------------------------------------- #
def test_entities_email_regex_is_linear():
    from mcp_server_evosql.entities import _RE_EMAIL
    adv = "a" * 80000 + "@" + "a" * 80000   # worst case for the old pattern
    t = time.time()
    _RE_EMAIL.search(adv)
    assert time.time() - t < 1.0, "entities _RE_EMAIL still backtracks"


def test_outbox_email_regex_is_bounded():
    from mcp_server_evosql.outbox import _is_outbound
    # _is_outbound runs _EMAIL over a (capped) attacker-controlled `from`
    d = {"from": "x" * 200000, "labels": ""}
    t = time.time()
    _is_outbound(d, "gmail")
    assert time.time() - t < 1.0, "outbox _EMAIL still backtracks"


def test_email_regexes_still_match_valid_addresses():
    from mcp_server_evosql.entities import _RE_EMAIL
    from mcp_server_evosql.outbox import _EMAIL
    for e in ("bob.smith@mail.example.co", "a@b.io",
              "x.y+z@sub.domain.example.com"):
        assert _RE_EMAIL.fullmatch(e), e
        assert _EMAIL.search(f"From: Someone <{e}>"), e


# ---------------------------------------------------------------- #
#  Embedded auto-fetch: source pinning                              #
# ---------------------------------------------------------------- #
def test_embedded_rejects_untrusted_release_source():
    from mcp_server_evosql.embedded import _validate_release_source
    for base in ("http://attacker.example/dl",          # not https
                 "https://evil.example/x",               # wrong host
                 "ftp://github.com/x",                   # wrong scheme
                 "file:///tmp/x"):
        with pytest.raises(RuntimeError):
            _validate_release_source(base, "3.0.0")


def test_embedded_rejects_bad_version():
    from mcp_server_evosql.embedded import _validate_release_source
    base = "https://github.com/alptekin/evolutiondb/releases/download"
    for ver in ("3.0.0; rm -rf", "../../etc", "latest", ""):
        with pytest.raises(RuntimeError):
            _validate_release_source(base, ver)


def test_embedded_allows_official_github_https():
    from mcp_server_evosql.embedded import _validate_release_source
    # should not raise
    _validate_release_source(
        "https://github.com/alptekin/evolutiondb/releases/download", "3.0.0")
    _validate_release_source(
        "https://objects.githubusercontent.com/path", "12.34.56")


# ---------------------------------------------------------------- #
#  OAuth proxy: _self_origin does not trust an arbitrary Host       #
# ---------------------------------------------------------------- #
class _Headers(dict):
    def get(self, k, d=None):
        return dict.get(self, k, d)


def test_self_origin_ignores_untrusted_host(monkeypatch):
    from mcp_server_evosql import oauth_proxy as o
    monkeypatch.delenv("EVOSQL_PUBLIC_ORIGIN", raising=False)
    monkeypatch.delenv("EVOSQL_OAUTH_ALLOWED_HOSTS", raising=False)
    origin = o._self_origin(_Headers({"Host": "attacker.example",
                                      "X-Forwarded-Proto": "https"}))
    assert "attacker.example" not in origin
    assert origin.startswith("http://127.0.0.1")


def test_self_origin_uses_configured_public_origin(monkeypatch):
    from mcp_server_evosql import oauth_proxy as o
    monkeypatch.setenv("EVOSQL_PUBLIC_ORIGIN", "https://mcp.myhost.dev")
    assert o._self_origin(_Headers({"Host": "attacker.example"})) \
        == "https://mcp.myhost.dev"


def test_self_origin_honors_host_allowlist(monkeypatch):
    from mcp_server_evosql import oauth_proxy as o
    monkeypatch.delenv("EVOSQL_PUBLIC_ORIGIN", raising=False)
    monkeypatch.setenv("EVOSQL_OAUTH_ALLOWED_HOSTS", "mcp.myhost.dev")
    assert o._self_origin(_Headers({"Host": "mcp.myhost.dev",
                                    "X-Forwarded-Proto": "https"})) \
        == "https://mcp.myhost.dev"
    # an un-allowlisted host still falls back to loopback
    assert o._self_origin(_Headers({"Host": "evil.example"})) \
        .startswith("http://127.0.0.1")
