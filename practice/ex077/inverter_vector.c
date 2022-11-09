#include <stdio.h>
#include <stdlib.h>

void toSwitch(int v[], int ini, int end) {
    int aux;
    if(ini < end) {
        aux = v[ini];
        v[ini] = v[end];
        v[end] = aux;
        toSwitch(v, ini + 1, end - 1);
    }
}


void print(int* vec, int tam) {
    if (tam == 1) 
        printf("%i", vec[tam - 1]);
    else {
        print(vec, tam - 1);
        printf("%i", vec[tam - 1]);
    }
}
    


int main(void) {
    int vet[10] = {1,2,3,4,5,6,7,8,9,10};

    print(vet, 10); 
    toSwitch(vet, 0, 9);
    printf("\n\n");
    print(vet, 10);
    return 0;
}