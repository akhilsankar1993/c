#include <stdio.h>

int main(int argc, char* argv[]) {
  int i = 0;
  while(i < 26) {
    i++;
    printf("%d\n", i);

    if (i < 26) {
      printf("we're still working...\n");
      continue;
    } else {
      printf("weve reached the last iteration. i = %d\n", i);
    }

  }

  return 0;
}
