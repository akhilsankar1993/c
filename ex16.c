#include <stdio.h>
#include <assert.h>
#include <stdlib.h>
#include <string.h>

struct Person {
    char *name;
    int age;
    int height;
    int weight;
};

// function to create a new Person struct instance (note that it returns an instance of struct Person)
struct Person *Person_create(char *name, int age, int height, int weight) {
  
    /*
      malloc generates a pointer to an allocated block of memory appropriately sized 
      for the struct Person. Here the value of instance is the address of that 
      pointer, and it has a type of struct Person.
    */
    
    struct Person *instance = malloc(sizeof(struct Person));
    
    /*
      we can kill this function if the malloc fails to generate a pointer 
      (i.e. instance == NULL)
    */
    
    assert(instance != NULL);
    
  /* 
    recall that instance is a pointer, not an actual struct. so, we need to first
    dereference it =>  *() to get the struct, and then we can set its attribute 
    values. In explicit parlance, that looks like: (*instance).name = "foo". But this 
    notation is common and C gives us a shorthand -> which means the same thing.
  */

    // why use strdup instead of just dereferencing the pointer passed in as an arg?
    instance->name = strdup(name);
    instance->age = age;
    instance->height = height;
    instance->weight = weight;

    return instance;
}

void Person_destroy(struct Person *instance) {
  assert(instance != NULL);
  
  /*
    C doesn't have a concept of garbage collection, so any allocated memory needs
    to be freed/cleared manually at the end. not doing this causes memory leaks!
  */
  free(instance->name);
  free(instance);
}

void Person_print(struct Person *instance) {
  printf("Name: %s\n", instance->name);
  printf("Age: %d\n", instance->age);
  printf("Height: %d\n", instance->height);
  printf("Weight: %d\n\n", instance->weight);
}

int main(int argc, char *argv[]) {
    // make two people instances
    struct Person *akhil = Person_create("Akhil", 25, 71, 175);
    struct Person *vishwam = Person_create("Vishwam", 30, 70, 165);
    
    // print them out along with their location in memory
    printf("%s is located at %p\n", akhil->name, akhil);
    Person_print(akhil);
    
    printf("%s is located at %p\n", vishwam->name, vishwam);
    Person_print(vishwam);
    
    // make everyone 20 years old and print them out again
    printf("make everyone 20 years old:\n\n");
    
    akhil->age = 20;
    vishwam->age = 20;
    Person_print(akhil);
    Person_print(vishwam);
    
    // delete both people
    printf("we now destroy the two people instances:\n");
    Person_destroy(akhil);
    Person_print(akhil);
    
    Person_destroy(vishwam);
    Person_print(vishwam);
    
    return 0;
}

