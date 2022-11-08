#include <stdio.h>
#include <stdlib.h>

int biggest(int vet[], int tam, int index) {//45,70
    if (tam == 0) 
        return vet[index];
    else if (vet[tam - 1] > vet[index]) 
        return biggest(vet, tam - 1, tam - 1);
    else
        return biggest(vet, tam - 1, index);
}

int main(void) {
    int vet[10] = { 11, 258, 13, 445, 58, 67, 7, 8, 9, 10};

    printf("The biggest: %i\n", biggest(vet, 10, 0));

    return 0;
}