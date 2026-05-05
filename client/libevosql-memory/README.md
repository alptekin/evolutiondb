# libevosql-memory

A thin C client over the EVO text protocol with high-level wrappers
for the agent-memory primitives that ship with EvolutionDB:

- `MEMORY STORE` (Task 205) — namespaced KV with optional vector embedding
- `CHECKPOINT STORE` (Task 204) — LangGraph-compatible checkpoint DAG
- Generic `evo_exec` / `evo_query` escape hatch for any SQL the typed
  wrappers don't cover

This library is the FFI seam — Python `ctypes`, Go `cgo`, Rust
`bindgen`, and Node `node-ffi-napi` all bind to `evosql_memory.h`.

## Install — pre-built binaries

The fastest path: download the pre-built artifact for your platform
from the project's GitHub Releases page:

> https://github.com/alptekin/evolutiondb/releases/latest

Five platforms ship per release:

| Asset                                        | Platform                  |
|---------------------------------------------- |-------------------------- |
| `libevosql-memory-linux-x64-vX.Y.Z.tar.gz`    | Linux glibc x86_64        |
| `libevosql-memory-linux-arm64-vX.Y.Z.tar.gz`  | Linux glibc aarch64       |
| `libevosql-memory-macos-arm64-vX.Y.Z.tar.gz`  | macOS 14+ Apple Silicon   |
| `libevosql-memory-macos-x64-vX.Y.Z.tar.gz`    | macOS 13+ Intel           |
| `libevosql-memory-windows-x64-vX.Y.Z.zip`     | Windows 10/11 x86_64      |

Each archive untars to a single directory containing
`libevosql-memory.{so,dylib,dll}`, the static archive
`libevosql-memory.a`, and `evosql_memory.h`. Verify the asset's
SHA-256 against `SHA256SUMS` (also attached to the same release).

```bash
curl -L https://github.com/alptekin/evolutiondb/releases/latest/download/libevosql-memory-linux-x64-v3.0.1.tar.gz \
    | tar -xz
cp libevosql-memory-linux-x64/libevosql-memory.so /usr/local/lib/
cp libevosql-memory-linux-x64/evosql_memory.h     /usr/local/include/
```

## Build from source

```bash
cd client/libevosql-memory
make            # build/libevosql-memory.{dylib,so,dll} + .a + pkg-config
make test       # runs against 127.0.0.1:9967 (server must be up)
make install PREFIX=/usr/local
```

The Makefile detects the host (Darwin / Linux / MinGW / MSYS) and
picks the right shared-library extension and link flags. Windows
builds use MinGW-w64 and link `ws2_32` + `pthread`.

Artifacts land in `build/`:

```
build/
  libevosql-memory.dylib   # macOS shared
  libevosql-memory.so      # Linux shared
  libevosql-memory.dll     # Windows shared (with .dll.a import lib)
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

Subscriptions (`evo_subscription_t`, see Streaming below) own their
own dedicated socket and worker thread internally. The callback fires
under an internal mutex per subscription, so a single subscription
never re-enters its own callback. Two distinct subscriptions run
their callbacks in parallel — your callback must be safe for that.

## Streaming / Subscribe

Two reactive surfaces:

```c
typedef void (*evo_event_callback_t)(const char *channel,
                                      const char *payload,
                                      uint64_t lsn, void *ctx);

evo_subscription_t *evo_subscribe(const char *host, int port,
                                   const char *user, const char *pass,
                                   const char *channel,
                                   evo_event_callback_t cb, void *ctx);

evo_subscription_t *evo_cdc_subscribe(const char *host, int cdc_port,
                                       evo_event_callback_t cb, void *ctx,
                                       uint64_t from_lsn);

int  evo_ack_up_to(evo_subscription_t *sub, uint64_t lsn);
void evo_unsubscribe(evo_subscription_t *sub);
```

`evo_subscribe()` opens its own connection on the EVO port, runs
`LISTEN <channel>`, and dispatches every NOTIFY arriving on that
session to your callback. `evo_cdc_subscribe()` connects to the CDC
JSON-lines stream (default port 9970) and emits one callback per WAL
change.

`evo_unsubscribe()` is deterministic: it flags the worker, shuts down
the socket so the blocked `recv()` returns, joins the worker thread,
then frees. The callback will not fire after `evo_unsubscribe()`
returns.

Minimal reactive loop (see `examples/reactive_agent.c`):

```c
void on_event(const char *channel, const char *payload,
              uint64_t lsn, void *ctx) {
    printf("[event] %s -> %s\n", channel, payload);
}

evo_subscription_t *sub = evo_subscribe(
    "127.0.0.1", 9967, "admin", "admin",
    "agent_events", on_event, NULL);

/* …main loop runs as long as the agent is alive… */

evo_unsubscribe(sub);
```

## API surface

| Group       | Functions |
|-------------|-----------|
| Lifecycle   | `evo_connect`, `evo_close` |
| Generic SQL | `evo_exec`, `evo_query` |
| Memory      | `evo_memory_put`, `evo_memory_get`, `evo_memory_delete` |
| Checkpoint  | `evo_checkpoint_put`, `evo_checkpoint_get_latest` |
| Vectors     | `evo_vector_format` |
| Streaming   | `evo_subscribe`, `evo_cdc_subscribe`, `evo_ack_up_to`, `evo_unsubscribe` |
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
