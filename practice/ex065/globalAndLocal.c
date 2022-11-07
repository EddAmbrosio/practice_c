#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int age1 = 17;

void print(int a) {
    //printf("\nAge: %i", a);
    a++;
    age1++;
}

int main(void) {
    int age = 14;
    printf("\nAge: %i\n", age);
    printf("\nAge1: %i\n", age1);
    print(age);
    printf("\nAge: %i\n", age);
    printf("\nAge1: %i\n", age1);
    return 0;
}