#include <stdio.h>

int main(void) {
    int x = 27;
    int* ptr;

    ptr = &x;

    printf("The value of the variable stored in x is: %i\n", x);
    printf("Address of the value is: %x \n", &x);
    printf("Content of the variable pointed by the x is: %x\n", ptr);
    
}