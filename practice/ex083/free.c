#include <stdlib.h>
#include <time.h>

/*
        dinamyc memory alocating with the realoc fuction
        return a pointer to a new region of memory
        if the pointer is NULL, it alocates memory
        if the new size is zero, the memory is freeled
        if there's no enough memory it returns NULL
*/

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

        printf("\nType a new value to the vector: ");
        scanf("%i", &tam);

        vet = realloc(vet, tam);

        printf("Vector reallocated!\n");
        for(int i = 0; i < tam; i++)
            printf("%i ", *(vet + i));
        printf("\n");
        free(vet);
    }
    else {
        printf("ERROR at trying to alocate the memory!!!");
    }
    return 0;
}