#include <stdio.h>

int main(int argc, char* argv[])
{
  int i = 0;

  if (argc == 1) {
    printf("You only have one argument, ya suck!");
  } else if (argc > 1 && argc < 4) {
    printf("you have %d arguments\n", argc); 
    printf("here's your arguments!\n");

    for(i = 0; i < argc; i++) {
      printf("%s\n", argv[i]);
    }
    printf("\n");

  } else {
    printf("you have too many arguments. you suck!");
  }

  return 0;
}
