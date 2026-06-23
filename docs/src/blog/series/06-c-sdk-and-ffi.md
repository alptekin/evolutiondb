# Part 6 — The C SDK and FFI: one core, six languages, six framework adapters

_Series: [Long-Term Memory in EvolutionDB](00-index.md) — previous: [Part 5, Push, not poll](05-push-not-poll.md)._

The story so far has been about what happens inside the database. This
article is about how applications get to it. The product piece talked
about adapters for LangGraph, LangChain, LlamaIndex, CrewAI, AutoGen,
and Mem0; the technical question is how all six of them — plus Python,
Go, Rust, Node — share one core without devolving into six
independent client implementations that drift apart.

The answer is `libevosql-memory`: a single C library that speaks the
EVO text protocol, exposes a typed surface for the agent-memory
primitives, and ships as both a shared object and a static archive.
Every higher-level binding is a thin FFI shim on top of it.

## The shape of the C surface

The header is at `client/libevosql-memory/include/evosql_memory.h`.
The whole public surface fits in about 200 lines. There are five
sections, each kept deliberately small:

**1. Connection lifecycle.** Two functions:

```c
evo_conn_t *evo_connect(const char *host, int port,
                        const char *user, const char *password);
void        evo_close(evo_conn_t *conn);
```

The connection is opaque. Applications can't introspect it, can't
share it across threads (the contract is one-per-thread), can't pin
its socket, and don't need to. Anything portable about a connection
goes through accessor functions; anything not portable is hidden by
construction.

**2. Generic SQL.** Two functions for the cases the typed wrappers
don't cover:

```c
int evo_exec (evo_conn_t *conn, const char *sql);
int evo_query(evo_conn_t *conn, const char *sql,
              char *out, int max_rows, int max_cols, int col_buf_size,
              int *cols_out);
```

`evo_query` writes results into a caller-owned flat byte buffer. The
indexing math (`out + (r * max_cols + c) * col_buf_size`) is borderline
hostile to write by hand, but it gives the caller exact control over
memory: there is no allocator inside the library that the caller
doesn't own, no surprise-free path, no opaque result handle that has
to be `free`d separately. Higher-level bindings wrap this with their
language's idiomatic shape (Python tuples, Go slices, Rust `Vec<Row>`),
but the underlying C contract is dumb-and-explicit.

**3. Typed memory primitives.** One function per agent-memory verb:

```c
int evo_memory_put     (conn, store, ns, key, value_json, embedding);
int evo_memory_get     (conn, store, ns, key, out, out_size);
int evo_memory_delete  (conn, store, ns, key);

int evo_checkpoint_put (conn, store, thread, ns, id, values, metadata);
int evo_checkpoint_get_latest(conn, store, thread, out, out_size);

/* …the same shape for MESSAGE LOG, ENTITY STORE, etc. */
```

Each typed function compiles internally to one `MEMORY PUT` /
`CHECKPOINT GET` / `LOG APPEND` SQL statement, sent on the existing
EVO text connection. There is no _binary_ memory protocol — every
operation is a text DML round-trip through the same socket the
generic `evo_exec` would use, just with the SQL pre-formatted by C
that knows how to escape its arguments.

**4. Vector helpers.** Embedding clients almost always want a `float
*` they can pass straight from their model API; SQL wants
`[f1,f2,...]`. The helper closes that gap:

```c
int evo_vector_format(const float *vec, int n,
                      char *out, int out_size);
```

Caller-owned buffer, returns bytes written. The function exists so
every higher-level binding doesn't reinvent the format-with-precision
code (the right precision is `%.7g`, by the way, and it took us one
benchmark cycle to notice that `%.6f` was lossy enough to break recall
gates).

**5. Streaming.** Two callbacks, dedicated worker thread:

```c
typedef struct evo_subscription evo_subscription_t;

evo_subscription_t *evo_subscribe(conn, channel, cb, ctx);
evo_subscription_t *evo_cdc_subscribe(conn, table, cb, ctx);
void                 evo_unsubscribe(evo_subscription_t *sub);
```

Each subscription owns its own socket and its own worker thread. The
callback fires under an internal mutex (so one subscription never
re-enters itself), but two distinct subscriptions can run callbacks
concurrently — by design, because an agent that's listening on
`memory_updated` and on `chat_appended` shouldn't have one channel
gate the other. `evo_unsubscribe` joins the worker thread cleanly,
which means an agent shutting down knows its callbacks have finished
firing before it tears down the data structures they reference.

## Threading, errors, and other things you wouldn't notice unless they were wrong

The connection is not thread-safe. The contract is one connection per
thread. We considered making it thread-safe and decided not to: every
sane way to do it (mutex around send/recv, or a request queue with a
worker thread) would impose latency on the single-threaded case to
benefit a multi-threaded one, and the multi-threaded case is better
served by a connection pool the caller owns. The bindings expose
pools where idiomatic; the C library doesn't pretend to have an
opinion.

Last-error storage is `__thread`-local:

> _Last-error storage is `__thread`, so an error on one thread doesn't
> leak into another's `evo_strerror()`._

This sounds boring, but it's the kind of detail that prevents an
inscrutable bug class. If the library used a single global last-error,
two threads making concurrent calls would scramble each other's error
strings, and the symptom would be _occasional wrong error messages_ —
a debugging nightmare. Per-thread last-error, free of charge under
modern compilers, fixes it.

Result codes are an enum with explicit numbers:

```c
EVO_OK             =  0,
EVO_ERR            = -1,
EVO_ERR_CONNECT    = -2,
EVO_ERR_AUTH       = -3,
EVO_ERR_PROTOCOL   = -4,
EVO_ERR_SQL        = -5,
EVO_ERR_BUFFER     = -6,
EVO_ERR_NOT_FOUND  = -7
```

`EVO_ERR_NOT_FOUND` exists, as separate from `EVO_ERR`, because
"key not in store" is a control-flow case for almost every consumer,
not an error. The Python binding turns it into `None` returned from
`memory_get`; the Go binding returns `(value, false)`; the Rust binding
returns `Result<Option<String>, Error>`. Without a distinct code,
each binding would have to string-match the error message, which is
_exactly_ how clients drift apart.

## How Python ctypes binds to it

The Python binding (`client/python-evosql-memory/`) is a ctypes wrapper
that's deliberately thin — it does not re-wrap the protocol, it just
calls into `libevosql-memory`. The shape:

```python
from ctypes import CDLL, c_char_p, c_int, POINTER

_lib = CDLL("libevosql-memory.dylib")
_lib.evo_connect.restype  = c_void_p
_lib.evo_connect.argtypes = [c_char_p, c_int, c_char_p, c_char_p]
# ...one argtypes / restype per public function...

class Connection:
    def __init__(self, host, port, user, password):
        self._h = _lib.evo_connect(host.encode(), port,
                                    user.encode(), password.encode())
        if not self._h:
            raise RuntimeError(_lib.evo_strerror(None).decode())
    def memory_put(self, store, ns, key, value, embedding=None):
        rc = _lib.evo_memory_put(self._h, store.encode(),
                                  ns.encode(), key.encode(),
                                  value.encode(),
                                  embedding.encode() if embedding else None)
        if rc != 0:
            raise RuntimeError(_lib.evo_strerror(self._h).decode())
```

Two interesting details:

**The library path is auto-discovered.** `libevosql-memory.dylib` on
macOS, `libevosql-memory.so` on Linux, `evosql-memory.dll` on Windows.
The lookup walks the working directory, `LD_LIBRARY_PATH`, the
SDK install path, and the build artifact path. Users can override with
`EVOSQL_MEMORY_LIB`. We've done away with users having to set
`LD_LIBRARY_PATH` to make the import work.

**Errors propagate as Python `RuntimeError` with the C message.** The
Pythonic instinct is to mint a hierarchy of exception types
(`MemoryStoreError`, `ConnectionLostError`, etc.) but every one of
those would have to map to one of the eight `evo_error_t` codes
anyway, so we kept the surface tight. The exception _message_ is the
C-side `evo_strerror`, which is precise enough for application code
to switch on.

## Go cgo, Rust bindgen, Node node-ffi-napi

Each of these is one file plus a build script. They all share the
contract: the C shared library is the truth, the language binding is a
shape-conversion layer, no protocol logic ever lives in the binding.

The Rust binding is a couple hundred lines of `unsafe extern "C"` over
the same header, plus a safe wrapper that converts return codes to
`Result<T, EvoError>`. The Go binding uses cgo with a `// #include
"evosql_memory.h"` and converts strings on the boundary. The Node
binding uses `node-ffi-napi` and reads the same header.

The cost of this design is one C library to build per platform. The
benefit is that `evo_memory_put` is bit-for-bit identical from Python,
Go, Rust, and Node, against the same bug fixes, the same wire-protocol
escaping, the same vector formatting precision. We don't have a
"Node binding subtly wrong on multibyte UTF-8" issue because the Node
binding doesn't escape multibyte UTF-8 — the C library does.

## The framework adapters

This is where the surface becomes opinionated. Each of the six
adapters maps an ecosystem-specific abstraction onto the same Python
client:

| Framework    | Adapter import                                                       | Maps to                            |
|--------------|----------------------------------------------------------------------|------------------------------------|
| LangGraph    | `evosql_memory.adapters.langgraph_evosql.EvoCheckpointSaver`         | `BaseCheckpointSaver`               |
|              | `evosql_memory.adapters.langgraph_evosql.EvoBaseStore`               | `BaseStore`                         |
| LangChain    | `evosql_memory.adapters.langchain_evosql.EvoChatMessageHistory`      | `BaseChatMessageHistory`            |
|              | `evosql_memory.adapters.langchain_evosql.EvoVectorStoreRetrieverMemory` | `VectorStoreRetrieverMemory`     |
|              | `evosql_memory.adapters.langchain_evosql.EvoConversationEntityMemory`| `ConversationEntityMemory`          |
| LlamaIndex   | `evosql_memory.adapters.llamaindex_evosql.EvoChatMemoryBuffer`       | `ChatMemoryBuffer`                  |
|              | `evosql_memory.adapters.llamaindex_evosql.EvoBaseKVStore`            | `BaseKVStore`                       |
| CrewAI       | `evosql_memory.adapters.crewai_evosql.EvoShortTermMemory`            | `ShortTermMemory`                   |
|              | `evosql_memory.adapters.crewai_evosql.EvoLongTermMemory`             | `LongTermMemory`                    |
| AutoGen / AG2| `evosql_memory.adapters.autogen_evosql.EvoMemory`                    | `Memory` protocol                    |
| Mem0         | `evosql_memory.adapters.mem0_compat.Memory`                          | `from mem0 import Memory` drop-in   |

Each adapter is between 50 and 200 lines of Python. None of them
imports its target framework — the adapter is duck-typed against the
public protocol, so an application that uses LangGraph pulls in
LangGraph and EvoSQL but does _not_ also pull in LangChain. That
matters for production: dependencies you don't import are dependencies
you don't have to upgrade, audit, or worry about CVEs in.

The framework-compat tests live under `tests/framework_compat/<name>/`
and follow the upstream test suites from each framework as closely as
possible — a check that the LangGraph `langgraph-checkpoint-tests`
suite passes against `EvoCheckpointSaver`, the same for LangChain's
`BaseChatMessageHistory` test fixtures, and so on. The CI matrix
re-runs all of them on every commit; that's what catches API drift in
upstream frameworks before a user does.

## Stress testing

The `tests/framework_compat/stress/` directory has the most expensive
test in the suite: 1,000 concurrent threads each running a 100-step
agent loop against a single EvoSQL instance, checkpointing once per
step into a `CHECKPOINT STORE` and reading from a shared `MEMORY
STORE`. It's intentionally on the edge of what the `g_parse_lock` rwlock
allows (DML wlock vs SELECT rdlock; see Task 37 notes for why),
because the whole point is to surface contention.

The workload runs in the CI's nightly slot. The pass condition is "no
deadlock, no crash, no result divergence" — we don't enforce a
throughput target because the runner hardware varies week to week.
What we do enforce is that the test runs to completion: a single
deadlock here turns into a CI-red status on all branches, which is
how we found and fixed the output-mutex bug from Part 5.

## What's next

Part 7 turns to multi-tenant isolation: how `mem_namespace` interacts
with row-level security, what the policy surface looks like for a
memory store, and the threat model we've actually defended against
versus the one we'd defend against in v3.1.

→ Part 7 — Multi-tenant memory (planned)
