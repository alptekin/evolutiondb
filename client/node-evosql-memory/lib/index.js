/**
 * evosql-memory — Node.js binding over libevosql-memory.
 *
 * Discovers the shared library on the host (env override → in-tree
 * SDK build directory → system loader path), wraps the C surface
 * with ffi-napi, and exposes a Connection class.
 *
 *   const { Connection } = require('evosql-memory');
 *
 *   const c = new Connection('127.0.0.1', 9967, 'admin', 'admin');
 *   c.exec("CREATE MEMORY STORE demo");
 *   c.memoryPut('demo', 'users', 'alice', '{"role":"pm"}');
 *   console.log(c.memoryGet('demo', 'users', 'alice'));
 *   c.close();
 *
 * Threading: a Connection is not safe to share across worker threads.
 */
'use strict';

const path  = require('path');
const fs    = require('fs');
const ffi   = require('ffi-napi');
const ref   = require('ref-napi');

const isMac    = process.platform === 'darwin';
const libExt   = isMac ? 'dylib' : 'so';
const libBase  = `libevosql-memory.${libExt}`;

function resolveLib() {
    const env = process.env.EVOSQL_MEMORY_LIB;
    if (env && fs.existsSync(env)) return env;

    const local = path.resolve(__dirname,
        '..', '..', 'libevosql-memory', 'build', libBase);
    if (fs.existsSync(local)) return local;

    // Fall back to the loader path. ffi.Library accepts the bare name.
    return libBase.replace(/^lib/, '').replace(`.${libExt}`, '');
}

const VoidPtr   = ref.refType(ref.types.void);
const CharPtr   = ref.types.CString;
const IntPtr    = ref.refType(ref.types.int);
const FloatPtr  = ref.refType(ref.types.float);

const lib = ffi.Library(resolveLib(), {
    'evo_connect':                ['pointer', ['string', 'int', 'string', 'string']],
    'evo_close':                  ['void',    ['pointer']],
    'evo_exec':                   ['int',     ['pointer', 'string']],
    'evo_query':                  ['int',     ['pointer', 'string', 'pointer',
                                                'int', 'int', 'int', IntPtr]],
    'evo_memory_put':             ['int',     ['pointer', 'string', 'string',
                                                'string', 'string', 'string']],
    'evo_memory_get':             ['int',     ['pointer', 'string', 'string',
                                                'string', 'pointer', 'int']],
    'evo_memory_delete':          ['int',     ['pointer', 'string', 'string', 'string']],
    'evo_checkpoint_put':         ['int',     ['pointer', 'string', 'string',
                                                'string', 'string', 'string', 'string']],
    'evo_checkpoint_get_latest':  ['int',     ['pointer', 'string', 'string',
                                                'pointer', 'int']],
    'evo_vector_format':          ['int',     [FloatPtr, 'int', 'pointer', 'int']],
    'evo_strerror':               [CharPtr,   ['pointer']],
    'evo_sqlstate':               [CharPtr,   ['pointer']],
});

// ----- Errors --------------------------------------------------------
class EvoError extends Error {
    constructor(message, code = -1, sqlstate = '') {
        super(message);
        this.name     = 'EvoError';
        this.code     = code;
        this.sqlstate = sqlstate;
    }
}

class EvoNotFoundError extends EvoError {
    constructor(message) {
        super(message, -7);
        this.name = 'EvoNotFoundError';
    }
}

function lastError(fallback) {
    const msg   = lib.evo_strerror(null);
    const state = lib.evo_sqlstate(null);
    return new EvoError(msg || fallback, -1, state || '');
}

function rcToError(rc, fallback) {
    const e = lastError(fallback);
    e.code  = rc;
    return e;
}

// ----- helpers -------------------------------------------------------
function readNUL(buf, max) {
    let end = 0;
    while (end < max && buf[end] !== 0) end++;
    return buf.slice(0, end).toString('utf8');
}

function formatVector(vec) {
    if (!Array.isArray(vec) || vec.length === 0) return '';
    const f32 = new Float32Array(vec);
    const arr = Buffer.from(f32.buffer);
    const out = Buffer.alloc(vec.length * 16 + 32);
    const n = lib.evo_vector_format(arr, vec.length, out, out.length);
    if (n > 0) return readNUL(out, out.length);
    return '[' + vec.map(v => v.toFixed(6)).join(',') + ']';
}

// ----- Connection ----------------------------------------------------
class Connection {
    constructor(host, port, user, password) {
        this._handle = lib.evo_connect(host, port, user, password);
        if (this._handle.isNull()) {
            throw lastError('evo_connect failed');
        }
    }

    close() {
        if (this._handle && !this._handle.isNull()) {
            lib.evo_close(this._handle);
            this._handle = null;
        }
    }

    _check() {
        if (!this._handle || this._handle.isNull()) {
            throw new EvoError('connection is closed');
        }
    }

    exec(sql) {
        this._check();
        const rc = lib.evo_exec(this._handle, sql);
        if (rc < 0) throw rcToError(rc, 'evo_exec failed');
        return rc;
    }

    query(sql, opts = {}) {
        this._check();
        const maxRows    = opts.maxRows    || 256;
        const maxCols    = opts.maxCols    || 32;
        const colBufSize = opts.colBufSize || 4096;
        const buf        = Buffer.alloc(maxRows * maxCols * colBufSize);
        const colsOut    = ref.alloc('int', 0);

        const n = lib.evo_query(this._handle, sql, buf,
                                  maxRows, maxCols, colBufSize, colsOut);
        if (n < 0) throw rcToError(n, 'evo_query failed');
        const cols = colsOut.deref();

        const rows = [];
        for (let r = 0; r < n; r++) {
            const row = [];
            for (let c = 0; c < cols; c++) {
                const off  = (r * maxCols + c) * colBufSize;
                row.push(readNUL(buf.slice(off), colBufSize));
            }
            rows.push(row);
        }
        return rows;
    }

    memoryPut(store, namespace, key, valueJson, embedding = null) {
        this._check();
        const embLit = embedding ? formatVector(embedding) : null;
        const rc = lib.evo_memory_put(this._handle, store, namespace,
                                         key, valueJson, embLit);
        if (rc !== 0) throw rcToError(rc, 'memory_put failed');
    }

    memoryGet(store, namespace, key, bufSize = 32 * 1024) {
        this._check();
        const buf = Buffer.alloc(bufSize);
        const rc  = lib.evo_memory_get(this._handle, store, namespace,
                                          key, buf, bufSize);
        if (rc === -7) {
            throw new EvoNotFoundError(`memory_get: ${namespace}/${key}`);
        }
        if (rc !== 0) throw rcToError(rc, 'memory_get failed');
        return readNUL(buf, bufSize);
    }

    memoryDelete(store, namespace, key) {
        this._check();
        const rc = lib.evo_memory_delete(this._handle, store,
                                            namespace, key);
        if (rc !== 0) throw rcToError(rc, 'memory_delete failed');
    }

    checkpointPut(store, threadId, ns, checkpointId,
                    valuesJson, metadataJson = '{}') {
        this._check();
        const rc = lib.evo_checkpoint_put(this._handle, store, threadId,
                                              ns, checkpointId,
                                              valuesJson, metadataJson);
        if (rc !== 0) throw rcToError(rc, 'checkpoint_put failed');
    }

    checkpointGetLatest(store, threadId, bufSize = 64 * 1024) {
        this._check();
        const buf = Buffer.alloc(bufSize);
        const rc  = lib.evo_checkpoint_get_latest(this._handle, store,
                                                       threadId, buf,
                                                       bufSize);
        if (rc === -7) {
            throw new EvoNotFoundError(`checkpoint thread=${threadId}`);
        }
        if (rc !== 0) throw rcToError(rc, 'checkpoint_get_latest failed');
        return readNUL(buf, bufSize);
    }
}

module.exports = {
    Connection,
    EvoError,
    EvoNotFoundError,
    formatVector,
};
