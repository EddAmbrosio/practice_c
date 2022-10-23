#include <stdio.h>
#include <string.h>

int main(void) {
    char str1[25] = "Cource of C";
    char str2[25] = "Cource of Java";
    int retorno;
    int retorno1;

    retorno = strcmp(str1, str2);
    retorno1 = strncmp(str1, str2, 11);

    /*
        0: content of both strings are the same;
        < 0: content of str1 is smaller than str2;
        > 0: conten of str1 is bigger than str2;
    */

   printf("Retorno = %i\n", retorno);
   printf("Retorno1 = %i\n", retorno1);
    return 0;
}

