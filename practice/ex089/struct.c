#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct dateBorn {
    int day;
    int month;
    int year;

} Born;

typedef struct person {
    Born date;
    int age;
    char sex;
    char name[101];
} Person;

Person readP () {
    Person perp01;
    char c[10]; //for the buff of the keybord
    printf("Type your name: ");
    fgets(perp01.name, 101, stdin);
    printf("Type your age: ");
    scanf("%d", &perp01.age);
    scanf("%c", &perp01.sex);
    printf("Type f for female and m for male: ");
    scanf("%c", &perp01.sex);
    printf("Type your date of born: dd/mm/yy ");
    scanf("%d%d%d", &perp01.date.day, &perp01.date.month, &perp01.date.year);
    fgets(c, 10, stdin);
    return perp01;
}

void printP (Person p) {
    printf("\n\n");
    printf("\tName: %s \n", p.name);
    printf("\tAge: %i \n", p.age);
    printf("\tSex: %c \n", p.sex);
    printf("\tDate: %i/%i/%i \n", p.date.day, p.date.month, p.date.year);
    printf("\n\n");
}

int main(void) {
    Person perp1[3];// each part of the evector has the full struct Person
    for (int i = 0; i < 3; i++)
        perp1[i] = readP(); //it's going to read the input

    for (int k = 0; k < 3; k++)
        printP(perp1[k]); //it's going to show the output

  /* Person perp2;
    printf("Type your name: ");
    fgets(perp2.name, 101, stdin);
    printf("Type your age: ");
    scanf("%d", &perp2.age);
    scanf("%c", &perp2.sex);
    printf("Type f for female and m for male: ");
    scanf("%c", &perp2.sex);
    printf("Type your date of born: dd/mm/yy ");
    scanf("%d%d%d", &perp2.date.day, &perp2.date.month, &perp2.date.year);
  */
    //printP(perp2);
    return 0;
}