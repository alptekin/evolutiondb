// Smoke example for the Swift binding.
//
//   make -C ../libevosql-memory                  # build the C SDK first
//   swift build -Xcc -I../libevosql-memory/include \
//               -Xlinker -L../libevosql-memory/build
//   swift run PutGetExample \
//             -Xcc -I../libevosql-memory/include \
//             -Xlinker -L../libevosql-memory/build
import EvoSQLMemory

do {
    let conn = try Connection(host: "127.0.0.1", port: 9967,
                                   user: "admin", password: "admin")

    try conn.exec("DROP MEMORY STORE IF EXISTS swift_demo")
    try conn.exec("CREATE MEMORY STORE swift_demo")

    try conn.memoryPut(store: "swift_demo", namespace: "users",
                          key: "alice",
                          value: "{\"role\":\"pm\",\"team\":\"infra\"}")
    let value = try conn.memoryGet(store: "swift_demo",
                                        namespace: "users", key: "alice")
    print("alice -> \(value)")

    try conn.exec("DROP MEMORY STORE swift_demo")
} catch let e as EvoError {
    FileHandle.standardError.write(
        Data("evosql error (sqlstate=\(e.sqlstate)): \(e.message)\n".utf8))
    exit(1)
} catch {
    FileHandle.standardError.write(
        Data("unexpected error: \(error)\n".utf8))
    exit(1)
}
