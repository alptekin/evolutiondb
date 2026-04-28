# evosql-memory (C++)

Header-only RAII wrapper around `libevosql-memory`. Drops in to any
C++17 project — no build system required.

## Usage

```cpp
#include <evosql_memory.hpp>

evosql::Connection c{"127.0.0.1", 9967, "admin", "admin"};
c.exec("CREATE MEMORY STORE demo");
c.memory_put("demo", "users", "alice", R"({"role":"pm"})");
auto value = c.memory_get("demo", "users", "alice");
```

The destructor calls `evo_close()`. Move-assignment / move-construct
are supported; copies are deleted.

## Build

Compile against the SDK's static archive:

```bash
make -C ../libevosql-memory       # build the C SDK first

c++ -std=c++17 \
    -I client/cpp-evosql-memory/include \
    -I client/libevosql-memory/include \
    your_app.cpp \
    client/libevosql-memory/build/libevosql-memory.a \
    -lpthread \
    -o your_app
```

Or via the bundled smoke example:

```bash
c++ -std=c++17 \
    -I client/cpp-evosql-memory/include \
    -I client/libevosql-memory/include \
    client/cpp-evosql-memory/examples/put_get.cpp \
    client/libevosql-memory/build/libevosql-memory.a -lpthread \
    -o /tmp/cpp_put_get && /tmp/cpp_put_get
```

## Errors

All failures throw `evosql::Error` (subclass of `std::runtime_error`).
`evosql::NotFound` (subclass of `Error`) signals "row not present"
on `memory_get` / `checkpoint_get_latest` so callers can branch on
type without checking codes.

```cpp
try {
    auto v = c.memory_get("demo", "users", "nope");
} catch (const evosql::NotFound&) {
    // expected
} catch (const evosql::Error& e) {
    std::cerr << e.sqlstate << ": " << e.what() << "\n";
}
```

## Threading

A `Connection` is **not** thread-safe — keep one per thread.
