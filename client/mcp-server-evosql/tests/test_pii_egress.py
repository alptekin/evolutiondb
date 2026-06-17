"""
test_pii_egress — outbound PII masking chokepoint (Part A).

off  -> scrub is the identity (existing deployments unchanged).
on   -> outbound text is masked before it leaves the host.
on + masker missing -> fail-closed RuntimeError (never silently send PII).
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

from mcp_server_evosql import pii_egress


def test_off_is_identity():
    os.environ.pop("EVOSQL_PII_EGRESS", None)
    assert pii_egress.mode() == "off"
    s = "mail a@b.com or +90 555 111 22 33"
    assert pii_egress.scrub(s) == s          # byte-for-byte unchanged


def test_on_masks_when_masker_present():
    os.environ["EVOSQL_PII_EGRESS"] = "on"
    orig = pii_egress._masker
    pii_egress._masker = lambda: (lambda t: t.replace("a@b.com", "****"))
    try:
        out = pii_egress.scrub("mail a@b.com please")
        assert "a@b.com" not in out and "****" in out
    finally:
        pii_egress._masker = orig
        os.environ.pop("EVOSQL_PII_EGRESS", None)


def test_on_without_masker_is_fail_closed():
    # Force the optional dependency import to fail, deterministically, so the
    # test holds whether or not evolutiondb-pii happens to be installed.
    os.environ["EVOSQL_PII_EGRESS"] = "on"
    sys.modules["evolutiondb_pii.mask"] = None
    try:
        raised = False
        try:
            pii_egress.scrub("anything with PII")
        except RuntimeError:
            raised = True
        assert raised, "egress must fail closed when the masker is missing"
    finally:
        sys.modules.pop("evolutiondb_pii.mask", None)
        os.environ.pop("EVOSQL_PII_EGRESS", None)


def test_non_string_and_empty_pass_through():
    os.environ["EVOSQL_PII_EGRESS"] = "on"
    try:
        assert pii_egress.scrub(None) is None
        assert pii_egress.scrub(123) == 123
        assert pii_egress.scrub("") == ""
    finally:
        os.environ.pop("EVOSQL_PII_EGRESS", None)


def main():
    for fn in (test_off_is_identity, test_on_masks_when_masker_present,
               test_on_without_masker_is_fail_closed,
               test_non_string_and_empty_pass_through):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — pii_egress chokepoint")
    return 0


if __name__ == "__main__":
    sys.exit(main())
