#include <stdio.h>
#include <string.h>

int main(void) {
    char str[25];
    int width;

    strcpy(str, "Penelope, my lover!");

    width = strlen(str);
    printf("The width of the string stored in str is: %i \n", width);
    return 0;
}