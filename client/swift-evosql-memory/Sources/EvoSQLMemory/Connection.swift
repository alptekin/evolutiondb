// EvoSQL agent-memory connection (Swift).
//
// Threading: a Connection is NOT thread-safe — keep one per thread.
// Connection is a class (reference type) with a deinit that calls
// evo_close so a forgotten close still releases the C handle.
import Foundation
import CEvoSQLMemory

public struct EvoError: Error, CustomStringConvertible {
    public let message:  String
    public let code:     Int32
    public let sqlstate: String

    public var description: String {
        sqlstate.isEmpty ? message : "sql \(sqlstate): \(message)"
    }
}

public struct EvoNotFound: Error, CustomStringConvertible {
    public let message: String
    public var description: String { message }
}

public final class Connection {
    private var handle: OpaquePointer?

    public init(host: String, port: Int32,
                  user: String, password: String) throws {
        let raw = host.withCString { h in
            user.withCString { u in
                password.withCString { p in
                    evo_connect(h, port, u, p)
                }
            }
        }
        guard let raw = raw else {
            throw Self.lastError(fallback: "evo_connect failed", code: -2)
        }
        self.handle = OpaquePointer(raw)
    }

    deinit { close() }

    public func close() {
        if let h = handle {
            evo_close(UnsafeMutablePointer(h))
            handle = nil
        }
    }

    @discardableResult
    public func exec(_ sql: String) throws -> Int32 {
        try ensureOpen()
        let rc = sql.withCString { s in
            evo_exec(UnsafeMutablePointer(handle!), s)
        }
        if rc < 0 { throw Self.lastError(fallback: "evo_exec failed", code: rc) }
        return rc
    }

    public func query(_ sql: String,
                       maxRows: Int32 = 256,
                       maxCols: Int32 = 32,
                       colBufSize: Int32 = 4096) throws -> [[String]] {
        try ensureOpen()
        let total = Int(maxRows) * Int(maxCols) * Int(colBufSize)
        var buf   = [Int8](repeating: 0, count: total)
        var cols: Int32 = 0

        let n = try buf.withUnsafeMutableBufferPointer { bp -> Int32 in
            sql.withCString { s in
                evo_query(UnsafeMutablePointer(handle!), s,
                            bp.baseAddress, maxRows, maxCols, colBufSize, &cols)
            }
        }
        if n < 0 { throw Self.lastError(fallback: "evo_query failed", code: n) }

        var rows: [[String]] = []
        rows.reserveCapacity(Int(n))
        for r in 0..<Int(n) {
            var row: [String] = []
            row.reserveCapacity(Int(cols))
            for c in 0..<Int(cols) {
                let off = (r * Int(maxCols) + c) * Int(colBufSize)
                let slot = Array(buf[off..<min(off + Int(colBufSize), buf.count)])
                row.append(Self.cString(slot))
            }
            rows.append(row)
        }
        return rows
    }

    public func memoryPut(store: String, namespace: String, key: String,
                            value: String,
                            embedding: [Float] = []) throws {
        try ensureOpen()
        let embLit = embedding.isEmpty ? nil : Self.formatVector(embedding)
        let rc = store.withCString { s in
            namespace.withCString { ns in
                key.withCString { k in
                    value.withCString { v in
                        if let embLit = embLit {
                            return embLit.withCString { e in
                                evo_memory_put(UnsafeMutablePointer(self.handle!),
                                                s, ns, k, v, e)
                            }
                        }
                        return evo_memory_put(UnsafeMutablePointer(self.handle!),
                                                s, ns, k, v, nil)
                    }
                }
            }
        }
        if rc != 0 { throw Self.lastError(fallback: "memory_put failed", code: rc) }
    }

    public func memoryGet(store: String, namespace: String, key: String,
                            bufSize: Int32 = 32 * 1024) throws -> String {
        try ensureOpen()
        var buf = [Int8](repeating: 0, count: Int(bufSize))
        let rc = buf.withUnsafeMutableBufferPointer { bp -> Int32 in
            store.withCString { s in
                namespace.withCString { ns in
                    key.withCString { k in
                        evo_memory_get(UnsafeMutablePointer(self.handle!),
                                          s, ns, k, bp.baseAddress, bufSize)
                    }
                }
            }
        }
        if rc == -7 {
            throw EvoNotFound(message: "memory_get: \(namespace)/\(key)")
        }
        if rc != 0 { throw Self.lastError(fallback: "memory_get failed", code: rc) }
        return Self.cString(buf)
    }

    public func memoryDelete(store: String, namespace: String,
                                key: String) throws {
        try ensureOpen()
        let rc = store.withCString { s in
            namespace.withCString { ns in
                key.withCString { k in
                    evo_memory_delete(UnsafeMutablePointer(self.handle!),
                                          s, ns, k)
                }
            }
        }
        if rc != 0 { throw Self.lastError(fallback: "memory_delete failed", code: rc) }
    }

    public func checkpointPut(store: String, threadId: String,
                                  namespace: String, checkpointId: String,
                                  values: String,
                                  metadata: String = "{}") throws {
        try ensureOpen()
        let rc = store.withCString { s in
            threadId.withCString { t in
                namespace.withCString { ns in
                    checkpointId.withCString { cid in
                        values.withCString { v in
                            metadata.withCString { m in
                                evo_checkpoint_put(UnsafeMutablePointer(self.handle!),
                                                       s, t, ns, cid, v, m)
                            }
                        }
                    }
                }
            }
        }
        if rc != 0 {
            throw Self.lastError(fallback: "checkpoint_put failed", code: rc)
        }
    }

    public func checkpointGetLatest(store: String, threadId: String,
                                          bufSize: Int32 = 64 * 1024)
        throws -> String
    {
        try ensureOpen()
        var buf = [Int8](repeating: 0, count: Int(bufSize))
        let rc = buf.withUnsafeMutableBufferPointer { bp -> Int32 in
            store.withCString { s in
                threadId.withCString { t in
                    evo_checkpoint_get_latest(UnsafeMutablePointer(self.handle!),
                                                   s, t, bp.baseAddress, bufSize)
                }
            }
        }
        if rc == -7 {
            throw EvoNotFound(message: "checkpoint thread=\(threadId)")
        }
        if rc != 0 {
            throw Self.lastError(fallback: "checkpoint_get_latest failed", code: rc)
        }
        return Self.cString(buf)
    }

    public static func formatVector(_ vec: [Float]) -> String {
        guard !vec.isEmpty else { return "" }
        var buf = [Int8](repeating: 0, count: vec.count * 16 + 32)
        let n = buf.withUnsafeMutableBufferPointer { bp -> Int32 in
            vec.withUnsafeBufferPointer { vp in
                evo_vector_format(vp.baseAddress, Int32(vec.count),
                                     bp.baseAddress, Int32(buf.count))
            }
        }
        if n > 0 { return cString(buf) }
        return "[" + vec.map { String(format: "%.6f", $0) }.joined(separator: ",") + "]"
    }

    // ------------------------------------------------------------------
    // helpers
    // ------------------------------------------------------------------
    private func ensureOpen() throws {
        if handle == nil {
            throw EvoError(message: "connection is closed",
                              code: -1, sqlstate: "")
        }
    }

    private static func cString(_ buf: [Int8]) -> String {
        var bytes: [UInt8] = []
        for b in buf {
            if b == 0 { break }
            bytes.append(UInt8(bitPattern: b))
        }
        return String(decoding: bytes, as: UTF8.self)
    }

    private static func lastError(fallback: String, code: Int32) -> EvoError {
        let msg: String = {
            if let p = evo_strerror(nil) { return String(cString: p) }
            return fallback
        }()
        let state: String = {
            if let p = evo_sqlstate(nil) { return String(cString: p) }
            return ""
        }()
        return EvoError(message: msg.isEmpty ? fallback : msg,
                          code: code, sqlstate: state)
    }
}
