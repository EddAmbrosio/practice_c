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

int main(void) {
    persona people; // a variable 'people' from type 'persona'

    printf("Type your name: ");
    fgets(people.name, 100, stdin);

    printf("Type your age: ");
    scanf("%i", &people.age);
    
    printf("Type f or m for your sex: ");
    scanf("%c", &people.sex);
    people.sex = getchar(); //getchar() reads a single character from the standard input
    printf("Type your date of born in the formact dd mm aaaa: ");
    scanf("%d %d %d", &people.dat.day, &people.dat.month, &people.dat.year);
    printf("Name: %s \n Age: %i \t\n Sex: %c \t\n", people.name, people.age, people.sex);
    printf("Data de nasc.: %d/%d/%d", people.dat.day, people.dat.month, people.dat.year);
    return 0;
}