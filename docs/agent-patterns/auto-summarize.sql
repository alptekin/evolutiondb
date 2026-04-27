-- ============================================================
-- auto-summarize.sql — Task 214 reference template
--
-- A drop-in pattern for agent applications that want to keep a
-- per-session message log under a token budget. The pattern uses
-- four pieces:
--
--   1. A normal table that stores raw messages.
--   2. token_length(text) to count whitespace-separated tokens
--      (server-side, no Python round-trip).
--   3. evo_call_external(name, payload) as the seam where the
--      caller plugs in their own LLM. v1 returns a deterministic
--      "ext:<name>:<payload>" placeholder; v2 will dispatch to a
--      real HTTP / RPC endpoint.
--   4. A stored procedure that the agent (or a MEMORY trigger)
--      calls after each PUT to compress the trailing tail when
--      the running token total exceeds the threshold.
--
-- The template intentionally stays a sketch — every project has its
-- own opinions about which messages survive, what gets summarized,
-- and what model produces the summary. Copy this file, then change
-- the body of summarize_thread to match your retention rules.
-- ============================================================

CREATE TABLE IF NOT EXISTS chat_messages (
    msg_id     INT PRIMARY KEY AUTO_INCREMENT,
    thread_id  VARCHAR(64),
    role       VARCHAR(16),
    content    TEXT,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

CREATE TABLE IF NOT EXISTS chat_summaries (
    summary_id INT PRIMARY KEY AUTO_INCREMENT,
    thread_id  VARCHAR(64),
    summary    TEXT,
    tokens_saved INT,
    created_at TIMESTAMP DEFAULT CURRENT_TIMESTAMP
);

-- ------------------------------------------------------------
-- summarize_thread(thread_id_in, max_tokens)
--
-- Walks chat_messages for the given thread, summing token_length
-- across every row. If the running total exceeds max_tokens the
-- procedure feeds the oldest contiguous prefix to the external
-- summarizer hook, deletes those rows, and inserts the resulting
-- summary into chat_summaries. Re-runnable: a no-op when the
-- thread is already under the budget.
-- ------------------------------------------------------------

CREATE PROCEDURE summarize_thread(thread_id_in VARCHAR(64), max_tokens INT)
BEGIN
    DECLARE total_tokens INT DEFAULT 0;
    DECLARE old_text TEXT DEFAULT '';
    DECLARE summary_text TEXT DEFAULT '';

    -- 1) Total tokens across every message in the thread.
    SELECT COALESCE(SUM(token_length(content)), 0)
        INTO total_tokens
        FROM chat_messages
        WHERE thread_id = thread_id_in;

    IF total_tokens <= max_tokens THEN
        RETURN;
    END IF;

    -- 2) Concatenate the oldest half of the thread into one blob.
    --    Real production templates pick a smarter cut (e.g. take
    --    everything up to the last user-assistant turn boundary).
    SELECT GROUP_CONCAT(content SEPARATOR '\n')
        INTO old_text
        FROM chat_messages
        WHERE thread_id = thread_id_in
        ORDER BY created_at ASC
        LIMIT 50;

    -- 3) Hand that blob to the external summarizer. The v1 stub
    --    returns "ext:summarize:<text>". Swap evo_call_external for
    --    a CALL into your own UDF when you wire the real LLM.
    SET summary_text = evo_call_external('summarize', old_text);

    -- 4) Persist the summary, drop the now-summarized rows.
    INSERT INTO chat_summaries (thread_id, summary, tokens_saved)
        VALUES (thread_id_in, summary_text, total_tokens - max_tokens);

    DELETE FROM chat_messages
        WHERE thread_id = thread_id_in
        ORDER BY created_at ASC
        LIMIT 50;
END;

-- ------------------------------------------------------------
-- Optional: bind the procedure to MEMORY PUT events so the
-- summarization runs automatically. The thread_id_in / max_tokens
-- are project-specific knobs; replace with whatever your trigger
-- can derive from NEW.* on the memory store.
-- ------------------------------------------------------------
--
-- CREATE TRIGGER tr_auto_summarize
--     AFTER PUT ON MEMORY STORE conversations
--     FOR EACH ROW
--     BEGIN
--         CALL summarize_thread(NEW.mem_namespace, 4000);
--     END;
