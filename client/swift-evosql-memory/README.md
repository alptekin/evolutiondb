# EvoSQLMemory (Swift)

Swift Package Manager binding over `libevosql-memory`. Uses Swift's
native C interop — no FFI gem needed. Targets Swift 5.7+.

> **Pre-built binaries** for macOS / Linux / Windows are attached
> to every GitHub Release —
> [github.com/alptekin/evolutiondb/releases/latest](https://github.com/alptekin/evolutiondb/releases/latest).
> Pass the unpacked directory via `-Xcc -I… -Xlinker -L…` and skip
> the `make -C ../libevosql-memory` step.

## Build

```bash
make -C ../libevosql-memory                              # build the C SDK first
cd client/swift-evosql-memory

swift build \
    -Xcc -I../libevosql-memory/include \
    -Xlinker -L../libevosql-memory/build
```

Run the bundled example (server must be on 127.0.0.1:9967 with
admin/admin):

```bash
swift run PutGetExample \
    -Xcc -I../libevosql-memory/include \
    -Xlinker -L../libevosql-memory/build
```

The package layout:
- `Sources/CEvoSQLMemory/` — SwiftPM system library; the `module.modulemap`
  imports `evosql_memory.h` (via a one-line `shim.h` so the include path
  resolves at build time).
- `Sources/EvoSQLMemory/Connection.swift` — Swift class with idiomatic
  `throws` methods.
- `Sources/PutGetExample/main.swift` — minimal end-to-end demo.

## Usage

```swift
import EvoSQLMemory

let c = try Connection(host: "127.0.0.1", port: 9967,
                            user: "admin", password: "admin")

try c.exec("CREATE MEMORY STORE demo")
try c.memoryPut(store: "demo", namespace: "users",
                  key: "alice", value: "{\"role\":\"pm\"}")
print(try c.memoryGet(store: "demo", namespace: "users", key: "alice"))

c.close()
```

`Connection` is a class with a `deinit` that calls `close()`, so a
forgotten close still releases the C handle. Calling `close()`
explicitly is recommended in long-lived processes.

## Errors

All failures throw an `EvoError` (struct conforming to `Error`).
`EvoNotFound` (separate struct) signals "row not present" on
`memoryGet` / `checkpointGetLatest`.

## Threading

A `Connection` is **not** thread-safe — keep one per actor / thread.
