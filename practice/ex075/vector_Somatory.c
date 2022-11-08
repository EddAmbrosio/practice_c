#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int vetSomatory(int* vect, int tam) {
    if (tam == 0) 
        return 0;
    else {
        return vect[tam - 1] + vetSomatory(vect, tam - 1);
    }
}

int main(void) {
    srand(time(NULL));
    int vet[10];
    

    for (int i = 0; i < 10; i++)
        vet[i] = rand() % 100; //gera numbers for the vector
    
    for (int i = 0; i < 10; i++)
        printf("%i  ", vet[i]);

    printf("The plus of the numbers in the vector is: %i\n", vetSomatory(vet, 10));

    return 0;
}