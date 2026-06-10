"""
_assistant_fakes — an in-memory stand-in for MemoryBackend, just enough to run
the assistant-layer modules (open_loops, self_model, brief, suggest, prefs)
without a live EvolutionDB server.

Those modules touch the database ONLY through ``backend._query(sql)`` and
``backend._exec(sql)`` plus the store-name attributes (``memory``,
``loops_store``, ``selfmodel_store``, ``profile_store``, ``entity_store``).
FakeBackend reimplements that contract over a dict, parsing the small, fixed set
of ``MEMORY PUT`` / ``MEMORY DELETE`` / ``SELECT ... FROM __mem_<store>``
statements those modules emit. SQL string literals use the engine's quote-
doubling escape (see server._e), which the tokenizer below undoes — so a value
written via _exec round-trips back through _query byte-for-byte.
"""
from __future__ import annotations

import json
import re


def _sql_literals(sql):
    """All single-quoted literals in order, with doubled '' un-escaped to '."""
    out, i, n = [], 0, len(sql)
    while i < n:
        if sql[i] == "'":
            i += 1
            buf = []
            while i < n:
                if sql[i] == "'":
                    if i + 1 < n and sql[i + 1] == "'":   # '' -> literal '
                        buf.append("'")
                        i += 2
                        continue
                    i += 1
                    break
                buf.append(sql[i])
                i += 1
            out.append("".join(buf))
        else:
            i += 1
    return out


def _like_to_regex(pat):
    # SQL LIKE wildcards: % -> any run, _ -> any single char; escape the rest.
    # (re.escape leaves '%' and '_' untouched, so translate per-char instead.)
    body = "".join(".*" if c == "%" else "." if c == "_" else re.escape(c)
                   for c in pat)
    return "^" + body + "$"


class FakeBackend:
    def __init__(self, prefix="mcp"):
        self.memory = f"{prefix}_mem"
        self.entity_store = f"{prefix}_entities"
        self.loops_store = f"{prefix}_loops"
        self.selfmodel_store = f"{prefix}_self"
        self.outbox_store = f"{prefix}_outbox"
        self.profile_store = f"{prefix}_profile_clusters"
        # governance / derived-knowledge stores (audit, retention, tms)
        self.audit_store = f"{prefix}_audit"
        self.templates_store = f"{prefix}_templates"
        self.job_runs_store = f"{prefix}_job_runs"
        self.semantic_store = f"{prefix}_semantic"
        self.skill_store = f"{prefix}_skills"
        self.episodes_store = f"{prefix}_episodes"
        self.validity_store = f"{prefix}_validity"
        self.access_store = f"{prefix}_access"
        self.salience_store = f"{prefix}_salience"
        self.emb2_store = f"{prefix}_emb2"
        self.gist_store = f"{prefix}_gist"
        # store(str) -> {(ns, key): value_str}
        self._rows = {}

    # -- test seeding ---------------------------------------------------
    def put(self, store, ns, key, value):
        """Seed a row. ``value`` may be a dict (json-encoded) or a raw string."""
        if not isinstance(value, str):
            value = json.dumps(value, ensure_ascii=False)
        self._rows.setdefault(store, {})[(ns, key)] = value

    def rows(self, store, ns=None):
        """Inspect what's stored, as a {key: parsed_value} dict."""
        out = {}
        for (rns, rkey), val in self._rows.get(store, {}).items():
            if ns is not None and rns != ns:
                continue
            try:
                out[rkey] = json.loads(val)
            except Exception:
                out[rkey] = val
        return out

    # -- backend contract ----------------------------------------------
    def _exec(self, sql):
        head = sql.lstrip()[:20].upper()
        if head.startswith("MEMORY PUT"):
            store = re.search(r"INTO\s+(\w+)\s+VALUES", sql, re.I).group(1)
            ns, key, value = _sql_literals(sql)[:3]
            self._rows.setdefault(store, {})[(ns, key)] = value
        elif head.startswith("MEMORY DELETE"):
            store = re.search(r"FROM\s+(\w+)", sql, re.I).group(1)
            # Enforce the REAL engine grammar (evoparser.y:2350): literal
            # NS/KEY tokens, NOT the mem_namespace/mem_key column names. The
            # old permissive parse masked two production callers whose deletes
            # were silent parse errors on the real engine.
            if not re.search(r"WHERE\s+NS\s*=\s*'", sql, re.I) or \
                    not re.search(r"AND\s+KEY\s*=\s*'", sql, re.I):
                raise ValueError(
                    "MEMORY DELETE must use the engine grammar "
                    "WHERE NS='..' AND KEY='..' (got: %s)" % sql[:120])
            lits = _sql_literals(sql)
            ns, key = lits[0], lits[1]
            self._rows.get(store, {}).pop((ns, key), None)
        # other DDL (CREATE MEMORY STORE etc.) is a no-op for the fake

    def _query(self, sql):
        m = re.search(r"__mem_(\w+)", sql)
        if not m:
            return []
        table = self._rows.get(m.group(1), {})

        cols = re.search(r"SELECT\s+(.*?)\s+FROM", sql, re.S | re.I).group(1)
        cols = [c.strip() for c in cols.split(",")]

        nsm = re.search(r"mem_namespace\s*=\s*'((?:[^']|'')*)'", sql)
        want_ns = nsm.group(1).replace("''", "'") if nsm else None

        eqm = re.search(r"mem_key\s*=\s*'((?:[^']|'')*)'", sql)
        want_key = eqm.group(1).replace("''", "'") if eqm else None
        likes = [re.compile(_like_to_regex(p.replace("''", "'")))
                 for p in re.findall(r"mem_key\s+LIKE\s+'((?:[^']|'')*)'", sql)]

        out = []
        for (rns, rkey), val in table.items():
            if want_ns is not None and rns != want_ns:
                continue
            if want_key is not None and rkey != want_key:
                continue
            if likes and not any(rx.match(rkey) for rx in likes):
                continue
            row = []
            for c in cols:
                if "mem_key" in c:
                    row.append(rkey)
                elif "mem_value" in c:
                    row.append(val)
                else:
                    row.append(None)
            out.append(row)
        return out
