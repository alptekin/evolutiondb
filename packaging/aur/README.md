# EvolutionDB on the Arch User Repository

Two AUR packages are maintained from this directory:

| Package           | What it is                                            |
|-------------------|-------------------------------------------------------|
| `evolutiondb-bin` | downloads the prebuilt binary from the GitHub Release |
| `evolutiondb`     | compiles from source via the bundled Makefile         |

Both install the same files (`/usr/bin/evosql-server`,
`/usr/lib/systemd/system/evolutiondb.service`, MIT license) and both
declare a mutual `conflicts` so a host only ever has one engine.

The two PKGBUILDs live under
`client/aur/evolutiondb{,-bin}/`. The submission process is identical
for both — you push the directory contents to the matching AUR repo.

## One-time setup

```bash
# 1. Make an AUR account at https://aur.archlinux.org/register
# 2. Add your SSH public key under "My Account" → "Edit SSH Key"
# 3. Confirm the username + key from the command line:
ssh aur@aur.archlinux.org help
```

## Submitting `evolutiondb-bin`

```bash
# Clone the (initially empty) AUR repo. AUR creates the repo on
# first push, so a 404 here is fine — just continue.
git clone ssh://aur@aur.archlinux.org/evolutiondb-bin.git aur-bin
cd aur-bin

# Copy the maintainer files in.
cp ../client/aur/evolutiondb-bin/PKGBUILD          .
cp ../client/aur/evolutiondb-bin/evolutiondb.install .
cp ../client/aur/evolutiondb-bin/.SRCINFO          .

# Sanity-check the build locally (Arch host required).
makepkg -si --noconfirm        # builds + installs + removes

# Regenerate .SRCINFO from PKGBUILD so AUR's web view stays in sync.
makepkg --printsrcinfo > .SRCINFO

git add PKGBUILD evolutiondb.install .SRCINFO
git commit -m "Initial import: evolutiondb-bin 3.0.0"
git push origin master
```

After the first push the package shows up at
`https://aur.archlinux.org/packages/evolutiondb-bin`. Later updates
follow the same shape: bump `pkgver` in `PKGBUILD`, refresh
`.SRCINFO`, commit + push.

## Submitting `evolutiondb`

Same recipe with `evolutiondb` instead of `evolutiondb-bin`. The
source variant needs makedeps (gcc, make, bison, flex) and rebuilds
from a release tarball, so `makepkg -si` takes a minute or two on
first build.

## Bumping versions

For both packages:

1. Bump `pkgver` in `PKGBUILD`. Reset `pkgrel=1`.
2. For `evolutiondb-bin`: refresh the per-arch `sha256sums_*` entries:
   ```bash
   curl -sL "https://github.com/alptekin/evolutiondb/releases/download/server-v<new-version>/evosql-server-linux-x86_64.sha256" | awk '{print $1}'
   curl -sL "https://github.com/alptekin/evolutiondb/releases/download/server-v<new-version>/evosql-server-linux-arm64.sha256"  | awk '{print $1}'
   ```
3. `makepkg --printsrcinfo > .SRCINFO`
4. Commit with the message `evolutiondb-bin <new-version>` and push.

The PKGBUILD URLs reference `server-v${pkgver}` so the systemd unit
and LICENSE files pinned by the package are always the snapshot that
matches the binary you're shipping.

## Stale packages

AUR auto-flags a package as out-of-date when an upstream release
tag exists past the published `pkgver`. The flag arrives by email
on the maintainer account. To clear it: push the version bump above,
then click "Unflag package" on the AUR page.
