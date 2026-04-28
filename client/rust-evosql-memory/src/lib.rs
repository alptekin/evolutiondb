//! evosql-memory — Rust bindings over libevosql-memory.
//!
//! ```no_run
//! use evosql_memory::Connection;
//!
//! let conn = Connection::new("127.0.0.1", 9967, "admin", "admin")?;
//! conn.exec("CREATE MEMORY STORE demo")?;
//! conn.memory_put("demo", "users", "alice", r#"{"role":"pm"}"#, None)?;
//! let value = conn.memory_get("demo", "users", "alice")?;
//! println!("{value}");
//! # Ok::<(), evosql_memory::Error>(())
//! ```
//!
//! Threading: `Connection` is `!Send` by design — keep one per thread.
//! The thread-local last-error storage in the C SDK is opaque to the
//! Rust caller; errors surface as `Error` enum variants instead.

use std::ffi::{CStr, CString};
use std::marker::PhantomData;
use std::os::raw::{c_char, c_int, c_void};
use std::ptr;

// ----------------------------------------------------------------
// Raw FFI surface (mirrors include/evosql_memory.h)
// ----------------------------------------------------------------
extern "C" {
    fn evo_connect(
        host: *const c_char,
        port: c_int,
        user: *const c_char,
        password: *const c_char,
    ) -> *mut c_void;
    fn evo_close(conn: *mut c_void);

    fn evo_exec(conn: *mut c_void, sql: *const c_char) -> c_int;
    fn evo_query(
        conn: *mut c_void,
        sql: *const c_char,
        out: *mut c_char,
        max_rows: c_int,
        max_cols: c_int,
        col_buf_size: c_int,
        cols_out: *mut c_int,
    ) -> c_int;

    fn evo_memory_put(
        conn: *mut c_void,
        store: *const c_char,
        ns: *const c_char,
        key: *const c_char,
        value_json: *const c_char,
        embedding_or_null: *const c_char,
    ) -> c_int;
    fn evo_memory_get(
        conn: *mut c_void,
        store: *const c_char,
        ns: *const c_char,
        key: *const c_char,
        out_value: *mut c_char,
        out_size: c_int,
    ) -> c_int;
    fn evo_memory_delete(
        conn: *mut c_void,
        store: *const c_char,
        ns: *const c_char,
        key: *const c_char,
    ) -> c_int;

    fn evo_checkpoint_put(
        conn: *mut c_void,
        store: *const c_char,
        thread_id: *const c_char,
        checkpoint_ns: *const c_char,
        checkpoint_id: *const c_char,
        values_json: *const c_char,
        metadata_json: *const c_char,
    ) -> c_int;
    fn evo_checkpoint_get_latest(
        conn: *mut c_void,
        store: *const c_char,
        thread_id: *const c_char,
        out_value: *mut c_char,
        out_size: c_int,
    ) -> c_int;

    fn evo_vector_format(
        vec: *const f32,
        n: c_int,
        out: *mut c_char,
        out_size: c_int,
    ) -> c_int;

    fn evo_strerror(conn: *const c_void) -> *const c_char;
    fn evo_sqlstate(conn: *const c_void) -> *const c_char;
}

// ----------------------------------------------------------------
// Errors
// ----------------------------------------------------------------
#[derive(Debug)]
pub enum Error {
    /// Generic SDK error or invalid input.
    General(String),
    /// Connect / TCP / DNS error.
    Connect(String),
    /// Authentication failed.
    Auth(String),
    /// Protocol or framing error.
    Protocol(String),
    /// Server returned ERR <sqlstate> <message>.
    Sql { sqlstate: String, message: String },
    /// Caller buffer too small for the result.
    Buffer(String),
    /// MEMORY GET / CHECKPOINT GET found no row.
    NotFound(String),
}

impl std::fmt::Display for Error {
    fn fmt(&self, f: &mut std::fmt::Formatter<'_>) -> std::fmt::Result {
        match self {
            Error::General(m)  => write!(f, "{m}"),
            Error::Connect(m)  => write!(f, "connect: {m}"),
            Error::Auth(m)     => write!(f, "auth: {m}"),
            Error::Protocol(m) => write!(f, "protocol: {m}"),
            Error::Sql { sqlstate, message } => {
                write!(f, "sql {sqlstate}: {message}")
            }
            Error::Buffer(m)   => write!(f, "buffer: {m}"),
            Error::NotFound(m) => write!(f, "not found: {m}"),
        }
    }
}
impl std::error::Error for Error {}

fn last_error(default: &str) -> Error {
    let msg = unsafe {
        let p = evo_strerror(ptr::null());
        if p.is_null() {
            String::from(default)
        } else {
            CStr::from_ptr(p).to_string_lossy().into_owned()
        }
    };
    let sqlstate = unsafe {
        let p = evo_sqlstate(ptr::null());
        if p.is_null() {
            String::new()
        } else {
            CStr::from_ptr(p).to_string_lossy().into_owned()
        }
    };
    if !sqlstate.is_empty() {
        return Error::Sql { sqlstate, message: msg };
    }
    Error::General(msg)
}

fn rc_to_error(rc: c_int, default: &str) -> Error {
    match rc {
        -2 => Error::Connect(last_error(default).to_string()),
        -3 => Error::Auth(last_error(default).to_string()),
        -4 => Error::Protocol(last_error(default).to_string()),
        -5 => last_error(default),
        -6 => Error::Buffer(last_error(default).to_string()),
        -7 => Error::NotFound(last_error(default).to_string()),
        _  => last_error(default),
    }
}

// ----------------------------------------------------------------
// Connection
// ----------------------------------------------------------------
pub struct Connection {
    raw: *mut c_void,
    // *const () is !Send + !Sync — keeps Connection thread-bound
    // without needing a nightly-only `impl !Send`.
    _not_send: PhantomData<*const ()>,
}

impl Connection {
    pub fn new(host: &str, port: u16, user: &str, password: &str)
        -> Result<Self, Error>
    {
        let host = CString::new(host).map_err(|e| Error::General(e.to_string()))?;
        let user = CString::new(user).map_err(|e| Error::General(e.to_string()))?;
        let pass = CString::new(password).map_err(|e| Error::General(e.to_string()))?;
        let raw = unsafe {
            evo_connect(host.as_ptr(), port as c_int,
                          user.as_ptr(), pass.as_ptr())
        };
        if raw.is_null() {
            return Err(Error::Connect(last_error("evo_connect failed").to_string()));
        }
        Ok(Connection { raw, _not_send: PhantomData })
    }

    pub fn exec(&self, sql: &str) -> Result<i32, Error> {
        let csql = CString::new(sql).map_err(|e| Error::General(e.to_string()))?;
        let rc = unsafe { evo_exec(self.raw, csql.as_ptr()) };
        if rc < 0 {
            return Err(rc_to_error(rc, "evo_exec failed"));
        }
        Ok(rc as i32)
    }

    /// Run a SELECT and return rows as nested `Vec<Vec<String>>`.
    pub fn query(&self, sql: &str) -> Result<Vec<Vec<String>>, Error> {
        const MAX_ROWS:    i32 = 256;
        const MAX_COLS:    i32 = 32;
        const COL_BUF:     i32 = 4096;

        let csql = CString::new(sql).map_err(|e| Error::General(e.to_string()))?;
        let buf_len = (MAX_ROWS as usize) * (MAX_COLS as usize) * (COL_BUF as usize);
        let mut buf = vec![0u8; buf_len];
        let mut cols_out: c_int = 0;
        let n = unsafe {
            evo_query(self.raw, csql.as_ptr(),
                       buf.as_mut_ptr() as *mut c_char,
                       MAX_ROWS, MAX_COLS, COL_BUF, &mut cols_out)
        };
        if n < 0 {
            return Err(rc_to_error(n, "evo_query failed"));
        }
        let cols = cols_out as usize;
        let mut rows = Vec::with_capacity(n as usize);
        for r in 0..(n as usize) {
            let mut row = Vec::with_capacity(cols);
            for c in 0..cols {
                let off  = (r * MAX_COLS as usize + c) * COL_BUF as usize;
                let slot = &buf[off..off + COL_BUF as usize];
                let end  = slot.iter().position(|&b| b == 0).unwrap_or(slot.len());
                row.push(String::from_utf8_lossy(&slot[..end]).into_owned());
            }
            rows.push(row);
        }
        Ok(rows)
    }

    pub fn memory_put(
        &self, store: &str, ns: &str, key: &str, value_json: &str,
        embedding: Option<&[f32]>,
    ) -> Result<(), Error> {
        let store = CString::new(store).map_err(|e| Error::General(e.to_string()))?;
        let ns    = CString::new(ns).map_err(|e| Error::General(e.to_string()))?;
        let key   = CString::new(key).map_err(|e| Error::General(e.to_string()))?;
        let val   = CString::new(value_json).map_err(|e| Error::General(e.to_string()))?;

        let emb_lit = embedding.map(format_vector).transpose()?;
        let emb_c   = emb_lit
            .as_ref()
            .map(|s| CString::new(s.as_str()).unwrap());
        let emb_ptr = emb_c.as_ref().map(|c| c.as_ptr()).unwrap_or(ptr::null());

        let rc = unsafe {
            evo_memory_put(self.raw, store.as_ptr(), ns.as_ptr(),
                            key.as_ptr(), val.as_ptr(), emb_ptr)
        };
        if rc != 0 {
            return Err(rc_to_error(rc, "memory_put failed"));
        }
        Ok(())
    }

    pub fn memory_get(&self, store: &str, ns: &str, key: &str)
        -> Result<String, Error>
    {
        const BUF_SIZE: i32 = 32 * 1024;
        let store = CString::new(store).map_err(|e| Error::General(e.to_string()))?;
        let ns    = CString::new(ns).map_err(|e| Error::General(e.to_string()))?;
        let key   = CString::new(key).map_err(|e| Error::General(e.to_string()))?;
        let mut buf = vec![0u8; BUF_SIZE as usize];
        let rc = unsafe {
            evo_memory_get(self.raw, store.as_ptr(), ns.as_ptr(),
                            key.as_ptr(),
                            buf.as_mut_ptr() as *mut c_char, BUF_SIZE)
        };
        if rc == -7 {
            return Err(Error::NotFound(format!("memory_get: {ns}/{key}")));
        }
        if rc != 0 {
            return Err(rc_to_error(rc, "memory_get failed"));
        }
        let end = buf.iter().position(|&b| b == 0).unwrap_or(buf.len());
        Ok(String::from_utf8_lossy(&buf[..end]).into_owned())
    }

    pub fn memory_delete(&self, store: &str, ns: &str, key: &str)
        -> Result<(), Error>
    {
        let store = CString::new(store).map_err(|e| Error::General(e.to_string()))?;
        let ns    = CString::new(ns).map_err(|e| Error::General(e.to_string()))?;
        let key   = CString::new(key).map_err(|e| Error::General(e.to_string()))?;
        let rc = unsafe {
            evo_memory_delete(self.raw, store.as_ptr(),
                                ns.as_ptr(), key.as_ptr())
        };
        if rc != 0 {
            return Err(rc_to_error(rc, "memory_delete failed"));
        }
        Ok(())
    }

    pub fn checkpoint_put(
        &self, store: &str, thread_id: &str, ns: &str, checkpoint_id: &str,
        values_json: &str, metadata_json: &str,
    ) -> Result<(), Error> {
        let store = CString::new(store).map_err(|e| Error::General(e.to_string()))?;
        let tid   = CString::new(thread_id).map_err(|e| Error::General(e.to_string()))?;
        let ns    = CString::new(ns).map_err(|e| Error::General(e.to_string()))?;
        let cid   = CString::new(checkpoint_id).map_err(|e| Error::General(e.to_string()))?;
        let vals  = CString::new(values_json).map_err(|e| Error::General(e.to_string()))?;
        let meta  = CString::new(metadata_json).map_err(|e| Error::General(e.to_string()))?;
        let rc = unsafe {
            evo_checkpoint_put(self.raw, store.as_ptr(), tid.as_ptr(),
                                 ns.as_ptr(), cid.as_ptr(),
                                 vals.as_ptr(), meta.as_ptr())
        };
        if rc != 0 {
            return Err(rc_to_error(rc, "checkpoint_put failed"));
        }
        Ok(())
    }

    pub fn checkpoint_get_latest(&self, store: &str, thread_id: &str)
        -> Result<String, Error>
    {
        const BUF_SIZE: i32 = 64 * 1024;
        let store = CString::new(store).map_err(|e| Error::General(e.to_string()))?;
        let tid   = CString::new(thread_id).map_err(|e| Error::General(e.to_string()))?;
        let mut buf = vec![0u8; BUF_SIZE as usize];
        let rc = unsafe {
            evo_checkpoint_get_latest(self.raw, store.as_ptr(),
                                         tid.as_ptr(),
                                         buf.as_mut_ptr() as *mut c_char,
                                         BUF_SIZE)
        };
        if rc == -7 {
            return Err(Error::NotFound(format!("checkpoint thread={thread_id}")));
        }
        if rc != 0 {
            return Err(rc_to_error(rc, "checkpoint_get_latest failed"));
        }
        let end = buf.iter().position(|&b| b == 0).unwrap_or(buf.len());
        Ok(String::from_utf8_lossy(&buf[..end]).into_owned())
    }
}

impl Drop for Connection {
    fn drop(&mut self) {
        if !self.raw.is_null() {
            unsafe { evo_close(self.raw) };
            self.raw = ptr::null_mut();
        }
    }
}

// ----------------------------------------------------------------
// Vector helper
// ----------------------------------------------------------------
pub fn format_vector(vec: &[f32]) -> Result<String, Error> {
    if vec.is_empty() {
        return Err(Error::General("vector must be non-empty".into()));
    }
    let buf_size = vec.len() * 16 + 32;
    let mut buf = vec![0u8; buf_size];
    let n = unsafe {
        evo_vector_format(vec.as_ptr(), vec.len() as c_int,
                            buf.as_mut_ptr() as *mut c_char,
                            buf_size as c_int)
    };
    if n < 0 {
        // Fallback to pure-Rust formatter.
        let mut s = String::from("[");
        for (i, v) in vec.iter().enumerate() {
            if i > 0 { s.push(','); }
            s.push_str(&format!("{v:.6}"));
        }
        s.push(']');
        return Ok(s);
    }
    let end = buf.iter().position(|&b| b == 0).unwrap_or(buf.len());
    Ok(String::from_utf8_lossy(&buf[..end]).into_owned())
}
