# EvolutionDB macOS Installer

Builds a native macOS Installer.app wizard package (`.pkg`) and a
drag-mountable disk image (`.dmg`) for the EvolutionDB server binary.
End users double-click the `.dmg`, open the `.pkg` inside, click
through three short screens, and the server runs from boot.

## What gets installed

| Path                                                       | What it does                                              |
|------------------------------------------------------------|-----------------------------------------------------------|
| `/usr/local/bin/evosql-server`                             | the database engine binary                                |
| `/usr/local/share/evosql/`                                 | data directory (DB file, WAL, server log)                 |
| `/usr/local/share/evosql/uninstall.sh`                     | one-line removal script                                   |
| `/Library/LaunchDaemons/com.evolutiondb.server.plist`      | system-level supervisor that keeps the server up at boot  |

The server listens on `127.0.0.1:5433` (PostgreSQL wire) and
`127.0.0.1:9967` (native EVO protocol). Default credentials are
`admin` / `admin` and the auto-generated random password path is
bypassed via `EVOSQL_USER_NAME` and `EVOSQL_PASSWORD` set in the
LaunchDaemon plist.

## Building locally

```bash
# Version defaults to whatever src/include/version.h says, so the
# common case needs no second argument.
./build.sh /path/to/evosql-server-macos-arm64

# Override only when you want to stamp a non-canonical version.
./build.sh /path/to/evosql-server-macos-arm64 3.0.0
```

Outputs land in `./out/`:

```
EvolutionDB-3.0.0.pkg     # productbuild wizard
EvolutionDB-3.0.0.dmg     # single-file distribution
```

## CI

`.github/workflows/macos-installer.yml` runs on every `server-v*`
tag. It downloads the `evosql-server-macos-arm64` binary from the
matching GitHub Release, packages it, and re-attaches the `.pkg`,
`.dmg`, and their `.sha256` manifests to the same release.

## Removing

```bash
sudo /usr/local/share/evosql/uninstall.sh
```

That stops the LaunchDaemon, unloads its plist, and deletes the
binary, data directory, and supervisor file.
