#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main(void) {
    int tam;
    char str1[10] = {"%"}, str2[10];

    printf("Type the size of the vector: ");
    scanf("%i", &tam);
    scanf("%c");

    //sprintf(str2, "%i[^\n]", tam); //sprintf(destine, typeData, orign);
    snprintf(str2, 10, "%i[^\n]", tam); //snprintf(destine, size, typeData, orign);
    strcat(str1, str2);

    printf("%s\n", str2);
    
    char words[tam];
    printf("Type a sentence: ");
    scanf(str1, words); 
    printf("%s\n", words); 
    
    return 0;
}