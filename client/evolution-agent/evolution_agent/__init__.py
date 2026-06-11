"""evolution-agent — a standalone agent loop over EvolutionDB's MCP tools."""
from .loop import AgentLoop, DEFAULT_MODEL, DEFAULT_SYSTEM, build_anthropic_tools

__version__ = "0.1.0"
__all__ = ["AgentLoop", "DEFAULT_MODEL", "DEFAULT_SYSTEM",
           "build_anthropic_tools"]
