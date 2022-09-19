#include <stdio.h>
#include <stdlib.h>

int main() {
    int num = 0;
    int con = 0;
    int fatorial = 1;
    printf("Please, type an intenger number: ");
    scanf("%i", &num);
    while (con < num) {
        fatorial = fatorial * (num - con);
        con += 1;
    }
    printf("%i", fatorial);
    return 0;
}