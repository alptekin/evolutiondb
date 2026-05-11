EvolutionDB on Windows
======================

This installer placed the server here:

    C:\Program Files\EvolutionDB\evosql-server.exe

The data directory and log files live under:

    %PROGRAMDATA%\EvolutionDB\data
    %PROGRAMDATA%\EvolutionDB\log

The Windows service "EvolutionDB" is set to start automatically on
boot and is running right now.

CONNECT
-------

Any PostgreSQL-compatible client works:

    psql -h 127.0.0.1 -p 5433 -U admin -d evosql

Default password: admin

DBeaver, TablePlus, pgAdmin, and other tools that speak PostgreSQL
wire will all connect with the same credentials.

MANAGE THE SERVICE
------------------

Open Services.msc and look for "EvolutionDB Server", or use the
command line:

    sc.exe start   EvolutionDB
    sc.exe stop    EvolutionDB
    sc.exe query   EvolutionDB

REMOVE
------

Use Settings → Apps → Installed apps → EvolutionDB → Uninstall.
The uninstaller stops the service, deletes the program files, and
removes the Add/Remove Programs entry. The data directory is left
in place; delete %PROGRAMDATA%\EvolutionDB manually if you want.
