#include <stdio.h>
#include <stdlib.h>

typedef struct no {
    int value;
    struct no *next
}No;


int main(void) {

    return 0;
}

/* 

int value = 10, lowerThan, biggerThan, vet[] = {50, 10, 250, 500, 25};
    int* p;
    p = &value;

    printf("Value: %i\t Address of Value: %p\n", value, &value);
    printf("Address of p: %p\n", &p);
    printf("Content of p: %p\n", p);
    printf("Content of p: %i\n", *p);

    findOutVectors(vet, &lowerThan, &biggerThan, 5);
    printf("\nIn the main, the biggest n is: %i\t The smallest n is: %i\n", biggerThan, lowerThan);


void findOutVectors(int* v, int* lt, int* bt, int tam) {
        int i;
        *lt = v[0];
        *bt = v[0];
        for (i = 0; i < tam; i++) {
            if(v[i] < *lt) 
                *lt = v[i];
            else if (v[i] > *bt)
                *bt = v[i];
        }
        printf("In the function, the biggest n is: %i\t The smallest n is: %i\n", *bt, *lt);
}
*/


