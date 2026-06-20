"""
provider_policy — a no-train / data-residency gate on the way OUT to an LLM.

`pii_egress.py` masks the CONTENT we send; this gate governs WHERE it may go.
A self-hosted, regulated deployment needs to guarantee that prompts only ever
reach providers/endpoints the operator has vetted for (a) no-training-on-our-
data and (b) data residency (region). EvolutionDB can't make a provider's
"won't train" promise true — but it CAN refuse to call any provider/endpoint the
operator has not explicitly attested and approved, BEFORE a single byte leaves.

Every server-side enrichment call goes through `llm.chat()`; the standalone
agent loop and `self_model._llm()` call the Anthropic SDK directly — so all
three consult `check()` here before dispatching, the same way they all route
text through `pii_egress.scrub()`.

Policy (all opt-in; EVOSQL_LLM_PROVIDER_POLICY=off by default => unchanged):
  EVOSQL_LLM_PROVIDER_POLICY   off | on            (master switch)
  EVOSQL_LLM_ALLOWED_PROVIDERS comma list, e.g. "anthropic,openai"
                               (empty = any provider allowed)
  EVOSQL_LLM_REQUIRE_NO_TRAIN  1 => the provider MUST be attested no-train
  EVOSQL_LLM_NO_TRAIN_PROVIDERS comma list the operator attests are configured
                               not to train on our data (e.g. via ZDR / org
                               settings). Empty + REQUIRE_NO_TRAIN => refuse all.
  EVOSQL_LLM_ALLOWED_ENDPOINTS comma list of allowed endpoint HOSTS (residency),
                               e.g. "api.anthropic.com,eu.api.openai.com"
                               (empty = endpoint host not checked)

FAIL-CLOSED: when the policy is ON, anything it cannot positively verify is
REFUSED (an unknown provider, a provider not on the no-train attestation list, an
endpoint whose host is not on the residency allowlist, or a missing endpoint when
the allowlist is set). A compliance gate that silently lets a call through on
uncertainty is worse than none.
"""
from __future__ import annotations

import os
from typing import Optional
from urllib.parse import urlparse


class ProviderPolicyError(RuntimeError):
    """Raised (fail-closed) when an outbound LLM call violates the residency /
    no-train policy. Callers let it propagate — refusing the call is the point."""


def enabled() -> bool:
    return (os.environ.get("EVOSQL_LLM_PROVIDER_POLICY") or "off").strip().lower() == "on"


def _csv(name: str):
    return [x.strip().lower() for x in (os.environ.get(name) or "").split(",")
            if x.strip()]


def anthropic_endpoint() -> str:
    """The endpoint the Anthropic SDK will hit — honouring a regional override
    (ANTHROPIC_BASE_URL) so residency checks see the real host."""
    return (os.environ.get("ANTHROPIC_BASE_URL")
            or "https://api.anthropic.com").strip()


def check(provider: Optional[str], *, endpoint: Optional[str] = None,
          model: Optional[str] = None) -> None:
    """Enforce the policy for one outbound call. No-op when the policy is off
    (default), so existing deployments are byte-for-byte unchanged. Raises
    ProviderPolicyError (fail-closed) on any violation when on."""
    if not enabled():
        return
    p = (provider or "").strip().lower()
    if not p:
        raise ProviderPolicyError("provider policy is on but the provider is unknown")

    allowed = _csv("EVOSQL_LLM_ALLOWED_PROVIDERS")
    if allowed and p not in allowed:
        raise ProviderPolicyError(
            f"provider {p!r} is not in EVOSQL_LLM_ALLOWED_PROVIDERS "
            f"({', '.join(allowed)})")

    if (os.environ.get("EVOSQL_LLM_REQUIRE_NO_TRAIN") or "").strip() in ("1", "true", "yes", "on"):
        no_train = _csv("EVOSQL_LLM_NO_TRAIN_PROVIDERS")
        if p not in no_train:
            raise ProviderPolicyError(
                f"EVOSQL_LLM_REQUIRE_NO_TRAIN is set but provider {p!r} is not "
                f"attested in EVOSQL_LLM_NO_TRAIN_PROVIDERS — refusing to send")

    allowed_eps = _csv("EVOSQL_LLM_ALLOWED_ENDPOINTS")
    if allowed_eps:
        host = (urlparse(endpoint).hostname or "").lower() if endpoint else ""
        if not host:
            raise ProviderPolicyError(
                "endpoint residency allowlist is set but this call's endpoint "
                "host could not be determined — refusing (fail-closed)")
        if host not in allowed_eps:
            raise ProviderPolicyError(
                f"endpoint host {host!r} is not in EVOSQL_LLM_ALLOWED_ENDPOINTS "
                f"(data-residency) — refusing to send")
