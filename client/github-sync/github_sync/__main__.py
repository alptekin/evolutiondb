"""Console-script entry: `python -m github_sync` or
`evolutiondb-github-sync` once installed."""
from .sync import main

if __name__ == "__main__":
    raise SystemExit(main())
