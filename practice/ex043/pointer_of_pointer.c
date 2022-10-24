#include <stdio.h>

int main(void) {
    int* ptrx;
    int** pptrx;
    int x = 0;
    printf("The content of the variable x is: %i\n", x);
    printf("The address of the variable x is: %x\n", &x);

    ptrx = &x; //ptrx points to x
    pptrx = &ptrx; //pptrx points to pptrx
    *ptrx += 10;
    printf("Address pointed by ptrx: %x\n", ptrx);
    printf("Address pointed by pptrx: %x\n", pptrx);
    printf("The content of the variable x is: %i\n", *ptrx);
    printf("The content of the variable x is: %i\n", **pptrx);
    

    return 0;
}