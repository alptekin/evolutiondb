"""evolutiondb-pii — detect, mask, and encrypt PII before it lands in
EvolutionDB long-term memory or leaves the machine via a public LLM.

Public surface:

    from evolutiondb_pii import (
        detect,            # scan a string, return matches
        mask,              # render a string with matches replaced by stars
        encrypt_record,    # detect + mask + RSA-wrap originals
        decrypt_record,    # restore plaintext from ciphered tokens
        load_rules,        # load default + user rule sets
    )
"""

__version__ = "0.3.0"

from .detect      import detect, Match
from .mask        import mask
from .crypto      import encrypt_record, decrypt_record, generate_keypair
from .rules       import load_rules, Rule
from .integration import protect_record

__all__ = [
    "detect", "mask", "encrypt_record", "decrypt_record",
    "generate_keypair", "load_rules", "protect_record",
    "Match", "Rule",
]
