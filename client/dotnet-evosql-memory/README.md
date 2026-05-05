# EvoSQLMemory (.NET)

P/Invoke binding over `libevosql-memory`. Targets net8.0 with
nullable-reference-types enabled.

> **Pre-built binaries** for Linux / macOS / Windows are attached
> to every GitHub Release —
> [github.com/alptekin/evolutiondb/releases/latest](https://github.com/alptekin/evolutiondb/releases/latest).
> Drop the platform-correct `libevosql-memory.{dylib,so,dll}` next
> to your binary (or set `DYLD_LIBRARY_PATH` / `LD_LIBRARY_PATH`)
> and skip the `make -C ../libevosql-memory` step.

## Build

```bash
make -C ../libevosql-memory                  # build the C SDK first

dotnet build src/EvoSQLMemory.csproj
```

The DllImport surface uses the platform-agnostic name
`evosql-memory`; the .NET loader resolves to `libevosql-memory.dylib`
(macOS), `libevosql-memory.so` (Linux), or `evosql-memory.dll`
(Windows). For non-default install paths, set the library path env
var before running:

```bash
DYLD_LIBRARY_PATH=$PWD/../libevosql-memory/build \
    dotnet run --project example
```

## Usage

```csharp
using EvoSQLMemory;

using var conn = new Connection("127.0.0.1", 9967, "admin", "admin");

conn.Exec("CREATE MEMORY STORE demo");
conn.MemoryPut("demo", "users", "alice", """{"role":"pm"}""");
Console.WriteLine(conn.MemoryGet("demo", "users", "alice"));
```

## Errors

All failures throw `EvoException`. `EvoNotFoundException` (subclass)
signals "row not present" on `MemoryGet` / `CheckpointGetLatest`.

## Threading

A `Connection` is **not** thread-safe — keep one per thread. The
finalizer calls `evo_close()` if `Dispose()` was missed, but using
`using var` is recommended.
