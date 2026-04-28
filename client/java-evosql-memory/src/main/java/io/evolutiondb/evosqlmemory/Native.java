// JNA-mapped surface of libevosql-memory.
//
// JNA resolves "evosql-memory" to libevosql-memory.dylib (macOS),
// libevosql-memory.so (Linux), or evosql-memory.dll (Windows). To
// run from a non-default location set the `jna.library.path` system
// property:
//
//     -Djna.library.path=/path/to/client/libevosql-memory/build
//
// The Connection class wraps every method below in idiomatic Java
// with checked exceptions where appropriate.
package io.evolutiondb.evosqlmemory;

import com.sun.jna.Library;
import com.sun.jna.Pointer;
import com.sun.jna.ptr.IntByReference;

public interface Native extends Library {

    Native INSTANCE = com.sun.jna.Native.load("evosql-memory", Native.class);

    Pointer evo_connect(String host, int port, String user, String password);
    void    evo_close(Pointer conn);

    int evo_exec(Pointer conn, String sql);
    int evo_query(Pointer conn, String sql,
                   byte[] outBuf, int maxRows, int maxCols, int colBufSize,
                   IntByReference colsOut);

    int evo_memory_put(Pointer conn, String store, String ns, String key,
                        String valueJson, String embeddingOrNull);
    int evo_memory_get(Pointer conn, String store, String ns, String key,
                        byte[] outBuf, int outSize);
    int evo_memory_delete(Pointer conn, String store, String ns, String key);

    int evo_checkpoint_put(Pointer conn, String store, String threadId,
                             String ns, String checkpointId,
                             String valuesJson, String metadataJson);
    int evo_checkpoint_get_latest(Pointer conn, String store, String threadId,
                                     byte[] outBuf, int outSize);

    int evo_vector_format(float[] vec, int n, byte[] out, int outSize);

    String evo_strerror(Pointer conn);
    String evo_sqlstate(Pointer conn);
}
