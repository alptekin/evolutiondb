# frozen_string_literal: true

Gem::Specification.new do |spec|
  spec.name          = 'evosql_memory'
  spec.version       = '1.0.0'
  spec.authors       = ['EvolutionDB']
  spec.summary       = 'EvoSQL agent-memory client (Ruby FFI binding over libevosql-memory).'
  spec.description   = <<~DESC
    Ruby binding for EvoSQL — wraps libevosql-memory via the ffi gem
    and exposes a Connection class with memory_put / memory_get /
    checkpoint_put / checkpoint_get_latest plus a vector helper.
  DESC
  spec.license       = 'MIT'
  spec.homepage      = 'https://github.com/alptekin/evolutiondb'

  spec.required_ruby_version = '>= 2.7'

  spec.files         = Dir['lib/**/*.rb'] + ['README.md']
  spec.require_paths = ['lib']

  spec.add_dependency 'ffi', '~> 1.17'
end
