#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void reverse(char* vet) {
    int i, aux, end, tam = strlen(vet);
    end = tam - 1;
    for (i = 0; i < tam/2; i++) {
        aux = vet[i];
        vet[i] = vet[end];
        vet[end] = aux;
        end--;
    }
}

char* reverse1(char* vet) {
    int i, aux, end, tam = strlen(vet);
    char* new = calloc(1, (tam + 1) * sizeof(vet));
    end = tam - 1;
    for (i = 0; i < tam; i++) {
        new[i] = vet[end];
        end--;
    }
    new[i] = '\0';
    return new;
}


int main(void) {
        char words[25] = {"Penny, you're so beautifull!"};
        char* p;

        printf("%s\n", words);
        //reverse(words);
        printf("%s\n", words);
        
        p = reverse1(words);
        printf("%s\n", p);
    return 0;
}