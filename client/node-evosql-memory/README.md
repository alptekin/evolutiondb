# evosql-memory (Node.js)

`ffi-napi`-based binding over `libevosql-memory`. Supports Node 18+.

## Build

```bash
make -C ../libevosql-memory                 # build the C SDK first
cd client/node-evosql-memory
npm install                                  # ffi-napi + ref-napi
npm run example
```

The binding looks for the shared library in this order:
1. `process.env.EVOSQL_MEMORY_LIB` (explicit path),
2. `../libevosql-memory/build/libevosql-memory.{dylib,so}` (in-tree),
3. the system loader path (`/usr/local/lib`, `/usr/lib`).

## Usage

```js
const { Connection } = require('evosql-memory');

const c = new Connection('127.0.0.1', 9967, 'admin', 'admin');
try {
    c.exec('CREATE MEMORY STORE demo');
    c.memoryPut('demo', 'users', 'alice', '{"role":"pm"}');
    console.log(c.memoryGet('demo', 'users', 'alice'));
} finally {
    c.close();
}
```

## Errors

All failures throw an `EvoError` (subclass of `Error`).
`EvoNotFoundError` (subclass of `EvoError`) signals "row not present"
on `memoryGet` / `checkpointGetLatest`. Inspect `e.code` for the
numeric error and `e.sqlstate` for the 5-char Postgres-style state.

## Threading

A `Connection` is **not** safe to share across worker threads — open
one per worker. The C SDK's last-error storage is thread-local so an
error in one worker doesn't leak into another's reading.
