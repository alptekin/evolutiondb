/* shim.h — SwiftPM-friendly wrapper that points at the real header.
 *
 * SwiftPM resolves the `header "shim.h"` directive in the module
 * map relative to this directory. We forward to the canonical
 * include path so the Swift module picks up exactly the public
 * surface of libevosql-memory.
 *
 * Build with:
 *   swift build -Xcc -I../libevosql-memory/include
 *
 * (The Package.swift build instructions in README.md show the full
 * invocation.)
 */
#ifndef CEVOSQLMEMORY_SHIM_H
#define CEVOSQLMEMORY_SHIM_H

#include "evosql_memory.h"

#endif
