package io.evolutiondb.evosqlmemory;

public class EvoException extends RuntimeException {
    public final int    code;
    public final String sqlstate;

    public EvoException(String message, int code, String sqlstate) {
        super(message);
        this.code     = code;
        this.sqlstate = sqlstate == null ? "" : sqlstate;
    }
}
