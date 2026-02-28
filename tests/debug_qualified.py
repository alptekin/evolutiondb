import socket, struct, time

def recv_messages(s):
    data = b''
    while True:
        chunk = s.recv(4096)
        if not chunk:
            break
        data += chunk
        i = 0
        found_z = False
        while i < len(data):
            if i + 5 > len(data):
                break
            msg_len = struct.unpack('!I', data[i+1:i+5])[0]
            total = 1 + msg_len
            if i + total > len(data):
                break
            if data[i:i+1] == b'Z':
                found_z = True
            i += total
        if found_z:
            break
    return data

s = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
s.connect(('localhost', 5433))
body = b'\x00\x03\x00\x00user\x00evo\x00database\x00evosql\x00client_encoding\x00UTF8\x00\x00'
s.sendall(struct.pack('!I', len(body)+4) + body)
recv_messages(s)

def q(sql):
    body = sql.encode() + b'\x00'
    s.sendall(b'Q' + struct.pack('!I', len(body)+4) + body)
    data = recv_messages(s)
    i = 0
    while i < len(data):
        t = chr(data[i])
        ml = struct.unpack('!I', data[i+1:i+5])[0]
        mb = data[i+5:i+1+ml]
        if t == 'E':
            j = 0
            while j < len(mb):
                code = chr(mb[j])
                if code == chr(0): break
                j += 1
                end = mb.index(b'\x00', j)
                val = mb[j:end].decode()
                if code == 'M':
                    print(f'  ERROR: {val}')
                j = end + 1
        elif t == 'C':
            print(f'  CMD: {mb[:-1].decode()}')
        elif t == 'D':
            ncols = struct.unpack('!H', mb[0:2])[0]
            off = 2
            row = []
            for _ in range(ncols):
                flen = struct.unpack('!i', mb[off:off+4])[0]
                off += 4
                if flen == -1:
                    row.append(None)
                else:
                    row.append(mb[off:off+flen].decode())
                    off += flen
            print(f'  ROW: {row}')
        i += 1 + ml

print('=== Setup ===')
q('CREATE DATABASE IF NOT EXISTS rdb')
q('USE rdb')
q('CREATE SCHEMA IF NOT EXISTS sch')
q('SET SCHEMA sch')
q('CREATE TABLE t1 (id INT, val VARCHAR(50))')
q("INSERT INTO t1 VALUES (1, 'hello')")
print('Verify in rdb.sch:')
q('SELECT * FROM t1')
q('USE evosql')
q('SET SCHEMA default')

print()
print('=== Test db.schema.table ===')
q('SELECT * FROM rdb.sch.t1')

print('=== Context Preserved Test ===')
q('CREATE SCHEMA IF NOT EXISTS myctx')
q('CREATE SCHEMA IF NOT EXISTS other')
q('SET SCHEMA other')
q('CREATE TABLE ctxtest (id INT)')
print('INSERT result:')
q("INSERT INTO ctxtest VALUES (42)")
print('Verify in other:')
q('SELECT * FROM ctxtest')
q('SET SCHEMA myctx')
print('current_schema:')
q('SELECT current_schema()')
print('Qualified query:')
q('SELECT * FROM other.ctxtest')
print('After qualified - current_schema:')
q('SELECT current_schema()')
s.close()
