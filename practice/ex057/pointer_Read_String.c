#include <stdio.h>

int main(void) {
    char sentence[100];

    //scanf("%100[^\n]", sentence);
    //printf("%s\n", sentence);

    printf("%p\n", sentence);//memory address of the first position
    printf("%p\n", &sentence);//memory address of the first position
    printf("%p\n", &sentence[0]);//memory address of the first position
    return 0;
}