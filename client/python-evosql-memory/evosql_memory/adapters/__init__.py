"""
Framework adapters built on top of the evosql_memory ctypes core.

Each module is independent — import the one your stack needs:

    from evosql_memory.adapters.langgraph_evosql import EvoCheckpointSaver
    from evosql_memory.adapters.langchain_evosql import EvoChatMessageHistory
    from evosql_memory.adapters.llamaindex_evosql import EvoKVStore
    from evosql_memory.adapters.crewai_evosql    import EvoCrewMemory
    from evosql_memory.adapters.autogen_evosql   import EvoAutoGenMemory
    from evosql_memory.adapters.mem0_compat      import Memory

Adapters are intentionally light — duck-typed against the framework's
interface contract. They DO NOT import the framework itself; this
keeps installation lean and avoids dragging dependency hell into
applications that only use one adapter. If your runtime imports e.g.
LangChain alongside this adapter, the duck-typed objects slot in
because the framework checks for the methods, not the class.
"""
