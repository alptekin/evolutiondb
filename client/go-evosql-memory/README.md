# evosql (Go)

cgo binding over `libevosql-memory`. Idiomatic Go API with a
`Conn` struct, typed `*Error` returns, and a finalizer-backed
`Close()`.

> **Pre-built binaries** for Linux / macOS / Windows are attached
> to every GitHub Release —
> [github.com/alptekin/evolutiondb/releases/latest](https://github.com/alptekin/evolutiondb/releases/latest).
> Pass the unpacked directory through `CGO_LDFLAGS=-L… -levosql-memory`
> and skip the `make -C ../libevosql-memory` step.

## Build

```bash
make -C ../libevosql-memory                            # build C SDK
cd client/go-evosql-memory
go build ./...
go run ./examples/put_get
```

The cgo `#cgo` directives use `${SRCDIR}` so the relative path
to the in-tree C SDK works out of the box. For a system install:

```bash
CGO_CFLAGS="-I/usr/local/include" \
CGO_LDFLAGS="-L/usr/local/lib -levosql-memory -lpthread" \
go build ./...
```

## Usage

```go
import evosql "github.com/alptekin/evolutiondb/client/go-evosql-memory"

c, err := evosql.Connect("127.0.0.1", 9967, "admin", "admin")
if err != nil { /* ... */ }
defer c.Close()

c.Exec("CREATE MEMORY STORE demo")
c.MemoryPut("demo", "users", "alice", `{"role":"pm"}`, nil)
val, _ := c.MemoryGet("demo", "users", "alice")
fmt.Println(val)
```

## Goroutine safety

A `*Conn` is **not** goroutine-safe — open one per goroutine. The
C SDK's last-error storage is thread-local, so two goroutines on
two connections won't see each other's errors via `Error.Message`.
