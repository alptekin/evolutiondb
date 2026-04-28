# frozen_string_literal: true

# Smoke example for the Ruby binding.
#
#   make -C ../libevosql-memory             # build the C SDK first
#   bundle install
#   bundle exec ruby examples/put_get.rb
require 'evosql_memory'

EvoSQLMemory::Connection.open('127.0.0.1', 9967, 'admin', 'admin') do |c|
  c.exec('DROP MEMORY STORE IF EXISTS rb_demo')
  c.exec('CREATE MEMORY STORE rb_demo')

  c.memory_put('rb_demo', 'users', 'alice',
                  '{"role":"pm","team":"infra"}')
  puts "alice -> #{c.memory_get('rb_demo', 'users', 'alice')}"

  c.exec('DROP MEMORY STORE rb_demo')
end
