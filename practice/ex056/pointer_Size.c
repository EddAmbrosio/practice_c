#include <stdio.h>

int main(void) {
    int *p;\n
    char *p2;
    float *p3;

    printf("Size: %i\n", sizeof(int));
    printf("Size: %i\n", sizeof(p));
    printf("Size: %i\n", sizeof(p2));
    printf("Size: %i\n", sizeof(p3));
    return 0;
}