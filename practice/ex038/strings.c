#include <stdio.h>
#include <strings.h>

int main(void) {
    char name[60];
    //name = "Penélope, my love!";

    strcpy(name, "Penelope, my love!");
    //strcpy(string_Destino, string_Origem);
    printf("Name: %s", name);

    return 0;
}