"""DXT entry point — defers to the mcp_server_evosql package.

Claude Desktop's DXT runtime invokes this file with `python3
${__dirname}/server/main.py`. We've vendored the package + its
psycopg dependency under server/lib at build time, so this entry
point only has to put that directory on PYTHONPATH and call the
existing `main()`.
"""
from __future__ import annotations

import os
import sys

_HERE = os.path.dirname(os.path.abspath(__file__))
_LIB  = os.path.join(_HERE, "lib")
if os.path.isdir(_LIB) and _LIB not in sys.path:
    sys.path.insert(0, _LIB)

# Also support running from a checkout where the package sits
# alongside the dxt/ folder (useful for `dxt pack` from source).
_PKG_PARENT = os.path.normpath(os.path.join(_HERE, "..", ".."))
if os.path.isdir(_PKG_PARENT) and _PKG_PARENT not in sys.path:
    sys.path.insert(0, _PKG_PARENT)

from mcp_server_evosql.server import main

if __name__ == "__main__":
    raise SystemExit(main())
