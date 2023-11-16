#include <stdio.h>
#include <string.h>


struct person {
    char name[50]; 
    int age;
};


typedef struct person person;

int main() {
    
    person kim;

    
    strcpy(kim.name, "Shawn");

    
    kim.age = 23;

    
    printf("Name: %s\n", kim.name);
    printf("Age: %d\n", kim.age);

    return 0;
}

