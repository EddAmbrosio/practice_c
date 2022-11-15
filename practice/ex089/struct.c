#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dateBorn {
    int day = 0;
    int month = 0;
    int year = 0;

} Born;

typedef struct person {
    Born date;
    int age;
    char sex;
    char name[101];
} Person;

int main(void) {
    Person perp1;
    printf("Type your name: ");
    fgets(perp1.name, 101, stdin);
    printf("Type your age: ");
    scanf("%d", &perp1.age);
    scanf("%c", &perp1.sex);
    printf("Type f for female and m for male: ");
    scanf("%c", &perp1.sex);
    printf("Type your date of born: dd/mm/yy ");
    scanf("%d %d %d", &perp1.date.day, &perp1.date.month, &perp1.date.year);

    printf("Name: %s\n Sex: %c\n Age: %d\n", perp1.name, perp1.sex, perp1.age);
    printf("Date of born: %d/%d/%d\n", perp1.date.day, perp1.date.month, perp1.date.year);
    return 0;
}