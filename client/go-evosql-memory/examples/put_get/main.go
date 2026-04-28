// Smoke example for the Go binding.
//
//	cd client/go-evosql-memory
//	make -C ../libevosql-memory          # build the C SDK first
//	go run ./examples/put_get
package main

import (
	"fmt"
	"log"

	evosql "github.com/alptekin/evolutiondb/client/go-evosql-memory"
)

func main() {
	c, err := evosql.Connect("127.0.0.1", 9967, "admin", "admin")
	if err != nil {
		log.Fatalf("connect: %v", err)
	}
	defer c.Close()

	if _, err := c.Exec("DROP MEMORY STORE IF EXISTS go_demo"); err != nil {
		log.Fatalf("drop: %v", err)
	}
	if _, err := c.Exec("CREATE MEMORY STORE go_demo"); err != nil {
		log.Fatalf("create: %v", err)
	}
	if err := c.MemoryPut("go_demo", "users", "alice",
		`{"role":"pm","team":"infra"}`, nil); err != nil {
		log.Fatalf("put: %v", err)
	}
	val, err := c.MemoryGet("go_demo", "users", "alice")
	if err != nil {
		log.Fatalf("get: %v", err)
	}
	fmt.Println("alice ->", val)

	if _, err := c.Exec("DROP MEMORY STORE go_demo"); err != nil {
		log.Fatalf("drop: %v", err)
	}
}
