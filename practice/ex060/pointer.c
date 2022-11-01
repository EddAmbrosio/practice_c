#include <stdio.h>
#include <stdlib.h>

void printer(int vet[], int tam) {
    int i;
    for (i = 0; i < tam; i++) 
        printf("%d\t", *(vet + i) );
    printf("\n");   
}

int main(void) {

    int vet[10] = {48, 22, 59, 78, 56, 51, 26, 89, 71, 46};

    printer(vet, 10);
    return 0;
}