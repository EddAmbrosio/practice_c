#include <stdio.h>
#include <stdlib.h>

void printer1(int x) {
    if ( x == 0) 
        printf("%i ", x);
    else {
        //printf("%i ", x);
        printer(x - 1);
        printf("%i ", x);
    }
}

void printer(int x) {
    if ( x == 0) 
        printf("%i\t", x);
    else {
        printf("%i\t", x);
        printer(x - 1);
    }
}

int main(void) {
    int n, m;

    printf("Type a value bigger than zero: ");
    scanf("%i", &n);

    printf("Type another value bigger than zero: ");
    scanf("%i", &m);

    printer(n);
    printf("\n\n");
    printer1(m);

    return 0;
}