# libevosql-memory

A thin C client over the EVO text protocol with high-level wrappers
for the agent-memory primitives that ship with EvolutionDB:

- `MEMORY STORE` (Task 205) — namespaced KV with optional vector embedding
- `CHECKPOINT STORE` (Task 204) — LangGraph-compatible checkpoint DAG
- Generic `evo_exec` / `evo_query` escape hatch for any SQL the typed
  wrappers don't cover

This library is the FFI seam — Python `ctypes`, Go `cgo`, Rust
`bindgen`, and Node `node-ffi-napi` all bind to `evosql_memory.h`.

## Build

```bash
cd client/libevosql-memory
make            # build/libevosql-memory.{dylib,so} + .a + pkg-config
make test       # runs against 127.0.0.1:9967 (server must be up)
make install PREFIX=/usr/local
```

Artifacts land in `build/`:

```
build/
  libevosql-memory.dylib   # macOS shared
  libevosql-memory.so      # Linux shared
  libevosql-memory.a       # static archive
  evosql-memory.pc         # pkg-config
  test_sdk                 # unit-test binary
```

## Quickstart

```c
#include <stdio.h>
#include <evosql_memory.h>

int main(void) {
    evo_conn_t *c = evo_connect("127.0.0.1", 9967, "admin", "admin");
    if (!c) {
        fprintf(stderr, "connect failed: %s\n", evo_strerror(NULL));
        return 1;
    }

    evo_exec(c, "DROP MEMORY STORE IF EXISTS demo");
    evo_exec(c, "CREATE MEMORY STORE demo");

    evo_memory_put(c, "demo", "users", "alice",
                   "{\"role\":\"pm\"}", NULL);

    char value[1024];
    if (evo_memory_get(c, "demo", "users", "alice",
                       value, sizeof(value)) == EVO_OK) {
        printf("alice -> %s\n", value);
    }

    evo_close(c);
    return 0;
}
```

Compile against the static archive:

```bash
cc -Iclient/libevosql-memory/include demo.c \
   client/libevosql-memory/build/libevosql-memory.a -o demo
```

…or the shared library after `make install`:

```bash
cc demo.c -levosql-memory -o demo
```

## Threading

A single `evo_conn_t *` is **not** thread-safe — open one connection
per thread. The last-error string returned by `evo_strerror()` is
stored in thread-local storage, so an error on one thread doesn't
leak into another's reading.

## API surface

| Group       | Functions |
|-------------|-----------|
| Lifecycle   | `evo_connect`, `evo_close` |
| Generic SQL | `evo_exec`, `evo_query` |
| Memory      | `evo_memory_put`, `evo_memory_get`, `evo_memory_delete` |
| Checkpoint  | `evo_checkpoint_put`, `evo_checkpoint_get_latest` |
| Vectors     | `evo_vector_format` |
| Errors      | `evo_strerror`, `evo_sqlstate` |

See `include/evosql_memory.h` for the canonical signatures and
documentation.

## Wire protocol

The client speaks the EVO text protocol on TCP/9967. Plaintext path:

```
client → "EVO\n"
server → "HELLO EvoSQL 1.0\n"
server → "STARTTLS\n"           (optional, server-driven)
client → "NOTLS\n"              (the SDK declines TLS in v1)
server → "AUTH_SCRAM\n"
client → "AUTH <user> <pass>\n" (server accepts this legacy fallback)
server → "AUTH_OK\n"
```

Per query:

```
client → "SQL <bytes>\n<sql>\n"
server → "RESULT\nCOLS N\nCOL <name> <oid> <typmod>\n…
          ROW\nFIELD <v>\n…\nEND\nTAG <kind>\nREADY\n"
   or  → "OK\nTAG <kind> <n>\nREADY\n"
   or  → "ERR <sqlstate> <msg>\nREADY\n"
```

## Versioning

This is `libevosql-memory` 1.0.0, shipping with EvolutionDB 2.x.
The header and ABI are stable; new API surface is added by appending
new functions to the bottom of the header — existing call sites do
not need to recompile.
