// Smoke example for the Java binding.
//
//   make -C ../../libevosql-memory          # build the C SDK first
//   mvn package
//   java -Djna.library.path=../../libevosql-memory/build \
//        -cp target/evosql-memory-1.0.0.jar:$(mvn -q dependency:build-classpath -Dmdep.outputFile=/dev/stdout) \
//        io.evolutiondb.evosqlmemory.example.PutGet
package io.evolutiondb.evosqlmemory.example;

import io.evolutiondb.evosqlmemory.Connection;
import io.evolutiondb.evosqlmemory.EvoException;

public final class PutGet {
    public static void main(String[] args) {
        try (Connection c = new Connection("127.0.0.1", 9967, "admin", "admin")) {
            c.exec("DROP MEMORY STORE IF EXISTS java_demo");
            c.exec("CREATE MEMORY STORE java_demo");

            c.memoryPut("java_demo", "users", "alice",
                          "{\"role\":\"pm\",\"team\":\"infra\"}");
            String value = c.memoryGet("java_demo", "users", "alice");
            System.out.println("alice -> " + value);

            c.exec("DROP MEMORY STORE java_demo");
        } catch (EvoException e) {
            System.err.println("evosql error (sqlstate=" + e.sqlstate + "): "
                                + e.getMessage());
            System.exit(1);
        }
    }
}
