#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Calculator 1.0 \n");
    int num1, num2, soma, sub, mult, divi = 0;
    scanf("%i%i", &num1, &num2);

    soma = num1 + num2;
    sub = num1 - num2;
    mult = num1 * num2;
    divi = num2 / num1;

    printf("The plus is: %i \n", soma);
    printf("The subtration is: %i \n", sub);
    printf("The multiplication is: %i \n", mult);
    printf("The divisation is: %i \n", divi);

    return 0;
}
