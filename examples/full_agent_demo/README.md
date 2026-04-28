# Full agent demo (Claude + EvolutionDB long-term memory)

A complete, single-command demo that proves out the agent-memory
story end-to-end:

- a real EvolutionDB server (built from this repo),
- a Python agent loop with a tool-use surface (`save_memory`,
  `search_memory`, `remember_entity`),
- a Claude (Anthropic) backend — or, when the API key is missing,
  a deterministic stub that drives the same scenario,
- a scripted multi-turn conversation with explicit assertions on
  what the agent should remember,
- pytest-style harness so the suite is rerunnable and CI-safe.

## One-command run

```bash
# Clone the repo, then from the repo root:
docker compose -f docker-compose.demo.yml up --build --abort-on-container-exit
```

Both containers come up, the agent waits for the database, runs the
five-turn scenario, prints PASS/FAIL per expectation, and the
`agent` container's exit status becomes the compose run's exit
status. Without an API key the run produces the StubLLM transcript
below.

```
agent-1   | === EvolutionDB long-term memory demo ===
agent-1   |   Connecting to evosql at evosql:9967
agent-1   |   Using LLM backend: stub
agent-1   |   (set ANTHROPIC_API_KEY to use real Claude)
agent-1   |
agent-1   | --- turn 1 ---
agent-1   |   user:      My favourite jazz musician is Miles Davis.
agent-1   |   assistant: Based on what I remember about you: {"ok": true, ...}
agent-1   |   tool:      save_memory({"user_id":"stub_user","fact":"User's favorite jazz musician is Miles Davis.",...})
agent-1   |   expect:    assistant called save_memory at least once
agent-1   |   result:    PASS
...
agent-1   | === 7 passed, 0 failed ===
agent-1   | exited with code 0
```

## With real Claude

```bash
cp examples/full_agent_demo/.env.example .env
# Edit .env, paste your Anthropic key:
#   ANTHROPIC_API_KEY=sk-ant-...
docker compose -f docker-compose.demo.yml --env-file .env up --build \
    --abort-on-container-exit
```

The same loop drives Claude Sonnet 4 (or any model you set in
`ANTHROPIC_MODEL`) over the Messages API with tool-use enabled.

## What you get

```
examples/full_agent_demo/
├── memory_backend.py     thin facade over MEMORY/MESSAGE/ENTITY/CHECKPOINT stores
├── llm.py                ClaudeLLM + StubLLM behind a small Protocol
├── agent.py              the tool-use loop + a scripted runner
├── scenarios.py          five-turn conversation + assertions
├── test_agent.py         pytest-style end-to-end suite
├── requirements.txt      anthropic SDK only
├── Dockerfile            multi-stage: build C SDK → Python runtime
├── entrypoint.sh         wait-for-evosql + invoke the suite
└── .env.example          ANTHROPIC_API_KEY placeholder
```

## Running locally without Docker

You can also run the suite against a host-side EvolutionDB:

```bash
docker compose up -d                                # main server
make -C client/libevosql-memory                     # build the C SDK
export PYTHONPATH=$PWD/client/python-evosql-memory:$PYTHONPATH
python3 examples/full_agent_demo/test_agent.py
```

## Debugging

While the demo is running, open another terminal and:

```bash
# Inspect what the agent is remembering, in real time:
docker compose -f docker-compose.demo.yml exec evosql evosql-cli -W admin
> SELECT mem_namespace, mem_key, mem_value FROM __mem_demo_mem;
> MESSAGE READ FROM demo_msgs WHERE SESSION = 'demo-session';
> ENTITY RANK FROM demo_ents;
> SELECT thread_id, checkpoint_id, ck_values FROM __ck_demo_ck;

# Or via DBeaver / psql / pgAdmin:
PGPASSWORD=admin psql -h 127.0.0.1 -p 5433 -U admin
```

Reactive observation — subscribe to the demo channel before the
agent runs, then watch each turn fire:

```sql
LISTEN agent_progress;
```

## What the assertions check

| Turn | User said                                | Expectation |
|------|------------------------------------------|-------------|
| 1    | "My favourite jazz musician is Miles…"   | `save_memory` called |
| 2    | "I had a long meeting today."            | _(small talk, no check)_ |
| 3    | "I work at Acme Corp."                   | `save_memory` called |
| 4    | "Recommend an album for me…"             | agent recalls **"Miles Davis"** |
| 5    | "What do you know about me?"             | `search_memory` called |

Plus six harness-level checks (backend round-trip, message log
ordering, checkpoint persistence, end-to-end scenario under stub,
end-to-end scenario under real Claude when keyed).

## Threading + safety

The agent owns one EvoSQL connection. Each test fixture drops + re-
creates the demo stores so runs are independent. The suite is
parallel-safe across distinct `store_prefix` values. There's no
secret material in the repo — `.env` is gitignored.
