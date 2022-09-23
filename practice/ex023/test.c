#include <stdio.h>
#include <stdlib.h>

int main() {
    float num = 1;
    float plus = 0; 
    int cont = 0;
    while (num != 0) {
        printf("Please, type any number: ");
        scanf("%f", &num);
        cont += 1;
        plus += num;
    }
    num -= 1;
    printf("\nThe plus of the numbers in the sequence is: %f", plus);
    printf("\nThe total of the numbers typed is: %i", cont);
    return 0;
}