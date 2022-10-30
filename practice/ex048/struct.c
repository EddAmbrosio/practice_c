#include <stdio.h>
#include <string.h>

typedef struct {
    int age;
    char sex;
    char name[100];
} persona;

struct persona2 {
    int age;
    char sex;
    char name[100];
};
int main(void) {
    persona person;

    person.age = 21;
    person.sex = 'f';
    strcpy(person.name, "Penélope Isabelle");

    printf("Name: %s \t\t Age: %i \t\t Sex: %c", person.name, person.age, person.sex);

    return 0;
}