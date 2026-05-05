# How we gave Claude a real long-term memory — and why it lives in a SQL database

_A field note from building EvolutionDB's agent-memory layer. ~12 min read._

---

If you've spent any real time working with a large language model in the
last two years, you've felt the same papercut over and over again:

> _"Wait, I told you this last week."_

You haven't, of course — not really. There is no _last week_ for the model.
Each new conversation lands on a clean desk. You re-introduce yourself, you
re-explain the project, you re-paste the constraints, you re-list the
preferences, and twenty minutes later the model knows you again — until you
close the tab.

That round-trip is the hidden tax of working with AI today. We pay it in
tokens, in latency, in our own patience, and (if you've looked at your bill)
in dollars.

This post is about what happened when we stopped paying it.

## The shape of the problem

The problem is genuinely simple, which makes the way the industry has
solved it kind of telling.

What you actually want is for the assistant to **remember** the things
you've already said — your role, your taste in coffee, the codebase you're
working on, the deadline that just slipped, the customer whose feature you
shipped last sprint. You don't want it to remember _everything_; you want
it to remember the small set of things that turn out to matter.

The way most stacks have solved this so far is by gluing together four or
five different products:

1. **A relational database**, because that's where the boring transactional
   stuff lives.
2. **A document store** — usually MongoDB or DynamoDB — because chat
   history doesn't fit cleanly into rows and columns.
3. **A vector database** — Pinecone, Weaviate, Qdrant — because you need to
   ask "what did we say that was _kind of like_ this?" and rows-and-columns
   can't answer that.
4. **A queue or a polling loop**, so the assistant wakes up when something
   new is written.
5. **A custom checkpoint table**, because the agent framework has its own
   opinions about how state should be saved.

That's four pricing pages, four authentication models, four backup
stories, and at least three places where the data can quietly disagree with
itself. And it's all in service of one simple promise: _remember me next
time_.

We thought there was a better way to do this. The better way turned out to
be a single binary.

## What we shipped

EvolutionDB is an open-source SQL database written in C. It speaks the
PostgreSQL wire protocol on port 5433, so any tool you already use — psql,
DBeaver, pgAdmin, Grafana, your existing ORM — can connect to it without
changes. Underneath, it has the parts you'd expect from a serious database:
ACID transactions, snapshot isolation, write-ahead logging, replication,
encryption at rest, point-in-time recovery.

What's different is what we put on top of those parts.

In version 3, we added a small set of native primitives that are designed
specifically for AI agents — not as an afterthought layer on top of a
generic key-value store, but as first-class objects in the SQL grammar:

```sql
CREATE MEMORY STORE   user_memory   WITH (embedding_dim = 1536);
CREATE CHECKPOINT STORE agent_state;
CREATE MESSAGE LOG    chat_history;
CREATE DOCUMENT STORE knowledge_base;
CREATE GRAPH STORE    relationships;     -- bitemporal edges
CREATE ENTITY STORE   people_and_things;
```

Each of those is a real catalog object. You can transact across them. You
can query them with `SELECT`. You can back them up with the same tools you
back up your other tables. They show up in DBeaver. They are not a layer.
They are the database.

Then we built one more thing — the piece that closed the loop for us
personally — a small bridge that lets Claude Desktop and Claude Code talk
to that memory directly, through Anthropic's open Model Context Protocol.

## What it actually feels like

Here is what you do, end to end.

You start the database (one Docker container). You drop a small JSON
configuration into Claude Desktop's settings file. You restart the app.

A small icon appears in the chat composer telling you the memory bridge is
connected. From there, you just talk normally.

> "Remember that I'm a senior backend engineer at a payments company.
>  I prefer Go over Python, I usually work in 90-minute focus blocks,
>  and my dog's name is Pickle."

Claude reads that, decides it's worth remembering, and writes a single row
into the memory store. The conversation continues. You close the window.

A week later — different machine, different chat, different topic
entirely — you open Claude and ask for help debugging a stack trace. Before
it answers, the model silently asks the memory bridge: _what do I know
about this user that's relevant?_ The bridge returns the three or four
facts that match. The model adjusts its response: it phrases the
explanation in Go idioms instead of Python ones, it suggests a debugging
approach that fits a 90-minute session, and somewhere in the middle of the
reply it asks how Pickle is doing.

You did not paste any context. You did not write a system prompt. You did
not "prime" the model. You just talked, last week, and the model
remembered.

## Where the savings come from

This sounds almost cosmetic — _the model knows my dog's name_ — until you
look at the numbers underneath.

A typical "professional" Claude conversation today is preceded by about
3,000 tokens of preloaded context: who you are, what you're working on,
your formatting preferences, the rules you want followed. Across a hundred
real conversations a month, that's 300,000 tokens of repeated input.

With a real memory store, the model doesn't preload context. It pulls
exactly the few facts it needs, exactly when it needs them. The same
hundred conversations end up costing about 25,000 tokens of context — an
order of magnitude less.

In dollar terms on the current pricing of a frontier model, you go from
about ninety cents in repeated context per month to about twenty-six
cents. Three and a half times cheaper inputs without losing a single piece
of relevant information.

That's the boring win. The interesting win is what happens to the
conversations themselves: they get shorter, they get less repetitive, and
they get noticeably more personal. The model stops having to ask, and you
stop having to explain.

## Why a SQL database, of all things

This is the question we got the most while building it: _why on earth
would memory live in a relational database?_

Three reasons, in order of importance.

**Because memory is data, and data has rules.** Every team that's run a
serious agent in production has eventually had to answer awkward
questions: who can read this user's memories? Can we delete them on
request? Can we audit what was added in the last seven days? Can we ship
a backup to another region? These are not novel problems. The database
industry has been answering them for forty years. Reinventing them on top
of a vector index is, charitably, a waste of effort.

**Because the data wants to talk to itself.** A real memory store is not
just "facts about the user." It's facts, plus the conversations those
facts were extracted from, plus the entities those facts mention, plus the
documents the user referenced, plus the relationships between all of it.
Stitching that together across a relational store, a vector store, and a
document store means writing reconciliation code forever. Stitching it
together inside one database is just `JOIN`.

**Because operators have learned things, and we should let them keep using
what they know.** EvolutionDB speaks the PostgreSQL wire protocol. Every
DBA tool, every monitoring dashboard, every existing ETL pipeline, every
ORM, every type-safe query builder in every language — they all work
unchanged. The agent-memory layer is new. The way you run it in
production is not.

## The temporal trick

There is one place where AI memory is genuinely different from regular
data, though, and we ended up leaning into it.

Traditional databases are good at telling you _what is true now_. Agent
memory needs to tell you _what was true at a given point in time_. If a
user told the assistant in March that they worked at Company A, and in May
they tell it they've moved to Company B, the system has to retain both
facts and know which one was true when.

This sounds exotic, but it turns out we already had it. EvolutionDB's
storage engine has used multi-version concurrency control since version 2
— every row carries the transaction ID that created it and (eventually)
the one that retired it, and the engine can produce a consistent view of
the database as it existed at any prior moment.

We exposed that capability at the SQL surface:

```sql
SELECT * FROM user_memory
FOR SYSTEM_TIME AS OF '2026-03-15 12:00:00'
WHERE user_id = 'alice';
```

That's a real query against the same memory store, returning the version
of Alice's memory that existed two months ago. It costs nothing extra to
store — the data is already there, because the engine never throws away
old versions until it's safe to. It costs nothing extra to query — the
visibility check is the same one the engine runs on every read anyway.

This matters in practice. Agents that act on stale information are
dangerous. Agents that can _audit themselves_ — show me exactly what I
believed at the moment I made this decision — are trustworthy. The
temporal layer is what makes the second kind of agent possible.

## Push, not poll

The other thing we cared about, which we'd never seen handled well in any
other agent stack, was reactivity.

If the agent is supposed to wake up when something new happens — a new
email, a new ticket, a new memory written by another tool — the usual
solution is polling. The agent asks "anything new?" once a second,
forever, hoping to catch interesting events before they go stale.

This is wasteful, slow, and surprisingly expensive in cloud bills. We
replaced it with a real publish/subscribe primitive backed by the
database's commit log. The moment a row is written and committed, every
subscriber is notified — through the same connection they're already using
for queries. No polling loop. No second service. No Kafka.

The measured difference, on our reference workload, is about 2,900× — a
notification delivered in under a millisecond instead of waited-for over
roughly a second. For an agent ticking through a long task, that's the
difference between feeling like a co-worker and feeling like a script.

## What's next

The memory layer is the foundation. The next thing built on top of it is
the part that changes how _you_ use the model — the bridge that lets
Claude Desktop and Claude Code reach into your personal memory store
without any of the framework plumbing. That bridge is open source, two
hundred lines of Python, ships with the database, and works today.

There is more coming: native gRPC streaming for memory events, a Rust
binding over the C client, a managed-service option for teams who want
the layer without operating it themselves, and benchmark comparisons
against the rest of the agent-memory space.

But the part that mattered to us, the part that made this whole project
worth doing, is already in your hands: a Claude that remembers, a database
that holds it, and one less papercut between you and the work.

If you've read this far and you build with agents — give it a weekend.
Open the repository, run one Docker command, configure Claude, and tell
it three things about yourself.

Then come back next week and ask it something it has no business knowing.

It will know.

---

_EvolutionDB is open source, MIT-licensed, and lives at
[github.com/alptekin/evolutiondb](https://github.com/alptekin/evolutiondb)._

_If you want the engineering details — how the memory store is laid out
on disk, how the MCP bridge speaks JSON-RPC over stdio, how the vector
index manages recall against a live transactional workload — there's a
companion technical series starting [here](series/00-index.md)._
