"""
test_self_model — the "about me" dossier synthesis (self_model.py).

Server-free: a FakeBackend is seeded with the upstream signals (Teams 1:1
volume, profile clusters, org entities, browser history, open loops) and we
assert _gather_signals distils them correctly, then that job_self_model's
LLM-off path still persists the trustworthy deterministic sections.
"""
from __future__ import annotations

import os
import sys

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import self_model as sm

NS = "alp_test"


def test_disp():
    assert sm._disp("Deniz Yılmaz <d@x.com>") == "Deniz Yılmaz"
    assert sm._disp(None) == "?"


def _seed(b):
    # Teams 1:1 volume -> closest people (Deniz x3, Can x1)
    for i in range(3):
        b.put(b.memory, NS, f"teams_chat_d{i}",
              {"chat_type": "oneOnOne", "chat_name": "Deniz"})
    b.put(b.memory, NS, "teams_chat_c0",
          {"chat_type": "oneOnOne", "chat_name": "Can"})
    # a group chat must NOT count toward closest people
    b.put(b.memory, NS, "teams_chat_g0",
          {"chat_type": "group", "chat_name": "Proje Kanalı"})
    # profile clusters -> behaviour labels
    b.put(b.profile_store, NS, "c0", {"label": "akşam çalışır"})
    b.put(b.profile_store, NS, "c1", {"summary": "kısa mesaj yazar"})
    # entities -> top organisations (only type==org)
    b.put(b.entity_store, NS, "e0", {"type": "org", "canonical": "Acme", "mention_count": 9})
    b.put(b.entity_store, NS, "e1", {"type": "org", "canonical": "Globex", "mention_count": 2})
    b.put(b.entity_store, NS, "e2", {"type": "person", "canonical": "Ali", "mention_count": 50})
    # browser -> top domains
    for i in range(2):
        b.put(b.memory, NS, f"browser_{i}", {"fact": "visited https://github.com/x"})
    b.put(b.memory, NS, "browser_2", {"fact": "read https://news.ycombinator.com/y"})
    # open loops -> commitments
    b.put(b.loops_store, NS, "loop_a",
          {"status": "open", "counterparty": "Ulaş", "snippet": "rapor", "age_days": 5})
    b.put(b.loops_store, NS, "loop_b",
          {"status": "resolved", "counterparty": "X", "snippet": "y", "age_days": 1})


def test_gather_signals():
    b = FakeBackend()
    _seed(b)
    sig = sm._gather_signals(b, NS)

    people = {p["name"]: p["messages"] for p in sig["closest_people"]}
    assert people["Deniz"] == 3 and people["Can"] == 1
    assert "Proje Kanalı" not in people                 # group excluded

    assert set(sig["behaviour"]) == {"akşam çalışır", "kısa mesaj yazar"}
    assert sig["organisations"][0] == "Acme"             # ranked by mention_count
    assert "Ali" not in sig["organisations"]             # person, not org

    assert "github.com" in sig["top_domains"]
    assert sig["top_domains"][0] == "github.com"         # most frequent first

    assert sig["open_commitments_count"] == 1            # only the open one
    assert sig["open_commitments_sample"][0]["who"] == "Ulaş"


def test_job_persists_deterministic_sections_without_llm():
    b = FakeBackend()
    _seed(b)
    os.environ.pop("EVOSQL_PROFILE_LLM", None)           # LLM off
    written = sm.job_self_model(b, NS)

    sections = b.rows(b.selfmodel_store, NS)
    keys = set(sections)
    assert {"self_commitments", "self_team", "self_habits", "self_behaviour"} <= keys
    assert written == len(keys)

    assert sections["self_commitments"]["content"]["open_count"] == 1
    assert "Deniz" in sections["self_team"]["content"]
    assert "github.com" in sections["self_habits"]["content"]
    # no LLM ran -> no narrative identity/role sections
    assert "self_identity" not in keys and "self_role" not in keys


def main():
    for fn in (test_disp, test_gather_signals,
               test_job_persists_deterministic_sections_without_llm):
        fn()
        print(f"  ok  {fn.__name__}")
    print("OK — self_model dossier synthesis")
    return 0


if __name__ == "__main__":
    sys.exit(main())
