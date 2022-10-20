#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int main(void) {
    /*

    association left to right
    1º) ()
    2º) *, /, %
    3º) +, -
    4º) <, <=, >, >=
    5º) ==, !=

    association right to left
    1º) --, ++
    2º) =, +=, -=, *=, %=
    */

   int a, b, c;
   a = b = c = 1;
   printf("\n%i\n", a);
   printf("\n%i\n", b);
   printf("\n%i\n", c);

    return 0;
}

