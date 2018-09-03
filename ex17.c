#include <stdio.h>
#include <assert.h>
#include <string.h>

#define MAX_DATA 512
#define MAX_ROWS 100

struct Database = {
  struct Address rows[MAX_ROWS];
}

struct Connection = {
  FILE *file;
  struct Database *db;
}

struct Connection *Database_open(const char *filename, char mode) {
  struct Connection *conn = malloc(sizeof(struct Connection))

  if(!conn) {
    // error
  }

  conn->db = malloc(sizeof(struct Database));

}

int main(int argc, char *argv[]) {

  char *filename = argv[1];
  char action = argv[2][0];

  struct Connection *conn = Database_open(filename, action);

  return 0;
}
