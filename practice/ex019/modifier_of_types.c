#include <stdio.h>
#include <stdlib.h>

int main() {
    int i = 10;
    unsigned short int u;
    printf("Variable u >>>>%i\n", sizeof(u));
    printf("Variable i >>>>%i", sizeof(i));

    /*
    1º char
    2º float
    3º double
    4º void
    5º int

    1º signed   >>>> + e -
    2º unsigned >>>> +
    3º long >>> increasing the capacity of store our variable
    4º short >>> decreasing the capacity of store our variable
    */

    return 0;
}