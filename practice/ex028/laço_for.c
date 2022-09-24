#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>


/*
    for(part1; part2 part3) {
        part1 > declara a variavel de inicío, obs: a variavel é local.
        part2 > condição
        part3 > incremento e decremento da variavel
    }
*/
int main(void) {
    for (int i = 1; i != 11; i++) {
        printf("%i\n", i);
    }
    return 0;
}