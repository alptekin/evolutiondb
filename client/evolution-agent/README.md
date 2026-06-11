# evolution-agent

A **standalone agent loop** over EvolutionDB's MCP tools.

`mcp-server-evolutiondb` is an MCP *server*: it executes tools that a host model
(Claude Desktop / Claude Code) decides to call — it has no will of its own.
`evolution-agent` adds that missing will. It drives the model itself
(plan → act → observe → repeat), so it runs **without a host like Claude
Desktop**.

> "Standalone" means **host-independent, not model-independent.** The reasoning
> still comes from an LLM (Anthropic by default; any provider with a compatible
> `messages.create(...)` client can be injected). What changes is that *our*
> process owns the loop.

Every tool call goes through the MCP server's own `_call_tool`, so **RBAC,
append-only audit, the PII gate, multi-tenant isolation, and the embedded
EvolutionDB all come for free** — none of it is re-implemented here.

## The send invariant (ADR-004) is intact

Nothing is ever delivered to the outside world by the agent. It may *draft* and
*queue* a reply (`queue_reply`), but a human approves it (`approve_send`), and
delivery stays dry-run unless the operator explicitly opted in. The system
prompt states this rule to the model, and the underlying outbox enforces it
structurally.

## Install & run

```bash
pip install evolutiondb-agent[anthropic]      # + the Anthropic SDK
export ANTHROPIC_API_KEY=sk-...

# Point at a running EvolutionDB (PG wire), or use zero-Docker embedded mode:
export EVOSQL_EMBEDDED=1                       # spawns a local evosql-server
# ...or: EVOSQL_HOST / EVOSQL_PORT (5433) / EVOSQL_USER / EVOSQL_PASSWORD

evolution-agent "what meetings do I have today and who owes me a reply?"
echo "summarize my open loops" | evolution-agent
evolution-agent -v "draft a reply to Alice about the Q3 report"   # show tool I/O
```

Tool calls stream to stderr; the final answer goes to stdout.

| Env var | Default | Purpose |
|---|---|---|
| `EVOSQL_AGENT_MODEL` | `claude-opus-4-8` | Model id (use `claude-sonnet-4-6` for lower cost) |
| `ANTHROPIC_API_KEY` | — | Required for the default Anthropic model |
| `EVOSQL_EMBEDDED` | — | `1` → spawn a local EvolutionDB (zero-Docker) |
| `EVOSQL_HOST/PORT/USER/PASSWORD` | `127.0.0.1:5433/admin/admin` | EvolutionDB connection (PG wire) |
| `MCP_USER_ID` | `default_user` | Memory namespace / identity |

## Library use

```python
from evolution_agent import AgentLoop
from mcp_server_evosql.server import MCPServer

agent = AgentLoop(MCPServer())             # defaults: Anthropic + all 30 tools
result = agent.run("who am I waiting on?")
print(result["final_text"])
for step in result["steps"]:               # every tool call + its result
    print(step["tool"], step["input"])
```

Both the model client and the tool server are injectable, so the loop is
unit-testable with no network, API key, or database — see `tests/test_loop.py`.

## Status

Phase 0 of the standalone-agent roadmap: the agent-loop core + tool bridge +
system prompt. Web/chat UI and AWS hosting are later phases. Part of the
[EvolutionDB](https://github.com/alptekin/evolutiondb) monorepo.
