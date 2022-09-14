#include <stdio.h>

int main() {
    // printf("%output_type", printer_type);
    // printf("%type01 %type02", var01, var02);

    int num = 141;
    printf("%i \n", num);

    float f = 2.2;
    printf("%f \n", f);

    //integer %i or %d
    //float / double %f
    //char %c
    //string %s

    //%u number modulo
    //%p memory address
    //%e or %E to printer a number with scientific notation
    //%% to pinrter only percent symbol

    int x = 10;
    printf("%i \n", x);

    float ff = 4.12;
    printf("%f \n", ff);

    printf("%i \n %f \n", x, ff);

    return 0;
}