#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    int cont = 0;
    char c;

    do {
        cont ++;
        printf("\nType 0 to leave the loop.\n");
        printf("\n%i Times\n", cont);
        c = getchar();
    } while (c != '0');
    return 0;
}