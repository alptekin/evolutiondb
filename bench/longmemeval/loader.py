"""
loader.py — read the LongMemEval public dataset format.

LongMemEval (https://github.com/xiaowu0162/LongMemEval) ships JSON
files with one record per question. Each record looks like:

    {
      "question_id": "q_0001",
      "question_type": "single-session-user",
      "question": "What is my favourite jazz musician?",
      "answer": "Miles Davis",
      "haystack_sessions": [
        {"session_id": "s_001",
         "messages": [{"role": "user", "content": "..."}, ...]},
        ...
      ]
    }

This loader is format-only — it reads a JSON file (or directory of
JSON files) and yields plain Python dicts. The harness handles the
ingest + recall path on its own.
"""
from __future__ import annotations

import json
import os
from typing import Iterator, List


def iter_records(path: str) -> Iterator[dict]:
    """Yield records from a single .json/.jsonl file or every .json file
    in a directory."""
    if os.path.isdir(path):
        for name in sorted(os.listdir(path)):
            full = os.path.join(path, name)
            if not (name.endswith(".json") or name.endswith(".jsonl")):
                continue
            yield from iter_records(full)
        return

    if path.endswith(".jsonl"):
        with open(path, "r", encoding="utf-8") as fh:
            for line in fh:
                line = line.strip()
                if not line:
                    continue
                yield json.loads(line)
        return

    with open(path, "r", encoding="utf-8") as fh:
        data = json.load(fh)
    if isinstance(data, list):
        yield from data
    else:
        yield data


def load_questions(path: str) -> List[dict]:
    return list(iter_records(path))
