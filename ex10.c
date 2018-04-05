#include <stdio.h>
#include <ctype.h>

int main(int argc, char* argv[])
{
    if (argc == 1) {
        printf("ERROR: you need atleast one argument \n");
        //this is the code to return when you need to abort a program.
        return 1;
    }

    for (int j = 1; j < argc; j++) {
        for (int i = 0; argv[j][i] != '\0'; i++) {
            char letter = tolower(argv[j][i]);

            switch (letter) {
                case 'a':
                    printf("%d: 'A'\n", i);
                    break;

                case 'e':
                    printf("%d: 'E'\n", i);
                    break;

                case 'i':
                    printf("%d: 'I'\n", i);
                    break;

                case 'o':
                    printf("%d: 'O'\n", i);
                    break;

                case 'u':
                    printf("%d: 'U'\n", i);
                    break;

                case 'y':
                    if (i > 2) {
                      printf("%d, 'Y'\n", i);
                    }
                    break;

                default:
                    printf("%d: %c is not a vowel\n", i, letter);
            }
        }
    }

    return 0;
}
