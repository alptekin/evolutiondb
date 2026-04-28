# evosql-memory (Rust)

Rust bindings over `libevosql-memory`. Cargo crate that links the
static archive at build time, exposes a `Connection` handle with
typed errors, and a `format_vector` helper.

## Build

The C SDK must be built first:

```bash
make -C ../libevosql-memory
```

By default the crate looks for the static archive at
`../libevosql-memory/build/libevosql-memory.a`. Override with:

```bash
EVOSQL_MEMORY_LIB_DIR=/usr/local/lib cargo build --release
```

## Usage

```rust
use evosql_memory::Connection;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let c = Connection::new("127.0.0.1", 9967, "admin", "admin")?;
    c.exec("CREATE MEMORY STORE demo")?;
    c.memory_put("demo", "users", "alice",
                  r#"{"role":"pm"}"#, None)?;
    println!("{}", c.memory_get("demo", "users", "alice")?);
    Ok(())
}
```

Run the bundled example:

```bash
cargo run --example put_get
```

## Threading

`Connection` is `!Send` (via `PhantomData<*const ()>`) — keep one per
thread. The C SDK's last-error storage is thread-local, so an error
on one thread doesn't leak into another's reading.
