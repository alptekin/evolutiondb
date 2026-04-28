// dotnet run --project client/dotnet-evosql-memory/example
//
// Set DYLD_LIBRARY_PATH (macOS) / LD_LIBRARY_PATH (Linux) so the loader
// finds libevosql-memory:
//   DYLD_LIBRARY_PATH=$PWD/client/libevosql-memory/build dotnet run …

using EvoSQLMemory;

using var conn = new Connection("127.0.0.1", 9967, "admin", "admin");

conn.Exec("DROP MEMORY STORE IF EXISTS net_demo");
conn.Exec("CREATE MEMORY STORE net_demo");

conn.MemoryPut("net_demo", "users", "alice",
                """{"role":"pm","team":"infra"}""");
var value = conn.MemoryGet("net_demo", "users", "alice");
Console.WriteLine($"alice -> {value}");

conn.Exec("DROP MEMORY STORE net_demo");
