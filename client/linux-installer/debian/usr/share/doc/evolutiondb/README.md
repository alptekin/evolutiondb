# EvolutionDB on Debian / Ubuntu

This package installs the EvolutionDB SQL engine and registers it as
a systemd service so it starts on boot.

## Files placed

| Path                                            | Purpose                       |
|-------------------------------------------------|-------------------------------|
| `/usr/bin/evosql-server`                        | The database engine binary    |
| `/lib/systemd/system/evolutiondb.service`       | systemd unit                  |
| `/var/lib/evolutiondb/`                         | Data directory (DB + WAL)     |
| `/var/log/evolutiondb/server.log`               | Server log                    |

## Connect

```bash
psql -h 127.0.0.1 -p 5433 -U admin -d evosql
# password: admin
```

## Manage the daemon

```bash
sudo systemctl status  evolutiondb
sudo systemctl restart evolutiondb
sudo systemctl stop    evolutiondb
sudo journalctl -u evolutiondb -f
```

## Remove

```bash
sudo apt remove evolutiondb         # keep the data
sudo apt purge  evolutiondb         # nuke the data too
```
