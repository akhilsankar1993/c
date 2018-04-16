#include <stdio.h>

int main(int argc, char *argv[]) {
    int ages[] = { 10, 20, 30, 40 };
    char *names[] = { "Akhil", "Sankar", "Vishwam", "Chitra"};
    
    printf("The third element in ages is %d at address %d\n", *(ages+2), ages+2);
    printf("The third element in names is %s at address %d\n\n  ", *(names+2), names+2);    
    /* 
        ages is a variable that stores the address of the first element of the array
        in memory. so doing something like ages+2 gives you the address of the 3rd
        element in the array. this makes it an integer pointer!
        
        names also does the same thing. but in this case, each of the elements in
        the array is a pointer to where that string lives in RAM. so doing something
        like names+2 will only give you the raw value of the 3rd element in the array
        which is an address. this also makes names a pointer to a character 
        pointer!
    */
    
    int *cur_ages = ages;
    char **cur_names = names;
    
    /*
        here cur_ages is defined as a pointer to an integer, and it points to ages.
        recall that ages itself is a pointer to the address of the first element
        in the ages memory block. ages' raw value is this address so cur_ages' 
        raw value is also that same address. to resolve to the pointed value of 
        cur_ages, use the *() syntax.
        
        extending this idea, cur_names is defined as a pointer to a character 
        pointer, and it points to names. the variable names is a pointer to the 
        to the raw address of the first element of the names memory block. so
        this makes it a pointer to the character pointer. to resolve to the 
        3rd pointed value, we can do cur_names+2, which gives us the 
        
        
    */
    printf("the diff between cur_names and names is %s, %s\n", *cur_names, *names);
    
    printf("the third element cur_names points to is %s\n", cur_names[2]);
    printf("the third element cur_ages points to is %d\n", cur_ages[2]);
    
    return 0;
}