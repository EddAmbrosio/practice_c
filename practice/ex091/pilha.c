#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int day, mont, year;

} Data;

typedef struct {
    char name[50];
    Data date;
} Person;

typedef struct no {
    Person p;
    struct no* next;
} No;

Person readP () {
    Person p;

    printf("Type name and date of born dd mm yyyy:\n");
    scanf("%49[^\n] %d%d%d", &p.date.day, &p.date.mont, &p.date.year);

    return p;
}

void printP () {
    Person p;
    printf("\nName: %s\nDate: %2d/%2d/%4d\n", p.name, &p.date.day, &p.date.mont, &p.date.year);
}

No* push (No* top) {
    No* new = malloc(sizeof(No));
    if(new) {
        new->p = readP(); 
        new->next = top;
        return new;

    } else 
        printf("We couldn't alocate the memory!");
    return NULL;
}
int main(void) {
    No *top = NULL;
    int option;

    do {
        printf("\n0 - Exit\n1 - Push\n2 - Pop\n3 Print\n");
        scanf("%d", &option);
        getchar();

        switch(option) {
            case 1:
                top = push(top);
                break;
            case 2:
                break;
            case 3:
                break; 
            default:
                if (option != 0)
                    printf("Try one of these numbers 0, 1, 2, 3!");
        }
    } while(option != 0);

    return 0;
}