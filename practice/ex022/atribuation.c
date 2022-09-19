#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;
    
    while (x < 11) {
        printf("msg: %i\n", x + 1);
        x += 1;
    }

    /*
    1º += >>> soma
    2º -= >>> subtração
    3º *= >>> multiplicação
    4º /= >>> divisão
    5º %= >>> resto da divisão
    */

   int i = 50;
   printf("\nPlus: %i\n", i += 100);
   printf("Subtration: %i\n", i -= 50);
   printf("Multiplication: %i\n", i *= 3);
   printf("divition: %i\n", i /= 3);
   printf("Resto: %i\n", i%= 3);
    return 0;
}