// Native.cs — DllImport surface for libevosql-memory.
//
// The library name is the platform-agnostic "evosql-memory" — .NET's
// P/Invoke loader resolves it to libevosql-memory.dylib (macOS),
// libevosql-memory.so (Linux), or evosql-memory.dll (Windows). To
// run from a non-default location set the EVOSQL_MEMORY_LIB
// environment variable to an absolute path (Connection's static ctor
// honours that override).

using System;
using System.Runtime.InteropServices;

namespace EvoSQLMemory;

internal static class Native
{
    public const string LibName = "evosql-memory";

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl,
                CharSet = CharSet.Ansi)]
    public static extern IntPtr evo_connect(
        [MarshalAs(UnmanagedType.LPStr)] string host,
        int port,
        [MarshalAs(UnmanagedType.LPStr)] string user,
        [MarshalAs(UnmanagedType.LPStr)] string password);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl)]
    public static extern void evo_close(IntPtr conn);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl,
                CharSet = CharSet.Ansi)]
    public static extern int evo_exec(
        IntPtr conn,
        [MarshalAs(UnmanagedType.LPStr)] string sql);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl,
                CharSet = CharSet.Ansi)]
    public static extern int evo_query(
        IntPtr conn,
        [MarshalAs(UnmanagedType.LPStr)] string sql,
        IntPtr outBuf, int maxRows, int maxCols, int colBufSize,
        out int colsOut);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl,
                CharSet = CharSet.Ansi)]
    public static extern int evo_memory_put(
        IntPtr conn,
        [MarshalAs(UnmanagedType.LPStr)] string store,
        [MarshalAs(UnmanagedType.LPStr)] string ns,
        [MarshalAs(UnmanagedType.LPStr)] string key,
        [MarshalAs(UnmanagedType.LPStr)] string valueJson,
        [MarshalAs(UnmanagedType.LPStr)] string? embeddingOrNull);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl,
                CharSet = CharSet.Ansi)]
    public static extern int evo_memory_get(
        IntPtr conn,
        [MarshalAs(UnmanagedType.LPStr)] string store,
        [MarshalAs(UnmanagedType.LPStr)] string ns,
        [MarshalAs(UnmanagedType.LPStr)] string key,
        IntPtr outBuf, int outSize);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl,
                CharSet = CharSet.Ansi)]
    public static extern int evo_memory_delete(
        IntPtr conn,
        [MarshalAs(UnmanagedType.LPStr)] string store,
        [MarshalAs(UnmanagedType.LPStr)] string ns,
        [MarshalAs(UnmanagedType.LPStr)] string key);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl,
                CharSet = CharSet.Ansi)]
    public static extern int evo_checkpoint_put(
        IntPtr conn,
        [MarshalAs(UnmanagedType.LPStr)] string store,
        [MarshalAs(UnmanagedType.LPStr)] string threadId,
        [MarshalAs(UnmanagedType.LPStr)] string ns,
        [MarshalAs(UnmanagedType.LPStr)] string checkpointId,
        [MarshalAs(UnmanagedType.LPStr)] string valuesJson,
        [MarshalAs(UnmanagedType.LPStr)] string metadataJson);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl,
                CharSet = CharSet.Ansi)]
    public static extern int evo_checkpoint_get_latest(
        IntPtr conn,
        [MarshalAs(UnmanagedType.LPStr)] string store,
        [MarshalAs(UnmanagedType.LPStr)] string threadId,
        IntPtr outBuf, int outSize);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl)]
    public static extern int evo_vector_format(
        [In] float[] vec, int n,
        IntPtr outBuf, int outSize);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl)]
    public static extern IntPtr evo_strerror(IntPtr conn);

    [DllImport(LibName, CallingConvention = CallingConvention.Cdecl)]
    public static extern IntPtr evo_sqlstate(IntPtr conn);
}
