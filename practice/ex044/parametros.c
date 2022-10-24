#include <stdio.h>

int soma10(int x) {
    x += 10;
    return(x);
}

void soma10p(int* x) {
    *x += 10;
    return;
}
int main(void) {
    int num;
    printf("Type an intenger number: ");
    scanf("%i", &num);

    printf("\nThe number typed was: %i\n", num);

    num = soma10(num);
    printf("Now the number is: %i \n", num);

    soma10p(&num);
    printf("Now the number is: %i \n", num);
    return 0;
}