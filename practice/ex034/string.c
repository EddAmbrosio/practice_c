#include <stdio.h>
#include <string.h>

int main(void) {
    char name[16];
    char name2[16] = "Penélope";
    char name3[16] = "Isabelle";
    char name4[16]; 
    char name5[16];
    char name6[16];

    printf("Type your name: ");
    scanf("%s", name4);
    printf("\nName4: %s\n", name4);

    strcpy(name,"Penny my lover!");
    strcpy(name2, name3);
    strcpy(name5, name4);
    //strcpy(string_Destino, string_origem);

    strncpy(name6, name2, 4);

    printf("\nName5: %s\n", name5);
    printf("\nName6: %s\n", name6);


    printf("\nName: %s\n", name);
    printf("\nName: %s\n", name2);
    printf("\nName: %s\n", name3);
    return 0;
}