# evosql_memory — Python client + framework adapters

Pythonic ctypes wrapper over `libevosql-memory.{dylib,so}` plus
ready-to-use adapters for six agent frameworks.

```
client/python-evosql-memory/
├── evosql_memory/
│   ├── core.py              # ctypes binding (Connection, Subscription)
│   └── adapters/
│       ├── langgraph_evosql.py
│       ├── langchain_evosql.py
│       ├── llamaindex_evosql.py
│       ├── crewai_evosql.py
│       ├── autogen_evosql.py
│       └── mem0_compat.py
├── examples/
│   └── react_agent_demo.py
└── python_tests/
    └── test_adapters.py
```

## Install / build

The Python package depends only on the C SDK shared library. Build
that once:

```bash
cd ../libevosql-memory
make                    # build/libevosql-memory.{dylib,so}
```

By default the Python binding looks for the library in:

1. `$EVOSQL_MEMORY_LIB` (an explicit path)
2. `../libevosql-memory/build/libevosql-memory.{dylib,so}` (relative to
   this directory — works straight from a source tree)
3. The system loader path (`libevosql-memory` after `make install`)

No pip install needed for hacking — just add the directory to
`PYTHONPATH`:

```bash
export PYTHONPATH=$PWD/client/python-evosql-memory:$PYTHONPATH
python3 client/python-evosql-memory/examples/react_agent_demo.py
```

## Quickstart

```python
from evosql_memory import connect

with connect("127.0.0.1", 9967, "admin", "admin") as conn:
    conn.exec_("DROP MEMORY STORE IF EXISTS demo")
    conn.exec_("CREATE MEMORY STORE demo")
    conn.memory_put("demo", "users", "alice", '{"role":"pm"}')
    print(conn.memory_get("demo", "users", "alice"))
```

Streaming subscription:

```python
from evosql_memory import Subscription

def on_event(channel, payload, lsn):
    print(f"{channel}: {payload}")

with Subscription("127.0.0.1", 9967, "admin", "admin",
                   "agent_events", on_event) as sub:
    ...   # run your loop; events flow into on_event
```

## Framework adapters

Each adapter is a thin (50–200 line) shim that mirrors the framework's
interface contract. The package never imports the framework itself —
duck-typed objects slot in because frameworks check for the methods,
not the class. Pull the adapter your stack needs:

| Framework  | Adapter module                     | Classes |
|------------|-------------------------------------|---------|
| LangGraph  | `evosql_memory.adapters.langgraph_evosql` | `EvoCheckpointSaver`, `EvoBaseStore` |
| LangChain  | `evosql_memory.adapters.langchain_evosql` | `EvoChatMessageHistory`, `EvoVectorStoreRetrieverMemory`, `EvoConversationEntityMemory` |
| LlamaIndex | `evosql_memory.adapters.llamaindex_evosql` | `EvoKVStore`, `EvoDocumentStore`, `EvoChatMemoryBuffer` |
| CrewAI     | `evosql_memory.adapters.crewai_evosql`     | `EvoCrewMemory` (STM + LTM + entity) |
| AutoGen    | `evosql_memory.adapters.autogen_evosql`    | `EvoAutoGenMemory` |
| Mem0       | `evosql_memory.adapters.mem0_compat`       | `Memory` (drop-in for `from mem0 import Memory`) |

### LangGraph in 6 lines

```python
from evosql_memory import connect
from evosql_memory.adapters.langgraph_evosql import EvoCheckpointSaver, EvoBaseStore

conn = connect("127.0.0.1", 9967, "admin", "admin")
checkpointer = EvoCheckpointSaver(conn, "graph_ck")
store        = EvoBaseStore(conn, "graph_mem", embedding_dim=384)
graph = workflow.compile(checkpointer=checkpointer, store=store)
```

### Mem0 drop-in

Existing apps that used `from mem0 import Memory` keep working:

```python
from evosql_memory.adapters.mem0_compat import Memory

with Memory(host="127.0.0.1", port=9967,
             user="admin", password="admin",
             store_name="my_app") as m:
    m.add({"role":"user","content":"I love jazz"}, user_id="u1")
    print(m.search("jazz", user_id="u1"))
```

## ReAct demo

`examples/react_agent_demo.py` runs a minimal LangGraph-style ReAct
loop entirely on EvoSQL — checkpoint per step, chat history per
session, long-term memory keyed by question, and a real-time NOTIFY
channel that broadcasts each step's completion. Run it with the
server up:

```bash
docker compose up -d
python3 client/python-evosql-memory/examples/react_agent_demo.py
```

## Tests

```bash
python3 client/python-evosql-memory/python_tests/test_adapters.py
```

Eleven cases covering connection, streaming, and one happy path per
adapter. The suite is reusable — every test drops and recreates its
store on entry.

## Threading

Each `Connection` wraps one C-side connection; one connection per
thread is the contract (matches the C SDK).

`Subscription` owns its own dedicated worker thread internally. Your
Python callback runs on that thread under an internal mutex per
subscription, so a single subscription never re-enters its own
callback. Two subscriptions run their callbacks in parallel — make
the callback safe for that.
