#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    char c;
    printf("Typer a charactere in uppercase: ");
    scanf("%c", &c);

    if (c >= 'a') {
        printf("The letter have you typed in uppercase: > %c <", toupper(c));
    }
    return 0;
}