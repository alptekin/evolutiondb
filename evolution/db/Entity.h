/*
 * Entity.h — Entity store templates (Task 225, Feature #225)
 *
 * Drop-in for LangChain ConversationEntityMemory and CrewAI
 * EntityMemory. Per-entity row holds the latest summary + a
 * mention_count that auto-increments on every PUT and a last_seen
 * timestamp that advances to NOW().
 *
 *   CREATE ENTITY STORE name [IF NOT EXISTS]
 *   DROP   ENTITY STORE name [IF EXISTS]
 *   ENTITY PUT INTO name VALUES ('key', 'summary' [, 'facts'])
 *   ENTITY GET FROM name WHERE KEY = 'k'
 *   ENTITY RANK FROM name [LIMIT n]      -- by mention_count DESC
 *   SHOW   ENTITY STORES
 */
#ifndef EVO_ENTITY_H
#define EVO_ENTITY_H

void  ResetEntityOpts(void);
void  SetEntityStoreName(const char *name);
void  SetEntityKey(const char *key);
void  SetEntitySummary(const char *summary);
void  SetEntityFacts(const char *facts_or_null);
void  SetEntityLimit(int n);

int   CreateEntityStoreProcess(int if_not_exists);
int   DropEntityStoreProcess(int if_exists);
int   EntityPutProcess(void);
int   EntityGetProcess(void);
int   EntityRankProcess(void);

#endif /* EVO_ENTITY_H */
