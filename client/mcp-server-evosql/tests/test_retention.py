"""
test_retention — TTL hard-delete with the protected-rows rule (retention.py).

The architecture is deliberately delete-free (decay archives, TMS flips
validity), so these tests pin the conservative eligibility rule: only old,
faded, UNREFERENCED, non-derived rows die — and each deletion writes a
``retracted`` validity record first and sweeps the sidecars. Server-free via
FakeBackend; fictional fixtures.
"""
from __future__ import annotations

import json
import os
import sys
import time

sys.path.insert(0, os.path.dirname(os.path.abspath(__file__)))
from _assistant_fakes import FakeBackend

from mcp_server_evosql import retention

NS = "alp_test"
NOW = time.time()
OLD = NOW - 400 * 86400          # well past any TTL
FRESH = NOW - 1 * 86400


class _Backend(FakeBackend):
    """FakeBackend + the validity surface retention uses."""

    def _validity_map(self, ns, keys):
        rows = self.rows(self.validity_store, ns)
        return {k: rows[k] for k in keys if k in rows}

    def _set_validity(self, ns, key, *, status="active", **kw):
        rec = (self.rows(self.validity_store, ns).get(key) or {})
        rec["status"] = status
        self.put(self.validity_store, ns, key, rec)
        return rec


def _row(fact="note", *, created=OLD, archived=False, **kw):
    rec = {"fact": fact, "created": created}
    if archived:
        rec["archived"] = True
    rec.update(kw)
    return rec


def test_deletes_old_archived_unreferenced_row_with_companions():
    b = _Backend()
    b.put(b.memory, NS, "mem_dead", _row(archived=True))
    # sidecars that must die with it
    b.put(b.access_store, NS, "mem_dead", {"last_accessed": OLD})
    b.put(b.salience_store, NS, "mem_dead", {"salience": 0.1})
    b.put(b.emb2_store, NS, "mem_dead", {"emb2": "x"})
    b.put(b.gist_store, NS, "mem_dead", {"gist": "y"})

    out = retention.sweep(b, NS, ttl_days=90)
    assert out["deleted"] == 1
    assert "mem_dead" not in b.rows(b.memory, NS)
    for store in (b.access_store, b.salience_store, b.emb2_store, b.gist_store):
        assert "mem_dead" not in b.rows(store, NS), store
    # the retraction is written BEFORE the delete so TMS sees it
    v = b.rows(b.validity_store, NS).get("mem_dead")
    assert v and v["status"] == "retracted"


def test_live_rows_never_deleted_by_age_alone():
    b = _Backend()
    b.put(b.memory, NS, "mem_live", _row())            # old but NOT archived/closed
    out = retention.sweep(b, NS, ttl_days=90)
    assert out["deleted"] == 0
    assert "mem_live" in b.rows(b.memory, NS)


def test_referenced_rows_are_protected():
    b = _Backend()
    b.put(b.memory, NS, "mem_src", _row(archived=True))
    # another row derives from it -> provenance reference protects it
    b.put(b.memory, NS, "mem_derived",
          _row(created=FRESH, synthesized=True, derived_from=["mem_src"]))
    out = retention.sweep(b, NS, ttl_days=90)
    assert out["deleted"] == 0
    assert "mem_src" in b.rows(b.memory, NS)


def test_episode_sources_are_protected():
    b = _Backend()
    b.put(b.memory, NS, "mem_ep_src", _row(archived=True))
    b.put(b.episodes_store, NS, "ep_1",
          {"episode_id": "ep_1", "source_row_keys": ["mem_ep_src"],
           "summary_key": "mem_sum"})
    assert retention.sweep(b, NS, ttl_days=90)["deleted"] == 0


def test_validity_chain_links_are_protected():
    b = _Backend()
    b.put(b.memory, NS, "mem_old_v1", _row(archived=True))
    b.put(b.validity_store, NS, "mem_old_v1", {"status": "superseded"})
    # the successor's validity record points back -> chain reference
    b.put(b.validity_store, NS, "mem_v2", {"status": "active",
                                           "supersedes": ["mem_old_v1"]})
    assert retention.sweep(b, NS, ttl_days=90)["deleted"] == 0


def test_closed_unreferenced_row_is_eligible():
    b = _Backend()
    b.put(b.memory, NS, "mem_stale", _row())
    b.put(b.validity_store, NS, "mem_stale", {"status": "stale"})
    out = retention.sweep(b, NS, ttl_days=90)
    assert out["deleted"] == 1
    assert "mem_stale" not in b.rows(b.memory, NS)


def test_synthesized_watermark_unparsable_and_fresh_are_skipped():
    b = _Backend()
    b.put(b.memory, NS, "mem_syn", _row(archived=True, synthesized=True))
    b.put(b.memory, NS, "gh_state_acme", _row(archived=True))      # watermark
    b.put(b.memory, NS, "mem_nots", {"fact": "no timestamp",
                                     "archived": True})            # unparsable
    b.put(b.memory, NS, "mem_new", _row(created=FRESH, archived=True))
    out = retention.sweep(b, NS, ttl_days=90)
    assert out["deleted"] == 0 and out["skipped"] == 4


def test_recent_access_keeps_an_old_row():
    b = _Backend()
    b.put(b.memory, NS, "mem_rehearsed", _row(archived=True))
    b.put(b.access_store, NS, "mem_rehearsed", {"last_accessed": FRESH})
    assert retention.sweep(b, NS, ttl_days=90)["deleted"] == 0


def test_dry_run_counts_without_deleting():
    b = _Backend()
    b.put(b.memory, NS, "mem_dead", _row(archived=True))
    out = retention.sweep(b, NS, ttl_days=90, dry_run=True)
    assert out["deleted"] == 1
    assert "mem_dead" in b.rows(b.memory, NS)
    assert b.rows(b.validity_store, NS) == {}          # no retraction either


def test_job_is_noop_without_env(monkeypatch):
    monkeypatch.delenv("EVOSQL_RETENTION_DAYS", raising=False)
    b = _Backend()
    b.put(b.memory, NS, "mem_dead", _row(archived=True))
    assert retention.job_retention(b, NS) == 0
    assert "mem_dead" in b.rows(b.memory, NS)
    monkeypatch.setenv("EVOSQL_RETENTION_DAYS", "90")
    assert retention.job_retention(b, NS) == 1


def test_ttl_days_parsing(monkeypatch):
    monkeypatch.delenv("EVOSQL_RETENTION_DAYS", raising=False)
    assert retention.ttl_days() is None
    monkeypatch.setenv("EVOSQL_RETENTION_DAYS", "0")
    assert retention.ttl_days() is None                # 0/neg = disabled
    monkeypatch.setenv("EVOSQL_RETENTION_DAYS", "junk")
    assert retention.ttl_days() is None
    monkeypatch.setenv("EVOSQL_RETENTION_DAYS", "30")
    assert retention.ttl_days() == 30.0


def test_connector_iso_timestamps_age_correctly():
    # a gcal-style row with only an ISO created_at must still age out
    b = _Backend()
    b.put(b.memory, NS, "gcal_event_old",
          {"fact": "old event", "source": "gcal", "kind": "event",
           "archived": True, "created_at": "2020-01-01T10:00:00Z"})
    out = retention.sweep(b, NS, ttl_days=90)
    assert out["deleted"] == 1
