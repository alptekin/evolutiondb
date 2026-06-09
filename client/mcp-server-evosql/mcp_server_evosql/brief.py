"""
brief — the morning brief: turns the open_loops + self_model stores into a short
human read. "Here's who's waiting on you, what you're waiting on, and the day's
context." Read-only.

  python -m mcp_server_evosql.brief              # prints the brief for MCP_USER_ID
  python -m mcp_server_evosql.brief --json       # machine-readable
"""
from __future__ import annotations

import argparse
import json
import os
import sys
from datetime import datetime, timezone


def _load(backend, store, ns):
    from .server import _e
    out = []
    for row in backend._query(
            f"SELECT mem_value FROM __mem_{store} "
            f"WHERE mem_namespace = '{_e(ns)}'") or []:
        try:
            out.append(json.loads(row[0]))
        except Exception:
            pass
    return out


def collect(backend, ns):
    loops = _load(backend, backend.loops_store, ns)
    selfm = {d.get("section"): d.get("content")
             for d in _load(backend, backend.selfmodel_store, ns)}

    openl = [d for d in loops if d.get("status") == "open"]

    def needs_reply(d):
        # if classified, keep only real requests/questions; else keep all
        lt = d.get("loop_type")
        return lt in (None, "request", "question")

    waiting_me = [d for d in openl
                  if d.get("direction") == "awaiting_me"
                  and d.get("actionable", True) and needs_reply(d)]
    waiting_them = [d for d in openl if d.get("direction") == "awaiting_them"
                    and d.get("actionable", True)]
    promises = [d for d in openl if d.get("direction") == "i_owe_them"
                and d.get("actionable", True)]
    stale = [d for d in openl if not d.get("actionable", True)]

    # priority high first, then most recent
    waiting_me.sort(key=lambda d: (0 if d.get("priority") == "high" else 1,
                                   d.get("age_days", 999)))
    waiting_them.sort(key=lambda d: d.get("age_days", 999))
    promises.sort(key=lambda d: d.get("age_days", 999))
    return {"self": selfm, "waiting_me": waiting_me, "waiting_them": waiting_them,
            "promises": promises, "stale": stale}


def _line(d):
    what = d.get("what") or d.get("snippet") or ""
    star = "⭐" if d.get("priority") == "high" else "  "
    return f"   {star} {d['counterparty'][:22]:22} · {d.get('age_days','?'):>3}g · {what[:60]}"


def render(data, name="", lang_set=True) -> str:
    sm = data["self"]
    role = ""
    r = sm.get("role")
    if isinstance(r, dict):
        role = r.get("summary", "")
    today = datetime.now(timezone.utc).strftime("%d %b %Y")
    L = []
    L.append(f"☀️  GÜNAYDIN{(' ' + name.upper()) if name else ''} — {today}")
    if role:
        L.append(f"    {role[:96]}")
    L.append("")
    L.append(f"🔴 SENİ BEKLEYENLER ({len(data['waiting_me'])})")
    if not data["waiting_me"]:
        L.append("   — temiz, kimse beklemiyor 🎉")
    for d in data["waiting_me"][:15]:
        L.append(_line(d))
    L.append("")
    L.append(f"🟡 SEN BEKLİYORSUN ({len(data['waiting_them'])})")
    for d in data["waiting_them"][:8]:
        L.append(_line(d))
    if not data["waiting_them"]:
        L.append("   —")
    L.append("")
    L.append(f"🟢 SÖZ VERDİKLERİN ({len(data.get('promises', []))})")
    for d in data.get("promises", [])[:8]:
        L.append(_line(d))
    if not data.get("promises"):
        L.append("   —")
    com = sm.get("commitments") or {}
    oc = com.get("open_count") if isinstance(com, dict) else None
    L.append("")
    tail = f"📋 açık taahhüt: {oc if oc is not None else len(data['waiting_me'])}"
    if data["stale"]:
        tail += f"  ·  {len(data['stale'])} eski (>90g, bekletilenler)"
    L.append(tail)
    if not lang_set:
        L.append("")
        L.append("ℹ️  Özetler şu an İngilizce. Türkçe için:  /language türkçe")
    return "\n".join(L)


def queue_drafts(backend, ns, *, top, name=None):
    """Draft replies for the top waiting-on-you loops and QUEUE them as pending
    outbox items — the brief's one-command bridge into the action loop. Returns
    the queued items. Sends nothing; each still needs approve_send."""
    from . import suggest, outbox
    loops = suggest._load_loops(backend, ns)
    res = suggest.suggest_replies(backend, ns, top=top, name=name)
    queued = []
    for s in res["suggestions"]:
        loop = loops.get(s["loop_key"], {})
        rcpt = outbox.recipient_for(backend, ns, loop)
        queued.append(outbox.queue(
            backend, ns, s["loop_key"], s["draft"],
            channel=loop.get("source"), source=loop.get("source"),
            to=rcpt["to"], to_email=rcpt["to_email"],
            thread_id=loop.get("thread_key"), subject=loop.get("subject")))
    return queued


def approve_queued(backend, ns, item_id=None):
    """Approve a queued reply by id, or every pending one when id is None.
    Returns the approve_send results (delivery dry-runs unless sending is on)."""
    from . import outbox
    if item_id:
        return [outbox.approve_send(backend, ns, item_id)]
    return [outbox.approve_send(backend, ns, it["id"])
            for it in outbox.list_pending(backend, ns)]


def main() -> int:
    ap = argparse.ArgumentParser()
    ap.add_argument("--json", action="store_true")
    ap.add_argument("--language", metavar="LANG",
                    help="set the summary language (the /language command), "
                         "e.g. türkçe / english")
    ap.add_argument("--draft", type=int, nargs="?", const=3, metavar="N",
                    help="also draft a reply for the top N waiting-on-you loops")
    ap.add_argument("--queue", type=int, nargs="?", const=3, metavar="N",
                    help="draft AND queue replies for the top N waiting-on-you "
                         "loops (pending approval — nothing is sent)")
    ap.add_argument("--approve", nargs="?", const="all", metavar="ID",
                    help="approve a queued reply by id (or all pending if no id); "
                         "delivers only when sending is enabled, else dry-run")
    args = ap.parse_args()
    from . import scheduler, prefs
    prefix = os.environ.get("MCP_STORE_PREFIX", "mcp")
    backend = scheduler._backend(prefix)
    ns = os.environ.get("MCP_USER_ID") or (
        scheduler.discover_namespaces(backend) or ["default"])[0]

    if args.language:
        lang = prefs.set_language(backend, ns, args.language)
        print(f"✓ Özet dili ayarlandı: {lang}. "
              f"Sonraki open_loops/self_model çalışmasında özetler {lang} olacak.")
        return 0

    if args.approve is not None:
        results = approve_queued(backend, ns,
                                 None if args.approve == "all" else args.approve)
        if not results:
            print("Onay bekleyen yanıt yok.")
            return 0
        for r in results:
            if not r.get("ok"):
                print(f"✗ {r.get('error')}")
                continue
            it = r.get("item", {})
            tag = "✓ gönderildi" if r.get("sent") else "◐ onaylandı (dry-run)"
            extra = ("  · loop kapandı" if r.get("loop_resolved") else "")
            detail = (f"  [{r.get('detail')}]"
                      if not r.get("sent") and r.get("detail") else "")
            print(f"{tag}: {it.get('id')} →{it.get('to') or '?'}{detail}{extra}")
        return 0

    if args.queue is not None:
        name = ns.split("_")[0].capitalize()
        items = queue_drafts(backend, ns, top=args.queue, name=name)
        if not items:
            print("Sıraya alınacak açık döngü yok.")
            return 0
        print(f"{'='*68}\n📤 SIRAYA ALINDI ({len(items)} — onay bekliyor)")
        for it in items:
            print(f"   {it['id']}  →{it.get('to') or '?'}\n"
                  f"     {(it.get('body') or '')[:80]}")
        print("\nGöndermek için:  brief --approve <id>   ·   hepsi:  brief --approve")
        return 0

    lang, was_set = prefs.get_language(backend, ns)
    data = collect(backend, ns)
    if args.json:
        print(json.dumps(data, ensure_ascii=False, indent=2))
        return 0
    print(render(data, name=ns.split("_")[0], lang_set=was_set))

    if args.draft:
        from . import suggest
        name = ns.split("_")[0].capitalize()
        role = ""
        r = data["self"].get("role")
        if isinstance(r, dict):
            role = r.get("summary", "")
        threads = suggest._index_threads(backend, ns)
        print("\n" + "=" * 68 + "\n✍️  TASLAK CEVAPLAR")
        for d in data["waiting_me"][:args.draft]:
            msgs = threads.get((d["source"], d["thread_key"]), [])
            draft = suggest.draft_reply(msgs, d, role, name, lang)
            print(f"\n🔴 {d['counterparty']} · {d.get('age_days','?')}g · "
                  f"{d.get('what') or d.get('snippet','')[:50]}\n   ↳ {draft}")
        print("\n(öneri — gönderilmedi)")
    return 0


if __name__ == "__main__":
    sys.exit(main())
