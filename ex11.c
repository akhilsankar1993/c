#include <stdio.h>

int main(int argc, char* argv[]) {
    int numbers[4] = { 1 };
    char name[6] = { 'A' };

    printf("numbers are %d %d %d %d\n",
        numbers[0],
        numbers[1],
        numbers[2],
        numbers[3]
    );

    printf("name each: %c %c %c %c %c %c\n",
        name[0],
        name[1],
        name[2],
        name[3],
        name[4],
        name[5]
    );

    printf("name is %s\n", name);

    numbers[0] = 1;
    numbers[1] = 2;
    numbers[2] = 3;
    numbers[3] = 4;

    name[0] = 'A';
    name[1] = 'k';
    name[2] = 'h';
    name[3] = 'i';
    name[4] = 'l';
    name[5] = '\0';

    printf("each number is %d %d %d %d\n",
        numbers[0],
        numbers[1],
        numbers[2],
        numbers[3]
    );

    printf("all the letters are %c %c %c %c %c\n",
        name[0],
        name[1],
        name[2],
        name[3],
        name[4]
    );

    printf("the whole name is %s\n", name);

    //another way to use name is through a pointer. in this case *another
    char *another = "Akhil";

    printf("another %s\n", another);

    printf("all the letters are %c\n %c\n %c\n %c\n %c\n %c\n",
        another[0],
        another[1],
        another[2],
        another[3],
        another[4],
        another[5]
    );

    return 0;
}
