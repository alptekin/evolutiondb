/*
 * evosql-cli — Interactive CLI for EvoSQL (EVO wire protocol)
 *
 * Connects to an EvoSQL server on the EVO protocol port (default 9967)
 * and provides an interactive SQL prompt with command history.
 *
 * Usage:
 *   evosql-cli [-h HOST] [-p PORT] [-u USER]
 *
 * Features:
 *   • Persistent command history (saved to ~/.evosql_history)
 *   • Arrow-key navigation and line editing
 *   • Tabular result display with column alignment
 *   • Multi-line SQL (type \ at line end to continue)
 *   • \q or exit/quit to disconnect
 *
 * Cross-platform:
 *   Linux  — uses GNU readline (link with -lreadline)
 *   Windows — built-in simple readline replacement using Win32 console API
 */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

/* ----------------------------------------------------------------
 *  Optional TLS support (compile with -DEVOSQL_CLI_TLS -lssl -lcrypto)
 * ---------------------------------------------------------------- */
#ifdef EVOSQL_CLI_TLS
#include <openssl/ssl.h>
#include <openssl/err.h>
#endif

/* ----------------------------------------------------------------
 *  evo_secure_wipe — local copy for standalone CLI binary
 *  (CWE-14: Compiler Removal of Code to Clear Buffers)
 * ---------------------------------------------------------------- */
static void *(*const volatile cli_memset_ptr)(void *, int, size_t) = memset;
static void evo_secure_wipe(void *ptr, size_t len)
{
    cli_memset_ptr(ptr, 0, len);
}

/* ================================================================
 *  Platform detection
 * ================================================================ */
#ifdef _WIN32
  #include <winsock2.h>
  #include <ws2tcpip.h>
  #include <windows.h>
  #pragma comment(lib, "ws2_32.lib")
  typedef SOCKET socket_t;
  #define SOCKET_INVALID INVALID_SOCKET
  #define socket_close(s) closesocket(s)
  #ifndef strncasecmp
  #define strncasecmp _strnicmp
  #endif
#else
  #include <sys/socket.h>
  #include <netinet/in.h>
  #include <netinet/tcp.h>
  #include <arpa/inet.h>
  #include <netdb.h>
  #include <unistd.h>
  #include <termios.h>
  typedef int socket_t;
  #define SOCKET_INVALID (-1)
  #define socket_close(s) close(s)
#endif

/* ================================================================
 *  Readline abstraction
 * ================================================================ */
#ifdef _WIN32
/* ---- Windows: simple built-in readline with history ---- */

#define MAX_HISTORY 500
#define MAX_LINE    4096

static char *history[MAX_HISTORY];
static int   history_count = 0;
static char  history_file[512] = "";

static void init_history_file(void) {
    const char *home = getenv("USERPROFILE");
    if (!home) home = ".";
    snprintf(history_file, sizeof(history_file), "%s\\.evosql_history", home);
}

static void load_history(void) {
    if (!history_file[0]) init_history_file();
    FILE *f = fopen(history_file, "r");
    if (!f) return;
    char line[MAX_LINE];
    while (fgets(line, sizeof(line), f) && history_count < MAX_HISTORY) {
        /* Strip newline */
        int len = (int)strlen(line);
        while (len > 0 && (line[len-1] == '\n' || line[len-1] == '\r'))
            line[--len] = '\0';
        if (len > 0)
            history[history_count++] = _strdup(line);
    }
    fclose(f);
}

static void save_history(void) {
    if (!history_file[0]) return;
    FILE *f = fopen(history_file, "w");
    if (!f) return;
    int start = history_count > MAX_HISTORY ? history_count - MAX_HISTORY : 0;
    for (int i = start; i < history_count; i++) {
        if (history[i]) fprintf(f, "%s\n", history[i]);
    }
    fclose(f);
}

static void add_history_entry(const char *line) {
    if (!line || !line[0]) return;
    /* Skip if same as last */
    if (history_count > 0 && strcmp(history[history_count-1], line) == 0) return;
    if (history_count < MAX_HISTORY) {
        history[history_count++] = _strdup(line);
    } else {
        free(history[0]);
        memmove(history, history + 1, (MAX_HISTORY - 1) * sizeof(char *));
        history[MAX_HISTORY - 1] = _strdup(line);
    }
}

static char *cli_readline(const char *prompt) {
    static char buf[MAX_LINE];
    HANDLE hIn  = GetStdHandle(STD_INPUT_HANDLE);
    HANDLE hOut = GetStdHandle(STD_OUTPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hIn, &mode);

    /* Check if stdin is a console (not piped) */
    if (GetFileType(hIn) != FILE_TYPE_CHAR) {
        /* Non-interactive — just use fgets */
        printf("%s", prompt);
        fflush(stdout);
        if (!fgets(buf, sizeof(buf), stdin)) return NULL;
        int len = (int)strlen(buf);
        while (len > 0 && (buf[len-1] == '\n' || buf[len-1] == '\r'))
            buf[--len] = '\0';
        return _strdup(buf);
    }

    SetConsoleMode(hIn, ENABLE_PROCESSED_INPUT);

    int pos = 0, len = 0;
    int hist_idx = history_count; /* browsing index */
    char saved[MAX_LINE] = "";    /* what user typed before history nav */

    printf("%s", prompt);
    fflush(stdout);
    buf[0] = '\0';

    while (1) {
        INPUT_RECORD rec;
        DWORD nread;
        if (!ReadConsoleInputW(hIn, &rec, 1, &nread)) break;
        if (rec.EventType != KEY_EVENT || !rec.Event.KeyEvent.bKeyDown) continue;

        WORD vk = rec.Event.KeyEvent.wVirtualKeyCode;
        WCHAR wch = rec.Event.KeyEvent.uChar.UnicodeChar;

        if (vk == VK_RETURN) {
            printf("\n");
            break;
        }
        if (vk == VK_UP) {
            if (hist_idx > 0) {
                if (hist_idx == history_count) strncpy(saved, buf, MAX_LINE);
                hist_idx--;
                /* Clear line */
                printf("\r%s%*s\r%s", prompt, len, "", prompt);
                strncpy(buf, history[hist_idx], MAX_LINE - 1);
                len = pos = (int)strlen(buf);
                printf("%s", buf);
                fflush(stdout);
            }
            continue;
        }
        if (vk == VK_DOWN) {
            if (hist_idx < history_count) {
                hist_idx++;
                printf("\r%s%*s\r%s", prompt, len, "", prompt);
                if (hist_idx == history_count)
                    strncpy(buf, saved, MAX_LINE - 1);
                else
                    strncpy(buf, history[hist_idx], MAX_LINE - 1);
                len = pos = (int)strlen(buf);
                printf("%s", buf);
                fflush(stdout);
            }
            continue;
        }
        if (vk == VK_LEFT) {
            if (pos > 0) { pos--; printf("\b"); fflush(stdout); }
            continue;
        }
        if (vk == VK_RIGHT) {
            if (pos < len) { printf("%c", buf[pos]); pos++; fflush(stdout); }
            continue;
        }
        if (vk == VK_HOME) {
            while (pos > 0) { printf("\b"); pos--; }
            fflush(stdout);
            continue;
        }
        if (vk == VK_END) {
            while (pos < len) { printf("%c", buf[pos]); pos++; }
            fflush(stdout);
            continue;
        }
        if (vk == VK_DELETE) {
            if (pos < len) {
                memmove(buf + pos, buf + pos + 1, len - pos);
                len--;
                buf[len] = '\0';
                printf("%s ", buf + pos);
                for (int j = len - pos + 1; j > 0; j--) printf("\b");
                fflush(stdout);
            }
            continue;
        }
        if (wch == '\b' || vk == VK_BACK) {
            if (pos > 0) {
                pos--;
                memmove(buf + pos, buf + pos + 1, len - pos);
                len--;
                buf[len] = '\0';
                printf("\b%s \b", buf + pos);
                for (int j = len - pos; j > 0; j--) printf("\b");
                fflush(stdout);
            }
            continue;
        }
        /* Ctrl+C */
        if (wch == 3) {
            printf("^C\n");
            buf[0] = '\0';
            len = pos = 0;
            printf("%s", prompt);
            fflush(stdout);
            continue;
        }
        /* Ctrl+D on empty line = EOF */
        if (wch == 4 && len == 0) {
            SetConsoleMode(hIn, mode);
            return NULL;
        }
        /* Printable character */
        if (wch >= 32 && len < MAX_LINE - 1) {
            memmove(buf + pos + 1, buf + pos, len - pos + 1);
            buf[pos] = (char)wch;
            len++;
            pos++;
            buf[len] = '\0';
            printf("%s", buf + pos - 1);
            for (int j = len - pos; j > 0; j--) printf("\b");
            fflush(stdout);
        }
    }

    SetConsoleMode(hIn, mode);
    return _strdup(buf);
}

#else
/* ---- Linux: use GNU readline ---- */
#include <readline/readline.h>
#include <readline/history.h>

#define MAX_HISTORY 500
static char history_file[512] = "";

static void init_history_file(void) {
    const char *home = getenv("HOME");
    if (!home) home = ".";
    snprintf(history_file, sizeof(history_file), "%s/.evosql_history", home);
}

static void load_history(void) {
    if (!history_file[0]) init_history_file();
    read_history(history_file);
}

static void save_history(void) {
    if (!history_file[0]) return;
    write_history(history_file);
    history_truncate_file(history_file, MAX_HISTORY);
}

static void add_history_entry(const char *line) {
    if (line && line[0]) add_history(line);
}

static char *cli_readline(const char *prompt) {
    return readline(prompt);
}
#endif

/* ================================================================
 *  CLI connection object — wraps socket + optional TLS
 * ================================================================ */
typedef struct {
    socket_t sock;
#ifdef EVOSQL_CLI_TLS
    SSL     *ssl;
    SSL_CTX *ctx;
#endif
    int      is_tls;
} cli_conn_t;

static cli_conn_t g_conn;  /* global connection state */

static void cli_conn_init(cli_conn_t *c, socket_t sock)
{
    c->sock   = sock;
#ifdef EVOSQL_CLI_TLS
    c->ssl    = NULL;
    c->ctx    = NULL;
#endif
    c->is_tls = 0;
}

static int cli_conn_start_tls(cli_conn_t *c)
{
#ifdef EVOSQL_CLI_TLS
    SSL_load_error_strings();
    SSL_library_init();
    OpenSSL_add_all_algorithms();

    c->ctx = SSL_CTX_new(TLS_client_method());
    if (!c->ctx) return -1;

    c->ssl = SSL_new(c->ctx);
    if (!c->ssl) {
        SSL_CTX_free(c->ctx);
        c->ctx = NULL;
        return -1;
    }

    SSL_set_fd(c->ssl, (int)c->sock);

    int ret = SSL_connect(c->ssl);
    if (ret <= 0) {
        fprintf(stderr, "TLS handshake failed: %d\n",
                SSL_get_error(c->ssl, ret));
        SSL_free(c->ssl);
        SSL_CTX_free(c->ctx);
        c->ssl = NULL;
        c->ctx = NULL;
        return -1;
    }

    c->is_tls = 1;
    return 0;
#else
    (void)c;
    return -1;  /* TLS not compiled in */
#endif
}

static void cli_conn_shutdown(cli_conn_t *c)
{
#ifdef EVOSQL_CLI_TLS
    if (c->ssl) {
        SSL_shutdown(c->ssl);
        SSL_free(c->ssl);
        c->ssl = NULL;
    }
    if (c->ctx) {
        SSL_CTX_free(c->ctx);
        c->ctx = NULL;
    }
#endif
    if (c->sock != SOCKET_INVALID) {
        socket_close(c->sock);
        c->sock = SOCKET_INVALID;
    }
    c->is_tls = 0;
}

/* ================================================================
 *  Networking helpers — TLS-transparent
 * ================================================================ */
static int cli_send(cli_conn_t *c, const char *buf, int len)
{
    int total = 0, n;
    while (total < len) {
#ifdef EVOSQL_CLI_TLS
        if (c->is_tls && c->ssl) {
            n = SSL_write(c->ssl, buf + total, len - total);
        } else
#endif
        {
            n = send(c->sock, buf + total, len - total, 0);
        }
        if (n <= 0) return -1;
        total += n;
    }
    return total;
}

static int cli_recv_line(cli_conn_t *c, char *buf, int maxlen)
{
    int pos = 0;
    while (pos < maxlen - 1) {
        char ch;
        int n;
#ifdef EVOSQL_CLI_TLS
        if (c->is_tls && c->ssl) {
            n = SSL_read(c->ssl, &ch, 1);
        } else
#endif
        {
            n = recv(c->sock, &ch, 1, 0);
        }
        if (n <= 0) return -1;
        if (ch == '\n') break;
        if (ch == '\r') continue;
        buf[pos++] = ch;
    }
    buf[pos] = '\0';
    return pos;
}

static int cli_send_line(cli_conn_t *c, const char *line)
{
    int len = (int)strlen(line);
    if (cli_send(c, line, len) < 0) return -1;
    if (cli_send(c, "\n", 1) < 0) return -1;
    return 0;
}

/* Backward-compat wrappers — old socket_t signatures used during
 * the initial plaintext greeting before TLS is established.       */
static int net_send(socket_t s, const char *buf, int len)
{
    int total = 0, n;
    while (total < len) {
        n = send(s, buf + total, len - total, 0);
        if (n <= 0) return -1;
        total += n;
    }
    return total;
}

static int net_recv_line(socket_t s, char *buf, int maxlen)
{
    int pos = 0;
    while (pos < maxlen - 1) {
        char ch;
        int n = recv(s, &ch, 1, 0);
        if (n <= 0) return -1;
        if (ch == '\n') break;
        if (ch == '\r') continue;
        buf[pos++] = ch;
    }
    buf[pos] = '\0';
    return pos;
}

static int send_line(socket_t s, const char *line)
{
    int len = (int)strlen(line);
    if (net_send(s, line, len) < 0) return -1;
    if (net_send(s, "\n", 1) < 0) return -1;
    return 0;
}

/* ================================================================
 *  Result display — tabular formatting
 * ================================================================ */
#define MAX_COLS 64
#define MAX_ROWS 500

typedef struct {
    char **cols;       /* column names */
    int    num_cols;
    char **cells;      /* row_idx * num_cols + col_idx */
    int    num_rows;
    char   tag[256];
} EvoResult;

static void result_init_evo(EvoResult *r) {
    r->cols = NULL;
    r->num_cols = 0;
    r->cells = NULL;
    r->num_rows = 0;
    r->tag[0] = '\0';
}

static void result_free(EvoResult *r) {
    int i;
    if (r->cols) {
        for (i = 0; i < r->num_cols; i++) free(r->cols[i]);
        free(r->cols);
    }
    if (r->cells) {
        for (i = 0; i < r->num_rows * r->num_cols; i++) free(r->cells[i]);
        free(r->cells);
    }
}

static void result_print(const EvoResult *r) {
    if (r->num_cols == 0) return;

    int c, row;
    /* Calculate column widths */
    int *widths = (int *)calloc(r->num_cols, sizeof(int));
    for (c = 0; c < r->num_cols; c++) {
        widths[c] = (int)strlen(r->cols[c]);
    }
    for (row = 0; row < r->num_rows; row++) {
        for (c = 0; c < r->num_cols; c++) {
            const char *val = r->cells[row * r->num_cols + c];
            int len = val ? (int)strlen(val) : 4; /* "NULL" */
            if (len > widths[c]) widths[c] = len;
        }
    }

    /* Print header */
    for (c = 0; c < r->num_cols; c++) {
        if (c > 0) printf(" | ");
        printf("%-*s", widths[c], r->cols[c]);
    }
    printf("\n");

    /* Separator */
    for (c = 0; c < r->num_cols; c++) {
        if (c > 0) printf("-+-");
        for (int j = 0; j < widths[c]; j++) printf("-");
    }
    printf("\n");

    /* Rows */
    for (row = 0; row < r->num_rows; row++) {
        for (c = 0; c < r->num_cols; c++) {
            if (c > 0) printf(" | ");
            const char *val = r->cells[row * r->num_cols + c];
            if (!val)
                printf("%-*s", widths[c], "NULL");
            else
                printf("%-*s", widths[c], val);
        }
        printf("\n");
    }

    free(widths);
}

/* ================================================================
 *  Protocol communication
 * ================================================================ */

/* Read password from terminal with echo disabled */
static void read_password(const char *prompt, char *buf, int maxlen)
{
    printf("%s", prompt);
    fflush(stdout);

#ifdef _WIN32
    HANDLE hStdin = GetStdHandle(STD_INPUT_HANDLE);
    DWORD mode;
    GetConsoleMode(hStdin, &mode);
    SetConsoleMode(hStdin, mode & ~ENABLE_ECHO_INPUT);

    int i = 0;
    while (i < maxlen - 1) {
        char c;
        DWORD read;
        ReadConsole(hStdin, &c, 1, &read, NULL);
        if (c == '\r' || c == '\n') break;
        buf[i++] = c;
    }
    buf[i] = '\0';

    SetConsoleMode(hStdin, mode);
    printf("\n");
#else
    /* Use termios to disable echo */
    struct termios old, new_term;
    tcgetattr(fileno(stdin), &old);
    new_term = old;
    new_term.c_lflag &= ~ECHO;
    tcsetattr(fileno(stdin), TCSANOW, &new_term);

    if (fgets(buf, maxlen, stdin)) {
        buf[strcspn(buf, "\n\r")] = '\0';
    } else {
        buf[0] = '\0';
    }

    tcsetattr(fileno(stdin), TCSANOW, &old);
    printf("\n");
#endif
}

static int evo_connect(const char *host, int port, const char *username,
                       const char *given_password)
{
    socket_t s;
    struct sockaddr_in addr;

#ifdef _WIN32
    WSADATA wsa;
    WSAStartup(MAKEWORD(2, 2), &wsa);
#endif

    s = socket(AF_INET, SOCK_STREAM, IPPROTO_TCP);
    if (s == SOCKET_INVALID) {
        fprintf(stderr, "Error: cannot create socket\n");
        return -1;
    }

    memset(&addr, 0, sizeof(addr));
    addr.sin_family = AF_INET;
    addr.sin_port   = htons((unsigned short)port);

    /* Resolve hostname */
    struct hostent *he = gethostbyname(host);
    if (he) {
        memcpy(&addr.sin_addr, he->h_addr_list[0], he->h_length);
    } else {
        addr.sin_addr.s_addr = inet_addr(host);
    }

    if (connect(s, (struct sockaddr *)&addr, sizeof(addr)) != 0) {
        fprintf(stderr, "Error: cannot connect to %s:%d\n", host, port);
        socket_close(s);
        return -1;
    }

    /* Initialize global connection object */
    cli_conn_init(&g_conn, s);

    /* Send EVO greeting (plaintext — just protocol identification) */
    send_line(s, "EVO");

    /* Read server greeting */
    char line[4096];
    if (net_recv_line(s, line, sizeof(line)) < 0) {
        fprintf(stderr, "Error: no server greeting\n");
        socket_close(s);
        return -1;
    }

    if (strncmp(line, "HELLO", 5) != 0) {
        fprintf(stderr, "Error: unexpected greeting: %s\n", line);
        socket_close(s);
        return -1;
    }

    /* Read next server message — could be STARTTLS or AUTH_REQUIRED */
    if (net_recv_line(s, line, sizeof(line)) < 0) {
        fprintf(stderr, "Error: no server response after greeting\n");
        socket_close(s);
        return -1;
    }

    /* STARTTLS upgrade — encrypt the connection before sending credentials */
    if (strcmp(line, "STARTTLS") == 0) {
#ifdef EVOSQL_CLI_TLS
        /* Acknowledge TLS upgrade */
        send_line(s, "STARTTLS");

        if (cli_conn_start_tls(&g_conn) < 0) {
            fprintf(stderr, "Error: TLS handshake failed\n");
            socket_close(s);
            return -1;
        }
        fprintf(stderr, "[TLS] Encrypted connection established\n");

        /* After TLS, read AUTH_REQUIRED over the encrypted channel */
        if (cli_recv_line(&g_conn, line, sizeof(line)) < 0) {
            fprintf(stderr, "Error: no auth response after TLS\n");
            cli_conn_shutdown(&g_conn);
            return -1;
        }
#else
        /* TLS not compiled in — decline and continue plaintext */
        send_line(s, "NOTLS");
        fprintf(stderr, "Warning: server offered TLS but client was built without TLS support.\n");
        fprintf(stderr, "         Credentials will be sent in cleartext!\n");
        fprintf(stderr, "         Rebuild with: make TLS=1\n");

        /* Read AUTH_REQUIRED over plaintext */
        if (net_recv_line(s, line, sizeof(line)) < 0) {
            fprintf(stderr, "Error: no auth response\n");
            socket_close(s);
            return -1;
        }
#endif
    }

    /* Authentication flow (encrypted if TLS succeeded) */
    if (strcmp(line, "AUTH_REQUIRED") == 0) {
        char password[256];
        if (given_password && given_password[0]) {
            strncpy(password, given_password, sizeof(password) - 1);
            password[sizeof(password) - 1] = '\0';
        } else {
            read_password("Password: ", password, sizeof(password));
        }

        /* Send AUTH <username> <password> */
        char auth_msg[1024];
        snprintf(auth_msg, sizeof(auth_msg), "AUTH %s %s", username, password);
        evo_secure_wipe(password, sizeof(password));
        cli_send_line(&g_conn, auth_msg);
        evo_secure_wipe(auth_msg, sizeof(auth_msg));

        /* Read AUTH_OK or ERR */
        if (cli_recv_line(&g_conn, line, sizeof(line)) < 0) {
            fprintf(stderr, "Error: connection closed during auth\n");
            cli_conn_shutdown(&g_conn);
            return -1;
        }

        if (strcmp(line, "AUTH_OK") != 0) {
            fprintf(stderr, "Authentication failed: %s\n", line);
            cli_conn_shutdown(&g_conn);
            return -1;
        }
    }

    return 0;  /* success */
}

static int evo_execute(cli_conn_t *c, const char *sql)
{
    char line[65536];
    int sql_len = (int)strlen(sql);

    /* Send: SQL <len>\n<sql>\n */
    char header[64];
    snprintf(header, sizeof(header), "SQL %d", sql_len);
    if (cli_send_line(c, header) < 0) return -1;
    if (cli_send_line(c, sql)    < 0) return -1;

    /* Read response lines until READY */
    while (1) {
        if (cli_recv_line(c, line, sizeof(line)) < 0) return -1;

        if (strcmp(line, "READY") == 0) {
            break;
        }

        if (strncmp(line, "ERR ", 4) == 0) {
            fprintf(stderr, "ERROR: %s\n", line + 4);
            /* Keep reading until READY */
            continue;
        }

        if (strcmp(line, "OK") == 0) {
            /* DDL/DML — wait for TAG and READY */
            continue;
        }

        if (strncmp(line, "TAG ", 4) == 0) {
            printf("%s\n", line + 4);
            continue;
        }

        if (strcmp(line, "RESULT") == 0) {
            /* Parse result set */
            EvoResult res;
            result_init_evo(&res);

            /* COLS n */
            if (cli_recv_line(c, line, sizeof(line)) < 0) return -1;
            if (strncmp(line, "COLS ", 5) == 0) {
                res.num_cols = atoi(line + 5);
                res.cols = (char **)calloc(res.num_cols, sizeof(char *));

                /* Read column names */
                for (int col = 0; col < res.num_cols; col++) {
                    if (cli_recv_line(c, line, sizeof(line)) < 0) { result_free(&res); return -1; }
                    if (strncmp(line, "COL ", 4) == 0) {
                        res.cols[col] = strdup(line + 4);
                    } else {
                        res.cols[col] = strdup("?");
                    }
                }
            }

            /* Read rows until END */
            int cells_cap = res.num_cols * 64;
            res.cells = (char **)calloc(cells_cap, sizeof(char *));

            while (1) {
                if (cli_recv_line(c, line, sizeof(line)) < 0) { result_free(&res); return -1; }

                if (strcmp(line, "END") == 0) break;

                if (strcmp(line, "ROW") == 0) {
                    /* Grow cells array if needed */
                    if ((res.num_rows + 1) * res.num_cols > cells_cap) {
                        cells_cap *= 2;
                        res.cells = (char **)realloc(res.cells, cells_cap * sizeof(char *));
                    }

                    for (int col = 0; col < res.num_cols; col++) {
                        if (cli_recv_line(c, line, sizeof(line)) < 0) { result_free(&res); return -1; }
                        int idx = res.num_rows * res.num_cols + col;
                        if (strncmp(line, "FIELD NULL", 10) == 0 && line[10] == '\0') {
                            res.cells[idx] = NULL;
                        } else if (strncmp(line, "FIELD ", 6) == 0) {
                            res.cells[idx] = strdup(line + 6);
                        } else {
                            res.cells[idx] = strdup("?");
                        }
                    }
                    res.num_rows++;
                }
            }

            /* Read TAG */
            if (cli_recv_line(c, line, sizeof(line)) >= 0 && strncmp(line, "TAG ", 4) == 0) {
                strncpy(res.tag, line + 4, sizeof(res.tag) - 1);
            }

            result_print(&res);
            printf("(%d row%s)\n", res.num_rows, res.num_rows == 1 ? "" : "s");
            result_free(&res);
            continue;
        }
    }

    return 0;
}

/* ================================================================
 *  Main
 * ================================================================ */
int main(int argc, char *argv[])
{
    const char *host = "localhost";
    int port = 9967;
    const char *username = "admin";
    const char *password = NULL;
    int i;

    for (i = 1; i < argc; i++) {
        if ((strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--host") == 0) && i + 1 < argc)
            host = argv[++i];
        else if ((strcmp(argv[i], "-p") == 0 || strcmp(argv[i], "--port") == 0) && i + 1 < argc)
            port = atoi(argv[++i]);
        else if ((strcmp(argv[i], "-u") == 0 || strcmp(argv[i], "--user") == 0) && i + 1 < argc)
            username = argv[++i];
        else if ((strcmp(argv[i], "-W") == 0 || strcmp(argv[i], "--password") == 0) && i + 1 < argc)
            password = argv[++i];
        else if (strcmp(argv[i], "--help") == 0) {
            printf("Usage: evosql-cli [-h HOST] [-p PORT] [-u USER] [-W PASSWORD]\n");
            printf("  -h, --host       Server hostname  (default: localhost)\n");
            printf("  -p, --port       Server port      (default: 9967)\n");
            printf("  -u, --user       Username         (default: admin)\n");
            printf("  -W, --password   Password         (or set EVOSQL_PASSWORD)\n");
            return 0;
        }
    }

    /* Password from env var if not given on command line */
    if (!password) {
        password = getenv("EVOSQL_PASSWORD");
    }

    /* Connect */
    if (evo_connect(host, port, username, password) < 0) return 1;

    printf("Connected to EvoSQL at %s:%d%s\n", host, port,
           g_conn.is_tls ? " (TLS)" : "");
    printf("Type SQL queries, or \\q to quit.\n\n");

    /* Load history */
    init_history_file();
    load_history();

    /* Main REPL */
    while (1) {
        char *line = cli_readline("evosql> ");
        if (!line) {
            /* EOF (Ctrl+D) */
            printf("\n");
            break;
        }

        /* Skip empty lines */
        char *trimmed = line;
        while (*trimmed && isspace((unsigned char)*trimmed)) trimmed++;
        if (!*trimmed) {
            free(line);
            continue;
        }

        /* Quit commands */
        if (strcmp(trimmed, "\\q") == 0 ||
            strncasecmp(trimmed, "quit", 4) == 0 ||
            strncasecmp(trimmed, "exit", 4) == 0) {
            cli_send_line(&g_conn, "QUIT");
            free(line);
            break;
        }

        /* Multi-line support: if line ends with '\', continue reading */
        char sql[65536];
        strncpy(sql, trimmed, sizeof(sql) - 1);
        sql[sizeof(sql) - 1] = '\0';

        while (1) {
            int slen = (int)strlen(sql);
            if (slen > 0 && sql[slen - 1] == '\\') {
                sql[slen - 1] = ' ';  /* replace \ with space */
                char *cont = cli_readline("     -> ");
                if (!cont) break;
                char *ct = cont;
                while (*ct && isspace((unsigned char)*ct)) ct++;
                if (*ct) {
                    strncat(sql, ct, sizeof(sql) - strlen(sql) - 1);
                }
                free(cont);
            } else {
                break;
            }
        }

        /* Strip trailing semicolons for history neatness.
         * Do NOT record SQL containing PASSWORD clauses to history
         * file — prevents cleartext passwords leaking to disk. */
        {
            const char *s = sql;
            int has_password = 0;
            while (*s) {
                if (strncasecmp(s, "PASSWORD", 8) == 0 &&
                    (s == sql || isspace((unsigned char)s[-1])) &&
                    (s[8] == '\0' || isspace((unsigned char)s[8]))) {
                    has_password = 1;
                    break;
                }
                s++;
            }
            if (!has_password) {
                add_history_entry(sql);
            }
        }

        /* Execute */
        if (evo_execute(&g_conn, sql) < 0) {
            fprintf(stderr, "Connection lost.\n");
            free(line);
            break;
        }

        printf("\n");
        free(line);
    }

    save_history();
    cli_conn_shutdown(&g_conn);

#ifdef _WIN32
    WSACleanup();
#endif

    return 0;
}
