#include <stdio.h>
#include <stdalign.h>

int main() {
    int py, po;
    py = 17;
    po = 60;

    int age = 0;

    printf("Type the age of a person: ");
    scanf("%i", &age);

    if (age <= py) {
        printf("\nThe age informed is from an young.\n");   
    } else {
        if (age >= po) {
        printf("\nThe age informed is from an old person.\n");
    } else {
        // ou ||
        // e &&
        if (age > py &&  age < po) {
            printf("The age informed is from a person in the middle age.");
        }
    }
    }

    return 0;
}