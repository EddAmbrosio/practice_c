#include <stdio.h>
#include <stdlib.h>

int main() {
    int num1, num2;
    num1 = 15;
    num2 = 20;

    int soma = num1 + num2;
    printf("The result of the plus is: %i \n", soma);

    int sub = num2 - num1;
    printf("The result of the subtration is: %i \n", sub);
    

    int mult = num1 * num2;
    printf("%i \n", mult);

    int div = num2 / 3;
    printf("%i \n", div);
    return 0;
}