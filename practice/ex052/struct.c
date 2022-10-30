#include <stdio.h>
#include <string.h>

typedef struct {
    int day, month, year;
} date;

typedef struct {
    date dat;
    int age;
    char sex;
    char name[100];

} persona;

void printerPeople(persona p) {
    printf("\n");
    printf("\tName: %s\n", p.name);
    printf("\tAge: %i\n", p.age);
    printf("\tSex: %c\n", p.sex);
    printf("\tDate of Born: %d/%d/%d", p.dat.day, p.dat.month, p.dat.year);
}

persona readPerson() {
    persona people;

    printf("Type your name: ");
    fgets(people.name, 100, stdin);
    
    printf("Type your age: ");
    scanf("%i", &people.age);
    
    printf("Type f or m for your sex: ");
    scanf("%c", &people.sex); // for the space
    people.sex = getchar(); //getchar() reads a single character from the standard input

    printf("Type your date of born in the formact dd mm aaaa: ");
    scanf("%d %d %d", &people.dat.day, &people.dat.month, &people.dat.year);
    
    return people;
}

int main(void) {
    persona people; // a variable 'people' from type 'persona'

    people = readPerson();
    printerPeople(people);

    return 0;
}