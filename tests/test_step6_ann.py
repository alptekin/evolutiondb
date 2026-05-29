"""Step 6 end-to-end mechanics: save writes b64i8 emb/emb2, search
gathers candidates via engine ANN (ORDER BY emb <=> 'b64i8:..') + RRF
fuse over the union, on the new (b64i8-aware) engine binary. Fake
embedder keeps it deterministic and instant (no model load)."""
import os, sys, uuid
sys.path.insert(0, "client/mcp-server-evosql")
from mcp_server_evosql.server import MemoryBackend
from mcp_server_evosql.query_transform import _NoOpTransform

DIM = 8
KEYS = ["alpha", "beta", "gamma", "delta"]

def vec_for(text):
    t = (text or "").lower()
    v = [0.01] * DIM
    for i, k in enumerate(KEYS):
        if k in t:
            v[i] = 1.0
    return v

class FakeEmb:
    def __init__(self, kind): self.kind = kind; self.model_name = "fake-" + kind
    def embed(self, t): return vec_for(t)
    def embed_query(self, t): return vec_for(t)
    def embed_passage(self, t): return vec_for(t)

prefix = "s6test_" + uuid.uuid4().hex[:6]
b = MemoryBackend("127.0.0.1", 5455, "admin", "admin", "evosql", prefix,
                  embedder=FakeEmb("local"), embedder2=FakeEmb("e5"),
                  query_transform=_NoOpTransform())
assert b._ann_pool > 0
user = "u1"

docs = {}
for k in KEYS:
    docs[k] = b.save(user, f"this is the {k} document about {k} topic")
for i in range(8):  # filler, far from any keyword
    b.save(user, f"unrelated filler note number {i}")

ok = True
for k in KEYS:
    res = b.search(user, f"find the {k} one", limit=3)
    top = res[0]["key"] if res else None
    hit = (top == docs[k])
    print(f"query '{k}': top={'HIT' if hit else 'MISS'} "
          f"({len(res)} results)")
    ok = ok and hit

# sender/tag path still functions (no crash) on the ANN path
r2 = b.search(user, "alpha", limit=5, tag="nonexistent_tag")
print("tag-filter path:", "ok" if isinstance(r2, list) else "FAIL")

print("RESULT:", "PASS" if ok else "FAIL")
sys.exit(0 if ok else 1)
