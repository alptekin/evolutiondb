// swift-tools-version:5.7
import PackageDescription

// SwiftPM lets us mix a C system module (CEvoSQLMemory) and a Swift
// module (EvoSQLMemory) in the same package. The C module exposes
// libevosql-memory's headers; the Swift module wraps the C surface
// in idiomatic types.
//
// Build prerequisite: build the C SDK first so the .a/.dylib exist
// at ../libevosql-memory/build/. Then:
//
//     swift build -Xlinker -L../libevosql-memory/build
//     swift run  PutGetExample -Xlinker -L../libevosql-memory/build
let package = Package(
    name: "EvoSQLMemory",
    products: [
        .library(name: "EvoSQLMemory", targets: ["EvoSQLMemory"]),
        .executable(name: "PutGetExample", targets: ["PutGetExample"]),
    ],
    targets: [
        // System target — wraps libevosql-memory's headers + linker
        // directives so the Swift module gets the C symbols at link
        // time.
        .systemLibrary(
            name: "CEvoSQLMemory",
            path: "Sources/CEvoSQLMemory",
            pkgConfig: "evosql-memory"
        ),

        .target(
            name: "EvoSQLMemory",
            dependencies: ["CEvoSQLMemory"],
            path: "Sources/EvoSQLMemory",
            linkerSettings: [
                .linkedLibrary("evosql-memory"),
                .linkedLibrary("pthread"),
            ]
        ),

        .executableTarget(
            name: "PutGetExample",
            dependencies: ["EvoSQLMemory"],
            path: "Sources/PutGetExample",
            linkerSettings: [
                .linkedLibrary("evosql-memory"),
                .linkedLibrary("pthread"),
            ]
        ),
    ]
)
