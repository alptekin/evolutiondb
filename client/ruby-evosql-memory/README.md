# evosql_memory (Ruby)

`ffi`-based binding over `libevosql-memory`. Pure-Ruby (no C
extension build), works with MRI Ruby 2.7+.

> **Pre-built binaries** for Linux / macOS / Windows are attached
> to every GitHub Release —
> [github.com/alptekin/evolutiondb/releases/latest](https://github.com/alptekin/evolutiondb/releases/latest).
> Set `ENV['EVOSQL_MEMORY_LIB']` to the unpacked shared library
> path and skip the `make -C ../libevosql-memory` step.

## Build

```bash
make -C ../libevosql-memory                   # build the C SDK first
cd client/ruby-evosql-memory
bundle install                                  # installs ffi
bundle exec ruby examples/put_get.rb
```

The binding looks for the shared library in this order:
1. `ENV['EVOSQL_MEMORY_LIB']` (explicit path),
2. `../libevosql-memory/build/libevosql-memory.{dylib,so}` (in-tree),
3. the system loader path.

## Usage

```ruby
require 'evosql_memory'

EvoSQLMemory::Connection.open('127.0.0.1', 9967, 'admin', 'admin') do |c|
  c.exec('CREATE MEMORY STORE demo')
  c.memory_put('demo', 'users', 'alice', '{"role":"pm"}')
  puts c.memory_get('demo', 'users', 'alice')
end
```

The block form auto-closes the connection on exit.

## Errors

All failures raise an `EvoSQLMemory::Error` (subclass of
`StandardError`). `EvoSQLMemory::NotFound` (subclass of `Error`)
signals "row not present" on `memory_get` / `checkpoint_get_latest`.
Inspect `e.code` and `e.sqlstate` for details.

## Threading

A `Connection` is **not** thread-safe — keep one per thread.
