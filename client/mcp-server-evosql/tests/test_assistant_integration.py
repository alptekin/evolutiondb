"""
test_assistant_integration — the assistant layer against a REAL EvolutionDB.

The FakeBackend unit tests (test_open_loops/self_model/brief/suggest/prefs) pin
the logic; this one proves the same jobs run end-to-end over a live MemoryBackend:
the MEMORY STORE round-trip, the inline-SQL escaping, and the cross-store reads
(open_loops -> self_model -> brief) all behave on the actual engine.

Skipped when no server is reachable on EVOSQL_PG_PORT (default 5520), same as the
rest of the DB suite. Run locally with e.g.:

    ./adaptor/evosql-server --pg-port 5599 --evo-port 9999 &
    EVOSQL_PG_PORT=5599 python tests/test_assistant_integration.py
"""
from __future__ import annotations

import json
import os
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))
NOW = time.time()


def _ms(secs_ago):
    return int((NOW - secs_ago) * 1000)


def _put(backend, ns, key, rec):
    from mcp_server_evosql.server import _e
    backend._exec(f"MEMORY PUT INTO {backend.memory} VALUES "
                  f"('{_e(ns)}','{_e(key)}','{_e(json.dumps(rec, ensure_ascii=False))}')")


def main():
    try:
        import psycopg
        from mcp_server_evosql.server import MemoryBackend
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP (no server on :{PORT}: {exc})")
        return 0

    from mcp_server_evosql import open_loops, self_model, brief, suggest, outbox

    prefix = f"mcpit{int(NOW)}"
    ns = "alp_it"
    b = MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)

    # --- seed a gmail thread: I replied once, they asked the last question ----
    _put(b, ns, "gmail_0", {"source": "gmail", "thread_id": "T1",
                            "from": "me@x.com", "subject": "Proje",
                            "snippet": "merhaba", "labels": "SENT",
                            "internal_date_ms": _ms(7200)})
    _put(b, ns, "gmail_1", {"source": "gmail", "thread_id": "T1",
                            "from": "Ulaş <ulas@x.com>", "subject": "Re: Proje",
                            "snippet": "dosyayı gönderir misin?", "labels": "INBOX",
                            "internal_date_ms": _ms(3600)})
    # an outbound question -> awaiting_them (exercises the counterparty fix live)
    _put(b, ns, "gmail_2", {"source": "gmail", "thread_id": "T2",
                            "from": "Boss <boss@x.com>", "subject": "Bütçe",
                            "snippet": "rakamlar ekte", "labels": "INBOX",
                            "internal_date_ms": _ms(7200)})
    _put(b, ns, "gmail_3", {"source": "gmail", "thread_id": "T2",
                            "from": "me@x.com", "subject": "Re: Bütçe",
                            "snippet": "onay ne zaman gelir?", "labels": "SENT",
                            "internal_date_ms": _ms(3600)})

    # --- open_loops -----------------------------------------------------------
    n = open_loops.job_open_loops(b, ns)
    loops = list(b._query(
        f"SELECT mem_value FROM __mem_{b.loops_store} "
        f"WHERE mem_namespace = '{ns}'") or [])
    recs = [json.loads(v) for (v,) in loops]
    me = [r for r in recs if r["direction"] == "awaiting_me"]
    them = [r for r in recs if r["direction"] == "awaiting_them"]
    assert n == 2, f"expected 2 loops, got {n}"
    assert len(me) == 1 and me[0]["counterparty"] == "Ulaş", me
    # the live proof of the bug fix: the awaiting_them peer is Boss, not "me@x.com"
    assert len(them) == 1 and them[0]["counterparty"] == "Boss", them
    print("  ok  open_loops: awaiting_me=Ulaş, awaiting_them=Boss (counterparty fix)")

    # --- self_model (LLM off) cross-reads the loops --------------------------
    os.environ.pop("EVOSQL_PROFILE_LLM", None)
    self_model.job_self_model(b, ns)
    sm_rows = {k: json.loads(v) for k, v in (b._query(
        f"SELECT mem_key, mem_value FROM __mem_{b.selfmodel_store} "
        f"WHERE mem_namespace = '{ns}'") or [])}
    assert "self_commitments" in sm_rows, sm_rows.keys()
    assert sm_rows["self_commitments"]["content"]["open_count"] == 2
    print("  ok  self_model: commitments reflect 2 open loops")

    # --- brief collects from the live stores ---------------------------------
    data = brief.collect(b, ns)
    assert [d["counterparty"] for d in data["waiting_me"]] == ["Ulaş"]
    assert [d["counterparty"] for d in data["waiting_them"]] == ["Boss"]
    text = brief.render(data, name="alp", lang_set=True)
    assert "Ulaş" in text and "Boss" in text
    print("  ok  brief: renders live loops correctly")

    # --- suggest_reply: read -> SUGGEST over the live loops ------------------
    os.environ.pop("EVOSQL_LOOP_LLM", None)              # no drafting backend here
    sug = suggest.suggest_replies(b, ns, top=3)
    assert sug["suggestions"], sug
    top = sug["suggestions"][0]
    assert top["counterparty"] == "Ulaş"                 # the waiting-on-you loop
    # the draft is grounded in the real thread (transcript present), sends nothing
    speakers = [t["speaker"] for t in top["thread"]]
    assert "Ulaş" in speakers and any(s != "Ulaş" for s in speakers)
    assert isinstance(top["draft"], str) and top["draft"]
    print("  ok  suggest_reply: grounded draft for the awaiting_me loop")

    # --- action loop: queue -> approve (dry-run) -> reject, on the real store --
    os.environ.pop("EVOSQL_SEND_ENABLED", None)
    outbox.TRANSPORTS.clear()                            # no transport -> dry-run
    qi = outbox.queue(b, ns, top["loop_key"], "Tabii, dosya ekte.",
                      channel=top["source"], source=top["source"],
                      to=top["counterparty"])
    assert qi["status"] == "pending"
    assert [it["id"] for it in outbox.list_pending(b, ns)] == [qi["id"]]
    appr = outbox.approve_send(b, ns, qi["id"])
    assert appr["ok"] and not appr["sent"] and appr["dry_run"]   # nothing sent
    assert outbox._load(b, ns, qi["id"])["status"] == "approved"
    qi2 = outbox.queue(b, ns, "loop_drop", "iptal", channel="gmail",
                       source="gmail", to="X")
    assert outbox.reject(b, ns, qi2["id"])["ok"]
    assert outbox._load(b, ns, qi2["id"])["status"] == "rejected"
    print("  ok  outbox: queue -> approve(dry-run) -> reject on live store")

    # --- transport wired + send enabled: approve delivers AND closes the loop -
    sent_box = []
    outbox.TRANSPORTS["gmail"] = lambda it: (sent_box.append(it) or {"id": "ok"})
    os.environ["EVOSQL_SEND_ENABLED"] = "1"
    try:
        # reply to the REAL awaiting_me loop so its closure is exercised end-to-end
        qi3 = outbox.queue(b, ns, top["loop_key"], "Tabii, dosya ekte.",
                           channel="gmail", source="gmail",
                           to=top["counterparty"], to_email="ulas@x.com")
        r3 = outbox.approve_send(b, ns, qi3["id"])
        assert r3["sent"] and not r3["dry_run"], r3
        assert outbox._load(b, ns, qi3["id"])["status"] == "sent"
        assert len(sent_box) == 1
        # the loop it answered is now resolved on the live store (brief stops nagging)
        assert r3["loop_resolved"] is True
        lr = b._query(f"SELECT mem_value FROM __mem_{b.loops_store} WHERE "
                      f"mem_namespace = '{ns}' AND mem_key = '{top['loop_key']}'")
        assert json.loads(lr[0][0])["status"] == "resolved"
        # idempotent: a second approve does not re-deliver
        outbox.approve_send(b, ns, qi3["id"])
        assert len(sent_box) == 1
    finally:
        outbox.TRANSPORTS.clear()
        os.environ.pop("EVOSQL_SEND_ENABLED", None)
    print("  ok  outbox: approve delivers, closes the loop, idempotent, on live store")

    # --- teams channel: reply lands in the chat (thread_id), no address needed -
    chats = []
    outbox.TRANSPORTS["teams"] = lambda it: (
        chats.append(it.get("thread_id")) or {"id": "1700000000000"})
    os.environ["EVOSQL_SEND_ENABLED"] = "1"
    try:
        ti = outbox.queue(b, ns, "loop_teams", "tamamdır 👍", channel="teams",
                          source="teams", to="Deniz", thread_id="19:abc@thread.v2")
        tr = outbox.approve_send(b, ns, ti["id"])
        assert tr["sent"] and chats == ["19:abc@thread.v2"]   # delivered into the chat
        assert outbox._load(b, ns, ti["id"])["status"] == "sent"
    finally:
        outbox.TRANSPORTS.clear()
        os.environ.pop("EVOSQL_SEND_ENABLED", None)
    print("  ok  outbox: teams transport delivers into the chat on live store")

    # --- outlook channel: sendMail to a resolved address ---------------------
    mails = []
    outbox.TRANSPORTS["outlook"] = lambda it: (
        mails.append(it.get("to_email")) or {"id": "AAMk"})
    os.environ["EVOSQL_SEND_ENABLED"] = "1"
    try:
        oi = outbox.queue(b, ns, "loop_outlook", "Onaylandı.", channel="outlook",
                          source="outlook", to="Boss", to_email="boss@corp.com",
                          subject="Bütçe")
        orr = outbox.approve_send(b, ns, oi["id"])
        assert orr["sent"] and mails == ["boss@corp.com"]
        assert outbox._load(b, ns, oi["id"])["status"] == "sent"
    finally:
        outbox.TRANSPORTS.clear()
        os.environ.pop("EVOSQL_SEND_ENABLED", None)
    print("  ok  outbox: outlook transport sends to the resolved address on live store")

    # --- resolution: a second run with the thread 'answered' closes the loop --
    _put(b, ns, "gmail_4", {"source": "gmail", "thread_id": "T1",
                            "from": "me@x.com", "subject": "Re: Proje",
                            "snippet": "tabii, ekte", "labels": "SENT",
                            "internal_date_ms": _ms(60)})
    open_loops.job_open_loops(b, ns)
    recs2 = {json.loads(v)["thread_key"]: json.loads(v)
             for (v,) in (b._query(
                 f"SELECT mem_value FROM __mem_{b.loops_store} "
                 f"WHERE mem_namespace = '{ns}'") or [])
             if json.loads(v)["direction"] == "awaiting_me"}
    assert recs2["T1"]["status"] == "resolved", recs2["T1"]
    print("  ok  open_loops: answered thread flips to resolved")

    print("OK — assistant layer end-to-end on a live EvolutionDB")
    return 0


if __name__ == "__main__":
    sys.exit(main())
