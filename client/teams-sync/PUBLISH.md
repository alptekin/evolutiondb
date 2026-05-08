# Publishing `evolutiondb-teams-sync`

Sister document to `client/mcp-server-evosql/PUBLISH.md`. Only one
distribution channel: PyPI. After the one-time PyPI setup below, every
release is a tag push.

## TL;DR — automated path

The only thing a release needs is a version bump landing on `main`:

```bash
# Bump project.version in client/teams-sync/pyproject.toml,
# commit, push, merge to main. That's it.
```

Two workflows then chain on their own:

| Workflow                                  | Triggers on                                          | What it does                                                                 |
|-------------------------------------------|------------------------------------------------------|------------------------------------------------------------------------------|
| `.github/workflows/teams-sync-auto-tag.yml` | push to `main` touching `client/teams-sync/pyproject.toml` | Reads `project.version`, pushes tag `teams-sync-v<version>` (idempotent — skips if the tag is already there) |
| `.github/workflows/teams-sync-release.yml`  | tag push `teams-sync-v*`                            | Verifies tag/version, builds sdist + wheel, smoke-tests `evosql-teams-sync --help` from a fresh wheel install, uploads to PyPI |

The tag prefix `teams-sync-v*` is intentionally distinct from the
MCP server's `v*` so the two release pipelines don't collide.

---

## One-time PyPI setup

**Trusted Publishing** lets the workflow upload without storing a
long-lived API token in repo secrets. After the first manual upload
below claims the project name, follow these steps:

1. Go to https://pypi.org/manage/project/evolutiondb-teams-sync/settings/publishing/
2. **Add a new pending publisher** with:
   - Repository: `alptekin/evolutiondb`
   - Workflow filename: `teams-sync-release.yml`
   - Environment name: `pypi-teams-sync`
3. Once the trusted publisher is registered, the workflow's OIDC
   identity is enough — no `PYPI_API_TOKEN` secret needed for this
   project. (If the secret already exists for the MCP server, the
   action will use it as a fallback either way.)

If you skip Trusted Publishing, the existing `PYPI_API_TOKEN` repo
secret works as a fallback — same outcome, just rotated by hand.

---

## Manual / first-time path

The first release has to be done by hand because the project doesn't
exist on PyPI yet (no settings page to register the trusted publisher
on). After the first upload, switch to the automated path above.

```bash
cd client/teams-sync
python3 -m venv .venv-publish
source .venv-publish/bin/activate
pip install --upgrade pip build twine

# Build
rm -rf dist build *.egg-info
python -m build --sdist --wheel

# Smoke-test the wheel
python3 -m venv /tmp/smoke
/tmp/smoke/bin/pip install dist/evolutiondb_teams_sync-*.whl
/tmp/smoke/bin/evosql-teams-sync --help    # should print usage

# Upload — needs your PyPI account credentials or an API token.
twine upload dist/*
```

After the first successful upload:

- The PyPI page exists at https://pypi.org/project/evolutiondb-teams-sync/
- Go register the Trusted Publisher (steps in the previous section).
- All subsequent releases are tag pushes.

---

## Version bumping

Single source of truth: `client/teams-sync/pyproject.toml` →
`project.version`. The CI workflow asserts the tag matches that
field, so a missed bump fails fast instead of publishing the wrong
artifact.

`teams_sync/__init__.py` also has a `__version__` constant that is
displayed nowhere but `import teams_sync; teams_sync.__version__`.
Keep it in lockstep — there's no test for that today, but a release
script could grep both files for the same version string.
