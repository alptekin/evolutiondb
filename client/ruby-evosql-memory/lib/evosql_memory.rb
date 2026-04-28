# frozen_string_literal: true

# evosql_memory — Ruby FFI binding over libevosql-memory.
#
#   require 'evosql_memory'
#
#   EvoSQLMemory::Connection.open('127.0.0.1', 9967, 'admin', 'admin') do |c|
#     c.exec('CREATE MEMORY STORE demo')
#     c.memory_put('demo', 'users', 'alice', '{"role":"pm"}')
#     puts c.memory_get('demo', 'users', 'alice')
#   end
#
# Threading: a Connection is NOT thread-safe — keep one per thread.

require 'ffi'

module EvoSQLMemory
  class Error < StandardError
    attr_reader :code, :sqlstate

    def initialize(message, code: -1, sqlstate: '')
      super(message)
      @code     = code
      @sqlstate = sqlstate.to_s
    end
  end

  class NotFound < Error; end

  # ----------------------------------------------------------------
  #  FFI surface — mirrors include/evosql_memory.h
  # ----------------------------------------------------------------
  module Native
    extend FFI::Library

    def self.candidate_paths
      paths = []
      env = ENV['EVOSQL_MEMORY_LIB']
      paths << env if env && !env.empty?

      here       = File.expand_path(__dir__)
      ext        = FFI::Platform.mac? ? 'dylib' : 'so'
      local_lib  = File.expand_path("../../libevosql-memory/build/libevosql-memory.#{ext}", here)
      paths << local_lib

      paths << 'evosql-memory'
      paths.compact
    end

    ffi_lib(*candidate_paths)

    attach_function :evo_connect,
                    %i[string int string string], :pointer
    attach_function :evo_close,                   [:pointer], :void
    attach_function :evo_exec,                    %i[pointer string], :int
    attach_function :evo_query,
                    %i[pointer string pointer int int int pointer], :int
    attach_function :evo_memory_put,
                    %i[pointer string string string string string], :int
    attach_function :evo_memory_get,
                    %i[pointer string string string pointer int], :int
    attach_function :evo_memory_delete,
                    %i[pointer string string string], :int
    attach_function :evo_checkpoint_put,
                    %i[pointer string string string string string string], :int
    attach_function :evo_checkpoint_get_latest,
                    %i[pointer string string pointer int], :int
    attach_function :evo_vector_format,
                    %i[pointer int pointer int], :int
    attach_function :evo_strerror,                [:pointer], :string
    attach_function :evo_sqlstate,                [:pointer], :string
  end

  def self.format_vector(vec)
    return '' if vec.nil? || vec.empty?

    arr = FFI::MemoryPointer.new(:float, vec.length)
    arr.write_array_of_float(vec)
    out = FFI::MemoryPointer.new(:char, vec.length * 16 + 32)
    n = Native.evo_vector_format(arr, vec.length, out, out.size)
    return out.read_string_to_null if n.positive?

    "[#{vec.map { |v| format('%.6f', v) }.join(',')}]"
  end

  # ----------------------------------------------------------------
  #  Connection
  # ----------------------------------------------------------------
  class Connection
    def self.open(host, port, user, password)
      conn = new(host, port, user, password)
      return conn unless block_given?

      begin
        yield conn
      ensure
        conn.close
      end
    end

    def initialize(host, port, user, password)
      @handle = Native.evo_connect(host, port, user, password)
      raise self.class.send(:raise_last, 'evo_connect failed', -2) if @handle.null?
    end

    def close
      return if @handle.nil? || @handle.null?

      Native.evo_close(@handle)
      @handle = nil
    end

    def exec(sql)
      ensure_open!
      rc = Native.evo_exec(@handle, sql)
      raise self.class.send(:raise_last, 'evo_exec failed', rc) if rc.negative?

      rc
    end

    def query(sql, max_rows: 256, max_cols: 32, col_buf_size: 4096)
      ensure_open!
      buf      = FFI::MemoryPointer.new(:char, max_rows * max_cols * col_buf_size)
      cols_out = FFI::MemoryPointer.new(:int)
      n = Native.evo_query(@handle, sql, buf, max_rows, max_cols,
                            col_buf_size, cols_out)
      raise self.class.send(:raise_last, 'evo_query failed', n) if n.negative?

      cols = cols_out.read_int
      rows = []
      n.times do |r|
        row = []
        cols.times do |c|
          off  = (r * max_cols + c) * col_buf_size
          slot = buf + off
          row << slot.read_string_to_null
        end
        rows << row
      end
      rows
    end

    def memory_put(store, namespace, key, value_json, embedding = nil)
      ensure_open!
      emb_lit = embedding ? EvoSQLMemory.format_vector(embedding) : nil
      rc = Native.evo_memory_put(@handle, store, namespace, key,
                                    value_json, emb_lit)
      raise self.class.send(:raise_last, 'memory_put failed', rc) if rc != 0
    end

    def memory_get(store, namespace, key, buf_size: 32 * 1024)
      ensure_open!
      out = FFI::MemoryPointer.new(:char, buf_size)
      rc  = Native.evo_memory_get(@handle, store, namespace, key,
                                     out, buf_size)
      raise NotFound, "memory_get: #{namespace}/#{key}" if rc == -7

      raise self.class.send(:raise_last, 'memory_get failed', rc) if rc != 0

      out.read_string_to_null
    end

    def memory_delete(store, namespace, key)
      ensure_open!
      rc = Native.evo_memory_delete(@handle, store, namespace, key)
      raise self.class.send(:raise_last, 'memory_delete failed', rc) if rc != 0
    end

    def checkpoint_put(store, thread_id, ns, checkpoint_id,
                          values_json, metadata_json = '{}')
      ensure_open!
      rc = Native.evo_checkpoint_put(@handle, store, thread_id, ns,
                                         checkpoint_id, values_json,
                                         metadata_json)
      raise self.class.send(:raise_last, 'checkpoint_put failed', rc) if rc != 0
    end

    def checkpoint_get_latest(store, thread_id, buf_size: 64 * 1024)
      ensure_open!
      out = FFI::MemoryPointer.new(:char, buf_size)
      rc  = Native.evo_checkpoint_get_latest(@handle, store, thread_id,
                                                  out, buf_size)
      raise NotFound, "checkpoint thread=#{thread_id}" if rc == -7

      raise self.class.send(:raise_last, 'checkpoint_get_latest failed', rc) if rc != 0

      out.read_string_to_null
    end

    private

    def ensure_open!
      raise Error.new('connection is closed') if @handle.nil? || @handle.null?
    end

    def self.raise_last(fallback, code)
      msg   = Native.evo_strerror(nil)
      state = Native.evo_sqlstate(nil)
      msg   = (msg.nil? || msg.empty?) ? fallback : msg
      err   = (state.nil? || state.empty?) ? Error : Error
      err.new(msg, code: code, sqlstate: state.to_s)
    end
  end
end
