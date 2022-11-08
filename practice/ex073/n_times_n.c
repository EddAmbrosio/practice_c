#include <stdio.h>
#include <stdlib.h>

int potence(int k, int p) {
    if (p == 0) 
        return 1;
    else 
        return k * potence(k, p - 1);
}

int main(void) {
    int n, x;

    printf("Type a value to x and another value to n: ");
    scanf("%i %i", &x, &n);

    printf("The result of the %i elevated to %i is: %i\n", x, n, potence(x, n));
    return 0;
}