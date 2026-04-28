# 60-second quickstart

A speed run from `git clone` to "agent reads its own checkpoint".
Pick the path that matches your stack.

## 1. Boot the server

```bash
git clone https://github.com/alptekin/evolutiondb && cd evolutiondb
docker compose up -d                 # PG:5433  EVO:9967

# Optional sanity check
docker compose ps
```

The default credentials baked into `docker-compose.yml` are
`admin/admin`. Production deployments should set `EVOSQL_PASSWORD` to
a strong secret (and `EVOSQL_ENCRYPTION_KEY` if you want TDE).

## 2. Pick your language

### Python (LangGraph drop-in)

```bash
export PYTHONPATH=$PWD/client/python-evosql-memory:$PYTHONPATH
make -C client/libevosql-memory      # build the C SDK once

python3 - <<'PY'
from evosql_memory import connect
from evosql_memory.adapters.langgraph_evosql import (
    EvoCheckpointSaver, EvoBaseStore)

conn = connect("127.0.0.1", 9967, "admin", "admin")
saver = EvoCheckpointSaver(conn, "agent_ck")
store = EvoBaseStore(conn, "agent_mem")

cfg = {"configurable": {"thread_id": "agent-1", "checkpoint_ns": ""}}
saver.put(cfg, {"id": "cp-1", "channels": {"step": 1, "answers": []}})
print("latest checkpoint:", saver.get(cfg))

store.put(("user_42", "memos"), "favourite", {"genre": "jazz"})
print("memo:", store.get(("user_42", "memos"), "favourite"))
PY
```

### Python (Mem0 drop-in)

```python
# Existing mem0 code:
# from mem0 import Memory
# Switch to:
from evosql_memory.adapters.mem0_compat import Memory

with Memory(host="127.0.0.1", port=9967,
             user="admin", password="admin",
             store_name="my_app") as m:
    m.add({"role": "user", "content": "I love jazz"}, user_id="u1")
    print(m.search("jazz", user_id="u1"))
```

### Reactive (NOTIFY listener)

```python
from evosql_memory import connect, Subscription

def on_event(channel, payload, lsn):
    print(f"[{channel}] {payload}")

with Subscription("127.0.0.1", 9967, "admin", "admin",
                   "agent_events", on_event) as sub:
    with connect("127.0.0.1", 9967, "admin", "admin") as pub:
        pub.exec_("NOTIFY agent_events, 'hello'")
        # Sub callback fires < 1ms later
        import time; time.sleep(0.5)
```

### C SDK

```c
#include <evosql_memory.h>

int main(void) {
    evo_conn_t *c = evo_connect("127.0.0.1", 9967, "admin", "admin");
    evo_exec(c, "CREATE MEMORY STORE demo");
    evo_memory_put(c, "demo", "users", "alice",
                    "{\"role\":\"pm\"}", NULL);
    char value[1024];
    evo_memory_get(c, "demo", "users", "alice", value, sizeof(value));
    printf("%s\n", value);
    evo_close(c);
    return 0;
}
```

Compile against the static archive:

```bash
cc -Iclient/libevosql-memory/include demo.c \
   client/libevosql-memory/build/libevosql-memory.a -lpthread -o demo
./demo
```

### psql / DBeaver / JDBC

The PG wire-protocol port works out of the box:

```bash
PGPASSWORD=admin psql -h 127.0.0.1 -p 5433 -U admin -d evosql
```

DBeaver / pgAdmin / IntelliJ DataGrip: pick "PostgreSQL", host
`127.0.0.1`, port `5433`, user `admin`, password `admin`, database
`evosql`.

## 3. Try the ReAct demo

```bash
python3 client/python-evosql-memory/examples/react_agent_demo.py
```

The demo runs a minimal LangGraph-style ReAct loop entirely on
EvolutionDB — checkpoint per step, MESSAGE LOG chat history,
namespace-scoped long-term memory, and a NOTIFY channel that
broadcasts each step's completion in real time.

## 4. Run the benchmarks

```bash
python3 bench/run_all.py
cat docs/benchmarks/v1.md
```

Initial numbers from a single-process Docker compose: memory put p99
~ 8 ms, memory get p99 ~ 2 ms, checkpoint roundtrip < 5 ms, NOTIFY
push delivery p99 ~ 0.4 ms (≈ 2900× faster than 1-second polling).

## 5. Wire up your framework

| Framework  | Adapter import |
|------------|----------------|
| LangGraph  | `from evosql_memory.adapters.langgraph_evosql import EvoCheckpointSaver, EvoBaseStore` |
| LangChain  | `from evosql_memory.adapters.langchain_evosql import EvoChatMessageHistory, EvoConversationEntityMemory, EvoVectorStoreRetrieverMemory` |
| LlamaIndex | `from evosql_memory.adapters.llamaindex_evosql import EvoKVStore, EvoDocumentStore, EvoChatMemoryBuffer` |
| CrewAI     | `from evosql_memory.adapters.crewai_evosql import EvoCrewMemory` |
| AutoGen    | `from evosql_memory.adapters.autogen_evosql import EvoAutoGenMemory` |
| Mem0       | `from evosql_memory.adapters.mem0_compat import Memory` |

Adapters are ~ 100 lines each and never import their target
framework — they're duck-typed against the public interface so
applications can install whichever subset they actually use without
dragging dependency hell into the rest of the codebase.

## 6. Where to read next

- [Comparison vs Mongo / Pinecone / Zep / Mem0 / Weaviate](comparison.md)
- [Benchmarks (v1)](benchmarks/v1.md)
- [ADR-002 — Agent Memory pivot](adr/ADR-002-agent-memory-platform-roadmap.md)
- [Release notes 3.0.0](release-notes/3.0.0.md)
