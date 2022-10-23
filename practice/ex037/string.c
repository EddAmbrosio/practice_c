#include <stdio.h>
#include <string.h>

int main(void) {
    char name[10];
    printf("Type your name: ");
    fgets(name, 10, stdin); //string reading

    printf("The name stored was: %s", name);
}