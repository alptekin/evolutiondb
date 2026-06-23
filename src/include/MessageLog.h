/*
 * MessageLog.h — Append-only chat history (Task 222, Feature #222)
 *
 * Per-session ordered message buffer for AI agents.
 *   CREATE MESSAGE LOG name [WITH (ttl='7 days')]
 *   DROP   MESSAGE LOG name [IF EXISTS]
 *   LOG APPEND  INTO name VALUES ('session', 'role', 'content' [, 'meta_json'])
 *   LOG READ    FROM name WHERE SESSION = 'sid' [LAST n]
 *   LOG TRUNCATE FROM name WHERE SESSION = 'sid' [BEFORE seq]
 *   LOG COUNT   FROM name WHERE SESSION = 'sid'
 *
 * The backing table ml_<name> carries a global monotonic seq plus a
 * session_id column; reads filter by session and order by seq.
 */
#ifndef EVO_MESSAGELOG_H
#define EVO_MESSAGELOG_H

void  ResetMessageLogOpts(void);

void  SetMessageLogName(const char *name);
void  SetMessageLogTtlDays(int days);
void  SetMessageLogSession(const char *sid);
void  SetMessageLogRole(const char *role);
void  SetMessageLogContent(const char *content);
void  SetMessageLogMeta(const char *meta_or_null);
void  SetMessageLogLimit(int n);
void  SetMessageLogTruncSeq(long long seq);

int   CreateMessageLogProcess(int if_not_exists);
int   DropMessageLogProcess(int if_exists);
int   LogAppendProcess(void);
int   LogReadProcess(void);
int   LogTruncateProcess(void);
int   LogCountProcess(void);

#endif /* EVO_MESSAGELOG_H */
