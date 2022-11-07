#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int myStrlen(char str[]) {
    int tam = 0;

    while(str[tam] != '\0') {
        tam++;
    }
    return tam;
}

void printString(char characBy[]) {
    int i = 0;
    while (characBy[i] != '\0') {
        printf("%c", characBy[i]);
        i++;
    }
    printf("\n");   
}

int main(void) {
    char vet[20] = {"Hello"};

    printf("strlen: %i\n", strlen(vet));
    printf("myStrlen: %i\n", myStrlen(vet));
    printString(vet);


    return 0;
}