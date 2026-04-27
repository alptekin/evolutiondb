/*
 * put_get.c — minimal libevosql-memory example.
 *
 * Build:
 *   cc -I../include put_get.c ../build/libevosql-memory.a -o put_get
 *
 * Run (server must be on 127.0.0.1:9967 with admin/admin creds):
 *   ./put_get
 */
#include <stdio.h>
#include <evosql_memory.h>

int main(void)
{
    evo_conn_t *c = evo_connect("127.0.0.1", 9967, "admin", "admin");
    if (!c) {
        fprintf(stderr, "connect failed: %s\n", evo_strerror(NULL));
        return 1;
    }

    evo_exec(c, "DROP MEMORY STORE IF EXISTS demo");
    if (evo_exec(c, "CREATE MEMORY STORE demo") < 0) {
        fprintf(stderr, "create failed: %s\n", evo_strerror(c));
        evo_close(c);
        return 1;
    }

    evo_memory_put(c, "demo", "users", "alice",
                   "{\"role\":\"pm\",\"team\":\"infra\"}", NULL);
    evo_memory_put(c, "demo", "users", "bob",
                   "{\"role\":\"dev\"}", NULL);

    char value[1024];
    if (evo_memory_get(c, "demo", "users", "alice",
                        value, sizeof(value)) == EVO_OK) {
        printf("alice -> %s\n", value);
    }
    if (evo_memory_get(c, "demo", "users", "bob",
                        value, sizeof(value)) == EVO_OK) {
        printf("bob   -> %s\n", value);
    }

    evo_exec(c, "DROP MEMORY STORE demo");
    evo_close(c);
    return 0;
}
