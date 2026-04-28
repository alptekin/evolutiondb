// Package evosql is a Go binding over libevosql-memory.
//
// Build prerequisite: build the C SDK first so the static archive
// exists at ../libevosql-memory/build/libevosql-memory.a, then build
// any program that imports this package with cgo enabled.
//
//	make -C ../libevosql-memory
//	go build ./examples/put_get
//
// The cgo directives below pick the relative-path archive so users
// who clone the monorepo get a working build out of the box. Override
// with the environment variables CGO_CFLAGS / CGO_LDFLAGS for a
// system-wide install.
package evosql

/*
#cgo CFLAGS:  -I${SRCDIR}/../libevosql-memory/include
#cgo LDFLAGS: -L${SRCDIR}/../libevosql-memory/build -levosql-memory -lpthread
#include <stdlib.h>
#include "evosql_memory.h"
*/
import "C"

import (
	"fmt"
	"runtime"
	"strings"
	"unsafe"
)

// ----- Errors --------------------------------------------------------
type ErrorKind int

const (
	ErrGeneral ErrorKind = iota
	ErrConnect
	ErrAuth
	ErrProtocol
	ErrSQL
	ErrBuffer
	ErrNotFound
)

type Error struct {
	Kind     ErrorKind
	Message  string
	SQLState string
}

func (e *Error) Error() string {
	if e.SQLState != "" {
		return fmt.Sprintf("evosql sql %s: %s", e.SQLState, e.Message)
	}
	return fmt.Sprintf("evosql: %s", e.Message)
}

func lastError(defaultMsg string) *Error {
	cmsg := C.evo_strerror(nil)
	cstate := C.evo_sqlstate(nil)
	msg := defaultMsg
	if cmsg != nil {
		msg = C.GoString(cmsg)
	}
	state := ""
	if cstate != nil {
		state = C.GoString(cstate)
	}
	if state != "" {
		return &Error{Kind: ErrSQL, Message: msg, SQLState: state}
	}
	return &Error{Kind: ErrGeneral, Message: msg}
}

func rcToError(rc C.int, defaultMsg string) *Error {
	e := lastError(defaultMsg)
	switch rc {
	case -2:
		e.Kind = ErrConnect
	case -3:
		e.Kind = ErrAuth
	case -4:
		e.Kind = ErrProtocol
	case -5:
		e.Kind = ErrSQL
	case -6:
		e.Kind = ErrBuffer
	case -7:
		e.Kind = ErrNotFound
	}
	return e
}

// ----- Connection -----------------------------------------------------
//
// Conn wraps a single libevosql-memory connection. Not goroutine-safe;
// keep one per goroutine.
type Conn struct {
	handle unsafe.Pointer
}

// Connect opens a connection. Caller is responsible for Close.
func Connect(host string, port int, user, password string) (*Conn, error) {
	chost := C.CString(host)
	defer C.free(unsafe.Pointer(chost))
	cuser := C.CString(user)
	defer C.free(unsafe.Pointer(cuser))
	cpass := C.CString(password)
	defer C.free(unsafe.Pointer(cpass))

	h := C.evo_connect(chost, C.int(port), cuser, cpass)
	if h == nil {
		return nil, lastError("evo_connect failed")
	}
	c := &Conn{handle: unsafe.Pointer(h)}
	runtime.SetFinalizer(c, (*Conn).Close)
	return c, nil
}

// Close releases the connection. Idempotent and safe on a finalised
// Conn — calling Close inside Conn.Drop is a no-op.
func (c *Conn) Close() error {
	if c.handle != nil {
		C.evo_close(c.handle)
		c.handle = nil
		runtime.SetFinalizer(c, nil)
	}
	return nil
}

// Exec runs a DML/DDL statement and returns the affected-row count.
func (c *Conn) Exec(sql string) (int, error) {
	csql := C.CString(sql)
	defer C.free(unsafe.Pointer(csql))
	rc := C.evo_exec(c.handle, csql)
	if rc < 0 {
		return 0, rcToError(rc, "exec")
	}
	return int(rc), nil
}

// Query runs a SELECT and returns rows where each cell is a string
// (the wire format is text). NULL columns come back as "".
func (c *Conn) Query(sql string) ([][]string, error) {
	const maxRows, maxCols, colBuf = 256, 32, 4096
	csql := C.CString(sql)
	defer C.free(unsafe.Pointer(csql))

	bufLen := maxRows * maxCols * colBuf
	buf := make([]byte, bufLen)
	var colsOut C.int
	n := C.evo_query(c.handle, csql,
		(*C.char)(unsafe.Pointer(&buf[0])),
		C.int(maxRows), C.int(maxCols), C.int(colBuf),
		&colsOut)
	if n < 0 {
		return nil, rcToError(n, "query")
	}

	rows := make([][]string, 0, int(n))
	for r := 0; r < int(n); r++ {
		row := make([]string, 0, int(colsOut))
		for col := 0; col < int(colsOut); col++ {
			off := (r*maxCols + col) * colBuf
			slot := buf[off : off+colBuf]
			end := 0
			for end < len(slot) && slot[end] != 0 {
				end++
			}
			row = append(row, string(slot[:end]))
		}
		rows = append(rows, row)
	}
	return rows, nil
}

// MemoryPut writes a row to a MEMORY STORE. embedding may be nil.
func (c *Conn) MemoryPut(store, namespace, key, valueJSON string,
	embedding []float32) error {
	cstore := C.CString(store);     defer C.free(unsafe.Pointer(cstore))
	cns    := C.CString(namespace); defer C.free(unsafe.Pointer(cns))
	ckey   := C.CString(key);       defer C.free(unsafe.Pointer(ckey))
	cval   := C.CString(valueJSON); defer C.free(unsafe.Pointer(cval))

	var cemb *C.char
	if len(embedding) > 0 {
		s := FormatVector(embedding)
		cemb = C.CString(s)
		defer C.free(unsafe.Pointer(cemb))
	}
	rc := C.evo_memory_put(c.handle, cstore, cns, ckey, cval, cemb)
	if rc != 0 {
		return rcToError(rc, "memory_put")
	}
	return nil
}

// MemoryGet returns the value JSON for (store, namespace, key) or
// returns an Error with Kind=ErrNotFound when the row is missing.
func (c *Conn) MemoryGet(store, namespace, key string) (string, error) {
	const bufSize = 32 * 1024
	cstore := C.CString(store);     defer C.free(unsafe.Pointer(cstore))
	cns    := C.CString(namespace); defer C.free(unsafe.Pointer(cns))
	ckey   := C.CString(key);       defer C.free(unsafe.Pointer(ckey))
	buf := make([]byte, bufSize)
	rc := C.evo_memory_get(c.handle, cstore, cns, ckey,
		(*C.char)(unsafe.Pointer(&buf[0])), C.int(bufSize))
	if rc == -7 {
		return "", &Error{Kind: ErrNotFound,
			Message: fmt.Sprintf("memory_get: %s/%s", namespace, key)}
	}
	if rc != 0 {
		return "", rcToError(rc, "memory_get")
	}
	end := 0
	for end < len(buf) && buf[end] != 0 {
		end++
	}
	return string(buf[:end]), nil
}

// MemoryDelete deletes one row from a MEMORY STORE.
func (c *Conn) MemoryDelete(store, namespace, key string) error {
	cstore := C.CString(store);     defer C.free(unsafe.Pointer(cstore))
	cns    := C.CString(namespace); defer C.free(unsafe.Pointer(cns))
	ckey   := C.CString(key);       defer C.free(unsafe.Pointer(ckey))
	rc := C.evo_memory_delete(c.handle, cstore, cns, ckey)
	if rc != 0 {
		return rcToError(rc, "memory_delete")
	}
	return nil
}

// CheckpointPut writes a checkpoint snapshot.
func (c *Conn) CheckpointPut(store, threadID, ns, checkpointID,
	valuesJSON, metadataJSON string) error {
	cstore := C.CString(store);          defer C.free(unsafe.Pointer(cstore))
	ctid   := C.CString(threadID);       defer C.free(unsafe.Pointer(ctid))
	cns    := C.CString(ns);             defer C.free(unsafe.Pointer(cns))
	ccid   := C.CString(checkpointID);   defer C.free(unsafe.Pointer(ccid))
	cvals  := C.CString(valuesJSON);     defer C.free(unsafe.Pointer(cvals))
	cmeta  := C.CString(metadataJSON);   defer C.free(unsafe.Pointer(cmeta))
	rc := C.evo_checkpoint_put(c.handle, cstore, ctid, cns, ccid, cvals, cmeta)
	if rc != 0 {
		return rcToError(rc, "checkpoint_put")
	}
	return nil
}

// CheckpointGetLatest returns the latest checkpoint values JSON for
// the thread or ErrNotFound if no row exists.
func (c *Conn) CheckpointGetLatest(store, threadID string) (string, error) {
	const bufSize = 64 * 1024
	cstore := C.CString(store);     defer C.free(unsafe.Pointer(cstore))
	ctid   := C.CString(threadID);  defer C.free(unsafe.Pointer(ctid))
	buf := make([]byte, bufSize)
	rc := C.evo_checkpoint_get_latest(c.handle, cstore, ctid,
		(*C.char)(unsafe.Pointer(&buf[0])), C.int(bufSize))
	if rc == -7 {
		return "", &Error{Kind: ErrNotFound,
			Message: fmt.Sprintf("checkpoint thread=%s", threadID)}
	}
	if rc != 0 {
		return "", rcToError(rc, "checkpoint_get_latest")
	}
	end := 0
	for end < len(buf) && buf[end] != 0 {
		end++
	}
	return string(buf[:end]), nil
}

// FormatVector renders a float32 slice as the "[v1,v2,...]" literal
// EvoSQL accepts as a VECTOR(N) value.
func FormatVector(vec []float32) string {
	if len(vec) == 0 {
		return ""
	}
	parts := make([]string, len(vec))
	for i, v := range vec {
		parts[i] = fmt.Sprintf("%.6f", v)
	}
	return "[" + strings.Join(parts, ",") + "]"
}
