// Connection.cs — public managed surface.

using System;
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text;

namespace EvoSQLMemory;

public class EvoException : Exception
{
    public int    Code     { get; }
    public string SqlState { get; }

    public EvoException(string message, int code = -1, string sqlstate = "")
        : base(message)
    {
        Code     = code;
        SqlState = sqlstate;
    }
}

public sealed class EvoNotFoundException : EvoException
{
    public EvoNotFoundException(string message) : base(message, -7) { }
}

public sealed class Connection : IDisposable
{
    private IntPtr _handle;

    public Connection(string host, int port, string user, string password)
    {
        _handle = Native.evo_connect(host, port, user, password);
        if (_handle == IntPtr.Zero) {
            throw RaiseLast("evo_connect failed", -2);
        }
    }

    public int Exec(string sql)
    {
        ThrowIfClosed();
        var rc = Native.evo_exec(_handle, sql);
        if (rc < 0) throw RaiseLast("evo_exec failed", rc);
        return rc;
    }

    public List<List<string>> Query(string sql,
                                      int maxRows = 256,
                                      int maxCols = 32,
                                      int colBufSize = 4096)
    {
        ThrowIfClosed();
        int bufLen = checked(maxRows * maxCols * colBufSize);
        IntPtr buf = Marshal.AllocHGlobal(bufLen);
        try {
            // Zero so embedded NULs end strings cleanly even when the
            // server doesn't fill the row.
            for (int i = 0; i < bufLen; i++) Marshal.WriteByte(buf, i, 0);

            int n = Native.evo_query(_handle, sql, buf,
                                       maxRows, maxCols, colBufSize,
                                       out int colsOut);
            if (n < 0) throw RaiseLast("evo_query failed", n);

            var rows = new List<List<string>>(n);
            for (int r = 0; r < n; r++) {
                var row = new List<string>(colsOut);
                for (int c = 0; c < colsOut; c++) {
                    int off = (r * maxCols + c) * colBufSize;
                    row.Add(MarshalNUL(buf + off, colBufSize));
                }
                rows.Add(row);
            }
            return rows;
        } finally {
            Marshal.FreeHGlobal(buf);
        }
    }

    public void MemoryPut(string store, string ns, string key,
                            string valueJson,
                            float[]? embedding = null)
    {
        ThrowIfClosed();
        string? embLit = (embedding != null && embedding.Length > 0)
                           ? FormatVector(embedding)
                           : null;
        var rc = Native.evo_memory_put(_handle, store, ns, key,
                                          valueJson, embLit);
        if (rc != 0) throw RaiseLast("memory_put failed", rc);
    }

    public string MemoryGet(string store, string ns, string key,
                              int bufSize = 32 * 1024)
    {
        ThrowIfClosed();
        IntPtr buf = Marshal.AllocHGlobal(bufSize);
        try {
            for (int i = 0; i < bufSize; i++) Marshal.WriteByte(buf, i, 0);
            var rc = Native.evo_memory_get(_handle, store, ns, key,
                                              buf, bufSize);
            if (rc == -7) {
                throw new EvoNotFoundException(
                    $"memory_get: {ns}/{key}");
            }
            if (rc != 0) throw RaiseLast("memory_get failed", rc);
            return MarshalNUL(buf, bufSize);
        } finally {
            Marshal.FreeHGlobal(buf);
        }
    }

    public void MemoryDelete(string store, string ns, string key)
    {
        ThrowIfClosed();
        var rc = Native.evo_memory_delete(_handle, store, ns, key);
        if (rc != 0) throw RaiseLast("memory_delete failed", rc);
    }

    public void CheckpointPut(string store, string threadId, string ns,
                                string checkpointId, string valuesJson,
                                string metadataJson = "{}")
    {
        ThrowIfClosed();
        var rc = Native.evo_checkpoint_put(_handle, store, threadId, ns,
                                              checkpointId, valuesJson,
                                              metadataJson);
        if (rc != 0) throw RaiseLast("checkpoint_put failed", rc);
    }

    public string CheckpointGetLatest(string store, string threadId,
                                          int bufSize = 64 * 1024)
    {
        ThrowIfClosed();
        IntPtr buf = Marshal.AllocHGlobal(bufSize);
        try {
            for (int i = 0; i < bufSize; i++) Marshal.WriteByte(buf, i, 0);
            var rc = Native.evo_checkpoint_get_latest(_handle, store,
                                                          threadId, buf,
                                                          bufSize);
            if (rc == -7) {
                throw new EvoNotFoundException(
                    $"checkpoint thread={threadId}");
            }
            if (rc != 0) throw RaiseLast("checkpoint_get_latest failed", rc);
            return MarshalNUL(buf, bufSize);
        } finally {
            Marshal.FreeHGlobal(buf);
        }
    }

    public static string FormatVector(float[] vec)
    {
        if (vec.Length == 0) return "";
        int bufSize = vec.Length * 16 + 32;
        IntPtr buf = Marshal.AllocHGlobal(bufSize);
        try {
            int n = Native.evo_vector_format(vec, vec.Length, buf, bufSize);
            if (n > 0) return MarshalNUL(buf, bufSize);

            // Fallback formatter — should never trip, but keeps the
            // method total.
            var sb = new StringBuilder("[");
            for (int i = 0; i < vec.Length; i++) {
                if (i > 0) sb.Append(',');
                sb.Append(vec[i].ToString("F6",
                    System.Globalization.CultureInfo.InvariantCulture));
            }
            sb.Append(']');
            return sb.ToString();
        } finally {
            Marshal.FreeHGlobal(buf);
        }
    }

    public void Dispose()
    {
        if (_handle != IntPtr.Zero) {
            Native.evo_close(_handle);
            _handle = IntPtr.Zero;
        }
        GC.SuppressFinalize(this);
    }

    ~Connection() => Dispose();

    // --------------------------------------------------------------
    // helpers
    // --------------------------------------------------------------
    private void ThrowIfClosed()
    {
        if (_handle == IntPtr.Zero)
            throw new ObjectDisposedException(nameof(Connection));
    }

    private static string MarshalNUL(IntPtr ptr, int max)
    {
        int len = 0;
        while (len < max && Marshal.ReadByte(ptr, len) != 0) len++;
        return Marshal.PtrToStringUTF8(ptr, len) ?? "";
    }

    private static EvoException RaiseLast(string fallback, int code)
    {
        IntPtr msgPtr   = Native.evo_strerror(IntPtr.Zero);
        IntPtr statePtr = Native.evo_sqlstate(IntPtr.Zero);
        string msg   = msgPtr   != IntPtr.Zero
                        ? Marshal.PtrToStringUTF8(msgPtr) ?? fallback
                        : fallback;
        string state = statePtr != IntPtr.Zero
                        ? Marshal.PtrToStringUTF8(statePtr) ?? ""
                        : "";
        return new EvoException(msg, code, state);
    }
}
