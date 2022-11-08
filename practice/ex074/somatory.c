#include <stdio.h>
#include <stdlib.h>

int somatory(int k) {
    if (k == 0) 
        return 0;
    else 
        return k + somatory(k - 1);
}

int main(void) {
    int n;

    printf("Type a value to x and another value to n: ");
    scanf("%i", &n);

    printf("The result of the somatory of 1 until %i: %i\n", n, somatory(n));
    return 0;
}