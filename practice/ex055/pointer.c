#include <stdio.h>
#include <string.h>

int main(void) {
    int num = 10;
    int* p = &num;
    int** pp = &p;

    printf("The num value: %i\n", num);
    printf("The address of the num: %p\n", &num);
    printf("The value of p: %p\n", p);
    printf("The address of p: %p\n", &p);
    printf("The value pointed by p: %i\n", *p);
    printf("The value of pp: %p\n", pp);
    printf("The address of pp: %p\n", &pp);
    printf("The value pointed by pp: %i\n", **pp);
}