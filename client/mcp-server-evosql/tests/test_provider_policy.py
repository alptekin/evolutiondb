"""
test_provider_policy — the no-train / data-residency egress gate.

Server-free; drives the gate purely through its env policy. Asserts the default
(off) is a no-op, every ON rule refuses the right calls, the gate is FAIL-CLOSED
on anything it can't verify, and that llm.chat() consults it BEFORE dispatching
(so a blocked call never reaches a provider).
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.dirname(os.path.abspath(__file__))))

from mcp_server_evosql import provider_policy                                # noqa: E402
from mcp_server_evosql.provider_policy import ProviderPolicyError            # noqa: E402

passed = failed = 0

_POLICY_VARS = ("EVOSQL_LLM_PROVIDER_POLICY", "EVOSQL_LLM_ALLOWED_PROVIDERS",
                "EVOSQL_LLM_REQUIRE_NO_TRAIN", "EVOSQL_LLM_NO_TRAIN_PROVIDERS",
                "EVOSQL_LLM_ALLOWED_ENDPOINTS", "ANTHROPIC_BASE_URL")

# Under pytest the test functions are called directly (not via run()), so add an
# autouse fixture that save/clears/restores the policy env around each test — a
# leaked EVOSQL_LLM_PROVIDER_POLICY=on would (correctly) make OTHER test files'
# LLM calls fail. Guarded so script mode (no pytest) still works via run().
try:
    import pytest

    @pytest.fixture(autouse=True)
    def _isolate_policy_env():
        saved = {k: os.environ.get(k) for k in _POLICY_VARS}
        for k in _POLICY_VARS:
            os.environ.pop(k, None)
        try:
            yield
        finally:
            for k, v in saved.items():
                if v is None:
                    os.environ.pop(k, None)
                else:
                    os.environ[k] = v
except ImportError:
    pass


def run(name, fn):
    global passed, failed
    saved = {k: os.environ.get(k) for k in _POLICY_VARS}
    for k in _POLICY_VARS:
        os.environ.pop(k, None)
    try:
        fn(); print(f"  PASS: {name}"); passed += 1
    except Exception as e:
        print(f"  FAIL: {name} -- {e}"); failed += 1
    finally:
        for k, v in saved.items():
            if v is None:
                os.environ.pop(k, None)
            else:
                os.environ[k] = v


def _refused(fn):
    try:
        fn(); return False
    except ProviderPolicyError:
        return True


def test_off_is_noop():
    # no policy env at all -> any call is allowed
    provider_policy.check("anthropic", endpoint="https://api.anthropic.com")
    provider_policy.check("whatever", endpoint=None)
    # explicit off too
    os.environ["EVOSQL_LLM_PROVIDER_POLICY"] = "off"
    provider_policy.check("random-provider")


def test_allowed_providers():
    os.environ["EVOSQL_LLM_PROVIDER_POLICY"] = "on"
    os.environ["EVOSQL_LLM_ALLOWED_PROVIDERS"] = "anthropic,openai"
    provider_policy.check("anthropic")                # allowed
    provider_policy.check("OpenAI")                   # case-insensitive
    assert _refused(lambda: provider_policy.check("openrouter"))
    assert _refused(lambda: provider_policy.check(""))   # unknown provider


def test_require_no_train():
    os.environ["EVOSQL_LLM_PROVIDER_POLICY"] = "on"
    os.environ["EVOSQL_LLM_REQUIRE_NO_TRAIN"] = "1"
    # no attestation list -> refuse everything (fail-closed)
    assert _refused(lambda: provider_policy.check("anthropic"))
    os.environ["EVOSQL_LLM_NO_TRAIN_PROVIDERS"] = "anthropic"
    provider_policy.check("anthropic")                # now attested
    assert _refused(lambda: provider_policy.check("openai"))


def test_residency_endpoint_allowlist():
    os.environ["EVOSQL_LLM_PROVIDER_POLICY"] = "on"
    os.environ["EVOSQL_LLM_ALLOWED_ENDPOINTS"] = "api.anthropic.com,eu.api.openai.com"
    provider_policy.check("anthropic", endpoint="https://api.anthropic.com")
    provider_policy.check("openai", endpoint="https://eu.api.openai.com/v1")
    # wrong region/host refused
    assert _refused(lambda: provider_policy.check(
        "openai", endpoint="https://api.openai.com/v1"))
    # endpoint allowlist set but endpoint unknown -> fail-closed
    assert _refused(lambda: provider_policy.check("anthropic", endpoint=None))


def test_anthropic_endpoint_honours_override():
    assert provider_policy.anthropic_endpoint() == "https://api.anthropic.com"
    os.environ["ANTHROPIC_BASE_URL"] = "https://eu.anthropic.example/v1"
    assert provider_policy.anthropic_endpoint() == "https://eu.anthropic.example/v1"


def test_llm_chat_gates_before_dispatch():
    # the gate must run BEFORE the provider dispatch: a blocked call never
    # reaches a provider.
    from mcp_server_evosql import llm
    os.environ["EVOSQL_LLM_PROVIDER_POLICY"] = "on"
    os.environ["EVOSQL_LLM_ALLOWED_PROVIDERS"] = "openai"   # anthropic blocked

    called = {"dispatch": False}
    orig = llm._dispatch

    def spy(*a, **k):
        called["dispatch"] = True
        return "should-not-happen"
    llm._dispatch = spy
    try:
        blocked = _refused(lambda: llm.chat("hi", provider="anthropic",
                                            model="claude-sonnet-4-6"))
        assert blocked, "llm.chat did not refuse a policy-blocked provider"
        assert called["dispatch"] is False, "dispatch ran despite policy block"
    finally:
        llm._dispatch = orig


if __name__ == "__main__":
    print("=== Phase 2 governance: no-train / data-residency gate ===")
    run("off_is_noop", test_off_is_noop)
    run("allowed_providers", test_allowed_providers)
    run("require_no_train", test_require_no_train)
    run("residency_endpoint_allowlist", test_residency_endpoint_allowlist)
    run("anthropic_endpoint_honours_override", test_anthropic_endpoint_honours_override)
    run("llm_chat_gates_before_dispatch", test_llm_chat_gates_before_dispatch)
    print(f"\nResults: {passed} passed, {failed} failed out of {passed + failed}")
    sys.exit(1 if failed > 0 else 0)
