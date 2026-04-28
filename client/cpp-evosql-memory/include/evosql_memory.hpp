// evosql_memory.hpp — header-only C++ wrapper over libevosql-memory.
//
//   #include <evosql_memory.hpp>
//   evosql::Connection conn{"127.0.0.1", 9967, "admin", "admin"};
//   conn.exec("CREATE MEMORY STORE demo");
//   conn.memory_put("demo", "users", "alice", R"({"role":"pm"})");
//   auto value = conn.memory_get("demo", "users", "alice");
//
// Build the C SDK first, then link against the static archive:
//   c++ -std=c++17 -I client/cpp-evosql-memory/include \
//       app.cpp client/libevosql-memory/build/libevosql-memory.a -lpthread
//
// Threading: a Connection is not thread-safe — keep one per thread.
#ifndef EVOSQL_MEMORY_HPP
#define EVOSQL_MEMORY_HPP

#include <cstdio>
#include <stdexcept>
#include <string>
#include <vector>

extern "C" {
#include "evosql_memory.h"
}

namespace evosql {

class Error : public std::runtime_error {
public:
    int         code     = -1;
    std::string sqlstate;

    Error(const std::string& message, int code_, std::string sqlstate_ = {})
        : std::runtime_error(message),
          code(code_),
          sqlstate(std::move(sqlstate_)) {}
};

class NotFound : public Error {
public:
    explicit NotFound(const std::string& message)
        : Error(message, EVO_ERR_NOT_FOUND) {}
};

namespace detail {
inline Error make_error(const std::string& fallback, int rc) {
    const char* msg   = ::evo_strerror(nullptr);
    const char* state = ::evo_sqlstate(nullptr);
    std::string m  = (msg && *msg)   ? msg   : fallback;
    std::string s  = (state && *state) ? state : "";
    return Error(m, rc, s);
}
} // namespace detail

class Connection {
public:
    Connection(const std::string& host, int port,
                const std::string& user, const std::string& password)
    {
        handle_ = ::evo_connect(host.c_str(), port,
                                  user.c_str(), password.c_str());
        if (!handle_) {
            throw detail::make_error("evo_connect failed", EVO_ERR_CONNECT);
        }
    }

    ~Connection() {
        if (handle_) ::evo_close(handle_);
    }

    Connection(const Connection&)            = delete;
    Connection& operator=(const Connection&) = delete;

    Connection(Connection&& other) noexcept : handle_(other.handle_) {
        other.handle_ = nullptr;
    }
    Connection& operator=(Connection&& other) noexcept {
        if (this != &other) {
            if (handle_) ::evo_close(handle_);
            handle_ = other.handle_;
            other.handle_ = nullptr;
        }
        return *this;
    }

    int exec(const std::string& sql) {
        int rc = ::evo_exec(handle_, sql.c_str());
        if (rc < 0) throw detail::make_error("evo_exec failed", rc);
        return rc;
    }

    std::vector<std::vector<std::string>> query(const std::string& sql,
                                                   int max_rows = 256,
                                                   int max_cols = 32,
                                                   int col_buf_size = 4096)
    {
        std::vector<char> buf(static_cast<size_t>(max_rows) *
                                static_cast<size_t>(max_cols) *
                                static_cast<size_t>(col_buf_size), 0);
        int cols_out = 0;
        int n = ::evo_query(handle_, sql.c_str(),
                              buf.data(), max_rows, max_cols,
                              col_buf_size, &cols_out);
        if (n < 0) throw detail::make_error("evo_query failed", n);

        std::vector<std::vector<std::string>> rows;
        rows.reserve(static_cast<size_t>(n));
        for (int r = 0; r < n; ++r) {
            std::vector<std::string> row;
            row.reserve(static_cast<size_t>(cols_out));
            for (int c = 0; c < cols_out; ++c) {
                size_t off = (static_cast<size_t>(r) * max_cols + c) *
                             col_buf_size;
                row.emplace_back(buf.data() + off);
            }
            rows.push_back(std::move(row));
        }
        return rows;
    }

    void memory_put(const std::string& store, const std::string& ns,
                     const std::string& key, const std::string& value_json,
                     const std::vector<float>& embedding = {})
    {
        std::string emb_lit;
        const char* emb_c = nullptr;
        if (!embedding.empty()) {
            emb_lit = format_vector(embedding);
            emb_c   = emb_lit.c_str();
        }
        int rc = ::evo_memory_put(handle_, store.c_str(), ns.c_str(),
                                    key.c_str(), value_json.c_str(),
                                    emb_c);
        if (rc != 0) throw detail::make_error("memory_put failed", rc);
    }

    std::string memory_get(const std::string& store, const std::string& ns,
                              const std::string& key,
                              int buf_size = 32 * 1024)
    {
        std::vector<char> buf(static_cast<size_t>(buf_size), 0);
        int rc = ::evo_memory_get(handle_, store.c_str(), ns.c_str(),
                                    key.c_str(), buf.data(), buf_size);
        if (rc == EVO_ERR_NOT_FOUND) {
            throw NotFound("memory_get: " + ns + "/" + key);
        }
        if (rc != 0) throw detail::make_error("memory_get failed", rc);
        return std::string(buf.data());
    }

    void memory_delete(const std::string& store, const std::string& ns,
                         const std::string& key)
    {
        int rc = ::evo_memory_delete(handle_, store.c_str(),
                                       ns.c_str(), key.c_str());
        if (rc != 0) throw detail::make_error("memory_delete failed", rc);
    }

    void checkpoint_put(const std::string& store, const std::string& thread_id,
                          const std::string& ns,
                          const std::string& checkpoint_id,
                          const std::string& values_json,
                          const std::string& metadata_json = "{}")
    {
        int rc = ::evo_checkpoint_put(handle_, store.c_str(),
                                         thread_id.c_str(), ns.c_str(),
                                         checkpoint_id.c_str(),
                                         values_json.c_str(),
                                         metadata_json.c_str());
        if (rc != 0) throw detail::make_error("checkpoint_put failed", rc);
    }

    std::string checkpoint_get_latest(const std::string& store,
                                         const std::string& thread_id,
                                         int buf_size = 64 * 1024)
    {
        std::vector<char> buf(static_cast<size_t>(buf_size), 0);
        int rc = ::evo_checkpoint_get_latest(handle_, store.c_str(),
                                                thread_id.c_str(),
                                                buf.data(), buf_size);
        if (rc == EVO_ERR_NOT_FOUND) {
            throw NotFound("checkpoint thread=" + thread_id);
        }
        if (rc != 0) throw detail::make_error("checkpoint_get_latest failed", rc);
        return std::string(buf.data());
    }

    static std::string format_vector(const std::vector<float>& vec) {
        if (vec.empty()) return "";
        std::string out;
        out.reserve(vec.size() * 12 + 4);
        std::vector<char> buf(vec.size() * 16 + 32, 0);
        int n = ::evo_vector_format(vec.data(),
                                       static_cast<int>(vec.size()),
                                       buf.data(),
                                       static_cast<int>(buf.size()));
        if (n > 0) return std::string(buf.data());
        // Fallback to in-band formatter on overflow
        out.push_back('[');
        for (size_t i = 0; i < vec.size(); ++i) {
            if (i > 0) out.push_back(',');
            char tmp[32];
            std::snprintf(tmp, sizeof(tmp), "%.6f", vec[i]);
            out += tmp;
        }
        out.push_back(']');
        return out;
    }

private:
    ::evo_conn_t* handle_ = nullptr;
};

} // namespace evosql

#endif // EVOSQL_MEMORY_HPP
