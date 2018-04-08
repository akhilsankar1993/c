#include <stdio.h>

int main(int argc, char* argv[]) {
    int i = 0;
    // int k = 0;

    // char str[] = "blah\0";
    char str2[] = { 'a', 'b', 'c', 'd'};

    // printf("str is: %s\n", str);
    // printf("is made of: %c, %c, %c, %c, %c\n",str[0], str[1],str[2],str[3],str[4]);
    // printf("is made of: %c, %c, %c, %c, %c\n",str2[0], str2[1],str2[2],str2[3], str2[4]);

    printf("size of str2: %lu\n", sizeof(str2));
    for(int i = 0; i < sizeof(str2); i++) {
        printf("letter: %d: %c\n", i, str2[i]);
    }

    for(int i = 1; i < argc; i++) {
        printf("arg %d: %s\n", i, argv[i]);
    }

    char *states[] = {
        "california",
        "delaware",
        "new jersey",
        "colorado"
    };

    int num_states = 4;

    for(i = 0; i < num_states; i++) {
        printf("state %d: %s\n", i, states[i]);
    }

    return 0;
}
