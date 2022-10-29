#include <stdio.h>

int main () {
   char c;
 
   printf("Enter character: ");
   c = getchar();
 
   printf("Character entered: ");
   //printf("%c", c);
   putchar(c);

   return(0);
}