#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int value;
    struct no *next;
} No;

void put_In_the_Start (No **list, int num) {
    No *new = malloc(sizeof(No));

    if(new) {
        new->value = num;
        new->next = *list;
        *list = new;
    } else {
        printf("Erro at trying to alocate the memory!");
    }
}

int main(void) {

    return 0;
}