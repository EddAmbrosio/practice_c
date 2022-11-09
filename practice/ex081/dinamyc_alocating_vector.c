#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void) {
    int* vet, tam;
    srand(time(NULL));

    printf("Type the size of the vector: ");
    scanf("%i", &tam);

    vet = calloc(1, tam * sizeof(tam));

    if(vet) {
        for(int i = 0; i < tam; i++)
            *(vet + i) = rand() % 100;
        for(int i = 0; i < tam; i++)
            printf("%i ", *(vet + i));
    }
    else {
        printf("ERROR at trying to alocate the memory!!!");
    }
    return 0;
}