// Smoke example for the Node.js binding.
//
//   cd client/node-evosql-memory
//   make -C ../libevosql-memory     # build the C SDK first
//   npm install
//   npm run example
'use strict';

const { Connection } = require('..');

function main() {
    const c = new Connection('127.0.0.1', 9967, 'admin', 'admin');
    try {
        c.exec('DROP MEMORY STORE IF EXISTS node_demo');
        c.exec('CREATE MEMORY STORE node_demo');

        c.memoryPut('node_demo', 'users', 'alice',
                     '{"role":"pm","team":"infra"}');
        const value = c.memoryGet('node_demo', 'users', 'alice');
        console.log('alice ->', value);

        c.exec('DROP MEMORY STORE node_demo');
    } finally {
        c.close();
    }
}

main();
