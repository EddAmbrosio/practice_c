#include <stdio.h>
#include <stdlib.h>
// 1 2 3 4 5 6
// 0 1 1 2 3 5

int fibonacci(int k) {
    if(k <= 0) {
        printf("Type a number bigger than ZERO mothefucker!!!");
        return 44444;
    }
    if ( k == 1) 
        return 0;
    else if (k == 2) 
        return 1;
    else { 
        return fibonacci(k - 1) + fibonacci(k - 2);
    }
}

int main(void) {
    int n;

    printf("Type a value bigger than zero: ");
    scanf("%i", &n);

    
    printf("\nThe number %i in the fibonacci sequencie is: %i\n", n, fibonacci(n));
    return 0;
}