#include <stdio.h>
#include <stdlib.h>

int factorial(int k) {
    if(k == 0 || k == 1) 
        return 1;
    else {
        return k * factorial(k - 1);
    }
}

int main(void) {
    int n;
    printf("Type a value bigger than zero: ");
    scanf("%i", &n);

    printf("The factorial of %i is %i. ", n, factorial(n));
    return 0;
}