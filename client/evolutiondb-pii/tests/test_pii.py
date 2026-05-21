"""Unit tests for evolutiondb-pii. Run with `python tests/test_pii.py`
or `python -m unittest tests/test_pii.py`.

Coverage targets:
  - default rules detect + mask the canonical PII types
  - validators reject malformed inputs (random 11-digit number is not
    a valid TC kimlik)
  - mask kinds render the spec's `keep_first/keep_last`
  - hybrid encrypt → decrypt round-trip restores the original
  - user rule overrides merge over defaults by name
"""
from __future__ import annotations

import json
import os
import sys
import tempfile
import unittest
from pathlib import Path

sys.path.insert(0, str(Path(__file__).resolve().parents[1]))

from evolutiondb_pii import (                          # noqa: E402
    Match, decrypt_record, detect, encrypt_record,
    generate_keypair, load_rules, mask,
)
from evolutiondb_pii import validators as v            # noqa: E402


class TestValidators(unittest.TestCase):
    def test_luhn_known_cards(self):
        # Sample test card numbers from major schemes
        self.assertTrue(v.luhn("4111111111111111"))           # Visa test
        self.assertTrue(v.luhn("5500000000000004"))           # MC test
        self.assertTrue(v.luhn("371449635398431"))            # Amex test
        self.assertFalse(v.luhn("4111111111111112"))          # off by one

    def test_tckn_checksum(self):
        # 10000000146 is a known-valid example used in Turkish gov
        # docs; obviously starts-with-zero rejects.
        self.assertTrue(v.tckn_checksum("10000000146"))
        self.assertFalse(v.tckn_checksum("12345678901"))      # random 11
        self.assertFalse(v.tckn_checksum("01234567890"))      # leading 0

    def test_iban_mod97(self):
        # Sample TR IBAN with a passing mod-97 check
        self.assertTrue(v.iban_mod97("TR330006100519786457841326"))
        self.assertFalse(v.iban_mod97("TR330006100519786457841327"))

    def test_entropy(self):
        self.assertTrue(v.entropy_gte_4_0("aB3xQ9z-pK7mNvL4"))
        self.assertFalse(v.entropy_gte_4_0("aaaaaaaaaaaaaaaa"))


class TestDetection(unittest.TestCase):
    def setUp(self):
        self.rules = load_rules()

    def test_email_detection(self):
        txt = "Contact alptekin.topal@wechiptech.com for details"
        ms = detect(txt, self.rules)
        self.assertEqual(len(ms), 1)
        self.assertEqual(ms[0].tag, "email")
        self.assertEqual(ms[0].text, "alptekin.topal@wechiptech.com")

    def test_credit_card_passes_luhn(self):
        txt = "Card: 4111 1111 1111 1111 is the test number"
        ms = detect(txt, self.rules)
        tags = [m.tag for m in ms]
        self.assertIn("credit_card", tags)

    def test_random_digit_string_is_not_a_card(self):
        # 16 random digits that don't pass Luhn
        txt = "Reference 4111 1111 1111 1112 is bogus"
        ms = detect(txt, self.rules)
        # Should NOT detect as credit_card (Luhn fails); may still be
        # picked up by another rule, but credit_card tag must be absent.
        tags = [m.tag for m in ms]
        self.assertNotIn("credit_card", tags)

    def test_iban_detection(self):
        txt = "IBAN: TR33 0006 1005 1978 6457 8413 26"
        ms = detect(txt, self.rules)
        self.assertTrue(any(m.tag == "iban" for m in ms))

    def test_phone_detection(self):
        txt = "Telefon: +90 555 123 45 67 ile arayabilirsiniz"
        ms = detect(txt, self.rules)
        self.assertTrue(any(m.tag == "phone" for m in ms))

    def test_jwt_detection(self):
        txt = "Token: eyJhbGciOiJIUzI1NiJ9.eyJzdWIiOiIxMjM0In0.SflKxw"
        ms = detect(txt, self.rules)
        self.assertTrue(any(m.tag == "jwt" for m in ms))


class TestMasking(unittest.TestCase):
    def test_email_keep_after(self):
        out = mask("contact alptekin@example.com today")
        self.assertIn("@example.com", out)
        # User-provided spec: ~3 stars in the head + the @-onward tail.
        self.assertIn("***@example.com", out)

    def test_credit_card_positional(self):
        out = mask("Card: 4111 1111 1111 1111 valid")
        # First 8 visible, last 4 visible, middle digits starred,
        # separators kept. The raw card must not survive intact.
        self.assertIn("4111 1111", out)
        self.assertIn("1111 valid", out)             # last 4 digits + trailer
        self.assertIn("****", out)                   # masked middle group
        self.assertNotIn("4111 1111 1111 1111", out)

    def test_tckn_positional(self):
        # Known-valid TCKN — first 5 visible, rest stars.
        out = mask("Kimlik no: 10000000146")
        self.assertIn("10000", out)
        self.assertIn("******", out)

    def test_jwt_positional(self):
        s = ("eyJhbGciOiJIUzI1NiJ9.eyJzdWIiOiIxMjM0In0."
             "SflKxwRJSMeKKF2QT4fwpMeJf36POk6yJV_adQssw5c")
        out = mask("Token: " + s)
        self.assertIn("eyJhbGci", out)            # first 8 kept


class TestHybridEncryption(unittest.TestCase):
    def setUp(self):
        # Self-contained keypair for the test; isolates from any
        # real ~/.evosql/pii_*.pem the user might have.
        self.tmp = Path(tempfile.mkdtemp())
        info = generate_keypair(
            public_path  = str(self.tmp / "pub.pem"),
            private_path = str(self.tmp / "priv.pem"))
        from cryptography.hazmat.primitives import serialization
        self.public_key  = serialization.load_pem_public_key(
            (self.tmp / "pub.pem").read_bytes())
        self.private_key = serialization.load_pem_private_key(
            (self.tmp / "priv.pem").read_bytes(), password=None)

    def test_roundtrip_simple(self):
        record = {
            "text": ("Müşteri Mehmet Yıldız, kart 4111 1111 1111 "
                     "1111, mail mehmet@example.com — "
                     "kimlik 10000000146"),
        }
        masked, tokens = encrypt_record(
            record, fields=["text"], public_key=self.public_key)

        # The masked text must not contain any of the originals.
        for needle in ("4111 1111 1111 1111", "mehmet@example.com",
                        "10000000146"):
            self.assertNotIn(needle, masked["text"],
                f"masked text still contains plaintext: {needle!r}")

        self.assertGreater(len(tokens), 0)
        for t in tokens:
            # Every token must carry the ingredients needed to decrypt.
            for k in ("id", "tag", "field", "wrapped_key", "iv",
                      "ciphertext", "masked", "start", "end"):
                self.assertIn(k, t)

        # Round-trip restores the original.
        restored = decrypt_record(
            masked, tokens, private_key=self.private_key)
        self.assertEqual(restored["text"], record["text"])

    def test_roundtrip_unicode(self):
        record = {"text": "Çağrı'nın email'i: çağrı@şirket.com.tr"}
        masked, tokens = encrypt_record(
            record, fields=["text"], public_key=self.public_key)
        restored = decrypt_record(
            masked, tokens, private_key=self.private_key)
        self.assertEqual(restored["text"], record["text"])

    def test_no_pii_no_tokens(self):
        record = {"text": "merhaba dünya"}
        masked, tokens = encrypt_record(
            record, fields=["text"], public_key=self.public_key)
        self.assertEqual(masked["text"], record["text"])
        self.assertEqual(tokens, [])

    def test_long_body(self):
        # Hybrid encryption must handle bodies bigger than what raw
        # RSA can carry.
        body = (
            "Detaylı rapor — kart 4111 1111 1111 1111 sahibi "
            "Mehmet Yıldız, kimlik 10000000146, iban "
            "TR33 0006 1005 1978 6457 8413 26. " * 30)
        record = {"text": body}
        masked, tokens = encrypt_record(
            record, fields=["text"], public_key=self.public_key)
        restored = decrypt_record(
            masked, tokens, private_key=self.private_key)
        self.assertEqual(restored["text"], body)


class TestUserRuleOverride(unittest.TestCase):
    def test_user_disables_rule(self):
        tmp = Path(tempfile.mkstemp(suffix=".json")[1])
        tmp.write_text(json.dumps({
            "version": 1,
            "rules": [{"name": "email", "enabled": False}],
        }))
        try:
            rules = load_rules(str(tmp))
            names = {r.name for r in rules}
            self.assertNotIn("email", names)
        finally:
            tmp.unlink()

    def test_user_adds_new_rule(self):
        tmp = Path(tempfile.mkstemp(suffix=".json")[1])
        tmp.write_text(json.dumps({
            "version": 1,
            "rules": [{
                "name": "internal_emp_id",
                "enabled": True, "priority": 99,
                "tag": "emp_id",
                "pattern": r"\bEMP-\d{6}\b",
                "mask": {"kind": "positional",
                          "keep_first": 4, "keep_last": 0},
            }],
        }))
        try:
            rules = load_rules(str(tmp))
            txt = "Çağrı (EMP-123456) projeyi devraldı"
            ms = detect(txt, rules)
            self.assertTrue(any(m.tag == "emp_id" for m in ms))
            out = mask(txt, ms, rules)
            self.assertNotIn("EMP-123456", out)
            self.assertIn("EMP-", out)
        finally:
            tmp.unlink()


if __name__ == "__main__":
    unittest.main()
