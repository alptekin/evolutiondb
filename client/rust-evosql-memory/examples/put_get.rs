//! cargo run --example put_get
use evosql_memory::Connection;

fn main() -> Result<(), Box<dyn std::error::Error>> {
    let conn = Connection::new("127.0.0.1", 9967, "admin", "admin")?;

    conn.exec("DROP MEMORY STORE IF EXISTS rs_demo")?;
    conn.exec("CREATE MEMORY STORE rs_demo")?;

    conn.memory_put("rs_demo", "users", "alice",
                     r#"{"role":"pm","team":"infra"}"#, None)?;
    let value = conn.memory_get("rs_demo", "users", "alice")?;
    println!("alice -> {value}");

    conn.exec("DROP MEMORY STORE rs_demo")?;
    Ok(())
}
