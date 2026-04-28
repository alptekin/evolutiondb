# evosql-memory (Java)

JNA-based binding over `libevosql-memory`. Targets Java 17+.

## Build

```bash
make -C ../libevosql-memory                  # build the C SDK first
mvn package
```

JNA resolves the platform-agnostic `evosql-memory` name to
`libevosql-memory.dylib` (macOS), `libevosql-memory.so` (Linux), or
`evosql-memory.dll` (Windows). Point at the in-tree build with
`-Djna.library.path`:

```bash
mvn -Djna.library.path=$(pwd)/../libevosql-memory/build \
    exec:java \
    -Dexec.mainClass=io.evolutiondb.evosqlmemory.example.PutGet
```

## Usage

```java
try (Connection c = new Connection("127.0.0.1", 9967, "admin", "admin")) {
    c.exec("CREATE MEMORY STORE demo");
    c.memoryPut("demo", "users", "alice",
                  "{\"role\":\"pm\"}");
    System.out.println(c.memoryGet("demo", "users", "alice"));
}
```

## Errors

`EvoException` (subclass of `RuntimeException`) wraps every
SDK-side failure. `NotFoundException` (subclass of `EvoException`)
signals "row not present" on `memoryGet` / `checkpointGetLatest`.
The `code` field is the EVO_ERR_* enum, `sqlstate` is the 5-char
Postgres-style state when the server set one.

## Threading

A `Connection` is **not** thread-safe — keep one per thread. Use
`try-with-resources` so `close()` runs even on exception paths.
