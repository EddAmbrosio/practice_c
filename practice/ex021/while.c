#include <stdio.h>
#include <stdlib.h>

int main() {
    int x = 0;
    int valTyped = 0;
    printf("How many times do you want to run the program: ");
    scanf("%i", &valTyped);

    while (x < valTyped) {
        printf("%i\n", x * 10);
        x = x + 1;
    }

    return 0;
}