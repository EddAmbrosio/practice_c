#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    int tabu = 0;
    printf("\nType the multiplication table that you want to: \n");
    scanf("%i", &tabu);
    for(int x = 1; x <= 10; ++x) {
        printf("\n%i X %i = %i\n", x, tabu, x * tabu);
    }
    return 0;
}