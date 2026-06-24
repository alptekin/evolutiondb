# EvolutionDB Linux Installer

Builds three end-user packages from a single statically-linked
`evosql-server` binary:

| Format        | Use case                                              |
|---------------|-------------------------------------------------------|
| `.deb`        | Debian, Ubuntu, Mint, Pop!_OS                         |
| `.rpm`        | Fedora, RHEL, CentOS Stream, openSUSE                 |
| `.AppImage`   | Portable single-file binary, works on any glibc-2.34+ |

Each package is built for both `x86_64` and `arm64` separately.

## What gets installed (.deb / .rpm)

| Path                                            | Purpose                              |
|-------------------------------------------------|--------------------------------------|
| `/usr/bin/evosql-server`                        | the database engine                  |
| `/lib/systemd/system/evolutiondb.service`       | systemd supervisor                   |
| `/var/lib/evolutiondb/`                         | data directory (DB + WAL)            |
| `/var/log/evolutiondb/`                         | server log                           |

After install the daemon runs as the `evolutiondb` system user, binds
to `127.0.0.1:5433` (PostgreSQL wire) and `127.0.0.1:9967` (native
EVO protocol), and restarts on failure via systemd.

Default credentials are `admin` / `admin`.

## What the AppImage does

The AppImage is a self-contained file. Double-click to mount, the
embedded `AppRun` exec's the bundled binary with the user's home
folder as the data directory (`~/.evosql/data`). No system changes,
no daemon. Useful for "I just want to try it" demos and immutable
distros.

## Building locally

```bash
sudo apt-get install -y dpkg-dev alien fakeroot
# AppImage support is optional; install appimagetool if you want it.

# Version defaults to src/include/version.h. Pass an empty string
# as the second argument when you also need to set arch.
./build.sh /path/to/evosql-server-linux-x86_64 ''  amd64
./build.sh /path/to/evosql-server-linux-arm64  ''  arm64
```

Outputs land in `./out/`:

```
evolutiondb_3.0.0_amd64.deb
evolutiondb-3.0.0.x86_64.rpm
EvolutionDB-3.0.0-x86_64.AppImage
```

## CI

`.github/workflows/linux-installer.yml` triggers on every `server-v*`
tag. Two matrix legs (`ubuntu-latest` and `ubuntu-22.04-arm`)
download the matching server binary from the GitHub Release, build
their packages, and re-attach them to the same Release.

## Removing

```bash
sudo apt remove  evolutiondb        # keep data
sudo apt purge   evolutiondb        # nuke data
# or, on rpm distros:
sudo dnf remove  evolutiondb
```
