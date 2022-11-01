#include <stdio.h>

void printer(int* num) {
    printf("%i\n", *num);
    *num = 80;
}
int main(void) {
    int age = 35;
    
    printer(&age);
    printf("In main: %i\n", age);
    return 0;
}