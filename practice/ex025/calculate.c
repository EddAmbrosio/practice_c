#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main() {
    double num1, num2, result;
    char op = 0;

    do {
        num1 = num2 = result = 0;
        printf("\n (1) Plus\n");
        printf("\n (2) Subtration\n");
        printf("\n (3) Multiplication\n");
        printf("\n (4) Dividir\n");

        printf("Inform tbe operation: \n");
        op = getchar();

        printf("Type the first number: \n\t");
        scanf("%f", &num1);
        printf("Type the second number: \n\t");
        scanf("%f", &num2);
    } while (op !='0');

}