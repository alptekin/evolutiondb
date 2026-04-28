package io.evolutiondb.evosqlmemory;

public class NotFoundException extends EvoException {
    public NotFoundException(String message) {
        super(message, -7, "");
    }
}
