#include <stdio.h>

int main(void) {
    char str[50];

   printf("Enter a string : ");
   gets(str);

   printf("You entered: %s", str);
    return 0;
}