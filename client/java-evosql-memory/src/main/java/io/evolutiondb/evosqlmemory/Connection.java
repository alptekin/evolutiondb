// EvoSQL agent-memory connection (Java).
//
// Threading: a Connection is NOT thread-safe — keep one per thread.
// The C SDK's last-error storage is thread-local, so an error on
// one thread doesn't leak into another's reading.
package io.evolutiondb.evosqlmemory;

import com.sun.jna.Pointer;
import com.sun.jna.ptr.IntByReference;

import java.nio.charset.StandardCharsets;
import java.util.ArrayList;
import java.util.List;

public final class Connection implements AutoCloseable {

    private Pointer handle;

    public Connection(String host, int port, String user, String password) {
        this.handle = Native.INSTANCE.evo_connect(host, port, user, password);
        if (this.handle == null) {
            throw raiseLast("evo_connect failed", -2);
        }
    }

    public int exec(String sql) {
        ensureOpen();
        int rc = Native.INSTANCE.evo_exec(handle, sql);
        if (rc < 0) throw raiseLast("evo_exec failed", rc);
        return rc;
    }

    public List<List<String>> query(String sql) {
        return query(sql, 256, 32, 4096);
    }

    public List<List<String>> query(String sql,
                                       int maxRows, int maxCols,
                                       int colBufSize) {
        ensureOpen();
        byte[] buf = new byte[maxRows * maxCols * colBufSize];
        IntByReference colsOut = new IntByReference(0);
        int n = Native.INSTANCE.evo_query(handle, sql, buf,
                                              maxRows, maxCols, colBufSize,
                                              colsOut);
        if (n < 0) throw raiseLast("evo_query failed", n);
        int cols = colsOut.getValue();
        List<List<String>> rows = new ArrayList<>(n);
        for (int r = 0; r < n; r++) {
            List<String> row = new ArrayList<>(cols);
            for (int c = 0; c < cols; c++) {
                int off = (r * maxCols + c) * colBufSize;
                row.add(readNUL(buf, off, colBufSize));
            }
            rows.add(row);
        }
        return rows;
    }

    public void memoryPut(String store, String ns, String key,
                            String valueJson, float[] embedding) {
        ensureOpen();
        String embLit = (embedding != null && embedding.length > 0)
                          ? formatVector(embedding) : null;
        int rc = Native.INSTANCE.evo_memory_put(handle, store, ns, key,
                                                    valueJson, embLit);
        if (rc != 0) throw raiseLast("memory_put failed", rc);
    }

    public void memoryPut(String store, String ns, String key,
                            String valueJson) {
        memoryPut(store, ns, key, valueJson, null);
    }

    public String memoryGet(String store, String ns, String key) {
        return memoryGet(store, ns, key, 32 * 1024);
    }

    public String memoryGet(String store, String ns, String key, int bufSize) {
        ensureOpen();
        byte[] buf = new byte[bufSize];
        int rc = Native.INSTANCE.evo_memory_get(handle, store, ns, key,
                                                    buf, bufSize);
        if (rc == -7) {
            throw new NotFoundException("memory_get: " + ns + "/" + key);
        }
        if (rc != 0) throw raiseLast("memory_get failed", rc);
        return readNUL(buf, 0, bufSize);
    }

    public void memoryDelete(String store, String ns, String key) {
        ensureOpen();
        int rc = Native.INSTANCE.evo_memory_delete(handle, store, ns, key);
        if (rc != 0) throw raiseLast("memory_delete failed", rc);
    }

    public void checkpointPut(String store, String threadId, String ns,
                                  String checkpointId,
                                  String valuesJson, String metadataJson) {
        ensureOpen();
        int rc = Native.INSTANCE.evo_checkpoint_put(handle, store, threadId,
                                                        ns, checkpointId,
                                                        valuesJson,
                                                        metadataJson);
        if (rc != 0) throw raiseLast("checkpoint_put failed", rc);
    }

    public String checkpointGetLatest(String store, String threadId) {
        return checkpointGetLatest(store, threadId, 64 * 1024);
    }

    public String checkpointGetLatest(String store, String threadId,
                                          int bufSize) {
        ensureOpen();
        byte[] buf = new byte[bufSize];
        int rc = Native.INSTANCE.evo_checkpoint_get_latest(handle, store,
                                                                threadId,
                                                                buf, bufSize);
        if (rc == -7) {
            throw new NotFoundException("checkpoint thread=" + threadId);
        }
        if (rc != 0) throw raiseLast("checkpoint_get_latest failed", rc);
        return readNUL(buf, 0, bufSize);
    }

    public static String formatVector(float[] vec) {
        if (vec == null || vec.length == 0) return "";
        byte[] buf = new byte[vec.length * 16 + 32];
        int n = Native.INSTANCE.evo_vector_format(vec, vec.length, buf, buf.length);
        if (n > 0) return readNUL(buf, 0, buf.length);
        StringBuilder sb = new StringBuilder("[");
        for (int i = 0; i < vec.length; i++) {
            if (i > 0) sb.append(',');
            sb.append(String.format(java.util.Locale.US, "%.6f", vec[i]));
        }
        return sb.append(']').toString();
    }

    @Override
    public void close() {
        if (handle != null) {
            Native.INSTANCE.evo_close(handle);
            handle = null;
        }
    }

    // ------------------------------------------------------------------
    // helpers
    // ------------------------------------------------------------------
    private void ensureOpen() {
        if (handle == null) {
            throw new IllegalStateException("Connection is closed");
        }
    }

    private static String readNUL(byte[] buf, int offset, int max) {
        int end = offset;
        int hardEnd = Math.min(buf.length, offset + max);
        while (end < hardEnd && buf[end] != 0) end++;
        return new String(buf, offset, end - offset, StandardCharsets.UTF_8);
    }

    private static EvoException raiseLast(String fallback, int code) {
        String msg   = Native.INSTANCE.evo_strerror(null);
        String state = Native.INSTANCE.evo_sqlstate(null);
        return new EvoException(msg == null || msg.isEmpty() ? fallback : msg,
                                 code,
                                 state == null ? "" : state);
    }
}
