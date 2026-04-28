// put_get.cpp — minimal C++ example.
//
//   c++ -std=c++17 \
//       -I client/cpp-evosql-memory/include \
//       -I client/libevosql-memory/include \
//       client/cpp-evosql-memory/examples/put_get.cpp \
//       client/libevosql-memory/build/libevosql-memory.a -lpthread \
//       -o put_get
#include <iostream>
#include <evosql_memory.hpp>

int main() try {
    evosql::Connection conn{"127.0.0.1", 9967, "admin", "admin"};

    conn.exec("DROP MEMORY STORE IF EXISTS cpp_demo");
    conn.exec("CREATE MEMORY STORE cpp_demo");

    conn.memory_put("cpp_demo", "users", "alice",
                      R"({"role":"pm","team":"infra"})");
    auto value = conn.memory_get("cpp_demo", "users", "alice");
    std::cout << "alice -> " << value << "\n";

    conn.exec("DROP MEMORY STORE cpp_demo");
    return 0;
} catch (const evosql::Error& e) {
    std::cerr << "evosql error (sqlstate=" << e.sqlstate << "): "
              << e.what() << "\n";
    return 1;
}
