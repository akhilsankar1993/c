#include <stdio.h>
#include <assert.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

struct Address {
    int id;
    int set;
    char name[MAX_DATA];
    char email[MAX_DATA];
}

struct Database {
    struct Address rows[MAX_ROWS];
}

struct Connection {
    FILE *file;
    struct Database *db;
}

void Database_create(struct Connection *conn) {
    int i = 0;

    for(i = 0; i < MAX_ROWS; i++) {
      struct Address addr = { .id = i, .set = 0 };
      conn->db->rows[i] = addr;
    }
}

struct Connection *Database_open(const char *filename, char mode) {
    struct Connection *conn = malloc(sizeof(struct Connection))

    if(!conn) {
      // memory error!
    }

    conn->db = malloc(sizeof(struct Database));
    if(!conn->db) {
      // memory error!
    }

    if(mode == 'c') {
        // set file attribute as opened file, with streaming positioned at the
        // beginning of the file, for writing.
        conn->file = fopen(filename, 'w');
    } else {
        // open file for reading and writing here.
        conn->file = fopen(filename, 'r+');

        if(conn->file) {
            Database_load(conn);
        }
    }



}

int main(int argc, char *argv[]) {
    char *filename = argv[1];
    char action = argv[2][0];

    struct Connection *conn = Database_open(filename, action);

    return 0;
}
