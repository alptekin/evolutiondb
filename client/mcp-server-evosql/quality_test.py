#!/usr/bin/env python3
"""
quality_test — judge the REPLY QUALITY of the assistant, end to end.

No sending. It boots a temp EvolutionDB, seeds a handful of realistic inbound
conversations (gmail / teams / slack / imessage; Turkish + English; questions,
requests, a casual one), runs open_loops to detect "who's waiting on me", then
generates a real draft reply for each via the LLM and prints loop + thread +
draft so you can answer the only question that matters:

    "Is approving this faster than writing the reply myself?"

Run it with your Anthropic key (drafting uses Claude Haiku; ~5 small calls):

    cd client/mcp-server-evosql
    ANTHROPIC_API_KEY=sk-ant-... .venv/bin/python quality_test.py

Optional: ANTHROPIC_API_KEY plus EVOSQL_LOOP_LLM_MODEL to try a bigger model.
"""
from __future__ import annotations

import json
import os
import subprocess
import sys
import tempfile
import time

NOW = time.time()


def _ms(days_ago):
    return int((NOW - days_ago * 86400) * 1000)


def _iso(days_ago):
    import datetime
    return datetime.datetime.fromtimestamp(
        NOW - days_ago * 86400, datetime.timezone.utc).isoformat()


def _fixtures():
    """Realistic inbound threads. Each is a list of messages oldest-first."""
    return [
        # gmail, English request, I replied earlier in the thread
        ("gmail_q3_1", {"source": "gmail", "thread_id": "TQ3", "from": "me@me.com",
                        "subject": "Q3 board deck", "snippet": "Here's the draft — "
                        "let me know your thoughts.", "labels": "SENT",
                        "internal_date_ms": _ms(3)}),
        ("gmail_q3_2", {"source": "gmail", "thread_id": "TQ3",
                        "from": "Sarah Chen <sarah@acme.com>",
                        "subject": "Re: Q3 board deck", "labels": "INBOX",
                        "snippet": "Looks great. Could you add the churn-cohort "
                        "slide before Thursday's board meeting?",
                        "internal_date_ms": _ms(1)}),
        # gmail, Turkish request from a supplier, I replied earlier
        ("gmail_fat_1", {"source": "gmail", "thread_id": "TFAT", "from": "me@me.com",
                         "subject": "Mayıs faturası", "snippet": "Ekte gönderiyorum.",
                         "labels": "SENT", "internal_date_ms": _ms(4)}),
        ("gmail_fat_2", {"source": "gmail", "thread_id": "TFAT",
                         "from": "Faruk Yıldız <faruk@tedarik.com>",
                         "subject": "Re: Mayıs faturası", "labels": "INBOX",
                         "snippet": "Rakamlarda KDV görünmüyor; kontrol edip güncel "
                         "halini gönderebilir misiniz?", "internal_date_ms": _ms(1)}),
        # imessage, casual Turkish (is_from_me flags direction directly)
        ("imessage_dz_1", {"source": "imessage", "chat_id": "CDZ", "chat": "Deniz",
                           "handle": "+905551112233", "is_from_me": True,
                           "text": "geçen hafta önerdiğin yer gerçekten iyiymiş, sağ ol",
                           "modified_at": _iso(2)}),
        ("imessage_dz_2", {"source": "imessage", "chat_id": "CDZ", "chat": "Deniz",
                           "handle": "+905551112233", "is_from_me": False,
                           "text": "bu cumartesi müsait misin? bir kahve içelim mi",
                           "modified_at": _iso(0.2)}),
        # slack DM, English, work-blocking (+ a 2nd DM so 'me' is detected)
        ("slack_mike_1", {"source": "slack", "channel_type": "im", "channel_id": "DMK",
                          "channel_name": "Mike", "sender_id": "me",
                          "text": "thanks!", "created_at": _iso(2)}),
        ("slack_mike_2", {"source": "slack", "channel_type": "im", "channel_id": "DMK",
                          "channel_name": "Mike", "sender_id": "mike",
                          "text": "did you get a chance to look at PR #412? it's "
                          "blocking my deploy", "created_at": _iso(0.1)}),
        ("slack_ops_1", {"source": "slack", "channel_type": "im", "channel_id": "DOPS",
                         "channel_name": "Ops", "sender_id": "me",
                         "text": "ok", "created_at": _iso(3)}),
        # teams, Turkish question (+ a 2nd chat so 'me' is detected)
        ("teams_chat_elif_1", {"source": "teams", "chat_type": "oneOnOne",
                               "chat_id": "CEL", "chat_name": "Elif",
                               "sender_id": "me", "text": "tamam",
                               "internal_date_ms": _ms(2)}),
        ("teams_chat_elif_2", {"source": "teams", "chat_type": "oneOnOne",
                               "chat_id": "CEL", "chat_name": "Elif",
                               "sender_id": "elif", "text": "yarınki demo kaçta "
                               "başlıyor? bağlantıyı da atabilir misin?",
                               "internal_date_ms": _ms(0.15)}),
        ("teams_chat_burak_1", {"source": "teams", "chat_type": "oneOnOne",
                                "chat_id": "CBU", "chat_name": "Burak",
                                "sender_id": "me", "text": "olur",
                                "internal_date_ms": _ms(3)}),
    ]


def main() -> int:
    if not os.environ.get("ANTHROPIC_API_KEY"):
        print("Set ANTHROPIC_API_KEY to run the quality test (drafting needs an LLM).")
        return 2

    here = os.path.dirname(os.path.abspath(__file__))
    binary = os.path.abspath(os.path.join(here, "..", "..", "adaptor",
                                           "evosql-server"))
    datadir = tempfile.mkdtemp(prefix="evosql-quality-")
    env = dict(os.environ, EVOSQL_USER_NAME="admin", EVOSQL_PASSWORD="admin")
    srv = subprocess.Popen([binary, "--pg-port", "5599", "--evo-port", "9999"],
                           cwd=datadir, env=env,
                           stdout=subprocess.DEVNULL, stderr=subprocess.DEVNULL)
    try:
        os.environ["EVOSQL_LOOP_LLM"] = "anthropic"        # turn drafting on
        from mcp_server_evosql.server import MemoryBackend, _e
        from mcp_server_evosql import open_loops, suggest, prefs

        b = None
        for _ in range(30):
            try:
                b = MemoryBackend("127.0.0.1", 5599, "admin", "admin",
                                  "evosql", "mcpquality")
                b._query("SELECT 1")
                break
            except Exception:
                time.sleep(0.3)
        if b is None:
            print("could not connect to the temp server")
            return 1

        ns = "alptekin"
        for key, rec in _fixtures():
            b._exec(f"MEMORY PUT INTO {b.memory} VALUES "
                    f"('{_e(ns)}','{_e(key)}','{_e(json.dumps(rec))}')")
        # ground the drafts: who I am + reply language
        b._exec(f"MEMORY PUT INTO {b.selfmodel_store} VALUES "
                f"('{_e(ns)}','self_role','{_e(json.dumps({'section': 'role', 'content': {'summary': 'Alptekin — EvolutionDB kurucusu ve baş geliştiricisi; küçük bir ekibi yönetiyor.'}}))}')")
        prefs.set_language(b, ns, "türkçe")

        n = open_loops.job_open_loops(b, ns)
        print(f"open loops detected: {n}\n")

        res = suggest.suggest_replies(b, ns, top=8, name="Alptekin")
        print(f"drafting in: {res['language']}  ·  role grounding: {res['role'][:60]}\n")
        for i, s in enumerate(res["suggestions"], 1):
            print("=" * 74)
            print(f"[{i}] {s['counterparty']}  ·  {s['source']}  ·  "
                  f"{s.get('age_days', '?')}g")
            print(f"    konu: {s.get('what') or '(thread)'}")
            print("-" * 74 + "\n    THREAD:")
            for t in s["thread"]:
                print(f"      {t['speaker']}: {t['text']}")
            print("\n    ✍️  TASLAK:")
            for line in (s["draft"] or "").splitlines() or [""]:
                print(f"      {line}")
            print()
        print("=" * 74)
        print("Soru: her taslak için — onaylamak, kendin yazmaktan hızlı mıydı?")
        return 0
    finally:
        srv.terminate()
        try:
            srv.wait(timeout=5)
        except subprocess.TimeoutExpired:
            srv.kill()


if __name__ == "__main__":
    sys.exit(main())
