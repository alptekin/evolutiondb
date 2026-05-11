# EvolutionDB Windows Installer

NSIS-based Modern UI 2 wizard that wraps the
`evosql-server-windows-x86_64.exe` binary into a single setup file.
The installer:

1. Lays down `evosql-server.exe` at `C:\Program Files\EvolutionDB\`
2. Creates `%PROGRAMDATA%\EvolutionDB\data` (DB + WAL) and `\log`
3. Registers a Windows service named **EvolutionDB** that
   auto-starts on boot
4. Adds an Add/Remove Programs entry that points back at the
   bundled uninstaller

End users get a familiar Welcome / License / Install Location /
Install / Finish flow and after the wizard closes the server is
already listening on `127.0.0.1:5433` (PostgreSQL wire) and
`127.0.0.1:9967` (native EVO protocol).

## Building locally

```bash
sudo apt-get install -y nsis           # makensis is in the nsis pkg
makensis -DVERSION=0.1.0 \
         -DSRC_BINARY=/path/to/evosql-server-windows-x86_64.exe \
         EvolutionDB.nsi
```

The output sits next to the script as
`EvolutionDB-<version>-x86_64.exe`.

## Status

The installer ships only when the server-build workflow publishes
the Windows binary. Right now that leg is parked
(`adaptor/{replication,raft,distributed,pool,scram}.c` need to be
ported off raw POSIX sockets to Winsock before MinGW will link
them). Once the port lands and `evosql-server-windows-x86_64.exe`
shows up on a Release, this installer workflow picks it up
automatically.

## Removing

Settings → Apps → Installed apps → EvolutionDB → Uninstall. The
uninstaller stops + deletes the Windows service, removes the
program files, and clears the Add/Remove Programs entry. The data
directory under `%PROGRAMDATA%\EvolutionDB` is left in place so a
later reinstall picks up the existing DB; delete it by hand to do
a full wipe.
