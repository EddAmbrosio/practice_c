#include <stdio.h>
#include <stdlib.h>

void binary(int k) {
    if ( k == 0) 
            printf("%d", k);
    else {
        binary(k/2);
        printf("%i", k % 2);
    }
    
}

int main(void) {
    int n;

    printf("Type a decimal value: ");
    scanf("%i", &n);
    binary(n);
    return 0;
}