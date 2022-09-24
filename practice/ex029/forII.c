#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    for(int a = 0, b = 10; a <= 10 && b > 0; ++a, --b) {
        printf("%i", a);
        printf(" - ");
        printf("%i\n", b);
    }
    return 0;
}