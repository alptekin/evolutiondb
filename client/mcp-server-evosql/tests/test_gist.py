"""
test_gist — gist vs verbatim dual encoding (roadmap step 37).

Unit: gist_text normalizes/stems content words; gist_overlap matches morphological
variants. Integration (skipped without a server): with EVOSQL_GIST on, a
paraphrased query surfaces a row the surface keywords miss; off, it doesn't.
"""
from __future__ import annotations

import os
import sys
import time

from mcp_server_evosql import gist as _gist
from mcp_server_evosql.gist import gist_text, gist_overlap, gist_tokens

PORT = int(os.environ.get("EVOSQL_PG_PORT", "5520"))


def test_turkish():
    """Optional real Turkish stemmer (roadmap step 37 follow-up). When a Turkish
    stemmer is installed, Turkish inflections collapse (ertelendi, erteleme ->
    ertele; projeler, projeyi -> proje) so a morphologically-varied Turkish query
    matches — the English-light fallback cannot. Skipped without the library."""
    try:
        import snowballstemmer            # noqa: F401
    except Exception:
        print("  SKIP turkish (snowballstemmer not installed)")
        return
    prev = os.environ.get("EVOSQL_GIST_STEMMER")
    try:
        # TR stemmer ON: verb + noun inflections collapse to one stem
        os.environ["EVOSQL_GIST_STEMMER"] = "auto"
        _gist._TR_CACHE.clear()
        assert _gist._stem("ertelendi") == _gist._stem("erteleme"), \
            (_gist._stem("ertelendi"), _gist._stem("erteleme"))
        # both content words differ only by inflection -> full overlap
        q, d = "projeyi raporlar", "projeler raporu"
        assert gist_overlap(q, gist_text(d)) >= 0.99, gist_overlap(q, gist_text(d))
        # English still works (the light pass runs first, snowball-TR no-ops on it)
        assert "meet" in gist_tokens("the meetings were rescheduled")

        # TR stemmer OFF (en): Turkish inflections do NOT collapse -> no match
        os.environ["EVOSQL_GIST_STEMMER"] = "en"
        _gist._TR_CACHE.clear()
        assert gist_overlap(q, gist_text(d)) == 0.0, gist_overlap(q, gist_text(d))
        print("  ok  turkish stemmer collapses inflections (on); en-fallback does not (off)")
    finally:
        if prev is None:
            os.environ.pop("EVOSQL_GIST_STEMMER", None)
        else:
            os.environ["EVOSQL_GIST_STEMMER"] = prev
        _gist._TR_CACHE.clear()


def test_unit():
    g = gist_tokens("the meeting was rescheduled")
    assert "meet" in g and "reschedul" in g and "the" not in g, g
    # morphological variants collapse to the same gist match
    assert gist_overlap("rescheduling the meetings", gist_text(
        "the meeting was rescheduled")) >= 0.99
    assert gist_overlap("completely unrelated words here",
                        gist_text("the meeting was rescheduled")) == 0.0
    print("  ok  gist tokens stem content words; overlap matches paraphrase")


def _backend(prefix):
    from mcp_server_evosql.server import MemoryBackend
    return MemoryBackend("127.0.0.1", PORT, "admin", "admin", "evosql", prefix)


def test_integration() -> bool:
    try:
        import psycopg
        psycopg.connect(host="127.0.0.1", port=PORT, user="admin",
                        password="admin", dbname="evosql", autocommit=True,
                        connect_timeout=3, prepare_threshold=None).close()
    except Exception as exc:
        print(f"  SKIP integration (no server on :{PORT}: {exc})")
        return True
    os.environ.update({"EVOSQL_EMBEDDING_PROVIDER": "none",
                       "EVOSQL_EMBEDDING_MODEL_2": ""})
    ns = f"gist_{int(time.time())}"

    os.environ["EVOSQL_GIST"] = "1"
    b = _backend(f"mcp_gist{int(time.time())}")
    assert b.gist_search is True
    k = b.save(ns, "the standup was rescheduled to friday afternoon")
    # query uses morphological variants -> surface keywords do not match
    q = "rescheduling standups"
    on = [r["key"] for r in b.search(ns, q, limit=5)]
    assert k in on, f"gist must surface the paraphrased match: {on}"
    print("  ok  EVOSQL_GIST on: paraphrased query surfaces the gist match")

    # gist off -> the surface miss stays a miss
    os.environ["EVOSQL_GIST"] = "0"
    b2 = _backend(f"mcp_gist2{int(time.time())}")
    assert b2.gist_search is False
    off = [r["key"] for r in b2.search(ns, q, limit=5)]
    assert k not in off, f"without gist the morphological variant should miss: {off}"
    os.environ.pop("EVOSQL_GIST", None)
    print("  ok  gist off: surface keywords miss the variant (gist is the lever)")
    return True


def main() -> int:
    test_unit()
    test_turkish()
    test_integration()
    print("OK — step 37 gist vs verbatim")
    return 0


if __name__ == "__main__":
    sys.exit(main())
