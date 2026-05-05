# EvolutionDB clients

Every client speaks to the server through one common foundation:

```
              ┌──────────────────────────────────────────────┐
              │              evosql-server                   │
              │   PG wire (5433)   |   EVO native (9967)     │
              └──────────────────────────────────────────────┘
                              ▲
                              │ EVO text protocol
                              │
              ┌──────────────────────────────────────────────┐
              │   libevosql-memory  (C, the FFI seam)        │
              │   Connection + Subscription + agent-memory   │
              └──────────────────────────────────────────────┘
                  ▲     ▲     ▲     ▲     ▲     ▲     ▲     ▲     ▲
                  │     │     │     │     │     │     │     │     │
            Python Rust  Go   C++  .NET  Node  Java  Ruby Swift
```

`libevosql-memory` is the canonical client. Every higher-level
binding is a thin shim: the heavy work (TCP, EVO handshake, AUTH,
RESULT/ROW parsing, NOTIFY framing, CDC NDJSON, vector formatting)
lives in C; the language-specific layers add idiomatic ergonomics
(generics, exceptions, IDisposable, finalizers) without
re-implementing the wire protocol.

| Language    | Path                                | Status | Notes |
|-------------|-------------------------------------|--------|-------|
| C           | [`libevosql-memory/`](libevosql-memory/)         | shipped — Tasks 216, 217 | static + shared, pkg-config |
| Python      | [`python-evosql-memory/`](python-evosql-memory/) | shipped — Task 218 | ctypes auto-discovery, six framework adapters (LangGraph, LangChain, LlamaIndex, CrewAI, AutoGen, Mem0) |
| Rust        | [`rust-evosql-memory/`](rust-evosql-memory/)     | shipped — Task 226 | Cargo crate, build.rs links the static archive |
| Go          | [`go-evosql-memory/`](go-evosql-memory/)         | shipped — Task 226 | cgo, idiomatic API |
| C++         | [`cpp-evosql-memory/`](cpp-evosql-memory/)       | shipped — Task 226 | header-only RAII, C++17 |
| .NET        | [`dotnet-evosql-memory/`](dotnet-evosql-memory/) | shipped — Task 226 | net8.0, P/Invoke |
| Node.js     | [`node-evosql-memory/`](node-evosql-memory/)     | shipped — Task 226 | ffi-napi, Node 18+ |
| Java        | [`java-evosql-memory/`](java-evosql-memory/)     | shipped — Task 227 | JNA, Maven, Java 17+ |
| Ruby        | [`ruby-evosql-memory/`](ruby-evosql-memory/)     | shipped — Task 227 | `ffi` gem, Ruby 2.7+ |
| Swift       | [`swift-evosql-memory/`](swift-evosql-memory/)   | shipped — Task 227 | SwiftPM, native C interop, Swift 5.7+ |

## Pre-built binaries (recommended)

Every release tagged `v*` triggers
[`.github/workflows/release.yml`](../.github/workflows/release.yml),
which builds `libevosql-memory.{so,dylib,dll}` for five platforms
(Linux x64 / arm64, macOS arm64 / x64, Windows x64) and attaches
them as GitHub Release assets:

> https://github.com/alptekin/evolutiondb/releases/latest

Each language binding's README shows the env var (`EVOSQL_MEMORY_LIB`,
`EVOSQL_MEMORY_LIB_DIR`, `-Djna.library.path=...`, `CGO_LDFLAGS=-L...`,
etc.) you set so that binding picks up the pre-built artifact.

## Build the C SDK once

Every other binding consumes the artifact at
`client/libevosql-memory/build/`. Build it with:

```bash
make -C client/libevosql-memory
```

That produces `libevosql-memory.{dylib,so,a}` plus a pkg-config
file. Each language binding's README explains how to point its
build system at that directory.

## Adding a new language

The contract:

1. Find the `<libevosql-memory.dylib|so|a>` artifact by env override
   or relative path to `../libevosql-memory/build/`.
2. Bind the public API in `include/evosql_memory.h` (≈ 18 functions).
3. Wrap the opaque `evo_conn_t*` and `evo_subscription_t*` handles
   in an idiomatic class / struct with explicit close + finalizer.
4. Surface `evo_strerror()` / `evo_sqlstate()` as language-native
   exceptions.
5. Ship a smoke example that drops + creates + writes + reads a
   memory store.

Pattern after the existing bindings — they total ~ 200-400 lines
each.
