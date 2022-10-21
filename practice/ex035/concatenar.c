#include <stdio.h>
#include <string.h>

int main(void) {
    char str[50] = "Cource";
    char str1[50] = " of progammer 2022";
    strncat(str, str1, 12);
    printf("str = %s", str); //contatena str with 15 digits of str1
    
    return 0;
}