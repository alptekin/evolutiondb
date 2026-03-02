/*
 * evosql-cli — Interactive CLI for EvoSQL (EVO wire protocol)
 *
 * Connects to an EvoSQL server on the EVO protocol port (default 9967)
 * and provides an interactive SQL prompt with command history.
 *
 * Usage:
 *   evosql-cli [-h HOST] [-p PORT]
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
 *  Networking helpers
 * ================================================================ */
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
        char c;
        int n = recv(s, &c, 1, 0);
        if (n <= 0) return -1;
        if (c == '\n') break;
        if (c == '\r') continue;
        buf[pos++] = c;
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
static int evo_connect(const char *host, int port)
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
        return (int)SOCKET_INVALID;
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
        return (int)SOCKET_INVALID;
    }

    /* Send EVO greeting */
    send_line(s, "EVO");

    /* Read server greeting */
    char line[4096];
    if (net_recv_line(s, line, sizeof(line)) < 0) {
        fprintf(stderr, "Error: no server greeting\n");
        socket_close(s);
        return (int)SOCKET_INVALID;
    }

    if (strncmp(line, "HELLO", 5) != 0) {
        fprintf(stderr, "Error: unexpected greeting: %s\n", line);
        socket_close(s);
        return (int)SOCKET_INVALID;
    }

    return (int)s;
}

static int evo_execute(socket_t s, const char *sql)
{
    char line[65536];
    int sql_len = (int)strlen(sql);

    /* Send: SQL <len>\n<sql>\n */
    char header[64];
    snprintf(header, sizeof(header), "SQL %d", sql_len);
    if (send_line(s, header) < 0) return -1;
    if (send_line(s, sql)    < 0) return -1;

    /* Read response lines until READY */
    while (1) {
        if (net_recv_line(s, line, sizeof(line)) < 0) return -1;

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
            if (net_recv_line(s, line, sizeof(line)) < 0) return -1;
            if (strncmp(line, "COLS ", 5) == 0) {
                res.num_cols = atoi(line + 5);
                res.cols = (char **)calloc(res.num_cols, sizeof(char *));

                /* Read column names */
                for (int c = 0; c < res.num_cols; c++) {
                    if (net_recv_line(s, line, sizeof(line)) < 0) { result_free(&res); return -1; }
                    if (strncmp(line, "COL ", 4) == 0) {
                        res.cols[c] = strdup(line + 4);
                    } else {
                        res.cols[c] = strdup("?");
                    }
                }
            }

            /* Read rows until END */
            int cells_cap = res.num_cols * 64;
            res.cells = (char **)calloc(cells_cap, sizeof(char *));

            while (1) {
                if (net_recv_line(s, line, sizeof(line)) < 0) { result_free(&res); return -1; }

                if (strcmp(line, "END") == 0) break;

                if (strcmp(line, "ROW") == 0) {
                    /* Grow cells array if needed */
                    if ((res.num_rows + 1) * res.num_cols > cells_cap) {
                        cells_cap *= 2;
                        res.cells = (char **)realloc(res.cells, cells_cap * sizeof(char *));
                    }

                    for (int c = 0; c < res.num_cols; c++) {
                        if (net_recv_line(s, line, sizeof(line)) < 0) { result_free(&res); return -1; }
                        int idx = res.num_rows * res.num_cols + c;
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
            if (net_recv_line(s, line, sizeof(line)) >= 0 && strncmp(line, "TAG ", 4) == 0) {
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
    int i;

    for (i = 1; i < argc; i++) {
        if ((strcmp(argv[i], "-h") == 0 || strcmp(argv[i], "--host") == 0) && i + 1 < argc)
            host = argv[++i];
        else if ((strcmp(argv[i], "-p") == 0 || strcmp(argv[i], "--port") == 0) && i + 1 < argc)
            port = atoi(argv[++i]);
        else if (strcmp(argv[i], "--help") == 0) {
            printf("Usage: evosql-cli [-h HOST] [-p PORT]\n");
            printf("  -h, --host   Server hostname (default: localhost)\n");
            printf("  -p, --port   Server port     (default: 9967)\n");
            return 0;
        }
    }

    /* Connect */
    int sock = evo_connect(host, port);
    if (sock == (int)SOCKET_INVALID) return 1;

    printf("Connected to EvoSQL at %s:%d\n", host, port);
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
            send_line((socket_t)sock, "QUIT");
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

        /* Strip trailing semicolons for history neatness */
        add_history_entry(sql);

        /* Execute */
        if (evo_execute((socket_t)sock, sql) < 0) {
            fprintf(stderr, "Connection lost.\n");
            free(line);
            break;
        }

        printf("\n");
        free(line);
    }

    save_history();
    socket_close((socket_t)sock);

#ifdef _WIN32
    WSACleanup();
#endif

    return 0;
}
