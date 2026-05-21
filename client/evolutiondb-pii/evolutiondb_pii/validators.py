"""Post-match validators. The regex engine in `detect.py` first
finds a candidate span; if the rule names a validator, the match is
kept only when the validator returns True. This is where shape
checks that regex can't express live — Luhn for credit cards,
modulo-97 for IBAN, the Turkish ID-number checksum, etc.

Validators are looked up by name from `VALIDATORS`. Adding a new
validator means dropping a function here and giving it an entry in
the dict at the bottom of the file."""
from __future__ import annotations

import math
import re
import string


# ---------------------------------------------------------------- #
def _digits_only(s: str) -> str:
    return "".join(c for c in s if c.isdigit())


def luhn(value: str) -> bool:
    """Mod-10 check digit used by every major credit card scheme."""
    digits = _digits_only(value)
    if not (13 <= len(digits) <= 19):
        return False
    total = 0
    parity = (len(digits) - 2) % 2
    for i, ch in enumerate(digits):
        n = int(ch)
        if i % 2 == parity:
            n *= 2
            if n > 9:
                n -= 9
        total += n
    return total % 10 == 0


def tckn_checksum(value: str) -> bool:
    """Turkish citizen ID (TC Kimlik No) — 11 digits, first non-zero,
    with two trailing check digits computed from the first nine.
    Spec: digit10 = ((d1+d3+d5+d7+d9)*7 - (d2+d4+d6+d8)) mod 10
          digit11 = (d1+d2+...+d10) mod 10
    """
    d = _digits_only(value)
    if len(d) != 11 or d[0] == "0":
        return False
    nums = [int(c) for c in d]
    s_odd  = nums[0] + nums[2] + nums[4] + nums[6] + nums[8]
    s_even = nums[1] + nums[3] + nums[5] + nums[7]
    if ((s_odd * 7) - s_even) % 10 != nums[9]:
        return False
    if (sum(nums[:10])) % 10 != nums[10]:
        return False
    return True


def vkn_checksum(value: str) -> bool:
    """Turkish tax-number (Vergi Kimlik Numarası) — 10 digits, with
    a check digit produced by the official algorithm. Distinct from
    TCKN (which is 11 digits) so the two regex rules don't overlap.
    """
    d = _digits_only(value)
    if len(d) != 10:
        return False
    digits = [int(c) for c in d]
    v = [0] * 9
    for i in range(9):
        tmp = (digits[i] + (9 - i)) % 10
        v[i] = (tmp * (2 ** (9 - i))) % 9
        if tmp != 0 and v[i] == 0:
            v[i] = 9
    check = (10 - (sum(v) % 10)) % 10
    return check == digits[9]


_IBAN_LETTER_VALUES = {
    ch: str(10 + i) for i, ch in enumerate(string.ascii_uppercase)
}


def iban_mod97(value: str) -> bool:
    """IBAN check per ISO 13616: rearrange country+check digits to
    the end, replace letters with their numeric mapping, treat the
    result as one big integer, modulo 97 must equal 1."""
    s = re.sub(r"\s+", "", value).upper()
    if not re.fullmatch(r"[A-Z]{2}\d{2}[A-Z0-9]+", s):
        return False
    if not (15 <= len(s) <= 34):
        return False
    rearranged = s[4:] + s[:4]
    expanded = "".join(_IBAN_LETTER_VALUES.get(c, c) for c in rearranged)
    try:
        return int(expanded) % 97 == 1
    except ValueError:
        return False


def _shannon_entropy(s: str) -> float:
    if not s:
        return 0.0
    counts: dict[str, int] = {}
    for ch in s:
        counts[ch] = counts.get(ch, 0) + 1
    n = len(s)
    return -sum((c / n) * math.log2(c / n) for c in counts.values())


def entropy_gte_4_0(value: str) -> bool:
    """Cheap signal that a long token-looking string is a real
    secret and not a chunk of natural language. 3.8 bits/symbol is
    enough to keep `Lorem ipsum dolor sit amet…` out (≤ 3.5 for
    English / Turkish text) while letting base64-shaped keys
    through (≥ 5.0 for random tokens). The 4.0 in the name is
    historical — the runtime threshold sits a touch lower so short
    high-quality tokens (~12-16 chars) aren't rejected."""
    s = re.sub(r"[\s\-_./]", "", value)
    return _shannon_entropy(s) >= 3.8


def person_name_heuristic(value: str) -> bool:
    """Tighten the person-name regex (which fires on any
    Title-cased word sequence) by rejecting obvious common-noun
    bigrams. Best-effort — full name recognition needs an LLM or a
    proper NER, which lands in a later phase. Off by default."""
    if len(value) > 80 or len(value) < 4:
        return False
    if re.search(r"\d", value):
        return False
    # Reject leading words that are clearly not first names
    stop_starts = {
        "GIB", "BKM", "RE:", "FW:", "VPP", "URL", "API",
        "PIN", "OTP", "SMS", "POS", "ATM", "DRC", "BT-",
        "İK", "İKS",
    }
    first_word = value.split()[0] if value.split() else ""
    if first_word.upper() in stop_starts:
        return False
    return True


# ---------------------------------------------------------------- #
VALIDATORS = {
    "luhn":                   luhn,
    "tckn_checksum":          tckn_checksum,
    "vkn_checksum":           vkn_checksum,
    "iban_mod97":             iban_mod97,
    "entropy_gte_4_0":        entropy_gte_4_0,
    "person_name_heuristic":  person_name_heuristic,
}


def run(name: str, value: str) -> bool:
    """Dispatch to a named validator. Unknown names accept (so an
    unrecognized validator never silently drops matches)."""
    fn = VALIDATORS.get(name)
    if fn is None:
        return True
    try:
        return bool(fn(value))
    except Exception:
        # Defensive: a broken validator must not crash the whole scan.
        return False
