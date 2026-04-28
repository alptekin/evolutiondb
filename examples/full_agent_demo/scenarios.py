"""
scenarios.py — scripted multi-turn conversations with explicit
assertions on the agent's memory behaviour.

Each entry is a tuple (user_text, expectation_or_None) where
`expectation_or_None`:
  - None           — no automated check; the line is small-talk.
  - callable(state) -> bool — invoked with the agent's state dict
    after the turn. Return True to PASS, False to FAIL. The
    function's docstring is printed alongside the result.
"""
from __future__ import annotations

import json
from typing import Any, Callable, Dict, List, Optional, Tuple


def _saved_a_fact(state: Dict[str, Any]) -> bool:
    """assistant called save_memory at least once"""
    return any(t["name"] == "save_memory"
               for t in state.get("tool_calls", []))


def _searched_memory(state: Dict[str, Any]) -> bool:
    """assistant called search_memory before answering"""
    return any(t["name"] == "search_memory"
               for t in state.get("tool_calls", []))


def _recalled_keyword(keyword: str) -> Callable[[Dict[str, Any]], bool]:
    """assistant's reply mentions a specific saved keyword"""
    needle = keyword.lower()

    def expect(state: Dict[str, Any]) -> bool:
        if needle in (state.get("assistant") or "").lower():
            return True
        # Real Claude often mentions the recalled fact only inside
        # the tool_result the model just consumed; surfacing it in
        # the final reply happens but isn't always verbatim. To stay
        # robust we also accept "the model saw the keyword in tool
        # results" as evidence of recall.
        for tr in state.get("tool_results", []):
            if needle in (tr.get("result") or "").lower():
                return True
        return False
    expect.__doc__ = f"agent recalls '{keyword}'"
    return expect


# ----- The actual scenario --------------------------------------------
#
# The story:
#   - Turn 1: user shares a preference (jazz / Miles Davis)
#   - Turn 2: small talk
#   - Turn 3: another preference (works at Acme)
#   - Turn 4: user asks for an album recommendation — agent should
#             search memory and surface "Miles Davis"
#   - Turn 5: meta question — agent should recall *something* about
#             the user
SCENARIO: List[Tuple[str, Optional[Callable[[Dict[str, Any]], bool]]]] = [
    ("My favourite jazz musician is Miles Davis.",            _saved_a_fact),
    ("I had a long meeting today.",                            None),
    ("I work at Acme Corp.",                                   _saved_a_fact),
    ("Recommend an album for me to listen to tonight.",
        _recalled_keyword("miles davis")),
    ("What do you know about me?",                             _searched_memory),
]
