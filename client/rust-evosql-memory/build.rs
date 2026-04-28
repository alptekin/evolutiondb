// build.rs — discover libevosql-memory and tell rustc how to link.
//
// Lookup order (first hit wins):
//   1. EVOSQL_MEMORY_LIB_DIR env var — explicit user override
//   2. ../libevosql-memory/build relative to this crate (in-tree)
//   3. The system loader path (/usr/local/lib, /usr/lib)
//
// We link against the static archive (.a) so downstream binaries don't
// need a runtime LD_LIBRARY_PATH tweak.
use std::path::PathBuf;

fn main() {
    let lib_dir = std::env::var("EVOSQL_MEMORY_LIB_DIR")
        .map(PathBuf::from)
        .unwrap_or_else(|_| {
            let here = PathBuf::from(env!("CARGO_MANIFEST_DIR"));
            here.join("..").join("libevosql-memory").join("build")
        });

    println!("cargo:rerun-if-changed=build.rs");
    println!("cargo:rerun-if-env-changed=EVOSQL_MEMORY_LIB_DIR");
    println!("cargo:rustc-link-search=native={}", lib_dir.display());
    println!("cargo:rustc-link-lib=static=evosql-memory");

    // Required by libevosql-memory's pthread dependency.
    if cfg!(target_os = "macos") {
        println!("cargo:rustc-link-lib=dylib=System");
    } else {
        println!("cargo:rustc-link-lib=dylib=pthread");
    }
}
