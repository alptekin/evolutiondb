# EvolutionDB Memory Roadmap — 40 Steps

> **Status: 40/40 complete.** Phases 0-7 are implemented, each behind a default-
> off flag, test-covered, and merged. With every flag off the default
> save()/search() path is byte-for-byte unchanged.

From "a strong neuro-flavoured retrieval index" to an **artificial memory** that
*transforms*, *reconciles*, and *learns from use*. Each step is roughly one PR:
it ships behind a flag, is covered by a test, and is committed + pushed before
the next begins.

Ordering principle: **foundation + measurement** (make claims falsifiable) →
**unified activation** → the **three cores** that separate a memory from a
search index (abstraction, contradiction/bitemporal, closed-loop learning) →
**additional human-memory tiers** → **research frontier**.

Literature anchors are named per step. Difficulty: Easy / Medium / Hard /
Research.

---

## Phase 0 — Foundation & prerequisites
1. **Derived-store health audit.** A `store_health` check + `job_health`
   scheduler job recording row-count / non-empty-column ratio per derived store
   to `job_runs`, catching the empty-columns regression class. *(Easy)*
2. **Boost master switch + kill-switch.** `EVOSQL_MEMORY_BOOSTS=on` applies
   sensible defaults to all four boosts; each `EVOSQL_*_BOOST` still overrides;
   default off keeps backward compatibility. *(Easy)*
3. **Unified access side-store.** Extend `_access` to
   `{last_accessed, retrieval_count, stability, uses[], rif_penalty}` (cap the
   `uses` epoch array; respect the 8 KB cap). Backbone for steps 9, 30, 31. *(Easy)*
4. **Retrieval-trace logging.** Structured per-query log
   `{query, returned:[{key, rank, scores}]}` — the data backbone for the learned
   loop and eval. *(Easy)*

## Phase 1 — Measurement / Eval (keystone: make claims falsifiable)
5. **Eval categories.** Add `knowledge_update`, `abstention`, `temporal`
   categories to `eval_memory_quality.py` (LongMemEval-style). *(Medium)*
6. **Bench on real search.** Wire `bench/longmemeval` to `MemoryBackend.search`
   (not substring) + opt-in LLM-judge end-answer scoring. *(Medium)* [LongMemEval, LoCoMo]
7. **Longitudinal learning test (PR gate).** Ingest → query → `feedback(gold)`
   → run learning job → assert held-out Recall@k went **up** vs a no-feedback
   control. *(Medium)*
8. **Regression gate + dashboard.** "No improvement claim ships without a delta";
   per-namespace metric history. *(Easy)*

## Phase 2 — Unified activation A_i (ACT-R)
9. **Base-level B_i = ln(Σ tⱼ⁻ᵈ)** (recency + frequency) via `_uses` + Petrov
   approximation. *(Easy)* [ACT-R base-level; Petrov 2006]
10. **Single score** `A_i = B_i + w_s·logit(cos) + Spread + ln(salience) + ε`,
    each component mapped to log/odds space, combined log-additively. *(Medium)*
11. **Fan-normalised spread** `S_ji = max(0, S − ln(fan_j))`; retires the
    `MAX_BOOST_ROWS` hack. *(Medium)* [ACT-R fan effect]
12. **Personalised PageRank** over `_adj` (power iteration) replacing 2-hop
    halving. *(Easy)* [HippoRAG, NeurIPS 2024]
13. **Retrieval threshold + noise** → "can't recall right now" instead of a
    fixed top-K. *(Easy)* [ACT-R threshold/noise]
14. **Cut over to A_i** behind a flag; A/B vs the hand-mixed score on the harness. *(Medium)*

## Phase 3 — Core 1: Abstraction (episodic → semantic)
15. **`_semantic` store** (embedding_dim, cosine) + `tier`, `abstraction_level`. *(Easy)*
16. **`job_semanticize`** (daily): k-means cluster → cross-episode generalisation
    via opt-in LLM → `save(derived_from=...)` with provenance. *(Medium)*
    [Tulving; CLS; Generative Agents reflection]
17. **Fuse semantic + episodic** candidates via RRF; idempotency; recursion cap 3. *(Medium)*
18. **Eval**: a "general knowledge / implication" query category. *(Easy)*

## Phase 4 — Core 2: Contradiction + bitemporal (belief revision)
19. **`_validity` store**: `{valid_from, valid_to, tx_from, supersedes[],
    superseded_by[], status}`. *(Easy)*
20. **Write-time Type-I contradiction**: `(subject_id, predicate)` conflict via
    graph; cheap LLM adjudicator ADD/UPDATE/DELETE/NOOP. *(Medium)* [Mem0; STALE]
21. **Multiplicative active-gate** in retrieval + `supersedes`/`contradicts`
    edge types. *(Medium)*
22. **As-of time travel**: B+ tree range scan on `(namespace, subject, valid_from)`. *(Medium)* [bitemporal DBs]
23. **Eval**: `knowledge_update` must pass. *(Easy)*

## Phase 5 — Core 3: Closed-loop learning (highest leverage)
24. **Reward pipeline**: feedback → labelled triples (used=1, unused=0) + IPS
    debias by shown rank. *(Medium)*
25. **Per-row utility** `U_i += α(R − U_i)`, query-conditioned by profile centroid. *(Medium)* [ACT-R utility]
26. **Learned ranker** (logistic/SGD) replacing 0.7/0.3 + boost constants;
    per-namespace persistence + cold-start fallback. *(Hard)* [Memory-R1; Mem-alpha; counterfactual LTR]
27. **Guardrails**: feedback-loop dampening, exploration ε, IPS variance caps;
    default off. *(Medium)*
28. **Gate behind the longitudinal test** (step 7); ship only on positive delta. *(Medium)*

## Phase 6 — Additional memory tiers
29. **Reconsolidation**: narrow update window on recall+feedback; `#v2` versioning. *(Medium)* [Nader; A-MEM]
30. **Adaptive/interference forgetting**: `rif_penalty` for out-competed
    near-dups; near-dup consolidation. *(Easy)* [Anderson RIF]
31. **Spaced-repetition reinforcement**: `retrieval_strength` term; per-row
    `stability` as λ in decay. *(Easy)* [FSRS/SM-2; MemoryBank]
32. **Source-class + confidence + abstention**: `source_class`, corroboration−
    contradiction confidence, abstain gate. *(Easy)* [Johnson source-monitoring]
33. **Affective/arousal salience** term resists archival. *(Easy)*
34. **Procedural / skill memory**: `skill_store` + save/find + success/fail
    counters + `learn_skills` job. *(Medium)* [Voyager]
35. **Prospective memory**: `_intentions` store + due-time B+ tree index + fire job. *(Easy)*
36. **Core / working-memory tier**: `core_store` mutable blocks +
    get/append/replace. *(Medium)* [MemGPT/Letta]
37. **Gist vs verbatim**: `_gist` store as 4th RRF channel + differential decay. *(Medium)* [fuzzy-trace]

## Phase 7 — Research frontier & hardening
38. **Consolidation health-gate + forgetting detector** vs `job_runs` audit. *(Medium)*
39. **TMS dependent retraction** (Type-II): re-adjudicate the
    `superseded_by/derived_from` closure; conservative, behind a flag. *(Research)* [Doyle/de Kleer TMS]
40. **Confidence calibration study**: bin predicted vs observed correctness
    against outcome labels; calibration layer. *(Research)* [MetaFaith; Xiong 2024-25]

---

### Milestones
- After **Phase 0-1**: we can measure. ✓
- After **Phase 2**: one principled score. ✓
- After **Phase 3-5**: genuinely a memory (transforms + reconciles + learns). ✓
- **Phase 6**: human-brain tiers. ✓ **Phase 7**: the frontier. ✓

Critical dependencies: **9-10-12 (activation)** feed most later steps; **7 (the
longitudinal test)** gates **24-28**.

### Phase 7 — research-frontier flags (all default off)
- `EVOSQL_FORGET_GATE` (step 38): pause the decay job when the forgetting
  detector reports a runaway archival spike. Detector + `consolidation` job
  always record (read-only) for observability.
- `EVOSQL_TMS` (step 39): Type-II dependent retraction — mark derived facts that
  have lost all support `unsupported`.
- `EVOSQL_CALIBRATE` (step 40): map source confidence through the fitted
  calibrator before the abstain gate. `calibration` job always records the
  reliability diagram + ECE/MCE.
